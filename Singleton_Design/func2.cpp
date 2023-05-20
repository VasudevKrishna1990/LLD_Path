#include"func2.hpp"
#include"Logger.hpp"

void func::func2(){
    Logger * log2 = Logger::getLoggerInstance();
    log2->logMsg("Logger 2");
}