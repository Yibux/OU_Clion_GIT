#include <stdio.h>
int Policz(int a,int b)
{
    return a*b;
}

int main() {
    int a=2,b=3;
    printf("W pierwszych branchu; %d * %d = %d",a,b, Policz(a,b));
    return 0;
}
