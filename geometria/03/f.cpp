#include <bits/stdc++.h>

using namespace std;

// URLs para estudo:
// Quadriláteros Definição:
  // Página 6; Área de um quadrilátero:
  // https://github.com/edsomjr/TEP/blob/master/Geometria_Computacional/slides/quadrilateros/quadrilateros.pdf

// Círculos Definição:
  // Páginas 28 e 29; Área de um círculo:
  // https://github.com/edsomjr/TEP/blob/master/Geometria_Computacional/slides/circulos_definicao/circulos_definicao.pdf

int main() {
  int n;
  cin >> n;

  double pi = 2*acos(0);

  double r;
  cout << fixed << setprecision(2);
  for (int i = 1; i <= n; i++) {
    cin >> r;

    // area = 2*r * 2*r - PI*r*r
    // area = 4*r*r - PI*r*r
    // r*r*(4 - pi)
    cout << "Case " << i << ": " << r*r*(4-pi) << endl;
  }
}