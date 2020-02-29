#include <cstdio>
#include <cstring>
int main(){
		int n;
		double db;
		char str2[100];
		char str[100] = "2048:3.2,hello";
		sscanf(str, "%d:%lf,%s", &n, &db, str2);
		printf("n = %d, db = %lf, str2 = %s\n", n, db, str2);
		return 0;
}
