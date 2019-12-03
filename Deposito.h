#ifndef DEPOSITO_H //Definir clase, gerencia, archivo
#define DEPOSITO_H
#include <iostream>
using namespace std;
#include "balance.h"

using namespace std;

//Declaración de objeto balance de dinero que hereda de Tarjeta
class Deposito: public Balance {
  
  private:
    int deposito;//Deposito numeros enteros
    int cuenta;

  public: //Declaración de metodos para deposito
    Deposito();
    Deposito(int d):Balance(cuenta){
      deposito = d;}
  
  int getDeposito(){
    return deposito;
  }
  void setDeposito(int d){
    deposito = d;
  }
  int getCuenta(){
    return cuenta;
  }

  void recarga (int recarga){
    cuenta = cuenta + recarga;
  }
  void recarga (Balance &b){ //Intento de interacción con Balance y Deposito para actualizar el balance del cliente.
    b.recarga(cuenta);
    setCuenta(getCuenta()+ deposito);
  }
  };
  
#endif