#include<iostream>
using namespace std;
int main(){
	int Array[]={46,91,28,63,40,84,42,58,51};
	int i,j,k=3,n=9;
	cout<<"Elements before deletion in the array are : "<<endl;
	for(i=0;i<n;i++){
		cout<<Array[i]<<" "<<endl;
	}
	j=k;
	while(j<n){
		Array[j-1]=Array[j];
		j=j+1;
	}
	n=n-1;
	cout<<"Elements after deletion in the array are : "<<endl;
	for(i=0;i<n;i++){
		cout<<Array[i]<<endl;
	}
	return 0;
}

