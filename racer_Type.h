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

class RacerNew: public RacerSports{

public:
  std::string train;

  RacerNew(int id, std::string name, int age, std::string sox, float height, float weigth, float hoursRun, DiaryRacer diary, CarSports car): RacerSports(id,name,age,sox,height,weight,hoursRun, diary, car){};

  void select_train();

};
void RacerNew::select_train(){
  cout << "Elige el tipo de entrenamiento que llevas";
  cout << "Basico \t" << "Avanzado ";
  cin >> train;
  cout <<"Gracias";
};


class RacerAdv: public RacerSports{

public:
  std::string sponsr;
  RacerAdv(int id, std::string name, int age, std::string sox, float height, float weight, float hoursRun, DiaryRacer diary, CarSports car): RacerSports(id,name,age,sox,height,weight,hoursRun, diary, car){};

  void set_sponsor(){
    cout << "Elige a tu patrocinador para la proxima carrera";
    cout << "Redbull \t" << "Heineken \t" << "Monster \t";
    cin >> sponsr;
    cout <<"Gracias";
  }


};


#endif
