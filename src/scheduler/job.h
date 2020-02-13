//we need a struct with attributes like
//id, priority, size

/* struct my_struct
 {
           long int id;
           int priority;
            int size;
};*/

#ifndef JOB_H
#define JOB_H
class Job
{
	long int id;
	int priority;
        int size;

	public:
		Job(long int id,int priority,int size);
		printJob(long int id,int priority,int size);

		
};
#endif

