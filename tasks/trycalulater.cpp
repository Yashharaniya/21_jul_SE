#include<iostream>
using namespace std;
class calci
{
    public:
    int x,sum,a,b;
    int menu()
        {
            cout<<"Calculator"<<endl;
            cout<<"Select 1 for Addition"<<endl;
            cout<<"Select 2 for Substraction"<<endl;
            cout<<"Select 3 for Multiplication"<<endl;
            cout<<"Select 4 for Division"<<endl;
            return 0;
        }
    
    int getdata()
        {
          cout<<"Enter your choice"<<endl;
          cin>>x;
          cout<<"Enter first value"<<endl;
          cin>>a;
          cout<<"Enter second value"<<endl;
          cin>>b;
          return 0;
        };
};
class caldata : public calci
{
    public:
    int calculate()
    {

    
    switch(x)
        {
            case 1:
            {
                sum = a + b;
                break;
            }
            case 2:
            {
                sum = a - b;
                break;
            }
            case 3:
            {
                sum = a * b;
                break;
            }
            case 4:
            {
                sum = a / b;
                break;
            }
            default :
            cout<<"Invalid input";

        }
        return 0;
    }
        
        
};



int main()
{
    caldata obj;
    obj.menu();
    obj.getdata();
}
