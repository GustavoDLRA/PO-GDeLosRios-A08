//
// Created by gusta on 12/04/2018.
//

#include "Contacto.h"
Contacto::Contacto() {

}
Contacto::Contacto(std::string N, std::string Tel, std::string C, std::string Ed) {
    this->Nombre=N;
    this->Telefono=Tel;
    this->Correo=C;
    this->Edad=Ed;
}
void Contacto::setNombre(std::string Nombre) {
this->Nombre=Nombre;
}
void Contacto::setCorreo(std::string Correo) {
this->Correo=Correo;
}
void Contacto::setEdad(std::string Edad) {
this->Edad=Edad;
}
void Contacto::setTelefono(std::string Telefono) {
this->Telefono=Telefono;
}

std::string Contacto::getNombre(std::string Nombre) {
    return  this->Nombre;
}
std::string Contacto::getTelefono(std::string Telefono) {
    return this->Telefono;
}
std::string Contacto::getCorreo(std::string Correo) {
    return this->Correo;
}
std::string Contacto::getEdad(std::string Edad) {
    return this->Edad;
}