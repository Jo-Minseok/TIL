#include <stdio.h>

int main() {
	int score[5],sum=0;
	for(int i=0; i<5;i++){
		scanf("%d", &score[i]);
		sum += score[i];
	}
	printf("%d", sum);

	return 0;
}