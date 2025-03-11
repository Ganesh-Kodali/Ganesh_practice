#include<stdio.h>
int main()
{
        int i;
        int max1=0, max2=0;
int a[]={1,2,3,4,5};
for(i=0;i<5;i++)
{
if (a[i]>max1){
        max1=a[i];
}
}
printf("max of array is %d",max1);
for(i=0;i<5;i++)
{ 
       	if (a[i]==max1)
	continue;
	else 
		if (a[i]>max2)
			max2=a[i];
        

} 
printf("1st max of an array is %d",max1);
printf("2nd max of an array is %d",max2);
}
