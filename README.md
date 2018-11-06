# CIS200Assn4

- 2018 Winter CIS200 – Program 4
- Release date:  April 10, 2018
- Due date: April 13and April 20, 2018

The program will simulate aprocessor using a binary heap priority queue.

The jobs to be processed will be arriving into the system on a random basis based on the following arrival times with specific processing time units.

| Type                  | Arrival Time | Processing Time |
| --------------------- | ------------ | --------------- |
| Regular Jobs          |              |                 |
| A                     | 5+/- 1       | 3 +/- 2         |
| B                     | 10+/- 1      | 8 +/- 2         |
| C                     | 25+/- 1      | 13 +/- 2        |
| Highest Priority Jobs |              |                 |
| D                     | 30+/- 5      | 10 +/- 2        |

To start there is one processor with a priority queue to hold all jobs that have not started. Upon arrival, a job will begin processing if no current job is executing or, if a job is currently in process, be placed on the priority queue based on processing time. Once a job starts executing it runs to completion unless a“Highest Priority” interrupts the running job. The interrupted job is removed from the processor and the remaining time is calculated and job placed back into the priority queue based on the new processing time.

Data for each job: job type,overall job number, job type number, processing time

You are to determine and capture a set of metrics that will determine how well the system is performing.

Sample Metrics:

- Queue size: <value every x time units>
- Average queue size: <value>
- Average time in queue: <value> time units.
- Idle time: <value> time units.
- Total number of jobs A arrived: <value>
- Total number of jobs B arrived: <value>
- Total number of jobs C arrived: <value>
- Total number of jobs D arrived: <value>
- Total wait time in queue: <value> time units.
- Maximum jobs in queue: <value>
- Jobs interrupted <value>
- Total jobs completed <value>
- Number of processor(s) used <value>
- Total number of time units the processors(s) run<value>
- Total time processor(s) spent processing is<value> time units

You are to evaluate the metrics you collect and determine how many processors should be used to process jobs most effectively. High number of jobs in the queue (i.e. long wait times to process) and a continually empty queue are an ineffective processing environment. 

The simulation should run for500 time units to “pre-fill” system with jobs, report metrics of queue size then continue to run for an additional 9500 time units and then report final metrics.

For each program run you are to create a log file of actions.

```
1)  Heap Empty;CPU 1 Idle time; CPU 2 Idle time; CPU 3 Idle time;
2)  HeapEmpty; CPU 1 Idle time; CPU 2 Idle time; CPU 3 Idle time;
3)  HeapEmpty; CPU 1 Idle time; CPU 2 Idle time; CPU 3 Idle time;
4)  HeapEmpty; CPU 1 Idle time; CPU 2 Idle time; CPU 3 Idle time;
5)  ArrivalJob A: Overall Job 1, Job A 1, Processing time 5; Begin Processing Job A 1 CPU1 – end time 9; Heap Empty; CPU 2 Idle time; CPU 3 Idle time;
6)  HeapEmpty, CPU 2 Idle time; CPU 3 Idle time;
7)  HeapEmpty, CPU 2 Idle time; CPU 3 Idle time;
8)  HeapEmpty, CPU 2 Idle time; CPU 3 Idle time;
9)  Job A 1 Completes;Heap Empty; CPU 2 Idle time; CPU 3 Idle time;
10) Arrival Job A: Overall Job 2, Job A 2,Processing time 4; Begin Processing Job A 2 CPU 1; Heap Empty; CPU 2 Idle time;CPU 3 Idle time;
11) Arrival Job B: Overall Job 3, Job B 1,Processing time 8; Begin Processing Job B 1 CPU 2; Heap Empty; CPU 3 Idle time;
12) CPU 3 Idle time;
13) Job A 2 Completed; CPU 1 Idle time; CPU 3 Idletime; 
14)  ...
7679)  ArrivalJob D: Overall Job 3038, Job D 256, Processing time 12;  Interrupt job A 1535, Interrupted jobs: 157,New high priority job goes into Processor Job A 1535 Added to queue with processingtime 1; 
7680) …
```

In addition to the normal turn-in document, you are to submit a write up on your review of the run with one processor and your analysis and additional runs to determine the number of processors to run the system most efficiently. 

** **