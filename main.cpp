//
//  main.cpp
//  Trabajo1(cesar-escitala)
//
//  Created by Alexander Arturo Baylon Ibanez on 3/23/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#include "cesar-escitala.h"

int main(int argc, const char * argv[]) {
    int key_c= 15;
    int key_e= 3;
    string msj_e = "alesanderarturobaylonibanez";
    cout << "msj. original: " << msj_e << endl << endl;;
    escitalaCesar prueba1(key_c,key_e,msj_e);
    
    string crip = prueba1.cifrado_m();
    cout << "mi Nombre encriptado: " << crip << endl << endl;
    
    
    escitalaCesar prueba2(crip,key_c,key_e);
    string decrip = prueba2.descifrado_m();
    cout << "Decifrado final: " << decrip << endl;
    
    //escitalaCesar prueba2(crip,key);
    
    /*
    string msj = "hmqmwsiweqtcrtvimeryeira";
    escitalaCesar prueba2(msj,4,4);
    string dcrip = prueba2.descifrado_m();
    
    string msj1 = "wffjqssjidxwtxt";
    escitalaCesar prueba3(msj1,5,5);
    string dcrip1 = prueba3.descifrado_m();
    
    //MJGGXXGIIÐKSGUDZÐSSDKZGJDQFYUD
    string msj2 = "nclybewyzpcjqhwhzhbhph";
    escitalaCesar prueba4(msj2,11,11);
    string dcrip2 = prueba4.descifrado_m();
    
    cout << endl << dcrip << endl;
    cout << dcrip1 << endl;
    cout << dcrip2 << endl;
     */
    
    return 0;
}
