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
    long double chord, n, c;
    cin >> chord >> n >> c;

    long double arc = (1 + n * c) * chord;

    long double rMax = 1e19;
    long double rMin = 0;
    long double r;
    long double alpha;
    for (;;) {
      r = (rMax + rMin)/2;

      alpha = arc/r;
      long double calculatedChord = 2*r*sin(alpha/2);

      if (abs(calculatedChord - chord) <= 1e-8) {
        break;
      }

      if (calculatedChord < chord) {
        rMin = r;
      } else {
        rMax = r;
      }
    }

    long double res = r*(1 - cos(alpha / 2));
    cout << "Case " << i << ": " << res << endl;
  }
}