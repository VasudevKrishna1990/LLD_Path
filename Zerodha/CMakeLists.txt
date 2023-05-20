# Minimal required version .
cmake_minimum_required (VERSION 3.16)
project(ZERODHA)

add_library(lowLevel
common.h
exchangeConnector.cpp
exchangeConnector.h
order.cpp
order.h
orderExecutioner.h
orderMgr.h
orderValidator.cpp
orderValidator.h
stock.h
system.h
system.cpp
user.h
)
add_executable (ZERODHA zerodha.cpp)
target_link_libraries(ZERODHA PRIVATE lowLevel)