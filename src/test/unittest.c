/* Copyright 2011 Nick Mathewson, George Kadianakis
   See LICENSE for other credits and copying information
*/

#include "tinytest.h"
#include "crypt.h"

extern struct testcase_t container_tests[];
extern struct testcase_t crypt_tests[];
extern struct testcase_t socks_tests[];
extern struct testcase_t dummy_tests[];
extern struct testcase_t obfs2_tests[];
extern struct testcase_t managed_tests[];
<<<<<<< HEAD
extern struct testcase_t util_tests[];
=======
>>>>>>> 844a1a38cc6f84f71542003bf10e273f978f2f5e

struct testgroup_t groups[] = {
  { "container/", container_tests },
  { "crypt/", crypt_tests },
  { "socks/", socks_tests },
  { "dummy/", dummy_tests },
  { "obfs2/", obfs2_tests },
  { "managed/", managed_tests },
<<<<<<< HEAD
  { "util/", util_tests },
=======
>>>>>>> 844a1a38cc6f84f71542003bf10e273f978f2f5e
  END_OF_GROUPS
};

int
main(int argc, const char **argv)
{
  int rv;
  initialize_crypto();
  rv = tinytest_main(argc, argv, groups);
  cleanup_crypto();
  return rv;
}
