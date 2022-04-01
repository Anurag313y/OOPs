#include<bits/stdc++.h>
using namespace std;
class instrument{
  public:
     virtual void MakeSound(){
        cout<<"Instrument is playing....\n";
      }
};
class piano : public instrument{
   public:
      void MakeSound(){
        cout<<"Piano is playing....\n";
      }
};
int main()
{
  //** virtual functions: defined in base class and redefined in child class
  // give ability for Run time polymorphism

  //***no virtual word : "Instrument is playing....".  
  //***with virtual keyword : "Piano is playing...." .

  instrument*it1 = new piano();
  it1->MakeSound();

//****on making function virtual it execute the most latest version of function,
//means if there is redeclearation of function in child class then child class function 
//executed , else base class function will execute.
  
  return 0;
}