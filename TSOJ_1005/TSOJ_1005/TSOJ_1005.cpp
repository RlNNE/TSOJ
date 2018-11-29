/*TSOJ_1005*/
#include<stdio.h>
#include<stdlib.h>

#define M 100

int Comm(int a, int b) {
	int t,c;
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	c = b % a;
	if (c == 0) {
		c = a;
	}
	else
	{
		while (a%c!=0)
		{
			c = a % c;
		}
	}
	return c;
}

int main(void) {
	int a[M], b[M], c[M],d[M];
	int i,n,v,e;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		scanf_s("%d %d", &a[i], &b[i]);
		c[i] = Comm(a[i], b[i]);
	}

	for (i = 0; i < n; i++) {
		printf("%d\n", c[i]);
	}
	system("pause");
	return 0;
}
