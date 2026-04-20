/*
 * Copyright (c) 2022 HOREICH UG, 2020 ARM Limited.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef NUCLEO_HPP
#define NUCLEO_HPP

#include "mbed.h"
#include "mbed_error.h"
#include "mbed_mem_trace.h"
#include "mbed_trace.h"
#include "rtos.h"

#include <span>

#include "trace_helper.h"

class Nucleo
{
  public:
    Nucleo() = default;                // default constructor
    Nucleo(Nucleo const &) = delete; // no copy
    Nucleo(Nucleo &&) = default;
    static void Init();

  private:
    // static void Main();

  private:
};

#endif // NUCLEO_HPP