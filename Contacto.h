//
// Created by gusta on 12/04/2018.
//

#ifndef TAREAP3_CONTACTO_H
#define TAREAP3_CONTACTO_H

#include <iostream>


class Contacto {
//Atributos de la clase
private:
    std::string Nombre;
    std::string Telefono;
    std::string Correo;
    std::string Edad;
public:
//Constructores de la clase.
Contacto();
Contacto(std::string N, std::string Tel, std::string C, std::string Ed);
//Setters
void setNombre(std::string Nombre);
void setTelefono(std::string Telefono);
void setCorreo(std::string Correo);
void setEdad(std::string Edad);
//Getters
std::string getNombre(std::string Nombre);
std::string getTelefono(std::string Telefono);
std::string getCorreo(std::string Correo);
std::string getEdad(std::string Edad);
};


#endif //TAREAP3_CONTACTO_H
