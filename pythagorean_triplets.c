//Program to find pythagorean triplets in a given sequence
//eg. 3,4,5   5,12,13
#include<stdio.h>
int main()
{
    int pprev,curr,prev;
    int n;
    int i;
    int count=0;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&curr);
        if (curr <= 0)
        {
            continue;
        }
        if (count==0)
        {
            pprev=curr;
            count=1;
        }
        else
        {
            if (count==1)
            {
                prev=curr;
                count=2;
            }
            else
            {
                if (pprev*pprev + prev*prev == curr*curr)
                {
                    printf("%d %d %d are Pythagorean Triplets\n",pprev,prev,curr);
                }
                pprev=prev;
                prev=curr;
            }

        }
    }
    
}