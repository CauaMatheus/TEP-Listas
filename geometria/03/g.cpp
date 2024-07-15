#include <bits/stdc++.h>

using namespace std;

// URLs para estudo:
  // Imagem explicativa: Retas e pontos de tangencia entre ponto arbitrário e circulo.
  // https://github.com/CauaMatheus/TEP-Listas/blob/main/geometria/03/g.md

int main() {
  int n;
  cin >> n;

  cout << fixed << setprecision(10);

  string trash;
  long long l, w;
  for(int i = 1; i <= n; i++) {
    cin >> l >> trash >> w;

    long double max = 400;
    long double min = 0;
    long double alpha = acos(1-((long double)(2*w*w))/(l*l + w*w));
    long double s;
    for(;;) {
      s = (max + min)/2;
      long double radius = (s*sqrt(l*l + w*w))/2;

      long double res = 2*(l*s + radius*alpha);
      if(abs(res - 400) < 1e-8) {
        break;
      } else if(res > 400) {
        max = s;
      } else if(res < 400) {
        min = s;
      }
    }

    cout << "Case " << i << ": " << (l*s) << " " << (w*s) << endl;
  }
}