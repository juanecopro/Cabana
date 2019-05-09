/****************************************************************************
 * Copyright (c) 2018-2019 by the Cabana authors                            *
 * All rights reserved.                                                     *
 *                                                                          *
 * This file is part of the Cabana library. Cabana is distributed under a   *
 * BSD 3-clause license. For the licensing terms see the LICENSE file in    *
 * the top-level directory.                                                 *
 *                                                                          *
 * SPDX-License-Identifier: BSD-3-Clause                                    *
 ****************************************************************************/

#ifndef CABANA_VERSION_HPP
#define CABANA_VERSION_HPP

#include <CabanaCore_config.hpp>

#include <string>

namespace Cabana
{

std::string version();

std::string git_commit_hash();

} // end namespace Cabana

#endif // end CABANA_VERSION_HPP