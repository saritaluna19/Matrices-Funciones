#include<iostream>

#define FILA 20
#define COLUMNA 20

using namespace std;

void ImprimirMatriz (int m[FILA][COLUMNA], int fil, int col);
void InicializarMatrizUnSoloValor (int m[FILA][COLUMNA], int fil, int col);
void InicializarMatrizDatosUser (int m[FILA][COLUMNA], int fil, int col);
void InicializarFilaMatrizUnSoloValor (int m[FILA][COLUMNA], int col);
void SumarFilasMatriz(int m[FILA][COLUMNA], int fil, int col);
void SumarColumnasMatriz (int m[FILA][COLUMNA], int fil, int col);
void ValorMasGrandeFila(int m[FILA][COLUMNA], int fil, int col);
bool BuscarElemento(int m[FILA][COLUMNA], int fil, int col, int elemento);
bool BuscarElemento2(int m[FILA][COLUMNA], int fil, int col, int elemento, int respuesta[2]);

int
main ()
{
  int matriz[FILA][COLUMNA];
  int numFilas = 3;
  int numColumnas = 3;
  int pos[2];

  InicializarMatrizDatosUser (matriz, numFilas, numColumnas);
  ImprimirMatriz (matriz, numFilas, numColumnas);
  InicializarMatrizUnSoloValor (matriz, numFilas, numColumnas);
  ImprimirMatriz (matriz, numFilas, numColumnas);
  InicializarFilaMatrizUnSoloValor (matriz, numColumnas);
  ImprimirMatriz (matriz, numFilas, numColumnas);
  SumarFilasMatriz (matriz, numFilas, numColumnas);
  ImprimirMatriz (matriz, numFilas, numColumnas);
  SumarColumnasMatriz (matriz, numFilas, numColumnas);
  ImprimirMatriz (matriz, numFilas, numColumnas);
  ValorMasGrandeFila(matriz, numFilas,numColumnas);
  cout<<"Encontro el numero?: "<<BuscarElemento(matriz, numFilas,numColumnas,3)<<endl;;
  cout<<"Encontro el numero?: "<<BuscarElemento(matriz, numFilas,numColumnas,50)<<endl;
  BuscarElemento2(matriz, numFilas,numColumnas,50, pos);
   cout<<"encontro en la fila: "<< pos[0]+1<<" encontro en la columna "<<pos[1]+1;

  return 0;
}

void ImprimirMatriz (int m[FILA][COLUMNA], int fil, int col){

  for (int i = 0; i < fil; i++)
    {				// recorrer filas
      for (int j = 0; j < col; j++)
	{			// recorrer columnas
	  cout << m[i][j] << " ";

	}
      cout << endl;		// cambio de fila
    }
  cout << endl;
  return;
}

void InicializarMatrizUnSoloValor (int m[FILA][COLUMNA], int fil, int col){
  int userDato;
  cout << "Digite un numero ";
  cin >> userDato;
  for (int i = 0; i < fil; i++)
    {				// filas
      for (int j = 0; j < col; j++)
	{			// columnas
	  m[i][j] = userDato;
	}
    }
  return;
}

void InicializarMatrizDatosUser (int m[FILA][COLUMNA], int fil, int col){
  for (int i = 0; i < fil; i++)
    {				// filas
      for (int j = 0; j < col; j++)
	{			// columnas
	  cout << "Digite un numero ";
	  cin >> m[i][j];
	}
    }

}

void InicializarFilaMatrizUnSoloValor (int m[FILA][COLUMNA], int col){
  int fil, num;
  cout << "Digite la fila ";
  cin >> fil;
  cout << "Digite un numero ";
  cin >> num;

  for (int j = 0; j < col; j++)
    {
      m[fil][j] = num;
    }
}

void SumarFilasMatriz(int m[FILA][COLUMNA], int fil, int col){
	int suma=0;
	for (int i = 0; i < fil; i++){// filas
      for (int j = 0; j < col; j++){// columnas
	      cout << "Digite un numero ";
		  cin >> m[i][j];
		  suma=suma+m[i][j];
		}
		cout<<"el numero total de la fila "<< i+1<<" es: "<<suma;
		suma=0;
		  cout << endl;
    }
    return; 
}

void SumarColumnasMatriz (int m[FILA][COLUMNA], int fil, int col){
  int suma = 0;
  for (int j = 0; j < col; j++)
    {				// recorrer columnas
      for (int i = 0; i < fil; i++)
	{			// recorrer filas
	  suma = suma + m[i][j];
	}
      cout << "la suma de la columna: " << j + 1 << " = " << suma << endl;
      suma = 0;
    }
  return;
}

void ValorMasGrandeFila(int m[FILA][COLUMNA], int fil, int col){
	
	int mayor;
	for(int i=0; i<fil;i++){
		mayor=m[i][0];
		for(int j=0; j<col;j++){
			if(mayor<m[i][j]){
				mayor=m[i][j];
			}
		}
		cout<<"el mayor elemento de la fila "<<i+1<<" es: "<<mayor<<endl;
	}
  return;
}

bool BuscarElemento(int m[FILA][COLUMNA], int fil, int col, int elemento){
	for(int i=0; i<fil;i++){
		for(int j=0; j<col;j++){
			if(elemento==m[i][j]){
				return true;
			}
		}
	}
	return false;
}

bool BuscarElemento2 (int m[FILA][COLUMNA], int fil, int col, int elemento, int respuesta[2]){
  for (int i = 0; i < fil; i++){				// recorrer filas
      for (int j = 0; j < col; j++){			// recorrer columnas
	  if (elemento == m[i][j]){
	      respuesta[0] = i;
	      respuesta[1] = j;
	      return true;
	    }

	}
    }
  return false;
}
