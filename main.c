/*#include <stdio.h>
int main() {
    int n, i, j;
  do{
      printf("Inserie il numero positivo di righe che vuoi: ");
      scanf("%d", &n);
  }
  while(n<=0);
  for(i=0; i<n; i++){
      for(j=0; j<i+1; j++){
          printf("*");
      }
      printf("\n");
  }
}*/

#include <stdio.h>
int main() {
    int n, i, j;
    do {
        printf("Inserie il numero positivo di righe che vuoi: ");
        scanf("%d", &n);
    } while (n <= 0);
    for (i = 0; i < n; i++) {
        printf(" ");
        for (j = n; j >= i + 1; j--) {
            printf(" ");
        }
        printf("\n");
    }
}