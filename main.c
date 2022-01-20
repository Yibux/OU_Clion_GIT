#include <stdio.h>
int Policz (int a, int b) {
    return (a+b)*(a-b);
}
int main() {
    int a=2,b=3;
    printf("W pierwszych branchu; (%d + %d)*(%d - %d) = %d",a,b,a,b, Policz(a,b));
    return 0;
}
