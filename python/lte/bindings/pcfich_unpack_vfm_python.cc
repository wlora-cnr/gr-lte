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
/* BINDTOOL_HEADER_FILE(pcfich_unpack_vfm.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(e72992e6badee47d811325e50ad1cf77)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lte/pcfich_unpack_vfm.h>
// pydoc.h is automatically generated in the build directory
#include <pcfich_unpack_vfm_pydoc.h>

void bind_pcfich_unpack_vfm(py::module& m)
{

    using pcfich_unpack_vfm    = ::gr::lte::pcfich_unpack_vfm;


    py::class_<pcfich_unpack_vfm, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<pcfich_unpack_vfm>>(m, "pcfich_unpack_vfm", D(pcfich_unpack_vfm))

        .def(py::init(&pcfich_unpack_vfm::make),
           py::arg("key"),
           py::arg("msg_buf_name"),
           py::arg("name") = "pcfich_unpack_vfm",
           D(pcfich_unpack_vfm,make)
        )
        


        
        .def("activate_debug_mode",&pcfich_unpack_vfm::activate_debug_mode,       
            py::arg("ena"),
            D(pcfich_unpack_vfm,activate_debug_mode)
        )


        
        .def("cfi_results",&pcfich_unpack_vfm::cfi_results,       
            D(pcfich_unpack_vfm,cfi_results)
        )



        ;




}







