#include <iostream>
#include "ClassPro.h"

using namespace std;

template <typename T>
int main_add(T a, T b)
{
    return a+b;
}

int main()
{
    cout << "Hello world!" << endl;
    ClassPro pro1(1, string("abc"));
    ClassPro pro2(2, string("efg"));

    pro1 = pro2;
    ClassPro pro3(2, string("efg"));
    cout<<"it is equals:"<<(pro3 == pro2)<<endl;
    cout<<"main_add value:"<<main_add(pro1, pro2)<<endl;
    return 0;
}
