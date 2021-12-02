/*
Nombre: Ian Joab Padrón Corona
Matrícula: A01708940
Materia: TC1033.2
Profesor: Benjamín Valdés
Entrega: 26/Nov/2021
*/

/*
 * librería racer_Type, determina si el usuario ingresado
 * es Principiante o Avanzado
 *
 */

#ifndef RACER_TYPE_H
#include <iostream>
#include <string>
#include "instrum.h"
using namespace std;

//Clase para crear un corredor 'principiante'
class RacerNew: public RacerSports{

public:
  //Variables exclusivas de esta clase
  std::string train;

  /**
   * Constructor del usuario principiante donde recibe valores
   * para llenar las variables de instancia
   * @param int id: el id del usuario, string name: el nombre del usuario
   *        int age: edad del usuario, string sox: sexo del Usuario
   *        float height: altura del usuario, floath weight: peso del usuario
   *        float hoursRun: tiempo en la pista, Diary Racer diary: diario del usuario
   *        Car Sports: Auto que usará en la pista
   * @return Objeto RacerNew
   * El Constructor de esta clase manda a llamar al Constructor de 'instrum.h'
  */

  RacerNew(int id, std::string name, int age, std::string sox, float height, float weigth, float hoursRun, DiaryRacer diary, CarSports car): RacerSports(id,name,age,sox,height,weight,hoursRun, diary, car){};

  void select_train();

                        };

/**
 * setter entrenamiento usuario principiante
 *
 * @param
 * @return string: Tipo de entrenamiento
 */

void RacerNew::select_train(){
  bool trainbool = true;
  while (trainbool == true){
    cout << "Elige el tipo de entrenamiento que llevas: \n";
    cout << "Basico \t" << "Avanzado \n";
    cin >> train;
    if (train == "Basico" || train == "Avanzado" || train == "basico" || train == "avanzado"){
      cout <<"Gracias \n";
      trainbool = false;
    }
    else{
      cout << " \n Opcion invalida. Intentalo de nuevo \n";
    }

  };

};

//Clase para crear un corredor 'avanzado'
class RacerAdv: public RacerSports{

public:
  std::string sponsr;

  /**
   * Constructor del usuario donde recibe valores
   * para llenar las variables de instancia
   * @param int id: el id del usuario, string name: el nombre del usuario
   *        int age: edad del usuario, string sox: sexo del Usuario
   *        float height: altura del usuario, floath weight: peso del usuario
   *        float hoursRun: tiempo en la pista, Diary Racer diary: diario del Usuario
   *        Car Sports: Auto que usará en la pista
   * @return Objeto RacerNew
   * El Constructor de esta clase manda a llamar al Constructor de 'instrum.h'
  */

  RacerAdv(int id, std::string name, int age, std::string sox, float height, float weight, float hoursRun, DiaryRacer diary, CarSports car): RacerSports(id,name,age,sox,height,weight,hoursRun, diary, car){};

  void set_sponsor();
                          };

  /**
   * setter patrocinador usuario avanzado
   *
   * @param
   * @return string: Patrocinador
   */

    void RacerAdv::set_sponsor(){
      bool sponsrbool = true;
      while (sponsrbool == true){
      cout << "Elige a tu patrocinador para la proxima carrera: \n";
      cout << "Redbull \t" << "Heineken \t" << "Monster \n";
      cin >> sponsr;
      if (sponsr == "Redbull" || sponsr == "Heineken" || sponsr == "Monster"){
        cout <<"Gracias \n";
        sponsrbool = false;
      }
      else{
        cout << " \n Opcion invalida. Intentalo de nuevo \n";
      }


                                }
};


#endif
