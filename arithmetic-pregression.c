#include <stdio.h>

int main() {
    int n,firstnum,diff;
    scanf("%d %d %d",&n,&firstnum,&diff);
    for(int i=1;i<=n;i++)
    {
       printf("%d ",firstnum);
       firstnum=firstnum + diff; 
    }
    return 0;
}