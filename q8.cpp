// wap to to check password strength
#include<iostream>
#include<cstring>
using namespace std;
bool password(char *);
bool password(char *userinput)
{
    int special = -1;
    int digit = -1;
    int capital = -1;
    int length =0;
    int size = -1;
    int i;
  
     for(i = 0 ; userinput[i]!='\0';i++)
    {
         if(strlen(userinput)>=6) // check for minimum 6 character
     size = i;
        else if(userinput[i]>=32 && userinput[i]<=38) // check for special character
       special = i;
    else if(userinput[i]>= 65 || userinput[i]>= 90 ) // check for capital letter
       capital = i;
    else if(userinput[i]>= 0 || userinput[i]<= 9)
     digit = i;
    }
    if((size == -1 || special == -1) || (capital== -1 || digit == -1) )
      return 1;
      else 
        return 0;
}
int main()
{
    char userinput[20];
    int count=0;
    cout<<"\nEnter your password: ";
    cin.get(userinput,15);
    try
    {
        if(password(userinput))
          cout<<"\nValid password";
        else 
         throw 'c';
    }
    catch(char c)
    {
        cout<<"\n Exceptionn caught invalid password!!!";
    }
    catch(...)
    {
        cout<<"\nException handeled";
    }
   
    return 0;
}