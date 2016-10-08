/*
http://exercise.acmcoder.com/online/online_judge_ques?ques_id=1664&konwledgeId=134
*/
#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int day=2;
        int i=0,j=2;
        while(1)
        {
            if(day+1>n)
                break;
            day++;
            i++;
            if(day+j>=n)
                break;
            day+=j;
            j++;
        }
        printf("%d\n",n-2*i);
    }
    return 0;
}