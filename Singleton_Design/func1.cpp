#include"func1.hpp"

void func::func1(){
    Logger * log1 = Logger::getLoggerInstance();
    log1->logMsg("Logger 1");
}