#include <stdio.h>
int main(){
int i;
int j;

for (i=48; i < 57; i++){
  for(j = 49; j <58; j++){
if (i < j){
	  putchar(i);
	  putchar(j);

	  putchar(',');
	  putchar(' ');
		}
}
}
for (i=0; i < 56; i=i+2){
 printf("%d",i); 
 printf(",");
 printf(" ");
 if (i==20){
  printf("\n");
  }   

}

	return 0;
	}

