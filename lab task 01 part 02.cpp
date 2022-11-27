#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char s1[100];
	char s2[100];
			cout<<"Enter first string : ";
	cin>>s1;
		cout<<"Enter Second string : ";
	cin>>s2;
	int i=strlen(s1);
	int j=strlen(s2);
	int count = 0;
while(count<=j){
	s1[i]=s2[count];
	i=i+1;
	count=count+1;
};
	cout<<"Answer : "<<s1;
	return 0;
	
}
