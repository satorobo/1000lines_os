#include "user.h"

void main(void) {
  // Store page fault
  *((volatile int *) 0x80200000) = 0x1234;
  for (;;);
}
