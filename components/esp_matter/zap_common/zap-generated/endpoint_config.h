/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

// Prevent multiple inclusion
#pragma once

#include <lib/core/CHIPConfig.h>
#include <sdkconfig.h>

#define GENERATED_ATTRIBUTES                                                   \
  {}

#define GENERATED_CLUSTERS                                                     \
  {}

#define GENERATED_ENDPOINT_TYPES                                               \
  {}

#define ZAP_FIXED_ENDPOINT_DATA_VERSION_COUNT 0

// Largest attribute size is needed for various buffers
#define ATTRIBUTE_LARGEST CONFIG_ESP_MATTER_ATTRIBUTE_BUFFER_LARGEST

static_assert(ATTRIBUTE_LARGEST <= CHIP_CONFIG_MAX_ATTRIBUTE_STORE_ELEMENT_SIZE, "ATTRIBUTE_LARGEST larger than expected");

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE (0)

// Number of fixed endpoints
#define FIXED_ENDPOINT_COUNT (0)
#ifdef CHIP_DEVICE_CONFIG_DYNAMIC_ENDPOINT_COUNT
#undef CHIP_DEVICE_CONFIG_DYNAMIC_ENDPOINT_COUNT
#endif
#define CHIP_DEVICE_CONFIG_DYNAMIC_ENDPOINT_COUNT CONFIG_ESP_MATTER_MAX_DYNAMIC_ENDPOINT_COUNT

// Array of endpoints that are supported, the data inside
// the array is the endpoint number.
#define FIXED_ENDPOINT_ARRAY                                                   \
  {0}

// Array of profile ids
#define FIXED_PROFILE_IDS                                                      \
  {0}

// Array of device types
#define FIXED_DEVICE_TYPES                                                     \
  {0}

// Array of device type offsets
#define FIXED_DEVICE_TYPE_OFFSETS                                              \
  {0}

// Array of device type lengths
#define FIXED_DEVICE_TYPE_LENGTHS                                              \
  {0}

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES                                                   \
  {0}

// Array of networks supported on each endpoint
#define FIXED_NETWORKS                                                         \
  {0}
