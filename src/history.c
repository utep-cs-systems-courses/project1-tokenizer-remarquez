#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"


List* init_history(){
  List *h;
  h = malloc(sizeof(List));
  h->root = NULL;
  return h;
}


void add_history(List *list, char *str){
   Item * nn = (Item*)malloc(sizeof(Item));
   int a = 0;
   while(str[a] != '\0'){
     a++;
     
   }
   nn->str = copy_str(str,a);
   
   if (list->root == NULL) {
     list->root = nn;
     nn->id = 1;
   }
   else {
     Item *temp = list->root;
     int id = temp->id;
     while(temp->next != NULL){
       id += 1;
       temp = temp->next;
     }
     id++;
     temp->next = nn;
     nn->id = id;
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
 printf("Linked list: \n");
 while(temp != NULL){  
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





