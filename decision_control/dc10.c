#include<stdio.h>
int main()
{
int profit,cp,sp,loss,pc,lc;
printf("enter the values of cp and sp");
scanf("%d%d",&cp,&sp);

if (sp>cp)
{profit= sp-cp;
printf("it is profit%d\n",profit);
pc=(profit*100)/cp;
printf("profit percentage is %d\n",pc);
}

if (cp>sp)
{
loss=cp-sp;
printf("it is loss%d\n",loss);
lc=(loss*100)/cp;
printf("loss percentage is %d\n",lc);
}

}
