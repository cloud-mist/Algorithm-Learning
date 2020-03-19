#include <cstdio>
#include <cstring>
void vowels(char a[],int size);
int main(){
	char s1[100];
	scanf("%s",s1);
	int  chang = strlen(s1);
	vowels(s1, chang);
	return 0;
}
void vowels(char a[],int size){
	for (int i = 0; i < size; ++i)
	{
		if (a[i] == 'a' || a[i] == 'e'|| a[i] == 'i'|| a[i] == 'o'|| a[i] == 'u'
			|| a[i] == 'A'|| a[i] == 'E'|| a[i] == 'I'|| a[i] == 'O'|| a[i] == 'U')
		{
			printf("%c",a[i]);  
		}
	}
	printf("\n");

}
