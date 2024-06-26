// 1) Constructor is a special method of class 
// 2) Constructor name should be same as class name .
// 3) Constructor do not return any type of value .
// 4) Constructor should be in public 
// 5) We do not need to call constructor it executed after creating object of class 

#include<iostream>
using namespace std;

class Demo
{
  
    public:
    Demo()
    {
        cout<<"Hello Demo "<<endl;
    }

};
int main()
{
    Demo d;
    Demo d1;
}

// Types of Constructors 
//  1)Default Constructor

#include<iostream>
using namespace std;

class Demo
{
  
    public:
    Demo()
    {
        cout<<"Hello Demo "<<endl;
    }

};
int main()
{
    Demo d;
    Demo d1;
}
          
//  2) Pramaterised Constructor 

#include<iostream>
using namespace std;

class Demo
{
    int x;
    public:
    Demo(int a)
    {
        x=a;
    }
    void dislpay()
    {
        cout<<" X : "<<x<<endl;
    }

};
int main()
{
    Demo d(10);
    Demo d1(20);
    d.dislpay();
    d1.dislpay();
}

//  3) Copy Constructor 
// A copy constructor is a member function that initializes an object using another object of the same class.
#include<iostream>
using namespace std;

class Value
{
    int x , y;
    
    public:
    Value(int a,int b)
    {
        x=a;
        y=b;
    }
    Value(Value &z)
    {
        x=z.x;
        y=z.y;
    }
    void display()
    {
        cout<<" X : "<<x<<endl;
        cout<<" Y : "<<y<<endl;
    }

};

int main()
{
    Value d(10,20);
    Value d1(d);
    d.display();
    d1.display();
}
























