cmake_minimum_required(VERSION 3.16)
project(MakeList)

set(src_file ${PROJECT_SOURCE_DIR}/List/main.cpp
	${PROJECT_SOURCE_DIR}/List/list.cpp
	${PROJECT_SOURCE_DIR}/List/ListTestCase.cpp)

include_directories (#${PROJECT_SOURCE_DIR}/include
			${PROJECT_SOURCE_DIR}/List
			${PROJECT_SOURCE_DIR}/include/cppunit/extensions)

set(hdrs_file
	List/list.h
	List/ListTestCase.h
	cppunit/BriefTestProgressListener.h
	cppunit/CompilerOutputter.h
	cppunit/extensions/TestFactoryRegistry.h
	cppunit/TestResult.h
	cppunit/TestResultCollector.h
	cppunit/TestRunner.h
	cppunit/extensions/HelperMacros.h)

add_executable(MakeList ${src_file} ${hdrs_file})

