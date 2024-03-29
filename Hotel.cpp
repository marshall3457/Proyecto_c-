/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Hotel.cpp
 * Author: Roberto Carlos
 * 
 * Created on 1 de abril de 2023, 9:17 a. m.
 */

#include "Hotel.h"
#include "Exception.h"

Hotel::Hotel(const Hotel& orig) {
}

Hotel::~Hotel() {
}


string Hotel::GetNombreHotel() {
    return nombreHotel;
}

void Hotel::adiccionarEmpleado(Empleado * empleado){


    this->listaEmpleados->push_back(empleado);
    
}

void Hotel::adiccionarEstadia(Estadia* estadia){
    this->listaEstadias->push_back(estadia);
     
}

void Hotel::adiccionarServicios(Servicios * servicios){
        this->listaServicios->push_back(servicios);

}


    
list<Estadia *> * Hotel::obtenerEstadiasHuesped(string DNI){
    list<Estadia *> * resultados = new list<Estadia*>();
    
    list<Estadia *>::iterator it = this->listaEstadias->begin();
    
    Estadia * e = NULL;
    for(;it != this->listaEstadias->end(); it++){
        e = *it;
        if(e->GetNuevoHuesped()->GetNuevaPersona()->GetDNI() == DNI){
            resultados->push_back(e);
        }
        
    }
    
    return resultados;
       
}
    
    
Empleado * Hotel::BuscarEmpleado(string DNI){
    list<Empleado*>::iterator it = this->listaEmpleados->begin();
    Empleado * e = NULL;
    
    for(;it != this->listaEmpleados->end(); it++){
        e = *it;
        if(e->GetNuevaPersona()->GetDNI() == DNI){
            return e;
        }
    }  
}

Estadia * Hotel::BuscarEstadia(string numeroEstadia){
    list<Estadia *>::iterator it = this->listaEstadias->begin();
    
    Estadia * e = NULL;
    
    for(; it != this->listaEstadias->end(); it++){
        e = *it;
        if(e->GetNumeroEstadia() == numeroEstadia)
            return e;
    }
    
}

//IDEA como segundo parametro le voy a pasar los acronimos de los tipos de identificacion;
Estadia * Hotel::BuscarEstadia(string DNI, string identificacion){
    if(identificacion == "cc"){
        list<Estadia *>::iterator it = this->listaEstadias->begin();

        Estadia * e = NULL;

        for(; it != this->listaEstadias->end(); it++){
            e = *it;
            if(e->GetNuevoHuesped()->GetNuevaPersona()->GetDNI() == DNI)
                return e;
        }
    }
}
//agregar algo que lanze un error si el empleado no se encuentra;

void Hotel::EliminarEmpleado(string DNI) {
    list<Empleado *>::iterator it = this->listaEmpleados->begin();
    for(;it != this->listaEmpleados->end(); it++) {
        if((*it)->GetNuevaPersona()->GetDNI() == DNI) {
            delete *it;  // Elimina el objeto apuntado por el puntero, para eliminar espacio;
            it = this->listaEmpleados->erase(it);  // Elimina el elemento de la lista y actualiza el iterador
            break;
        }
    }
}

void Hotel::EliminarEstadia(string numeroEstadia) {
    list<Estadia *>::iterator it = this->listaEstadias->begin();
    for(;it != this->listaEstadias->end(); it++) {
        if((*it)->GetNumeroEstadia() == numeroEstadia) {
            delete *it;  // Elimina el objeto apuntado por el puntero, para eliminar espacio;
            it = this->listaEstadias->erase(it);  // Elimina el elemento de la lista y actualiza el iterador
            break;
        }
    }
}

list<Empleado *> * Hotel::ObtenerEmpleadosArea(string area){
    list<Empleado*> * resultados = new list<Empleado *>();
    list<Empleado *>::iterator it = this->listaEmpleados->begin();
    Empleado * e;
    for(; it != this->listaEmpleados->end();it++){
        e = *it;
        if(e->GetCargo() == area){
            resultados->push_back(e);
        }
 
    }
    return resultados;
}


list<Empleado *> * Hotel::obtenerListaEmpleado(){
    return this->listaEmpleados;
}

list<Estadia *> * Hotel::obtenerListaEstadia(){
    return this->listaEstadias;
}


list<Servicios *> * Hotel::ObtenerListaServiciosHotel(){
    return this->listaServicios;
}

