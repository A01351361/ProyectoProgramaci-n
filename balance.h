#ifndef BALANCE_H//Definir clase, gerencia, archivo
#define BALANCE_H
#include <iostream>
using namespace std;
#include "Tarjeta.h"


//Declaración de objeto balance de dinero que hereda de Tarjeta
class Balance : public Tarjeta{
  private:
    int cuenta; //Balance numeros flotantes
    
  
  public: //Declaración de metodos para deposito
    Balance();
    Balance(int c){
      cuenta = c;
      
  }

 int getCuenta(){ //Conseguir el balance de la cuenta
    return cuenta;
  }
  void setCuenta(int c){
     cuenta = c;
  }


  void recarga (int recarga){ //recarga de la cuenta
    cuenta = cuenta + recarga;
  }
  void pagar (int pagar){
    cuenta = cuenta - pagar;
  }

};
#endif