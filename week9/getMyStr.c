#include <stdio.h>

#define MAX_CH 25

int getMyStr(char buffer[], int limit)
{
  int i = 0;
  int ch;

  while ((ch = getchar()) != '\n' && ch != EOF)
  {
    if (i < limit - 1)
    {
      buffer[i++] = (char)ch;
    }
    else
    {
      while (getchar() != '\n' && getchar() != EOF)
        ;
      buffer[i] = '\0';
      return 0;
    }
  }

  buffer[i] = '\0';
  return 1; // 입력 초과 현상이 발생했음을 알림
}

int main(void)
{
  char input_str[MAX_CH];
  int state;

  printf("Enter text (max %d chars): ", MAX_CH - 1);
  state = getMyStr(input_str, MAX_CH);

  if (state)
    printf("input: %s\n", input_str);
  else
    printf("input: %s -> out of range\n", input_str);

  return 0;
}