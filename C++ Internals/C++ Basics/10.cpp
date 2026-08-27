// Virtual
#include <bits/stdc++.h>
using namespace std;
class Entity
{
public:
    string getName()
    {
        return "Entity";
    }
};
class Person : public Entity
{
public:
    string getName()
    {
        return "Person";
    }
};
class Entity2
{
public:
    virtual string getName()
    {
        return "Entity";
    }
};
class Person2 : public Entity2
{
public:
    string getName()
    {
        return "Person";
    }
};
int main()
{
    Entity A;
    cout<<A.getName()<<endl;
    Person B;
    cout<<B.getName()<<endl;
    cout<<"------------------------------------------\n";
    Entity *C = new Entity();
    cout<<C->getName()<<endl;
    Person* D = new Person();
    cout<<D->getName()<<endl;
    Entity *E = new Person();
    cout<<E->getName()<<endl; 
    cout<<"------------------------------------------\n";
    Entity2 *F = new Entity2();
    cout<<F->getName()<<endl;
    Person2* G = new Person2();
    cout<<G->getName()<<endl;
    Entity2 *H = new Person2();
    cout<<H->getName()<<endl; 
    return 0;
}