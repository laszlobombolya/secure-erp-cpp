#pragma once
#include <vector>
#include "CRMController.h"
#include "../ui/TerminalView.h"

using namespace std;

class MainController {
 private:
  const CRMController crmController;
  const TerminalView terminalView;
 public:
  MainController(const CRMController &crmController,
                 const TerminalView &terminalView)
      : crmController(crmController),
        terminalView(terminalView) {};

  void menu();

  bool invokeMenuItem(int selectedMenu);
};
