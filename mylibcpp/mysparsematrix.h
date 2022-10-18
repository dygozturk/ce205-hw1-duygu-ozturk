#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

#include "mydata.h"

#pragma region SPARSE MATRIX FUNCTIONS

/// <summary>
/// initiate then sparse matrix with given structure use linked lists.
/// </summary>
/// <param name="row"></param>
/// <param name="column"></param>
/// <returns></returns>
MySparseMatrix* initSparseMatrix(int row, int column);

/// <summary>
/// Return Data Structure in given row then column.
/// </summary>
/// <param name="matrix"></param>
/// <param name="row"></param>
/// <param name="column"></param>
/// <returns></returns>
Data* getSparseMatrix(MySparseMatrix* matrix, int row, int column);

/// <summary>
/// Insert data structure to given row then column position.
/// </summary>
/// <param name="matrix"></param>
/// <param name="row"></param>
/// <param name="column"></param>
/// <param name="data"></param>
/// <returns></returns>
int insertSparseMatrix(MySparseMatrix* matrix,int row, int column, Data *data);

/// <summary>
/// Delete the item then reset the value in the given row and column, then delete the node and rearrange the matrix.
/// </summary>
/// <param name="matrix"></param>
/// <param name="row"></param>
/// <param name="column"></param>
/// <returns></returns>
int deleteSparseMatrix(MySparseMatrix* matrix,int row, int column);

/// <summary>
/// Copy matrix values to another sparse matrix
/// </summary>
/// <param name="source"></param>
/// <param name="destination"></param>
/// <returns></returns>
int copySparseMatrix(MySparseMatrix* source, MySparseMatrix* destination);

/// <summary>
/// Kill the Matrix
/// </summary>
/// <param name="matrix"></param>
/// <returns></returns>
int deleteSparseMatrix(MySparseMatrix* matrix);

/// <summary>
/// Print Matrix to Console
/// </summary>
/// <param name="matrix"></param>
/// <returns></returns>
void printMatrixToConsole(MySparseMatrix* matrix);

#pragma endregion