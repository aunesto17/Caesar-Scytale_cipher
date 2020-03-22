//
//  cesar.h
//  Cesar
//
//  Created by Alexander Arturo Baylon Ibanez on 3/23/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#ifndef __Cesar__cesar__
#define __Cesar__cesar__

#include "escitala.h"

class cesar
{
private:
    string alfa = "abcdefghijklmnopqrstuvwxyz ";
    int clave,tamMsj,pos;
    int tamAlfa = 27;
    string mensaje,cifrado,descrifrado;
public:
    cesar();
    cesar(int,string);
    cesar(string,int);
    string encriptar();
    string desencriptar();
    int modulo_c(int a,int b);
    
};

#endif /* defined(__Cesar__cesar__) */
