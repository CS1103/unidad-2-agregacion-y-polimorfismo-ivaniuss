//
// Created by Ivan Mamani on 18/09/2019.
//

#ifndef TAREA_VOLUMEN_H
#define TAREA_VOLUMEN_H
#include <string>

class volumen {
    std::string nombre;
    int num_vol;
public:

    volumen();
    volumen(std::string, int);
    volumen(const volumen&);
    virtual ~volumen();
    virtual void mostrar() = 0;
};


#endif //TAREA_VOLUMEN_H
