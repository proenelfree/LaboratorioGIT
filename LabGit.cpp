#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
int main () {
    ifstream entrada ("input/entrada.txt");
    ofstream salida ("output/salida.txt");
    
    if (entrada.is_open() && salida.is_open()) {
       cout<<"archivo abierto"<<endl;
       string linea;
       
       while (getline (entrada, linea)) {
             salida << linea;
             }
             cout<<"Archivo copiado correctamente"<<endl;
       }
}
 
