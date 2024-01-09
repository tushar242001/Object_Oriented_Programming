/* 
Polymorphism : The word “polymorphism” means having many forms.

Types of Polymorphism
       1) Compile-time Polymorphism
                  i)  Function Overloading : When there are multiple functions with the same name but different parameters,then the functions are said to be overloaded,
                                             hence this is known as Function Overloading.
                 ii) Operator Overloading : C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading.

       2) Runtime Polymorphism
                 i) Function Overriding : Function Overriding occurs when a derived class has a definition for one of the member functions of the base class.
                                          That base function is said to be overridden.
                 ii) Virtual Functions  :1) A virtual function is a member function that is declared in the base class using the keyword virtual 
                                            and is re-defined (Overridden) in the derived class.
                                         2) Virtual functions ensure that the correct function is called for an object, 
                                            regardless of the type of reference (or pointer) used for the function call.
                                            
                                          

*/

// Functions Overloading in C++ .

#include <iostream>
using namespace std;

void add(int a, int b)
{
  cout << "sum = " << (a + b);
}
 
void add(double a, double b)
{
    cout << endl << "sum = " << (a + b);
}
int main()
{
    add(10, 2);
    add(5.3, 6.2);
    return 0;
}


//  Operator Overloading in C++ .
#include <iostream>
using namespace std;
 
class Complex {
private:
    int real, imag;
 
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
 
    // This is automatically called
    // when '+' is used with between
    // two Complex objects
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << endl; }
};
 
// Driver code
int main()
{
    Complex c1(10, 5), c2(2, 4);
 
    // An example call to "operator+"
    Complex c3 = c1 + c2;
    c3.print();
}


