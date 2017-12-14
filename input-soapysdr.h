/*
 *  input-soapysdr.h
 *  SoapySDR-specific declarations
 *
 *  Copyright (c) 2015-2017 Tomasz Lemiech <szpajder@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <SoapySDR/Device.h>	// SoapySDRDevice
#define SOAPYSDR_DEFAULT_SAMPLE_RATE 2560000
#define SOAPYSDR_BUFSIZE 320000

typedef struct {
	SoapySDRDevice *dev;	// pointer to device struct
	char const *device_string;	// SoapySDR device arg string
	char const *sample_format;	// sample format
	double correction;	// PPM correction
	double gain;		// gain in dB
} soapysdr_dev_data_t;
