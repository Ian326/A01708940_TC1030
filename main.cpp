/*
Nombre: Ian Joab Padrón Corona
Matrícula: A01708940
Materia: TC1033.2
Profesor: Benjamín Valdés
Entrega: 26/Nov/2021
*/

#include <iostream>
#include <string>
#include "racer_Type.h"
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

//Determinar si el usuario es un corredor Principiante o Avanzado
if (hRun < 100){
  RacerNew racer1 (id,n,age,s,h,w,hRun,0,0);
  cout << "\n Gracias " << racer1.get_name() << ", tu id es " << racer1.get_id() <<"\n";
  racer1.set_diary();
  racer1.set_car();
  racer1.select_train();
}

else{
  RacerAdv racer1 (id,n,age,s,h,w,hRun,0,0);
  cout << "\n Gracias " << racer1.get_name() << ", tu id es " << racer1.get_id() <<"\n";
  racer1.set_diary();
  racer1.set_car();
  racer1.set_sponsor();

}


}
