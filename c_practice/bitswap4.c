#include<stdio.h>
int main()
{
	int value1=0,value2=0,bit1=0,bit2=0,result=0;
	int input=0,output=0;
	printf("Enter the Input and output hexa value\n");
	scanf("%x %x",&input,&output);
	printf("The output is %x and input is %x\n",output,input);
	printf("Enter the value_1 and bit_position1 u want to swap\n");
	scanf("%d%d",&value1,&bit1);
	printf("Enter the value_2 and bit_position2 u want to swap\n");
        scanf("%d%d",&value2,&bit2);
	result|=((value1<<bit1)|(value2<<bit2));
	printf("The result value is %x\n",result);
	int reset=0;
	reset|=~((0xf<<bit1)|(0xf<<bit2));
	//printf("The reset value is %4.x\n",reset);
	input&=reset;
	input|=result;
	printf("The value is 0x%x\n",input);
	return 0;
}
