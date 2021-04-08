#include <stdio.h>
#include <stdlib.h>
#include <string.h	>

int search (char string[], char s[])
{
	
	int strLen, wordLen;
	
	strLen  = strlen(string);  
    wordLen = strlen(s);
    int index[100];
    int i,j,found;
    int count;
    int indexArray[100];
    int ind=0;
    for(i=0; i<strLen - wordLen; i++)
    {
        found = 1;
        for(j=0; j<wordLen; j++)
        {
            
            if(string[i + j] != s[j])
            {
                found = 0;
            }
        }

        if(found == 1)
        {
        	count++;
        	indexArray[ind]=i+1;
        }
    }
    
    printf("%s\n",s);
    printf("%d\n",count);
    

	int k;
	for (k=0; indexArray[k]!=0; k++)
	{
		printf("%d\n",indexArray[k]);
	}
    
    
	return 0;
}
int main() {
   char string[200];
   gets(string);
   int n;
   scanf("%d",&n);
   int i=0;
   for (i=0; i<n+1; i++)
   {
   	char s[200];
   	gets(s);
   	search (string, s);
   }
      
   return 0;
}
