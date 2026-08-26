// Copy semantics
#include <bits/stdc++.h>
using namespace std;
class strng
{
public:
    char* str;
    int size;
    strng(const char *a)
    {
        cout<<"Constructor\n";
        size=strlen(a);
        str=new char(size+1);
        memcpy(str, a, size);
        str[size]=0;
    }
    strng(const strng& a)
    {
        cout<<"Copy constructor\n";
        size=a.size;
        str=new char(size+1);
        memcpy(str, a.str, size);
        str[size]=0;
    }
    ~strng()
    {
        cout<<"Destructor\n";
        delete str;
    }
};
int main()
{
    strng a("Hey there");
    strng b=a;
    return 0;
}