#include "converter.h"
#include <pybind11/pybind11.h>
#include <mln/core/image/ndbuffer_image.hpp>

namespace py = pybind11;

template<class T, int N>
ndbuffer_image numpy_to_ndbuffer(py::array_t<T> arr)
{
    auto r = arr.unchecked<T>();
    std::cout << r.ndim();
    return ndbuffer_image();
}
