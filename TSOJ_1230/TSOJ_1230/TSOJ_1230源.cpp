/*TSOJ_1230_�ųǴ���*/
/*���ҳ�ÿһ���������ֵ����Լ������������Թ�Լ���õ����*/
#include<stdio.h>
#include<stdlib.h>

#define M 100

int Commondivisor(int a, int b) {
	//�����Լ��
	int t,c,d;
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	c = b % a;
	while (a%c!=0)
	{
		c = a % c;
	}
	return c;
	return c;
}

int main(void) {
	int f[M],a[M],b[M],g[M],e[M];
	int  v,i,c,d;
	for (i = 0; i < 2; i++) {
		scanf("%d %d", &a[i], &b[i]);
		f[i] = Commondivisor(a[i], b[i]);
		g[i] = a[i] / f[i];
		e[i] = b[i] / f[i];
	}
	for (i = 0; i < 2; i++)
	{
		printf("%d %d\n", g[i], e[i]);
	}
	return 0;
}