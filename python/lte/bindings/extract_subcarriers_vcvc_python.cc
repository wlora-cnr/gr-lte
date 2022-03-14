/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(extract_subcarriers_vcvc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(9a43e568fdfb4c08160a72ff272d3eae)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lte/extract_subcarriers_vcvc.h>
// pydoc.h is automatically generated in the build directory
#include <extract_subcarriers_vcvc_pydoc.h>

void bind_extract_subcarriers_vcvc(py::module& m)
{

    using extract_subcarriers_vcvc    = ::gr::lte::extract_subcarriers_vcvc;


    py::class_<extract_subcarriers_vcvc, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<extract_subcarriers_vcvc>>(m, "extract_subcarriers_vcvc", D(extract_subcarriers_vcvc))

        .def(py::init(&extract_subcarriers_vcvc::make),
           py::arg("N_rb_dl"),
           py::arg("fftl"),
           py::arg("name") = "extract_subcarriers_vcvc",
           D(extract_subcarriers_vcvc,make)
        )
        



        ;




}







