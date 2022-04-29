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
