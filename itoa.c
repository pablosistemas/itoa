#include <stdio.h>
#include <stdlib.h>

// conversao int para char

char * itoa(int num) {
   int count = 1;
   int n = num;
   while(n > 10) { n = n/10; count++; }

   char *str = malloc(count+1);

   str[count] = '\0';
   
   n = num;

   for(int i = count-1; i >= 0; i--) {
      str[i] =  (n%10) + '0';
      n = n /10;
   }

   return str;

}

int main(int argc, char **argv) {
   
   if (argc < 2) {
      printf ("Passe numero como argumento\n");
      exit(EXIT_FAILURE);
   }

   char *numFinal = itoa(atoi(argv[1]));
   printf("%s\n",numFinal);

   free(numFinal);

   return 0;
}
