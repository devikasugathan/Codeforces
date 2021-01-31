#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int s1,s2,s3,s4,s5;
    s1=a+(b*c);
    s2=a*(b+c);
    s3=(a*b*c);
    s4=(a+b)*c;
    s5=(a+b+c);
    int max1=max(s1,s2);
    int max2=max(s3,s4);
    int max3=max(max1,max2);
    cout<<max(max3,s5);
    return 0;
}
