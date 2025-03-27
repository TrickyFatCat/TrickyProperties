// MIT License Copyright (c) Artyom "Tricky Fat Cat" Volkov

#pragma once

#include "CoreMinimal.h"
#include "TrickyPropertyInt.generated.h"

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
