/*
Nombre: Ian Joab Padrón Corona
Matrícula: A01708940
Materia: TC1033.2
Profesor: Benjamín Valdés
Entrega: 26/Nov/2021
Archivo: carSports.h
*/

/*
 * librería carSports, crea un Objeto tipo carro
 */
#ifndef CARSPORTS_H
#include <string>

/*
 * Clase para crear un auto con algunas variables dentro
*/
class CarSports{

private: //Atributos de un objeto tipo coche
  std::string color;
  std::string model;
  int cylinders;

public:

  /**
   * Constructor 'default' tipo CarSports donde recibe valores
   * para llenar las variables de instancia
   * @param int null: recibe un valor (Ej. 0) para crear un auto 'default'
   * @return Objeto CarSports
  */
  CarSports(int null): color("Plateado"), model("Toyota Supra"), cylinders(6){};

  /**
   * Constructor 'default' tipo CarSports
   * @param
   * @return Objeto CarSports
  */
  CarSports(): color("Plateado"), model("Toyota Supra"), cylinders(6){};//Para inicializar los objetos de tipo carro

  /**
   * Constructor objeto tipo CarSports donde recibe valores
   * para llenar las variables de instancia
   * @param string color1: el color del auto, string model1: el modelo del auto,
   *        int cylinders1: numero de cilindros del auto
   * @return Objeto RacerSports
  */
  CarSports(std::string color1, std::string model1, int cylinders1):color(color1), model(model1), cylinders(cylinders1){};

  /*
   * getter color
   *
   * @param
   * @return string: color del auto
   */
   std::string get_color(){
     return color;
   };

   /*
    * getter model
    *
    * @param
    * @return string: modelo del auto
    */
   std::string get_model() {
     return model;
  };

  /*
   * getter cylinders
   *
   * @param
   * @return float: cilindros del auto
   */
   int get_cylinders(){
     return cylinders;
   };

   //Se declaran los setters para las variables del carro

   void set_color(std::string);
   void set_model(std::string);
   void set_cylinders(int);

};
//Se inicializan los setters para la clase carro

/*
 * setter color
 *
 * @param string color1: color del auto
 * @return
 */
void CarSports::set_color(std::string color1){
  color = color1;
}

/*
 * setter model
 *
 * @param string model1: modelo del auto
 * @return
 */
void CarSports::set_model(std::string model1){
  model = model1;
}

/*
 * setter cylinders
 *
 * @param int cylinders1: cilindros del auto
 * @return
 */
void CarSports::set_cylinders(int cylinders1){
  cylinders = cylinders1;
}

#endif
