#include "cinderwatch/ioc/ioc.h"
#include <sstream>
#include <set>
namespace cinderwatch::ioc {

bool expanded_ioc_profile_0(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_1(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_2(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_3(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_4(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_5(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_6(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_7(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_8(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_9(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_10(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_11(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_12(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_13(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_14(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_15(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_16(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_17(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_18(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_19(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_20(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_21(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_22(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_23(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_24(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_25(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_26(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_27(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_28(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_29(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_30(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_31(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_32(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_33(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_34(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_35(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_36(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_37(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_38(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_39(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_40(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_41(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_42(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_43(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_44(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_45(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_46(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_47(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_48(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_49(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_50(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_51(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_52(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_53(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_54(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_55(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_56(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_57(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_58(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_59(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_60(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_61(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_62(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_63(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_64(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_65(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_66(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_67(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_68(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_69(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_70(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_71(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_72(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_73(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_74(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_75(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_76(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_77(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_78(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_79(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_80(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_81(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_82(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_83(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_84(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_85(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_86(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_87(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_88(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_89(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_90(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_91(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_92(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_93(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_94(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_95(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_96(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_97(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_98(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_99(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_100(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_101(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_102(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_103(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_104(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_105(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_106(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_107(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_108(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_109(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_110(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_111(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_112(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_113(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_114(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_115(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_116(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_117(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_118(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_119(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_120(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_121(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_122(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_123(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}

bool expanded_ioc_profile_124(const Indicator& indicator, const std::string& value) {
    std::string normalized = core::lower(core::trim(value));
    if (indicator.type == Type::Domain) {
        return core::norm_domain(normalized) == indicator.norm;
    }
    if (indicator.type == Type::URL) {
        return core::norm_url(normalized) == indicator.norm;
    }
    if (indicator.type == Type::Hash) {
        return normalized == indicator.norm && core::detect_hash(normalized) == indicator.hash;
    }
    auto parsed = core::parse_ipv4(normalized);
    if (parsed && indicator.type == Type::IPv4) {
        return parsed.value().v == indicator.ip.v;
    }
    if (parsed && indicator.type == Type::CIDR) {
        return indicator.cidr.contains(parsed.value());
    }
    return false;
}
}
