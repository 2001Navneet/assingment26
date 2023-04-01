#include<iostream>
#include<cstring>
using namespace std;
bool validgmail(char *);
 
int main()
{
    char id[30];
   
    cout<<"\nEnter gmail id:";
    cin.get(id,15);
    try
    {
        if(validgmail(id))
        cout<<"\nValid gmail id:";
        else 
         throw 'e';
    }
    catch(char c)
    {
        cout<<"\nException invalid gmail id";
    }
    return 0;
}
bool validgmail(char *mail)
{
    
    int atoffset = -1;
    int dot = -1;
    for(int i = 0; mail[i]!= '\0';i++)
    {
        if(mail[i]=='@')
          atoffset = i;
        else if(mail[i]=='.')
         dot = i;
    }
    if(atoffset == -1 || dot == -1)
     return 0;
     else 
      return 1;
    

}