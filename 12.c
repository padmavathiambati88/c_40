#include <stdio.h>
int main()
{
        int num,rev=0,temp,rem;
        scanf("%d",&num);
        temp=num;
        while(temp>0)
        {
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
        }
        if(rev==num)
                printf("palindrome");
        else
                printf("not palindrome");
}
output:121
palindrome
output:435
not palindrome