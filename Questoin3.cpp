#include <iostream>
using namespace std;
void printoddnumber(int a,int b)
{
    int mn = min(a,b);
    for(int i=mn+1;i<max(a,b);i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" "<<endl;
        }
    }
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    printoddnumber(a,b);
}