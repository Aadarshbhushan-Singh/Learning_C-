#include <iostream>
using namespace std;
int bubbleSort(int array[], int num);

int main(){
	int num;
	cout<<"Enter the number of element: ";
	cin>>num;
	int array[num];
	for (int i=0; i<num; i++){
		cin>>array[i];
	}
	bubbleSort(array, num);
	return 0;
}

int bubbleSort(int a[], int num){
	int temp, i, j;
	for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<num+3; i++) {
   cout <<a[i]<<"\t";
}

return 0;
};
