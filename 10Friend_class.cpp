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

   
    friend class homeWork;
};

class homeWork{
    public:

    void printResult(equilateralTriangle et){
    cout<<"circumference="<<et.circumference<<"\n"; 
    cout<<"Area="<<et.area; 
   }
};

int main()
{
 ///// Friend class ////////

equilateralTriangle et;
et.setA(3);


// printResult(et);      xxxxxxxxxxxxxxx

//friend class obj
homeWork hw;
hw.printResult(et);


  return 0;
}