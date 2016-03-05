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

#include <argp.h>

void
parse_args(int argc, char **argv)
{
  argp_parse(0, argc, argv, 0, 0, 0);
}
