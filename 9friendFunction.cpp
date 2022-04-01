#include<bits/stdc++.h>
using namespace std;
class equilateralTriangle{
    private:
    float a, circumference, area;

    public: 
    void setA(float length){
        a = length;
        circumference = a*3;
        area = (1.73 * a*a)/4;
    }

   //friend function declearation
    friend void printResult(equilateralTriangle);
};
void printResult(equilateralTriangle et){
    cout<<"circumference="<<et.circumference<<"\n"; 
     cout<<"Area="<<et.area; 
}

int main()
{
//*** friend function: A friend function of a class is is defined outside that class 
// scope, but it has the rights to access all private and protected members of class.

equilateralTriangle et;
et.setA(3);
//xxxxxxxxxerror---> cout<<"circumference="<<et.circumference; //cant accessible

printResult(et);


//**friends are not member functions.

//**why we need friend function: when class's private data needs to be accessed 
// directly without using object of that class.
  return 0;
}