#include <stdio.h>
int main(){
	
	int r,c,i,j,flag,ch,k,p=0;
	scanf("%d",&r);
	scanf("%d",&c);
	
	int inp[r][c];
	int b[r][c];
	int C[r][c];
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			scanf("%d",&inp[i][j]);
		}
	}
	
	int arr[50];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			flag=0;
			ch=inp[i][j];
			for(k=0; k<20; k++){
				if(ch==arr[k]){
					flag=1;
					break;
				}
			}
			if(flag=0){
				arr[p]=ch;
				p++;
				b[i][j]=ch;
			}else{
				b[i][j]=0;
			}
			C[i][j]==inp[i][j]-b[i][j];
		}
	}
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d\n",b[i][j]);
		}
	}
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d\n",C[i][j]);
		}
	}
	
	
	return 0;
}
