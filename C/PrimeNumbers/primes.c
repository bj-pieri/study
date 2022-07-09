#include <stdio.h>
int main()
{
  int prime;
  int div;
  int range;

  scanf("%d", &range);

  for (prime = 3 ; prime <= range; prime = prime + 2)
  {
      for (div = 2; div < (prime / 2) + 1 ; div++)
      {
        if (prime%div == 0)
          break;
      }
      
      if (div == prime / 2 + 1)
      {
        printf("%d ", prime);
      }
  }
  return 0;
}
