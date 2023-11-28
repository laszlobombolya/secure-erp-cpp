#pragma once
#include <string_view>
#include <vector>

using namespace std;

namespace hr {
const static int ID_TABLE_INDEX{0};
const static int NAME_TABLE_INDEX{1};
const static int BIRTH_DATE_TABLE_INDEX{2};
const static int DEPARTMENT_TABLE_INDEX{3};
const static int CLEARANCE_TABLE_INDEX{4};
constexpr string_view DATA_FILE{"resources/hr.csv"};
static vector<string_view> headers = {"Id", "Name", "Date of birth", "Department", "Clearance"};
class HRDAO {

};
}
