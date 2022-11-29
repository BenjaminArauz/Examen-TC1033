#ifndef EQUIPO_NUEVO_H
#define EQUIPO_NUEVO_H
#include <string>
#include <iostream>
using namespace std;
#include <vector>
#include "JugadorNuevo.h"

class EquipoNuevo {
    private:
        string nombre_equipo;
        JugadorNuevo jugador_informacion, nuevo_jugador;
        vector<JugadorNuevo> jugadores;
    public:
        EquipoNuevo(){}
        //Getters
        string getNombreEquipo();
        JugadorNuevo getJugadorInformacion();
        //Setters
        void setNombreEquipo(string);
        //Otros métodos
        void agregarJugadores();
        void imprimirInformacion(string);
        JugadorNuevo* buscarJugador(string);
        int mayorEncestador();
        int masMinutosJugados();
        int puntosEquipo();
        void eliminarJugador(string);
};
//Getters
string EquipoNuevo::getNombreEquipo(){
    return nombre_equipo;
}
JugadorNuevo EquipoNuevo::getJugadorInformacion(){
    return jugador_informacion;
}
//Setter
void EquipoNuevo::setNombreEquipo(string nuevo_nombre_equipo){
    nombre_equipo = nuevo_nombre_equipo;
}
//Otros métodos
void EquipoNuevo::agregarJugadores(){
    JugadorNuevo jugador ;
    jugador.agregarJugador();
    jugadores.push_back(jugador);
}
void EquipoNuevo::imprimirInformacion(string nombre_buscar){
    for (int i=0;i<jugadores.size();i++){
        if (jugadores[i].getNombre() == nombre_buscar){
            jugador_informacion = jugadores[i];
        }
    }
    cout << "1. Nombre: " << jugador_informacion.getNombre() << endl;
    cout << "2. Nómina: " << jugador_informacion.getNomina() << endl;
    cout << "3. Número: " << jugador_informacion.getNumero() << endl;
    cout << "4. Minutos jugados: " << jugador_informacion.getMinutosJugados() << endl;
    cout << "5. Puntos_anotados: " << jugador_informacion.getPuntosAnotados() << endl;
    cout << "6. Sueldo: " << jugador_informacion.getSueldo() << endl;
}
JugadorNuevo* EquipoNuevo::buscarJugador(string nombre_buscar){
    for (int i=0;i<jugadores.size();i++){
        if (jugadores[i].getNombre() == nombre_buscar){
            jugador_informacion = jugadores[i];
            return &jugadores[i];
        }
    }
    return new JugadorNuevo();
}
int EquipoNuevo::mayorEncestador(){
    int mayor = jugadores[0].getPuntosAnotados();
    for (int i=0;i<jugadores.size();i++){
        if (jugadores[i].getPuntosAnotados() >= mayor){
            mayor = jugadores[i].getPuntosAnotados();
        }
    }
    return mayor;
}
int EquipoNuevo::masMinutosJugados(){
    int mayor = jugadores[0].getMinutosJugados();
    for (int i=0;i<jugadores.size();i++){
        if (jugadores[i].getPuntosAnotados() >= mayor){
            mayor = jugadores[i].getPuntosAnotados();
        }
    }
    return mayor;
}
int EquipoNuevo::puntosEquipo(){
    int puntos_equipo = 0;
    for (int i=0;i<jugadores.size();i++){
        puntos_equipo += jugadores[i].getPuntosAnotados();
    }
    return puntos_equipo;
}
void EquipoNuevo::eliminarJugador(string nombre_buscar){
    for (int i=0;i<jugadores.size();i++){
        if (jugadores[i].getNombre() == nombre_buscar){
            if ((i+1) == jugadores.size()){
                jugadores.pop_back();
            } else {
                jugadores.erase(jugadores.begin()+i);
            }
        }
    }
}
#endif