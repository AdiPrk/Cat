#include <PCH/pch.h>
#include "Server.h"

int main() {
    // Create and run the server on port 7777.
    Dog::Server server(7777);
    server.run();
    return 0;
}