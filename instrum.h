/*
Nombre: Ian Joab Padrón Corona
Matrícula: A01708940
Materia: TC1033.2
Profesor: Benjamín Valdés
Entrega: 26/Nov/2021
*/

#include <string>
#include <cstdlib>
#include <time.h>

class CarSports{ //Clase para el coche que maneja el usuario

private: //Con todas las variables que requiere el coche
  std::string color;
  std::string model;
  int cylinders;

public:
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


class RacerSports{//Clase para el usuario con datos generales sobre él

private:
  int id;
  std::string name;
  int age;
  std::string sox;
  float height;
  float weight;
  float hoursRun;

public:
  //Con todas las variables que requiere el usuario


  RacerSports();//Para inicializar los objetos de tipo usuario
  RacerSports(int id1, std::string name1, int age1, std::string sox1, float height1, float weight1, float hoursRun1):id(id1), name(name1), age(age1), sox(sox1), height(height1), weight(weight1), hoursRun(hoursRun1){};

  //Se inicializan los getters para el usuario
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
   std::string get_name(){
     return name;
   };
   int get_age(){
     return age;
   };
   std::string get_sox(){
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


   //Se declaran los setters para las variables del usuario
   void set_id(int);
   void set_name(std::string );
   void set_age(int);
   void set_sox(std::string);
   void set_height(float);
   void set_weight(float);
   void set_hoursRun(float);
};
//Se inicializan los setters para la clase del usuario
void RacerSports::set_id(int id1){
 id = id1;
}
void RacerSports::set_name(std::string name1){
  name = name1;
}
void RacerSports::set_age(int age1){
  age = age1;
}
void RacerSports::set_sox(std::string sox1){
  sox = sox1;
}
void RacerSports::set_height(float height1){
  height = height1;
}
void RacerSports::set_weight(float weight1){
  weight = weight1;
}
void RacerSports::set_hoursRun(float hoursRun1){
  hoursRun = hoursRun1;
}


class Diary_Racer{//Para inicializar los objetos de tipo 'diario'

private:  //Con todas las variables que requiere el 'diario'
  std::string feeling;
  float hours_slept;
  std::string to_do;
  std::string comment;

public:
  Diary_Racer();//Para inicializar los objetos de tipo 'diario'
  Diary_Racer(std::string feeling1, float hours_slept1, std::string to_do1, std::string comment1):feeling(feeling1), hours_slept(hours_slept1), to_do(to_do1), comment(comment1){};

    //Se inicializan los getters para el 'diario'
   std::string get_feeling(){
     return feeling;
   };
   float get_hours_slept(){
     return hours_slept;
   };
   std::string get_to_do(){
     return to_do;
   };
   std::string get_comment(){
     return comment;
   };

   //Se declaran los setters para las variables del 'diario'
   void set_feeling(std::string);
   void set_hours_slept(float);
   void set_to_do(std::string);
   void set_comment(std::string);

};

//Se inicializan los setters para la clase'diario'

void Diary_Racer::set_feeling(std::string feeling1){
  feeling = feeling1;
}
void Diary_Racer::set_hours_slept(float hours_slept1){
  hours_slept = hours_slept1;
}
void Diary_Racer::set_to_do(std::string to_do1){
  to_do = to_do1;
}
void Diary_Racer::set_comment(std::string comment1){
  comment = comment1;
}
