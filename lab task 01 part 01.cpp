#include<iostream>
using namespace std;
int main(){
	string s;
	cout<<"ENTER STRING : ";
	cin>>s;
	int len=0;
	for(int i=0;s[i]!='\0';i++){
		len=len+1;
	}
	cout<<"Length of String = "<<len;
	return 0;
}
