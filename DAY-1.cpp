#30days-code-challenge DAY-1
#factorial

#include<iostream>
#include<string>
using namespace std;
class fact
{
    int n,i,f;
    public:
      fact()
      {
          f=1;
      }
      void input()
      {
          cout<<"Enter the number to calculate factorial"<<endl;
          cin>>n;
          for(i=1;i<=n;i++)
        {
          f*=i;       
        }
        cout<<"The factorial of the given number is "<<f<<endl;
      }
};
main()
{
    fact obj;
    obj.input();
}