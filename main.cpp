#include <iostream>
#include <string>
#include "instrum.h"
using namespace std;

int main() {
  std::cout << "Hola mundo :D!\n"<<endl;
  RacerSports racer_1("Ian", 18, "Masculine", 1.72, 55);
  std::cout <<"Bienvenido, " <<racer_1.get_name() <<"!\n";

  CarSports car_1("Blue", 2018, 3.72, 1.65, 1.20, 6);
  std::cout <<"El numero de Cilindros de tu auto es de: " <<car_1.get_cylinders() <<"\n";

  Diary_Racer r1_d1("Cansado", 5.2, "Hoy terminaré mi adelanto de programación", "Parece que el adelanto de hoy es todo un exito");
  std::cout << r1_d1.get_tell_sth() <<"\n";
}
