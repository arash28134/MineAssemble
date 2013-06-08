//
// Texture images (16x16 palette coloured, light and dark versions)
//

#include <stdint.h>

uint8_t texGrass[] = {
	0x03, 0x05, 0x07, 0x09, 0x0B, 0x0D, 0x0E, 0x10, 0x0E, 0x05,
	0x0D, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1A, 0x1C, 0x1E, 0x20,
	0x22, 0x24, 0x25, 0x27, 0x29, 0x2B, 0x2D, 0x2F, 0x31, 0x33,
	0x34, 0x35, 0x37, 0x38, 0x3A, 0x24, 0x3B, 0x22, 0x38, 0x3C,
	0x3D, 0x1E, 0x3F, 0x41, 0x42, 0x44, 0x22, 0x46, 0x48, 0x4A,
	0x4B, 0x4D, 0x4E, 0x38, 0x24, 0x41, 0x50, 0x10, 0x52, 0x34,
	0x4B, 0x54, 0x56, 0x57, 0x48, 0x59, 0x4B, 0x4D, 0x2F, 0x4B,
	0x4E, 0x41, 0x33, 0x41, 0x4B, 0x24, 0x5A, 0x42, 0x50, 0x5C,
	0x18, 0x5E, 0x5F, 0x60, 0x61, 0x5A, 0x22, 0x42, 0x22, 0x29,
	0x63, 0x4E, 0x4E, 0x65, 0x2F, 0x67, 0x69, 0x65, 0x4E, 0x42,
	0x6A, 0x24, 0x4B, 0x31, 0x50, 0x2F, 0x24, 0x41, 0x22, 0x22,
	0x24, 0x3B, 0x18, 0x5E, 0x4E, 0x6C, 0x2F, 0x38, 0x42, 0x22,
	0x38, 0x6E, 0x59, 0x4B, 0x56, 0x6F, 0x31, 0x70, 0x72, 0x22,
	0x41, 0x22, 0x63, 0x73, 0x5E, 0x60, 0x74, 0x41, 0x6F, 0x31,
	0x75, 0x38, 0x4B, 0x05, 0x77, 0x78, 0x79, 0x22, 0x56, 0x7A,
	0x7A, 0x2F, 0x7C, 0x24, 0x22, 0x41, 0x1C, 0x7E, 0x3F, 0x80,
	0x18, 0x34, 0x7C, 0x1C, 0x42, 0x4B, 0x63, 0x41, 0x22, 0x4D,
	0x82, 0x7A, 0x4B, 0x2F, 0x84, 0x0E, 0x85, 0x1C, 0x50, 0x31,
	0x34, 0x4B, 0x33, 0x4B, 0x4E, 0x87, 0x4E, 0x56, 0x42, 0x84,
	0x7A, 0x09, 0x48, 0x5E, 0x22, 0x41, 0x33, 0x42, 0x41, 0x1C,
	0x4B, 0x4D, 0x7A, 0x42, 0x29, 0x89, 0x33, 0x69, 0x69, 0x22,
	0x44, 0x5F, 0x65, 0x22, 0x34, 0x38, 0x4A, 0x61, 0x41, 0x6C,
	0x38, 0x73, 0x25, 0x05, 0x8A, 0x5E, 0x22, 0x4B, 0x5F, 0x4E,
	0x5A, 0x22, 0x42, 0x41, 0x8B, 0x56, 0x56, 0x34, 0x24, 0x10,
	0x8C, 0x4D, 0x70, 0x73, 0x10, 0x05, 0x8E, 0x07, 0x0E, 0x09,
	0x10, 0x69, 0x0E, 0x90, 0x91, 0x03,

	0x04, 0x06, 0x08, 0x0A, 0x0C, 0x0C, 0x0F, 0x11, 0x0F, 0x06,
	0x0C, 0x11, 0x13, 0x15, 0x17, 0x19, 0x1B, 0x1D, 0x1F, 0x21,
	0x23, 0x11, 0x26, 0x28, 0x2A, 0x2C, 0x2E, 0x30, 0x32, 0x0C,
	0x0C, 0x36, 0x0C, 0x39, 0x1F, 0x11, 0x0C, 0x23, 0x39, 0x39,
	0x3E, 0x1F, 0x40, 0x1D, 0x43, 0x45, 0x23, 0x47, 0x49, 0x11,
	0x4C, 0x47, 0x4F, 0x39, 0x11, 0x1D, 0x51, 0x11, 0x53, 0x0C,
	0x4C, 0x55, 0x45, 0x58, 0x49, 0x11, 0x4C, 0x47, 0x30, 0x4C,
	0x4F, 0x1D, 0x0C, 0x1D, 0x4C, 0x11, 0x5B, 0x43, 0x51, 0x5D,
	0x19, 0x43, 0x4C, 0x5B, 0x62, 0x5B, 0x23, 0x43, 0x23, 0x2A,
	0x64, 0x4F, 0x4F, 0x66, 0x30, 0x68, 0x11, 0x66, 0x4F, 0x43,
	0x6B, 0x11, 0x4C, 0x32, 0x51, 0x30, 0x11, 0x1D, 0x23, 0x23,
	0x11, 0x0C, 0x19, 0x43, 0x4F, 0x6D, 0x30, 0x39, 0x43, 0x23,
	0x39, 0x23, 0x11, 0x4C, 0x45, 0x1F, 0x32, 0x71, 0x04, 0x23,
	0x1D, 0x23, 0x64, 0x11, 0x43, 0x5B, 0x1F, 0x1D, 0x1F, 0x32,
	0x76, 0x39, 0x4C, 0x06, 0x1B, 0x0C, 0x53, 0x23, 0x45, 0x7B,
	0x7B, 0x30, 0x7D, 0x11, 0x23, 0x1D, 0x1D, 0x7F, 0x40, 0x81,
	0x19, 0x0C, 0x7D, 0x1D, 0x43, 0x4C, 0x64, 0x1D, 0x23, 0x47,
	0x83, 0x7B, 0x4C, 0x30, 0x5B, 0x0F, 0x86, 0x1D, 0x51, 0x32,
	0x0C, 0x4C, 0x0C, 0x4C, 0x4F, 0x88, 0x4F, 0x45, 0x43, 0x5B,
	0x7B, 0x0A, 0x49, 0x43, 0x23, 0x1D, 0x0C, 0x43, 0x1D, 0x1D,
	0x4C, 0x47, 0x7B, 0x43, 0x2A, 0x40, 0x0C, 0x11, 0x11, 0x23,
	0x45, 0x4C, 0x66, 0x23, 0x0C, 0x39, 0x11, 0x62, 0x1D, 0x6D,
	0x39, 0x11, 0x26, 0x06, 0x0A, 0x43, 0x23, 0x4C, 0x4C, 0x4F,
	0x5B, 0x23, 0x43, 0x1D, 0x4C, 0x45, 0x45, 0x0C, 0x11, 0x11,
	0x8D, 0x47, 0x71, 0x11, 0x11, 0x06, 0x8F, 0x08, 0x0F, 0x0A,
	0x11, 0x11, 0x0F, 0x1F, 0x92, 0x04
};

uint8_t texDirt[] = {
	0x93, 0x95, 0x93, 0x97, 0x97, 0x95, 0x93, 0x95, 0x97, 0x95,
	0x95, 0x97, 0x95, 0x95, 0x97, 0x97, 0x97, 0x97, 0x95, 0x99,
	0x95, 0x9B, 0x95, 0x95, 0x95, 0x97, 0x97, 0x95, 0x9B, 0x97,
	0x95, 0x95, 0x97, 0x9B, 0x95, 0x93, 0x97, 0x97, 0x95, 0x93,
	0x95, 0x9B, 0x95, 0x95, 0x97, 0x95, 0x9B, 0x93, 0x95, 0x95,
	0x9B, 0x95, 0x93, 0x97, 0x95, 0x93, 0x97, 0x95, 0x93, 0x97,
	0x95, 0x95, 0x93, 0x97, 0x95, 0x95, 0x93, 0x97, 0x9B, 0x95,
	0x9D, 0x97, 0x95, 0x95, 0x93, 0x97, 0x97, 0x9F, 0x95, 0x97,
	0x93, 0x97, 0x95, 0x9B, 0x97, 0x97, 0x95, 0x97, 0x97, 0x9B,
	0x95, 0x93, 0x97, 0x95, 0x9B, 0x95, 0x97, 0x9D, 0x95, 0x95,
	0x95, 0x9B, 0x95, 0x95, 0x95, 0x9B, 0x93, 0x95, 0x93, 0x97,
	0x95, 0x9D, 0x97, 0x9B, 0x95, 0x93, 0x95, 0x9B, 0x93, 0x95,
	0x9B, 0x95, 0x97, 0x97, 0x95, 0x97, 0x9B, 0x95, 0x95, 0x95,
	0x93, 0x97, 0x97, 0x9B, 0x93, 0x97, 0x95, 0x95, 0x9B, 0x99,
	0x95, 0x95, 0x93, 0x97, 0x95, 0x93, 0x95, 0x97, 0x9B, 0x95,
	0x95, 0x9B, 0x97, 0x95, 0x93, 0x97, 0x95, 0x9B, 0x93, 0x97,
	0x9B, 0x97, 0x95, 0x95, 0x95, 0x95, 0x93, 0x97, 0x97, 0x95,
	0x93, 0x97, 0x95, 0x93, 0x95, 0x95, 0x95, 0x95, 0x95, 0x97,
	0x99, 0x9B, 0x93, 0x97, 0x95, 0x95, 0x9B, 0x95, 0x95, 0x9B,
	0x97, 0x95, 0x95, 0x93, 0x9B, 0x95, 0x95, 0x95, 0x95, 0x95,
	0x95, 0x93, 0x97, 0x9B, 0x95, 0x95, 0x95, 0x97, 0x93, 0x97,
	0x9B, 0x93, 0x97, 0x95, 0x97, 0x95, 0x95, 0x93, 0x97, 0x97,
	0x95, 0x93, 0x95, 0x97, 0x95, 0x9B, 0x93, 0x97, 0x9B, 0x95,
	0x95, 0x97, 0x9B, 0x95, 0x9D, 0x95, 0x93, 0x97, 0x97, 0x95,
	0x93, 0x9B, 0x95, 0x95, 0x95, 0x93, 0x97, 0x97, 0x95, 0x97,
	0x95, 0x9B, 0x93, 0x97, 0x97, 0x9B,

	0x94, 0x96, 0x94, 0x98, 0x98, 0x96, 0x94, 0x96, 0x98, 0x96,
	0x96, 0x98, 0x96, 0x96, 0x98, 0x98, 0x98, 0x98, 0x96, 0x9A,
	0x96, 0x9C, 0x96, 0x96, 0x96, 0x98, 0x98, 0x96, 0x9C, 0x98,
	0x96, 0x96, 0x98, 0x9C, 0x96, 0x94, 0x98, 0x98, 0x96, 0x94,
	0x96, 0x9C, 0x96, 0x96, 0x98, 0x96, 0x9C, 0x94, 0x96, 0x96,
	0x9C, 0x96, 0x94, 0x98, 0x96, 0x94, 0x98, 0x96, 0x94, 0x98,
	0x96, 0x96, 0x94, 0x98, 0x96, 0x96, 0x94, 0x98, 0x9C, 0x96,
	0x9E, 0x98, 0x96, 0x96, 0x94, 0x98, 0x98, 0xA0, 0x96, 0x98,
	0x94, 0x98, 0x96, 0x9C, 0x98, 0x98, 0x96, 0x98, 0x98, 0x9C,
	0x96, 0x94, 0x98, 0x96, 0x9C, 0x96, 0x98, 0x9E, 0x96, 0x96,
	0x96, 0x9C, 0x96, 0x96, 0x96, 0x9C, 0x94, 0x96, 0x94, 0x98,
	0x96, 0x9E, 0x98, 0x9C, 0x96, 0x94, 0x96, 0x9C, 0x94, 0x96,
	0x9C, 0x96, 0x98, 0x98, 0x96, 0x98, 0x9C, 0x96, 0x96, 0x96,
	0x94, 0x98, 0x98, 0x9C, 0x94, 0x98, 0x96, 0x96, 0x9C, 0x9A,
	0x96, 0x96, 0x94, 0x98, 0x96, 0x94, 0x96, 0x98, 0x9C, 0x96,
	0x96, 0x9C, 0x98, 0x96, 0x94, 0x98, 0x96, 0x9C, 0x94, 0x98,
	0x9C, 0x98, 0x96, 0x96, 0x96, 0x96, 0x94, 0x98, 0x98, 0x96,
	0x94, 0x98, 0x96, 0x94, 0x96, 0x96, 0x96, 0x96, 0x96, 0x98,
	0x9A, 0x9C, 0x94, 0x98, 0x96, 0x96, 0x9C, 0x96, 0x96, 0x9C,
	0x98, 0x96, 0x96, 0x94, 0x9C, 0x96, 0x96, 0x96, 0x96, 0x96,
	0x96, 0x94, 0x98, 0x9C, 0x96, 0x96, 0x96, 0x98, 0x94, 0x98,
	0x9C, 0x94, 0x98, 0x96, 0x98, 0x96, 0x96, 0x94, 0x98, 0x98,
	0x96, 0x94, 0x96, 0x98, 0x96, 0x9C, 0x94, 0x98, 0x9C, 0x96,
	0x96, 0x98, 0x9C, 0x96, 0x9E, 0x96, 0x94, 0x98, 0x98, 0x96,
	0x94, 0x9C, 0x96, 0x96, 0x96, 0x94, 0x98, 0x98, 0x96, 0x98,
	0x96, 0x9C, 0x94, 0x98, 0x98, 0x9C
};

uint8_t texGrassSide[] = {
	0xA1, 0x27, 0xA3, 0x9B, 0x97, 0x95, 0x93, 0x95, 0x97, 0x95,
	0x95, 0x97, 0x95, 0x95, 0x97, 0x97, 0x0E, 0xA4, 0x9B, 0x99,
	0x95, 0x9B, 0x95, 0x95, 0x95, 0x97, 0x97, 0x95, 0x9B, 0x97,
	0x95, 0x95, 0xA1, 0xA5, 0xA7, 0x9B, 0x97, 0x97, 0x95, 0x93,
	0x95, 0x9B, 0x95, 0x95, 0x97, 0x95, 0x9B, 0x93, 0xA8, 0xAA,
	0xAC, 0x9B, 0x93, 0x97, 0x95, 0x93, 0x97, 0x95, 0x93, 0x97,
	0x95, 0x95, 0x93, 0x97, 0xA8, 0xAE, 0xB0, 0x09, 0x9B, 0x95,
	0x9D, 0x97, 0x95, 0x95, 0x93, 0x97, 0x97, 0x9F, 0x95, 0x97,
	0xB1, 0x9B, 0x9B, 0x9B, 0x97, 0x97, 0x95, 0x97, 0x97, 0x9B,
	0x95, 0x93, 0x97, 0x95, 0x9B, 0x95, 0xB2, 0xB0, 0x6E, 0x9B,
	0x95, 0x9B, 0x95, 0x95, 0x95, 0x9B, 0x93, 0x95, 0x93, 0x97,
	0x95, 0x9D, 0xA4, 0xB3, 0x9B, 0x9B, 0x95, 0x9B, 0x93, 0x95,
	0x9B, 0x95, 0x97, 0x97, 0x95, 0x97, 0x9B, 0x95, 0x10, 0xB2,
	0xA1, 0xB2, 0x9B, 0x9B, 0x93, 0x97, 0x95, 0x95, 0x9B, 0x99,
	0x95, 0x95, 0x93, 0x97, 0x0E, 0xB5, 0xB7, 0x9B, 0x9B, 0x95,
	0x95, 0x9B, 0x97, 0x95, 0x93, 0x97, 0x95, 0x9B, 0x93, 0x97,
	0xB0, 0xB8, 0xB9, 0xB1, 0x9B, 0x95, 0x93, 0x97, 0x97, 0x95,
	0x93, 0x97, 0x95, 0x93, 0x95, 0x95, 0x57, 0xA1, 0xBA, 0x9B,
	0x99, 0x9B, 0x93, 0x97, 0x95, 0x95, 0x9B, 0x95, 0x95, 0x9B,
	0x97, 0x95, 0xB0, 0xBC, 0x9B, 0x95, 0x95, 0x95, 0x95, 0x95,
	0x95, 0x93, 0x97, 0x9B, 0x95, 0x95, 0x95, 0x97, 0xBC, 0xA4,
	0xBD, 0x9B, 0x97, 0x95, 0x97, 0x95, 0x95, 0x93, 0x97, 0x97,
	0x95, 0x93, 0x95, 0x97, 0xBF, 0x57, 0xB2, 0x9B, 0x9B, 0x95,
	0x95, 0x97, 0x9B, 0x95, 0x9D, 0x95, 0x93, 0x97, 0x97, 0x95,
	0xB1, 0xC1, 0x9B, 0x95, 0x95, 0x93, 0x97, 0x97, 0x95, 0x97,
	0x95, 0x9B, 0x93, 0x97, 0x97, 0x9B,

	0xA2, 0x28, 0x8F, 0x9C, 0x98, 0x96, 0x94, 0x96, 0x98, 0x96,
	0x96, 0x98, 0x96, 0x96, 0x98, 0x98, 0x0F, 0x23, 0x9C, 0x9A,
	0x96, 0x9C, 0x96, 0x96, 0x96, 0x98, 0x98, 0x96, 0x9C, 0x98,
	0x96, 0x96, 0xA2, 0xA6, 0x08, 0x9C, 0x98, 0x98, 0x96, 0x94,
	0x96, 0x9C, 0x96, 0x96, 0x98, 0x96, 0x9C, 0x94, 0xA9, 0xAB,
	0xAD, 0x9C, 0x94, 0x98, 0x96, 0x94, 0x98, 0x96, 0x94, 0x98,
	0x96, 0x96, 0x94, 0x98, 0xA9, 0xAF, 0x66, 0x0A, 0x9C, 0x96,
	0x9E, 0x98, 0x96, 0x96, 0x94, 0x98, 0x98, 0xA0, 0x96, 0x98,
	0x23, 0x9C, 0x9C, 0x9C, 0x98, 0x98, 0x96, 0x98, 0x98, 0x9C,
	0x96, 0x94, 0x98, 0x96, 0x9C, 0x96, 0x55, 0x66, 0x23, 0x9C,
	0x96, 0x9C, 0x96, 0x96, 0x96, 0x9C, 0x94, 0x96, 0x94, 0x98,
	0x96, 0x9E, 0x23, 0xB4, 0x9C, 0x9C, 0x96, 0x9C, 0x94, 0x96,
	0x9C, 0x96, 0x98, 0x98, 0x96, 0x98, 0x9C, 0x96, 0x11, 0x55,
	0xA2, 0x55, 0x9C, 0x9C, 0x94, 0x98, 0x96, 0x96, 0x9C, 0x9A,
	0x96, 0x96, 0x94, 0x98, 0x0F, 0xB6, 0x11, 0x9C, 0x9C, 0x96,
	0x96, 0x9C, 0x98, 0x96, 0x94, 0x98, 0x96, 0x9C, 0x94, 0x98,
	0x66, 0x8F, 0x8F, 0x23, 0x9C, 0x96, 0x94, 0x98, 0x98, 0x96,
	0x94, 0x98, 0x96, 0x94, 0x96, 0x96, 0x58, 0xA2, 0xBB, 0x9C,
	0x9A, 0x9C, 0x94, 0x98, 0x96, 0x96, 0x9C, 0x96, 0x96, 0x9C,
	0x98, 0x96, 0x66, 0x55, 0x9C, 0x96, 0x96, 0x96, 0x96, 0x96,
	0x96, 0x94, 0x98, 0x9C, 0x96, 0x96, 0x96, 0x98, 0x55, 0x23,
	0xBE, 0x9C, 0x98, 0x96, 0x98, 0x96, 0x96, 0x94, 0x98, 0x98,
	0x96, 0x94, 0x96, 0x98, 0xC0, 0x58, 0x55, 0x9C, 0x9C, 0x96,
	0x96, 0x98, 0x9C, 0x96, 0x9E, 0x96, 0x94, 0x98, 0x98, 0x96,
	0x23, 0x23, 0x9C, 0x96, 0x96, 0x94, 0x98, 0x98, 0x96, 0x98,
	0x96, 0x9C, 0x94, 0x98, 0x98, 0x9C
};