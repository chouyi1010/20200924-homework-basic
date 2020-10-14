#include <iostream>
using namespace std;
int main() {
    int count, total, itemprice = 0;

    cout << "請問有幾筆資料: ";
    cin >> count;

    total=0;
    for (int i = 0; i < count; i++) {
                cout << "請輸入第" << i + 1 << "筆存款:" ;
        cin >> itemprice;
        total +=  itemprice;   
    }
    cout << "全部金額一共是 " << total << "元";
}  

