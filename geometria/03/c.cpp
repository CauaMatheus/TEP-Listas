#include <bits/stdc++.h>

using namespace std;

// URLs para estudo:
  // Imagem explicativa: Retas e pontos de tangencia entre ponto arbitrário e circulo.
  // https://github.com/CauaMatheus/TEP-Listas/blob/main/geometria/03/c.md

int main() {
  int n;
  cin >> n;

  cout << fixed << setprecision(6);
  while (n--) {
    int x, y, r;
    cin >> x >> y >> r;

    long double d = hypot(x, y);
    long double alpha = asin(r/d);
    long double beta = atan(((long double)y)/x);

    double t = sqrt(x*x + y*y - r*r);
    long double x1 = t*cos(beta + alpha);
    long double y1 = t*sin(beta + alpha);

    long double x2 = t*cos(beta - alpha);
    long double y2 = t*sin(beta - alpha);

    if(x2 < x1) {
      swap(x2, x1);
      swap(y2, y1);
    }

    cout << x1 << " " << y1 << endl;
  }
}
