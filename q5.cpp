// wap to check mobile no contain 10 digit or not
#include<iostream>
using namespace std;
int main()
{
    long long mobileno;
    int count = 0;
    cout<<"enter mobile no: ";
    cin>>mobileno;
     try
     {
        while(mobileno!=0)
        {
            mobileno = mobileno/10;
            count++;

        }
        if(count == 10)
        throw 1;
        else 
        {
            throw 2;
        }
     }
        catch(int num)
        {
            if(num == 1)
            cout<<"\nvalid mobile no.";
            else if (num==2)
            {
                cout<<"\nInvalid mobile no.";
            }
        }
    return 0;
}