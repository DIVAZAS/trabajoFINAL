#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int numRetos=36;
    string Retos[numRetos];
    Retos[0]="Gritar en la calle que te has enamorado";
    Retos[1]="Cantar y bailar como loco.Declararte a la persona que te gusta";
    Retos[2]="Llama a alg�n n�mero desconocido y canta feliz cumplea�os";
    Retos[3]="Abrazar a la primera persona que te encuentres en la calle";
    Retos[4]="Subirse a cantar en la barra de un bar";
    Retos[5]="Tomate una foto embarazosa y publ�cala en tus redes sociales";
    Retos[6]="Act�a como un animal (el grupo elige)";
    Retos[7]="Qu�tate los calcetines con los dientes";
    Retos[8]="Da 10 vueltas y trata de caminar en l�nea recta";
    Retos[9]="Elige a tres personas del grupo y que elijan tres ingredientes de la cocina.M�zclalos y t�matelo";
    Retos[10]="No puedes decir malas palabras durante el resto del juego.Baila la macarena";
    Retos[11]="Ponte los zapatos al rev�s y mantenlos as�.Toma una cucharada de picante";
    Retos[12]="Besa la parte de atr�s del cuello de la persona que est� a tu derecha";
    Retos[13]="Dale un serenata a la persona que est� al frente de ti";
    Retos[14]="V�stete con tu camisa al rev�s";
    Retos[15]="Canta cualquier cosa que digas durante el resto del juego";
    Retos[16]="Baila de froma vergonzosa la cancion que el grupo elija";
    Retos[17]="Recrea una escena de una pelicula tonta con tu mejor amigo";
    Retos[18]="Publica en una red social: Amo a [nombre de la persona que m�s odias]";
    Retos[19]="Sube la foto mas vergonzosa de tu galeria a tu red social favorita";
    Retos[20]="T�mate una foto coqueta y m�ndasela a tu pap�, como si fuera un error";
    Retos[21]="Enviarle un texto a tu novio y termina la relaci�n con una falsa excusa";
    Retos[22]="Dale un me gusta a la foto mas antigua de Instagram de la persona que te gusta";
    Retos[23]="M�jate el cabello y canta y baila frente a todos Loca de Shakira";
    Retos[24]="Recibe una cachetada de cada lado de uno de los jugadores";
    Retos[25]="Tomate una foto haciendo muecas y ponla de estado";
    Retos[26]="Haz 20 abdominales seguidos!";
    Retos[27]="Haz 20 sentadillas seguidas!";
    Retos[28]="Haz 20 ranas seguidas!";
    Retos[29]="Haz 20 planchas seguidas!";
    Retos[30]="Ve a la calle y abraza a un poste";
    Retos[31]="Llama a tu ex y decirle que lo/a extra�as";
    Retos[32]="T�mate una foto en la que salgas muy fe@ y env�asela a la persona que te gusta";
    Retos[33]="D�le un priopo al primer extra�o que pase por la calle";
    Retos[34]="Canta a todo pulm�n la canci�n m�s tonta que hayas escuchado";
    Retos[35]="Camina como un ping�ino alrededor de la habitaci�n";


    srand(time(NULL));
    int aleatoreo= (rand()%numRetos)+1;
    cout<<Retos[aleatoreo]<<endl;
    system("pause>nul");
    return 0;
}
