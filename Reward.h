#ifndef REWARD_H//Definir clase, gerencia, archivo
#define REWARD_H
#include "Visitas.h"
#include <iostream>
using namespace std;
//Apartado de clase a rewards por visitas, cliente frecuente.
class Reward : public Visitas {
  private:
    int visitas; //Numero de visitas
    string bebida; // Bebida a escoger en rewards a de visitas canjeables
    string mod; // Modificación de tu bebida canjeable
    
  public:
    Reward(int v, string b, string m){//Constructor recibe valores
    visitas = v;
    bebida = b;
    mod = m;
}
  //Constructor default
  Reward(){
    visitas = 0;
    bebida = " ";
    mod = " ";
  }
  //Getter de visitas, bebida y mod para Rewards
  int getVisitas(){
      return visitas;
  }

  string getBebida(){

      return bebida;
  }
  string getMod(){
      return mod;
  }
  void setVisitas(int v){
    visitas = v;
  }
  void setBebida(string b){
    bebida = b;
  }
  void setMod(string m){
    mod = m;
  }
};
#endif