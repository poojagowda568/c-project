#include<stdio.h>
void biggest3()
{
    int A, B, C;

 printf("enter the number A, B, C: ");
 scanf("%d %d %d", &A, &B, &C);
    if (A >=B && A >= C)
            printf("%d is the largest number.", A);
        
    else if (B >= A && B >=C)
            printf("%d is the largest number.", B);
        else
            printf("%d is the largest number.", C);

    //return 0;
}
