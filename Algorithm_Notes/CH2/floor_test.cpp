// floor(double x) ceil(double x)   向下取整  向上取整
#include<stdio.h>
#include<cmath>
int main(){
	double db1 = -5.2, db2 = 5.2;
	printf("%.0f %.0f\n", floor(db1), ceil(db1));
	printf("%.0f %.0f\n", floor(db2), ceil(db2));
	return 0;
}
// -6  -5  5  6
