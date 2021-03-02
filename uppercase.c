#include <stdio.h>

int main(int argc, char *argv[]) {   
   char user_in;
   char out;
   
   while((user_in = getchar()) != EOF) {
   	out = user_in;
   	//is this character a-z?
   	if((user_in >= 97) && (user_in <= 122)) {
   	  //lowercase -> uppercase
   	  out = user_in - 32;
   	}
   	putchar(out);
   }
   
   return 0;

}
