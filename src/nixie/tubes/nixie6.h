//	Steampunk Thingies
//	Copyright (c) 2022-2024 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include "Arduino.h"


// array size is 3283
const uint8_t nixie6[] PROGMEM  = {
  0xff, 0xd8, 0xff, 0xe0, 0x00, 0x10, 0x4a, 0x46, 0x49, 0x46, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01,
  0x00, 0x01, 0x00, 0x00, 0xff, 0xdb, 0x00, 0x43, 0x00, 0x08, 0x06, 0x06, 0x07, 0x06, 0x05, 0x08,
  0x07, 0x07, 0x07, 0x09, 0x09, 0x08, 0x0a, 0x0c, 0x14, 0x0d, 0x0c, 0x0b, 0x0b, 0x0c, 0x19, 0x12,
  0x13, 0x0f, 0x14, 0x1d, 0x1a, 0x1f, 0x1e, 0x1d, 0x1a, 0x1c, 0x1c, 0x20, 0x24, 0x2e, 0x27, 0x20,
  0x22, 0x2c, 0x23, 0x1c, 0x1c, 0x28, 0x37, 0x29, 0x2c, 0x30, 0x31, 0x34, 0x34, 0x34, 0x1f, 0x27,
  0x39, 0x3d, 0x38, 0x32, 0x3c, 0x2e, 0x33, 0x34, 0x32, 0xff, 0xdb, 0x00, 0x43, 0x01, 0x09, 0x09,
  0x09, 0x0c, 0x0b, 0x0c, 0x18, 0x0d, 0x0d, 0x18, 0x32, 0x21, 0x1c, 0x21, 0x32, 0x32, 0x32, 0x32,
  0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32,
  0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32,
  0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0xff, 0xc0,
  0x00, 0x11, 0x08, 0x00, 0xaa, 0x00, 0x4b, 0x03, 0x01, 0x22, 0x00, 0x02, 0x11, 0x01, 0x03, 0x11,
  0x01, 0xff, 0xc4, 0x00, 0x1f, 0x00, 0x00, 0x01, 0x05, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09,
  0x0a, 0x0b, 0xff, 0xc4, 0x00, 0xb5, 0x10, 0x00, 0x02, 0x01, 0x03, 0x03, 0x02, 0x04, 0x03, 0x05,
  0x05, 0x04, 0x04, 0x00, 0x00, 0x01, 0x7d, 0x01, 0x02, 0x03, 0x00, 0x04, 0x11, 0x05, 0x12, 0x21,
  0x31, 0x41, 0x06, 0x13, 0x51, 0x61, 0x07, 0x22, 0x71, 0x14, 0x32, 0x81, 0x91, 0xa1, 0x08, 0x23,
  0x42, 0xb1, 0xc1, 0x15, 0x52, 0xd1, 0xf0, 0x24, 0x33, 0x62, 0x72, 0x82, 0x09, 0x0a, 0x16, 0x17,
  0x18, 0x19, 0x1a, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a,
  0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a,
  0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a,
  0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99,
  0x9a, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7,
  0xb8, 0xb9, 0xba, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xd2, 0xd3, 0xd4, 0xd5,
  0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xf1,
  0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xff, 0xc4, 0x00, 0x1f, 0x01, 0x00, 0x03,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0xff, 0xc4, 0x00, 0xb5, 0x11, 0x00,
  0x02, 0x01, 0x02, 0x04, 0x04, 0x03, 0x04, 0x07, 0x05, 0x04, 0x04, 0x00, 0x01, 0x02, 0x77, 0x00,
  0x01, 0x02, 0x03, 0x11, 0x04, 0x05, 0x21, 0x31, 0x06, 0x12, 0x41, 0x51, 0x07, 0x61, 0x71, 0x13,
  0x22, 0x32, 0x81, 0x08, 0x14, 0x42, 0x91, 0xa1, 0xb1, 0xc1, 0x09, 0x23, 0x33, 0x52, 0xf0, 0x15,
  0x62, 0x72, 0xd1, 0x0a, 0x16, 0x24, 0x34, 0xe1, 0x25, 0xf1, 0x17, 0x18, 0x19, 0x1a, 0x26, 0x27,
  0x28, 0x29, 0x2a, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49,
  0x4a, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69,
  0x6a, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88,
  0x89, 0x8a, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6,
  0xa7, 0xa8, 0xa9, 0xaa, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xc2, 0xc3, 0xc4,
  0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xe2,
  0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9,
  0xfa, 0xff, 0xda, 0x00, 0x0c, 0x03, 0x01, 0x00, 0x02, 0x11, 0x03, 0x11, 0x00, 0x3f, 0x00, 0xf0,
  0xaa, 0x28, 0xa2, 0xac, 0x80, 0xa5, 0xa4, 0xa5, 0xa0, 0x0b, 0x96, 0x51, 0xc6, 0x17, 0xcd, 0x96,
  0x30, 0xe9, 0xbf, 0x6e, 0x5b, 0xa0, 0xf5, 0xe2, 0xaf, 0x78, 0x8b, 0x4f, 0xb7, 0xb1, 0xb8, 0x80,
  0xdb, 0xc6, 0xd1, 0x2c, 0x89, 0x92, 0x8d, 0xf8, 0x10, 0x47, 0xd4, 0x1a, 0xd8, 0xd0, 0x74, 0xe5,
  0x9f, 0x43, 0x8e, 0x09, 0xa2, 0x18, 0x92, 0x7f, 0x3f, 0x3b, 0x79, 0xc6, 0x30, 0x39, 0xf4, 0xac,
  0xcd, 0x78, 0x4d, 0x77, 0x1f, 0xdb, 0x64, 0x04, 0xb1, 0x7f, 0x99, 0xb1, 0xc7, 0xa7, 0xf4, 0x15,
  0xce, 0xa6, 0xa5, 0x53, 0x47, 0xb6, 0xe6, 0x8d, 0x34, 0xac, 0xd1, 0x81, 0x45, 0x14, 0x57, 0x41,
  0x98, 0x51, 0x45, 0x14, 0x00, 0x94, 0xb4, 0x51, 0x40, 0x09, 0x4f, 0x8d, 0x37, 0xc8, 0x17, 0xd7,
  0xad, 0x20, 0x04, 0x9c, 0x01, 0x93, 0xe8, 0x2b, 0xb3, 0xf0, 0xef, 0x84, 0x6f, 0x3c, 0x9f, 0xb7,
  0x5e, 0x41, 0x88, 0xa5, 0x52, 0xb1, 0xa9, 0x4d, 0xe7, 0xea, 0x47, 0x6a, 0x12, 0xb8, 0x9b, 0x4b,
  0x73, 0x6f, 0x46, 0xd2, 0xaf, 0x67, 0xb2, 0x4b, 0xc6, 0xba, 0xb2, 0xb5, 0xb7, 0xca, 0xa8, 0x83,
  0xcc, 0x0c, 0xfb, 0x7a, 0x67, 0x93, 0xc7, 0xd3, 0xf9, 0x55, 0x8b, 0x8d, 0x23, 0x4a, 0xb3, 0x59,
  0x92, 0xea, 0xe6, 0x39, 0x6d, 0x9d, 0x3e, 0x75, 0x46, 0xe7, 0x9e, 0xb8, 0x19, 0x23, 0x23, 0xa8,
  0xe7, 0xa8, 0xaa, 0xcf, 0xe1, 0xeb, 0x3b, 0x67, 0x26, 0xdc, 0x34, 0xd1, 0xb2, 0xf0, 0x5e, 0xdc,
  0x23, 0x03, 0xdc, 0x63, 0x27, 0x23, 0xde, 0xa4, 0x4d, 0x0e, 0x1b, 0x89, 0x23, 0x59, 0x9e, 0x74,
  0x52, 0x30, 0x51, 0x6d, 0xb7, 0x10, 0x7b, 0x74, 0x35, 0x9a, 0x84, 0x16, 0xca, 0xc3, 0x6d, 0xef,
  0xcd, 0xf8, 0x1e, 0x65, 0x73, 0x0f, 0xd9, 0xee, 0x65, 0x84, 0x30, 0x70, 0x8c, 0x54, 0x30, 0xfe,
  0x21, 0xeb, 0x51, 0x57, 0x7f, 0xe3, 0x1f, 0x03, 0xdd, 0x45, 0x0b, 0xeb, 0x9a, 0x75, 0xb3, 0xfd,
  0x8f, 0x0a, 0x27, 0x88, 0xa9, 0x0d, 0x13, 0x74, 0xc8, 0x07, 0xa8, 0x3f, 0xa5, 0x70, 0x18, 0xe7,
  0x15, 0xa3, 0x56, 0x12, 0x69, 0xec, 0x14, 0x51, 0x45, 0x03, 0x14, 0x0c, 0x90, 0x07, 0x53, 0x5d,
  0x6f, 0x84, 0x3c, 0x3f, 0xa1, 0x6a, 0x2d, 0x2d, 0xce, 0xbd, 0xab, 0xc7, 0x65, 0x6b, 0x0e, 0x32,
  0xa7, 0x25, 0xe4, 0x27, 0xb2, 0xa8, 0xe4, 0xfd, 0x6b, 0x91, 0x15, 0x3e, 0x76, 0xe0, 0x82, 0x3e,
  0x9d, 0x69, 0xa6, 0x90, 0xa4, 0x9b, 0xd8, 0xf6, 0x88, 0xee, 0xbe, 0x15, 0x69, 0x10, 0x8f, 0x26,
  0xd6, 0xea, 0xe9, 0xb1, 0xd7, 0x68, 0x5c, 0xfe, 0x66, 0xb6, 0x74, 0x8f, 0x1d, 0x7c, 0x3b, 0x82,
  0x35, 0x91, 0x62, 0x7b, 0x17, 0xc9, 0x1b, 0x1d, 0x1d, 0x88, 0x1e, 0xbf, 0x2a, 0x91, 0xcd, 0x78,
  0x0a, 0xac, 0x8f, 0xf3, 0x0c, 0x01, 0x9c, 0x64, 0x90, 0x2a, 0x4d, 0xa8, 0x37, 0x89, 0xcb, 0x89,
  0x30, 0x36, 0xed, 0xc1, 0x1f, 0x8d, 0x57, 0xb4, 0x68, 0xcd, 0x51, 0x52, 0xd1, 0xb3, 0xda, 0xf5,
  0x4f, 0x16, 0xf8, 0x5e, 0xf2, 0xe8, 0xb5, 0x85, 0xfd, 0xb4, 0x71, 0xf4, 0xcc, 0xa6, 0x55, 0x27,
  0xf0, 0x08, 0x6a, 0x3b, 0x5d, 0x67, 0x43, 0x6b, 0x80, 0xd2, 0xf8, 0x96, 0xce, 0x15, 0xed, 0xe5,
  0x2c, 0xce, 0x47, 0xd3, 0xe4, 0x15, 0xe2, 0x2d, 0x21, 0x53, 0xf2, 0x93, 0xf8, 0xd5, 0xbb, 0x69,
  0xb2, 0x52, 0x46, 0xc9, 0x0a, 0x7e, 0x60, 0x3b, 0xd1, 0xcc, 0x9f, 0x40, 0xf6, 0x36, 0x3d, 0x97,
  0x51, 0xf1, 0x06, 0x81, 0x13, 0x01, 0x15, 0xea, 0x6a, 0x28, 0x4e, 0x49, 0x78, 0x98, 0x7f, 0x31,
  0xcd, 0x51, 0x7b, 0xef, 0x01, 0x5e, 0xaf, 0xfc, 0x4e, 0x34, 0x61, 0x1a, 0x37, 0x1e, 0x74, 0x11,
  0x95, 0x20, 0xfa, 0xf0, 0x45, 0x79, 0xbd, 0xc6, 0xa9, 0x27, 0xfa, 0xab, 0x68, 0x52, 0x3f, 0x97,
  0x3b, 0x88, 0xc9, 0xac, 0xa9, 0xae, 0x26, 0x99, 0xb3, 0x2c, 0xce, 0xdf, 0x53, 0x54, 0xda, 0x5b,
  0x12, 0xa9, 0xbb, 0x9d, 0xcf, 0x8d, 0xfc, 0x03, 0xa5, 0xe9, 0x5a, 0x44, 0x7a, 0xf7, 0x87, 0x75,
  0x54, 0xbc, 0xd3, 0xa4, 0x70, 0x86, 0x26, 0x6c, 0xbc, 0x64, 0xf4, 0xfc, 0x2b, 0xce, 0xab, 0x41,
  0x2f, 0x27, 0x16, 0xbf, 0x64, 0x13, 0x49, 0xe4, 0x16, 0xdc, 0x63, 0xdc, 0x76, 0x93, 0xeb, 0x8a,
  0xa2, 0xe3, 0xe7, 0x35, 0x9b, 0x77, 0x36, 0x4a, 0xc1, 0x1b, 0x05, 0x60, 0x4a, 0xe4, 0x7a, 0x54,
  0xdc, 0x12, 0x55, 0x46, 0x3f, 0x0a, 0xaf, 0xe9, 0x56, 0xed, 0x53, 0x7c, 0xc4, 0x12, 0x3e, 0xe9,
  0x3c, 0x9c, 0x54, 0x49, 0xd9, 0x5c, 0xd2, 0x0a, 0xed, 0x22, 0x10, 0xc3, 0x93, 0xef, 0xc7, 0xbd,
  0x39, 0x25, 0x63, 0xc8, 0x0d, 0x9c, 0xf2, 0x69, 0x82, 0x26, 0x73, 0xf2, 0x26, 0xec, 0x75, 0xc0,
  0xab, 0x30, 0x5a, 0xc8, 0x23, 0x24, 0xc6, 0x72, 0x4f, 0xa1, 0xa9, 0xe6, 0xb2, 0x35, 0x54, 0xd3,
  0x76, 0x21, 0xdf, 0xb5, 0xc3, 0xe3, 0x90, 0x73, 0xc8, 0xcd, 0x5a, 0x80, 0x7f, 0xa3, 0x3c, 0x9b,
  0x70, 0x09, 0xf4, 0xc5, 0x11, 0xd8, 0x34, 0xb3, 0x80, 0x41, 0x1b, 0x79, 0x20, 0x83, 0xc8, 0xae,
  0xf5, 0xbe, 0x15, 0xea, 0xb6, 0x9e, 0x13, 0x6d, 0x7a, 0x69, 0xed, 0xfe, 0xcf, 0x2a, 0x09, 0x23,
  0x81, 0x1c, 0xb3, 0x6d, 0x23, 0x20, 0x9e, 0xdf, 0x85, 0x4f, 0xb7, 0x8a, 0x76, 0x65, 0x3c, 0x2c,
  0xda, 0xba, 0x38, 0x85, 0x70, 0x2e, 0x06, 0x55, 0xbf, 0xd5, 0xe7, 0xf4, 0xaa, 0x0d, 0x30, 0xdd,
  0xd1, 0xb8, 0xad, 0x86, 0xb1, 0x71, 0x71, 0xc4, 0x67, 0x2b, 0x16, 0x71, 0x83, 0x58, 0xf3, 0x40,
  0x63, 0xc8, 0x91, 0x4a, 0x67, 0x18, 0x2c, 0x0e, 0x2b, 0x4e, 0x7d, 0x0c, 0xfd, 0x8b, 0x4f, 0x52,
  0x56, 0x21, 0xe6, 0x24, 0x01, 0xc9, 0x24, 0x1c, 0x62, 0xaa, 0xc8, 0x3f, 0x78, 0x6a, 0xdd, 0xc9,
  0x44, 0x96, 0x25, 0x43, 0xc0, 0x5f, 0xeb, 0x55, 0x24, 0xff, 0x00, 0x58, 0x69, 0xa7, 0x75, 0x73,
  0x39, 0xab, 0x4a, 0xc3, 0x2a, 0xf5, 0x90, 0xcc, 0xc3, 0xfd, 0xda, 0xa0, 0x7b, 0x7d, 0x6b, 0x47,
  0x4e, 0x5d, 0xf3, 0xb0, 0xff, 0x00, 0xa6, 0x44, 0xd4, 0xcf, 0xe1, 0x66, 0x94, 0x55, 0xe6, 0x88,
  0xe0, 0x8d, 0xfc, 0xd0, 0x41, 0x23, 0xd0, 0x03, 0xd4, 0xd7, 0x6f, 0xa0, 0xe9, 0xe2, 0xde, 0x09,
  0x27, 0xba, 0xdf, 0x3c, 0xaa, 0x01, 0x31, 0xee, 0xf9, 0x14, 0x9e, 0x80, 0xfb, 0xd6, 0x2e, 0x85,
  0x68, 0x24, 0xb9, 0x12, 0xb2, 0x6e, 0x2a, 0x00, 0x41, 0x8f, 0xe2, 0x27, 0x8f, 0xeb, 0x5e, 0x95,
  0xe1, 0x7d, 0x06, 0x7b, 0xed, 0x22, 0x2b, 0x78, 0xd0, 0x99, 0x67, 0x9f, 0x19, 0x2b, 0xe9, 0xd4,
  0x9a, 0xf3, 0xeb, 0x4b, 0x9d, 0xf2, 0x23, 0xdd, 0xc1, 0xd2, 0x50, 0x5c, 0xf2, 0x3a, 0x3f, 0x01,
  0x68, 0xb3, 0x6a, 0x97, 0xad, 0x3c, 0xf0, 0x42, 0x96, 0x91, 0x30, 0x66, 0x0a, 0x83, 0x04, 0xfa,
  0x53, 0x3c, 0x7d, 0xaf, 0xc3, 0x75, 0x7f, 0x2e, 0x97, 0x6b, 0x14, 0x22, 0xd6, 0xde, 0x26, 0x6c,
  0x85, 0x1f, 0x33, 0x63, 0x3f, 0x95, 0x75, 0xfa, 0xc5, 0xd4, 0x1e, 0x18, 0xd0, 0xe2, 0xd2, 0xac,
  0xce, 0x2e, 0x26, 0x52, 0x19, 0x87, 0x04, 0x0c, 0x72, 0xdf, 0x8e, 0x30, 0x2b, 0xc8, 0x6f, 0x8b,
  0x49, 0xa9, 0x4b, 0x9d, 0xc7, 0x36, 0xb8, 0xfb, 0xb9, 0xc9, 0xf2, 0xc7, 0xf9, 0xc5, 0x12, 0xa7,
  0x4e, 0x9c, 0x5a, 0x4b, 0x52, 0xa9, 0xb9, 0x57, 0x9f, 0xb5, 0x7b, 0x6c, 0xbf, 0xcc, 0xe7, 0xa6,
  0x77, 0x9a, 0xe3, 0x11, 0x11, 0x1b, 0x18, 0x72, 0x3e, 0x50, 0x41, 0xae, 0x63, 0x56, 0x91, 0xfc,
  0xc6, 0x8d, 0x49, 0x6f, 0xba, 0x0f, 0xb1, 0xee, 0x71, 0xdb, 0xbd, 0x75, 0x37, 0x31, 0x3d, 0xbd,
  0xc0, 0xb6, 0x00, 0x19, 0x7c, 0x9f, 0xde, 0x1d, 0xbc, 0x03, 0xd8, 0x7e, 0x15, 0xcd, 0x6a, 0x51,
  0x01, 0x70, 0x5d, 0x94, 0x1d, 0xca, 0x01, 0xc8, 0xab, 0xa5, 0x2d, 0x0c, 0x31, 0x30, 0xd7, 0xfa,
  0xf3, 0x32, 0x6f, 0x4f, 0xfa, 0x4a, 0x60, 0x11, 0xf2, 0x8a, 0x81, 0xfe, 0xf1, 0xab, 0x9a, 0x84,
  0x7b, 0x6e, 0x97, 0x8c, 0x0d, 0xa2, 0xa9, 0xb7, 0xde, 0x35, 0xdd, 0x0d, 0x8f, 0x16, 0xaf, 0xc6,
  0xc8, 0xcf, 0x6f, 0xad, 0x6e, 0x68, 0x51, 0x97, 0xb8, 0x72, 0x33, 0x9f, 0x2c, 0x8f, 0xd0, 0xd6,
  0x21, 0xfe, 0xb5, 0xd0, 0xf8, 0x7f, 0x2a, 0xd3, 0xb0, 0x1c, 0xaa, 0x7f, 0xec, 0xad, 0x59, 0xd6,
  0xf8, 0x19, 0xbe, 0x0d, 0x7e, 0xfa, 0x37, 0x3a, 0x6f, 0x0e, 0xe9, 0x9e, 0x64, 0xe1, 0x76, 0x92,
  0xdb, 0x3c, 0xc5, 0x1e, 0xea, 0x38, 0xfd, 0x48, 0xaf, 0xa1, 0x3c, 0x25, 0xa4, 0x9d, 0x37, 0x48,
  0x86, 0x79, 0xa0, 0x0b, 0x72, 0xd1, 0xe4, 0x28, 0x1c, 0x0c, 0xf3, 0xf8, 0x66, 0xb8, 0x4f, 0x86,
  0x7e, 0x1e, 0x17, 0x13, 0x8d, 0x46, 0x71, 0xb6, 0x0b, 0x78, 0xc7, 0x24, 0xf0, 0x49, 0xc1, 0xc5,
  0x6c, 0xf8, 0x9f, 0xe2, 0x06, 0xef, 0x3e, 0xd7, 0x47, 0x75, 0x61, 0x11, 0x28, 0xec, 0x1b, 0x0c,
  0x7d, 0xc0, 0xf4, 0xfa, 0x57, 0x0c, 0x92, 0x87, 0xbc, 0xde, 0xa7, 0xad, 0x5b, 0x9a, 0xaf, 0xfb,
  0x3d, 0x3f, 0x9b, 0x35, 0xae, 0xfc, 0x2b, 0x35, 0xf6, 0xa1, 0x25, 0xee, 0xa1, 0x7f, 0x0a, 0x48,
  0xe4, 0xe1, 0x47, 0x38, 0x18, 0x23, 0x15, 0x97, 0x37, 0xc3, 0xb0, 0xf2, 0x49, 0x3d, 0x9e, 0xa1,
  0x0b, 0xcf, 0xe5, 0xed, 0x41, 0xd3, 0x1f, 0x28, 0x19, 0xef, 0x5e, 0x73, 0x17, 0x89, 0xae, 0x5a,
  0xfd, 0xcc, 0x92, 0x4c, 0xbc, 0x31, 0x3c, 0xb1, 0x5e, 0x87, 0xda, 0x85, 0xf1, 0x53, 0x45, 0x7c,
  0x5f, 0xcf, 0xb9, 0x25, 0x62, 0xce, 0xdf, 0xba, 0x3e, 0xe8, 0xac, 0xe7, 0x88, 0x6d, 0xdb, 0x94,
  0xe9, 0x8e, 0x1a, 0xa4, 0x56, 0x95, 0x2d, 0xf2, 0x2d, 0xde, 0xf8, 0x5a, 0xfb, 0x4c, 0x5b, 0x9b,
  0x79, 0x2d, 0x99, 0xdf, 0xee, 0xbc, 0xca, 0x77, 0x2f, 0x03, 0x38, 0xdd, 0xdb, 0xde, 0xb8, 0x4d,
  0x66, 0xd5, 0xd2, 0x57, 0x1c, 0xe5, 0x80, 0x6c, 0x67, 0x1c, 0x7f, 0x9c, 0xfe, 0x55, 0xee, 0x3e,
  0x0e, 0xf1, 0x31, 0x92, 0xc5, 0xed, 0x75, 0x88, 0xe2, 0x16, 0xce, 0x37, 0x48, 0xd2, 0x30, 0x2d,
  0x96, 0xf5, 0x1e, 0x9d, 0xbf, 0x0a, 0xe4, 0xfe, 0x26, 0x78, 0x3d, 0x34, 0xc9, 0x4d, 0xf5, 0xa9,
  0x2d, 0x69, 0x72, 0xa3, 0x61, 0x03, 0x3b, 0x48, 0xe7, 0x1f, 0x4a, 0x54, 0x13, 0x6a, 0xed, 0xeb,
  0xff, 0x00, 0x0c, 0x67, 0x52, 0xa5, 0xe5, 0xec, 0xe4, 0xb5, 0xe9, 0xe7, 0xfd, 0x76, 0x3c, 0x73,
  0x59, 0x2e, 0x2f, 0x76, 0x13, 0xc0, 0x51, 0xda, 0xb2, 0xdb, 0xef, 0x1a, 0xd4, 0xd7, 0x72, 0x35,
  0x69, 0x01, 0xe4, 0x85, 0x5e, 0x87, 0xdb, 0x3f, 0xd6, 0xb3, 0x19, 0x49, 0x63, 0xc5, 0x7a, 0xb4,
  0xfe, 0x14, 0x78, 0x15, 0xd7, 0xef, 0x25, 0xea, 0x46, 0x41, 0x2a, 0x71, 0xea, 0x2b, 0xa2, 0xf0,
  0xeb, 0x65, 0xae, 0xb3, 0xff, 0x00, 0x3c, 0xcf, 0x5f, 0xf7, 0x5a, 0xb9, 0xc2, 0xc4, 0x2e, 0x01,
  0xea, 0x79, 0xad, 0x8d, 0x22, 0x5f, 0x2c, 0x5d, 0x1f, 0xfa, 0x67, 0xfe, 0x23, 0xfa, 0xd4, 0xd5,
  0xf8, 0x59, 0xa6, 0x15, 0xda, 0xa4, 0x4f, 0xa7, 0x2c, 0x91, 0xec, 0xbe, 0x19, 0xa2, 0xdb, 0x49,
  0xe5, 0xc9, 0x24, 0x5b, 0x8b, 0x70, 0x39, 0x6e, 0x07, 0xf2, 0xaf, 0x1b, 0xba, 0x85, 0xad, 0x77,
  0xef, 0x78, 0xde, 0x70, 0xd8, 0x39, 0x61, 0x85, 0xff, 0x00, 0xeb, 0xd7, 0xac, 0x78, 0x16, 0xf6,
  0x1f, 0x12, 0x78, 0x19, 0xf4, 0xf5, 0x75, 0x13, 0xa2, 0x6d, 0x42, 0x7b, 0x1e, 0xab, 0xfa, 0xe6,
  0xbc, 0xab, 0x5e, 0xd2, 0xe7, 0xb2, 0xba, 0xb8, 0x8e, 0xe2, 0x31, 0x1c, 0xbe, 0x69, 0xde, 0xac,
  0x08, 0xc3, 0x77, 0xfc, 0x3b, 0xd7, 0x9b, 0x15, 0x39, 0x73, 0x27, 0xdf, 0xfa, 0xff, 0x00, 0x3f,
  0x99, 0xed, 0x50, 0x94, 0x54, 0xa5, 0xde, 0xf7, 0xf9, 0x3d, 0x8a, 0xd0, 0x4d, 0x72, 0xd2, 0xb2,
  0xb4, 0xc1, 0x87, 0xcd, 0xdc, 0x1e, 0xc6, 0x95, 0x8c, 0xb2, 0xde, 0x7d, 0x98, 0xb6, 0xe0, 0xca,
  0x18, 0xa8, 0x03, 0xb0, 0x18, 0xcf, 0xe3, 0x54, 0xec, 0x10, 0x1b, 0xc6, 0x52, 0x53, 0x84, 0x90,
  0xf7, 0xec, 0xa6, 0xa7, 0xb6, 0x65, 0x92, 0x59, 0x6e, 0x54, 0xe1, 0xe5, 0x8d, 0x8c, 0x63, 0xd1,
  0x54, 0x63, 0x35, 0x8f, 0x2d, 0xa4, 0x76, 0xf3, 0x5e, 0x26, 0xad, 0xbc, 0x33, 0x25, 0xcc, 0x10,
  0x41, 0x2a, 0x14, 0xda, 0x5e, 0x4c, 0xb0, 0xf9, 0x9f, 0xa7, 0x4f, 0x6c, 0xd7, 0xa9, 0xeb, 0x10,
  0xfd, 0xab, 0xe1, 0xa5, 0xed, 0xbc, 0xed, 0xbc, 0x5a, 0x46, 0x0c, 0x52, 0x1e, 0xf8, 0x00, 0x7f,
  0x88, 0xaf, 0x36, 0xf0, 0xc5, 0x84, 0xb2, 0x6a, 0xf6, 0x73, 0xa4, 0x22, 0x43, 0x18, 0xc2, 0x28,
  0x27, 0xe6, 0x73, 0xf7, 0x47, 0xf5, 0xfc, 0x2b, 0xd0, 0xbe, 0x21, 0x5d, 0xc3, 0xe1, 0xff, 0x00,
  0x01, 0xbe, 0x9e, 0xae, 0xbe, 0x7c, 0xaa, 0x10, 0x80, 0x7d, 0xf2, 0x4f, 0xe7, 0x81, 0x5a, 0xbe,
  0x75, 0x28, 0x45, 0x77, 0xfe, 0xbf, 0xcc, 0xe0, 0xaf, 0x25, 0x75, 0xeb, 0x7f, 0x92, 0xdf, 0xfc,
  0x8f, 0x9d, 0x7c, 0x46, 0x81, 0x35, 0x86, 0x18, 0xeb, 0x1a, 0x9f, 0xd2, 0xb1, 0x9b, 0xef, 0x1a,
  0xd6, 0xd7, 0x64, 0x12, 0xea, 0x79, 0x1f, 0xf3, 0xcd, 0x47, 0xe9, 0x59, 0x4e, 0x30, 0xe6, 0xbd,
  0x5a, 0x5f, 0x02, 0x3c, 0x5c, 0x4d, 0xbd, 0xac, 0xad, 0xdc, 0x8b, 0x8c, 0x56, 0x96, 0x96, 0xc3,
  0xcf, 0x95, 0x59, 0x88, 0x0d, 0x13, 0x74, 0xf6, 0xe4, 0x56, 0x68, 0xc6, 0x0e, 0x6a, 0xcc, 0x12,
  0x08, 0xd8, 0xb1, 0xee, 0xa4, 0x75, 0xf5, 0xa2, 0xa2, 0xbc, 0x5a, 0x26, 0x84, 0xb9, 0x66, 0x9b,
  0x3d, 0x03, 0xc1, 0xfe, 0x28, 0x9f, 0x48, 0x58, 0xd6, 0xda, 0x78, 0xe2, 0x61, 0x26, 0xe7, 0xdf,
  0x20, 0x5e, 0xc3, 0x1d, 0x7f, 0x1a, 0xf6, 0x41, 0xa8, 0x78, 0x6f, 0xc7, 0x16, 0x4b, 0x1e, 0xa5,
  0x24, 0x16, 0xd7, 0xe0, 0x05, 0x12, 0x24, 0xaa, 0x4e, 0x7f, 0xad, 0x7c, 0xc1, 0x0c, 0xc8, 0xcd,
  0x86, 0x76, 0x5e, 0x3a, 0xa8, 0xab, 0x91, 0x6a, 0x72, 0xc0, 0xa5, 0x04, 0x8e, 0xdb, 0x5b, 0x01,
  0xb3, 0xd4, 0x57, 0x23, 0xa4, 0xf9, 0xb9, 0x93, 0xb3, 0x3d, 0x37, 0x5e, 0x32, 0x4a, 0xfd, 0x36,
  0x68, 0xf6, 0xed, 0x4b, 0xe1, 0x93, 0xdb, 0x5d, 0x43, 0x1d, 0xbe, 0xa9, 0x0c, 0xab, 0x76, 0xed,
  0x12, 0x7c, 0xfb, 0x5b, 0x05, 0x49, 0x63, 0x8f, 0xa0, 0x35, 0xa7, 0x6d, 0xf0, 0xb5, 0xd6, 0xfe,
  0x49, 0xa6, 0xba, 0x86, 0xde, 0xd8, 0xc6, 0x63, 0x45, 0x0f, 0xb8, 0xaa, 0xe0, 0x01, 0x5e, 0x03,
  0x37, 0x89, 0x75, 0x29, 0x1d, 0x50, 0x5d, 0x48, 0x00, 0x0c, 0xb9, 0x2d, 0xd1, 0x58, 0x60, 0x8f,
  0xc6, 0xaf, 0x7f, 0xc2, 0x71, 0xe2, 0x0b, 0x83, 0xe5, 0x5d, 0x6a, 0x73, 0xcd, 0x19, 0xc0, 0xe5,
  0xb9, 0xc0, 0xe0, 0x0a, 0x85, 0x42, 0xaf, 0x3b, 0x93, 0xb7, 0xf5, 0xe5, 0xff, 0x00, 0x04, 0xa7,
  0x8c, 0xb2, 0x51, 0x52, 0xf9, 0xdb, 0xfe, 0x09, 0xf4, 0x3b, 0xdf, 0x78, 0x7b, 0xc1, 0xf6, 0xe1,
  0x2c, 0xe4, 0x8a, 0xe2, 0xf2, 0x35, 0x20, 0x13, 0x22, 0xe5, 0x7d, 0x4f, 0xb5, 0x78, 0x8f, 0x8b,
  0xfc, 0x45, 0x79, 0xae, 0x5e, 0xdd, 0xcd, 0x77, 0x30, 0x65, 0xf9, 0x42, 0x00, 0xd9, 0x0a, 0x33,
  0xed, 0x59, 0x31, 0x5f, 0xcb, 0x7b, 0x7e, 0xb1, 0xef, 0xc2, 0xb2, 0x1d, 0xcc, 0xc7, 0x1f, 0x9d,
  0x67, 0x6e, 0x51, 0x6b, 0x70, 0x0b, 0x64, 0xee, 0x5e, 0x45, 0x69, 0x0a, 0x1c, 0x8f, 0x9a, 0xf7,
  0x66, 0x13, 0xaf, 0x1b, 0x3f, 0xcd, 0xff, 0x00, 0x5b, 0x14, 0x6f, 0x5f, 0x7d, 0xfc, 0x87, 0x39,
  0xc9, 0xeb, 0x55, 0x64, 0xff, 0x00, 0x58, 0x69, 0xf2, 0xb6, 0x67, 0x2c, 0x73, 0xc9, 0xcf, 0x34,
  0xc9, 0x39, 0x90, 0xd7, 0x64, 0x3e, 0x14, 0x79, 0xd5, 0x5d, 0xe6, 0xd9, 0x0f, 0x7a, 0x9b, 0x6e,
  0x10, 0x12, 0xca, 0x33, 0x50, 0x0a, 0x91, 0xbe, 0xed, 0x0d, 0x09, 0x3b, 0x12, 0xc3, 0x0b, 0x3c,
  0x9b, 0x51, 0x90, 0xb1, 0xed, 0x9a, 0x92, 0x48, 0x25, 0x8d, 0x98, 0x36, 0xc1, 0xcf, 0x42, 0x6a,
  0x9b, 0x12, 0xb2, 0x06, 0x1d, 0x85, 0x3c, 0xb4, 0x92, 0x1e, 0xf9, 0xe2, 0xa3, 0x95, 0xdc, 0xd3,
  0xda, 0x2b, 0x6c, 0x4f, 0x0d, 0x8c, 0xb7, 0x37, 0x01, 0x01, 0x55, 0x07, 0xf8, 0x89, 0xe2, 0xac,
  0x4f, 0xa5, 0x4d, 0x65, 0x2a, 0x0f, 0x32, 0x37, 0xdd, 0xcf, 0x06, 0xb3, 0xa2, 0x7d, 0xb2, 0x03,
  0xce, 0x00, 0xfd, 0x6a, 0x51, 0x3b, 0xcf, 0x39, 0x2e, 0x4f, 0x1d, 0x32, 0x6a, 0xac, 0xc5, 0xcd,
  0x1d, 0xec, 0x6a, 0x5a, 0x79, 0x89, 0xa8, 0x47, 0x90, 0xa7, 0x2b, 0x8d, 0xb9, 0xa8, 0xe5, 0x59,
  0x61, 0x86, 0xe6, 0x39, 0x14, 0x26, 0x70, 0x70, 0x7b, 0x73, 0x4d, 0xd3, 0xdd, 0x9b, 0x53, 0x88,
  0x6d, 0x0d, 0xc5, 0x5c, 0xd4, 0x13, 0x6c, 0x77, 0x5b, 0xa3, 0x2a, 0x77, 0x2e, 0x01, 0x39, 0x38,
  0xab, 0x50, 0x7c, 0xb7, 0x32, 0x9d, 0x55, 0x7b, 0x58, 0xc6, 0x11, 0xbc, 0x99, 0x60, 0x06, 0x07,
  0x7a, 0x6b, 0xfd, 0xf3, 0x52, 0xa3, 0x36, 0x42, 0xe7, 0x82, 0x6a, 0x39, 0x3f, 0xd6, 0x35, 0x24,
  0x82, 0x4e, 0xec, 0x8a, 0x35, 0x2e, 0x48, 0x1d, 0x71, 0x9a, 0x90, 0xa6, 0x48, 0x52, 0x40, 0xcd,
  0x45, 0x1b, 0x15, 0x6c, 0x8e, 0xe3, 0x15, 0x22, 0xca, 0x78, 0x52, 0x83, 0xae, 0x72, 0x4f, 0x5a,
  0x43, 0xb1, 0x0b, 0x2b, 0x17, 0x39, 0x07, 0xd2, 0xac, 0x40, 0x5b, 0x71, 0x24, 0x74, 0xfc, 0x3a,
  0x54, 0xcb, 0xb5, 0x9d, 0x89, 0x00, 0x00, 0x38, 0x02, 0x9d, 0x12, 0xee, 0x05, 0x57, 0x07, 0xb9,
  0x14, 0x5c, 0x2c, 0x54, 0x74, 0x6d, 0xc5, 0xb6, 0xe1, 0x4f, 0x4a, 0x6a, 0x2b, 0x87, 0x63, 0xb7,
  0x8f, 0x5a, 0xd0, 0x44, 0x65, 0x67, 0x0d, 0x8c, 0x30, 0xc5, 0x3d, 0x23, 0x41, 0x32, 0x9f, 0x94,
  0xa9, 0x18, 0x22, 0x98, 0x8d, 0x3f, 0x05, 0xd8, 0xc7, 0x7d, 0xe2, 0x18, 0xa3, 0x95, 0x8a, 0x9c,
  0x1d, 0xa0, 0x90, 0x01, 0x38, 0x3c, 0x12, 0x7a, 0x55, 0x4d, 0x6e, 0xf2, 0x6b, 0xab, 0xd9, 0xa4,
  0x10, 0x18, 0x62, 0x62, 0x14, 0xa6, 0x73, 0xc8, 0xe3, 0x39, 0xfc, 0x2a, 0x7b, 0x24, 0x5f, 0xb6,
  0x46, 0xb1, 0x4e, 0xb6, 0xdc, 0x80, 0xd2, 0x37, 0x18, 0xf7, 0xaa, 0xba, 0x90, 0x52, 0xfb, 0x91,
  0xd9, 0xd3, 0x18, 0xdd, 0xd7, 0x24, 0x75, 0xad, 0x1c, 0xbd, 0xcb, 0x19, 0x24, 0x9c, 0xee, 0x67,
  0xa9, 0xf9, 0x85, 0x47, 0x21, 0xfd, 0xe3, 0x52, 0x8c, 0xee, 0xa4, 0x93, 0xef, 0x9a, 0xcd, 0x1a,
  0xb2, 0xbd, 0x4b, 0x19, 0x0c, 0x70, 0x71, 0x9f, 0x7a, 0x84, 0xd1, 0x40, 0xcb, 0x68, 0xbb, 0x49,
  0x05, 0x73, 0xf4, 0x34, 0x98, 0xc0, 0xe3, 0x39, 0xaa, 0xf1, 0xf4, 0x3f, 0x5a, 0x91, 0x49, 0xf2,
  0x24, 0xe7, 0xb8, 0xa9, 0xb0, 0xee, 0x4b, 0xf3, 0x11, 0xd0, 0x93, 0xf5, 0xa1, 0x43, 0x06, 0xf9,
  0x81, 0x1f, 0x53, 0x4c, 0x52, 0x7c, 0x86, 0x39, 0x39, 0xe3, 0x9a, 0x58, 0x98, 0x98, 0xa4, 0x24,
  0x92, 0x42, 0xf1, 0x9e, 0xdc, 0xd1, 0x60, 0xbe, 0xa4, 0xcd, 0xf7, 0x3a, 0x1c, 0xfa, 0xe6, 0x9a,
  0xec, 0x71, 0xb7, 0x9c, 0x75, 0xc6, 0x6a, 0xb1, 0x66, 0x31, 0x49, 0x92, 0x4e, 0x31, 0x8e, 0x69,
  0xdf, 0xf2, 0xcd, 0x3e, 0x94, 0xc5, 0x7d, 0x07, 0xee, 0x0b, 0xee, 0x69, 0x94, 0x94, 0xb4, 0xc4,
  0x7f, 0xff, 0xd9
};
