# About

**Tricky Properties** is a plugin for rapid prototyping in Unreal Engine 5.

It provides a set of properties for managing numeric data (int and float), especially useful for gameplay mechanics like
health, stamina, armor, etc.

## Features

- **Property Structures**:
    - **Float Properties** (`FTrickyPropertyFloat`).
    - **Int Properties** (`FTrickyPropertyInt`).

- **Calculations**:
    - Increase/Decrease values, min, and max limits.
    - Clamp values to specified minimum or maximum.

- **Blueprint Integration**:
    - All functionalities are fully accessible in Blueprints.
    - Easy-to-use Blueprint utility functions.

## Installation

1. Copy the plugin folder into your project's `Plugins` directory.
2. Open your Unreal Engine project.
3. Enable the **Tricky Properties Plugin** in the plugins menu.
4. Restart the editor.

## Example Use Cases

- **Health System**:
    - Use `FTrickyPropertyFloat` to control HP values with clamping and normalization for progress bars.

- **Ammo/Inventory Counters**:
    - Use `FTrickyPropertyInt` to manage ammo or item stacks with min/max constraints.

## Functions Overview

The **Tricky Properties Library** provides a number of Blueprint utility functions for working with
`FTrickyPropertyFloat` and `FTrickyPropertyInt`.

### Float Property Functions

1. **`IncreaseMinValueFloat`**
    - Increases the minimum value of the float property by a specified amount.
2. **`DecreaseMinValueFloat`**
    - Decreases the minimum value of the float property by a specified amount.
3. **`IncreaseValueFloat`**
    - Increases the current value of the float property by a specified amount.
4. **`DecreaseValueFloat`**
    - Decreases the current value of the float property by a specified amount.
5. **`IncreaseMaxValueFloat`**
    - Increases the maximum value of the float property by a specified amount.
6. **`DecreaseMaxValueFloat`**
    - Decreases the maximum value of the float property by a specified amount.
7. **`ClampToMinFloat`**
    - Clamps the current value to the minimum value.
8. **`ClampToMaxFloat`**
    - Clamps the current value to the maximum value.
9. **`ResetToMinFloat`**
    - Resets the current value to the minimum value.
10. **`ResetToMaxFloat`**
    - Resets the current value to the maximum value.
11. **`GetNormalizedValueFloat`**
    - Returns the normalized value of the float property.
12. **`ReachedMinValueFloat`**
    - Checks if the current value has reached or is below the minimum value.
13. **`ReachedMaxValueFloat`**
    - Checks if the current value has reached or is above the maximum value.

### Int Property Functions

1. **`IncreaseMinValueInt`**
    - Increases the minimum value of the int property by a specified amount.
2. **`DecreaseMinValueInt`**
    - Decreases the minimum value of the int property by a specified amount.
3. **`IncreaseValueInt`**
    - Increases the current value of the int property by a specified amount.
4. **`DecreaseValueInt`**
    - Decreases the current value of the int property by a specified amount.
5. **`IncreaseMaxValueInt`**
    - Increases the maximum value of the int property by a specified amount.
6. **`DecreaseMaxValueInt`**
    - Decreases the maximum value of the int property by a specified amount.
7. **`ClampToMinInt`**
    - Clamps the current value to the minimum value.
8. **`ClampToMaxInt`**
    - Clamps the current value to the maximum value.
9. **`ResetToMinInt`**
    - Resets the current value to the minimum value.
10. **`ResetToMaxInt`**
    - Resets the current value to the maximum value.
11. **`GetNormalizedValueInt`**
    - Returns the normalized value of the int property.
12. **`ReachedMinValueInt`**
    - Checks if the current value is less or equal to the minimum value.
13. **`ReachedMaxValueInt`**
    - Checks if the current value is less or equal to the maximum value.
