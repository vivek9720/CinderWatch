#include "cinderwatch/policy/policy.h"
#include <sstream>
#include <set>
namespace cinderwatch::policy {

core::Finding expanded_policy_profile_0(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 0", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_1(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 1", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_2(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 2", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_3(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 3", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_4(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 4", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_5(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 5", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_6(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 6", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_7(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 7", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_8(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 8", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_9(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 9", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_10(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 10", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_11(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 11", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_12(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 12", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_13(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 13", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_14(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 14", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_15(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 15", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_16(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 16", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_17(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 17", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_18(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 18", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_19(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 19", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_20(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 20", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_21(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 21", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_22(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 22", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_23(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 23", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_24(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 24", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_25(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 25", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_26(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 26", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_27(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 27", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_28(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 28", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_29(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 29", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_30(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 30", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_31(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 31", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_32(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 32", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_33(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 33", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_34(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 34", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_35(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 35", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_36(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 36", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_37(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 37", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_38(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 38", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_39(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 39", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_40(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 40", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_41(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 41", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_42(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 42", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_43(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 43", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_44(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 44", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_45(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 45", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_46(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 46", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_47(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 47", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_48(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 48", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_49(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 49", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_50(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 50", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_51(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 51", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_52(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 52", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_53(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 53", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_54(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 54", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_55(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 55", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_56(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 56", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_57(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 57", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_58(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 58", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_59(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 59", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_60(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 60", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_61(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 61", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_62(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 62", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_63(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 63", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_64(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 64", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_65(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 65", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_66(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 66", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_67(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 67", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_68(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 68", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_69(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 69", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_70(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 70", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_71(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 71", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_72(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 72", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_73(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 73", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_74(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 74", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_75(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 75", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_76(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 76", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_77(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 77", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_78(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 78", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_79(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 79", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_80(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 80", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_81(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 81", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_82(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 82", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_83(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 83", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_84(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 84", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_85(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 85", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_86(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 86", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_87(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 87", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_88(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 88", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_89(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 89", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_90(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 90", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_91(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 91", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_92(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 92", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_93(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 93", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_94(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 94", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_95(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 95", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_96(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 96", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_97(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 97", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_98(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 98", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_99(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 99", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_100(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 100", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_101(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 101", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_102(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 102", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_103(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 103", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_104(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 104", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_105(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 105", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_106(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 106", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_107(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 107", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_108(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 108", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_109(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 109", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_110(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 110", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_111(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 111", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_112(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 112", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_113(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 113", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_114(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 114", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_115(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 115", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_116(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 116", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_117(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 117", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_118(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 118", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_119(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 119", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_120(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 120", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_121(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 121", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_122(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 122", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_123(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 123", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_124(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 124", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_125(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 125", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_126(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 126", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_127(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 127", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_128(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 128", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_129(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 129", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_130(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 130", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_131(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 131", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_132(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 132", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_133(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 133", detail, item.loc, item.values};
}

core::Finding expanded_policy_profile_134(const Item& item) {
    core::Severity severity = core::Severity::Info;
    std::string detail = "Policy item accepted";
    for (const auto& value : item.values) {
        if (item.key.find("network") != std::string::npos && !core::parse_cidr(value)) {
            severity = core::Severity::Medium;
            detail = "Network value did not parse as CIDR";
        }
        if (item.key.find("domain") != std::string::npos && !core::domain_like(value)) {
            severity = core::Severity::Low;
            detail = "Domain value did not match expected shape";
        }
        if (item.key.find("port") != std::string::npos && !core::parse_port_range(value)) {
            severity = core::Severity::Medium;
            detail = "Port value did not parse as a range";
        }
    }
    return {severity, "policy-profile", "Expanded policy profile 134", detail, item.loc, item.values};
}
}
