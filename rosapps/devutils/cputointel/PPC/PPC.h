
#include "../misc.h"

CPU_INT PPCBrain(char *infileName, char *outputfileName, CPU_UNINT BaseAddress, CPU_UNINT cpuarch);

/* here we put the prototype for the opcode api that brain need we show a example for it */
CPU_INT PPC_Addx(FILE *out, CPU_BYTE * cpu_buffer, CPU_UNINT cpu_pos, CPU_UNINT cpu_size, CPU_UNINT BaseAddress, CPU_UNINT cpuarch);


/* Export comment thing see m68k for example 
 * in dummy we do not show it, for it is diffent for each cpu
 */
