#include "stdafx.h"
#include "Processor.h"


Processor::Processor()
{
}

//Description: Adds an item to the stack
//Precondition : Job item as input
//Postcondition : Item added to top of the stack
void Processor::push(job inputJob)
{
	if (jobCount == 0) {
		currentJob = inputJob;
		jobCount++;
	}
}

//Description: Removes an item from the stack
//Precondition : item in the cpu stack
//Postcondition : Item is removed from the stack and returned
job Processor::pop()
{
	job tempJob = currentJob;
	currentJob = {};
	jobCount--;
	return tempJob;

}

//Description: Returns true when the stack is empty
//Precondition : A processor
//Postcondition : True if empty, false if not
bool Processor::isEmpty()
{
	if (jobCount == 0) {
		return true;
	}
	else {
		return false;
	}
}

//Description: Returns true when the stack is full(max of 1)
//Precondition : A processor
//Postcondition : True if full, false if not
bool Processor::isFull()
{
	if (jobCount == 1) {
		return true;
	}
	else {
		return false;
	}
}

//Description: Returns true when job in the processor has 0 time remaining
//Precondition : An active job in a processor
//Postcondition : True if complete, false if not
bool Processor::isComplete()
{
	if (currentJob.processingTime==0) {
		return true;
	}
	else {
		return false;
	}
}

//Description: Decreases the processing time in an active job in a processor
//Precondition : An active job in a processor
//Postcondition : Decreases the job amount 1
void Processor::processJobOne(){
	currentJob.processingTime--;
}


Processor::~Processor()
{
}
