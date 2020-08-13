#include <stdio.h>
using namespace std;

void update(int *a,int *b) {
    int sum= (*a)+(*b);
    int difference;
    if (*a>*b){
        difference=(*a)-(*b);
    }
    else {
        difference=(*b)-(*a);
    }
    printf("%d\n%d", sum, difference);

}

int main() {
    int a, b;
    int *pa = &a;
    int *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}

