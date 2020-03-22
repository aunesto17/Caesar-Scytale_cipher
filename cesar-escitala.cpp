//
//  cesar-escitala.cpp
//  Trabajo1(cesar-escitala)
//
//  Created by Alexander Arturo Baylon Ibanez on 3/23/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#include "cesar-escitala.h"


escitalaCesar::escitalaCesar(int c,int e, string m)
{
    mensaje_m   = m;
    clave_c     = c;
    clave_e     = e;
    //cout << "clave e: " << clave_e <<endl;
    //cout << "clave c: " << clave_c <<endl;
    //cout << "msj: " << mensaje_m <<endl;
}

escitalaCesar::escitalaCesar(string m, int c,int e)
{
    encrip_m    = m;
    clave_c     = c;
    clave_e     = e;
}

string escitalaCesar::cifrado_m()
{
    etl     obj1(clave_e,mensaje_m);
    encrip_m = obj1.encriptar();
    
    cesar   obj2(clave_c,encrip_m);
    encrip_m = obj2.encriptar();
    
    return encrip_m;
}


string escitalaCesar::descifrado_m()
{
    cesar   obj3(encrip_m,clave_c);
    decrip_m = obj3.desencriptar();
    
    etl     obj4(decrip_m,clave_e);
    decrip_m = obj4.descencriptar();
    
    return decrip_m;
}

