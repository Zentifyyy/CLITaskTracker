#include <iostream>

std::string lastCommand;

std::string Commandinput() {
    std::string text;
    std::cin >> text;

    if(text[0] != '/'){
        std::cout << "Please type a command.";
        return "";
    }

    lastCommand = text;

    return text;
}

int main()
{
    std::cout << "Hello World!, Welcome to your personal Task Tracker!\n";

    std::cout << "What would you like to do?\n";

    std::cout << "Use /help for a list of commands.\n";

    if (Commandinput() == "/help") {
        std::cout << "/task - shows all current tasks\n";
    }

    if (lastCommand == "/task") {
        std::cout << "Here are all of your tasks!\n";
    }
}