#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 5;
#if !defined(MESSAGE)
#define MESSAGE "You wish!"
#endif

int mySquare(int n1);

int main()
{
   // 1;
   int a, b, c;

   a = 10;
   b = 20;
   c = a + b;

   for (int i = 0; i < c; i++)
   {
      if (i == 14)
      {
         i = 15;
      }
      else if (i == 18)
      {
         i = 20;
      }
      char snum[10];
      itoa(i, snum, 10);
      printf("%s\n", snum);
   }

   // 2;
   printf("\n");
   int n[10];
   for (int i = 0; i <= 10; i++)
   {
      for (int j = 0; j <= i; j++)
      {
         n[i] = i + 1;
         printf("Element[%d] = %d\n", j, n[j]);
      }
   }

   // 3;
   char name[100];
   char *description;

   strcpy(name, "Elior Cohen");

   description = malloc(30 * sizeof(char));

   if (description == NULL)
   {
      fprintf(stderr, "Error...");
   }
   else
   {
      strcpy(description, "Elior coding C Language...\n");
   }

   description = realloc(description, 100 * sizeof(char));

   if (description == NULL)
   {
      fprintf(stderr, "Error...");
   }
   else
   {
      strcat(description, "I'm coding C Language...\n");
   }

   printf("\nName = %s\n", name);
   printf("Description: %s\n", description);

   free(description);

   // 4;
   int getFile;
   FILE *file;
   file = fopen("text.txt", "r");
   if (file)
   {
      while ((getFile = getc(file)) != EOF)
      {
         putchar(getFile);
      }
      fclose(file);
   }

   // 5;
   printf("\n\nHere is the message: %s\n", MESSAGE);

   // 6;
   int n2;
   n2 = mySquare(5);
   printf("\nSquare number: %d\n", n2);

   // 7;
   int num1 = 20;
   int num2 = 0;
   int quotient;

   if (num2 == 0)
   {
      fprintf(stderr, "\nDivision by zero! Exiting...\n");
      exit(-1);
   }

   quotient = num1 / num2;
   fprintf(stderr, "\n\nValue of quotient : %d\n", quotient);

   exit(0);

   return 0;
}

// 6;
int mySquare(int n1)
{
   int p;
   p = n1 * n1;
   return p;
}
