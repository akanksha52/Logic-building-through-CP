// Type alias
#include <bits/stdc++.h>
using namespace std;
typedef double wages;
using Integer = int;
typedef char *pstring;
const int a = 5;
int main()
{
    const pstring cstr = 0;     // cstr is constant pointer to char
    char* const cstr_same = 0;  // Same as the cstr
    const pstring *ps;          // ps is pointer to a constant pointer to char
    auto b = a;
    b = 10;
    cout<<b<<endl;
    // auto &h = 42;             error: we can't bind a plain reference to a literal
    auto &m = a;
    int k = 7;
    int &x = k;
    decltype(x) y = k;
    // &y = 10;
    decltype(x + 2) z = k;
    z = 20;
    cout<< x << " " << y << " " << z << " " << k << endl;
    decltype((5+6)) abc;
    abc = 12;
    // decltype((k)) g;     Needs initialisation as g is a ref
    decltype((k+2)) g;      // g +is not a ref, its an int
    return 0;
}