#include <iostream>  
using namespace std;  
class A  
    {  
public:  
int x, y; 
void getdata() 
    {  
cout<< "Enter value of maltification x and y:\n";  
cin>> x >> y;  
    }  
};  
class x 
    {  
public:  
int x, y; 
void getdata2() 
    {  
cout<< "Enter value ofaddition and y:\n";  
cin>> x >> y;  
    }  
};  
class B : public A 
{  
public:  
void product()  
    {  
cout<< "\nmaltipication is= " << x * y <<endl;  
    }  
};  
class C : public x 
{  
public:  
void sum()  
    {  
cout<< "\nSum= " << x + y;  
    }  
};  

int main()  
{  
    B obj1; 
    C obj2;  
obj1.getdata();  
obj1.product();  
obj2.getdata2();  
obj2.sum();
obj1.tx();
obj2.tx();
return 0;  
}  
class tankyou :public A :public x
{ 
    public:
    tx(){
cout<<"thank you";
}
};
