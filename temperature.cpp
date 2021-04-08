#include<stdio.h>
int main ()
{
	float temparray[7], sum=0,average;
	int i;
	for(i=0; i<7; i++)
	{
		printf("Enter temperature reading of day:%d=",i+1);
		scanf("%f", &temparray[i]);
		sum = sum + temparray[i];
	}
	average = sum / 7.0;
	printf("the average temperature of the week is = %.2f",average);
	return 0;
}
