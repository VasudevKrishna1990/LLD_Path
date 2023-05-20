#include<iostream>
#include<thread>
#include"func1.hpp"
#include"func2.hpp"
using namespace std;

int main(){

for(int i =0;i<10;i++){
thread t1(func::func1);
thread t2(func::func2);

t1.join();
t2.join();
std::this_thread::sleep_for(chrono::milliseconds(1000));
}
return 0;
}