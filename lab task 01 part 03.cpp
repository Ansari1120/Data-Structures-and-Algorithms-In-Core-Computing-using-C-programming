#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int p=0;
	char dest[100]={'a','b','c','d','e','f','g','h'};
	std::string sr=std::string(dest);
	string s=sr.substr(1,7);
	int i=p;
	int count=0;
	int len=15;
	while(count<len){
		dest[count]=s[i];
		count=count+1;
		i=i+1;
		dest[count]='\0';
	}
	cout<<"Result : "<<s;
	return 0;	
}
