#include "ClassPro.h"
#include <string.h>
#include <iostream>

using namespace std;

ClassPro::ClassPro()
{
    //ctor
    cout<<"It is ctr ClassPro()"<<endl;
}

ClassPro::~ClassPro()
{
    //dtor
    cout<<"It is dtor ~ClassPro()"<<endl;
}

ClassPro::ClassPro(ClassPro &obj)
{
    mflag = obj.mflag;
    name = obj.name;
    cout<<"It is ctr ClassPro(ClassPro &obj)"<<endl;
}

ClassPro::ClassPro(int flag, string name)
{
    mflag = flag;
    this->name = name;
    cout<<"It is ctr ClassPro(int flag, string name)"<<endl;
}

bool
ClassPro::operator==(ClassPro &obj)
{
    cout<<"It is operator== "<<endl;
    cout<<"It is operator== mflag:"<<mflag<<" name:"<<name<<endl;
    cout<<"It is operator== obj.mflag:"<<obj.mflag<<" obj.name:"<<obj.name<<endl;
    if(mflag == obj.mflag && strcmp(name.c_str(), obj.name.c_str()) == 0)
        return true;
    return false;
}

ClassPro&
ClassPro::operator=(ClassPro &obj)
{
   cout<<"It is operator="<<endl;
   if(&obj == this) return *this;
   mflag = obj.mflag;
   name = obj.name;
   return *this;
}

int
ClassPro::operator+(ClassPro &obj)
{
    return mflag + obj.mflag;
}

template <typename T>
int
ClassPro::add(T a, T b)
{
    return a+b;
}
