#include <stdio.h>

int main(void) {
int A1,A2,A3,B1,B2,B3,i,t,count1=0,count2=0,count3=0,count4=0;
scanf("%d",&t);
for(i=0;i<t;i++)
{

scanf("%d %d %d",&A1,&A2,&A3);
scanf("%d %d %d",&B1,&B2,&B3);
if(A1==0)
count1+=1;
else
count2+=1;
if(A2==0)
count1+=1;
else
count2+=1;
if(A3==0)
count1+=1;
else
count2+=1;
if(B1==0)
count3+=1;
else
count4+=1;
if(B2==0)
count3+=1;
else
count4+=1;
if(B3==0)
count3+=1;
else
count4+=1;
if(count1==count3 && count2==count4)
printf("Pass\n");
else
printf("Fail\n");
count1=0;
count2=0;
count3=0;
count4=0;

}
	return 0;
}
