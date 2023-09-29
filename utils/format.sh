#!/bin/bash
filepaths=$(find . -type f \( -name "*.cpp" -or -name "*.hpp" \))
for filepath in $filepaths; do
  clang-format -i "${filepath}"
done