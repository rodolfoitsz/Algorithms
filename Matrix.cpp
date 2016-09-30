#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

const int ROWS = 3;
const int COLS = 3;
	


class Matrix{

	public:

    int mat1[ROWS][COLS];
	int mat2[ROWS][COLS];
    int matR[ROWS][COLS];
    
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
	
	
	 for(int i=0;i<ROWS;i++){
     	for(int j=0;j<COLS;j++){		
     		int sum =0;
     		for(int k=0;k<COLS;k++){
			sum+= mat1[i][k]* mat2[k][j];
			 }
			 	 matR[i][j]=sum;
		 } 
     }
	
	 printMatrix (matR);
	
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
   object.multiply(object.mat1,object.mat2);
   
	
return 0;
   
}
