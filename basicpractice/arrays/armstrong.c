#include<stdio.h>
#include<math.h>
int main(){
	int num , sum=0;
	printf("enter the number:");
	scanf("%d",&num);

	int digitnum = (int)log10(num)+1;
	int originalnum = num;
	while(num > 0){
	 int digit = num%10;
	 sum += (int)pow(digit,digitnum);
	 num /= 10;
	}
	if(originalnum == sum){
	printf("%d is an armstrong number\n",originalnum);
	}
	else
	printf("%d is not an armstrong number\n",originalnum);

	return 0;
}

