#pragma once

#include <string_view>
#include "../ui/TerminalView.h"

using namespace std;
const static string_view HR_OPTIONS[]{
        "Back to main menu",
        "List employees",
        "Add new employee",
        "Update employee",
        "Remove employee",
        "Oldest and youngest employees",
        "Employees average age",
        "Employees with birthdays in the next two weeks",
        "Employees with clearance level",
        "Employee numbers by department"
};

class HRController {
public:
    HRController(const TerminalView& terminalView) : terminalView(terminalView){};
    void displayMenu() const;
private:
    const TerminalView terminalView;
};
