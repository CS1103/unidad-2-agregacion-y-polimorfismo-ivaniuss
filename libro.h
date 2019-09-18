//
// Created by Ivan Mamani on 18/09/2019.
//

#ifndef TAREA_LIBRO_H
#define TAREA_LIBRO_H

#include "volumen.h"

class libro: public volumen {
    int num_libros;
public:
    libro();
    libro(int);
    libro(const libro&);
    virtual ~libro();
    void mostrar() override;
};


#endif //TAREA_LIBRO_H
