/*
Nombre: Ian Joab Padrón Corona
Matrícula: A01708940
Materia: TC1033.2
Profesor: Benjamín Valdés
Entrega: 26/Nov/2021
Archivo: main.cpp
*/

/**
 * Descripcion este es mi entrega de proyecto para la clase de Pensamiento
 * Computacional Orientado a Objetos. Es un programa que permite
 * ingresar datos de un corredor de carreras e ingresar información
 * a un diario que estará vinculado hacia si mismo.
*/

//Bibliotecas
#include <iostream>     //Imprimir en pantalla
#include <string>       //std::string
#include "racer_Type.h" //Para identificar al usuario
using namespace std;

int main() {

  //Atributos temporales del Usuario
  int id, age;
  string n, s, fl, td, cm1;
  float h, w, hRun, hs;

  //Crear un objeto tipo Usuario
  cout <<"---Bienvenido corredor, completa los siguientes datos para crear tu registro---\n";
  cout <<"\n Introduce tu ID, en caso de no contar con uno, introduce 0: ";
  cin >> id;
  cout <<"\n Introduce tu nombre: ";
  cin.ignore();
  getline(cin,n);
  cout <<"\n Mucho gusto, "<< n << "\n";
  cout <<"\n Introduce tu edad (en anios): ";
  cin >> age;
  cout <<"\n Introduce tu sexo: ";
  cin >> s;
  cout <<"\n Introduce tu altura (en m.): ";
  cin >> h;
  cout <<"\n Introduce tu peso (en kg.): ";
  cin >> w;
  cout <<"\n Cuantas horas has corrido en la pista? ";
  cin >> hRun;

  //Crear un objeto tipo Diario para el Usuario
  cout <<"\n Como te sientes hoy?: ";
  cin.ignore();
  getline(cin,fl);
  cout <<"\n Cuantas horas dormiste esta noche?: ";
  cin >> hs;
  cout <<"\n Escribe que haras hoy en una linea de texto: ";
  cin.ignore();
  getline(cin,td);
  cout <<"\n Escribe algo para tu diario: ";
  cin.ignore();
  getline(cin,cm1);

//Determinar si el usuario es un corredor Principiante o Avanzado
if (hRun < 100){
  RacerNew racer1 (id,n,age,s,h,w,hRun,0,0);
  cout << "\n Gracias " << racer1.get_name() << ", tu id es " << racer1.get_id() <<"\n\n";

  racer1.set_diary(fl, hs, td, cm1);                 //Agregar un diario 'default' al corredor
  racer1.set_car();                                  //Agregar un carro 'default' al corredor
  racer1.select_train();                             //Función exclusiva para corredores nuevos
  cout << "\n Segun tu diario, hoy te sientes " <<
          racer1.get_diary().get_feeling() << endl;
  cout << "\n no olvides tus pendientes de hoy: " <<
          racer1.get_diary().get_to_do() << endl;
}

else{
  RacerAdv racer1 (id,n,age,s,h,w,hRun,0,0);
  cout << "\n Gracias " << racer1.get_name() << ", tu id como corredor es " << racer1.get_id() <<"\n\n";

  racer1.set_diary(fl, hs, td, cm1);                    //Agregar un diario 'default' al corredor
  racer1.set_car();                                    //Agregar un carro 'default' al corredor
  racer1.set_sponsor();                               //Función exclusiva para corredores avanzados
  cout << "\n No olvides tus pendientes de hoy: " <<
          racer1.get_diary().get_to_do() << endl;

  cout << "\n El dia de hoy usaras un coche " <<
          racer1.get_car().get_model() << endl;
}


}
