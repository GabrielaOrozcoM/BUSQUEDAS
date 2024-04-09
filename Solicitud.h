#ifndef SOLICITUD_H_INCLUDED
#define SOLICITUD_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;
class Solicitud {
public:
    string nombreAlumno;
    string carrera;
    int materiasAprobadas;
    float promedioGeneral;

    Solicitud() {}
    Solicitud(const string& nombre, const string& carrera, int materias, float promedio):
        nombreAlumno(nombre),
        carrera(carrera),
        materiasAprobadas(materias),
        promedioGeneral(promedio) {}

    //SOBRECARGA
    friend ostream& operator<<(ostream& o, const Solicitud& solicitud) {
        o << "\nALUMNO: " << solicitud.nombreAlumno << endl;
        o << "\nCARRERA: " << solicitud.carrera << endl;
        o << "\nMATERIAS APROBADAS: " << solicitud.materiasAprobadas << endl;
        o << "\nPROMEDIO: " << solicitud.promedioGeneral << endl;
        return o;
    }
};


#endif // SOLICITUD_H_INCLUDED
