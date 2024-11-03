//sum of digits in number higher then print that number
#include <stdio.h>
int main()
{
        int num1,num2,temp1,temp2,r1,r2,sum1=0,sum2=0;
        scanf("%d%d",&num1,&num2);
        temp1=num1;
        temp2=num2;
        while(num1>0)
        {
                r1=num1%10;
                sum1=sum1+r1;
                num1=num1/10;
        }
        while(num2>0)
        {
                r2=num2%10;
                sum2=sum2+r2;
                num2=num2/10;
        }
        if(sum1>=sum2)
        {
                printf("%d",temp1);
        }
        else
        {
                printf("%d",temp2);
        }
}
output:50 35
35
output:53 26
53