#include <Python.h>
#include <iostream>
#include <mln/core/se/private/se_facade.hpp>
#include <mln/core/box.hpp>
#include <mln/core/se/disc.hpp>
#include <memory>
#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>
#include "converter.h"

int main(void)
{
    numpy_to_ndbuffer(pybind11::array_t<int>(5));
}
