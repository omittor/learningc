#include <stdio.h>
#include <time.h>

void logger(const char* message) {
    FILE* logfile = fopen("logfile.txt", "a");

    if(logfile) {
        time_t now = time(NULL);
        struct tm *local = localtime(&now);
        fprintf(logfile, "[%02d-%02d-%02d %02d:%02d:%02d] %s\n",
            local->tm_year + 1900, local->tm_mon + 1, local->tm_mday,
            local->tm_hour, local->tm_min, local->tm_sec, message);
        fclose(logfile);
    } else {
        fprintf(stderr, "Failed to open logfile\n");
    }
}