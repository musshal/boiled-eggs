#include <stdio.h>
#define sz 35

int main()
{
  /* kamus */
  long n, p, q, i, j, k, cnt, T, cas = 1, sum, a[sz];

  /* algoritma */
  // freeopen();
  scanf("%ld", &T);

  while (T--) {
    scanf("%ld %ld %ld", &n, &p, &q);

    for (i = 0; i < n; i++){
      scanf("%ld", &a[i]);
    }

    sum = 0;
    cnt = 0;

    for (i = 0; i < n; i++){
      sum += a[i];

      if (sum > q || cnt >= p)
        break;

      cnt++;
    }

    printf("Case %ld: %ld\n", cas++, cnt);
  }

  return 0;
}