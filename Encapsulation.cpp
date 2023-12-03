// Encapsulation is the wrapping up data and information under a single unit 
// Example of Encapsulation is :  In a company, there are different sections like the accounts section, finance section, sales section, etc.
//                                Now, The finance section handles all the financial transactions and keeps records of all the data related to finance.
//                                Similarly, the sales section handles all the sales-related activities and keeps records of all the sales.
//                                Now there may arise a situation when for some reason an official from the finance section needs all the data 
//                                about sales in a particular month.In this case, he is not allowed to directly access the data of the sales section. 
//                                He will first have to contact some other officer in the sales section and then request him to give the particular data.
// 



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
// cout<<d.x              :  We can not access x directly because x is private member of a class .

// Class is a blue print of object .
//  Object is Real world entity .
