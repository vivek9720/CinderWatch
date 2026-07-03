#!/bin/bash -eu
SRC=$(cd "$(dirname "$0")/.." && pwd)
cd "$SRC"
COMMON="src/core/core.cpp src/core/core_profiles.cpp src/packet/packet.cpp src/packet/packet_profiles.cpp src/ioc/ioc.cpp src/ioc/ioc_profiles.cpp src/rules/firewall.cpp src/rules/ids.cpp src/rules/rules_profiles.cpp src/policy/policy.cpp src/policy/policy_profiles.cpp src/cli/cli.cpp src/cli/cli_profiles.cpp"
for t in pcap_fuzzer dns_fuzzer ioc_fuzzer firewall_rules_fuzzer ids_rules_fuzzer policy_fuzzer; do
  $CXX $CXXFLAGS -std=c++17 -Iinclude fuzz/${t}.cc $COMMON $LIB_FUZZING_ENGINE -o $OUT/$t
done
