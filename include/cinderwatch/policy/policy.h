#pragma once
#include "cinderwatch/ioc/ioc.h"
#include "cinderwatch/rules/rules.h"
namespace cinderwatch::policy{struct Item{std::string section,key;std::vector<std::string> values;core::Source loc;};struct Policy{std::string source;std::vector<Item> items;std::vector<core::Diagnostic> diagnostics;};Policy parse_ini(const std::string&t,const std::string&s="");Policy parse_csv(const std::string&t,const std::string&s="");Policy parse_json(const std::string&t,const std::string&s="");Policy parse_auto(const std::string&t,const std::string&s="");Policy parse_file(const std::string&p);core::Report validate(const Policy&p);core::Report audit_bundle(const std::string&d);std::string text(const Policy&p,const core::Report&r);std::string json(const Policy&p,const core::Report&r);}
