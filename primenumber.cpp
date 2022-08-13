#include<bits/stdc++.h>
using namespace std;

int main()
{
    //prime number
    int n;
    cin>>n;
    int flag=0;

    for(int i=2; i<=n; i++)
    {
        int flag=1;

        for(int j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<i<<" " ;
        }
    }
}
