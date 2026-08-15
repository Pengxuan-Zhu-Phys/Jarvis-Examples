#!/usr/bin/env python3

import json
from random import random

from numpy import cos, sin


with open("input.json", "r", encoding="utf-8") as input_file:
    data = json.load(input_file)

result = {
    "z": (sin(data["xx"]) * cos(data["yy"]) + 2) ** 5,
    "Time": random(),
}

print(f"TestFunction: input is \n{data}\nOutput is \n{result}")

with open("output.json", "w", encoding="utf-8") as output_file:
    json.dump(result, output_file)
