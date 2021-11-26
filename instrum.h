/*
Nombre: Ian Joab Padrón Corona
Matrícula: A01708940
Materia: TC1033.2
Profesor: Benjamín Valdés
Entrega: 26/Nov/2021
Archivo: instrum.h
*/

#ifndef INSTRUM_H
#include <string>
#include <cstdlib>
#include <time.h>
#include "carSports.h"
#include "diary.h"
using namespace std;

//Clase para crear un 'usuario' (corredor) con datos generales sobre él
class RacerSports{

  public:
    //Atributos del corredor (id, nombre, edad, etc.)
    int id;
    string name;
    int age;
    string sox;
    float height;
    float weight;
    float hoursRun;
    DiaryRacer diario;
    CarSports carro;

    //Constructor para un corredor de carreras
    RacerSports(int id1, string name1, int age1, string sox1, float height1, float weight1, float hoursRun1, DiaryRacer diary, CarSports car){
      id = id1;
      name = name1;
      age = age1;
      sox = sox1;
      height = height1;
      weight = weight1;
      hoursRun = hoursRun1;
      diario = diary;
      carro = car;
                            }

  //Se inicializan los getters-setters para el usuario
    int get_id(){
     srand(time(0));
     if (id != 0){
       return id;
     }

     else{
       id = rand() % 100 + 1;
       return id;
     }
   };

   string get_name(){
     return name;
   };

   int get_age(){
     return age;
   };

   string get_sox(){
     return sox;
   };

   float get_height(){
     return height;
   };

   float get_weight(){
     return weight;
   };

   float get_hoursRun(){
     return hoursRun;
   };

  void set_diary(string feeling1, float hours_slept1, string to_do1, string comment1){
      diario = DiaryRacer(feeling1, hours_slept1, to_do1, comment1);}

  void set_diary(){
      diario = DiaryRacer();
   };

   void set_car(){
     carro = CarSports();
   };


};

#endif
