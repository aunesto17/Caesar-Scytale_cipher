//
//  escitala.h
//  ED3_Escitala
//
//  Created by Alexander Arturo Baylon Ibanez on 3/22/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#ifndef __ED3_Escitala__escitala__
#define __ED3_Escitala__escitala__

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

class etl
{
private:
    int clave,bloques,tamFrase,resto;
    string frase,crip,decrip;
public:
    etl();
    etl(int,string);// encriptar mensaje
    etl(string,int);// desencriptar mensaje
    string encriptar();
    string descencriptar();
    void print();
    int modulo(int,int);
    int numBloques();
    void completarMsj();
};

#endif /* defined(__ED3_Escitala__escitala__) */
