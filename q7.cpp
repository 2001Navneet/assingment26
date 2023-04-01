#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char username[20];
    int i;
    int count = 0;
    cout<<"\nEnter usernaem: ";
    cin.get(username,10);
    try
    {
        if(strlen(username)<6)
          throw 1;
        for(i= 0; username[i]!='\0';i++)
        {
            if(username[i]!= '@' || username[i]!= '#' || username[i] != '$')
             throw 'c';
             else if(username[i]!= '1' || username[i]!='2'|| username[i]!= '3')
               throw 2;
        }
        
    }
    catch(int num)
    {
        if(num == 1)
        cout<<"\n username must have 6 character";
        else if(num== 2)
        {
            cout<<"\nuername must contain digit..";
        }
        
    }
    
    catch(char c)
    {
        cout<<"\n no special symbol: ";
    }
}