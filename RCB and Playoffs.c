#include<stdio.h>
    int main(void)
    {
     int T,i,earned_point,need_point,left_game,last_point,point;

         scanf("%d",&T);

        for(i=0;i<T;i++)
        {
            scanf("%d %d %d",&earned_point,&need_point,&left_game);

               point=(2*left_game);

                  last_point=earned_point+point;

                     if(last_point>=need_point){
                          printf("YES\n");
                     }
                        else
                           printf("NO\n");

        }
         return 0;
         }
