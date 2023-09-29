#!/bin/bash
filepaths=$(find src -type f \( -name "*.cpp" -or -name "*.hpp" \))
for filepath in $filepaths; do
  clang-format -i "${filepath}"
done