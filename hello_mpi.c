#include <mpi.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int numprocs, myid;

	MPI_Init(&argc,&argv); 
	MPI_Comm_size(MPI_COMM_WORLD,&numprocs); 
	MPI_Comm_rank(MPI_COMM_WORLD,&myid); 

	if(myid == 0) {
		printf("We have %d processors\n", numprocs);
		printf("Hello World from the master\n");
	}
	else {
		printf("Hello World from Processor %d\n", myid);
	}

	MPI_Finalize(); 
	return 0;
}
