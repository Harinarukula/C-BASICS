#include<stdio.h>
void main()
{
	int min, h,m;
	printf("enter minutes");
	scanf("%d", &min);
	h = min/60;
	m = min%60;
	printf("%d hour(s) %d minutes(s)", h,m);
}
