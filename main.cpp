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
//---------------------------
HWND hwndButtonServicios1;
HWND hwndButtonServicios2;
HWND hwndButtonServicios3;
HWND hwndButtonServicios4;
HWND hwndButtonServicios5;
HWND hwndButtonServicios6;
HWND hwndButtonServicios7;
HWND hwndButtonServicios8;
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
//---------------------------
HWND hwndButtonParqueadero1;
HWND hwndButtonParqueadero2;
HWND hwndButtonParqueadero3;
HWND hwndButtonParqueadero4;
HWND hwndButtonParqueadero5;
//---------------------------
HWND hwndButtonHuesped1;
HWND hwndButtonHuesped2;
HWND hwndButtonHuesped3;
HWND hwndButtonHuesped4;
HWND hwndButtonHuesped5;
//-------------------------
const int ID_BUTTON = 1001;
const int ID_INPUT = 1002;
const int WM_CUSTOM_BUTTON_CLICK = WM_USER + 1;

LRESULT CALLBACK ButtonWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

// Función de manejo de mensajes
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
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
        // Crear los botones
        hwndButton1 = CreateWindow(
            "BUTTON", // Clase del control
            "Servicios", // Texto del botón          
            WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON, // Estilo del botón
            50, 10, 200, 30, // Posición y tamaño del botón
            hwnd, // Ventana padre
            (HMENU) 1, // Identificador del botón
            NULL, NULL);

        hwndButton2 = CreateWindow(
            "BUTTON", 
            "Empleados", 
            WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
            300, 10, 200, 30, 
            hwnd, 
            (HMENU) 2, 
            NULL, NULL);
        hwndButton3 = CreateWindow(
            "BUTTON",
            "Estadias",
            WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
            520, 10, 200, 30,                               
            hwnd, 
            (HMENU) 3,          
            NULL, NULL);
        hwndButton4 = CreateWindow(
            "BUTTON", 
            "Parqueadero", 
            WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
            740, 10, 200, 30, 
            hwnd, 
            (HMENU) 4, 
            NULL, NULL);
        hwndButton5 = CreateWindow(
            "BUTTON",
            "Huesped",
            WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
            1000, 10, 200, 30, 
            hwnd,
            (HMENU) 5,
            NULL, NULL);
        //controles de windows para ventana


        
        return 0;
        
    } else if (msg == WM_COMMAND) {
        RECT windowRect;
        GetClientRect(hwnd, &windowRect);
        int windowWidth = windowRect.right - windowRect.left;
        //int windowHeight = windowRect.bottom - windowRect.top;



        DestroyWindow(hwndButton1);
        DestroyWindow(hwndButton2);
        DestroyWindow(hwndButton3);
        DestroyWindow(hwndButton4);
        DestroyWindow(hwndButton5);
        
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
            
            
            
        }else if(msg == WM_COMMAND){
            if(LOWORD(wParam) == 11){
                //PROBLEMA SOLUCIONADO: 
                /* se estaba creando un bucle infinito, y era por que tenia el objeto hotel fuera de todo y lo meti dentro del LRESULT y se soluciono:
                 esto se de debe a que: El bucle infinito se produce porque estás creando un nuevo hotel en cada iteración del bucle en la sección else if(msg == WM_COMMAND)*/
                int yPosicion = 280;
                HWND hwndLabel = CreateWindow(
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

                    HWND hwndLabel2 = CreateWindow(
                        "EDIT", 
                        nombreCStr, 
                        WS_VISIBLE | WS_CHILD, 
                        0, yPosicion, 200, 30, 
                        hwnd,
                        NULL, NULL, NULL);
                    
                    yPosicion += 50;

                }

            }else if(LOWORD(wParam) == 12){
                HWND hInput = CreateWindowEx(
                    0,
                    "EDIT",
                    "",
                    WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | WS_TABSTOP,
                    10, 280, 200, 20,
                    hwnd,
                    (HMENU)ID_INPUT,
                    NULL, NULL);

                // Crear el botón
                HWND hButton = CreateWindowEx(
                    0,
                    "BUTTON",
                    "Enviar",
                    WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                    220, 280, 75, 25,
                    hwnd,
                    (HMENU)ID_BUTTON,
                    NULL, NULL);

                SetProp(hButton, "ButtonWindowProc", (HANDLE)GetWindowLongPtr(hButton, GWLP_WNDPROC));
                SetWindowLongPtr(hButton, GWLP_WNDPROC, (LONG_PTR)ButtonWindowProc);


                
                
            }else if (LOWORD(wParam) == ID_BUTTON && HIWORD(wParam) == BN_CLICKED) {
                    cout<<"hola cx";
                    HWND hInput = GetDlgItem(hwnd, ID_INPUT);
                    int textLength = GetWindowTextLength(hInput);
                    char* buffer = new char[textLength + 1];
                    GetWindowText(hInput, buffer, textLength + 1);
                    printf("Texto del control de entrada: %s\n", buffer);
                    delete[] buffer;
            }else if(LOWORD(wParam) == 13){
                cout<<"Hola";

            }else if(LOWORD(wParam) == 14){
                cout<<"xd";
            }else if(LOWORD(wParam) == 15){


            }else if(LOWORD(wParam) == 16){


            }else if(LOWORD(wParam) == 17){


            }else if(LOWORD(wParam) == 18){

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
           
        
        
        }
        
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



