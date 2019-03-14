@VALGRIND_CHECK_RULES@

gtest_cppflags = $(AM_CPPFLAGS) $(GTEST_CFLAGS) $(GMOCK_CFLAGS)
gtest_ldadd = $(GPIOPLUS_LIBS) $(GTEST_LIBS) $(GMOCK_LIBS) -lgmock_main

check_PROGRAMS =
TESTS = $(check_PROGRAMS)

check_PROGRAMS += chip
chip_SOURCES = chip.cpp
chip_CPPFLAGS = $(gtest_cppflags)
chip_LDADD = $(gtest_ldadd)

check_PROGRAMS += event
event_SOURCES = event.cpp
event_CPPFLAGS = $(gtest_cppflags)
event_LDADD = $(gtest_ldadd)

check_PROGRAMS += handle
handle_SOURCES = handle.cpp
handle_CPPFLAGS = $(gtest_cppflags)
handle_LDADD = $(gtest_ldadd)

check_PROGRAMS += internal/fd
internal_fd_SOURCES = internal/fd.cpp
internal_fd_CPPFLAGS = $(gtest_cppflags)
internal_fd_LDADD = $(gtest_ldadd)

check_PROGRAMS += mocks
mocks_SOURCES = mocks.cpp
mocks_CPPFLAGS = $(gtest_cppflags)
mocks_LDADD = $(gtest_ldadd)

check_PROGRAMS += utility/aspeed
utility_aspeed_SOURCES = utility/aspeed.cpp
utility_aspeed_CPPFLAGS = $(gtest_cppflags)
utility_aspeed_LDADD = $(gtest_ldadd)
