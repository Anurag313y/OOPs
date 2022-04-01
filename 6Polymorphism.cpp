#include<bits/stdc++.h>
using namespace std;

//1.function overloading
class shape{
    public:
    int h;
    int w;
    shape(int height,int weight){h = height; w = weight;}
    void getDimension(int x , int y){
        cout<<"height:"<<x<<" "<<"weight:"<<y<<endl;
    }
    void getDimension(double x , double y){
        cout<<"height:"<<x<<" "<<"weight:"<<y<<endl;
    }
    void getDimension(int x){
        cout<<"height:"<<x<<endl;
    }
};


///2. operator overloading
class Complex{
    private:
    int real,imag;

    public:
    Complex(int r=0,int i=0){real=r;imag=i;}

    Complex operator + (Complex const &obj){
        Complex res;
        res.imag = imag + obj.imag;
         res.real = real + obj.real;
         return res;
    }
    void display(){
        cout<<real<<" + i"<<imag<<endl;
    }

};

//3.function overriding
class A{
    public:
    void func(){
        cout<<"hello from class A\n";
    }
};
class B:public A{
    public:
     void func(){
        cout<<"hello from class B\n";
    }

};


int main()
{ //polymorphism

//1.function overloading
   shape s(5,2);
   s.getDimension(7,8);
   s.getDimension(7.7,8.8);
    s.getDimension(11);

///2. operator overloading
Complex c1(12,5);
Complex c2(2,3);
Complex c3 = c1+c2;
c3.display();


//3.function overriding
 A a;
 a.func();
 B b;
 b.func();




  return 0;
}

///polymorphism : 
//       (1)Compile time  - function overloading
//                          operator overloading
//       (1)Runtime time  - function overriding(using virtual functions)
//                          
//need of virtual functions: it allows the base class pointer to access members of derived class