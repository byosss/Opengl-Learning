#include <iostream>

#include "App.h"

int main() {
    
    try {
        App app;
        app.run();
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}