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
    list<Empleado *>::iterator it = this->listaEmpleados->begin();
    Empleado * e = NULL;
    while(it != this->listaEmpleados->end()){
        e= (* it);
        
        if(empleado->GetNuevaPersona()->GetDNI() == e->GetNuevaPersona()->GetDNI()){
            throw new Exception("El empleado ya se encuentra registrado");
        }it++;
    }
    
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


list<Empleado*> * Hotel::ObtenerEmpleados(string cargo){
    list<Empleado *> * resultados =new list<Empleado*>();
    
    list<Empleado *>::iterator it = this->listaEmpleados->begin();
    Empleado * e;
    
    for(;it != this->listaEmpleados->end();it++){
        e = *it;
        if(e->GetCargo() == cargo){
            resultados->push_back(e); 
        }
            
    }
    return resultados;

}
    
list<Estadia *> * Hotel::obtenerEstadiasHechas(string DNI){
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


//agregar algo que lanze un error si el empleado no se encuentra;

void Hotel::EliminarEmpleado(string nombre){
    list<Empleado*>::iterator it = this->listaEmpleados->begin();
    
    Empleado * e = NULL;
    
    for(; it != this->listaEmpleados->end(); it++){
        e = *it;
        if(e->GetNuevaPersona()->GetNombre() == nombre){
            listaEmpleados->remove(e);
        }
    }
   
}
