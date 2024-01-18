#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, sum, i, s1, s2, check = 0 ;
   cin >> n >> sum;
   int a[n];
   map<int, int> count;
   for (i = 0; i < n; i++)
   {
      cin >> a[i];
      count[a[i]]++;
   }
   
   for (i = 0; i < n; i++)
   {
      s1 = a[i];
      s2 = sum - a[i];
      if ((s1 == s2 && count[s1] > 1) || (count[s1] > 0 && count[s2] > 0 && s1 != s2))
      {
         check = 1;
         cout << i + 1 << " ";
         a[i] = 0;
         break;
      }
   }
   if (check)
   {
      for (i = 0; i < n; i++)
      {
         if (a[i] == s2)
         {
            cout << i + 1;
            break;
         }
      }
   }
   else
      cout << "IMPOSSIBLE";
}