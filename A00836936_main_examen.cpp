#include <iostream>
#include <string>
using namespace std;
#include "Equipo.h"
#include "Jugador.h"
#include "Partidos.h"
#include "Armador.h"
#include "Alero.h"
#include "Poste.h"

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
void posicionJugador(){
    int opcion_posicion;
    int robos_hechos;
    int buenas_jugadas;
    int rebotes;
    cout << "¿ Qué tipo de jugador es? ";
    cout << "1. Armador";
    cout << "2. Alero";
    cout << "3. Poste";
    cin >> opcion_posicion;
    if (opcion_posicion == 1) {
        cout << "Robos hechos: ";
        cin >> robos_hechos;
        Armador armador(robos_hechos);
    } else if (opcion_posicion == 2) {
        cout << "Buenas jugadas: ";
        cin >> buenas_jugadas;
        Alero alero(buenas_jugadas);
    } else {
        cout << "Rebotes hechos: ";
        cin >> rebotes;
        Poste poste(rebotes);
    }
}
int main() {
    string nombre_buscar, equipo_buscar, nuevo_nombre_equipo;
    int opcion1, opcion2, tam, opcion;
    EquipoNuevo equipo;
    JugadorNuevo jugador;
    Partidos partido;
    cout << "Selecciona tu opción: " << endl;
    cout << "1. Administrar equipo" << endl;
    cout << "2. Crear nuevo equipo" << endl;
    cout << "0. Salir" << endl;
    cin >> opcion2;
    while (opcion2 != 0) {
        if (opcion2 == 1) {
        cout << "Nombre del equipo: ";
        cin >> equipo_buscar;
        EquipoNuevo* equipo_nuevo = partido.buscarEquipo(equipo_buscar);
        cout << equipo_nuevo->getNombreEquipo() << " prueba " << endl;
        menu_administrar();
        cin >> opcion1;
        if (opcion1 == 1) {
            cout << "Nombre a buscar: ";
            cin >> nombre_buscar;
            partido.getInformacionEquipo().imprimirInformacion(nombre_buscar);
        } else if (opcion1 == 2) {
            cout << partido.getInformacionEquipo().mayorEncestador();
        } else if (opcion1 == 3) {
            cout << "Nombre a buscar: ";
            cin >> nombre_buscar;
            equipo_nuevo->imprimirInformacion(nombre_buscar);
            cout << "Selecciones lo que le gustaría cambiar: ";
            cin >> opcion;
            equipo_nuevo->buscarJugador(nombre_buscar)->cambioInformacion(opcion);
        } else if (opcion1 == 4) {
            equipo_nuevo->agregarJugadores();
            equipo_nuevo->imprimirInformacion("Elian");
        } else if (opcion1 == 5) {
            cout << partido.getInformacionEquipo().masMinutosJugados();
        } else if (opcion1 == 6) {
            cin >> nuevo_nombre_equipo;
            partido.getInformacionEquipo().setNombreEquipo(nuevo_nombre_equipo);
        } else if (opcion1 == 7) {
            cout << partido.getInformacionEquipo().puntosEquipo();
        } else if (opcion1 == 8) {
            cin >> nombre_buscar;
            partido.getInformacionEquipo().eliminarJugador(nombre_buscar);
        }
        } else {
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
        cout << "Selecciona tu opción: " << endl;
        cout << "1. Administrar equipo" << endl;
        cout << "2. Crear nuevo equipo" << endl;
        cout << "0. Salir" << endl;
        cin >> opcion2;
    }
    partido.crearHorario();
    return 0;
}