#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of elements in the array : ";
	cin>>n;
	int arr[n];
	for(int i =0; i<n; i++){
		cout<<"Enter the values in the array : ";
		cin>>arr[i];
	}
	
	int count =0;
while(arr[0]!= 0){

	for(int i =0 ; i<n; i++){
		if(arr[i]%2 != 0){
			arr[i] = arr[i]-1;
			count++;
		}
	}
	
	for(int  i =0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"count: "<<count<<endl;
	int flag = 0;
	for(int i =0; i<n; i++){
		if(arr[i]%2 == 0){
			flag++;
		}
	}
	cout<<"Flag: "<<flag<<endl;
	if(flag ==n && arr[0] != 0){
		for(int i =0; i<n; i++){
			arr[i] = arr[i]/2;
			
		}
		count++;
	}
	for(int  i =0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"----"<<endl;
	cout<<"count:"<<count<<endl;
	flag =0;
}
	cout<<"final count: "<<count;
}
