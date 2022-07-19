#include <iostream>
using namespace std;
int Fact(int n);

int main()
{
    int n;
    cin>>n;
    cout<<Fact(n);
    return 0;
}
int Fact(int n)
{
    int mul=1;
        for(int i=1;i<=n;i++)
        {
            mul=mul*i;        
        }
    return (mul);
}