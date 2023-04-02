#include "Application.hpp"

int main(int pArgC, char* pArgV[]) {
    Application application { pArgC, pArgV };
    return application.run();
}
