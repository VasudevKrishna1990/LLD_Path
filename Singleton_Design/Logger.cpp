
#include"Logger.hpp"

Logger * Logger::loggerInstance = nullptr;
mutex Logger::mtx;
int Logger::count = 0;
Logger* Logger::getLoggerInstance(){
    if(loggerInstance == nullptr){
        mtx.lock();
        if(loggerInstance == nullptr){
            loggerInstance = new Logger();
            count ++;
        }
        mtx.unlock();
    }
    return loggerInstance;
}

void Logger::logMsg(string s){
    cout<<"This message is logged  by  "<< s << " Instance count " << count <<endl;
}