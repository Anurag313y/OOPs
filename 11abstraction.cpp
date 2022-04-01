#include<bits/stdc++.h>
using namespace std;
class smartPhone{
  public:

  // atleast 1 pure virtual finction needed for abstract class
  virtual void takeSelfie()=0;
};
class android:public smartPhone{
 public: 
         void takeSelfie(){
             cout<<"android selfie....\n";
         }
};

class iphone:public smartPhone{

 public: 
         void takeSelfie(){
             cout<<"iphone selfie....\n";
         }
};

int main()
{
    //////***Abstraction****//////////

// base class pointer points to object derived class
   smartPhone*s1 = new android();
   s1->takeSelfie();

    smartPhone*s2 = new iphone();
   s2->takeSelfie();
  return 0;
}