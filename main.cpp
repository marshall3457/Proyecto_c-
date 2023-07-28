#include <iostream>
#include <string>
#include <random>
#include <list>
#include <windows.h>
#include "Hotel.h"
#include "Empleado.h"
#include "Estadia.h"
#include "Huesped.h"
#include "Persona.h"
#include "Exception.h"
#include "Servicios.h"
#include "Parqueadero.h"
#include "Habitacion.h"

using namespace std;


//CREAR UN EJECUTABLE    g++ main.cpp -o main.exe -lgdi32


//buscar con find despues
//PAUSA
//SIN SENTIDO
//DO
//DESPUES
//IDEA
//GIT
//PROBLEMA SOLUCIONADO


// Declaración de variables globales
HWND hwndButton1;
HWND hwndButton2;
HWND hwndButton3;
HWND hwndButton4;    //declaracion de botones, ambito global
HWND hwndButton5;

list<HWND*> * botonesMenuPrincipal = new list<HWND*>();

//---------------------------
HWND hwndButtonServicios1;
HWND hwndButtonServicios2;
HWND hwndButtonServicios3;
HWND hwndButtonServicios4;
HWND hwndButtonServicios5;
HWND hwndButtonServicios6;
HWND hwndButtonServicios7;
HWND hwndButtonServicios8;

list<HWND*> * botonesServicios = new list<HWND*>();

//---------------------------
HWND hwndButtonEmpleado1;
HWND hwndButtonEmpleado2;
HWND hwndButtonEmpleado3;
HWND hwndButtonEmpleado4;
HWND hwndButtonEmpleado5;
HWND hwndButtonEmpleado6;
HWND hwndButtonEmpleado7;
HWND hwndButtonEmpleado8;
HWND hwndButtonEmpleado9;
HWND hwndButtonEmpleado10;
HWND hwndButtonEmpleado11;

list<HWND*> * botonesEmpleado = new list<HWND*>();

//---------------------------
HWND hwndButtonEstadia1;
HWND hwndButtonEstadia2;
HWND hwndButtonEstadia3;
HWND hwndButtonEstadia4;
HWND hwndButtonEstadia5;
HWND hwndButtonEstadia6;
HWND hwndButtonEstadia7;
HWND hwndButtonEstadia8;
HWND hwndButtonEstadia9;
HWND hwndButtonEstadia10;
HWND hwndButtonEstadia11;
HWND hwndButtonEstadia12;

list<HWND*> * botonesEstadia = new list<HWND*>();

//---------------------------
HWND hwndButtonParqueadero1;
HWND hwndButtonParqueadero2;
HWND hwndButtonParqueadero3;
HWND hwndButtonParqueadero4;
HWND hwndButtonParqueadero5;

list<HWND*> * botonesParqueadero = new list<HWND*>();

//---------------------------
HWND hwndButtonHuesped1;
HWND hwndButtonHuesped2;
HWND hwndButtonHuesped3;
HWND hwndButtonHuesped4;
HWND hwndButtonHuesped5;

list<HWND*> * botonesHuesped= new list<HWND*>();

list<list<HWND*>*> * listaBotones = new list<list<HWND*>*>();


HWND hwndLabel;
HWND hwndLabel1;
HWND hwndLabel2;
HWND hwndLabel3;
HWND hwndLabel4;
HWND hwndLabel5;
HWND hwndLabel6;
HWND hwndLabel7;
HWND hwndLabel8;
HWND hwndLabel9;
HWND hwndLabel10;
HWND hButton;
HWND hInput;
HWND hInput1;
HWND hInput2;
HWND hInput3;
HWND hInput4;
HWND hInput5;
HWND hInput6;
HWND hInput7;
HWND hInput8;
HWND hInput9;
HWND hInput10;

list<HWND *> * listaDeLabel_Input = new list<HWND *>();
list<HWND *> * ListaDeBotonesfor = new list<HWND *>();
//-------------------------
const int ID_BUTTON = 1001;
const int ID_INPUT = 1002;
const int WM_CUSTOM_BUTTON_CLICK = WM_USER + 1;

void limpiarPantalla();

int c = 0;
list <Servicios*> * nuevosServicios = new list<Servicios*>();
list <Empleado*> * nuevosEmpleados = new list<Empleado*>();
LRESULT CALLBACK ButtonWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
// Función de manejo de mensajes    

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {

    //int c = 0;  aca no recibe el valor nuevo afuera si;


    
    Hotel * nuevoHotel = new Hotel("Carmelo");

    Persona * nuevaPersona1 = new Persona("Carlos", 21, "Masculino", "12");
    Empleado * nuevoEmpleado1 =  new Empleado(nuevaPersona1,"Servicio a la habitacion",1200000);

    Persona * nuevaPersona2 = new Persona("Juan", 29, "Masculino", "24");
    Empleado * nuevoEmpleado2 =  new Empleado(nuevaPersona2,"Aseo",900000);

    Persona * nuevaPersona3 = new Persona("Ana", 45, "Femenino", "14");
    Empleado * nuevoEmpleado3 =  new Empleado(nuevaPersona3,"Aseo", 1300000);
    nuevoHotel->adiccionarEmpleado(nuevoEmpleado1);
    nuevoHotel->adiccionarEmpleado(nuevoEmpleado2);
    nuevoHotel->adiccionarEmpleado(nuevoEmpleado3);
    //--------------------------------------------------------------------------------------------------------------

    //La estadian van desde el P1 hasta el P100 contando el hotel con 100 habitaciones;
    //SERVICIOS
    //que obtenga el tiempo de la estadia y lo multiple por el precio del servicio y asi obtenga el valor y le sume el iva
    Servicios * servicioEstadias1 = new Servicios("Wifi",2000,19);
    Servicios * servicioEstadias2 = new Servicios("Aseo",3000,19);
    Servicios * servicioEstadias3 = new Servicios("Cable",4000,21);
    Servicios * servicioEstadias4 = new Servicios("Refrigerador",2000,19);
    Servicios * servicioEstadias5 = new Servicios("Piscina",5000,15);
    
    
    nuevoHotel->adiccionarServicios(servicioEstadias1);
    nuevoHotel->adiccionarServicios(servicioEstadias2);
    nuevoHotel->adiccionarServicios(servicioEstadias3);
    nuevoHotel->adiccionarServicios(servicioEstadias4);
    nuevoHotel->adiccionarServicios(servicioEstadias5);
    
    
    list<Servicios*>::iterator iteratorNuevo = nuevosServicios->begin();
    
    Servicios * eObject = NULL;
   
    for(;iteratorNuevo != nuevosServicios->end();iteratorNuevo++){
        
        eObject = *iteratorNuevo;
        nuevoHotel->adiccionarServicios(eObject);
    }
    //---------------------------------
    list<Empleado*>::iterator iteradorNuevo2 = nuevosEmpleados->begin();
    
    Empleado * eObject2 = NULL;
   
    for(;iteradorNuevo2 != nuevosEmpleados->end();iteradorNuevo2++){
        
        eObject2 = *iteradorNuevo2;
        nuevoHotel->adiccionarEmpleado(eObject2);
    }
    
    //-----------------------------------------------------------------------------------------------------------------

    //ESTADIAS
    Persona * PersonaHotel1 = new Persona("Rodriguez", 45, "Masculino", "9");
    Huesped * nuevoHuesped1 = new Huesped(PersonaHotel1);
    Habitacion * nuevaHabitacion1 = new Habitacion(35000, 72, 2);
    Parqueadero * nuevoParqueadero1 = new Parqueadero(5000,"A12");
    Estadia * nuevaEstadia1 =  new Estadia(nuevoHuesped1,nuevaHabitacion1,nuevoParqueadero1,20,"12/07/2003","P90");
    nuevaEstadia1->adiccionarServicios(servicioEstadias4);
    nuevaEstadia1->adiccionarServicios(servicioEstadias2);
    nuevaEstadia1->adiccionarServicios(servicioEstadias5);
    //Cada objeto de estadia tiene su propia lista de servicios
    //Bueno aplicando esa logica los dias de que se quede el huesped van a ser tambien los dias que se quede en el parqueadero;

    Persona * PersonaHotel2 = new Persona("Juana", 24, "Femenino", "19");
    Huesped * nuevoHuesped2 = new Huesped(PersonaHotel2);
    Habitacion * nuevaHabitacion2 = new Habitacion(95000, 100, 3);
    Parqueadero * nuevoParqueadero2 = new Parqueadero(3000,"B34");
    Estadia * nuevaEstadia2 =  new Estadia(nuevoHuesped2,nuevaHabitacion2,nuevoParqueadero2,12,"11/02/2012","P20");
    nuevaEstadia2->adiccionarServicios(servicioEstadias2);
    nuevaEstadia2->adiccionarServicios(servicioEstadias5);

    Persona * PersonaHotel3 = new Persona("Carlos", 31, "Masculino", "28");
    Huesped * nuevoHuesped3 = new Huesped(PersonaHotel3);
    Habitacion * nuevaHabitacion3 = new Habitacion(40000, 92, 3);
    Parqueadero * nuevoParqueadero3 = new Parqueadero(3000,"B95");
    Estadia * nuevaEstadia3 =  new Estadia(nuevoHuesped3,nuevaHabitacion3,nuevoParqueadero3,9,"15/08/2005","P35");
    nuevaEstadia3->adiccionarServicios(servicioEstadias5);
    nuevaEstadia3->adiccionarServicios(servicioEstadias1);

    //Estadia vacia sin huesped
    Persona * PersonaHotel4 = new Persona("", 0, "", "");
    Huesped * nuevoHuesped4 = new Huesped(PersonaHotel4);
    Habitacion * nuevaHabitacion4 = new Habitacion(0, 0, 0);
    Parqueadero * nuevoParqueadero4 = new Parqueadero(0,"0");
    Estadia * nuevaEstadia4 =  new Estadia(nuevoHuesped4,nuevaHabitacion4,nuevoParqueadero4,0,"","P19");


    nuevoHotel->adiccionarEstadia(nuevaEstadia1);
    nuevoHotel->adiccionarEstadia(nuevaEstadia2);
    nuevoHotel->adiccionarEstadia(nuevaEstadia3);
    nuevoHotel->adiccionarEstadia(nuevaEstadia4);
    



        
    if (msg == WM_CREATE) {


        RECT rect;
        GetClientRect(hwnd, &rect);
        int windowWidth = rect.right - rect.left;
        int x = windowWidth * ((100.0 / 7) / 100); 
        int xBoton = windowWidth * 0.13;
        // Crear los botones
        hwndButton1 = CreateWindow(
            "BUTTON", // Clase del control
            "Servicios", // Texto del botón          
            WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON, // Estilo del botón
            x, 10, xBoton, 30, // Posición y tamaño del botón
            hwnd, // Ventana padre
            (HMENU) 1, // Identificador del botón
            NULL, NULL);

        hwndButton2 = CreateWindow(
            "BUTTON", 
            "Empleados", 
            WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
            x * 2, 10, xBoton, 30, 
            hwnd, 
            (HMENU) 2, 
            NULL, NULL);
        hwndButton3 = CreateWindow(
            "BUTTON",
            "Estadias",
            WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
            x * 3, 10, xBoton, 30,                               
            hwnd, 
            (HMENU) 3,          
            NULL, NULL);
        hwndButton4 = CreateWindow(
            "BUTTON", 
            "Parqueadero", 
            WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
            x * 4, 10, xBoton, 30, 
            hwnd, 
            (HMENU) 4, 
            NULL, NULL);
        hwndButton5 = CreateWindow(
            "BUTTON",
            "Huesped",
            WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
            x * 5, 10, xBoton, 30, 
            hwnd,
            (HMENU) 5,
            NULL, NULL);
        //controles de windows para ventana

        botonesMenuPrincipal->push_back(&hwndButton1);
        botonesMenuPrincipal->push_back(&hwndButton2);
        botonesMenuPrincipal->push_back(&hwndButton3);
        botonesMenuPrincipal->push_back(&hwndButton4);
        botonesMenuPrincipal->push_back(&hwndButton5);
            
        return 0;
        
    } else if (msg == WM_COMMAND) {
        RECT windowRect;
        GetClientRect(hwnd, &windowRect);
        int windowWidth = windowRect.right - windowRect.left;
        //int windowHeight = windowRect.bottom - windowRect.top;

        list<HWND *>::iterator it = botonesMenuPrincipal->begin();
        
        HWND * e = NULL;
        for(; it != botonesMenuPrincipal->end();it++){
            e = *it;
            DestroyWindow(*e);
        }
        


        
        if (LOWORD(wParam) == 1) {
            
   
            // Lógica para la acción 1
            hwndButtonServicios1 = CreateWindow(
                "BUTTON", // Clase del control
                "Conocer servicios disponibles", // Texto del botón          
                WS_VISIBLE | WS_CHILD, // Estilo del botón
                0, 0, windowWidth, 30, // Posición y tamaño del botón
                hwnd, // Ventana padre
                (HMENU) 11, // Identificador del botón
                NULL, NULL);

            hwndButtonServicios2 = CreateWindow(
                "BUTTON", 
                "Agregar servicio", 
                WS_VISIBLE | WS_CHILD, 
                0, 30, windowWidth, 30,   
                hwnd,
                (HMENU) 12,
                NULL, NULL);
            hwndButtonServicios3 = CreateWindow(
                "BUTTON",
                "Conocer veces pedidas de un servicio en especifico",
                WS_VISIBLE | WS_CHILD,
                0, 60, windowWidth, 30,                                 
                hwnd, 
                (HMENU) 13,          
                NULL, NULL);
            hwndButtonServicios4 = CreateWindow(
                "BUTTON", 
                "Conocer veces pedidas de todos los servicios",
                WS_VISIBLE | WS_CHILD,
                0, 90, windowWidth, 30, 
                hwnd, 
                (HMENU) 14, 
                NULL, NULL);
            hwndButtonServicios5 = CreateWindow(
                "BUTTON",
                "Costo total de todas las areas de servicios en una estadia",
                WS_VISIBLE | WS_CHILD, 
                0, 120, windowWidth, 30, 
                hwnd, 
                (HMENU) 15,
                NULL, NULL);
            hwndButtonServicios6 = CreateWindow(
                "BUTTON", 
                "Costo total de todos los servicios de una estadia", 
                WS_VISIBLE | WS_CHILD,
                0, 150, windowWidth, 30,
                hwnd, 
                (HMENU) 16,
                NULL, NULL);
            hwndButtonServicios7 = CreateWindow(
                "BUTTON",
                "Generar factura",
                WS_VISIBLE | WS_CHILD,
                0, 180, windowWidth, 30, 
                hwnd, 
                (HMENU) 17, 
                NULL, NULL);
            hwndButtonServicios8 = CreateWindow(
                "BUTTON", 
                "Menu principal", 
                WS_VISIBLE | WS_CHILD, 
                0, 210, windowWidth, 30, 
                hwnd,
                (HMENU) 18, 
                NULL, NULL);
            
            botonesServicios->push_back(&hwndButtonServicios1);
            botonesServicios->push_back(&hwndButtonServicios2);
            botonesServicios->push_back(&hwndButtonServicios3);
            botonesServicios->push_back(&hwndButtonServicios4);
            botonesServicios->push_back(&hwndButtonServicios5);
            botonesServicios->push_back(&hwndButtonServicios6);
            botonesServicios->push_back(&hwndButtonServicios7);
            botonesServicios->push_back(&hwndButtonServicios8);
            
            
        }else if(msg == WM_COMMAND){
            //si inicializo la variable fuera de todas las funciones si me la toma y se suma;
             //siempre que se oprime un boton se repite el WM_COMMAND;
            if(LOWORD(wParam) == 11){
                //PROBLEMA SOLUCIONADO: 
                /* se estaba creando un bucle infinito, y era por que tenia el objeto hotel fuera de todo y lo meti dentro del LRESULT y se soluciono:
                 esto se de debe a que: El bucle infinito se produce porque estás creando un nuevo hotel en cada iteración del bucle en la sección else if(msg == WM_COMMAND)*/
                list<HWND *>::iterator ititEliminadorLabel = listaDeLabel_Input->begin();

                HWND * eliminar;
                for(; ititEliminadorLabel != listaDeLabel_Input->end();ititEliminadorLabel++){
                    eliminar = *ititEliminadorLabel;
                    DestroyWindow(*eliminar);
                }     
                
                int yPosicion = 280;
                 hwndLabel = CreateWindow(
                "STATIC", 
                "SERVICIOS:", 
                WS_VISIBLE | WS_CHILD, 
                0, 240, 200, 30, 
                hwnd,
                NULL, NULL, NULL);
                
                list<Servicios *> * resultado = new list<Servicios *>();
                resultado = nuevoHotel->ObtenerListaServiciosHotel();
                list<Servicios *>::iterator it = resultado->begin();

                Servicios * e;
                for(; it != resultado->end();it++){
                    e = *it;
                    string nombre = e->getNombreServicio();
                    const char* nombreCStr = nombre.c_str();
                    HWND *hwndLabelFor = new HWND;

                    *hwndLabelFor = CreateWindow(
                        "STATIC", 
                        nombreCStr, 
                        WS_VISIBLE | WS_CHILD, 
                        0, yPosicion, 200, 30, 
                        hwnd,NULL, NULL, NULL);
                    
                ListaDeBotonesfor->push_back(hwndLabelFor);
                yPosicion += 50;
            }


                



                // Clear the vector after destroying the labels
                
            }else if(LOWORD(wParam) == 12){
                limpiarPantalla();
                
                
                
                 hwndLabel = CreateWindow(
                "STATIC", 
                "Ingrese los siguientes datos:", 
                WS_VISIBLE | WS_CHILD, 
                0, 240, 200, 30, 
                hwnd,
                NULL, NULL, NULL);
           
                /*------------------------------*/
                 hwndLabel2 = CreateWindow(
                "STATIC", 
                "Nombre del servicio:", 
                WS_VISIBLE | WS_CHILD, 
                0, 280, 200, 30, 
                hwnd,
                NULL, NULL, NULL);
                
                 hInput = CreateWindowEx(
                    0,
                    "EDIT",
                    "",
                    WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | WS_TABSTOP,
                    10, 320, 200, 20,
                    hwnd,
                    (HMENU)101,
                    NULL, NULL);

                /*------------------------------*/
                 hwndLabel3 = CreateWindow(
                "STATIC", 
                "Precio del servicio:", 
                WS_VISIBLE | WS_CHILD, 
                0, 360, 200, 30, 
                hwnd,
                NULL, NULL, NULL);
                
                 hInput2 = CreateWindowEx(
                    0,
                    "EDIT",
                    "",
                    WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | WS_TABSTOP,
                    10, 400, 200, 20,
                    hwnd,
                    (HMENU)201,
                    NULL, NULL);


                /*------------------------------*/
                 hwndLabel4 = CreateWindow(
                "STATIC", 
                "Iva del servicio:", 
                WS_VISIBLE | WS_CHILD, 
                0, 440, 200, 30, 
                hwnd,
                NULL, NULL, NULL);

                
                 hInput3 = CreateWindowEx(
                    0,
                    "EDIT",
                    "",
                    WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | WS_TABSTOP,
                    10, 480, 200, 20,
                    hwnd,
                    (HMENU)301,
                    NULL, NULL);
                /*------------------------------*/
                //boton de crear
                 hButton = CreateWindowEx(
                    0,
                    "BUTTON",
                    "crear nuevo servicio",
                    WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                    10, 520, 200, 25,
                    hwnd,
                    (HMENU)102,
                    NULL, NULL);
                /*------------------------------*/


                SetProp(hButton, "ButtonWindowProc", (HANDLE)GetWindowLongPtr(hButton, GWLP_WNDPROC));
                SetWindowLongPtr(hButton, GWLP_WNDPROC, (LONG_PTR)ButtonWindowProc);


                
                
            }else if (LOWORD(wParam) == 102 && HIWORD(wParam) == BN_CLICKED) {
                    HWND hInput = GetDlgItem(hwnd, 101);
                    int textLength = GetWindowTextLength(hInput);
                    char* buffer = new char[textLength + 1];
                    GetWindowText(hInput, buffer, textLength + 1);
                    
                    HWND hInput2 = GetDlgItem(hwnd, 201);
                    int textLength1 = GetWindowTextLength(hInput2);
                    char* buffer1 = new char[textLength1 + 1];
                    GetWindowText(hInput2, buffer1, textLength1 + 1);
                    int bufferNumero = std::stoi(buffer1);
                    
                    HWND hInput3 = GetDlgItem(hwnd, 301);
                    int textLength2 = GetWindowTextLength(hInput3);
                    char* buffer2 = new char[textLength2 + 1];
                    GetWindowText(hInput3, buffer2, textLength2 + 1);
                    buffer2[textLength2] = '\0';  // Ensure the buffer is null-terminated
                    int bufferNumero1 = std::stoi(buffer2);
                    
        
                    //PROBLEMA SOLUCIONADO
                    /*cree la lista afuera y aqui agrege ese objeto que crea el usuario
                     * esto se debe a que la lista siempre la toma cada vez que entra a la opcion 11;   
                     */
                    Servicios * nuevoServicio = new Servicios(buffer, bufferNumero, bufferNumero1);
                    nuevosServicios->push_back(nuevoServicio);

                    
                    
                     hwndLabel5 = CreateWindow(
                    "STATIC", 
                    "Servicio agregado con exito!", 
                    WS_VISIBLE | WS_CHILD, 
                    10, 560, 200, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                      

                
                    
            }else if(LOWORD(wParam) == 13){
                    limpiarPantalla();
 
                
                     hwndLabel = CreateWindow(
                    "STATIC", 
                    "Ingrese los siguientes datos:", 
                    WS_VISIBLE | WS_CHILD, 
                    0, 240, 200, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                    
                    
                     hwndLabel2 = CreateWindow(
                        "STATIC", 
                        "Nombre del servicio:", 
                        WS_VISIBLE | WS_CHILD, 
                        0, 280, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);

                     hInput = CreateWindowEx(
                        0,
                        "EDIT",
                        "",
                        WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | WS_TABSTOP,
                        10, 320, 200, 20,
                        hwnd,
                        (HMENU)101,
                        NULL, NULL);
                    
                    
                     hButton = CreateWindowEx(
                        0,
                        "BUTTON",
                        "Consultar",
                        WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                        10, 360, 200, 25,
                        hwnd,
                        (HMENU)103,
                        NULL, NULL);

            }else if (LOWORD(wParam) == 103 && HIWORD(wParam) == BN_CLICKED){
                int contador = 0;
                HWND hInput = GetDlgItem(hwnd, 101);
                int textLength = GetWindowTextLength(hInput);
                char* buffer = new char[textLength + 1];
                GetWindowText(hInput, buffer, textLength + 1);

                list<Servicios * > * serviciosUtilizados = new list<Servicios *>();
                list<Estadia *> * resultado = new list<Estadia *>();
                resultado = nuevoHotel->obtenerListaEstadia();
                list<Estadia *>::iterator it = resultado->begin();

                Estadia * e;
                Servicios * a;
                for (; it != resultado->end(); it++) {
                    e = *it;
                    serviciosUtilizados = e->GetListaServicios();
                    list<Servicios *>::iterator itServicios = serviciosUtilizados->begin();
                    for (; itServicios != serviciosUtilizados->end(); itServicios++) {
                        a = *itServicios;
                        if (a->getNombreServicio() == buffer) {
                            contador++;
                        }
                    }
                }
                
                string contadorCadena = to_string(contador);
                const char* nombreCStr2 = contadorCadena.c_str();

                 hwndLabel = CreateWindow(
                    "STATIC", 
                    "El numero de estadias utilizando el servicio es:", 
                    WS_VISIBLE | WS_CHILD, 
                    0, 400, 500, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                 hwndLabel2 = CreateWindow(
                    "STATIC", 
                    nombreCStr2, 
                    WS_VISIBLE | WS_CHILD, 
                    320, 400, 10, 30, 
                    hwnd,
                    NULL, NULL, NULL);
            }
            
            else if(LOWORD(wParam) == 14){
                limpiarPantalla();
  
                
                int Wifi = 0,Aseo = 0,Piscina = 0, Cable = 0, Refrigerador = 0;

                list<Servicios * > * serviciosUtilizados = new list<Servicios *>();
                list<Estadia *> * resultado = new list<Estadia *>();
                resultado = nuevoHotel->obtenerListaEstadia();
                list<Estadia *>::iterator it = resultado->begin();

                Estadia * e;
                Servicios * a;
                for(; it != resultado->end();it++){
                    e = *it;
                    serviciosUtilizados = e->GetListaServicios();
                    list<Servicios *>::iterator itServicios = serviciosUtilizados->begin();                     
                    for(; itServicios != serviciosUtilizados->end(); itServicios++){
                        a = *itServicios;
                        string nombreServicio = a->getNombreServicio();
                        if (nombreServicio == "Wifi") {
                            Wifi++;
                        } else if (nombreServicio == "Aseo") {
                            Aseo++;
                        } else if (nombreServicio == "Piscina") {
                            Piscina++;
                        } else if (nombreServicio == "Cable") {
                            Cable++;
                        } else if (nombreServicio == "Refrigerador") {
                            Refrigerador++;
                        }
                    }
                }

                string contadorCadena1 = to_string(Wifi);
                const char* nombreCStr3 = contadorCadena1.c_str();

                 hwndLabel = CreateWindow(
                    "STATIC", 
                    "El numero de estadias utilizando el servicio wifi es:", 
                    WS_VISIBLE | WS_CHILD, 
                    0, 240, 500, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                 hwndLabel2 = CreateWindow(
                    "STATIC", 
                    nombreCStr3, 
                    WS_VISIBLE | WS_CHILD, 
                    420, 240, 10, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                
                
                string contadorCadena2 = to_string(Aseo);
                const char* nombreCStr4 = contadorCadena2.c_str();

                 hwndLabel3 = CreateWindow(
                    "STATIC", 
                    "El numero de estadias utilizando el servicio aseo es:", 
                    WS_VISIBLE | WS_CHILD, 
                    0, 280, 500, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                 hwndLabel4 = CreateWindow(
                    "STATIC", 
                    nombreCStr4, 
                    WS_VISIBLE | WS_CHILD, 
                    420, 280, 10, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                
                
                string contadorCadena3 = to_string(Piscina);
                const char* nombreCStr5 = contadorCadena3.c_str();

                 hwndLabel5 = CreateWindow(
                    "STATIC", 
                    "El numero de estadias utilizando el servicio piscina es:", 
                    WS_VISIBLE | WS_CHILD, 
                    0, 320, 500, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                 hwndLabel6 = CreateWindow(
                    "STATIC", 
                    nombreCStr5, 
                    WS_VISIBLE | WS_CHILD, 
                    420, 320, 10, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                
                
                string contadorCadena4 = to_string(Cable);
                const char* nombreCStr6 = contadorCadena4.c_str();

                 hwndLabel7 = CreateWindow(
                    "STATIC", 
                    "El numero de estadias utilizando el servicio cable es:", 
                    WS_VISIBLE | WS_CHILD, 
                    0, 360, 500, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                 hwndLabel8 = CreateWindow(
                    "STATIC", 
                    nombreCStr6, 
                    WS_VISIBLE | WS_CHILD, 
                    420, 360, 10, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                
                
                string contadorCadena5 = to_string(Refrigerador);
                const char* nombreCStr7 = contadorCadena5.c_str();

                 hwndLabel9 = CreateWindow(
                    "STATIC", 
                    "El numero de estadias utilizando el servicio refrigerador es:", 
                    WS_VISIBLE | WS_CHILD, 
                    0, 400, 500, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                 hwndLabel10 = CreateWindow(
                    "STATIC", 
                    nombreCStr7, 
                    WS_VISIBLE | WS_CHILD, 
                    420, 400, 10, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                
                
                
            }else if(LOWORD(wParam) == 15){
                limpiarPantalla();

                
                hwndLabel = CreateWindow(
                    "STATIC", 
                    "Ingrese los siguientes datos:", 
                    WS_VISIBLE | WS_CHILD, 
                    0, 240, 200, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                    
                    
                     hwndLabel2 = CreateWindow(
                        "STATIC", 
                        "Numero de la estadia:", 
                        WS_VISIBLE | WS_CHILD, 
                        0, 280, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);

                     hInput = CreateWindowEx(
                        0,
                        "EDIT",
                        "",
                        WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | WS_TABSTOP,
                        10, 320, 200, 20,
                        hwnd,
                        (HMENU)101,
                        NULL, NULL);
                    
                    
                     hButton = CreateWindowEx(
                        0,
                        "BUTTON",
                        "Consultar",
                        WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                        10, 360, 200, 25,
                        hwnd,
                        (HMENU)104,
                        NULL, NULL);

            }else if (LOWORD(wParam) == 104 && HIWORD(wParam) == BN_CLICKED){
                int contador = 0;
                int yPosition = 400;
                HWND hInput = GetDlgItem(hwnd, 101);
                int textLength = GetWindowTextLength(hInput);
                char* buffer = new char[textLength + 1];
                GetWindowText(hInput, buffer, textLength + 1);

                list<Servicios *> * resultado = new list<Servicios *>();
                resultado = nuevoHotel->BuscarEstadia(buffer)->GetListaServicios();
                list<Servicios *>::iterator it =  resultado->begin();

                Servicios * e = NULL;

                for(;it != resultado->end();it++){
                    e = *it;
                    string servicio = e->getNombreServicio();
                    const char* nombreServicio = servicio.c_str();

                    int precio = e->getPrecio();
                    string precioCadena = to_string(precio);
                    const char* precioTexto = precioCadena.c_str();
                    
                     hwndLabel = CreateWindow(
                        "STATIC", 
                        nombreServicio, 
                        WS_VISIBLE | WS_CHILD, 
                        0, yPosition, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);
                    
                     hwndLabel2 = CreateWindow(
                        "STATIC", 
                        precioTexto, 
                        WS_VISIBLE | WS_CHILD, 
                        280, yPosition, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);  
                    
                    yPosition += 40;
                }
                

            }else if(LOWORD(wParam) == 16){
                limpiarPantalla();

                
                
                hwndLabel = CreateWindow(
                    "STATIC", 
                    "Ingrese los siguientes datos:", 
                    WS_VISIBLE | WS_CHILD, 
                    0, 240, 200, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                    
                    
                     hwndLabel2 = CreateWindow(
                        "STATIC", 
                        "Numero de la estadia:", 
                        WS_VISIBLE | WS_CHILD, 
                        0, 280, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);

                     hInput = CreateWindowEx(
                        0,
                        "EDIT",
                        "",
                        WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | WS_TABSTOP,
                        10, 320, 200, 20,
                        hwnd,
                        (HMENU)101,
                        NULL, NULL);
                    
                    
                     hButton = CreateWindowEx(
                        0,
                        "BUTTON",
                        "Consultar",
                        WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                        10, 360, 200, 25,
                        hwnd,
                        (HMENU)105,
                        NULL, NULL);

            }else if (LOWORD(wParam) == 105 && HIWORD(wParam) == BN_CLICKED){
                HWND hInput = GetDlgItem(hwnd, 101);
                int textLength = GetWindowTextLength(hInput);
                char* buffer3 = new char[textLength + 1];
                GetWindowText(hInput, buffer3, textLength + 1);

                int servicio = nuevoHotel->BuscarEstadia(buffer3)->costoTotalServicios();
                string servicio_string = to_string(servicio);
                const char* nombreServicio = servicio_string.c_str();

                 hwndLabel3 = CreateWindow(
                    "STATIC", 
                    "Costo total:", 
                    WS_VISIBLE | WS_CHILD, 
                    0, 420, 200, 30, 
                    hwnd,
                    NULL, NULL, NULL);  
                 hwndLabel4 = CreateWindow(
                    "STATIC", 
                    nombreServicio, 
                    WS_VISIBLE | WS_CHILD, 
                    100, 420, 200, 30, 
                    hwnd,
                    NULL, NULL, NULL);  

                
            }else if(LOWORD(wParam) == 17){
                limpiarPantalla();
             
                
                hwndLabel = CreateWindow(
                        "STATIC", 
                        "Ingrese los siguientes datos:", 
                        WS_VISIBLE | WS_CHILD, 
                        0, 240, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);
                    
                    
                     hwndLabel2 = CreateWindow(
                        "STATIC", 
                        "Numero de la estadia:", 
                        WS_VISIBLE | WS_CHILD, 
                        0, 280, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);

                     hInput = CreateWindowEx(
                        0,
                        "EDIT",
                        "",
                        WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | WS_TABSTOP,
                        10, 320, 200, 20,
                        hwnd,
                        (HMENU)101,
                        NULL, NULL);
                    
                    
                     hButton = CreateWindowEx(
                        0,
                        "BUTTON",
                        "Consultar",
                        WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                        10, 360, 200, 25,
                        hwnd,
                        (HMENU)106,
                        NULL, NULL);

            }else if(LOWORD(wParam) == 106 && HIWORD(wParam) == BN_CLICKED){
                    HWND hInput = GetDlgItem(hwnd, 101);
                    int textLength = GetWindowTextLength(hInput);
                    char* buffer4 = new char[textLength + 1];
                    GetWindowText(hInput, buffer4, textLength + 1);

                     hwndLabel3 = CreateWindow(
                        "STATIC", 
                        "Nombre: ", 
                        WS_VISIBLE | WS_CHILD, 
                        0, 400, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);
                    
                    string nombreInfo = nuevoHotel->BuscarEstadia(buffer4)->GetNuevoHuesped()->GetNuevaPersona()->GetNombre();
                    const char* nombreUtil = nombreInfo.c_str();
                     hwndLabel4 = CreateWindow(
                        "STATIC", 
                        nombreUtil, 
                        WS_VISIBLE | WS_CHILD, 
                        120, 400, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);
                     hwndLabel5 = CreateWindow(
                        "STATIC", 
                        "Edad:", 
                        WS_VISIBLE | WS_CHILD, 
                        0, 440, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);
                    
                    int edadInfo = nuevoHotel->BuscarEstadia(buffer4)->GetNuevoHuesped()->GetNuevaPersona()->GetEdad();
                    string edadCadena = to_string(edadInfo);
                    const char* edadUtil = edadCadena.c_str();
                     hwndLabel6 = CreateWindow(
                        "STATIC", 
                        edadUtil, 
                        WS_VISIBLE | WS_CHILD, 
                        120, 440, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);

                     hwndLabel7 = CreateWindow(
                        "STATIC", 
                        "Coste Servicio:", 
                        WS_VISIBLE | WS_CHILD, 
                        0, 480, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);
                    int costeInfo = nuevoHotel->BuscarEstadia(buffer4)->costoTotalServicios();
                    string costeCadena = to_string(costeInfo);
                    const char* costeUtil = costeCadena.c_str();
                     hwndLabel8 = CreateWindow(
                        "STATIC", 
                        costeUtil, 
                        WS_VISIBLE | WS_CHILD, 
                        120, 480, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);
                     hwndLabel9 = CreateWindow(
                        "STATIC", 
                        "Servicios utilizados:", 
                        WS_VISIBLE | WS_CHILD, 
                        0, 520, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);

                    int yPosition = 560;
                    list<Servicios *> * resultado = new list<Servicios *>();
                    resultado = nuevoHotel->BuscarEstadia(buffer4)->GetListaServicios();
                    list<Servicios *>::iterator it =  resultado->begin();
                    
                    Servicios * e = NULL;

                    for(;it != resultado->end();it++){
                        e = *it;
                        string nombreServicio = e->getNombreServicio();
                        const char* servicioUtilizado = nombreServicio.c_str();
                        
                        HWND * hwndLabelfor2 = new HWND;
                        
                        *hwndLabelfor2 = CreateWindow(
                        "STATIC", 
                        servicioUtilizado, 
                        WS_VISIBLE | WS_CHILD, 
                        0, yPosition, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);
                        
                        ListaDeBotonesfor->push_back(hwndLabelfor2);
                        yPosition += 40;
                    }

            }else if(LOWORD(wParam) == 18){
                limpiarPantalla();
          
                
                list<list<HWND*>*>::iterator it = listaBotones->begin();
                
                list<HWND*> * e = NULL;
                for(;it != listaBotones->end(); it++){
                    
                    e = *it;
                    list<HWND*>::iterator it2 = e->begin();
                    
                    HWND * a = NULL;
                    for(; it2 != e->end(); it2++){
                        a = *it2;
                        DestroyWindow(*a);
                    }
                }
                
                RECT rect;
                GetClientRect(hwnd, &rect);
                int windowWidth = rect.right - rect.left;
                int x = windowWidth * ((100.0 / 7) / 100); 
                int xBoton = windowWidth * 0.13;
                // Crear los botones
                hwndButton1 = CreateWindow(
                    "BUTTON", // Clase del control
                    "Servicios", // Texto del botón          
                    WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON, // Estilo del botón
                    x, 10, xBoton, 30, // Posición y tamaño del botón
                    hwnd, // Ventana padre
                    (HMENU) 1, // Identificador del botón
                    NULL, NULL);

                hwndButton2 = CreateWindow(
                    "BUTTON", 
                    "Empleados", 
                    WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
                    x * 2, 10, xBoton, 30, 
                    hwnd, 
                    (HMENU) 2, 
                    NULL, NULL);
                hwndButton3 = CreateWindow(
                    "BUTTON",
                    "Estadias",
                    WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
                    x * 3, 10, xBoton, 30,                               
                    hwnd, 
                    (HMENU) 3,          
                    NULL, NULL);
                hwndButton4 = CreateWindow(
                    "BUTTON", 
                    "Parqueadero", 
                    WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
                    x * 4, 10, xBoton, 30, 
                    hwnd, 
                    (HMENU) 4, 
                    NULL, NULL);
                hwndButton5 = CreateWindow(
                    "BUTTON",
                    "Huesped",
                    WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
                    x * 5, 10, xBoton, 30, 
                    hwnd,
                    (HMENU) 5,
                    NULL, NULL);
                
                
            }
                     

        }

        if (LOWORD(wParam) == 2) {
            hwndButtonEmpleado1 = CreateWindow(
                "BUTTON",
                "Buscar Empleado",         
                WS_VISIBLE | WS_CHILD, 
                0, 0, windowWidth, 30, 
                hwnd, 
                (HMENU) 21, 
                NULL, NULL);

            hwndButtonEmpleado2 = CreateWindow(
                "BUTTON",
                "Agregar Empleado", 
                WS_VISIBLE | WS_CHILD,
                0, 30, windowWidth, 30,   
                hwnd, 
                (HMENU) 22, 
                NULL, NULL);
            hwndButtonEmpleado3 = CreateWindow(
                "BUTTON", 
                "Eliminar empleado",
                WS_VISIBLE | WS_CHILD, 
                0, 60, windowWidth, 30,                                
                hwnd, 
                (HMENU) 23, 
                NULL, NULL);
            hwndButtonEmpleado4 = CreateWindow(
                "BUTTON", 
                "Ver empleados de un area",
                WS_VISIBLE | WS_CHILD, 
                0, 90, windowWidth, 30, 
                hwnd, 
                (HMENU) 24, 
                NULL, NULL);
            hwndButtonEmpleado5 = CreateWindow(
                "BUTTON",
                "Ver todos los empleados",
                WS_VISIBLE | WS_CHILD, 
                0, 120, windowWidth, 30,
                hwnd,
                (HMENU) 25, 
                NULL, NULL);
            hwndButtonEmpleado6 = CreateWindow(
                "BUTTON", 
                "Ver sueldo de todos los empleados", 
                WS_VISIBLE | WS_CHILD, 
                0, 150, windowWidth, 30,
                hwnd, 
                (HMENU) 26, 
                NULL, NULL);
            hwndButtonEmpleado7 = CreateWindow(
                "BUTTON", 
                "ver sueldo del empleado", 
                WS_VISIBLE | WS_CHILD, 
                0, 180, windowWidth, 30,
                hwnd, 
                (HMENU) 27,
                NULL, NULL);
            hwndButtonEmpleado8 = CreateWindow(
                "BUTTON", 
                "Actualizar informacion del empleado", 
                WS_VISIBLE | WS_CHILD, 
                0, 210, windowWidth, 30,
                hwnd, 
                (HMENU) 28,
                NULL, NULL);            
            hwndButtonEmpleado9 = CreateWindow(
                "BUTTON", 
                "Aplicar aumento", 
                WS_VISIBLE | WS_CHILD, 
                0, 240, windowWidth, 30, 
                hwnd, 
                (HMENU) 29, 
                NULL, NULL);            
            hwndButtonEmpleado10 = CreateWindow(
                "BUTTON", 
                "ver informacion del empleado",
                WS_VISIBLE | WS_CHILD, 
                0, 270, windowWidth, 30, 
                hwnd,
                (HMENU) 291, 
                NULL, NULL);            
            hwndButtonEmpleado11 = CreateWindow(
                "BUTTON", 
                "Menu principal", 
                WS_VISIBLE | WS_CHILD, 
                0, 300, windowWidth, 30, 
                hwnd,
                (HMENU) 292, 
                NULL, NULL);   
            
            
            botonesEmpleado->push_back(&hwndButtonEmpleado1);
            botonesEmpleado->push_back(&hwndButtonEmpleado2);
            botonesEmpleado->push_back(&hwndButtonEmpleado3);
            botonesEmpleado->push_back(&hwndButtonEmpleado4);
            botonesEmpleado->push_back(&hwndButtonEmpleado5);
            botonesEmpleado->push_back(&hwndButtonEmpleado6);
            botonesEmpleado->push_back(&hwndButtonEmpleado7);
            botonesEmpleado->push_back(&hwndButtonEmpleado8);
            botonesEmpleado->push_back(&hwndButtonEmpleado9);
            botonesEmpleado->push_back(&hwndButtonEmpleado10);
            botonesEmpleado->push_back(&hwndButtonEmpleado11);

        }else if(msg == WM_COMMAND){
            //si inicializo la variable fuera de todas las funciones si me la toma y se suma;

             //siempre que se oprime un boton se repite el WM_COMMAND;
            if(LOWORD(wParam) == 21){
                limpiarPantalla();
               
                
                  hwndLabel = CreateWindow(
                    "STATIC", 
                    "Ingrese los siguientes datos:", 
                    WS_VISIBLE | WS_CHILD, 
                    0, 340, 200, 30, 
                    hwnd,
                    NULL, NULL, NULL);


                    
                     hwndLabel2 = CreateWindow(
                        "STATIC", 
                        "DNI del empleado", 
                        WS_VISIBLE | WS_CHILD, 
                        0, 380, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);

                     hInput = CreateWindowEx(
                        0,
                        "EDIT",
                        "",
                        WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | WS_TABSTOP,
                        10, 420, 200, 20,
                        hwnd,
                        (HMENU)101,
                        NULL, NULL);
                    
                    
                     hButton = CreateWindowEx(
                        0,
                        "BUTTON",
                        "Consultar",
                        WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                        10, 460, 200, 25,
                        hwnd,
                        (HMENU)201,
                        NULL, NULL);

            }else if (LOWORD(wParam) == 201 && HIWORD(wParam) == BN_CLICKED){
                HWND hInput = GetDlgItem(hwnd, 101);
                int textLength = GetWindowTextLength(hInput);
                char* bufferEmpleado1 = new char[textLength + 1];
                GetWindowText(hInput, bufferEmpleado1, textLength + 1);
                string nombre = nuevoHotel->BuscarEmpleado(bufferEmpleado1)->GetNuevaPersona()->GetNombre();
                const char *nombreUtil = nombre.c_str();
                
                 hwndLabel3 = CreateWindow(
                    "STATIC", 
                    "Nombre del empleado: ", 
                    WS_VISIBLE | WS_CHILD, 
                    0, 500, 200, 30, 
                    hwnd,
                    NULL, NULL, NULL);
                 hwndLabel4 = CreateWindow(
                    "STATIC", 
                    nombreUtil, 
                    WS_VISIBLE | WS_CHILD, 
                    150, 500, 200, 30, 
                    hwnd,
                    NULL, NULL, NULL);
      
            }else if(LOWORD(wParam) == 22){
                limpiarPantalla();
 
                
                hwndLabel = CreateWindow(
                    "STATIC", 
                    "Ingrese los siguientes datos:", 
                    WS_VISIBLE | WS_CHILD, 
                    0, 340, 200, 30, 
                    hwnd,
                    NULL, NULL, NULL);


                hwndLabel1 = CreateWindow(
                   "STATIC", 
                   "Nombre:", 
                   WS_VISIBLE | WS_CHILD, 
                   0, 380, 200, 30, 
                   hwnd,
                   NULL, NULL, NULL);

                hInput1 = CreateWindowEx(
                   0,
                   "EDIT",
                   "",
                   WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | WS_TABSTOP,
                   10, 420, 200, 20,
                   hwnd,
                   (HMENU)201,
                   NULL, NULL);
                hwndLabel2 = CreateWindow(
                   "STATIC", 
                   "Genero:", 
                   WS_VISIBLE | WS_CHILD, 
                   0, 460, 200, 30, 
                   hwnd,
                   NULL, NULL, NULL);

                hInput2 = CreateWindowEx(
                   0,
                   "EDIT",
                   "",
                   WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | WS_TABSTOP,
                   10, 500, 200, 20,
                   hwnd,
                   (HMENU)202,
                   NULL, NULL);
                hwndLabel3 = CreateWindow(
                   "STATIC", 
                   "DNI", 
                   WS_VISIBLE | WS_CHILD, 
                   0, 540, 200, 30, 
                   hwnd,
                   NULL, NULL, NULL);

                hInput3 = CreateWindowEx(
                   0,
                   "EDIT",
                   "",
                   WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | WS_TABSTOP,
                   10, 580, 200, 20,
                   hwnd,
                   (HMENU)203,
                   NULL, NULL);
                hwndLabel4 = CreateWindow(
                   "STATIC", 
                   "Cargo:", 
                   WS_VISIBLE | WS_CHILD, 
                   0, 620, 200, 30, 
                   hwnd,
                   NULL, NULL, NULL);

                hInput4 = CreateWindowEx(
                   0,
                   "EDIT",
                   "",
                   WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | WS_TABSTOP,
                   10, 660, 200, 20,
                   hwnd,
                   (HMENU)204,
                   NULL, NULL);
                hwndLabel5 = CreateWindow(
                   "STATIC", 
                   "edad:", 
                   WS_VISIBLE | WS_CHILD, 
                   0, 700, 200, 30, 
                   hwnd,
                   NULL, NULL, NULL);

                hInput5 = CreateWindowEx(
                   0,
                   "EDIT",
                   "",
                   WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | WS_TABSTOP,
                   10, 740, 200, 20,
                   hwnd,
                   (HMENU)205,
                   NULL, NULL);
                hwndLabel6 = CreateWindow(
                   "STATIC", 
                   "Sueldo:", 
                   WS_VISIBLE | WS_CHILD, 
                   0, 780, 200, 30, 
                   hwnd,
                   NULL, NULL, NULL);

                hInput6 = CreateWindowEx(
                    0,
                    "EDIT",
                    "",
                    WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | WS_TABSTOP,
                    10, 820, 200, 20,
                    hwnd,
                    (HMENU)206,
                    NULL, NULL);


                hButton = CreateWindowEx(
                    0,
                    "BUTTON",
                    "Agregar empleado",
                    WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                    10, 860, 200, 25,
                    hwnd,
                    (HMENU)210,
                    NULL, NULL);

            }else if (LOWORD(wParam) == 210 && HIWORD(wParam) == BN_CLICKED){
                //nombre
                HWND hInput = GetDlgItem(hwnd, 201);
                int textLength = GetWindowTextLength(hInput);
                char* bufferEmpleadoCrear1 = new char[textLength + 1];
                GetWindowText(hInput, bufferEmpleadoCrear1, textLength + 1);
                
                //genero
                HWND hInput2 = GetDlgItem(hwnd, 202);
                int textLength2 = GetWindowTextLength(hInput2);
                char* bufferEmpleadoCrear2 = new char[textLength2 + 1];
                GetWindowText(hInput2, bufferEmpleadoCrear2, textLength2 + 1);
                
                //dni
                HWND hInput3 = GetDlgItem(hwnd, 203);
                int textLength3 = GetWindowTextLength(hInput3);
                char* bufferEmpleadoCrear3 = new char[textLength3 + 1];
                GetWindowText(hInput3, bufferEmpleadoCrear3, textLength3 + 1);
                
                //cargo
                HWND hInput4 = GetDlgItem(hwnd, 204);
                int textLength4 = GetWindowTextLength(hInput4);
                char* bufferEmpleadoCrear4 = new char[textLength4 + 1];
                GetWindowText(hInput4, bufferEmpleadoCrear4, textLength4 + 1);
                
                //edad
                HWND hInput5 = GetDlgItem(hwnd, 205);
                int textLength5 = GetWindowTextLength(hInput5);
                char* bufferEmpleadoCrear5 = new char[textLength5 + 1];
                GetWindowText(hInput5, bufferEmpleadoCrear5, textLength5 + 1);
                int bufferEmpleadoCrear5_Num = std::stoi(bufferEmpleadoCrear5);

                //sueldo
                HWND hInput6 = GetDlgItem(hwnd, 206);
                int textLength6 = GetWindowTextLength(hInput6);
                char* bufferEmpleadoCrear6 = new char[textLength6 + 1];
                GetWindowText(hInput6, bufferEmpleadoCrear6, textLength6 + 1);
                int bufferEmpleadoCrear6_Num = std::stoi(bufferEmpleadoCrear6);
                
                
                //Persona(string nombre, int edad, string genero, string DNI) :

                Persona * nuevaPersonaEmpleado = new Persona(bufferEmpleadoCrear1, bufferEmpleadoCrear5_Num ,bufferEmpleadoCrear2,bufferEmpleadoCrear3);
                
                //Empleado(Persona* nuevaPersona, string cargo, int sueldo) :

                Empleado * nuevoEmpleado = new Empleado(nuevaPersonaEmpleado,bufferEmpleadoCrear4 ,bufferEmpleadoCrear6_Num );
                nuevosEmpleados->push_back(nuevoEmpleado);
                
                hwndLabel7 = CreateWindow(
                   "STATIC", 
                   "Empleado agregado", 
                   WS_VISIBLE | WS_CHILD, 
                   0, 900, 200, 30, 
                   hwnd,
                   NULL, NULL, NULL);
                
                
            
            }else if(LOWORD(wParam) == 23){
                limpiarPantalla();
                
           
            }else if(LOWORD(wParam) == 24){
                limpiarPantalla();

            }else if(LOWORD(wParam) == 25){
                limpiarPantalla();
   
            
            }else if(LOWORD(wParam) == 26){
                limpiarPantalla();
    
            
            }else if(LOWORD(wParam) == 27){
                limpiarPantalla();
   
            
            }else if(LOWORD(wParam) == 28){
                limpiarPantalla();
  
            
            }else if(LOWORD(wParam) == 29){
                limpiarPantalla();
    
            
            }else if(LOWORD(wParam) == 291){
                limpiarPantalla();
   
            
            }else if(LOWORD(wParam) == 292){
//----------     //DESTRUCTOR DE TODOS LOS BOTONES;
                
                limpiarPantalla();
 
                list<list<HWND*>*>::iterator it = listaBotones->begin();
                
                list<HWND*> * e = NULL;
                for(;it != listaBotones->end(); it++){
                    
                    e = *it;
                    list<HWND*>::iterator it2 = e->begin();
                    
                    HWND * a = NULL;
                    for(; it2 != e->end(); it2++){
                        a = *it2;
                        DestroyWindow(*a);
                    }
                }
                
                
                RECT rect;
                GetClientRect(hwnd, &rect);
                int windowWidth = rect.right - rect.left;
                int x = windowWidth * ((100.0 / 7) / 100); 
                int xBoton = windowWidth * 0.13;
                // Crear los botones
                hwndButton1 = CreateWindow(
                    "BUTTON", // Clase del control
                    "Servicios", // Texto del botón          
                    WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON, // Estilo del botón
                    x, 10, xBoton, 30, // Posición y tamaño del botón
                    hwnd, // Ventana padre
                    (HMENU) 1, // Identificador del botón
                    NULL, NULL);

                hwndButton2 = CreateWindow(
                    "BUTTON", 
                    "Empleados", 
                    WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
                    x * 2, 10, xBoton, 30, 
                    hwnd, 
                    (HMENU) 2, 
                    NULL, NULL);
                hwndButton3 = CreateWindow(
                    "BUTTON",
                    "Estadias",
                    WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
                    x * 3, 10, xBoton, 30,                               
                    hwnd, 
                    (HMENU) 3,          
                    NULL, NULL);
                hwndButton4 = CreateWindow(
                    "BUTTON", 
                    "Parqueadero", 
                    WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
                    x * 4, 10, xBoton, 30, 
                    hwnd, 
                    (HMENU) 4, 
                    NULL, NULL);
                hwndButton5 = CreateWindow(
                    "BUTTON",
                    "Huesped",
                    WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
                    x * 5, 10, xBoton, 30, 
                    hwnd,
                    (HMENU) 5,
                    NULL, NULL);
            
            }
        }
        
        if (LOWORD(wParam) == 3) {
            hwndButtonEstadia1 = CreateWindow(
                "BUTTON",
                "Buscar huesped",         
                WS_VISIBLE | WS_CHILD, 
                0, 0, windowWidth, 30, 
                hwnd,
                (HMENU) 31, 
                NULL, NULL);

            hwndButtonEstadia2 = CreateWindow(
                "BUTTON", // Clase del control
                "Buscar Estadia por parte del DNI del huesped", 
                WS_VISIBLE | WS_CHILD,
                0, 30, windowWidth, 30,    
                hwnd, 
                (HMENU) 32, 
                NULL, NULL);
            hwndButtonEstadia3 = CreateWindow(
                "BUTTON", 
                "Ver todas las estadias", 
                WS_VISIBLE | WS_CHILD,
                0, 60, windowWidth, 30,
                hwnd, 
                (HMENU) 33,            
                NULL, NULL);
            hwndButtonEstadia4 = CreateWindow(
                "BUTTON", // Clase del control
                "Valor de costo de todas las estadias", 
                WS_VISIBLE | WS_CHILD, 
                0, 90, windowWidth, 30, 
                hwnd, 
                (HMENU) 34,
                NULL, NULL);
            hwndButtonEstadia5 = CreateWindow(
                "BUTTON", 
                "Agregar Estadia", 
                WS_VISIBLE | WS_CHILD, 
                0, 120, windowWidth, 30,
                hwnd, 
                (HMENU) 35,
                NULL, NULL);
            hwndButtonEstadia6 = CreateWindow(
                "BUTTON",
                "Cancelar Estadia", 
                WS_VISIBLE | WS_CHILD, 
                0, 150, windowWidth, 30, 
                hwnd, 
                (HMENU) 36, 
                NULL, NULL);
            hwndButtonEstadia7 = CreateWindow(
                "BUTTON",
                "Generar Factura de todo", 
                WS_VISIBLE | WS_CHILD, 
                0, 180, windowWidth, 30, 
                hwnd, 
                (HMENU) 37,
                NULL, NULL);
            hwndButtonEstadia8 = CreateWindow(
                "BUTTON",
                "Obtener tiempo de la estadia",
                WS_VISIBLE | WS_CHILD,
                0, 210, windowWidth, 30,
                hwnd, 
                (HMENU) 38,
                NULL, NULL);            
            hwndButtonEstadia9 = CreateWindow(
                "BUTTON",
                "Ver toda la informacion de una estadia", 
                WS_VISIBLE | WS_CHILD, 
                0, 240, windowWidth, 30, 
                hwnd, 
                (HMENU) 39, 
                NULL, NULL);            
            hwndButtonEstadia10 = CreateWindow(
                "BUTTON",
                "ver si la estadia esta ocupada",
                WS_VISIBLE | WS_CHILD,
                0, 270, windowWidth, 30, 
                hwnd, 
                (HMENU) 391,
                NULL, NULL);            
            hwndButtonEstadia11 = CreateWindow(
                "BUTTON", 
                "Buscar Huesped por parte del numero de la habitacion", 
                WS_VISIBLE | WS_CHILD, 
                0, 300, windowWidth, 30,
                hwnd, 
                (HMENU) 392,
                NULL, NULL);   
            hwndButtonEstadia12 = CreateWindow(
                "BUTTON", 
                "Menu principal", 
                WS_VISIBLE | WS_CHILD, 
                0, 330, windowWidth, 30, 
                hwnd, 
                (HMENU) 393, 
                NULL, NULL);   
            
            botonesEstadia->push_back(&hwndButtonEstadia1);
            botonesEstadia->push_back(&hwndButtonEstadia2);
            botonesEstadia->push_back(&hwndButtonEstadia3);
            botonesEstadia->push_back(&hwndButtonEstadia4);
            botonesEstadia->push_back(&hwndButtonEstadia5);
            botonesEstadia->push_back(&hwndButtonEstadia6);
            botonesEstadia->push_back(&hwndButtonEstadia7);
            botonesEstadia->push_back(&hwndButtonEstadia8);
            botonesEstadia->push_back(&hwndButtonEstadia9);
            botonesEstadia->push_back(&hwndButtonEstadia10);
            botonesEstadia->push_back(&hwndButtonEstadia11);
            botonesEstadia->push_back(&hwndButtonEstadia12);
        
        
        }
        
        
        if (LOWORD(wParam) == 4) {
            hwndButtonParqueadero1 = CreateWindow(
                "BUTTON", 
                "verificar disponibilidad",       
                WS_VISIBLE | WS_CHILD, 
                0, 0, windowWidth, 30, 
                hwnd,
                (HMENU) 41, 
                NULL, NULL);

            hwndButtonParqueadero2 = CreateWindow(
                "BUTTON",
                "Calcular costo",
                WS_VISIBLE | WS_CHILD,
                0, 30, windowWidth, 30,    
                hwnd,
                (HMENU) 42,
                NULL, NULL);
            hwndButtonParqueadero3 = CreateWindow(
                "BUTTON", 
                "generar reporte", 
                WS_VISIBLE | WS_CHILD, 
                0, 60, windowWidth, 30,                                  
                hwnd, 
                (HMENU) 43,          
                NULL, NULL);
            hwndButtonParqueadero4 = CreateWindow(
                "BUTTON",
                "Valor de costo de todas las estadias",
                WS_VISIBLE | WS_CHILD,
                0, 90, windowWidth, 30, 
                hwnd, 
                (HMENU) 44,
                NULL, NULL);
            hwndButtonParqueadero5 = CreateWindow(
                "BUTTON",
                "Menu Principal",
                WS_VISIBLE | WS_CHILD,
                0, 120, windowWidth, 30, 
                hwnd,
                (HMENU) 45, 
                NULL, NULL);
            
            botonesParqueadero->push_back(&hwndButtonParqueadero1);
            botonesParqueadero->push_back(&hwndButtonParqueadero2);
            botonesParqueadero->push_back(&hwndButtonParqueadero3);
            botonesParqueadero->push_back(&hwndButtonParqueadero4);
            botonesParqueadero->push_back(&hwndButtonParqueadero5);
          
        }
        
        if (LOWORD(wParam) == 5) {
            hwndButtonHuesped1 = CreateWindow(
                "BUTTON",
                "Ver todos los datos del huesped",     
                WS_VISIBLE | WS_CHILD,
                0, 0, windowWidth, 30,
                hwnd,
                (HMENU) 51, 
                NULL, NULL);

            // Crear los demás botones aquí
            hwndButtonHuesped2 = CreateWindow(
                "BUTTON", // Clase del control
                "Buscar un huesped por su DNI", 
                WS_VISIBLE | WS_CHILD, 
                0, 30, windowWidth, 30, 
                hwnd,
                (HMENU) 52, 
                NULL, NULL);
            hwndButtonHuesped3 = CreateWindow(
                "BUTTON", 
                "Ver a todos los huespedes que se encuentran actualmente en el hotel", 
                WS_VISIBLE | WS_CHILD, 
                0, 60, windowWidth, 30,                               
                hwnd, // Ventana padre
                (HMENU) 53,         
                NULL, NULL);
            hwndButtonHuesped4 = CreateWindow(
                "BUTTON",
                "Cambiar datos",
                WS_VISIBLE | WS_CHILD,
                0, 90, windowWidth, 30, 
                hwnd, // Ventana padre
                (HMENU) 54, 
                NULL, NULL);
            hwndButtonHuesped5 = CreateWindow(
                "BUTTON",
                "Menu principal", 
                WS_VISIBLE | WS_CHILD, 
                0, 120, windowWidth, 30, 
                hwnd, 
                (HMENU) 55, 
                NULL, NULL);
           
            botonesHuesped->push_back(&hwndButtonHuesped1);
            botonesHuesped->push_back(&hwndButtonHuesped2);
            botonesHuesped->push_back(&hwndButtonHuesped3);
            botonesHuesped->push_back(&hwndButtonHuesped4);
            botonesHuesped->push_back(&hwndButtonHuesped5);
        
        }
        
        listaBotones->push_back(botonesEmpleado);
        listaBotones->push_back(botonesEstadia);
        listaBotones->push_back(botonesHuesped);
        listaBotones->push_back(botonesMenuPrincipal);
        listaBotones->push_back(botonesParqueadero);
        listaBotones->push_back(botonesServicios);
        
        //------------
        listaDeLabel_Input->push_back(&hwndLabel);
        listaDeLabel_Input->push_back(&hwndLabel1);
        listaDeLabel_Input->push_back(&hwndLabel2);
        listaDeLabel_Input->push_back(&hwndLabel3);
        listaDeLabel_Input->push_back(&hwndLabel4);
        listaDeLabel_Input->push_back(&hwndLabel5);
        listaDeLabel_Input->push_back(&hwndLabel6);
        listaDeLabel_Input->push_back(&hwndLabel7);
        listaDeLabel_Input->push_back(&hwndLabel8);
        listaDeLabel_Input->push_back(&hwndLabel9);
        listaDeLabel_Input->push_back(&hwndLabel10);
        listaDeLabel_Input->push_back(&hButton);
        listaDeLabel_Input->push_back(&hInput);
        listaDeLabel_Input->push_back(&hInput1);
        listaDeLabel_Input->push_back(&hInput2);
        listaDeLabel_Input->push_back(&hInput3);
        listaDeLabel_Input->push_back(&hInput4);
        listaDeLabel_Input->push_back(&hInput5);
        listaDeLabel_Input->push_back(&hInput6);
        listaDeLabel_Input->push_back(&hInput7);
        listaDeLabel_Input->push_back(&hInput8);
        listaDeLabel_Input->push_back(&hInput9);
        listaDeLabel_Input->push_back(&hInput10);


        
        return 0;

    }else if(msg == WM_SIZE){

        
        RECT rect;
        GetClientRect(hwnd, &rect);
        int windowWidth = rect.right - rect.left;
        int x = windowWidth * ((100.0 / 7) / 100); 
        int xBoton = windowWidth * 0.13;
   
                              //x    y     ancho     alto
        
        //Error del tamano del boton arreglado ya que se superposicionaba uno encima de otro de manera rara: problema(ancho
        MoveWindow(hwndButton1, x , 10, xBoton, 30, TRUE);
        MoveWindow(hwndButton2, x * 2 , 10, xBoton, 30, TRUE);
        MoveWindow(hwndButton3, x * 3 , 10, xBoton, 30, TRUE);
        MoveWindow(hwndButton4, x * 4, 10, xBoton, 30, TRUE);
        MoveWindow(hwndButton5, x * 5, 10, xBoton, 30, TRUE);
        //------------------------------------
        MoveWindow(hwndButtonServicios1, 0 , 0, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios2, 0 , 30, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios3, 0 , 60, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios4, 0 , 90, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios5, 0 , 120, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios6, 0 , 150, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios7, 0 , 180, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonServicios8, 0 , 210, windowWidth, 30, TRUE);
        //------------------------------------
        MoveWindow(hwndButtonEmpleado1, 0 , 0, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado2, 0 , 30, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado3, 0 , 60, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado4, 0 , 90, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado5, 0 , 120, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado6, 0 , 150, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado7, 0 , 180, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado8, 0 , 210, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado9, 0 , 240, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado10, 0 , 270, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEmpleado11, 0 , 300, windowWidth, 30, TRUE);
        //------------------------------------
        MoveWindow(hwndButtonEstadia1, 0 , 0, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia2, 0 , 30, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia3, 0 , 60, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia4, 0 , 90, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia5, 0 , 120, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia6, 0 , 150, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia7, 0 , 180, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia8, 0 , 210, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia9, 0 , 240, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia10, 0 , 270, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia11, 0 , 300, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonEstadia12, 0 , 330, windowWidth, 30, TRUE);
        //------------------------------------
        MoveWindow(hwndButtonParqueadero1, 0 , 0, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonParqueadero2, 0 , 30, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonParqueadero3, 0 , 60, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonParqueadero4, 0 , 90, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonParqueadero5, 0 , 120, windowWidth, 30, TRUE);
        //------------------------------------
        MoveWindow(hwndButtonHuesped1, 0 , 0, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonHuesped2, 0 , 30, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonHuesped3, 0 , 60, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonHuesped4, 0 , 90, windowWidth, 30, TRUE);
        MoveWindow(hwndButtonHuesped5, 0 , 120, windowWidth, 30, TRUE);


        return 0;
    }else if (msg == WM_DESTROY) {
        PostQuitMessage(0);
        return 0;
    }

    return DefWindowProc(hwnd, msg, wParam, lParam);
}

// Función principal
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){       

        WNDCLASS wc = {0};
        wc.lpfnWndProc = WndProc;
        wc.hInstance = hInstance;
        wc.hbrBackground = (HBRUSH)(COLOR_WINDOW);
        wc.lpszClassName = "MyWindowClass";

        if (!RegisterClass(&wc))
            return 1;
         // Crear la ventana
        HWND hwnd = CreateWindow(
            "MyWindowClass",        // Clase de la ventana
            "Hotel",        // Título de la ventana
            WS_OVERLAPPEDWINDOW,    // Estilo de la ventana
            CW_USEDEFAULT,          // Posición x de la ventana
            CW_USEDEFAULT,          // Posición y de la ventana
            1280, 720,               // Ancho y alto de la ventana
            NULL, NULL,             // Ventana padre y menú
            hInstance,              // Instancia de la aplicación
            NULL);

        if (!hwnd)
            return 2;

        // Mostrar y actualizar la ventana
        ShowWindow(hwnd, nCmdShow);
        UpdateWindow(hwnd);

        // Bucle de mensajes
        MSG msg;
        while (GetMessage(&msg, NULL, 0, 0))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
        
        

        return msg.wParam;
}




LRESULT CALLBACK ButtonWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    if (uMsg == WM_COMMAND && LOWORD(wParam) == ID_BUTTON && HIWORD(wParam) == BN_CLICKED)
    {
        SendMessage(GetParent(hwnd), WM_CUSTOM_BUTTON_CLICK, 0, 0);
        return 0;
    }

    return (LRESULT)CallWindowProc((WNDPROC)GetProp(hwnd, "ButtonWindowProc"), hwnd, uMsg, wParam, lParam);
}


void limpiarPantalla(){
            for (std::list<HWND *>::iterator itEliminar = ListaDeBotonesfor->begin(); itEliminar != ListaDeBotonesfor->end(); ++itEliminar) {
                DestroyWindow(**itEliminar);
            }

            ListaDeBotonesfor->clear();

            // Clear the list after destroying the labels
            list<HWND *>::iterator ititEliminadorLabel = listaDeLabel_Input->begin();

            HWND * eliminar;
            for(; ititEliminadorLabel != listaDeLabel_Input->end();ititEliminadorLabel++){
                eliminar = *ititEliminadorLabel;
                DestroyWindow(*eliminar);
            }     
                
}