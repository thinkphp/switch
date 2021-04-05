#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int n,
	    digit;
	char ans[100];
	printf("%s\n", "Dati un N");
	scanf("%d", &n);

    if(n <= 9) {
        digit = 1;
    } else if(n <= 99){
		digit = 2;
	} else if(n <= 999) {
		digit = 3;
	} else if(n <= 9999) {
		digit = 4;
	}

	switch(digit) {
          case 1:
          printf("%d\n",n);     
          break;         
          case 2:
          printf("10 * %d + %d\n",n / 10, n % 10);  
          break;
          case 3:
          printf("%d * 100 + %d * 10 + %d\n",n / 100, n / 10 % 10, n % 10);
          break;
          case 4:
          printf("%d * 1000 + %d * 100 + %d * 10 + %d\n",n / 1000, n / 100 % 10, n / 10 % 10, n % 10);
          break;
          default:
          break;
	}	
	return 0;
}
