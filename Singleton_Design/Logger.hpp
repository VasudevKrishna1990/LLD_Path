#pragma once
#include<iostream>
#include<mutex>
using namespace std;

class Logger{
Logger() {}
static mutex mtx;
static int count;
static Logger * loggerInstance ;


public:

static Logger* getLoggerInstance();
static void logMsg(string s);
};