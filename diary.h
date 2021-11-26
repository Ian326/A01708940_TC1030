/*
Nombre: Ian Joab Padrón Corona
Matrícula: A01708940
Materia: TC1033.2
Profesor: Benjamín Valdés
Entrega: 26/Nov/2021
Archivo: diary.h
*/

#ifndef DIARY_H
#include <string>
using namespace std;

//Clase para crear un 'diario' del corredor
class DiaryRacer{

private:  //Atributos de un objeto tipo diario
  string feeling;
  float hours_slept;
  string to_do;
  string comment;

public: //Constructor para el diario

  DiaryRacer(int null): feeling(""), hours_slept(0), to_do(""), comment(""){};
  DiaryRacer(): feeling(""), hours_slept(0), to_do(""), comment(""){};
  DiaryRacer(string feeling1, float hours_slept1, string to_do1, string comment1){

    feeling = feeling1;
    hours_slept = hours_slept1;
    to_do = to_do1;
    comment = comment1;
  };


    //Se inicializan los getters para el 'diario'
   string get_feeling(){
     return feeling;
   };
   float get_hours_slept(){
     return hours_slept;
   };
   string get_to_do(){
     return to_do;
   };
   string get_comment(){
     return comment;
   };


};

#endif
