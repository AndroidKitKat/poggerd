//
//  main.c
//  poggerd2
//
//  Created by skg on 6/30/21.
//

#include <stdio.h>
#include <syslog.h>
#include <unistd.h>
#include "thread.h"

// Prototypes
void writePog(void);

void writePog(void) {
    printf("writepog?\n");
    while(1) {
        syslog(LOG_NOTICE, "POG");
    }
}

int main(int argc, const char * argv[]) {
    // open syslog
    openlog("poggerd", LOG_CONS | LOG_PID | LOG_NDELAY, LOG_LOCAL1);
    
    // get number of processors available to us
    long num_procs = sysconf(_SC_NPROCESSORS_ONLN);
    
    Thread t[(int) num_procs];
    
    for (size_t i = 1; i < num_procs; i++) {
        thread_create(&t[i], NULL, writePog, NULL);
    }
    
    // and now we do nothing
    
    while(1){}
    
    return 0;
}
