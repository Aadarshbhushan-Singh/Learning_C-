//#include <iostream>
//using namespace std;
//int leader(int array[], int num);
//int main(){
//	int num;
//	cout<<"Enter the number of element: ";
//	cin>>num;
//	int array[num];
//	for (int i=0; i<num; i++){
//		cin>>array[i];
//	}
//	leader(array, num);
//	return 0;
//}
//
//int leader(int array[], int num){
//	for (int i=0; i<num-1; i++){
//		int leader=array[i];
//		int leaderTrue=0;
//		for (int j=i+1; j<num; j++){
//			if (leader<array[j]){
//				leaderTrue+=1;
//			}
//		}
//		if (leaderTrue==0){
//			cout<<leader<<" is leader\n";
//		}else{
//			cout<<leader<<" is not leader\n";
//		}
//	}
//}
#include <iostream>
#include <string.h>
using namespace std;

int leader(int array[], int num);

int main(){
    int num;
    cin>>num;
    int array[num];
    for (int i=0; i<num; i++){
        cin>>array[i];
    }
    leader(array, num);
    return 0;  
};

int leader(int array[], int num){
    for (int i=0; i<num-1; i++){
        int leader=array[i];
        int leaderTest=0;
        for (int j=i; j<num; j++){
            if (leader<array[j]){
                leaderTest+=1;
            }
        }
        if (leaderTest==0){
            cout<<leader;
        }
    }
}
