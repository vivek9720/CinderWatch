#include "cinderwatch/cli/cli.h"
#include <string>
#include <vector>
int main(int argc,char**argv){return cinderwatch::cli::run(std::vector<std::string>(argv,argv+argc));}
