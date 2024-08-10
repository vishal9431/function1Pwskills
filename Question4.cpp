#include <iostream>
using namespace std;
int twothing(int n)
{
    int count =0;
    for(int i=1;i<=n;i++)
    {
        cout<<i*i<<" ";
        count++;
    }
    cout<<endl;
    cout<<"total no of count ="<<count<<"";
}
int main()
{
    int n;
    cin>>n;
    twothing(n);

}