
#define PROGRAM TP1_2

#define TP1_1 1
#define TP1_2 2
#define TP1_3 3
#define TP1_4 4
#define TP1_5 5
#define TP1_6 6

#if PROGRAM==TP1_1
//#include "Projects/TP1/Blinky/blinky.c"
#elif PROGRAM==TP1_2
#define MACRO 0
//#include "Projects/TP1/Blinky/blinky.c"
#elif PROGRAM==TP1_3
//#include "Projects/TP1/Blinky/blinky.c"
#elif PROGRAM==TP1_4
//#include "Projects/TP1/Blinky/blinky.c"
#elif PROGRAM==TP1_5
//#include "Projects/TP1/Blinky/blinky.c"
#elif PROGRAM==TP1_6
//#include "Projects/TP1/Blinky/blinky.c"
#endif


int main(void){
	int k = MACRO;

	return 0;
}
