#include <iostream>
#include "converter.h"

int main(void)
{
    numpy_to_ndbuffer(py::array_t([1,2,3,4,5,6]));
}
