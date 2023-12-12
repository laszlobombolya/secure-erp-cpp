#pragma once

#include "../ui/TerminalView.h"

using namespace std;


class CRMController {
 public:
  CRMController(const TerminalView &terminalView) : terminalView(terminalView) {};
  void displayMenu() const;
 private:
  const TerminalView terminalView;
};
