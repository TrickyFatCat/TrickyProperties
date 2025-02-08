// MIT License Copyright (c) Artyom "Tricky Fat Cat" Volkov


#pragma once

#include "CoreMinimal.h"
#include "TrickyProperty.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct FTrickyProperty 
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinValue = 0.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value = 100.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
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
		Value = FMath::Max(MinValue, Value);
	}

	void ClampToMax()
	{
		Value = FMath::Min(Value, MaxValue);
	}
	
	float GetNormalizedValue() const
	{
		return MaxValue != 0.0f ? Value / MaxValue : 0.0f;
	}
};