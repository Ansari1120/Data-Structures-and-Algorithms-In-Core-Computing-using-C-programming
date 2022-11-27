#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
struct person{
	char name[40];
	int Age;
	float Salary;
};
int main(){
	struct person data1;
	strcpy(data1.name,"semi");
	data1.Age=30;
	data1.Salary=323411.3211;
	cout<<data1.name<<endl;
	cout<<data1.Age<<endl;
	cout<<data1.Salary<<endl;
	getch();
}
