#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int i,count=0;
  int HoT[3];
  char name[15];

  srand((unsigned int)time(NULL));
  for(i=0;i<3;i++) HoT[i]=rand()%2;

  printf("Who are you?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);

  printf("Tossing a coin...\n");
  for(i=0;i<3;i++){
    if(HoT[i]==1){
      printf("Round %d: Heads\n",i+1);
      count++;
    }
    else printf("Round %d: Tails\n",i+1);
  }

  printf("Heads: %d, Tails: %d\n",count,3-count);
  if(count>1) printf("%s won!\n",name);
  else printf("%s lost!\n",name);

  return 0;
}
