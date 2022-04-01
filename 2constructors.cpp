#include<bits/stdc++.h>
using namespace std;
class student{
    public: 
    string name;
    string lang;
    int age;
    student(string Name, string Lang, int Age){
          name = Name;
          lang = Lang;
          age = Age;
    }
    void getinfo(){
        cout<<"he loves :"<<lang;
    }

};
int main()
{ 
    //***constructors***
    student st2("harry", "java", 25); 
    //cout<<st2.name;

    //***methods*****//
    st2.getinfo();


    
      //consturcturs and class methods
    // student st1;
    // st1.name = "Anurag";
    // st1.lang = "c++";
    // st1.age = 21;

    // cout<<"name:" <<st1.name;
  return 0;
}