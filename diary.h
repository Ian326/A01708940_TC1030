/*
Nombre: Ian Joab Padrón Corona
Matrícula: A01708940
Materia: TC1033.2
Profesor: Benjamín Valdés
Entrega: 26/Nov/2021
Archivo: diary.h
*/

/*
 * librería diary, crea un Objeto tipo diario para el usuario
 */
#ifndef DIARY_H
#include <string>
using namespace std;

/*
 * Clase para crear un diario del usuario con algunos atributos dentro
 * Contiene sus respectivos métodos genéricos
*/
class DiaryRacer{

private:  //Atributos de un objeto tipo diario
  string feeling;
  float hours_slept;
  string to_do;
  string comment;

public:

/**
 * Constructor 'default' tipo DiaryRacer donde recibe valores
 * para llenar las variables de instancia
 * @param int null: recibe un valor (Ej. 0) para crear un Diario 'vacío'
 * @return Objeto DiaryRacer
*/
  DiaryRacer(int null): feeling(""), hours_slept(0), to_do(""), comment(""){};

/**
 * Constructor 'default' tipo DiaryRacer
 * @param
 * @return Objeto DiaryRacer
 */
  DiaryRacer(): feeling(""), hours_slept(0), to_do(""), comment(""){};

  /**
   * Constructor objeto tipo DiaryRacer donde recibe valores
   * para llenar las variables de instancia
   * @param string feeling1: el estado del usuario, float hours_slept1: horas de sueño del usuario,
   *        string to_do1: tareas del usuario, string comment1: Comentario arbitrario del usuario
   * @return Objeto DiaryRacer
  */
  DiaryRacer(string feeling1, float hours_slept1, string to_do1, string comment1){

    feeling = feeling1;
    hours_slept = hours_slept1;
    to_do = to_do1;
    comment = comment1;
  };


  /*
   * getter feeling
   *
   * @param
   * @return string: estado del usuario
   */
   string get_feeling(){
     return feeling;
   };

   /*
    * getter hours_slept
    *
    * @param
    * @return float: horas de sueño del usuario
    */
   float get_hours_slept(){
     return hours_slept;
   };

   /*
    * getter to_do
    *
    * @param
    * @return string: tareas del usuario
    */
   string get_to_do(){
     return to_do;
   };

   /*
    * getter comment
    *
    * @param
    * @return string: comentario cualquiera del usuario
    */
   string get_comment(){
     return comment;
   };


};

#endif
