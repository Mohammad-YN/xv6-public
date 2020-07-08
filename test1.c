#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main (int argc,char *argv[])
{

	int pid;
	int status, wtime, rtime;	
	pid = fork();
	if (pid == 0)
  	{	
    	printf("failed");
    }
  	else
 	{
    	status = waitx(&wtime, &rtime);
 	}  
 	printf(1, "Wait Time = %d\n Run Time = %d Status = %d \n", wtime, rtime, status); 
 	exit();
}
