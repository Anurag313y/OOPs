#include<bits/stdc++.h>
using namespace std;
class student{
private: 
    string name;
    string lang;
    int age;

public:
   
   //method used to change fav language of student
  void changeLang(string newLang){
      lang = newLang;
  }

};
int main()
{
   //***Encapsulation**** : dont make data inside class public.
   // make all data private and using methods we need to manupulate them.
  
  //1)Encapsulation using Access modifirs
  student st1;
  st1.changeLang("python");

  
  //2)Hederfiles "#include<math.h>"

//this will give error now
  //student st2;
  // st2.lang = "java";
  
  return 0;
}