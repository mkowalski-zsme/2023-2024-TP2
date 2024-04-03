#include <iostream>
using namespace std;

class A
{
public:
    int x;
    A() {
        cout<<"Konstruktor klasy A"<<endl;
        x = 0;
    }
    A(int _x) {
        cout<<"Konstruktor dodatkowy"<<endl;
        x = _x;
    }
    void Show() {
        cout<<"Skladnik x wynosi: "<<x<<endl;
    }
    ~A() {
        cout<<"Destruktor klasy A"<<endl;
    }
};

class B : public A
{
    public:
    int y;
    B() {
        cout<<"Konstruktor klasy B"<<endl;
        y=0;
    }
    ~B() {
        cout<<"Destruktor klasy B"<<endl;
    }
};

int main()
{
    A ob1;
    B ob2;
    ob1.x = 123;
    ob1.Show();

    ob2.x = 321;
    ob2.Show();
}