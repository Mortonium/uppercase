cmake_minimum_required (VERSION 2.6)

add_definitions(-std=c++11 -stdlib=libc++)

project (uppercase)

add_executable(uppercase-app
	src/main.cpp
	)
