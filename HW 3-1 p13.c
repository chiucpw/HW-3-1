﻿#include <stdio.h>
#include <stdlib.h>

double Power(double, int);

int main()
{
	int k;
	double  Ans;
	printf("計算3.5的k次方?請輸入k=");
	scanf_s("%d",&k);
	Ans = Power(3.5, k);
	printf("3.5的%d次方=%f\n",k,Ans);
}

double Power(double X, int n)
{
	int i;
	double PowerXn = 1;
	for ( i = 1; i <= n; i++)
	{
		PowerXn = PowerXn * X;
	}
	return PowerXn;
}