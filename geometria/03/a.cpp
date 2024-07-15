#include <bits/stdc++.h>

using namespace std;

// URLs para estudo:
// Círculos Definição:
  // Páginas 28 e 29; Área de um círculo:
  // https://github.com/edsomjr/TEP/blob/master/Geometria_Computacional/slides/circulos_definicao/circulos_definicao.pdf

// Triangulo Definição:
  // Página 3; Desigualdade Triangular:
  // https://github.com/edsomjr/TEP/blob/master/Geometria_Computacional/slides/triangulos/triangulos.pdf


int main() {
  vector<double> p(3);
  cin >> p[0] >> p[1] >> p[2];
  sort(p.begin(), p.end());

  double r = p[0] + p[1] + p[2];
  double r2 = p[2] - p[0] - p[1]; // O que faltou para chegar ao centro
                                  // de acordo com a formula do triangulo

  cout << fixed << setprecision(7);
  cout << M_PI * r * r - (r2 > 0) * M_PI * r2 * r2 << endl;
}