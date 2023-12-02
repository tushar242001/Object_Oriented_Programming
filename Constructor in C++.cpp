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
