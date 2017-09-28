#ifndef CLASSPRO_H
#define CLASSPRO_H
#include <string>

using namespace std;

class ClassPro
{
    public:
        ClassPro();
        ClassPro(int flag, string name);
        ClassPro(ClassPro&);
        virtual ~ClassPro();
        ClassPro& operator=(ClassPro &);
        bool operator==(ClassPro &);
        int operator+(ClassPro &);
        template <typename T>
        int add(T a, T b);

    protected:

    public:
        int mflag;
        string name;

};

#endif // CLASSPRO_H
