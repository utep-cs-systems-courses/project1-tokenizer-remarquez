#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"


List* init_history(){
  List *h = NULL;
  h = malloc(sizeof(List));;
  return h;
}


void add_history(List *list, char *str){
   Item * nn = (Item*)malloc(sizeof(Item));
   Item *temp = list->root;
   nn->str = str;
   if(list->root == NULL){
     nn->id = 1;
     temp = nn;
   }
   else{
     Item *h = temp;
     nn->id = 1;

     while(h->next != NULL){
       nn->id += 1;
       h = h->next;
     }
     h->next = nn;
     nn->id += 1;
   }
}

char *get_history(List *list, int id){
  Item *nn = list->root;
  char *i = " ";
  while(list != NULL){
    if(nn->id == id){
      i = nn->str;
      return i;      
    }
    nn = nn->next;
  }
  return i;
}


void print_history(List *list){
 int i = 1;
 Item *temp = list->root;
 if(list == NULL){
 printf("Its Empty\n");
 return;
}
printf("Linked list: ");
 while(list != NULL){  
  printf("[%d] %s \n",i, temp->str);
  temp = temp->next;
  i++;
}



void free_history(List *list){
  Item *temp = list->root;
  while(list != NULL){
   temp = temp->next;
   free(temp);
   }
  free(list);
}
}





