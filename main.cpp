#include <stdlib.h>
#include <ctime>
#include <iostream>
using std::cout;
using std::cin;
#include <vector>
using std::vector;

bool trocar ( int &, int & );
bool trocar ( double &, double & );
void outputVector( const vector< int > & );
void funcArray( vector< int > & );
void bubbleSort( vector< int > & );


int main()
{
    
    int arraySize = 0;
    
    
    cout << "Entre com o tamanho do Array: " << '\n';
    cin >> arraySize;
    vector< int > vetorFinal ( arraySize);
    
       
   
    funcArray( vetorFinal );   
    
    
    cout << "Os valores do Array sao: " << '\n';
    for (int i = 0; i < vetorFinal.size(); i++)
        cout << vetorFinal[i] << '\n';
    
    
    bubbleSort(vetorFinal);
    
    
    cout << "Os novos valores do Array sao: " << '\n';
    for (int i = 0; i < vetorFinal.size(); i++)
    cout << vetorFinal[i] << '\n';
    
    
    while(!vetorFinal.empty())
    {
        vetorFinal.pop_back();
        
         for (int i = 0; i < vetorFinal.size(); i++)
            cout << vetorFinal[i] << '\t';
            
         cout << '\n';
        
    }
    
    
    system ("pause"); 
    return 0;

}


void bubbleSort( vector< int > & vetorFinal)
{
    const int NITER = 5;
    int count = 0; 
    
    for (int i = 0; i < NITER - 1; i++)
    {
        for(int j = 1; j < vetorFinal.size(); j++)
        {
            trocar( vetorFinal[j], vetorFinal[j-1] );
            count++;
        }
    }
        
    cout << "Total de trocas: " << count << '\n';
    

}

bool trocar ( int & x, int & y )
{
    
    int temp;
    if( x > y )
    {

        temp = x;
        x = y;
        y = temp;
        return true;
    }
    else 
        return false;
}

bool trocar ( double & x, double & y )
{
    double temp;
    if( x > y )
    {    
        temp = x;
        x = y;
        y = temp;
        return true;
    }
    else 
        return false;
}

void funcArray(vector< int > & inteiro1)
{
    srand( ( int ) time ( 0 ) );
    for ( int k = 0; k < inteiro1.size(); k++)
        inteiro1[ k ] = 1 + (rand() % 10);
}
