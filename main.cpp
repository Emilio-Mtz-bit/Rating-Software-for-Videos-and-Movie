#include <iostream>
using namespace std;

#include "EvidenciaFinal.cpp"


int main(){
    Pelicula *vec[4];
    Serie *vec1[3];
    
    vec[0]= new Pelicula("Accion","Spiderman","Superheroes",10,2013,2,"Juan",10);
    vec[1]= new Pelicula("Comedia","Son Como ninos","Adultos",10,2000,1,"Pedro",3);
    vec[2]= new Pelicula("Accion","Iron-Man","Superheroes",9,2025,2,"Downey",4);
    vec[3]= new Pelicula("Accion","Thor","Superheroes",7,2022,1,"Taika",3);
    vec1[0]= new Serie("Comedia","The Big Bang Theory","Adultos",10,2002,400,12,203);
    vec1[1] =new  Serie("Accion","Hola","Adultos",10,2010,300,8,500);
    vec1[2]= new  Serie("Accion","Game of Thrones","Adultos",8,2010,300,8,500);

    int x,y;
    int m = 1;

    while (m==1){
        cout << "\n";
        cout << "\n1. Mostrar los videos en general"<<endl;
        cout << "2. Mostrar las series con una calificacion predeterminada" << endl;
        cout << "3. Mostar las peliculas con cierta calificacion" << endl;
        cout << "4. Calificar una serie " << endl;
        cout << "5. Calififcar una pelicula " << endl;
        cout << "6. Salir del menu" << endl;

        cin >> x;

        if (x == 1){
            for (int i=0; i<size(vec1);i++){
                cout << "\nSerie" << i+1 << endl;
                vec1[i]->MuestraDatos();
                cout << endl;
            }
            for (int i=0; i<size(vec);i++){
                cout << "\nPelicula " << i+1 << endl;
                vec[i]->MuestraDatos();
                cout << endl;
            }

            cout << "\nQuires volver al menu introduce 1, si quieres salir introduce 2: " << endl;
            cin >> m;
        }else if(x == 2){
            int cal;
            cout << "\nIntroduce la calificacion que quiers buscar: " << endl;
            cin >> cal;
            cout << endl;

            try{
            bool z = false;
            bool ind = false;
            for(int i=0; i<size(vec1)+1;i++){
                z = vec1[i]->Compara(cal);
                cout << "\n";
                if (z == true){ind = true;}
            }
            if (ind == false && z == false){
                throw "Pelicula con calificacion no encontrada";
            }

            cout << "\nQuires volver al menu introduce 1, si quieres salir introduce 2: " << endl;
            cin >> m;
            }
            catch(const char *msg){
                cout << msg;
            cout << "\nQuires volver al menu introduce 1, si quieres salir introduce 2: " << endl;
            cin >> m;
            }
        }else if(x == 3){
            int cal;
            cout << "\nIntroduce la calificacion que quiers buscar: " << endl;
            cin >> cal;
            cout << endl;

            try{
            bool z = false;
            bool ind = false;
            for(int i=0; i<size(vec)+1;i++){
                z = vec[i]->Compara(cal);
                cout << "\n";
                if (z == true){ind = true;}
            }
            if (ind == false && z == false){
                throw "Pelicula con calificacion no encontrada";
            }

            cout << "\nQuires volver al menu introduce 1, si quieres salir introduce 2: " << endl;
            cin >> m;
            }
            catch(const char *msg){
                cout << msg;
            cout << "\nQuires volver al menu introduce 1, si quieres salir introduce 2: " << endl;
            cin >> m;
            }
        }else if(x == 4){
            int cal1;
            cout << "Que video quieres calificar: " << endl;
            cin >> y;
            vec1[y-1]->CalificaVideo();

            cout << "\nQuires volver al menu introduce 1, si quieres salir introduce 2: " << endl;
            cin >> m;
        }else if(x == 5){
            int cal1;
            cout << "Que video quieres calificar: " << endl;
            cin >> y;
            vec[y-1]->CalificaVideo();

            cout << "\nQuires volver al menu introduce 1, si quieres salir introduce 2: " << endl;
            cin >> m;
        }
        else if(x == 6)
        m = 2;



}

}