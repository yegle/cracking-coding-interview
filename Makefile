SRCS:=$(wildcard *.cc)
OBJS:=$(SRCS:.cc=)

CXX := clang++
CXXFLAGS := -std=c++11 -g

all: $(OBJS)
