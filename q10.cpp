#include<iostream>
#include<cstring>
using namespace std;
bool validname(char *);
int main()
{
    char nickname[10];
    cout<<"\nEnter nickname:";
    cin.get(nickname,9);
 try
 { 
    if(strlen(nickname)>8)
      throw 1;
      for(int i = 0;nickname[i]!='\0';i++)
      {
     if(nickname[i]=='1' || nickname[i]== '2' || nickname[i]== '@' || nickname[i]=='$')
     throw 2;
     }
    cout<<"\n valid nickname";
 }
 catch(int num)
 {
    if(num==1 || num == 2)
    {
        cout<<"\ninvalid nicname";
    }
    else
     cout<<"\n valid nickname";
 }
    return 0;
}
