#include <stdio.h>

int main() {
  int n, i = 0;
  
  printf("Enter a number: ");
  scanf("%i", &n);
  printf("\n\033[1m-----Showing numbers from 0 to %i-----\033[0m", n);

  for(i=0; i<=n; i++) {
    printf("\n%i", i);
  }
}
