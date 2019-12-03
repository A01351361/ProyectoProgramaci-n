#ifndef VISITAS_H//Definir clase, gerencia, archivo
#define VISITAS_H
#include "Pago.h"
#include <iostream>
using namespace std;

class Visitas{
  private:
    int visitas;
  public:
  
    Visitas(int v){
      visitas = v;
    }
  
Visitas(){
  visitas = 0;
  }
   int getVisitas(){
      return visitas;
  }
   void setVisitas(int v){
    visitas = v;
  }
};
#endif