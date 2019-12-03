#ifndef PAGO_H//Definir clase, gerencia, archivo
#define PAGO_H
#include "balance.h"
#include <iostream>
using namespace std;
class Pago : public Balance{
  
  private:
    int pago;//Deposito numeros enteros
    int cuenta;
  public: //Declaración de metodos para deposito
    Pago();
    Pago(int p):Balance(cuenta){
      pago = p;
    
  }
  int getPago(){
    return pago;
  }
  void setPago(int p){
    pago = p;
  }
  int getCuenta(){
    return cuenta;
  }

  void pagar (int pagar){
    cuenta = cuenta - pagar;
  }
  void pagar (Balance &b){ //Intento de interacción con Balance y Deposito para actualizar el balance del cliente.
    b.pagar(cuenta);
    setCuenta(getCuenta()- pago);
  }
  };
  
#endif