#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

const int ROWS = 5;
const int COLS = 5;
	


class Matrix{

	public:

    int mat1[5][5];
	int mat2[5][5];
    int matR[5][5];
    
	Matrix();
    
    void multiply(int mat1[ROWS][COLS],int mat2[ROWS][COLS]);
    void printMatrix(int[ROWS][COLS]);
    
};



 Matrix::Matrix(){
	srand ( time(NULL) ); 
	
     for(int i=0;i<ROWS;i++){
     	for(int j=0;j<COLS;j++){
	       mat1[i][j]=rand() % 100;	
	       mat2[i][j]=rand() % 100;	
		 } 
     }
    	
}



void Matrix::multiply(int mat1[ROWS][COLS],int mat2[ROWS][COLS]){
	
	 
	
}


void Matrix::printMatrix(int mat[ROWS][COLS]){
	
	 for(int i=0;i<ROWS;i++){
     	for(int j=0;j<COLS;j++){
	       cout<<mat[i][j]<<" ";
		 } 
		 cout<<endl;
     }
     
     cout<<endl<<endl<<endl;
	
}


int main (void){			
	   
	Matrix object;   
   
   object.printMatrix(object.mat1);
   object.printMatrix(object.mat2);
	
return 0;
   
}
