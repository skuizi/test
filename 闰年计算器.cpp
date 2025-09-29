#include<stdio.h>
int main() {
	int year;
	printf("闰年计算器");
	printf("请输入年份：");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0) {
		printf("%d是闰年", year);
		} else {
			printf("%d不是闰年", year);
		}
	return 0;
	}