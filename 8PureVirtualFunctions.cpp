#include<bits/stdc++.h>
using namespace std;

class instrument{
  public:

    //pure virtual function
     virtual void MakeSound()=0;  //now this class is abstract class
};
class piano : public instrument{
   public:
      void MakeSound(){
        cout<<"Piano is playing....\n";
      }
};
int main()
{
 //**Pure virtual functions: it is a virtual function which dont have its
 //implementation in base class,but it has implementation in its child class.

//**Abstract class: A class which has atleast 1 pure virtual function.

//**if we do not override the pure virtual function in derived class 
//then derived class also become abstract class

//abstract class can have constructors

  instrument*it1 = new piano();
  it1->MakeSound();


  
  return 0;
}