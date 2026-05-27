#include <stdio.h>
#include <unistd.h>

int main(){
    char *path = "./codigo01";
    char *args[] = {"./codigo01", NULL};
    execv(path, args);
    return 0;
}