#include<iostream>
#include<conio.h>
using namespace std;
void Swap(int *xp,int *yp){
	int Swapped=*xp;
	*xp=*yp;
	*yp=Swapped;
}
void Bubble_Sort(int A[],int N){
	int Pass;
	int K;
	for(int Pass =0;Pass<N-1;Pass++){
	for(int K=0;K<N-Pass-1;K++){
		if(A[K]>A[K+1])
		Swap(&A[K],&A[K+1]);
	}
	}
}
void Display(int A[],int Size){
	for(int i=0;i<Size;i++){
		cout<<A[i]<<" "<<endl;
	}
}
int main(){
	int A[]={67,41,55,63,78,11,53,98};
	int N=sizeof(A)/sizeof(A[0]);
	Bubble_Sort(A,N);
	cout<<"Sorted Array : \n"<<endl;
	Display(A,N);
	getch();
}
