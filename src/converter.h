#pragma once

#include <pybind11/pybind11.h>
#include <mln/core/image/ndbuffer_image.hpp>

ndbuffer_image numpy_to_ndbuffer(py::array_t<T> arr);
