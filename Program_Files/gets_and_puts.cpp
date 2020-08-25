#include <iostream>
using namespace std;

int main(){
    //When we use scanf("") then the space is considered as the end of the string.
    //Try input "Aadarsh Singh" in following code.
    char name[20];
    printf("Enter your name: ");
    scanf("%s",name);
    printf("%s",name);

    //Now when we use gets we can take string with space
    char secondName[20];
    printf("\nEnter the name again: ");
    scanf("%s",secondName);
    printf("%s",secondName);

    //When we use puts we don't have to put extra line i.e \n
    puts("This statement is printed by puts.");
    puts("Same here. No difference");
    return 0;
}