#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int main()
{

    ofstream filesP("base.txt");
    int cantJugadores;
    cin>> cantJugadores;
    string jugadores[cantJugadores];
    int i=0;
    while (i<cantJugadores){
        jugadores[i]="Jugador";
        i++;
    }
    for(int i=0 ; i< cantJugadores ; i++){
        filesP<<jugadores[i]<<" "<<i<<endl;
    }


    srand(time(NULL));
    int turno= (rand()%cantJugadores)+1;
    cout<< jugadores[turno]<<" "<<turno<< " es tu turno"<< endl;
    system("pause>nul");
    return 0;





    return 0;
}
