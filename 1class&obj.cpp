#include<bits/stdc++.h>
using namespace std;
class student{
    public: 
    string name;
    string lang;
    int age;

};
int main()
{   //class & object
    student st1;
    st1.name = "Anurag";
    st1.lang = "c++";
    st1.age = 21;

    cout<<"name:" <<st1.name;
  return 0;
}