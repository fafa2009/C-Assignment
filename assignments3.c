#include <stdio.h>

int main() {
int numb;
int number;
for (number = 2; number <= 4; number++){ 
for (numb = 0; numb <= 10; numb++) {
  int mult= number * numb;
  printf("%d", number);
  printf("*");
  printf("%d", numb);
  printf("=");
  printf("%d", mult);
  printf(" , ");

  if (mult==30 || mult==40)
  {
 	  printf("\n");
  }
  if (mult==20 && number != 4){
	 printf("\n");
  }
}
}
return 0;
}

