#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i, sum=0;
  int result[2];

  /* init randam function by time */
  srand((unsigned int)time(NULL));
  
  printf("Rolling dice...\n");
  for(i=0;i<2;i++){
    sum += result[i] = rand()%6+1;
    printf("Die %d: %d\n", i+1, result[i]);
  }
  printf("Total value: %d\n", sum);
  
  if(sum > 7){
    printf("You won!\n");
  }
  else{
    printf("You lost!\n");
  }
}
