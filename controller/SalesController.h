#pragma once

#include <string_view>
#include "../ui/TerminalView.h"

using namespace std;

const static string_view SALES_OPTIONS[]{
    "Back to main menu",
    "List transactions",
    "Add new transaction",
    "Update transaction",
    "Remove transaction",
    "Get the transaction that made the biggest revenue",
    "Get the product that made the biggest revenue altogether",
    "Count number of transactions between",
    "Sum the price of transactions between"
};

class SalesController {
 public:
  SalesController(const TerminalView &terminalView) : terminalView(terminalView) {};
  void displayMenu() const;
 private:
  const TerminalView terminalView;
};
