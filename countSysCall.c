#include "syscall.h"
#include "types.h"
#include "user.h"


int main(void) { 

int counter = getsyscallinfo();
printf(1, "counter value is %d\n", counter);

exit();

}
