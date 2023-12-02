// Encapsulation is the wrapping up data and information under a single unit 

#include<iostream>
using namespace std;

class demo
{
    int x;
    public:
    void accept()
    {
        cout<<"Enter X : ";
        cin>>x;
    }
    void display()
    {
        cout<<" X = "<<x;
    }

};
int main()
{
    demo d;
    d.accept();
    d.display();
}
// cout<<d.x              We can not access x directly because x is private member of a class .

// Class is a blue print of object .
//  Object is Real world entity .
