FILE(GLOB TEST_SOURCES *.cpp)
SET(SOURCE_FILES ${TEST_SOURCES})

ADD_EXECUTABLE(boolean_ops_test ${SOURCE_FILES})
TARGET_LINK_LIBRARIES(boolean_ops_test TKPrim TKBO)
TARGET_LINK_LIBRARIES(boolean_ops_test gcov ${GTEST_LIBRARY} ${GTEST_MAIN_LIBRARY})

GTEST_ADD_TESTS(boolean_ops_test "" ${SOURCE_FILES})
