#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int largestodd = 2 * n - 1;
    for (int i = largestodd; i > 0; i -= 2)
    {
        if(i>1)
        {
            printf("%d ", i);
        }  
        else
        {
            printf("%d.",i);
        }
    }
    return 0;
}