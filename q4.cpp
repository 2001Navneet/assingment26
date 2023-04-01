// program to check a valid email id;
#include<iostream>
using namespace std;
    bool validemailid(char *);// function to check valid email id
    bool validemailid(char *email)
    {
        int Atoffset = -1;
        int Dotoffset = -1;
        int length = 0;
        for(int i = 0;email[i]!= '\0';i++)
        {
            if(email[i]=='@')
            Atoffset = i;
            else if(email[i]=='.')
             Dotoffset= i;
             length++;
        }
        if(Atoffset== -1 || Dotoffset == -1)
          return 0;
          if(Atoffset>Dotoffset)
           return 0;
           return (Dotoffset<(length-2));
    }
int main()
{
    char email[100];
    cout<<"\nEnter Email id: ";
    cin.get(email,30);
    try
    {
        if(validemailid(email))
         cout<<"\nValid email id.";
         else 
           throw 'c';
    }
    catch(char c)
    {
        cout<<"\nException caught....invalid email id!!";
        return 0;
    }
    catch(...)
    {
        cout<<"\n Default exception:";
    }

    return 0;
}
