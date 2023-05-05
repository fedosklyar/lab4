#include "funcs.h"

int main(){
   offcut B1, B2(B1), B3 (B2);

   create_offcuts(B1, B2, B3);
   display_offcuts(B1, B2, B3);
   incr_and_fin_len(B3);
   check_paralel(B1, B2);

   return 0;
}