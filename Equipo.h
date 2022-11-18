#ifndef EQUIPO_H
#define EQUIPO_H
#include <string>
#include "Jugador.h"
using namespace std;

class Equipo {
    private:
    //Atributos
        Jugador info_jugador;
        string nombre_equipo, entrenador;
        int tam;
    public:
        //Constructor
        Equipo(int tamanio){
            tam = tamanio; 
        }
        //Metodos
        Jugador getInfoJugador(){
            return info_jugador; 
        }
        string getNombreEquipo(){
            return nombre_equipo;
        }
        string getEntrenador(){
            return entrenador;
        }
        void setNombreEquipo(string nuevo_nombre_equipo){
            nombre_equipo = nuevo_nombre_equipo;
        }   
        void setEntrenador(string nuevo_entrenador){
            entrenador = nuevo_entrenador;
        }  
        void setInfoJugador(Jugador nuevo_info_jugador){
            info_jugador = nuevo_info_jugador;
        }
        //Otros metodos   
        int calcularPuntos(){
            int suma = 0, indice_nuevo;
            for (int i=0;i<sizeof(tam);i++){
                indice_nuevo = i;
                info_jugador.setIndiceJugador(indice_nuevo);
                suma += info_jugador.getPuntosAnotados();
            }
            return suma;
        }
};

#endif