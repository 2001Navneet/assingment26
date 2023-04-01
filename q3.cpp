#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num1,num2,ans;
    char Operator;
    cout<<"\nPerform arithmetic operation on two numbers:";
    try
    {
        cout<<"\nEnter first number: ";
        cin>>num1;
        cout<<"\nEnter  operator: ";
        cin>>Operator;
        if(Operator != '+' && Operator!= '-' && Operator != '*' && Operator!='/')
         throw Operator;
        cout<<"\nEnter second number: ";
        cin>>num2;
        switch(Operator)
        {
            case '+':
             ans = num1 + num2;
             break;
             case '-':
             ans = num1-num2;
             break;
             case '*':
             ans = num1*num2;
             break;
             case '/':
             if(num2 ==0)
               throw 0;
        
             ans = num1/num2;
            
             break;
             default:
             cout<<"\n input again!!";
             
        }
        cout<<"\nAnswer ="<<num1<<" "<<Operator<<" "<<num2<<" = "<<ans;
    }
    catch(int e)
    {
        cout<<"\n invalid denominator!!"<<e;
    }
    catch(char c)
    {
        cout<<"\nEnter a valid operator!!"<<c;
    }
    return 0;
}