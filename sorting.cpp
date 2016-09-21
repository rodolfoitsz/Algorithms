#include <iostream>
#include <cstdlib>
#include <time.h>


using  namespace std;


class SortingAlgorithms{

private: 
int sizeArray;
	
 public:
 	int * fillArray(int *,int);
 	void printArray(int *,int );
 	void insertion(int *,int);
 	void bubble(int *,int );
 	void selection(int *,int);
 	void shell(int *,int);
    int getSizeArray(int );
     
};

int SortingAlgorithms::getSizeArray(int number){

   sizeArray=number;
   return sizeArray;

   }



 int * SortingAlgorithms:: fillArray(int * arrayNumbers ,int sizeArray){

    srand ( time(NULL) ); 
    for(int i;i<sizeArray;i++){

       arrayNumbers[i]=rand() % 100;
     }
     
     printArray(arrayNumbers,sizeArray);
     
     return arrayNumbers;
             
}


void SortingAlgorithms::printArray(int * arrayNumbers, int sizeArray){

 for(int i;i<sizeArray;i++){

      cout<<arrayNumbers[i]<<",";
     }

 cout<<endl;

}


 void SortingAlgorithms::insertion(int *arrayNumbers,int sizeArray){

int temp,j; 

for(int i=1; i< sizeArray;i++){
	temp=arrayNumbers[i]; //temp almacena el elemento a comparar con los anteriores
	 j=i-1;
	  while ((j >= 0) && (temp < arrayNumbers[j])){ //Mientras no sea el fin de la lista y temp sea menor con uno de los elementos anteriores, ir desplazando
    
	  arrayNumbers[j + 1] =arrayNumbers[j];      
      j--; 
	  
	  }
      arrayNumbers[j+1]=temp;   //Colocar temp en la posición del último elemento desplazado.   
    }
    
    
    printArray(arrayNumbers,sizeArray);
    
}



void SortingAlgorithms::bubble( int * arrayNumbers,int sizeArray) {

 int temp;

  for(int i =0;i<sizeArray-1;i++){

    for(int j =0;j<sizeArray-1;j++){
       
         if(arrayNumbers[j]>arrayNumbers[j+1]){
	      temp=arrayNumbers[j];
	       arrayNumbers[j]=arrayNumbers[j+1];
	       arrayNumbers[j+1]=temp;
	      }
	   }   
    } 
    
    printArray(arrayNumbers,sizeArray);

   }
   
   
   void SortingAlgorithms::selection(int *arrayNumbers,int sizeArray){
   	
   	int minIndex;
   	int temp;
   	
   	for (int i =0 ;i<sizeArray;i++){	
   		minIndex=i; 
	   for(int j=i+1;j<sizeArray;j++){
          
		    if(arrayNumbers[j]<arrayNumbers[minIndex]){
		     minIndex=j;
			}
		  }
	   if(minIndex!=i){	
	   	temp=arrayNumbers[minIndex] ;
	      arrayNumbers[minIndex]=arrayNumbers[i];  
	    arrayNumbers[i]=temp;
		}
	}	
	
	printArray(arrayNumbers,sizeArray);     
	   
 }
	   
 void SortingAlgorithms::shell(int *arrayNumbers,int sizeArray){
 	
  int salto, aux, i;
   int cambios;
   for(salto=sizeArray/2; salto!=0; salto/=2){
           cambios=1;
           while(cambios){ // Mientras se intercambie algún elemento
                       cambios=0;
                       for(i=salto; i< sizeArray; i++) // se da una pasada
                               if(arrayNumbers[i-salto]>arrayNumbers[i]){ // y si están desordenados
                                     aux=arrayNumbers[i]; // se reordenan
                                     arrayNumbers[i]=arrayNumbers[i-salto];
                                     arrayNumbers[i-salto]=aux;
                                     cambios=1; // y se marca como cambio.
                               }
                        }
            }
       	printArray(arrayNumbers,sizeArray);          
            
            
 }	
	   

int main (){



SortingAlgorithms classObject;
int sizeArray=classObject.getSizeArray(10);

int numbers [sizeArray];

classObject.fillArray(numbers,sizeArray);
classObject.shell(numbers,sizeArray);

return 0;

   
}







