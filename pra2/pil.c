#include<stdio.h>
#include<math.h>
int main()
{
        int n;
        printf("enter the number to check palidrom or not :");
        scanf("%d",&n);
        printf("%d",n);
         int nn=0,t=n,digit = 0,r=0,c1=0,c2=0;
	  while(t>0)
        {
                digit = t%10;
          if (digit%2==0)
	  {
	  c2++;
	  }
	  	r = r * 10 + digit;
                t/=10;
                c1++;
        }

	  if (n==r)
	  {
		  printf("the given number is palindrome\n");
	  printf("no of even numbers are%d",c2);
	  }
	  else
	  {
	          nn = n * pow(10,c1)+ r;
	  printf("%d",nn);
	  }
        return 0; 
}
