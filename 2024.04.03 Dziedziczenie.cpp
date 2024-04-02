#include <iostream>

using namespace std;

class A
{
    public:
    int x;
    A() 
    {
        x = 0;
        cout<<"Konstruktor klasy A"<<endl;
    }
    void Show()
    {
        cout<<x<<endl;
    }

    ~A() 
    {
        cout<<"Destruktor klasy A"<<endl;
    }
};



class B : public A
{
    public:
    B()
    {
        cout<<"Konstruktor klasy B"<<endl;
    }

    ~B()
    {
        cout<<"Destruktor klasy B"<<endl;
    }

};

int main()
{
    A obj1;
    obj1.Show();

    B obj2;
    obj2.x = 100;
    obj2.Show();


}