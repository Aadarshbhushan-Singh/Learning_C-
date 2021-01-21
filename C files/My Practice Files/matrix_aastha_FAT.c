#include <stdio.h>
//Function to print_matrix
void printMatrix(int matrix[3][3], int n){
	int i=0, j=0;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d\n",matrix[i][j]);
		}
	}
}

int compareElement(int matrix[3][3], int ele){
	int i=0, j=0;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(ele=matrix[i][j]){
				return 0;
			}else{
				return matrix[i][j];
			}
		}
	}
	
}
int main(){
	int n, i=0, j=0, k=0, l=0;
	//Take n as input
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	//declear the matrix
	int matrix_a[n][n], matrix_b[n][n], matrix_c[n][n];
	
	//take matrix_a as user input
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d",&matrix_a[i][j]);
		}
	}
	
	//Find duplicate elements in matrix_b
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			matrix_b[i][j]=compareMatrix(matrix_a, matrix_a[i][j]);
		}
	}
	
	
	
	
	return 1;
}
