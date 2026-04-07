#include <iostream>

using namespace std;
int main()
{
    int choice;
    cout << R"(
Choose your divider style:
    1 : Block header
    2 : Minimalist Line
    3 : Box Style
    4 : ASCII Accent
    5 : Tiny Label

Choice: )";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << R"(
// =============================================================================
//  UI & APPEARANCE
// =============================================================================
        )" << endl;
        break;
    case 2:
        cout << R"(
// --- Editor Configuration ----------------------------------------------------
        )" << endl;
        break;
    case 3:
        cout << R"(
// ┌────────────────────────────────────────────────────────────────────────────
// │ USER SETTINGS - Main Configuration
// └────────────────────────────────────────────────────────────────────────────
    )" << endl;
    case 4:
        cout << R"(
// /* ------------------------- [ EXTENSION SETTINGS ] ------------------------- */
    )" << endl;
    case 5:
        cout << R"(
// -- Font & Typography --
    )" << endl;
    default:
        cout << R"(
// =============================================================================
//  UI & APPEARANCE
// =============================================================================
    )" << endl;
    }
    return 0;
}
