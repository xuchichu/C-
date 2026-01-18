#include <string>
#include <iostream>
using namespace std;

void change(int& a, int& b)
{
    a = 1000;
    b = 2000;
}

int main()
{
    //int s = 32;
    //string str = "Asuka wa Asuka da";
    //cout << s << endl;

    ////指针可以完成对内存地址的操作
    ////指针就是用来存储某个变量的地址的

    //int* pS;// int * pS;  int *pS;
    //string* pStr;
    //
    //pS = &s;
    //cout << pS << endl;
    //cout << str << endl;
    //pStr = &str;
    //cout << pStr << endl;
    //string a = "anda baka?";
    //pStr = &a;
    //cout << pStr << endl;
    //cout << *pStr << endl;//*取得后面的(指针)内存地址所指向的数据
    //*pStr = "baka shinji";
    //cout << pStr << endl;
    //cout << *pStr << endl;
    //cout << pStr << endl;

    //void* p1;//指向空类型的指针，可以指向任意类型
    //p1 = &str; p1 = &s;
    //cout << *(int*)p1 << endl;

    //int* p2 = NULL;
    //cout << p2 << ":" << *p2<< endl;


    //指针* 引用& reference
    //int a = 100;
    //int b = 200;

    //int* pa = &a;
    //cout << pa << ":" << a << b << endl;
    //pa = &b;
    //b = 500;
    //cout << pa << ":" << a << b << endl;
    //int& ra = a;
    //cout << ra << ":" << a << b << endl;
    //ra = b;//a=b;
    //b = 400;
    //cout << ra << ":" << a << b << endl;
    
    int a = 0; int b = 0;
    change(a, b);
    cout << a << b << endl;

    
    return 0;
}