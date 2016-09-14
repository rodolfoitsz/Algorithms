#include <iostream>
#include <cstdlib>
#include <time.h>


using  namespace std;


class SortingAlgorithms{
	
 public:
 	int * fillArray(int *);
 	void printArray(int *);
 	void insertionSort(int *);
 	
     
};

 int * SortingAlgorithms:: fillArray(int * arrayNumbers ){

    srand ( time(NULL) ); 
    for(int i;i<10;i++){

       arrayNumbers[i]=rand() % 100;
     }
     
     printArray(arrayNumbers);
     
     return arrayNumbers;
             
}


void SortingAlgorithms::printArray(int * arrayNumbers){

 for(int i;i<10;i++){

      cout<<arrayNumbers[i]<<",";
     }

 cout<<endl;

}


 void SortingAlgorithms::insertionSort(int *arrayNumbers){

printArray(arrayNumbers);

}




int main (){


int numbers [10];

SortingAlgorithms classObject;

classObject.fillArray(numbers);
classObject.insertionSort(numbers);

return 0;

   
}







