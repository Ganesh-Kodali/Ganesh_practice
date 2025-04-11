#include<stdio.h>
#include<string.h>

struct time{
 
	int hours;
	int min;
	int sec;

};
int main()
{
struct time t1,t2;
printf("enter the values of first time period in hours:mins:secs format\n");
scanf("%d %d %d",&t1.hours,&t1.min,&t1.sec);
printf("enter the values of second time period in hours:mins:secs format\n");
scanf("%d %d %d",&t2.hours,&t2.min,&t2.sec);



printf("after adding\n");
printf("%d:",t1.hours+t2.hours+(t1.min+t2.min)/60);
printf("%d:",((t1.min+t2.min)%60)+(t1.sec+t2.sec)/60);
printf("%d",((t1.sec+t2.sec)%60));
}
