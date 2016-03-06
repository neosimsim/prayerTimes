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

#include <stdio.h>
#include <stdlib.h>
#include "args.h"

static struct argp_option options[] = {
  {"longitude", 'o', "LONGITUDE", 0, "Longitude of your location: Default Kaaba in Mecca"},
  {"latitude", 'l', "LATITUDE", 0, "Latitude of your location: Default Kaaba in Mecca"},
  {NULL}
};

static error_t
parse(int key, char *arg, struct argp_state *state)
{
  struct arguments *args = state->input;
  switch(key)
    {
    case 'l':
      args->latitude = strtof(arg, NULL);
      break;

    case 'o':
      args->longitude = strtof(arg, NULL);
      break;

    default:
      return ARGP_ERR_UNKNOWN;
    }
  return 0;
}

void
parse_args(int argc, char **argv)
{
  int doc_length = 100;
  char *doc = malloc(doc_length);
  snprintf(doc, doc_length, "%s is a programm to calculate the prayer times for locations specified by latitude and longitude.", PACKAGE_NAME);
  struct argp argp = { options, parse, 0, doc};
  argp_program_version = VERSION;
  argp_program_bug_address = PACKAGE_BUGREPORT;
  argp_parse(&argp, argc, argv, 0, 0, &arg_list);
  free(doc);
}
