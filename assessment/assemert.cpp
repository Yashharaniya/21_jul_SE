/*#include<iostream>
using namespace std;
class account
{
    public:
    char name[30];
    int acnumber;
    char typeofaccount[30];
    int balence;
    void assign()
    {
        cout<<"enter the namne of dipositer =";
        cin>>name;
        cout<<"enter the account number =";
        cin>>acnumber;
        cout<<"choose whitch type of your acount =";
        cin>>typeofaccount;
        cout<<"enter the balence of your account =";
        cin>>balence;
    }
    void dip()
    {
        int amount;
        cout<<"enter your amount to diposit =";
        cin>>amount;
        balence+=amount;
        cout<<"... your currnt balence ="<<balence;
    }
    void withdraw()
    {
        int with;
        cout<<"enter the your withdraw amount =";
        cin>>with;
        if(balence>with)
        {
                balence-=with;
                cout<<"your currnt balence is ="<<balence;
        }
        else
        {
            cout<<"your balence is not avileble";
        }
    }
    void show()
    {
        cout<<"deposter name ="<<name;
        cout<<"\n your balence is ="<<balence;
    }
};
int main()
{
    account obj;
    obj.assign();
    int a;
    cout<<"\npress the 1 to amount deposit in your account ";
    cout<<"\npress the 2 to amount withdraw in your accun ";
    cout<<"\npress the 3 to show your name and balence =";
    cin>>a;
    if(a==1)
    {
        obj.dip();
    }
    else if(a==2)
    {
        obj.withdraw();
    }
    else if(a==3)
    {
        obj.show();
    }
    return 0;
}*/
#include<iostream>
using namespace std;
class fastfood{
    public :
    
    char name[30];
    char manu;
    void yname(){
    cout<<"enter the yor name"<<name;
    cin>>name;
    cout<<"hello"<<name;
};
void ymanu()
{
    switch(manu)
    {
        case 1:
        {
            cout<<"pizzas";
        }
        break;
        case 2:
        {
            cout<<"burger";
        }
        break;
        case 3:
        {
            cout<<"sandwich";
        }
        break;
        case 5:
        {
            cout<<"rolls";
        }
        break;
        case 6:
        {
            cout<<"biriyani";
        }
        break;
    };
    void ychoice()
    {
       
        cout<<"what would you like oder";
         cin<<manu;
    };
    void yoder()
    {
        cout<<"thank you to your oder is "<<manu;
        cout<<"your bill number is 521 wait for your oder";
    };
    
};
int main()
{
    fastfood obj;
    obj yname();
    obj ymanu();
    obj ychoice();
    obj yoder();
};

    
