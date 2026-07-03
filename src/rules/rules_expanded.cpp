#include "cinderwatch/rules/rules.h"
#include <sstream>
#include <set>
namespace cinderwatch::rules {

core::Finding expanded_rule_profile_0(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(0))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 0", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_1(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(19))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 1", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_2(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(38))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 2", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_3(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(57))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 3", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_4(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(76))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 4", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_5(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(95))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 5", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_6(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(114))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 6", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_7(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(133))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 7", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_8(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(152))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 8", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_9(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(171))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 9", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_10(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(190))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 10", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_11(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(209))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 11", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_12(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(228))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 12", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_13(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(247))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 13", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_14(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(266))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 14", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_15(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(285))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 15", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_16(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(304))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 16", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_17(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(323))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 17", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_18(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(342))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 18", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_19(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(361))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 19", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_20(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(380))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 20", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_21(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(399))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 21", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_22(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(418))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 22", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_23(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(437))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 23", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_24(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(456))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 24", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_25(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(475))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 25", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_26(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(494))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 26", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_27(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(513))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 27", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_28(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(532))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 28", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_29(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(551))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 29", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_30(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(570))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 30", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_31(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(589))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 31", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_32(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(608))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 32", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_33(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(627))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 33", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_34(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(646))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 34", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_35(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(665))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 35", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_36(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(684))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 36", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_37(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(703))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 37", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_38(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(722))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 38", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_39(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(741))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 39", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_40(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(760))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 40", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_41(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(779))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 41", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_42(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(798))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 42", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_43(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(817))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 43", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_44(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(836))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 44", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_45(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(855))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 45", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_46(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(874))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 46", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_47(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(893))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 47", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_48(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(912))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 48", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_49(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(931))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 49", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_50(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(950))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 50", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_51(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(969))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 51", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_52(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(988))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 52", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_53(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1007))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 53", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_54(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1026))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 54", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_55(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1045))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 55", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_56(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1064))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 56", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_57(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1083))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 57", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_58(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1102))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 58", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_59(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1121))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 59", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_60(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1140))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 60", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_61(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1159))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 61", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_62(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1178))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 62", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_63(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1197))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 63", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_64(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1216))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 64", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_65(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1235))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 65", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_66(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1254))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 66", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_67(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1273))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 67", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_68(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1292))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 68", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_69(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1311))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 69", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_70(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1330))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 70", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_71(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1349))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 71", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_72(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1368))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 72", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_73(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1387))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 73", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_74(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1406))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 74", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_75(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1425))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 75", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_76(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1444))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 76", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_77(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1463))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 77", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_78(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1482))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 78", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_79(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1501))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 79", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_80(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1520))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 80", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_81(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1539))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 81", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_82(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1558))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 82", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_83(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1577))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 83", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_84(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1596))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 84", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_85(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1615))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 85", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_86(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1634))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 86", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_87(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1653))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 87", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_88(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1672))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 88", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_89(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1691))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 89", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_90(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1710))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 90", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_91(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1729))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 91", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_92(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1748))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 92", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_93(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1767))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 93", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_94(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1786))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 94", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_95(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1805))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 95", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_96(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1824))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 96", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_97(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1843))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 97", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_98(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1862))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 98", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_99(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1881))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 99", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_100(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1900))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 100", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_101(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1919))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 101", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_102(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1938))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 102", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_103(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1957))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 103", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_104(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1976))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 104", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_105(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(1995))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 105", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_106(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2014))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 106", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_107(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2033))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 107", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_108(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2052))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 108", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_109(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2071))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 109", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_110(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2090))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 110", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_111(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2109))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 111", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_112(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2128))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 112", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_113(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2147))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 113", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_114(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2166))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 114", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_115(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2185))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 115", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_116(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2204))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 116", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_117(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2223))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 117", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_118(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2242))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 118", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_119(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2261))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 119", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_120(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2280))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 120", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_121(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2299))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 121", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_122(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2318))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 122", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_123(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2337))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 123", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_124(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2356))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 124", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_125(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2375))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 125", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_126(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2394))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 126", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_127(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2413))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 127", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_128(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2432))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 128", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_129(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2451))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 129", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_130(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2470))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 130", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_131(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2489))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 131", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_132(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2508))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 132", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_133(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2527))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 133", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_134(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2546))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 134", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_135(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2565))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 135", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_136(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2584))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 136", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_137(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2603))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 137", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_138(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2622))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 138", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_139(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2641))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 139", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_140(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2660))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 140", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_141(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2679))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 141", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_142(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2698))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 142", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_143(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2717))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 143", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_144(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2736))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 144", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_145(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2755))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 145", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_146(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2774))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 146", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_147(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2793))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 147", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_148(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2812))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 148", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_149(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2831))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 149", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_150(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2850))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 1 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 150", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_151(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2869))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 2 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 151", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_152(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2888))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 3 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 152", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_153(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2907))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 4 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 153", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}

core::Finding expanded_rule_profile_154(const FirewallRule& firewall, const IdsRule& ids) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Rule profile accepted";
    if (firewall.proto == "tcp" && firewall.has_dport && firewall.dport.contains(static_cast<uint16_t>(2926))) {
        severity = core::Severity::Low;
        detail = "Firewall TCP port matched monitored profile";
    }
    size_t content_count = 0;
    for (const auto& option : ids.options) {
        if (option.key == "content") {
            content_count++;
        }
    }
    if (ids.priority > 0 && ids.priority <= 5 && content_count == 0) {
        severity = core::Severity::Medium;
        detail = "IDS profile has priority without content condition";
    }
    return {severity, "rule-profile", "Expanded rule profile 154", detail, {"", firewall.line, 1, 0}, {firewall.raw, ids.raw}};
}
}
