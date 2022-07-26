/*
 * Copyright 2019 Xilinx, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef GQE_ISV_GQE_TYPES_HPP
#define GQE_ISV_GQE_TYPES_HPP

// XXX inline with tpch_read_2.h
#include <stdint.h>

namespace xf {
namespace database {
namespace gqe {

typedef int64_t TPCH_INT;
typedef int64_t MONEY_T;
typedef int64_t DATE_T;
typedef int64_t KEY_T;

#define TPCH_INT_SZ sizeof(int64_t)
#define MONEY_SZ sizeof(int64_t)
#define DATE_SZ sizeof(int64_t)
#define KEY_SZ sizeof(int64_t)

#define VEC_SCAN 4
#define VEC_LEN 4

//#define FILTER_MAX_ROW (1 << 20)
//#define HASHJOIN_MAX_ROW (1 << 20)
//#define AGGREGATE_MAX_ROW (1 << 20)

//#define BURST_LEN 32

} // namespace gqe
} // namespace database
} // namespace xf

#endif // GQE_ISV_GQE_TYPES_HPP
