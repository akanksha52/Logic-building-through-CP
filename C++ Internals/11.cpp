// Vectors
#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    Person(string n)
    {
        name = n;
    }
};
int main()
{
    vector<int> a;
    for(int i=0 ; i<10 ; i++)
    {
        a.push_back(i);
        cout<<"Size: "<<a.size()<<"     Capacity: "<<a.capacity()<<endl;
    }
    cout<<endl;
    vector<int> b, c;
    b.resize(100);
    cout<<"Size: "<<b.size()<<"     Capacity: "<<b.capacity()<<endl;
    c.reserve(100);
    cout<<"Size: "<<c.size()<<"     Capacity: "<<c.capacity()<<endl;
    vector<Person> v;
    Person p("Silky");
    v.push_back(p);
    v.emplace_back("Silky");
    cout<<endl;
    vector<int> d(20);
    cout<<"Size: "<<d.size()<<"     Capacity: "<<d.capacity()<<endl;
    d.resize(10);
    cout<<"Size: "<<d.size()<<"     Capacity: "<<d.capacity()<<endl;
    return 0;
}