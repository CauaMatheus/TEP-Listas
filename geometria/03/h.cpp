#include <bits/stdc++.h>

using namespace std;

// URLs para estudo:
// Triângulos:
  // Páginas 27 e 29: Relação entre medidas dos lados e ângulos
  // https://github.com/edsomjr/TEP/blob/master/Geometria_Computacional/slides/triangulos/triangulos.pdf

// Círculos Definição:
  // Páginas 45; Segmento de um círculo:
  // https://github.com/edsomjr/TEP/blob/master/Geometria_Computacional/slides/circulos_definicao/circulos_definicao.pdf
  
// Círculos Algoritmos:
  // Página 65; Interseção entre dois círculos
  // // https://github.com/edsomjr/TEP/blob/master/Geometria_Computacional/slides/circulos_algoritmos/circulos_algoritmos.pdf

// Imagem explicativa da questão:
// https://github.com/CauaMatheus/TEP-Listas/blob/main/geometria/03/h.md

int main() {
  int n;
  cin >> n;

  cout << fixed << setprecision(10);
  double x1, y1, r1, x2, y2, r2;
  for (int i = 1; i <= n; i++) {
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    auto d2 = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
    auto d = sqrt(d2);

    if (d >= r1 + r2) {
      cout << "Case " << i << ": " << 0 << endl;
      continue;
    }

    if (d <= abs(r1 - r2)) {
      auto minRadius = min(r1, r2);
      cout << "Case " << i << ": " << M_PI * minRadius * minRadius << endl;
      continue;
    }

    double alpha = acos((r1*r1 + d2 - r2*r2)/(2*d*r1))*2;
    double beta = acos((r2*r2 + d2 - r1*r1)/(2*d*r2))*2;

    double segment1 = (alpha - sin(alpha))*(r1*r1)/2;
    double segment2 = (beta - sin(beta))*(r2*r2)/2;

    cout << "Case " << i << ": " << (segment1 + segment2) << endl;
  }
}
