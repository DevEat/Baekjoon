//
// Created by asia_ on 2020-03-23.
//
#include<iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, x, BIT = 0;
    string cmd;

    cin >> M;
    while (M--) {
        cin >> cmd;
        if ("add" == cmd) {
            cin >> x;
            BIT |= (1 << x);
        } else if ("remove" == cmd) {
            cin >> x;
            BIT &= ~(1 << x);
        } else if ("check" == cmd) {
            cin >> x;
            if (BIT & (1 << x))
                cout << "1\n";
            else
                cout << "0\n";
        } else if ("toggle" == cmd) {
            cin >> x;
            if (BIT & (1 << x))
                BIT &= ~(1 << x);
            else
                BIT |= (1 << x);
        } else if ("all" == cmd) {
            BIT = (1 << 21) - 1;
        } else if ("empty" == cmd) {
            BIT = 0;
        }
    }

    return 0;
}