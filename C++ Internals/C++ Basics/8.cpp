// lvalue and rvalue
#include <bits/stdc++.h>
using namespace std;
// const int& getValue()
// {
//     return 10;
// }
int& getValue2()
{
    static int x=10;
    return x;
}
void setValue(const int& i)
{
    int x=i;
}
void printName(string& a)
{
    cout<<a<<endl;
}
void printName2(const string& a)
{
    cout<<a<<endl;
}
void printName3(string&& a)
{
    cout<<a<<endl;
}
int main()
{
    getValue2()=5;
    cout<<getValue2()<<endl;
    setValue(10);
    int x=5;
    setValue(x);
    string fn="Silky", ln="Ajay";
    string full=fn+ln;
    printName(fn);
    // printName(fn+ln);        See the error
    printName2(fn+ln);
    // printName3(fn);      See the error
    printName3(fn+ln);
    return 0;
}