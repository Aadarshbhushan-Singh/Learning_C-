#include <stdio.h>
int main()
{
  int c = 0;
  char s[100];
  scanf("%[^\n]%*c",s);

	int a,e,i,o,u=0;
  while (s[c] != '\0') {
    if(s[c]=='a' || s[c]=='A')
    {
    	a++;
	}else if(s[c]=='e' || s[c]=='E')
    {
    	e++;
	}else if(s[c]=='i' || s[c]=='I')
    {
    	i++;
	}else if(s[c]=='o' || s[c]=='O')
    {
    	o++;
	}else if (s[c]=='u' || s[c]=='U')
    {
    	u++;
	}
	c++;
  }
  printf("a\n%d\n",a);
  printf("e\n%d\n",e);
  printf("i\n%d\n",i);
  printf("o\n%d\n",o);
  printf("u\n%d\n",u);

 	
  return 0;
}
