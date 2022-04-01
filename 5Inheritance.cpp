#include<bits/stdc++.h>
using namespace std;

//base class
class shape{
    protected:
    int width;
    int height;
    public : 
     void setWidth(int w){width = w;}
      void setHeight(int h){height = h;}
};

//child class
class rectangle: public shape{
    public:
    int getArea(){
        return width*height;
    }
};

int main()
{
  rectangle r;
  r.setWidth(5);
  r.setHeight(3);

  //public and protected data and member can go to child 
  //class but private cant go to child class
  return 0;
}