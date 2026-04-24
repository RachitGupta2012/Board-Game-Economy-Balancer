# **Board Game Economy Generator**

A simple C++ tool to help design balanced board game economies.  
It calculates fair property prices so the total value of all properties matches a target economy.

*[Version 1]*
* 24.04.2026 

## Features
* Rarity-based pricing (Common, Uncommon, Rare, Legendary)  
* Automatic balancing of all property prices  
* Ensures total property value matches the target value  
* Calculates starting money for players  
* Calculates bank reserve (40/60 split)  
* Validates property counts  

## How It Works
The program uses weighted multipliers for each rarity.  
Each rarity has a multiplier that controls how expensive it is.

### Step 1: Calculate total weight
`W = sum(multiplier × count)`

### Step 2: Calculate adjustment value
`adjust = target_property_value / W`

### Step 3: Calculate final prices
`price = multiplier × adjust`

This makes sure all properties together equal the target value.

## Tech
* **Language:** C++  
* **Standard:** C++17  
* **Compiler:** GCC or Clang  
* **Built on:** MacOS 26.2, using VS Code
  
* <img width="1710" height="1073" alt="image" src="https://github.com/user-attachments/assets/0335c1f5-c122-4325-b0de-b67b94b436d9" />

This tool is useful for designing Monopoly-style or custom board games.
