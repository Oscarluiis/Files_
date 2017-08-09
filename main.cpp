#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ofstream out("mi_archivo.txt");
    out<<"Hola Archivo!"<<endl;
    out<<14.5<<endl;
    out<<23<<endl;
    out<<'x'<<endl;
    out<<true<<endl;
    out.close();

    ifstream in("mi_archivo.txt");
    string lectura;
    while(in>>lectura){
        cout<<lectura<<endl;
    }
    in.close();

    ofstream out2("scores.txt");
    out2<<"Juan "<<10<<endl;
    out2<<"Maria "<<8<<endl;
    out2<<"Pedro "<<3<<endl;
    out2.close();

    ifstream in2("scores.txt");

    string jugador;
    int score;
    while(in2>>jugador){
        in2>>score;
        cout<<jugador<<": "<<score<<endl;
    }
    in2.close();
    return 0;
}