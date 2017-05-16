#include <iostream>
#include <vector>
using namespace std;

bool existe ( char letra, vector <char> datos )
{
    for ( int i; i < datos.size(); i++)
    {
        if ( letra == datos[i])
        return true;
    }
    return false;
}

int main()
{
    // Variables
    string texto1;               //lenght , size
    string texto2;               //lenght, size
    vector <char> iguales;       // size
    
    // El ingreso de los datos
    cin >> texto1 >> texto2;
    
    //Recorrer los datos
    for ( int i=0; i < texto1.length(); i++)
    {
        for ( int j=0; j < texto2.length(); j++)
        {
            if ( existe(texto1[i],iguales)==false)
            if ( texto1[i]==texto2[j])
            iguales.push_back(texto1[i]);
        }
    }
    
    //Imprimir
    for ( int i=0; i<iguales.size(); i++)
    {
        cout << iguales[i]<<endl;
    }
    
    return 0;
}