#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int sum =a+b;
    printf("%d",sum);
    int diff;
    if(a>b)
    {
        diff =a-b;
    }
    else
    {
        diff=b-a;
    }
    printf("%d\n",diff);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
