/*TSOJ_1299***
**¿ªÊ¼Ì½Ë÷*/

#include<stdio.h>
#include<stdlib.h>

#define M 100

int main() {
	int n,i,m,k,v,q;
	int a[M];
	int b[M];
	for (k = 1; k < 3; k++) {
		scanf_s("%d", &n);
		for (i = 0; i < n; i++) {
			scanf_s("%d", &a[i]);
		}
		for (i = 0; i < n; i++) {
			if (a[i] > a[i + 1]) {
				a[i + 1] = a[i];
				m = a[i + 1];
			}
			else
			{
				a[i] = a[i + 1];
				m = a[i];
			}
		}
		for (v = 1; v < 3; v++);
		{
			b[v] = m;
			printf("%d\n",b[v]);
		}
	}
	system("pause");
	return 0;
}