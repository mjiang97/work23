#include "pipe_networking.h"

int main() {
    char line[BUFFER_SIZE];
    int sd = client_connect();
    while(1) {
        printf("input: ");
        fgets(line, sizeof(line), stdin);
        write(sd, line, sizeof(line));
        read(sd, line, sizeof(line));
        printf("response: %s", line);
    }
}