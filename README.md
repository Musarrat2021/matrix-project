# Matrix Library Project (C++ and C)

## AUTHORING
Mustabshirah Musarrat  
CMSC313   
Class Time: Monday, Wednesday (10:00am-11:15am)  
Due date: 4/16/2025

## PURPOSE OF SOFTWARE
This project implements a matrix library:
 * C++ version using a class named 'Matrix' with encapsulated operations.
 * C version using function-based design compliant with the C99 standard.


## FILES

 File and Description                            

 matrix.h : Header for C++ matrix class            
 matrix.cpp : C++ class implementation               
 main.cpp : Test program for C++ matrix library    
 matrix_c.h : Header for C matrix functions          
 matrix.c : C function implementation              
 main.c : Test program for C matrix library      
 README.md : Project documentation                  

## BUILD INSTRUCTIONS
It has been ensured that the project directory was named matrix-project during execution.
  1. C++ version:
  g++ main.cpp matrix.cpp -o matrix_cpp
  ./matrix_cpp
  2. C version:
  gcc main.c matrix.c -o matrix_c
  ./matrix_c

## TESTING METHODOLOGY
  Given: 
      D = A + (3*B) X C^T
  where, A is 2X2, B is 2X3 and C is 3X2 matrix.
  1. Matrices A, B and C are initialized with given values.
  2. Matrix B is multiplied by the scalar 3.
  3. Matrix C is transposed to get C^T.
  4. An intermediate matrix is computed as (3*B) x C^T.
  5. The result matrix D is obtained by adding A to the product of (3*B) × C^T.

Expected output for matrix D:
     
      D = [90   70]
          [200 150]

Testing was done in both C and C++ versions and the results were compared for consistency. Console outputs confirmed that both implementations produce the correct result.


