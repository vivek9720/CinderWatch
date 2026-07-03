#include "cinderwatch/packet/packet.h"
#include <sstream>
#include <set>
namespace cinderwatch::packet {

core::Finding expanded_packet_profile_0(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(0)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(0)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 24) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 0", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_1(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(17)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(29)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 25) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 1", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_2(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(34)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(58)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 26) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 2", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_3(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(51)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(87)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 27) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 3", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_4(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(68)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(116)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 28) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 4", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_5(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(85)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(145)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 29) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 5", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_6(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(102)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(174)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 30) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 6", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_7(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(119)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(203)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 31) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 7", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_8(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(136)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(232)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 32) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 8", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_9(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(153)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(261)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 33) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 9", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_10(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(170)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(290)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 34) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 10", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_11(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(187)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(319)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 35) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 11", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_12(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(204)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(348)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 36) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 12", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_13(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(221)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(377)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 37) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 13", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_14(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(238)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(406)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 38) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 14", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_15(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(255)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(435)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 39) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 15", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_16(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(272)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(464)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 40) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 16", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_17(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(289)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(493)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 41) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 17", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_18(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(306)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(522)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 42) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 18", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_19(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(323)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(551)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 43) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 19", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_20(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(340)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(580)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 44) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 20", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_21(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(357)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(609)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 45) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 21", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_22(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(374)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(638)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 46) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 22", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_23(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(391)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(667)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 47) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 23", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_24(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(408)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(696)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 48) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 24", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_25(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(425)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(725)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 49) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 25", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_26(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(442)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(754)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 50) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 26", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_27(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(459)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(783)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 51) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 27", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_28(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(476)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(812)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 52) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 28", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_29(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(493)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(841)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 53) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 29", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_30(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(510)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(870)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 54) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 30", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_31(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(527)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(899)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 55) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 31", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_32(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(544)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(928)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 56) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 32", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_33(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(561)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(957)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 57) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 33", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_34(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(578)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(986)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 58) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 34", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_35(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(595)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1015)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 59) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 35", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_36(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(612)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1044)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 60) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 36", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_37(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(629)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1073)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 61) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 37", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_38(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(646)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1102)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 62) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 38", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_39(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(663)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1131)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 63) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 39", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_40(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(680)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1160)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 64) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 40", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_41(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(697)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1189)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 65) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 41", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_42(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(714)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1218)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 66) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 42", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_43(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(731)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1247)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 67) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 43", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_44(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(748)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1276)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 68) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 44", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_45(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(765)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1305)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 69) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 45", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_46(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(782)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1334)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 70) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 46", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_47(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(799)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1363)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 71) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 47", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_48(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(816)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1392)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 72) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 48", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_49(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(833)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1421)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 73) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 49", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_50(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(850)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1450)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 74) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 50", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_51(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(867)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1479)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 75) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 51", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_52(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(884)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1508)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 76) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 52", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_53(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(901)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1537)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 77) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 53", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_54(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(918)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1566)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 78) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 54", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_55(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(935)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1595)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 79) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 55", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_56(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(952)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1624)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 80) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 56", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_57(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(969)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1653)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 81) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 57", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_58(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(986)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1682)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 82) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 58", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_59(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1003)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1711)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 83) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 59", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_60(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1020)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1740)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 84) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 60", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_61(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1037)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1769)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 85) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 61", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_62(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1054)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1798)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 86) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 62", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_63(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1071)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1827)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 87) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 63", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_64(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1088)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1856)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 88) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 64", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_65(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1105)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1885)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 89) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 65", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_66(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1122)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1914)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 90) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 66", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_67(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1139)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1943)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 91) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 67", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_68(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1156)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(1972)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 92) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 68", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_69(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1173)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2001)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 93) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 69", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_70(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1190)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2030)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 94) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 70", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_71(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1207)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2059)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 95) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 71", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_72(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1224)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2088)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 96) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 72", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_73(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1241)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2117)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 97) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 73", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_74(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1258)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2146)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 98) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 74", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_75(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1275)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2175)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 99) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 75", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_76(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1292)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2204)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 100) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 76", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_77(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1309)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2233)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 101) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 77", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_78(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1326)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2262)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 102) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 78", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_79(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1343)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2291)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 103) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 79", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_80(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1360)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2320)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 104) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 80", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_81(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1377)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2349)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 105) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 81", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_82(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1394)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2378)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 106) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 82", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_83(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1411)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2407)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 107) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 83", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_84(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1428)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2436)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 108) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 84", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_85(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1445)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2465)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 109) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 85", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_86(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1462)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2494)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 110) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 86", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_87(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1479)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2523)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 111) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 87", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_88(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1496)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2552)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 112) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 88", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_89(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1513)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2581)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 113) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 89", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_90(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1530)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2610)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 114) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 90", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_91(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1547)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2639)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 115) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 91", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_92(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1564)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2668)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 116) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 92", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_93(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1581)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2697)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 117) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 93", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_94(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1598)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2726)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 118) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 94", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_95(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1615)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2755)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 119) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 95", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_96(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1632)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2784)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 120) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 96", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_97(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1649)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2813)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 121) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 97", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_98(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1666)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2842)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 122) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 98", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_99(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1683)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2871)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 123) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 99", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_100(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1700)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2900)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 24) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 100", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_101(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1717)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2929)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 25) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 101", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_102(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1734)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2958)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 26) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 102", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_103(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1751)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(2987)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 27) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 103", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_104(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1768)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3016)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 28) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 104", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_105(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1785)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3045)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 29) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 105", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_106(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1802)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3074)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 30) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 106", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_107(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1819)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3103)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 31) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 107", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_108(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1836)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3132)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 32) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 108", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_109(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1853)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3161)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 33) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 109", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_110(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1870)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3190)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 34) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 110", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_111(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1887)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3219)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 35) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 111", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_112(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1904)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3248)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 36) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 112", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_113(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1921)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3277)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 37) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 113", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_114(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1938)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3306)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 38) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 114", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_115(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1955)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3335)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 39) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 115", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_116(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1972)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3364)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 40) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 116", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_117(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(1989)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3393)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 41) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 117", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_118(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2006)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3422)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 42) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 118", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_119(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2023)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3451)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 43) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 119", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_120(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2040)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3480)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 44) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 120", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_121(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2057)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3509)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 45) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 121", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_122(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2074)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3538)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 46) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 122", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_123(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2091)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3567)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 47) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 123", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_124(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2108)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3596)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 48) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 124", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_125(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2125)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3625)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 49) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 125", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_126(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2142)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3654)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 50) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 126", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_127(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2159)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3683)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 51) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 127", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_128(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2176)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3712)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 52) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 128", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_129(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2193)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3741)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 53) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 129", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_130(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2210)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3770)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 54) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 130", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_131(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2227)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3799)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 55) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 131", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_132(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2244)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3828)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 56) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 132", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_133(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2261)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3857)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 57) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 133", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_134(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2278)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3886)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 58) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 134", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_135(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2295)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3915)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 59) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 135", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_136(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2312)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3944)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 60) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 136", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_137(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2329)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(3973)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 61) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 137", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_138(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2346)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4002)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 62) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 138", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_139(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2363)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4031)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 63) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 139", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_140(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2380)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4060)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 64) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 140", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_141(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2397)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4089)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 65) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 141", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_142(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2414)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4118)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 66) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 142", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_143(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2431)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4147)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 67) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 143", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_144(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2448)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4176)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 68) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 144", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_145(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2465)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4205)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 69) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 145", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_146(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2482)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4234)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 70) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 146", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_147(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2499)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4263)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 71) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 147", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_148(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2516)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4292)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 72) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 148", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_149(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2533)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4321)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 73) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 149", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_150(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2550)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4350)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 74) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 150", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_151(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2567)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4379)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 75) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 151", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_152(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2584)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4408)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 76) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 152", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_153(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2601)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4437)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 77) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 153", detail, {}, {packet.src.text(), packet.dst.text()}};
}

core::Finding expanded_packet_profile_154(const PacketSummary& packet) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Packet profile accepted";
    if (packet.proto == 6 && packet.dp == static_cast<uint16_t>(2618)) {
        severity = core::Severity::Low;
        detail = "TCP destination port matched a monitored profile";
    }
    if (packet.proto == 17 && packet.sp == static_cast<uint16_t>(4466)) {
        severity = core::Severity::Low;
        detail = "UDP source port matched a monitored profile";
    }
    for (const auto& name : packet.dns) {
        if (name.size() > 78) {
            severity = core::Severity::Medium;
            detail = "DNS name exceeded profile threshold";
        }
    }
    return {severity, "packet-profile", "Expanded packet profile 154", detail, {}, {packet.src.text(), packet.dst.text()}};
}
}
