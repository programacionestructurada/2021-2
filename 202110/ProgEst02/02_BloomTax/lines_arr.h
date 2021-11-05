#ifndef LINES_ARR_H_INCLUDED
#define LINES_ARR_H_INCLUDED

static char lines_arr[][128] = {
 "",
 "",
 "",
 "",
 "",
 "",
 "",
 "",
 "",
 ""
};
static unsigned int curr_row = 0;
#define NUM_D_LINES (sizeof(lines_arr)/sizeof(lines_arr[0]))

void agregar_palabra(char word[]);

#endif // LINES_ARR_H_INCLUDED
