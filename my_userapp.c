#include "types.h"
#include "stat.h"
#include "user.h"
#include "traps.h"

int
main(int argc, char *argv[])
{
	while(1){
		unsigned int p = fork();
		if (p==0){
			printf(1,"Child\n");
		   exit();
		}
		
		else{
			wait();
			printf(1,"Parent\n");	
	       __asm__("int $129");	
		}
  
	}
	return 0;
}
