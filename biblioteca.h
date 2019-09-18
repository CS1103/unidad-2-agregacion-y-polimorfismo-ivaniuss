//
// Created by Ivan Mamani on 18/09/2019.
//

#ifndef UNIDAD_2_AGREGACION_Y_POLIMORFISMO_IVANIUSS_BIBLIOTECA_H
#define UNIDAD_2_AGREGACION_Y_POLIMORFISMO_IVANIUSS_BIBLIOTECA_H


class biblioteca {
    int maxlibros;
    int maxlibretas;

public:

    biblioteca();
    biblioteca(int, int);
    biblioteca(const biblioteca&);
    virtual ~biblioteca();
    void mostrar_biblioteca();
    int incluir();
};


#endif //UNIDAD_2_AGREGACION_Y_POLIMORFISMO_IVANIUSS_BIBLIOTECA_H
