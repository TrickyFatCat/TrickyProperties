// MIT License Copyright (c) Artyom "Tricky Fat Cat" Volkov

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TrickyPropertiesLibrary.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct FTrickyPropertyFloat
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=TrickyProperty)
	float MinValue = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=TrickyProperty)
	float Value = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=TrickyProperty)
	float MaxValue = 100.0f;

	bool IncreaseMinValue(const float Amount = 1.0f)
	{
		if (Amount <= 0.f)
		{
			return false;
		}

		MinValue += Amount;
		return true;
	}

	bool DecreaseMinValue(const float Amount = 1.0f)
	{
		if (Amount <= 0.f)
		{
			return false;
		}

		MinValue -= Amount;
		return true;
	}

	bool IncreaseValue(const float Amount = 1.0f)
	{
		if (Amount <= 0.f)
		{
			return false;
		}

		Value += Amount;
		return true;
	}

	bool DecreaseValue(const float Amount = 1.0f)
	{
		if (Amount <= 0.f)
		{
			return false;
		}

		Value -= Amount;
		return true;
	}

	bool IncreaseMaxValue(const float Amount = 1.0f)
	{
		if (Amount <= 0.f)
		{
			return false;
		}

		MaxValue += Amount;
		return true;
	}

	bool DecreaseMaxValue(const float Amount = 1.0f)
	{
		if (Amount <= 0.f)
		{
			return false;
		}

		MaxValue -= Amount;
		return true;
	}

	void ClampToMin()
	{
		Value = FMath::Max(Value, MinValue);
	}

	void ClampToMax()
	{
		Value = FMath::Min(Value, MaxValue);
	}

	void ResetToMin()
	{
		Value = MinValue;
	}

	void ResetToMax()
	{
		Value = MaxValue;
	}

	float GetNormalizedValue() const
	{
		return MaxValue > 0.f ? Value / MaxValue : 0.f;
	}

	bool ReachedMinValue() const
	{
		return Value <= MinValue;
	}

	bool ReachedMaxValue() const
	{
		return Value >= MaxValue;
	}
};

USTRUCT(Blueprintable, BlueprintType)
struct FTrickyPropertyInt
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=TrickyProperty)
	int32 MinValue = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=TrickyProperty)
	int32 Value = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=TrickyProperty)
	int32 MaxValue = 100.0f;

	bool IncreaseMinValue(const int32 Amount = 1.0f)
	{
		if (Amount <= 0.f)
		{
			return false;
		}

		MinValue += Amount;
		return true;
	}

	bool DecreaseMinValue(const int32 Amount = 1.0f)
	{
		if (Amount <= 0.f)
		{
			return false;
		}

		MinValue -= Amount;
		return true;
	}

	bool IncreaseValue(const int32 Amount = 1.0f)
	{
		if (Amount <= 0.f)
		{
			return false;
		}

		Value += Amount;
		return true;
	}

	bool DecreaseValue(const int32 Amount = 1.0f)
	{
		if (Amount <= 0.f)
		{
			return false;
		}

		Value -= Amount;
		return true;
	}

	bool IncreaseMaxValue(const int32 Amount = 1.0f)
	{
		if (Amount <= 0.f)
		{
			return false;
		}

		MaxValue += Amount;
		return true;
	}


	bool DecreaseMaxValue(const int32 Amount = 1.0f)
	{
		if (Amount <= 0.f)
		{
			return false;
		}

		MaxValue -= Amount;
		return true;
	}


	void ClampToMin()
	{
		Value = FMath::Max(Value, MinValue);
	}

	void ClampToMax()
	{
		Value = FMath::Min(Value, MaxValue);
	}

	void ResetToMin()
	{
		Value = MinValue;
	}

	void ResetToMax()
	{
		Value = MaxValue;
	}

	int32 GetNormalizedValue() const
	{
		return MaxValue > 0 ? static_cast<float>(Value) / static_cast<float>(MaxValue) : 0;
	}

	bool ReachedMinValue() const
	{
		return Value <= MinValue;
	}

	bool ReachedMaxValue() const
	{
		return Value >= MaxValue;
	}
};

/**
 * A utility blueprint library containing functions for manipulating FTrickyPropertyFloat and FTrickyPropertyInt.
 */

UCLASS()
class TRICKYPROPERTIES_API UTrickyPropertiesLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// TrickyPropertyFloat Functions

	/**
	 * Increases the minimum value of the specified FTrickyPropertyFloat by a given amount.
	 *
	 * @param Property A reference to the FTrickyPropertyFloat instance whose minimum value will be increased.
	 * @param Amount The amount by which to increase the minimum value.
	 * @return True if the minimum value was successfully increased, otherwise false.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool IncreaseMinValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property, const float Amount);

	/**
	 * Decreases the minimum value of the specified FTrickyPropertyFloat by a given amount.
	 *
	 * @param Property A reference to the FTrickyPropertyFloat instance whose minimum value will be decreased.
	 * @param Amount The amount by which to decrease the minimum value.
	 * @return True if the minimum value was successfully decreased, otherwise false.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool DecreaseMinValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property, const float Amount);

	/**
	 * Increases the current value of the specified FTrickyPropertyFloat by a given amount.
	 *
	 * @param Property A reference to the FTrickyPropertyFloat instance whose current value will be increased.
	 * @param Amount The amount by which to increase the current value.
	 * @return True if the current value was successfully increased, otherwise false.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool IncreaseValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property, const float Amount);

	/**
	 * Decreases the current value of the specified FTrickyPropertyFloat by a given amount.
	 *
	 * @param Property A reference to the FTrickyPropertyFloat instance whose current value will be decreased.
	 * @param Amount The amount by which to decrease the current value.
	 * @return True if the value was successfully decreased, otherwise false.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool DecreaseValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property, const float Amount);

	/**
	 * Increases the maximum value of the specified FTrickyPropertyFloat by a given amount.
	 *
	 * @param Property A reference to the FTrickyPropertyFloat instance whose maximum value will be increased.
	 * @param Amount The amount by which to increase the maximum value.
	 * @return True if the maximum value was successfully increased, otherwise false.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool IncreaseMaxValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property, const float Amount);

	/**
	 * Decreases the maximum value of the specified FTrickyPropertyFloat by a given amount.
	 *
	 * @param Property A reference to the FTrickyPropertyFloat instance whose maximum value will be decreased.
	 * @param Amount The amount by which to decrease the maximum value.
	 * @return True if the maximum value was successfully decreased, otherwise false.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool DecreaseMaxValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property, const float Amount);

	/**
	 * Clamps the current value of the given FTrickyPropertyFloat to its minimum value.
	 *
	 * @param Property A reference to the FTrickyPropertyFloat instance to be clamped to its minimum value.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static void ClampToMinFloat(UPARAM(ref) FTrickyPropertyFloat& Property);

	/**
	 * Clamps the current value of the provided FTrickyPropertyFloat instance to its maximum value.
	 *
	 * @param Property A reference to the FTrickyPropertyFloat instance whose value will be clamped.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static void ClampToMaxFloat(UPARAM(ref) FTrickyPropertyFloat& Property);

	/**
	 * Resets the current value of the specified FTrickyPropertyFloat to its minimum value.
	 *
	 * @param Property A reference to the FTrickyPropertyFloat instance.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static void ResetToMinValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property);

	/**
	 * Resets the current value of the specified FTrickyPropertyFloat to its maximum value.
	 *
	 * @param Property A reference to the FTrickyPropertyFloat instance.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static void ResetToMaxValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property);

	/**
	 * Retrieves the normalized value of the specified FTrickyPropertyFloat instance.
	 *
	 * @param Property A constant reference to the FTrickyPropertyFloat instance from which to retrieve the normalized value.
	 * @return The normalized value as a float.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static float GetNormalizedValueFloat(UPARAM(ref) const FTrickyPropertyFloat& Property);

	/**
	 * Determines whether the specified FTrickyPropertyFloat instance has reached its minimum value.
	 *
	 * @param Property A reference to the FTrickyPropertyFloat instance to check.
	 * @return True if the property has reached its minimum value, otherwise false.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static bool ReachedMinValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property);

	/**
	 * Determines whether the current value of the specified FTrickyPropertyFloat has reached its maximum value.
	 *
	 * @param Property A reference to the FTrickyPropertyFloat instance that will be checked.
	 * @return True if the current value has reached or exceeded the maximum value, otherwise false.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static bool ReachedMaxValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property);

	/**
	 * Increases the minimum value of the specified FTrickyPropertyInt by a given amount.
	 *
	 * @param Property A reference to the FTrickyPropertyInt instance whose minimum value will be increased.
	 * @param Amount The amount by which to increase the minimum value.
	 * @return True if the minimum value was successfully increased, otherwise false.
	 */

	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool IncreaseMinValueInt(UPARAM(ref) FTrickyPropertyInt& Property, const int32 Amount);

	/**
	 * Decreases the minimum value of the specified FTrickyPropertyInt by a given amount.
	 *
	 * @param Property A reference to the FTrickyPropertyInt instance whose minimum value will be decreased.
	 * @param Amount The amount by which to decrease the minimum value.
	 * @return True if the minimum value was successfully decreased, otherwise false.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool DecreaseMinValueInt(UPARAM(ref) FTrickyPropertyInt& Property, const int32 Amount);

	/**
	 * Increases the current value of the specified FTrickyPropertyInt by a given amount.
	 *
	 * @param Property A reference to the FTrickyPropertyInt instance whose current value will be increased.
	 * @param Amount The amount to increase the current value by.
	 * @return True if the current value was successfully increased, otherwise false.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool IncreaseValueInt(UPARAM(ref) FTrickyPropertyInt& Property, const int32 Amount);

	/**
	 * Decreases the current value of the specified FTrickyPropertyInt by a given amount.
	 *
	 * @param Property A reference to the FTrickyPropertyInt instance whose value will be decreased.
	 * @param Amount The amount by which to decrease the current value.
	 * @return True if the value was successfully decreased, otherwise false.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool DecreaseValueInt(UPARAM(ref) FTrickyPropertyInt& Property, const int32 Amount);

	/**
	 * Increases the maximum value of the specified FTrickyPropertyInt by a given amount.
	 *
	 * @param Property A reference to the FTrickyPropertyInt instance whose maximum value will be increased.
	 * @param Amount The amount by which to increase the maximum value.
	 * @return True if the maximum value was successfully increased, otherwise false.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool IncreaseMaxValueInt(UPARAM(ref) FTrickyPropertyInt& Property, const int32 Amount);

	/**
	 * Decreases the maximum value of the specified FTrickyPropertyInt by a given amount.
	 *
	 * @param Property A reference to the FTrickyPropertyInt instance whose maximum value will be decreased.
	 * @param Amount The amount by which to decrease the maximum value.
	 * @return True if the maximum value was successfully decreased, otherwise false.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool DecreaseMaxValueInt(UPARAM(ref) FTrickyPropertyInt& Property, const int32 Amount);

	/**
	 * Clamps the current value of the specified FTrickyPropertyInt to its minimum value.
	 *
	 * @param Property A reference to the FTrickyPropertyInt instance to clamp to its minimum value.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static void ClampToMinInt(UPARAM(ref) FTrickyPropertyInt& Property);

	/**
	 * Clamps the current value of the specified FTrickyPropertyInt to its maximum value.
	 *
	 * @param Property A reference to the FTrickyPropertyInt instance to be clamped to its maximum value.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static void ClampToMaxInt(UPARAM(ref) FTrickyPropertyInt& Property);

	/**
	 * Resets the current value of the specified FTrickyPropertyInt to its minimum value.
	 *
	 * @param Property A reference to the FTrickyPropertyInt instance.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static void ResetToMinValueInt(UPARAM(ref) FTrickyPropertyInt& Property);

	/**
	 * Resets the current value of the specified FTrickyPropertyInt to its maximum value.
	 *
	 * @param Property A reference to the FTrickyPropertyInt instance.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static void ResetToMaxValueInt(UPARAM(ref) FTrickyPropertyInt& Property);
	
	/**
	 * Calculates the normalized value of the given FTrickyPropertyInt instance.
	 *
	 * @param Property A reference to the FTrickyPropertyInt instance for which the normalized value is calculated.
	 * @return The calculated normalized value as a float.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static float GetNormalizedValueInt(UPARAM(ref) const FTrickyPropertyInt& Property);

	/**
	 * Determines if the current value of the specified FTrickyPropertyInt has reached its minimum value.
	 *
	 * @param Property A reference to the FTrickyPropertyInt instance to be checked.
	 * @return True if the current value has reached the minimum value, otherwise false.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static bool ReachedMinValueInt(UPARAM(ref) FTrickyPropertyInt& Property);

	/**
	 * Determines whether the specified FTrickyPropertyInt has reached its maximum value.
	 *
	 * @param Property A reference to the FTrickyPropertyInt instance to be checked.
	 * @return True if the current value of the property equals or surpasses its maximum value, otherwise false.
	 */
	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static bool ReachedMaxValueInt(UPARAM(ref) FTrickyPropertyInt& Property);
};
