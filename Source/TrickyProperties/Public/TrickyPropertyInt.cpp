// MIT License Copyright (c) Artyom "Tricky Fat Cat" Volkov


#include "TrickyPropertyInt.h"

bool FTrickyPropertyInt::IncreaseMinValue(const int32 Amount)
{
	if (Amount <= 0.f)
	{
		return false;
	}

	MinValue += Amount;
	return true;
}

bool FTrickyPropertyInt::DecreaseMinValue(const int32 Amount)
{
	if (Amount <= 0.f)
	{
		return false;
	}

	MinValue -= Amount;
	return true;
}

bool FTrickyPropertyInt::IncreaseValue(const int32 Amount)
{
	if (Amount <= 0.f)
	{
		return false;
	}

	Value += Amount;
	return true;
}

bool FTrickyPropertyInt::DecreaseValue(const int32 Amount)
{
	if (Amount <= 0.f)
	{
		return false;
	}

	Value -= Amount;
	return true;
}

bool FTrickyPropertyInt::IncreaseMaxValue(const int32 Amount)
{
	if (Amount <= 0.f)
	{
		return false;
	}

	MaxValue += Amount;
	return true;
}

bool FTrickyPropertyInt::DecreaseMaxValue(const int32 Amount)
{
	if (Amount <= 0.f)
	{
		return false;
	}

	MaxValue -= Amount;
	return true;
}

void FTrickyPropertyInt::ClampToMin()
{
	Value = FMath::Max(Value, MinValue);
}

void FTrickyPropertyInt::ClampToMax()
{
	Value = FMath::Min(Value, MaxValue);
}

int32 FTrickyPropertyInt::GetNormalizedValue() const
{
	return MaxValue > 0 ? static_cast<float>(Value) / static_cast<float>(MaxValue) : 0;
}

bool FTrickyPropertyInt::ReachedMinValue() const
{
	return Value <= MinValue;
}

bool FTrickyPropertyInt::ReachedMaxValue() const
{
	return Value >= MaxValue;
}
