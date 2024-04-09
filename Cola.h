#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

#include <iostream>
#include "Solicitud.h"
using namespace std;
const int TAM = 100;

class Cola {
private:
    Solicitud datos[TAM];
    int ult;

public:
    Cola() : ult(-1) {}

    bool vacia() const {
        return ult == -1;
    }

    bool llena() const {
        return ult == TAM - 1;
    }

    int ultimo() const {
        return ult;
    }

    void enqueue(const Solicitud& elem) {
        if (!llena()) {
            ult++;
            datos[ult] = elem;
        } else {
            cout << "COLA LLENA" << endl;
        }
    }

    Solicitud dequeue() {
        Solicitud elem;
        if (!vacia())
        {
            elem = datos[0];
            for (int i = 0; i < ult; i++)
            {
                datos[i] = datos[i + 1];
            }
            ult--;
        }
        else
        {
            cout << "COLA VACIA" << endl;
        }
        return elem;
    }

    int busquedaLineal(const Solicitud& elem) {
        if (vacia()) {
            return -1;
        }
        for (int i = 0; i <= ult; i++)
        {
                if (elem.nombreAlumno == datos[i].nombreAlumno)
                {
                    return i;
                }
        }
        return -1;
    }
};
#endif // COLA_H_INCLUDED
