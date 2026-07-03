#pragma once
#include <algorithm>
#include <array>
#include <cctype>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <tuple>
#include <utility>
#include <vector>
namespace cinderwatch::core{
enum class Severity{Info,Low,Medium,High,Critical}; enum class Code{Ok,Invalid,Range,Malformed,Unsupported,Conflict,Io};
struct Status{Code code=Code::Ok;std::string msg;size_t off=0;bool ok()const{return code==Code::Ok;}static Status error(Code c,std::string m,size_t o=0){return{c,m,o};}};
template<class T>struct Result{T val{};Status st{};bool has=false;Result()=default;Result(T v):val(std::move(v)),has(true){}Result(Status s):st(std::move(s)){}explicit operator bool()const{return has&&st.ok();}T& value(){return val;}const T& value()const{return val;}};
template<>struct Result<void>{Status st{};Result()=default;Result(Status s):st(std::move(s)){}explicit operator bool()const{return st.ok();}};
struct Source{std::string file;size_t line=1,col=1,off=0;}; struct Diagnostic{Severity sev=Severity::Info;std::string code,msg;Source loc;}; struct Finding{Severity sev=Severity::Info;std::string cat,title,detail;Source loc;std::vector<std::string> evidence;}; struct Report{std::string subject;std::vector<Diagnostic> diagnostics;std::vector<Finding> findings;bool fail(Severity t=Severity::Medium)const;};
const char* severity_name(Severity s); std::string trim(std::string s); std::string lower(std::string s); std::vector<std::string> split(const std::string&s,char d); std::vector<std::string> lines(const std::string&s); bool starts(const std::string&s,const std::string&p); std::string strip_quotes(const std::string&s); std::string json_escape(const std::string&s);
struct Token{std::string text;Source loc;}; std::vector<Token> shell_tokens(const std::string&l,size_t no=1);
class ByteReader{const uint8_t*d=nullptr;size_t n=0,p=0;bool le=true;public:ByteReader()=default;ByteReader(const uint8_t*x,size_t y,bool e=true):d(x),n(y),le(e){}size_t pos()const{return p;}size_t remaining()const{return p<=n?n-p:0;}bool can(size_t m)const{return m<=remaining();}void endian(bool e){le=e;}Result<void> skip(size_t m);Result<uint8_t> u8();Result<uint16_t> u16();Result<uint32_t> u32();Result<std::vector<uint8_t>> bytes(size_t m);};
class BitReader{ByteReader r;uint8_t cur=0;int left=0;public:explicit BitReader(ByteReader b):r(b){}Result<uint32_t> bits(int c);};
struct IPv4{uint32_t v=0;std::string text()const;}; struct CIDR{IPv4 net;uint8_t prefix=32;bool contains(IPv4 ip)const;std::string text()const;}; struct PortRange{uint16_t a=0,b=65535;bool contains(uint16_t p)const{return p>=a&&p<=b;}std::string text()const;}; enum class HashKind{Unknown,MD5,SHA1,SHA256};
Result<IPv4> parse_ipv4(const std::string&s); Result<CIDR> parse_cidr(const std::string&s); Result<PortRange> parse_port_range(const std::string&s); HashKind detect_hash(const std::string&s); bool domain_like(const std::string&s); bool url_like(const std::string&s); std::string norm_domain(const std::string&s); std::string norm_url(const std::string&s); std::vector<std::string> words(const std::string&s); Result<std::string> read_text(const std::string&p); std::vector<uint8_t> read_bytes(const std::string&p); std::string report_text(const Report&r); std::string report_json(const Report&r);
}
