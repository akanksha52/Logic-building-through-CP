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
    string getName() override
    {
        return "Person";
    }
};
class Entity3
{
public:
    ~Entity3()
    {
        cout<<"Entity3 destructor\n";
    }
};
class Person3 : public Entity3
{
public:
    ~Person3()
    {
        cout<<"Person3 destructor\n";
    }
};
class Entity4
{
public:
    virtual ~Entity4()
    {
        cout<<"Entity4 destructor\n";
    }
};
class Person4 : public Entity4
{
public:
    ~Person4() override
    {
        cout<<"Person4 destructor\n";
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
    cout<<"------------------------------------------\n";
    {
        Entity3 I;
        Person3 J;
    }
    cout<<"------------------------------------------\n";
    Entity3 *K = new Entity3();
    Person3 *L = new Person3();
    Entity3 *M = new Person3();
    delete K;
    delete L;
    delete M;
    cout<<"------------------------------------------\n";
    Entity4 *N = new Entity4();
    Person4 *O = new Person4();
    Entity4 *P = new Person4();
    delete N;
    delete O;
    delete P;
    return 0;
}