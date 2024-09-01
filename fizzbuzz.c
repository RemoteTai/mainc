#include <stdio.h>

int main() {
  // Code here

//Output numbers from 1 to 100
 
 int i;
 for (i = 1; i<= 100; i++){
 	if (i % 15 == 0){
	 printf("FizzBuzz\n");
 	}
	 else if (i % 5 == 0){
 	printf("Buzz\n", i);
	 }
     	else if(i % 3 == 0){
        printf("Fizz\n");
        }
     	else{
        printf("%d\n", i);
        }
 }
}