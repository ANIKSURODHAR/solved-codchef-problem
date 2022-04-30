#include<stdio.h>
  int main()
    {
int T,i,each_episode_time,total_episode,exam_start,need_total_time;

scanf("%d",&T);
for(i=0;i<T;i++)

{
scanf("%d %d %d",&exam_start,&total_episode,&each_episode_time);

need_total_time=total_episode*each_episode_time;

 {
if(need_total_time<exam_start)

printf("YES\n");

else
printf("NO\n");
}
}

}
