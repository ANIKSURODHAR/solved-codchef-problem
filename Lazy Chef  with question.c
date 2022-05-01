/*Question:Chef is a very lazy person. Whatever work is supposed to be finished in x units of time, he finishes it in m∗x units of time. But there is 
always a limit to laziness, so he delays the work by at max d units of time. Given x,m,d, find the maximum time taken by Chef to complete the work.
Input: First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains a single line of input, three integers x,m,d.
Output:
For each testcase, output in a single line answer to the problem.*/

/*Author Name:Anik sutrodhar
         C.S.E
                            */
#include<stdio.h>
  int main(void)
  {
int T,shouid_complete,m,delay_time,i;

scanf("%d",&T);

for(i=0;i<T;i++)
{
scanf("%d %d %d\n",&shouid_complete,&m,&delay_time);

if((shouid_complete+delay_time)>=(m*shouid_complete))
printf("%d\n",m*shouid_complete);

else
printf("%d\n",shouid_complete+delay_time);
}
}
