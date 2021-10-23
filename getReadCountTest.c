#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
    int readCounter = getReadCount();
    printf(1,"=> %d\n",readCounter);
    exit();
}