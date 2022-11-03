#include <iostream>
#include <cmath>

using namespace std;

double S0(const int k,  const int N) {
   int i = k;
   double S = 0;
   do {
      S += pow(i, 2) / (pow(k, 2) + pow(N, 2));
      i++;
   } while (i <= N);
   return S;
}

double S1(const int k, const int N, const int i) {
   if (i <= N)
      return  pow(i, 2) / (pow(k, 2) + pow(N, 2)) + S1(k, N, i + 1);
   else
      return 0;

}

double S2(const int k, const int N, const int i) {
   if (i < k)
      return 0;
   else
      return  pow(i, 2) / (pow(k, 2) + pow(N, 2)) + S2(k, N, i - 1);
}

double S3(const int k, const int N, const int i, double t) {
   t = t + pow(i, 2) / (pow(k, 2) + pow(N, 2));
   if (i >= N)
      return t;
   else
      return  S3(k, N, i + 1, t);
}

double S4(const int k, const int N, const int i, double t) {
   t = t + pow(i, 2) / (pow(k, 2) + pow(N, 2));
   if (i <= k)
      return t;
   else
      return  S4(k, N, i - 1, t);
}

int main()
{
   int k;
   int N;
   cout << "k = "; cin >> k;
   cout << "N = "; cin >> N;

   cout << "(iter)        S0 = " << S0(k, N) << endl;
   cout << "(rec up ++)   S1 = " << S1(k, N, k) << endl;
   cout << "(rec up --)   S2 = " << S2(k, N, N) << endl;
   cout << "(rec down ++) S3 = " << S3(k, N, k, 0) << endl;
   cout << "(rec down --) S4 = " << S4(k, N, N, 0) << endl;


   return 0;
}