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
    Retos[2]="Llama a algún número desconocido y canta feliz cumpleaños";
    Retos[3]="Abrazar a la primera persona que te encuentres en la calle";
    Retos[4]="Subirse a cantar en la barra de un bar";
    Retos[5]="Tomate una foto embarazosa y publícala en tus redes sociales";
    Retos[6]="Actúa como un animal (el grupo elige)";
    Retos[7]="Quítate los calcetines con los dientes";
    Retos[8]="Da 10 vueltas y trata de caminar en línea recta";
    Retos[9]="Elige a tres personas del grupo y que elijan tres ingredientes de la cocina.Mézclalos y tómatelo";
    Retos[10]="No puedes decir malas palabras durante el resto del juego.Baila la macarena";
    Retos[11]="Ponte los zapatos al revés y mantenlos así.Toma una cucharada de picante";
    Retos[12]="Besa la parte de atrás del cuello de la persona que está a tu derecha";
    Retos[13]="Dale un serenata a la persona que está al frente de ti";
    Retos[14]="Vístete con tu camisa al revés";
    Retos[15]="Canta cualquier cosa que digas durante el resto del juego";
    Retos[16]="Baila de froma vergonzosa la cancion que el grupo elija";
    Retos[17]="Recrea una escena de una pelicula tonta con tu mejor amigo";
    Retos[18]="Publica en una red social: Amo a [nombre de la persona que más odias]";
    Retos[19]="Sube la foto mas vergonzosa de tu galeria a tu red social favorita";
    Retos[20]="Tómate una foto coqueta y mándasela a tu papá, como si fuera un error";
    Retos[21]="Enviarle un texto a tu novio y termina la relación con una falsa excusa";
    Retos[22]="Dale un me gusta a la foto mas antigua de Instagram de la persona que te gusta";
    Retos[23]="Mójate el cabello y canta y baila frente a todos Loca de Shakira";
    Retos[24]="Recibe una cachetada de cada lado de uno de los jugadores";
    Retos[25]="Tomate una foto haciendo muecas y ponla de estado";
    Retos[26]="Haz 20 abdominales seguidos!";
    Retos[27]="Haz 20 sentadillas seguidas!";
    Retos[28]="Haz 20 ranas seguidas!";
    Retos[29]="Haz 20 planchas seguidas!";
    Retos[30]="Ve a la calle y abraza a un poste";
    Retos[31]="Llama a tu ex y decirle que lo/a extrañas";
    Retos[32]="Tómate una foto en la que salgas muy fe@ y envíasela a la persona que te gusta";
    Retos[33]="Díle un priopo al primer extraño que pase por la calle";
    Retos[34]="Canta a todo pulmón la canción más tonta que hayas escuchado";
    Retos[35]="Camina como un pingüino alrededor de la habitación";


    srand(time(NULL));
    int aleatoreo= (rand()%numRetos)+1;
    cout<<Retos[aleatoreo]<<endl;
    system("pause>nul");
    return 0;
}
