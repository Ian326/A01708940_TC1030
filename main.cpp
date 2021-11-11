#include <iostream>
#include <string>
#include "instrum.h"
using namespace std;

int main() {
  std::cout << "Hola mundo!"<<endl;
  std::cout << "Soy yo, Ian :)"<<endl;

  CarSports car_1("Blue", 2018, 3.72, 1.65, 1.20, 6);
  std::cout <<"El numero de Cilindros del Carro es de: " <<car_1.get_cylinders();
}
