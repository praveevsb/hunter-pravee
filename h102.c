#include <stdio.h>

int main()
{
     int num,i,rem,sum=0;
    printf("Enter the number");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem);
        num=num/10;
    }
    printf("square of digits is %d",sum);

    return 0;
}
