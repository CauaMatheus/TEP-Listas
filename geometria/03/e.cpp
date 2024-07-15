#include <bits/stdc++.h>

using namespace std;

// URLs para estudo:
// Definição de retas
  // Página 30; Equação geral da reta: (ax + by + c = 0)
  // https://github.com/edsomjr/TEP/blob/master/Geometria_Computacional/slides/retas_definicao/retas_definicao.pdf

// Algorítimos de reta:
  // Página 44; Distância entre um ponto e uma reta:
  // https://github.com/edsomjr/TEP/blob/master/Geometria_Computacional/slides/retas_algoritmos/retas_algoritmos.pdf

int main() {
  int n;
  cin >> n;

  while (n--) {
    double px, py;
    cin >> px >> py;

    double cx, cy, cr;
    cin >> cx >> cy >> cr;

    if(hypot(px - cx, py - cy) <= cr) {
      cout << "No goal..." << endl;
      continue;
    }

    // Coeficientes da reta formada pelo chute de Raul pra trave da esquerda (52.5, 3.66):
    double a = 3.66 - py;
    double b = px - 52.5;
    double c = 52.5*py - px*3.66;

    // Distancia da reta para o zagueiro
    double distanceLeft = abs(a*cx + b*cy + c)/sqrt(a*a + b*b);

    // Coeficientes da reta formada pelo chute de Raul pra trave da direita (52.5, -3.66):
    a = -3.66 - py;
    c = 52.5*py + px*3.66;

    // Distancia da reta para o zagueiro
    double distanceRight = abs(a*cx + b*cy + c)/sqrt(a*a + b*b);

    if(distanceLeft <= cr && distanceRight <= cr) {
      cout << "No goal..." << endl;
    } else {
      cout << "Goal!" << endl;
    }
  }
}
