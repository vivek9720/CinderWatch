#include "cinderwatch/policy/policy.h"
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>
extern "C" int LLVMFuzzerTestOneInput(const uint8_t*data,size_t size){std::string s((const char*)data,(const char*)data+size);auto st=cinderwatch::ioc::load_text(s);auto m=cinderwatch::ioc::match_text(st,"input",s);(void)m;return 0;}
