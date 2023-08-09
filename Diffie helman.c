#include <stdio.h>
#include <math.h>
int mod_exp(int a, int b, int n) {
int result = 1;
a = a % n;
while (b > 0) {
if (b & 1) {
result = (result * a) % n;
}
b = b >> 1;
a = (a * a) % n;
}
return result;
}
int main() {
int q = 7;
int g = 5;
int a = 3;
int b = 4;
int A = mod_exp(g, a, q);
int B = mod_exp(g, b, q);
int s = mod_exp(B, a, p);
printf("The public parameters are:\n");
printf("p = %d\n", p);
printf("g = %d\n", g);
printf("The private keys are:\n");
printf("a = %d\n", a);
printf("b = %d\n", b);
printf("The public keys are:\n");
printf("A = %d\n", A);
printf("B = %d\n", B);
printf("The shared secret key is:\n");
printf("s = %d\n", s);
return 0;
}
