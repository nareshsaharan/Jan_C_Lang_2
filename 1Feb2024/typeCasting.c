#include<stdio.h>

int main() {
    
    int a = 1;
    int b = 3;
    int c = 4;
    
    //float f = (a + b + c) / 3;
    //float f = (a + b + c) / 3.0;
    //float f = 1.0 * (a + b + c) / 3;
    float f = (float)(a + b + c) / 3;
    printf("%f", f);
    
    return 0;
}
