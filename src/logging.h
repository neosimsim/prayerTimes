/*
 * Copyright (C) 2016 Ben Nasrallah, Alexander <alexander.nasrallah@posteo.de>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LOGGING_H
#define LOGGING_H

#include <stdio.h>

#define GREEN "\e[3;32m"
#define BLUE "\e[3;34m"
#define RED "\e[3;31m"
#define COLOR_RESET "\e[0m"
#define LOGGING_COLOR BLUE

#ifdef DEBUG
#define logf(...) printf("Logging from file %1$s%3$s%2$s at line %1$s%4$d%2$s:\n", LOGGING_COLOR, COLOR_RESET, __FILE__, __LINE__); printf(__VA_ARGS__)
#else
#define logf(...) // printf(__VA_ARGS__)
#endif

#endif /* LOGGING_H */
