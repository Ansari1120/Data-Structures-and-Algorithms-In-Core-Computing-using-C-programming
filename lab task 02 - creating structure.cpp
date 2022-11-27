#include<iostream>
#include<cstring>

using namespace std;
void print_data(struct person data);
struct person{            //structure creation
	char Name[60];
	int Age;
	float Salary;
};
int main(){
	struct person data;        
	char nam1[60];
	cout<<"enter name : "<<endl;
	cin>>nam1;                   //data will be displayed by taking user input.
	strcpy(data.Name,nam1);
	cout<<"enter age : "<<endl;
	int age1;
	cin>>age1;
	data.Age=age1;
	cout<<"Enter salary "<<endl;
	float sal;
	cin>>sal;
	data.Salary=sal;
	print_data(data);        //for calling created function into main method.
	return 0;
}
void print_data(struct person data){   //function created for displaying user input values.
	cout<<"Name : "<<data.Name<<endl;
	cout<<"Age : "<<data.Age<<endl;
	cout<<"Salary : "<<data.Salary<<endl;
}
