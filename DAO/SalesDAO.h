#pragma once
#include <string_view>
#include <vector>

using namespace std;

namespace Sales {
const static int ID_TABLE_INDEX{0};
const static int CUSTOMER_ID_TABLE_INDEX{1};
const static int PRODUCT_TABLE_INDEX{2};
const static int PRICE_TABLE_INDEX{3};
const static int TRANSACTION_DATE_TABLE_INDEX{4};
constexpr string_view DATA_FILE{"src/main/resources/sales.csv"};
static vector<string_view> headers = {"Id", "Customer Id", "Product", "Price", "Transaction Date"};

class SalesDAO {

};
}