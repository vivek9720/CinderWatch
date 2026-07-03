# CinderWatch

CinderWatch is an offline defensive cybersecurity toolkit for inspecting packet captures, indicators, firewall rules, IDS signatures, and local security policy files. It is designed for security engineers and system administrators who need deterministic command-line checks without network access or external services.

## Overview

The project provides a reusable C++ library and a CLI for local artifact review. It parses bounded binary packet data, normalizes indicators, validates firewall posture, inspects IDS signatures, and converts policy files into actionable findings.

## Features

- PCAP parsing with Ethernet II, IPv4, TCP, UDP, and DNS summaries.
- IOC loading for IPv4 addresses, CIDR ranges, domains, URLs, and common hash formats.
- Offline matching of indicators against packet, rule, and policy artifacts.
- iptables-style and nftables-style firewall rule parsing and validation.
- Snort and Suricata style IDS signature parsing, validation, and canonical normalization.
- INI, JSON-style, and CSV-style defensive policy parsing.
- Human-readable and JSON-style reporting without third-party dependencies.

## Build Instructions

```sh
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

The build uses only the C++ standard library and does not download dependencies.

## CLI Usage

```sh
cinderwatch inspect-pcap capture.pcap
cinderwatch summarize-pcap capture.pcap --json
cinderwatch scan-ioc indicators.txt artifact.txt
cinderwatch validate-firewall firewall.rules
cinderwatch inspect-ids signatures.rules
cinderwatch normalize-ids signatures.rules
cinderwatch validate-policy policy.ini
cinderwatch audit-bundle ./security-bundle
```

## Example Commands

```sh
cinderwatch summarize-pcap examples/sample.pcap
cinderwatch scan-ioc examples/iocs.txt examples/signatures.rules
cinderwatch validate-firewall examples/firewall.rules
cinderwatch inspect-ids examples/signatures.rules --json
cinderwatch validate-policy examples/policy.ini
```

## Supported Artifact Types

- Classic PCAP files with Ethernet II frames.
- IPv4, TCP, UDP, and DNS packet data.
- Plaintext, CSV-style, and JSON-style IOC bundles.
- iptables-style and nftables-style firewall exports.
- Snort and Suricata style IDS signature subsets.
- INI, JSON-style, and CSV-style defensive policy files.

## Security Posture

CinderWatch performs local-only analysis. It does not open sockets, call external services, collect credentials, or execute artifact contents. Binary parsing is bounded and reports structured diagnostics for malformed inputs.

## Limitations

- IPv6 parsing is limited to textual policy and rule fields.
- PCAP-NG is not currently supported.
- TCP stream reassembly is not implemented.
- IDS option support focuses on a practical inspection subset.
- JSON-style parsing is intentionally small and geared toward local configuration bundles.

## Developer Testing

```sh
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build --config Debug
ctest --test-dir build --output-on-failure
```

Additional parser stress harnesses are included for maintainers who run sanitizer-based local QA.
