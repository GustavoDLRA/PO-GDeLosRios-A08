#include <iostream>
#include "Contacto.h"

int main() {
//Vamos a hacer strings para cada cosa.
    std::string Nom;
    std::string Tel;
    std::string Corr;
    std::string Edad;
//De ahí mandamos llamar la función.
Contacto pruebaContacto = *new Contacto(Nom,Tel,Corr,Edad);//Constructor
//Setters
pruebaContacto.setNombre(Nom);
pruebaContacto.setTelefono(Tel);
pruebaContacto.setCorreo(Corr);
pruebaContacto.setEdad(Edad);
//Getters
pruebaContacto.getNombre(Nom);
pruebaContacto.getTelefono(Tel);
pruebaContacto.getCorreo(Corr);
pruebaContacto.getEdad(Edad);
//Hacemos que se adapte para cada bloque del array.
   int *arregloNumContactos =NULL; //Este es para contar el número de contactos
   std::string *infoContactos=NULL; //Este es para la info de cada contacto
   int cantidad, valor;
   std::cout<<"¿Cuantos Contactos?"<<"\n";
   std::cin>>cantidad;

    //Creamos el Array
   arregloNumContactos= new int[cantidad];
   infoContactos= new std::string[cantidad];

    //Este for sirve para darle tamañoa al array, y posteriormente llenar los valors
    for(int i= 0; i<cantidad; i++){
        std::cout<<"Ingrese los datos del contacto #"<<i<<"\n";
        std::cout<<"Ingrese el Nombre del contacto: ";
        std::cin>>Nom;
        std::cout<<"Ingrese el Telefono del contacto: ";
        std::cin>>Tel;
        std::cout<<"Ingrese el Correo del contacto: ";
        std::cin>>Corr;
        std::cout<<"Ingrese la Edad del contacto: ";
        std::cin>>Edad;

        infoContactos[i]="Nombre:  "+Nom+"  Telefono:  "+Tel+"  Correo:  "+Corr+"  Edad:  "+Edad+"\n";
    }
    //Este imprime aquello que esté adentro de cada posición del Array
    for (int i = 0; i <cantidad ; ++i) {
        std::cout<<"Info del Contacto# "<<i<<"\n";
        std::cout<<"["<<infoContactos[i]<<"]"<<"\n";
    }
    return 0;
}