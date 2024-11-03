#include <stdio.h>
int main()
{
        int num,rem,temp,product=1;
        scanf("%d",&num);
        temp=num;
        while(temp>0)
        {
                rem=temp%10;
                product=product*rem;
                temp=temp/10;
        }
        printf("the product of given number%d:%d",num,product);
}
  output:123
the product of given number123:6
output:465
the product of given number465:120