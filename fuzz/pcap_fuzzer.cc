#include "cinderwatch/policy/policy.h"
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>
extern "C" int LLVMFuzzerTestOneInput(const uint8_t*data,size_t size){auto a=cinderwatch::packet::analyze_bytes(std::vector<uint8_t>(data,data+size));(void)a;return 0;}
