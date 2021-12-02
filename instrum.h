/*
Nombre: Ian Joab Padrón Corona
Matrícula: A01708940
Materia: TC1033.2
Profesor: Benjamín Valdés
Entrega: 26/Nov/2021
Archivo: instrum.h
*/


/*
 * librería instrum, crea un Objeto tipo usuario
 */

#ifndef INSTRUM_H
#include <string>
#include <cstdlib>
#include <time.h>
#include "carSports.h"
#include "diary.h"
using namespace std;

/*
 * Clase para crear un 'usuario' (corredor) con datos generales sobre él
*/
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

    /**
     * Constructor objeto tipo usuario donde recibe valores
     * para llenar las variables de instancia
     * @param int id1: el id del usuario, string name1: el nombre del usuario,
     *        int age1: edad del usuario, string sox1: sexo del usuario,
     *        float height1: altura del usuario, floath weight1: peso del usuario,
     *        float hoursRun1: tiempo en la pista, Diary Racer diary: diario del usuario,
     *        Car Sports: Auto que usará en la pista
     * @return Objeto RacerSports
    */

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

    /*
     * getter id
     *
     * @param
     * @return int: id del usuario
     */
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

   /*
    * getter name
    *
    * @param
    * @return string: nombre del usuario
    */
   string get_name(){
     return name;
   };

   /*
    * getter age
    *
    * @param
    * @return int: edad del usuario
    */
   int get_age(){
     return age;
   };

   /*
    * getter sox
    *
    * @param
    * @return string: sexo del usuario
    */
   string get_sox(){
     return sox;
   };

   /*
    * getter height
    *
    * @param
    * @return float: altura del usuario
    */
   float get_height(){
     return height;
   };

   /*
    * getter weight
    *
    * @param
    * @return float: peso del usuario
    */
   float get_weight(){
     return weight;
   };

   /*
    * getter hoursRun
    *
    * @param
    * @return float: horas en la pista
    */
   float get_hoursRun(){
     return hoursRun;
   };

   /*
    * getter diary
    *
    * @param
    * @return DiaryRacer: diario del usuario
    */
   DiaryRacer get_diary(){
     return diario;
   };

   /*
    * getter car
    *
    * @param
    * @return CarSports: auto del usuario para la pista
    */
   CarSports get_car(){
     return carro;
   };

   /*
    * setter diary
    *
    * @param string feeling1: estado del usuario, float hours_slept1: horas de sueño del usuario,
    *        string to_do1: tareas del usuario,
    *        string comment1: texto sin especificar, ingresado del usuario
    * @return DiaryRacer: diario del usuario
    */
  void set_diary(string feeling1, float hours_slept1, string to_do1, string comment1){
      diario = DiaryRacer(feeling1, hours_slept1, to_do1, comment1);}

    /*
     * setter Diary
     *
     * @param
     * @return DiaryRacer: diario "vacio" del usuario
     */
  void set_diary(){
      diario = DiaryRacer();
   };

   /*
    * setter car
    *
    * @param
    * @return CarSports: auto "default" del usuario
    */
   void set_car(){
     carro = CarSports();
   };


};

#endif
