#include <stdio.h>
int main()
{
        int num,temp,rem,cnt,l=9,h=0;
        scanf("%d",&num);
        temp=num;
        while(temp>0)
        {
                rem=temp%10;
                if(rem>h)
                        h=rem;
                else if(rem<l)
                        l=rem;
                temp=temp/10;
        }
        printf("high=%d,low=%d",h,l);

}
output:45323
high=5,low=2
output:56354
high=6,low=3