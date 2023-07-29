#include <stdio.h>
void sdp(int a, int b) {
  int sum, dif, pro;
  sum = a + b;
  dif = a - b;
  pro = a * b;
  printf("The Sum Is %d\nThe Difference Is %d\nThe Product Is %d\n", sum, dif,
         pro);
}
int main() {
  int c, d;
  printf("Enter 2 Numbers - ");
  scanf("%d %d", &c, &d);
  sdp(c, d);
}
