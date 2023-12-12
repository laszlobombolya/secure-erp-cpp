#include "CRMController.h"

const static vector<string> CRM_OPTIONS{
    "Back to main menu",
    "List customers",
    "Add new customer",
    "Update customer",
    "Remove customer",
    "Subscribed customer emails"
};

void CRMController::displayMenu() const {
  terminalView.printMenu("Customer Relationship", CRM_OPTIONS);
}

