#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int p=0;
	std::string s1="ahmedaliansari";
	const char*s2=s1.c_str();
	int dest[100]={'s2'};
	string s=s1.substr(1,7);
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
