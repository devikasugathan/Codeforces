#include<stdio.h>
#include<math.h>

int main()
{
    int r,s;
    scanf("%d%d",&r,&s);
    r*log(s)>s*log(r) ? printf("<"): r*log(s) < s*log(r) ? printf(">"): printf("=");
    return 0;
}
