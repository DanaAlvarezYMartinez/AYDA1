#include <iostream>
#include <math.h>

using namespace std;

void cambio_monedas(int n, int vuelto){//, int costos[][]){,int valor[]){
    int monedas[3]={1,4,6}; //pongo los valores
    int costos[3][vuelto];

    //CASO BASE, CUANDO EL VUELTO ES 0
    for (int i=0; i<n;i++){
        cout<<"vuelto 0"<<endl;
        costos[i][0]=0;
    }

    for (int i=0; i<n; i++)
    for (int j=0; j<vuelto; j++){
        //CASO DONDE EL VUELTO ES MENOR QUE LA MONEDA --> INFINITO (-1)
        if ((i==0)&&(j<monedas[i])){
             cout<<"vuelto<moneda"<<endl;
             costos[i][j]=0;
        }
        else
            //CASO DONDE PUEDO USAR LA MONEDA MAS GRANDE
            if (i==0){
                 cout<<"no moneda mas grande"<<endl;
                costos[i][j]=1+costos[i][j-monedas[0]];
            }
            else{
                //CASO DONDE NO PUEDO USAR LA MONEDA MAS GRANDE
                if(j<monedas[i]){
                     cout<<"si moneda mas grande"<<endl;
                    costos[i][j]=costos[i-1][j];
                }
                else{
                    //CASO DEL MINIMO, CUANDO TENGO LAS DOS OPCIONES
                     cout<<"minimo entre"<<endl;
                    costos[i][j]= min(costos[i-1][j], (1+costos[i][j-monedas[i]]));
                }
            }
    }

    for (int i=0; i<n; i++)
        for (int j=0; j<vuelto; j++){
            cout<<costos[i][j]<<endl;
        }

}


int main()
{
    int n=3;
    int vuelto=9;
    cambio_monedas(n,vuelto);
    //cout << "" << endl;
    return 0;
}
