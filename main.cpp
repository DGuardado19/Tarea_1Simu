#include <iostream>
using namespace std;
#include "math_tools.h"
#include "display_tools.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Matrix matrixtarea, matrixinversa, cofactores, trapuesta;
    zeroes(matrixtarea,3);

    matrixtarea.at(0).at(0) = 2;
    matrixtarea.at(0).at(1) = 2;
    matrixtarea.at(0).at(2) = 3;
    matrixtarea.at(1).at(0) = 4;
    matrixtarea.at(1).at(1) = 5;
    matrixtarea.at(1).at(2) = 6;
    matrixtarea.at(2).at(0) = 7;
    matrixtarea.at(2).at(1) = 8;
    matrixtarea.at(2).at(2) = 9;
    //cofactors(matrixtarea, cofactores);
    //showMatrix(cofactores);
    matrixInversa(matrixtarea, matrixinversa);
    //Mostrar el resultado con la función showMatrix
    showMatrix(matrixinversa);
    return 0;
}
