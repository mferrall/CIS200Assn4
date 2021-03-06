#include "stdafx.h"
#include "jobStack.h"


jobStack::jobStack()
{
}

/*This function adds a new job to the top of the stack*/
void jobStack::push(job inputJob)
{
	jobCount++;
	jobSet[jobCount - 1] = inputJob;
}

/*Removes the object on the top of the stack and returns it*/
job jobStack::pop()
{
	job tempJob;
	tempJob = jobSet[jobCount -1];
	jobSet[jobCount - 1] = { ' ',0, 0,0,0 };
	jobCount--;
	return tempJob;
}

/*Returns true if there are no objects in the stack*/
bool jobStack::isEmpty()
{
	if (jobCount == 0) {
		return true;
	}
	else {
		return false;
	}
}

/*Returns true if there are 5000 objects in the stack*/
bool jobStack::isFull()
{
	if (jobCount == 5000) {
		return true;
	}
	else {
		return false;
	}
}

/*Prints out the objects in the stack*/
void jobStack::print()
{
	for (int arr_i = jobCount - 1; arr_i >= 0; arr_i--) {
		std::cout << "Type " << jobSet[arr_i].jobType << "   "
			<< "Arrival Time " << jobSet[arr_i].arrivalTime << "   "
			<< "Job Number " << jobSet[arr_i].jobNumber << "   "
			<< "Type Number " << jobSet[arr_i].typeNumber << "   "
			<< "Processing Time " << jobSet[arr_i].processingTime << std::endl;
	}
}

/*Returns the arrival time of the top job object in the stack*/
int jobStack::peekArrivalTime()
{
	return jobSet[jobCount - 1].arrivalTime;
}




/* The main function that implements QuickSort
low  --> Starting index,
high  --> Ending index */
void jobStack::quickSort(int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(low, pi - 1);
		quickSort(pi + 1, high);
	}
}

// A utility function to swap two elements
void jobStack::swap(job * a, job * b)
{
	job t = *a;
	*a = *b;
	*b = t;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int jobStack::partition(int low, int high)
{

	job pivot = jobSet[high];    // pivot
	int i = (low - 1);  // Index of smaller element

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (jobSet[j].arrivalTime >= pivot.arrivalTime)
		{
			i++;    // increment index of smaller element
			swap(&jobSet[i], &jobSet[j]);
		}
	}
	swap(&jobSet[i + 1], &jobSet[high]);
	return (i + 1);
}

jobStack::~jobStack()
{
}
