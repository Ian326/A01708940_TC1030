/*
Nombre: Ian Joab Padrón Corona
Matrícula: A01708940
Materia: TC1033.2
Profesor: Benjamín Valdés
Entrega: 26/Nov/2021
*/

#include <iostream>
#include <string>
#include "instrum.h"
using namespace std;

int main() {
  //Variables temporales para el usuario
  int id, age;
  string n, s;
  float h, w, hRun;
  //crear un objeto tipo Usuario
  cout <<"---Bienvenido corredor, completa los siguientes datos para crear tu registro---\n";
  cout <<"\n Introduce tu ID, en caso de no contar con uno, introduce 0: ";
  cin >> id;
  cout <<"\n Introduce tu nombre: ";
  cin >> n;
  cout <<"\n Mucho gusto, "<< n << "\n";
  cout <<"\n Introduce tu edad (en años): ";
  cin >> age;
  cout <<"\n Introduce tu sexo: ";
  cin >> s;
  cout <<"\n Introduce tu altura (en m.): ";
  cin >> h;
  cout <<"\n Introduce tu peso (en kg.): ";
  cin >> w;
  cout <<"\n Cuantas horas has corrido en la pista? (en horas) ";
  cin >> hRun;

  RacerSports racer_1(id,n,age,s,h,w,hRun);
  cout << "\n Gracias " << racer_1.get_name() << ", tu id es " << racer_1.get_id() <<"\n";

  CarSports car_1;//crear un objeto tipo Carro
  cout <<"El numero de Cilindros de tu auto es de: " <<car_1.get_color() <<"\n";

  //crear un objeto tipo Diario
  Diary_Racer r1_d1("Cansado", 5.2, "Hoy terminaré mi adelanto de programación", "Parece que el adelanto de hoy es todo un exito");
  std::cout << r1_d1.get_comment() <<"\n";
}
