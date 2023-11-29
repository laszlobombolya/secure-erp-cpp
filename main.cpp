#include <iostream>
#include "TerminalView.h"
#include "CRMController.h"
#include "SalesController.h"
#include "HRController.h"
#include "MainController.h"

int main() {
  TerminalView terminalView = TerminalView();
  CRMController crmController = CRMController(terminalView);
  SalesController salesController = SalesController(terminalView);
  HRController hrController = HRController(terminalView);

  MainController mainController = MainController(crmController, salesController, hrController, terminalView);

  mainController.menu();
  return 0;
}
