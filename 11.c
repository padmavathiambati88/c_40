#include <stdio.h>
int main()
{
        int num,temp,data,d1,d2,cnt;
        scanf("%d",&num);
        temp=data=num;
        while(temp>0)
        {
                d1=temp%10;
                data=num;cnt=0;
                while(data>0)
                {
                        d2=data%10;
                        if(d1==d2)
                        {
                                cnt++;
                        }
                        data=data/10;
                }
                if(cnt==1)
                {
                        printf("%d ",d1);
                }
                temp=temp/10;
        }
}
output:243623
6 4 
output:6374235322
8 9 7 