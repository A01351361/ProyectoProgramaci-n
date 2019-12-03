#ifndef TARJETA_H//Definir clase, gerencia, archivo
#define TARJETA_H
#include <iostream>
using namespace std;


class Tarjeta { 

  private: //Declaración de variables
  int identificacion;
  string nombre;
  string contrasena;

  public: //Declaración de metodos
    Tarjeta(int id, string name, string password){
      identificacion = id;
      nombre = name;
      contrasena = password; }

  //Getter de id, nombre y constrasena
  int getIdentificacion(){
      return identificacion;
  }

  string getNombre(){
      return nombre;
  }
  string getContrasena() {
      return contrasena;
  }


  void setNombre(string name){
    nombre = name;
  }
  void setContrasena(string password){
    contrasena = password;
  }
  
};
#endif
