#include <cstring>
#include <cstdio>

int dp[303], m[33];

int main()
{
  /* kamus */
  int T, n, P, Q;

  /* algoritma */
  while (~scanf("%d", &T))
    for (int t = 1; t <= T; ++t) {
      scanf("%d%d%d", &n, &P, &Q);

      for (int i = 0; i < n; ++i)
        scanf("%d", &m[i]);
    
    memset(dp, 0, sizeof(dp));

    for (int i = 0; i < n; ++i)
    for (int j = Q; j >= m[i]; --j)
      if (dp[j] < dp[j - m[i]] + 1)
        dp[j] = dp[j - m[i]] + 1;

    if (dp[Q] > P)
      dp[Q] = P;

    printf("Case %d: %d\n", t, dp[Q]);
    }
  
  return 0;
}