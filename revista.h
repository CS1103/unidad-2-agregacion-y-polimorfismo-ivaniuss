//
// Created by Ivan Mamani on 18/09/2019.
//

#ifndef TAREA_REVISTA_H
#define TAREA_REVISTA_H

#include "volumen.h"

class revista : public volumen {
    int num_revistas;
public:
    revista();
    revista(int);
    revista(const revista&);
    virtual ~revista();
    void mostrar() override ;
};


#endif //TAREA_REVISTA_H
