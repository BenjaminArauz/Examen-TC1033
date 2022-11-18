#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include <vector>
using namespace std;

class Jugador {
    private:
        //Atributos
        int indice_jugador;
        vector<int> numero;
        vector<int> puntos_anotados;
        vector<int> minutos_jugados;
        vector<int> id;
        vector<int> sueldo_base;
        vector<string> nombre;
    public:
        //Constructor
        Jugador(){}
        //Métodos
        string getNombre(){
            return nombre[indice_jugador];
        }
        int getNumero(){
            return numero[indice_jugador];
        }
        int getId(){
            return id[indice_jugador];
        }
        int getMinutosJugados(){
            return minutos_jugados[indice_jugador];
        }
        int getPuntosAnotados(){
            return puntos_anotados[indice_jugador];
        }
        int getSueldoBase(){
            return sueldo_base[indice_jugador];
        }
        int getIndiceJugador(){
            return indice_jugador;
        }
        void setNombre(string nuevo_nombre){
            nombre.push_back(nuevo_nombre);
        }
        void setNumero(int nuevo_numero){
            numero.push_back(nuevo_numero);
        }
        void setId(int nuevo_id){
            id.push_back(nuevo_id);
        }
        void setMinutosJugados(int nuevo_minutos_jugados){
            minutos_jugados.push_back(nuevo_minutos_jugados);
        }
        void setPuntosAnotados(int nuevo_puntos_anotados){
            puntos_anotados.push_back(nuevo_puntos_anotados);
        }
        void setSueldoBase(int nuevo_sueldo){
            sueldo_base.push_back(nuevo_sueldo);
        }
        void setIndiceJugador(int nuevo_indice){
            indice_jugador = nuevo_indice;
        }
        //Metodos adicionales
        void agregarJugadores(){
            string nombre_agregar;
            int numero_agregar, puntos_anotados_agregar, minutos_jugados_agregar, id_agregar, sueldo_base_agregar, opcion_minutos_jugados;
            cout << "Nombre: ";
            cin >> nombre_agregar;
            nombre.push_back(nombre_agregar);
            cout << "Número de camiseta: ";
            cin >> numero_agregar;
            numero.push_back(numero_agregar);
            cout << "Nómina";
            cin >> id_agregar;
            id.push_back(id_agregar);
            cout << "¿El jugador  " << nombre_agregar << "tiene minutos jugados? 1=Si, 2=No: ";
            cin >> opcion_minutos_jugados;
            if (opcion_minutos_jugados == 2){
                minutos_jugados.push_back(0);
                puntos_anotados.push_back(0);
            } else {
                cout << "Minutos jugados: ";
                cin >> minutos_jugados_agregar;
                minutos_jugados.push_back(minutos_jugados_agregar);
                cout << "Puntos anotados: ";
                cin >> puntos_anotados_agregar;
                puntos_anotados.push_back(puntos_anotados_agregar);
            }
            cout << "Sueldo: ";
            cin >> sueldo_base_agregar;
            sueldo_base.push_back(sueldo_base_agregar);
        }
        void imprimirInformacion(){
            cout << "Nombre: " << nombre[indice_jugador];
            cout << "Nómina: " << id[indice_jugador];
            cout << "Número: " << numero[indice_jugador];
            cout << "Minutos jugados: " << minutos_jugados[indice_jugador];
            cout << "Puntos_anotados: " << puntos_anotados[indice_jugador];
            cout << "Sueldo base: " << sueldo_base[indice_jugador];
        }
        void buscarJugador(string nombre_buscar){
            int count = 0;
            for (int i=0;i<sizeof(nombre);i++){
                if (nombre[i] == nombre_buscar){
                    indice_jugador = count;
                }
                count ++;
            }
            if (indice_jugador == 0){
                cout << "Jugador no encontrado";
            }
        }
        void mayorEncestador(){
            int mayor_encestador = puntos_anotados[0];
            for (int i=0;i<sizeof(puntos_anotados);i++){
                if (puntos_anotados[i] > mayor_encestador){
                    mayor_encestador = puntos_anotados[i];
                    indice_jugador = i;
                }
            }
        }
        void masMinutosCancha(){
            int mas_minutos = minutos_jugados[0];
            for (int i=0;i<sizeof(minutos_jugados);i++){
                if (minutos_jugados[i] > mas_minutos){
                    mas_minutos = minutos_jugados[i];
                    indice_jugador = i;
                }
            }
        }
} ;

#endif