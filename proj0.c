#include "types.h"
#include "user.h"

// ADDED new command for user to call 'proj0 <some user string>'. 
// will return 'CSE3320 proj0 printing in user space: <some user string>'
// also see makefile UPROGS:175 for adding proj0 to the 'ls' call menu. (line number may change with future development)
 
int
main(int argc, char *argv[])
{

    //NOTE: the agr of '1' is for stdout

  printf(1, "CSE3320 proj0 printing in user space: ");

  for (int i = 1; i < argc; i++) {
    printf(1, " %s", argv[i]);
  }
  printf(1, "\n");

  exit();
}
