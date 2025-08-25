//Program to write the longest increasing subsequence
#include<stdio.h>
int main()
{
    int current,previous=-1,len=0,maxlen=0;
    scanf("%d",&previous);
    if (previous!=-1)
    {
        len=1;
        scanf("%d",&current); 
        while (current!=-1)
        {
            if (previous<current)
            {
                len+=1;
            }
            else
            {
                len=1;
            }
            previous=current;
            scanf("%d",&current); 
            if(maxlen<len)
            {
                maxlen=len;
            }
        }  
        printf("Longest Increasing Subsequence=%d\n",maxlen);
    }
}
