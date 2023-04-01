// wap to accept area pincode throw exception if it doesnot contain 6digit;
#include<iostream>
using namespace std;
int main()
{
    int pincode;
    int count =0;
    cout<<"\nplease enter area pincode: ";
    cin>>pincode;
    try{
    while(pincode!=0)
    {
        pincode = pincode/10;
        count++;
    }
    if(count == 6)
      throw 1;
      else 
      {
        throw 2;
      }
    }
    catch(int num)
    {
        if(num == 1)
        cout<<"\n Valid Areacode";
        else if(num==2)
        {
            cout<<"\nPlease enter a valid area code!!";
        }
    }
    return 0;
}