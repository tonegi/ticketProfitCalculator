#include <stdio.h>

int main(void) {
  int age = 0, totalRaised = 0, qtyFirstGroup = 0, qtySecondGroup = 0, qtyThirdGroup = 0;

  while(age >= 0) {
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age < 0) {
      break;
    }
    else if(age < 3) {
      printf("Ticket's price: USD$ 0.00\n\n");
      qtyFirstGroup++;
    } 
    else if(age < 13) {
      printf("Ticket's price: USD$ 10.00\n\n");
      qtySecondGroup++;
      totalRaised += 10;
    }
    else {
      printf("Ticket's price: USD$ 15.00\n\n");
      qtyThirdGroup++;
      totalRaised += 15;
    }

  }

  printf("\nTotal raised: USD$ %d\n", totalRaised);
  printf("0-2 years old: %d\n", qtyFirstGroup);
  printf("3-12 years old: %d\n", qtySecondGroup);
  printf("13+ years old: %d\n", qtyThirdGroup);

  return 0;
}
