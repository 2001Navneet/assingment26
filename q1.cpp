#include<iostream>
using namespace std;
 void test_try(int num)
    {
    char *c = "navneet";
    try
    {
        if(num>= 0 && num<= 9)
            throw num;
            else
              cout<<"\n it is not a single number!";
            throw c;
    }
    catch(int e)
    {
        cout<<"\n it is a single digit number.";
    }
    catch(char b[100])
    {
        cout<<"\nthe string is = "<<b;
    }
    }
int main()
{
   
    test_try(10);
    return 0;
}