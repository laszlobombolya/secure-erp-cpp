#include "SalesController.h"

void SalesController::displayMenu() const {
  terminalView.printMenu("Sales", SALES_OPTIONS);
}
