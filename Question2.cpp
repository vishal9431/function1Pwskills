#include<iostream>
using namespace std;
float area(int radius)
{
    return 3.14*3.14*radius; 
}
int main()
{
    int r;
    cout<<"enter the radius of circle"<<" "<<endl;
    cin>>r;
    float ar =area(r);
    cout<<"Area ="<<ar<<" ";

}