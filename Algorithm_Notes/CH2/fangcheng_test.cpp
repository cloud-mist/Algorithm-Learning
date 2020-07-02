#include <cstdio>
#include <cmath>
int main(){
	double a, b, c;
	double r1, r2, d;
	scanf("%lf%lf%lf", &a, &b, &c);
	d = sqrt(b*b - 4 * a * c);
	r1 = (- b + d)/(2*a);
	r2 = (- b - d)/(2*a);
	printf("r1=%7.2lf\nr2=%7.2lf", r1, r2);
	return 0;
}
