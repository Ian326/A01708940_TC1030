/*
Nombre: Ian Joab Padrón Corona
Matrícula: A01708940
Materia: TC1033.2
Profesor: Benjamín Valdés
Entrega: 26/Nov/2021
*/

#ifndef RACER_TYPE_H
#include <iostream>
#include <string>
#include "instrum.h"
using namespace std;

//Clase para crear un corredor 'principiante'
class RacerNew: public RacerSports{

public:
  std::string train;

//El Constructor de esta clase manda a llamar al Constructor de 'instrum.h'
  RacerNew(int id, std::string name, int age, std::string sox, float height, float weigth, float hoursRun, DiaryRacer diary, CarSports car): RacerSports(id,name,age,sox,height,weight,hoursRun, diary, car){};

  void select_train();

                        };

//Función exlusiva de un corredor principiante
void RacerNew::select_train(){
  cout << "Elige el tipo de entrenamiento que llevas: \n";
  cout << "Basico \t" << "Avanzado \n";
  cin >> train;
  cout <<"Gracias";
};

//Clase para crear un corredor 'avanzado'
class RacerAdv: public RacerSports{

public:
  std::string sponsr;

//El Constructor de esta clase manda a llamar al Constructor de 'instrum.h'
  RacerAdv(int id, std::string name, int age, std::string sox, float height, float weight, float hoursRun, DiaryRacer diary, CarSports car): RacerSports(id,name,age,sox,height,weight,hoursRun, diary, car){};

  void set_sponsor();
                          };

  //Función exlusiva de un corredor avanzado
    void RacerAdv::set_sponsor(){
      cout << "Elige a tu patrocinador para la proxima carrera: \n";
      cout << "Redbull \t" << "Heineken \t" << "Monster \n";
      cin >> sponsr;
      cout <<"Gracias";

};


#endif
