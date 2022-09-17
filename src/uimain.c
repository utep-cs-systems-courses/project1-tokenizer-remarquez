#include <stdio.h>
#include "tokenizer.h"

int main(){
  
  puts("Welcome to the tokenizer");

  while(1){

    fputs("Select 't' to tokenize or 'q' to exit\n",stdout);
    fflush(stdout);
    int c;
    while((c = getchar()) == 'n');
    if(c == EOF)
      goto done;

    switch(c){
      case 'q':
	puts("Bye");
	goto done;

	default:
	  printf("Unrecognized option '%c',please try again!\n",c);
    }
  }

 done:
  return 0;
}
