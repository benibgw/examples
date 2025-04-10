#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Num, user_Num;

main() {

do {

srand(time(NULL));

Num = (rand() % 6) + 1;

printf("Tente adivinhar o numero :");
scanf("%d", &user_Num);

if(user_Num == Num) {
  printf("Voce acertou !!");
}

else {
  printf("Voce errou :(\n");
}
}
while (user_Num != Num);

return 0;
}
