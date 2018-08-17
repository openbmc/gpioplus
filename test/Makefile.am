@VALGRIND_CHECK_RULES@
@CODE_COVERAGE_RULES@

gtest_cppflags = $(AM_CPPFLAGS) $(GTEST_CFLAGS) $(GMOCK_CFLAGS)
gtest_ldadd = $(GPIOPLUS_LIBS) $(GTEST_LIBS) $(GMOCK_LIBS) -lgmock_main

check_PROGRAMS =
TESTS = $(check_PROGRAMS)

check_PROGRAMS += internal_fd
internal_fd_SOURCES = internal/fd.cpp
internal_fd_CPPFLAGS = $(gtest_cppflags)
internal_fd_LDADD = $(gtest_ldadd)
