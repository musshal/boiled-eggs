#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
  /* kamus */
  int casos, eggs, maxEggs, maxWeight, val;
  int tot, totW;
  
  /* algoritma */
  scanf("%d", &casos);
  
  for (int a = 1; a <= casos; a++) {
    vector<int> vec;
    scanf("%d %d %d", &eggs, &maxEggs, &maxWeight);

    for (int b = 0; b < eggs; b++) {
      scanf("%d", &val);
      vec.push_back(val);
    }
    
    tot = totW = 0;
    
    for (int x = 0; x < vec.size(); x++) {
      totW += vec[x];

      if (totW > maxWeight)
        break;
      else if ( tot < maxEggs)
        tot++;
      else
        break;
    }
    
    printf("Case %d: %d\n", a, tot);
  }
  
  return 0;
}