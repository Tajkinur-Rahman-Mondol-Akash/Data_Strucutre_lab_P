#include<iostream>
using namespace std;
int FN(int n)
{
    int f[n];
    f[0]=0;
    f[1]=1;
    for(int i=2; i<=n; i++)
    {
        f[i]=f[i-1]+f[i-2];

    }
    return f[n];
}


int main()
{
    for(int i=0; i<=10; i++)
    {
        cout<<FN(i)<<endl;
    }

}


