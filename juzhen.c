#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 4
void fun(int *a){
	int i = 0, j = 0, m = 0,k=0;
	printf(" ‰»Î£∫\n");
	for (i; i < N; i++){
		scanf("%d", &a[i]);
	}
		printf("Ω·π˚£∫\n");
		for (i=N; i >0; i--){
			k = a[N - 1];
			for (j = N - 1; j>0; j--)
				a[j] = a[j - 1];
			a[0] = k;
			for (m = 0; m < N; m++)
				printf("  %d  ", a[m]);
			printf("\n");

		
	}
	getchar();
}
int main(){
	int a[N];
	fun(a);
	printf("\n");
	getchar();
	system("pause");
}