#include<stdio.h>
#include<math.h>
int main(){
	int num;
	printf("enter the number:\n");
	scanf("%d", &num);

	int square = num*num;
	int digitnum = (int)log10(num) + 1;
	int power = (int)pow(10,digitnum);

	int lastdigits =square % power;

	if(lastdigits == num){
	printf("%d is an automorphic number\n",num);
	}
	else
	printf("not an automorphic number\n");

	return 0;
}
