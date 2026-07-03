#include "cinderwatch/policy/policy.h"
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>
extern "C" int LLVMFuzzerTestOneInput(const uint8_t*data,size_t size){std::string s((const char*)data,(const char*)data+size);auto p=cinderwatch::policy::parse_auto(s);auto r=cinderwatch::policy::validate(p);(void)r;return 0;}
