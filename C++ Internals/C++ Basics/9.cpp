// Move semantics
#include <bits/stdc++.h>
using namespace std;
class String
{
public:
    char* m_data;
    uint32_t m_size;
    String() = default;
    String(const char* string)
    {
        cout<<"Created\n";
        m_size=strlen(string);
        m_data=new char(m_size);
        memcpy(m_data, string, m_size);
    }
    String(const String& a)
    {
        cout<<"Copied\n";
        m_size=a.m_size;
        m_data=new char(m_size);
        memcpy(m_data, a.m_data, m_size);
    }
    String(String&& a) noexcept
    {
        cout<<"Moved\n";
        m_size=a.m_size;
        m_data=a.m_data;
        a.m_size=0;
        a.m_data=nullptr;
    }
    void Print()
    {
        cout<<"String is: ";
        for(auto i=0 ; i<m_size ; i++)
            cout<<m_data[i];
        cout<<endl;
    }
    ~String()
    {
        cout<<"Destroyed"<<endl;
        delete m_data;
    }
};
class Entity
{
public:
    String m_data;
    Entity(const String& name) : m_data(name)
    {}
    Entity(String&& name) : m_data((String &&) name)
    {

    }
    void printEntity()
    {
        cout<<"Entity is: ";
        m_data.Print();
    }
};
int main()
{
    //String a("Hello");
    //cout<<endl;
    Entity e("Hey");
    //Entity b("Silky");
    e.printEntity();
    return 0;
}