 /* Question:Chef has an exam which will start exactly M minutes from now. However, instead of preparing for his exam, Chef started watching Season-1 
      of Superchef. Season-1 has N episodes, and the duration of each episode is K minutes.

Will Chef be able to finish watching Season-1 strictly before the exam starts?

Note:

Please read the explanations of the sample test cases carefully.
Input Format:
The first line contains an integer T
denoting the number of test cases. T
test cases then follow.
The first and only line of each test case contains 3
space separated integers M, N and K

    .

Output Format:

For each test case, output on one line YES if it is possible to finish Season-1 strictly before the exam starts, or NO if it is not possible to do so.

Output is case insensitive, which means that "yes", "Yes", "YEs", "no", "nO" - all such strings will be acceptable.*/


                                                                                                                   




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
