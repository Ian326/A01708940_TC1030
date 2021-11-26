[![Run on Repl.it](https://repl.it/badge/github/Ian326/A01708940_TC1030)](https://repl.it/github/Ian326/A01708940_TC1030)
# A01708940_TC1030
Programming folder for TC1030:

#Contexto
La finalidad de este programa será recopilar datos sobre algún corredor de carreras. Esto con el fin de tener un perfil que cuente con un poco de información acerca del usuario (Nombre, edad, sexo, estatura, etc.), el auto con el que compite en los eventos (con datos como el Color, Modelo, Cilindros, Dimensiones) e información sobre su estado de ánimo, vivencias del día, etc., conforme vaya utilizando el programa, en distintas oportunidades.

#Funcionalidad
El programa contará con distintas clases que contengan las características de:
  El corredor
  El auto que utiliza
  Cualquier información que añada sobre su día

Así, el programa permitirá al usuario llevar un control sobre sí mismo. En el main, se podrá introducir dicha información para crear los registros del corredor, por lo que será un programa en cierta forma interactivo, en lugar de ser un programa completamente automático.

Este programa no está planeado para ayudar el corredor a mejorar en sus carreras ni mucho menos asistirle en caso de que no se encuentre en sus mejores momentos, por lo que se aconseja buscar la asistencia requerida para dichos casos. Este programa está enfocado simplemente en el registro de la información del usuario a través de los días o sesiones en las que lo utilice.

## Consideraciones
Este programa está hecho para arrancar en la consola del sistema, dependiendo del OS que se tenga, puede abrir de distintas formas:

Al compilar con:
    "g++ instrum.h main.cpp"

Al utilizar linux:
      "/a.out"

Al utilizar windows:
      "a.exe"
      
A día de hoy (26-Nov) el programa solo permite ingresar los datos del usuario, mas no permite ingresar ningun tipo de entrada para crear su diario personalizado.

## Correcciones
En la versión actual se han hecho los siguientes cambios:

1- La cabezera 'instrum.h' se ha dividido en algunas otras (una por cada clase del programa), lo que permite un mayor orden y accesibilidad a cada parte del programa

2- El archivo 'main' se ha modificado para poder implementar el uso de agregación y herencia al programa (se puede observar para el tipo de conductor y las clases carro/diario respectivamente)

3- Se ha actualizado el Diagrama de Clases UML, pues se había utilizado incorrectamente la simbología para representar el funcionamiento del prorgama, además, se adaptop para representar correctamente Herencia y agregación

4- Se han puesto más comentarios y dado un mejor formato a todas las secciones del programa para facilitar su entendimiento y se ha limpiado un poco el código

5- Se ha actualizado este ReadMe.
