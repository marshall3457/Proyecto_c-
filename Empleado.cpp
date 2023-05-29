/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Empleados.cpp
 * Author: Roberto Carlos
 * 
 * Created on 1 de abril de 2023, 9:11 a. m.
 */

#include "Empleado.h"


Empleado::Empleado(const Empleado& orig) {
}

Empleado::~Empleado() {
}

string Empleado::GetCargo() {
    return cargo;
}

Persona* Empleado::GetNuevaPersona() {
    return nuevaPersona;
}

int Empleado::GetSueldo() {
    return sueldo;
}

void Empleado::SetCargo(string cargo) {
    this->cargo = cargo;
}

void Empleado::SetSueldo(int sueldo) {
    this->sueldo = sueldo;
}

void Empleado::aplicarSueldo(float aumento, string porcentaje){
    if(porcentaje == "%") this->sueldo += sueldo * aumento;
}

void Empleado::aplicarSueldo(int dinero){
    this->sueldo += dinero;
}
