// RAII
#include <bits/stdc++.h>
#include <mutex>
#include <memory>
using namespace std;
class A
{
    int *arr;
public:
    A(int n)
    {
        this->arr = new int(10);
        cout<<"Constructor\n";
    }
    ~A()
    {
        delete arr;
        cout<<"Desctructor"<<endl;
    }
};
class B
{
    ofstream file;
public:
    B(string s)
    {
        file.open("6a.txt");
        file.write(s.c_str(), s.size());
        cout<<"File constructor\n";
    }
    ~B()
    {
        file.close();
        cout<<"File destructor\n";
    }
};
class lock
{
public:
    std::mutex &m;
    lock(std::mutex &m) : m(m)
    {
        m.lock();
        cout<<"Mutex locked\n";
    }
    ~lock()
    {
        m.unlock();
        cout<<"Mutex unlocked\n";
    }
};
int main()
{
    cout << "PROGRAM STARTED\n";
    {
        A* obj=new A(5);
        delete obj;
    }
    {
        A obj(5);
    }
    {
       A obj1(2), obj2(5);
    }
    {
        A obj(5);
        //throw 10;
    }
    {
        B obj("RAII");
    }
    {
        B *obj=new B("RAII 2");
        delete obj;
    }
    unique_ptr<int> p=make_unique<int>(10);
    if(p) cout<<"p is non null\n";
    unique_ptr<int> q=move(p);
    if(!p) cout<<"p is null\n";
    shared_ptr<int> r=make_shared<int>(10);
    shared_ptr<int> s=r;
    cout<<r.use_count();
    weak_ptr<int> t=r;
    return 0;
}