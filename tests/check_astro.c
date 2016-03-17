/*
 * Copyright (C) 2016  Ben Nasrallah, Alexander <alexander.nasrallah@posteo.de>
 *
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

#include <check.h>
#include <stdlib.h>
#include "../src/astro.c"

START_TEST(test_astro_julian_date)
{
}
END_TEST

Suite *
astro_suite(void)
{
  Suite *s;
  TCase *tc_core;

  s = suite_create("Astro");

  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_astro_julian_date);
  suite_add_tcase(s, tc_core);

  return s;
}

int
main(void)
{
  int number_failed;
  Suite *s;
  SRunner *sr;

  s = astro_suite();
  sr = srunner_create(s);

  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
