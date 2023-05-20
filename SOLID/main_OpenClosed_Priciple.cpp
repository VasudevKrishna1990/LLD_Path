#include<iostream>
using namespace std;

class calculator{
protected :
int a,b;
public:
calculator(){ a = 50;
b = 6;}
int calculate(int opt){
    if(opt == 0) return a+b;
    else if (opt == 1 ) return a-b;
    else if(opt == 2) return a/b;
    else if(opt == 3) return a*b;
    else 
    return a;
}
};

class ICalc{
protected:
int a,b;
public:
   virtual int performOperation()=0;

};

class Addition : public ICalc{

    public:
    Addition(){
        a = 50;
        b = 30;
    }

    int performOperation(){
        return a+b;
    }
};

class Division :public  ICalc{

    public: 
    Division(){
        a = 50;
        b = 30;
    }
    int performOperation(){
        return a/b;
    }
};

class Substraction :public  ICalc{

    public: 
    Substraction(){
        a = 50;
        b = 30;
    }
    int performOperation(){
        return a-b;
    }
};

class Multiplication :public ICalc{

    public: 
    Multiplication(){
        a = 50;
        b = 30;
    }
    int performOperation(){
        return a*b;
    }
};

int main(){
ICalc *opt = new Addition();
cout<<opt->performOperation() <<endl;
opt = new  Substraction();
cout<<opt->performOperation() <<endl;
opt = new Multiplication();
cout<<opt->performOperation() <<endl;
opt = new Division();
cout<<opt->performOperation() <<endl;
return 0;
}