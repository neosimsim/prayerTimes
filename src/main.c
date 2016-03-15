/*
 * This file is part of prayerTimes.
 *
 * prayerTimes is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * prayerTimes is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with prayerTimes. If not, see <http://www.gnu.org/licenses/>.
 */

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "astro.h"
#include "args.h"

int
main (int argc, char **argv)
{
  // Default location: Kaaba in Mecca.
  arg_list.latitude = 21.422510f;
  arg_list.longitude = 39.826295f;
  parse_args(argc, argv);
  printf ("Bismillah al rahman al rahim.\n");
  printf ("latitude %f, longitude %f.\n", arg_list.latitude, arg_list.longitude);

  // Test astro to know it linking etc. work. TODO delete later
  time_t now = time(NULL);
  struct tm *tm_now = localtime(&now);
  const int length = 2 + 1 + 2 + 1 + 4 + 1 + 2 + 1 + 2 + 1 + 3;
  char buffer[length];
  strftime(buffer, length, "%d.%m.%Y %H:%M:%S", tm_now);
  printf ("Julan date for %s is %f\n", buffer, julian_date(tm_now));
  return EXIT_SUCCESS;
}
