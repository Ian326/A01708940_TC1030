/*
Nombre: Ian Joab Padrón Corona
Matrícula: A01708940
Materia: TC1033.2
Profesor: Benjamín Valdés
Entrega: 26/Nov/2021
Archivo: carSports.h
*/

#ifndef CARSPORTS_H
#include <string>


class CarSports{ //Clase para el coche que maneja el usuario

private: //Con todas las variables que requiere el coche
  std::string color;
  std::string model;
  int cylinders;

public:
  CarSports(int null): color("Plateado"), model("Toyota Supra"), cylinders(6){};
  CarSports(): color("Plateado"), model("Toyota Supra"), cylinders(6){};//Para inicializar los objetos de tipo carro
  CarSports(std::string color1, std::string model1, int cylinders1):color(color1), model(model1), cylinders(cylinders1){};

  //Se inicializan los getters para el carro
   std::string get_color(){
     return color;
   };
   std::string get_model() {
     return model;
  };

   float get_cylinders(){
     return cylinders;
   };
   //Se declaran los setters para las variables del carro
   void set_color(std::string);
   void set_model(std::string);
   void set_cylinders(int);

};
//Se inicializan los setters para la clase carro
void CarSports::set_color(std::string color1){
  color = color1;
}
void CarSports::set_model(std::string model1){
  model = model1;
}
void CarSports::set_cylinders(int cylinders1){
  cylinders = cylinders1;
}

#endif
