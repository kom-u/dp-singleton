#include "lib.hpp"

int main()
{
    // Access the game setting singleton instance
    Setting &setting = Setting::Instance();

    // Print the game setting
    std::cout << "Width\t\t: " << setting.GetWidth() << std::endl;
    std::cout << "Height\t\t: " << setting.GetHeight() << std::endl;

    return 0;
}