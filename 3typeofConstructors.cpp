#include<bits/stdc++.h>
using namespace std;
class point{
    public:
   double x;
   double y;
    point(){x=0;y=0;} //default constructor

    point(double X, double Y){x=X; y=Y;}// parameterized constructor

     point(const point& rhs){x=rhs.x; y=rhs.y;} //copy constructor

     //getters
     double getX(){return x;}
        double getY(){return y;}
  
};
int main()
{
  //types of constructors
  point p1;
  point p2(2.4, 1.2);
  point p3 = p1;

  cout<<p2.getX();
  return 0;
}