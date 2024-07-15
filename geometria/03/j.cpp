#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

// URLs para estudo:
// Círculos Definição:
  // Páginas 34; Arco de um círculo:
  // https://github.com/edsomjr/TEP/blob/master/Geometria_Computacional/slides/circulos_definicao/circulos_definicao.pdf
  
  // Páginas 38; Corda de um círculo:
  // https://github.com/edsomjr/TEP/blob/master/Geometria_Computacional/slides/circulos_definicao/circulos_definicao.pdf

// Imagem explicativa da questão:
// https://github.com/CauaMatheus/TEP-Listas/blob/main/geometria/03/j.md

int main() {
  int n;
  cin >> n;

  cout << fixed << setprecision(8);
  for (int i = 1; i <= n; i++) {
    long double l, n, c;
    cin >> l >> n >> c;

    long double newLength = (1 + n * c) * l;

    long double rMax = 1e19;
    long double rMin = 0;
    long double r;
    long double angle;
    for (;;) {
      r = (rMax + rMin)/2;

      angle = newLength/r;
      long double chord = 2*r*sin(angle/2);

      if (abs(chord - l) <= 1e-8) {
        break;
      }

      if (chord < l) {
        rMin = r;
      } else {
        rMax = r;
      }
    }

    long double res = r - cos(angle / 2) * r;
    cout << "Case " << i << ": " << res << endl;
  }
}