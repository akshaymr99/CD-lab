#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

  char array[][20] = {"int", "for", "if", "else", "auto", "break", "case", "char",
                      "const", "continue", "default", "do", "double", "else", "enum", "float", "long",
                      "return", "void"};
  FILE *ptr;
  char string[100];
  char *token;

  ptr = fopen("test.txt", "r");
  while (fgets(string,100,ptr))
  {
    token = strtok(string, " ");
    while(token != NULL)
    {
      for (int i = 0; i < 20; i++)
      {
        if (strcmp(array[i], token) == 0)
        {
          printf("%s\n", array[i]);
        }
      }
      token = strtok(NULL, " ");
    }
  }
  fclose(ptr);
  return 0;
}
