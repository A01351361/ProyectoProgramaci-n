/*
Proyecto Tarjeta APP
Erick Gerardo Calderón Reyes
A01351361
12/11/2019
*/

//Este programa va ser un programa donde se use una tarjeta digital o fisica donde tenga su propio ID, nombre y contrasena en caso que se use una app, donde tendra como función para restaurantes, depositar dinero, entre otras cosas.

//Proyecto 1.2
//Se actualizo el programa con archivos, herencias, con objetos interactivos, y un programa mucho más complejo. Falta agregar la clase de pago, la hora y el codigo QR.
//Se encontraa un bug en el cual en la condicion if la opcion es igual a 1 (Balance) y la condicional if (Opcion) depositar, no funciona el parametro else. Sin embargo la recarga de interacción con objetos si funciona que en este caso es la recarga. YA FUE SOLUCIONADO


#include "Tarjeta.h"
#include "balance.h"
#include "Reward.h"
#include "Deposito.h"
#include <iostream>
using namespace std;



int opcion; //Opciones en enteros
int opc1; //Opciones
int opc2; //Opciones
int dep; //Definir variable deposito
int ide; //Definir variable identificacion solo enteros
string con; //Definir variable contraseña solo numeros enteros
int cuenta = 0;

//El main en este caso se da el numero de Id,la contrasena. (Teniendo en cuenta como si el nombre estuviera guardado en la base de datos)
int main (){
  //Tarjeta cliente(ide, "Erick Calderón", con);
  
  cout << "Ingrese su numero de ID "<< endl;
  cin >> ide; //Se pide el id del cliente
  cout << "Ingrese su constrasenia "<< endl;
  cin >> con; //Se pide que ingrese la constrasenia
  

// Se definen los obetos dependiendo de sus clases determinadas
  Reward Erick(5,"Chai Helado", "Jarabe extra"); //Objeto reward de las visitas
  Tarjeta cliente(ide, "Erick Calderón", con); //Objeto de registro
  Deposito r(dep); // Objeto de deposito
  Balance cuenta(1000); //Objeto de balance de dinero en la cuenta
  

// Se comenta el objeto Tarjeta, donde le repite sus datos ingresados
  cout<<endl<< "Su Id es " << cliente.getIdentificacion() << ", su nombre es "<< cliente.getNombre() <<  " y su contrasena es "<< cliente.getContrasena() << endl;
  cout<<endl;
//Se pregunta que opcion le gustaria usar entre 3 opciones
  cout << "Escribe el numero de la opción que te gustaria usar"<< endl;
  cout<< "1. Balance"<<endl ;
  cout<< "2. Visitas"<<endl ;
  cout<< "3. Promociones"<<endl ;
  cin >> opcion;
    // La opcion 1 es para ver el balance de tu cuenta, que en este caso el predeterminado de 1000, sin embargo se puede hacer depositos.
    if (opcion == 1){
      cout << "Escogiste ver tu balance "<< endl;
      cout << endl << "Tu balance es de " <<cuenta.getCuenta() << " MXN" << endl;
        cout <<endl<< " Si quieres hacer un deposito escribe (1)"<<endl;
        cin >> opc1;
          if (opc1 == 1){
                cout << endl << " Escriba el monto a depositar, solo se permiten numeros enteros. " << endl;
                cin >> dep;
                if (dep > 0){
                  cuenta.recarga(dep); //Intento de recarga de deposito, sin embargo no funciono, a trabajar en la semana.
                  cout << endl << "Tu nuevo balance es " << (cuenta.getCuenta())<<endl;}
                else{
                  cout << endl << "No es un numero entero"<<endl;}
          }
        else{
            cout << endl << "Espero nos veamos pronto."<<endl;
              }

          
          }
            
      //Esta opciones es para ver tus visitas, en caso de que se tenga más de 5 visitas el programa le ofrecera el uso de sus visitas a cambio de una bebida gratis
    else if (opcion == 2){
      cout << "Escogiste ver tus visitas "<< endl;
        cout<<endl << "Hola, "  << cliente.getNombre() <<  " cuentas con " << Erick.getVisitas()<< " Visitas" <<endl;
          if( Erick.getVisitas() >= 5){
            cout<<endl << "Tienes disponible tu bebida favorita de un "<< Erick.getBebida()<<" a cambio de 5 visitas, con un modificador que en este caso es " << Erick.getMod() <<"\n";
            cout<<endl << "¿Quisieras usar tu bebida gratis? (En caso que guste usarlo escriba 1) ";
            cin >> opc2;
            if (opc2 == 1) {
             cout<<endl<<" Tu codigo de tu bebida gratis es 23423532143"<< endl;
          } else { 
                cout<<endl<<" Lo esperamos pronto"<< endl;
                 }
                  
        }   else{
              cout << "No cumples con las visitas para tener una promoción ";}
            }
            //Opcion 3, para saber si hay promociones.
      else if (opcion == 3){
        cout << endl << "Por el momento no contamos con promociones.";
      }
  
};

 
