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
        string getNombreEquipo();
        string getEntrenador();
        int getPuntosAnotados();
        void setNombreEquipo(string);    
        void setEntrenador(string);    
        void setPuntosAnotados(int); 
        //Otros metodos   
        int calcularPuntos();
};
string Equipo::getNombreEquipo(){
    return nombre_equipo;
}
string Equipo::getEntrenador(){
    return entrenador;
}
//int Equipo::getPuntosAnotados(){
//    return puntos_anotados;
//}
void Equipo::setNombreEquipo(string nombre_equipo){
    this->nombre_equipo = nombre_equipo;
}
void Equipo::setEntrenador(string nuevo_entrenador){
    entrenador = nuevo_entrenador;
}
void Equipo::setPuntosAnotados(int puntos){
    //puntos_anotados = puntos;
}
int Equipo::calcularPuntos(){
    int suma = 0, indice_nuevo;
    for (int i=0;i<sizeof(tam);i++){
        indice_nuevo = i;
        info_jugador.setIndiceJugador(indice_nuevo);
        suma += info_jugador.getPuntosAnotados();
    }
    return suma;
}
#endif