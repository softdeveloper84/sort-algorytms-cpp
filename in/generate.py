#!/usr/bin/env python3
import sys
import random

N = 100
if len(sys.argv) == 2:
    N = int(sys.argv[1])

with open(f"data_{N}.txt", "w") as file:
    for i in random.choices(range(N), k=N):
        file.write(f"{i}\n")
