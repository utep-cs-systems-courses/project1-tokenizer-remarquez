#include <stdio.h>
#include <stdlib.h>
#include "history.h"

typedef struct s_Item {
  int id;
  char *str;
  struct s_Item *next;
}Item;

typedef struct s_List {
  struct s_Item *root;
}List;


List* init_history(){
  Item *list;
  Item *cn;
  list =(Item *)malloc(sizeof(Item));
  cn = list;
  
}


void add_history(List *list, char *str){
  Item *nn;
  nn = (Item*)malloc(sizeof(Item));
  Item *cn = list;
  while(cn != NULL && cn->next != NULL){
    cn = cn->next;
  }
  nn->id = *str;
  nn->next = NULL;
  if(cn != NULL){
    cn->next = nn;
  }
  else{
    list = nn;
  }
}
/*
char *get_history(List *list, int id);


void print_history(List *list);


void free_history(List *list);*/



