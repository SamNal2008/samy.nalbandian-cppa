#pragma once

#include <pybind11/pybind11.h>
#include <mln/core/image/ndbuffer_image.hpp>

template<class T>
mln::ndbuffer_image numpy_to_ndbuffer(pybind11::array_t<T> arr);
