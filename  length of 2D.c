#include <stdio.h>

int main() {

int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

int r;
int c;

 r = sizeof(a) / sizeof(a[0]);
 c = sizeof(a[0])/sizeof(a[0][0]);

    printf("%d\n", r);
    printf("%d\n", c);
  return 0;
}
