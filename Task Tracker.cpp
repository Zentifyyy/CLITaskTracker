#include <iostream>
#include <cstdlib>


void commandInput() {

    std::string text;
    std::cin >> text;

    if(text[0] != '/'){
        std::cout << "Please type a command.";
    }

    if (text == "/quit" || text == "/exit") {
        exit(0);
    }

    if (text == "/help") {
        std::cout << "/task - shows all current tasks\n";
        std::cout << "/quit - exits the application\n";
        commandInput();
    }

    if (text == "/task") {
        std::cout << "Here are all of your tasks!\n";
        commandInput();
    }
}


int main()
{
    std::cout << "Hello World!, Welcome to your personal Task Tracker!\n";

    std::cout << "What would you like to do?\n";

    std::cout << "Use /help for a list of commands.\n";

    commandInput();
}