#include<cstdio>
#include<cstring>
char num[]="0123456789ABCDEF";
int Dec(int a,char n[]){//a进制数n转换为10进制数 
	int len=strlen(n);
	for(int i=0;i<len;++i){//注意输入的n不止包含数字，也包含字母
		if(n[i]>='0'&&n[i]<='9'){
			n[i]-='0';
		}else if(n[i]>='a'&&n[i]<='z'){
			n[i]=n[i]-'a'+10;
		}else if(n[i]>='A'&&n[i]<='Z'){
			n[i]=n[i]-'A'+10;
		}
	}
	int dec=0,p=1;//p在循环中会不断乘a，得到1、a、a^2、a^3...
	for(int i=len-1;i>=0;--i){
		dec+=n[i]*p;
		p*=a;
	}
	return dec; 
}
void b_system(int dec,int b){
	char str_b[40];
	int cnt=0;//数组str_b存放b进制数的每一位，cnt为位数
	do{
		str_b[cnt++]=num[dec%b];
		dec/=b;
	}while(dec!=0);//当商不为零时进行循环
	for(int i=cnt-1;i>=0;--i){
		printf("%c",str_b[i]);
	}
	printf("\n");
}
int main(){
	int a,b;
	char n[40];
	while(scanf("%d %s %d",&a,n,&b)!=EOF){
		int dec=Dec(a,n);
		b_system(dec,b);
	}
	return 0;
}
