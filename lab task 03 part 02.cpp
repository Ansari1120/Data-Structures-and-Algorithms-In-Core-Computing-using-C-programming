#include<iostream>
using namespace std;

int BINARY_SEARCH(int DATA[],int BEG,int END,int ITEM){
	if(END>=1){
		int MID=BEG+(END-BEG)/2;
		
		 if(DATA[MID]==ITEM)
        return MID;
        
		if(DATA[MID]<ITEM)
		return BINARY_SEARCH(DATA,(MID+1),END,ITEM);
		
		return BINARY_SEARCH(DATA,BEG,(MID-1),ITEM);
	}
	return -1;
}
int main(){
	int N;
	cout<<"Enter how many elements you want to input : ";
	cin>>N;
	int DATA[N];
	cout<<"enter elements here : ";
	for(int i=0;i<N;i++){
		cin>>DATA[i];
	}
	int ITEM=56;
	int Check=BINARY_SEARCH(DATA,0,N-1,ITEM);
	if(Check!=-1)
	cout<<"Element found at index : "<<Check;
	else 
	cout<<"Element not found ! ";
	return 0;
}
