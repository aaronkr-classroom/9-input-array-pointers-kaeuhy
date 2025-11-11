// my_atoi.c
#include <stdio.h>

#define STR_MAX 16

int my_atoi(char string[])
{
  int count = 0, num = 0;
  // 문자열이 끝날 때까지 반복함
  while (string[count] != 0)
  {
    // 반복할 때마다 이전 값에 10을 곱해서 자릿수를 증가시킴
    num = num * 10 + string[count] - '0'; // '0' = 48
    count++;                              // 다음 문자로 이동
  }
  return num;
}

int main(void)
{
  int first_num, second_num;
  char first_str[STR_MAX], second_str[STR_MAX];

  printf("1st num: ");
  fgets(first_str, STR_MAX, stdin);
  printf("2nd num: ");
  fgets(second_str, STR_MAX, stdin);

  // printf("문자합:\n");
  // printf("%s + %s = %s", first_str, second_str, first_str + second_str);

  first_num = my_atoi(first_str);
  second_num = my_atoi(second_str);

  printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);

  return 0;
}