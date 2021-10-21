#include<iostream>
using namespace std;
int main()
    --Adding Changes And then we will commit changes from Production to feature
{
    int num, i, fact=1;
    cout<<"Enter the Number: ";
    cin>>num;
    for(i=num; i>=1; i--)
        fact = fact*i;
    cout<<"\nFactorial = "<<fact;
    cout<<endl;
    return 0;
}
