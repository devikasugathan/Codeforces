#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[5],s=0;
    for(int i=0;i<5;i++)
    {
        cin>>n[i];
    }
        for(int i=0;i<5;i++)
        { 
            s+=n[i];
        }
       if(s==0)
       cout<<"-1"<<endl;
    
       else if(s%5==0)
        cout<<s/5<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}
