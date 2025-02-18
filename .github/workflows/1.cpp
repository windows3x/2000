#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int A;
	srand(time(0));
	A=rand()%5;
	printf("欢迎\n请按任意键继续...\n\n--------------------------------\n\nProcess exited after %d seconds with return value 0",A	);
	getchar();
	return 0;
}
