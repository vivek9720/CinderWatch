#include "cinderwatch/policy/policy.h"
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>
extern "C" int LLVMFuzzerTestOneInput(const uint8_t*data,size_t size){std::string s((const char*)data,(const char*)data+size);auto set=cinderwatch::rules::parse_ids_rules(s);auto r=cinderwatch::rules::validate_ids(set);auto n=cinderwatch::rules::normalize_ids(set);(void)r;(void)n;return 0;}
