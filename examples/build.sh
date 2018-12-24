#! /usr/bin/env bash

g++ \
  -I "../src" \
  -I "../contrib/epee/include" \
  -I "../contrib/epee/src" \
  -I "../external/easylogging++" \
  -I "../external/boost" \
  -lboost_system \
  -o examples \
  main.cpp
