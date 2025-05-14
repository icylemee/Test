#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char *whitespace_number(int n)
{
  char  *s;
  int   i = 0;
  int   count = 0;
  int   n2 = n;

  if (n2 < 0)
    n2 *= -1;
  while (n2 >= 1)
  {
    n2 /= 2;
    count ++;
  }
  int size = count + 2 + 1;
  s = malloc(sizeof(char) * size);
  if (s == NULL)
    return (s);
  if (n < 0)
  {
    s[i++] = '\t';
    n *= -1;
  }
  else
    s[i++] = ' ';
  while (n != 0)
  {
    s[i++] = (n % 2) + '0';
    n /= 2;
  }
  s[i++] = '\n';
  s[i] = '\0';
  int   j = 1;
  char  save;
  int size2 = i - 2;
  while (j <= ((i-2)/2))
  {
    save = s[j];
    s[j++] = s[size2]; 
    s[size2--] = save;
  }
  j = 1;
  while (s[j] != '\n')
  {
    if (s[j] == '0')
      s[j++] = ' ';
    else 
      s[j++] = '\t';
  }
  s[j + 1] = '\0';
  return (s);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%s\n", whitespace_number(atoi(argv[1])));
	}
}