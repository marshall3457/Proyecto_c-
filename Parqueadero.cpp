/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Parqueadero.cpp
 * Author: Roberto Carlos
 * 
 * Created on 1 de abril de 2023, 9:11 a. m.
 */

#include "Parqueadero.h"


Parqueadero::Parqueadero(const Parqueadero& orig) {
}

Parqueadero::~Parqueadero() {
}

int Parqueadero::GetCostoDia()  {
    return costoDia;
}

string Parqueadero::GetLugarEstacionamiento()  {
    return lugarEstacionamiento;
}
int Parqueadero::GetEntrada(){
    int convertidoDias = 0;
    
    convertidoDias += this->anio * 365;
    convertidoDias += this->mes * 30;
    convertidoDias += this->dia;
    
    return convertidoDias;
}

void Parqueadero::SetSalida(int dia,int mes, int anio){
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
            
}

int Parqueadero::tiempoEstacionado() {


}

int Parqueadero::costoTotalParqueadero(){
    int iva = (this->costoDia * tiempoEstacionado()) * 0.19;
    return (this->costoDia * tiempoEstacionado()) + iva;
}



void Parqueadero::SetCostoDia(int costoDia) {
    this->costoDia = costoDia;
}

void Parqueadero::SetLugarEstacionamiento(string lugarEstacionamiento) {
    this->lugarEstacionamiento = lugarEstacionamiento;
}
