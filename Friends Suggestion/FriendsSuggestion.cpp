#include "SocialMedia.h"
#include <iostream>

int main()
{
    SocialMedia test;
    bool success = test.loadUsersFromFile("C:\\Users\\Khanh\\Downloads\\users.csv");
    bool successConnections = test.loadConnectionsFromFile("C:\\Users\\Khanh\\Downloads\\edges.txt");
    if (!success || !successConnections) {
        std::cerr << "Failed to load data from files\n";
        return 1;
    }
    for (int i = 1; i <= 1000; ++i) {
        test.printSuggestions(i);
    }
}

