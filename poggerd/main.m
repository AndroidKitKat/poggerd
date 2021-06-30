//
//  main.m
//  poggerd
//
//  Created by skg on 6/30/21.
//

#import <syslog.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        openlog("poggerd", LOG_CONS | LOG_PID | LOG_NDELAY, LOG_LOCAL1);
        while(1) {
            syslog(LOG_NOTICE, "POG");
        }
    }
}
