#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

#include "mydata.h"

#pragma region QUEUE FUNCTIONS

/// <summary>
/// Use a Single List then Store the Data in the Queue
/// </summary>
/// <param name="myQueue">queue object data structure</param>
/// <param name="data">data structure to insert</param>
/// <returns>0 if operation success othercase return -1</returns>
int enqueue(MyQueue* myQueue,Data* data);

/// <summary>
/// Use a Single Linked List then Get Data from Queue
/// </summary>
/// <param name="myQueue">queue object data structure</param>
/// <returns>Data structure pointer, if there is no item return NULL</returns>
Data* dequeue(MyQueue* myQueue);


/// <summary>
/// Use a Single Linked List then Get Data from Infront of The Queue
/// </summary>
/// <param name="myQueue">queue object data structure</param>
/// <returns>Data structure pointer, if there is no item return NULL</returns>
Data* front(MyQueue* myQueue);


/// <summary>
/// Use a Single Linked List then Get Data from Back of The Queue
/// </summary>
/// <param name="myQueue">queue object data structure</param>
/// <returns>Data structure pointer, if there is no item return NULL</returns>
Data* back(MyQueue* myQueue);

/// <summary>
/// Let's count the items in the stack and then return it as an integer
/// </summary>
/// <param name="myQueue">queue object data structure</param>
/// <returns>Returns the length of queue</returns>
int queueLength(MyQueue* myQueue);

#pragma endregion