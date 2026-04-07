#include <iostream>
#include <string>

using namespace std;

string dividers[] = {
    R"(
// =============================================================================
//  UI & APPEARANCE
// =============================================================================
)",
    R"(
// --- Editor Configuration ----------------------------------------------------
)",
    R"(
// +----------------------------------------------------------------------------+
// | USER SETTINGS - Main Configuration                                         |
// +----------------------------------------------------------------------------+
)",
    R"(
// /* ------------------------- [ EXTENSION SETTINGS ] ------------------------- */
)",
    R"(
// -- Font & Typography --
)"};

int main(int argc, char *argv[])
{
    int choice;
    if (argc < 1)
    {
        cerr << "Please provided an argument from 1 to 5" << endl;
        return 1;
    }

    try
    {
        choice = stoi(argv[1]);
    }
    catch (const invalid_argument &e)
    {
        cerr << "Error: '" << argv[1] << "' is not a valid number." << endl;
        return 1;
    }

    if (choice < 1 || choice > 5)
    {
        cerr << "Choice out of scope please choose from 1 to 5" << endl;
        return 1;
    }

    cout << dividers[choice - 1] << endl;
    return 0;
}
