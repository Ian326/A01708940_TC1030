#include<string>

class CarSports{

private:
  std::string color;
  int model;
  float dim_x;
  float dim_y;
  float dim_z;
  int cylinders;

public:
  CarSports();
  CarSports(std::string color1, int model1, float dim_x1, float dim_y1, float dim_z1, int cylinders1):color(color1), model(model1), dim_x(dim_x1), dim_y(dim_y1), dim_z(dim_z1), cylinders(cylinders1){};

   std::string get_color(){
     return color;
   };
   int get_model() {
     return model;
   };
   float get_dim_x(){
     return dim_x;
   };
   float get_dim_y(){
     return dim_y;
   };
   float get_dim_z(){
     return dim_z;
   };
   float get_cylinders(){
     return cylinders;
   };

   void set_color(std::string );
   void set_model(int);
   void set_cylinders(int);
   void set_dim_x(float);
   void set_dim_y(float);
   void set_dim_z(float);
};

class RacerSports{

private:
  std::string name;
  int age;
  std::string sox;
  float height;
  float weight;
  float imc;
public:
  RacerSports();
  RacerSports(std::string name1, int age1, std::string sox1, float height1, float weight1):name(name1), age(age1), sox(sox1), height(height1), weight(weight1), imc(){};

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
   float get_imc(){
     return weight/(height*height);
   };

   void set_name(std::string );
   void set_age(int);
   void set_sox(std::string);
   void set_height(float);
   void set_weight(float);

};

class Diary_Racer{

private:
  std::string feeling;
  float hours_slept;
  std::string to_do;
  std::string tell_sth;

public:
  Diary_Racer();
  Diary_Racer(std::string feeling1, float hours_slept1, std::string to_do1, std::string tell_sth1):feeling(feeling1), hours_slept(hours_slept1), to_do(to_do1), tell_sth(tell_sth1){};

   std::string get_feeling(){
     return feeling;
   };
   float get_hours_slept(){
     return hours_slept;
   };
   std::string get_to_do(){
     return to_do;
   };
   std::string get_tell_sth(){
     return tell_sth;
   };

   void set_feeling(std::string);
   void set_hours_slept(float);
   void set_to_do(std::string);
   void set_tell_sth(std::string);


};

void CarSports::set_color(std::string color1){
  color = color1;
}
void CarSports::set_model(int model1){
  model = model1;
}
void CarSports::set_cylinders(int cylinders1){
  cylinders = cylinders1;
}
void CarSports::set_dim_x(float dim_x1){
  dim_x = dim_x1;
}
void CarSports::set_dim_y(float dim_y1){
  dim_y = dim_y1;
}
void CarSports::set_dim_z(float dim_z1){
  dim_z = dim_z1;
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

void Diary_Racer::set_feeling(std::string feeling1){
  feeling = feeling1;
}
void Diary_Racer::set_hours_slept(float hours_slept1){
  hours_slept = hours_slept1;
}
void Diary_Racer::set_to_do(std::string to_do1){
  to_do = to_do1;
}
void Diary_Racer::set_tell_sth(std::string tell_sth1){
  tell_sth = tell_sth1;
}
