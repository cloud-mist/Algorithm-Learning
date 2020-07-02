#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
	//1.访问
	string str = "abcd";
	for (int i = 0; i < str.length(); ++i)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	//2.读入输出 cin & cout
	string str2;
	cin >> str2;
	cout << str2 << endl;
	//3.用printf 输出
	printf("%s\n", str.c_str() );	//将string型str 用 c_str() 变成字符数组

	//4.通过迭代器访问，insert & erase 要求以迭代器为参数
	for(string::iterator it = str.begin(); it != str.end(); it++)
	{
		printf("%c", *it);
	}
	printf("\n");

	//5.string加法 拼接str
	string str3 = str + str2;
	cout <<"str3: " << str3 << endl;

	//6.比较操作，规则是字典序
	if (str > str2)	printf("str > str2\n");
	else printf("str < str2 \n");

	//7.length() / size()
	printf("str's length: %d %d\n",str.length(), str.size() );

	/*8.insert
	  8.1 insert(pos, string) 在pos位 插入string */
	string str4 = "opx";
	str.insert(3,str4);
	cout << "after add str4, str: " << str << endl;
		//8.2 insert(it,it2,it3 )	串[it2,it3) 将被插在it的位置上
	string str5 = "zzz";
	str.insert(str.begin()+1,str5.begin(),str5.end());
	cout << "after add str5, str: " << str << endl;

	//9.erase()  O(n)
		//9.1	str.erase(it) 删除单个元素
	str4.erase(str4.begin()+1);
	cout << "str4: " << str4 << endl;
		//9.2.1 str.erase(first, last)  [first,last)
		//9.2.2 str.erase(pos, length)  
	string str6 = "zxcvbnm";
	string str7 =str6;
	str6.erase(str6.begin()+1,str6.end()-1);
	cout <<"str6: " << str6 << endl;
	str7.erase(1,5);
	cout << "str7: " << str7 << endl;

	//10.clear() 清空string数据  复杂度O(1)
	str7.clear();
	printf("%d\n",str7.length() ); //0

	//11.substr()	substr(pos,len) 返回从pos号开始，长度为len的字串a。 复杂度O(len)
	str7 = "thank you very much";
	cout << str7.substr(0,5) << endl; //thank
	cout << str7.substr(6,8) << endl; //you very

	/*12.find() str.find(str2)  当str2是str的字串是，返回str中第一次出现的位置。
								如果不是，返回string::npos
				str.find(str2,pos)	从str的pos位，开始匹配str2.
				复杂度O(nm)
	*/
	string str8 = "you";
	if (str7.find(str8) != string::npos)
	{
		cout << str7.find(str8) << endl;	//6
	}

	//13.replace() 

	return 0;
}
