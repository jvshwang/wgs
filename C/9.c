/*************************************************************************
    > File Name: 9.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年02月24日 星期三 21时57分43秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	float s = 1;
	for(int i = 1; i <= 10; i++)
	{
		s = s * i;
	}
	printf("10! = %.2f\n",s);
	return 0;
}
