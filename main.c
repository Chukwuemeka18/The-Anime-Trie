#include <stdio.h>
#include <stdlib.h>

typedef char* string;

typedef struct anime{

  string show;
  struct anime* year[10];

} 
node;


int main(void) {
  printf("Hello Anime\n\n");


  node* n = malloc(sizeof(node));


  //Yu YU Hakusho
  node* n1 = malloc(sizeof(node));
  n->year[1] = n1;

  node* n19 = malloc(sizeof(node));
  n1->year[9] = n19;

  node* n199 = malloc(sizeof(node));
  n19->year[9] = n199;

  node* n1992 = malloc(sizeof(node));
  n199->year[2] = n1992;
  n1992->show = "Yu YU Hakusho";

  
  //Naruto
  node* n1999 = malloc(sizeof(node));
  n199->year[9] = n1999;
  n1992->show = "Naruto";

  
  //One Piece
  node* n1997 = malloc(sizeof(node));
  n199->year[7] = n1997;
  n1992->show = "One Piece";


  //Bleach
  node* n2 = malloc(sizeof(node));
  n->year[2] = n2;

  node* n20 = malloc(sizeof(node));
  n2->year[0] = n20;

  node* n200 = malloc(sizeof(node));
  n20->year[0] = n200;

  node* n2002 = malloc(sizeof(node));
  n200->year[2] = n2002;
  n2002->show = "Bleach";


  //Dragon Ball
  node* n198 = malloc(sizeof(node));
  n19->year[8] = n198;

  node* n1984 = malloc(sizeof(node));
  n198->year[4] = n1984;
  n1984->show = "Dragon Ball";


  //Black Clover
  node* n201 = malloc(sizeof(node));
  n20->year[1] = n201;

  node* n2015 = malloc(sizeof(node));
  n201->year[5] = n2015;
  n2015->show = "Black Clover";
  
  
  ////////////////////////
  int i = 1;
  int j = 0;
  int k = 0;
  int l[4];
  for(node* temp = n; temp !=NULL; temp = temp->year[j]){
    if (i == 5){
      break;
    }
    printf("%ith digit: ", i);
    scanf("%i", &j);
    l[i-1] = j;
    k = l[i-1];
    if(i != 1 && i != 3){
      if (temp->year[j]->year[k] == NULL){
        printf("\n%s\n", temp->year[j]->show);
      }
    }
    i++;

  }

  //numbers means the thing the numberth pointer n pointing to
  return 0;
}