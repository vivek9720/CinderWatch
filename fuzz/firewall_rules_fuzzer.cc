#include "cinderwatch/policy/policy.h"
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>
extern "C" int LLVMFuzzerTestOneInput(const uint8_t*data,size_t size){std::string s((const char*)data,(const char*)data+size);auto set=cinderwatch::rules::parse_firewall(s);auto r=cinderwatch::rules::validate_firewall(set);(void)r;return 0;}
