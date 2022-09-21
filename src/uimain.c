#include <stdio.h>
#include "tokenizer.h"
#include "history.h"

int main(){
  
  puts("Welcome to the tokenizer");



    fputs("Select 't' to tokenize or 'q' to exit\n",stdout);
    fflush(stdout);
    int c;
    while ((c = getchar()) == '\n');
    if (c == EOF)
      goto done;
    switch (c) {
    case 's':
      puts("You selected space char:");
      gets(a);
     space_char(a);
      break;
    default:
      printf("Unrecognized option '%c', please try again!\n", c);
    }
 done: 
    return 0;
}
