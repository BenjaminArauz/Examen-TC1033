/*
- Benjamín Iván Arauz Córdova
- A00836936
- 02/12/2022

Descripción: Este programa esta principalmente pensado para empresas de baloncesto, 
sin embargo, el uso de este programa, puede ser para cualquier empresa que requiera 
manejar datos. La principal acción de este programa es una base de datos la cual se 
puede manipular facilmente por el usuario, este programa contiene una lista de equipos 
y estos equipos a su vez tiene una lista de jugadores, entre los datos más generales 
para el jugador son: consulta del jugador, jugador con mas minutos en la cancha, agregar 
a un jugador, etc, por otro lado, podemos crear un nuevo equipo y de la misma manera 
manejarlo. 
*/

//Bibliotecas
#include <iostream>
#include <string>
using namespace std;

//Clases creadas
#include "Equipo.h" //Clase de equipo
#include "Jugador.h" // Clase de un jugador
#include "Partidos.h" // Clase de un partido

//Función para imprimir el menú
void menu_administrar() {
    cout << "1. Consultar \n";
    cout << "2. Mayor encestador \n";
    cout << "3. Cambiar información \n";
    cout << "4. Agregar jugador \n";
    cout << "5. Jugador con mas minutos en cancha \n";
    cout << "6. Cambiar nombre del equipo \n";
    cout << "7. Puntos anotados del equipo \n";
    cout << "8. Eliminar jugadores \n";
    cout << "0. Salir \n";
}

int main() {
    //Variables
    string nombre_buscar, equipo_buscar, nuevo_nombre_equipo;
    int opcion1, opcion2, tam, opcion, tipo_equipo;
    Equipo equipo;
    Jugador jugador;
    Partidos partido; 
    cout << "Selecciona tu opción: " << endl;
    cout << "1. Administrar equipo" << endl;
    cout << "2. Crear nuevo equipo" << endl;
    cout << "0. Salir" << endl;
    cin >> opcion2;
    while (opcion2 != 0) {
        while (opcion2 < 0 || opcion2 > 2){
            cout << "Número incorrecto: " << endl;
            cout << "1. Administrar equipo" << endl;
            cout << "2. Crear nuevo equipo" << endl;
            cout << "0. Salir" << endl;
            cin >> opcion2;
        }
        if (opcion2 == 1) {
            cout << "Nombre del equipo: ";
            cin >> equipo_buscar;
            Equipo *equipo_nuevo = partido.buscarEquipo(equipo_buscar);
            menu_administrar();
            cin >> opcion1;
            if (opcion1 == 1) {
                cout << "Nombre a buscar: ";
                cin >> nombre_buscar;
                partido.getInformacionEquipo().imprimirInformacion(nombre_buscar);
            } else if (opcion1 == 2) {
                cout << "Mayor encestador: " << partido.getInformacionEquipo().mayorEncestadorNombre() << " -> " << partido.getInformacionEquipo().mayorEncestador() << endl;                } else if (opcion1 == 3) {
                cout << "Nombre a buscar: ";
                cin >> nombre_buscar;
                equipo_nuevo->imprimirInformacion(nombre_buscar);
                cout << "Selecciones lo que le gustaría cambiar: ";
                cin >> opcion;
                equipo_nuevo->buscarJugador(nombre_buscar)->cambioInformacion(opcion);
            } else if (opcion1 == 4) {
                equipo_nuevo->agregarJugadores();
            } else if (opcion1 == 5) {
                cout << "Jugador con más minutos jugados: " << partido.getInformacionEquipo().masMinutosJugadosNombre() << partido.getInformacionEquipo().masMinutosJugados() << endl;
            } else if (opcion1 == 6) {
                cin >> nuevo_nombre_equipo;
                equipo_nuevo->setNombreEquipo(nuevo_nombre_equipo);
            } else if (opcion1 == 7) {
                cout << "Los puntos anotados son: " << partido.getInformacionEquipo().puntosEquipo() << endl;
            } else if (opcion1 == 8) {
                cin >> nombre_buscar;
                partido.getInformacionEquipo().eliminarJugador(nombre_buscar);
            }
            
        } else if (opcion2 == 2){
            cout << "Cantidad de jugadores: ";
            cin >> tam;
            for (int i = 0; i < tam; i++) {
                equipo.agregarJugadores();
            }
            cout << "Nombre del nuevo equipo: ";
            cin >> nuevo_nombre_equipo;
            equipo.setNombreEquipo(nuevo_nombre_equipo);
            partido.agregarEquipos(equipo);
        }
        cout << "1. Administrar equipo" << endl;
        cout << "2. Crear nuevo equipo" << endl;
        cout << "0. Salir" << endl;
        cin >> opcion2;
    }

    return 0;
}