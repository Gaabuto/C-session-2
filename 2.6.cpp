#include <stdio.h>

int main() {
	float PI = 3.14;
	int banKinh = 3;
	float chuVi = 2*PI*banKinh, dienTich = PI * banKinh* banKinh;
	printf("PI = %.2f\n", PI);
	printf("ban kinh hinh tron la %d\n", banKinh);
	printf("chu vi hinh tron la %.2f\n", chuVi);
	printf("dien tich hinh tron la %.2f", dienTich);
	return 0;
}
