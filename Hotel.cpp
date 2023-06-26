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
    list<Estadia *>::iterator it = this->listaEstadias->begin();
    Estadia * e = NULL;
    while(it != this->listaEstadias->end()){
        e = (*it);
        //en si esta bien para registrar una nueva estadia con el DNI pero no me cuadra del todo;
        //codigo de la estadia
        if(estadia->GetNuevoHuesped()->GetNuevaPersona()->GetDNI() == e->GetNuevoHuesped()->GetNuevaPersona()->GetDNI()){
            throw new Exception("La estadia ya se encuentra registrada");
        }it++;

        
    }
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
    list<Empleado *> * resultados = new list<Empleado*>();
    list<Empleado *>::iterator it = this->listaEmpleados->begin();
    Empleado * e;
    for(; it != this->listaEmpleados->end();it++){
        e = *it;
        resultados->push_back(e);
    }
    return resultados;
}

list<Estadia *> * Hotel::obtenerListaEstadia(){
    list<Estadia *> * resultados = new list<Estadia*>();
    list<Estadia *>::iterator it = this->listaEstadias->begin();
    Estadia * e;
    for(; it != this->listaEstadias->end();it++){
        e = *it;
        resultados->push_back(e);
    }
    return resultados;
}


list<Servicios *> * Hotel::ObtenerListaServiciosHotel(){
    list<Servicios *> * resultados = new list<Servicios*>();
    list<Servicios *>::iterator it = this->listaServicios->begin();
    Servicios * e;
    for(; it != this->listaServicios->end();it++){
        e = *it;
        resultados->push_back(e);
    }
    return resultados;
}

