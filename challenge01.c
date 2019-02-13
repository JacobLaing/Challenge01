#include  <stdio.h>
#include <math.h>

int main () {
  int num = 0, digit = 0, numDigits = 0, result = 0;
  printf("Please enter a number: ");
  scanf("%d", &num);  //take input from user
  while (num >= 10) {  //while there is more than one digit in num
    digit = num % 10;  //find what ones digit is
    result += (digit + 1) * (pow(10, numDigits));  //add one to the digit then add it to what the new number will be.
                                                   //Multiplying by 10 ^ numDigits puts the digit in the correct place
    num /= 10;  //remove the digit from the number since we are done with it
    if (digit == 9) { //if the digit we just worked on was a 9 we have to move the place value over 2 since it becomes 10
      numDigits += 2;
    }
    else { //if the digit was anything other than 9 we only have to move left one place value
      numDigits++;
    }
  }
  result += (num + 1) * (pow(10, numDigits)); //compute the result from the last (left-most) digit and add to the result
  printf("Your new number is: %d\n", result); //print the final result
}
