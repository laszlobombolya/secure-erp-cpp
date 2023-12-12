#include "TerminalView.h"

void TerminalView::printMessage(string_view message) const {
  throw exception();
}

void TerminalView::printMenu(string_view title, const vector<string>& options) const {
  throw exception();
}

void TerminalView::printGeneralResults(string_view result, string_view label) const{
  throw exception();
}

void TerminalView::printTable(const vector<vector<string>>& table) const {
  throw exception();
}

int TerminalView::getNumberInput(string_view label) const {
  return 0;
}

vector<string_view> TerminalView::getInputs(const vector<string>& labels) const{
  return vector<string_view>();
}

void TerminalView::printErrorMessage(string_view message) const {
  throw exception();
}
