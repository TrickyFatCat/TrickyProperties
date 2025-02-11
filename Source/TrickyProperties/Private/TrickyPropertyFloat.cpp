// MIT License Copyright (c) Artyom "Tricky Fat Cat" Volkov


#include "TrickyPropertyFloat.h"

bool FTrickyPropertyFloat::IncreaseMinValue(const float Amount)
{
	if (Amount <= 0.f)
	{
		return false;
	}

	MinValue += Amount;
	return true;
}

bool FTrickyPropertyFloat::DecreaseMinValue(const float Amount)
{
	if (Amount <= 0.f)
	{
		return false;
	}
	
	MinValue -= Amount;
	return true;
}

bool FTrickyPropertyFloat::IncreaseValue(const float Amount)
{
	if (Amount <= 0.f)
	{
		return false;
	}

	Value += Amount;
	return true;
}

bool FTrickyPropertyFloat::DecreaseValue(const float Amount)
{
	if (Amount <= 0.f)
	{
		return false;
	}

	Value -= Amount;
	return true;
}

bool FTrickyPropertyFloat::IncreaseMaxValue(const float Amount)
{
	if (Amount <= 0.f)
	{
		return false;
	}

	MaxValue += Amount;
	return true;
}

bool FTrickyPropertyFloat::DecreaseMaxValue(const float Amount)
{
	if (Amount <= 0.f)
	{
		return false;
	}

	MaxValue -= Amount;
	return true;
}

void FTrickyPropertyFloat::ClampToMin()
{
	Value = FMath::Max(Value, MinValue);
}

void FTrickyPropertyFloat::ClampToMax()
{
	Value = FMath::Min(Value, MaxValue);
}

float FTrickyPropertyFloat::GetNormalizedValue() const
{
	return MaxValue > 0.f ? Value / MaxValue : 0.f;
}

bool FTrickyPropertyFloat::ReachedMinValue() const
{
	return Value <= MinValue;
}

bool FTrickyPropertyFloat::ReachedMaxValue() const
{
	return Value >= MaxValue;
}
