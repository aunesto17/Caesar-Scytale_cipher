//
//  cesar-escitala.h
//  Trabajo1(cesar-escitala)
//
//  Created by Alexander Arturo Baylon Ibanez on 3/23/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#ifndef __Trabajo1_cesar_escitala___cesar_escitala__
#define __Trabajo1_cesar_escitala___cesar_escitala__

#include "cesar.h"

class escitalaCesar
{
private:
    //cesar obj1;
    //etl   obj2;
    string  mensaje_m,encrip_m,decrip_m;
    int     clave_c,clave_e;
public:
    escitalaCesar();
    escitalaCesar(int,int,string);
    escitalaCesar(string,int,int);
    string cifrado_m();
    string descifrado_m();
};

#endif /* defined(__Trabajo1_cesar_escitala___cesar_escitala__) */
