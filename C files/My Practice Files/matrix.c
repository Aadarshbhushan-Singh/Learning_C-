#include <math.h>
#include <stdio.h>

int main()
{
 
    int n,m, j;
    int i=0,rdSum=0,ldSum=0, fa, sa;
    
 scanf("%d",&n);	
 scanf("%d",&m);
    int a[n][n];
    
 for(int 	fa = 0; fa < n; fa++)
 {
       for(int sa = 0; sa < n; sa++)
    {
         
          scanf("%d",&a[fa][sa]);
       }
    }
 
  while(i<n)
  {
    rdSum=rdSum+a[i][i];
    i++;
  }
    
 j=n-1,i=0;
    
  while(i<n)
  {
    ldSum=ldSum+a[i][j];
    i++;
    j--;
  }
    
 printf("%d",abs(rdSum-ldSum));
    return 0;
}
