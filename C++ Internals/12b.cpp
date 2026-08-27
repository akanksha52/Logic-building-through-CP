#include <iostream>
#include "12c.hpp"
using namespace std;
// Multiple definition error
// int add(int a, int b)
// {
//     return a+b;
// }
int main()
{
    cout << add(2, 3);
}