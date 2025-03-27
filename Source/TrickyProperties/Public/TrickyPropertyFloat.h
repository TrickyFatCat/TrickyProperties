// MIT License Copyright (c) Artyom "Tricky Fat Cat" Volkov

#pragma once

#include "CoreMinimal.h"
#include "TrickyPropertyFloat.generated.h"

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
