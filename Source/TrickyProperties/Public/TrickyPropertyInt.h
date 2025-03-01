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

	bool IncreaseMinValue(const int32 Amount = 1.0f);

	bool DecreaseMinValue(const int32 Amount = 1.0f);
	
	bool IncreaseValue(const int32 Amount = 1.0f);

	bool DecreaseValue(const int32 Amount = 1.0f);

	bool IncreaseMaxValue(const int32 Amount = 1.0f);
	
	bool DecreaseMaxValue(const int32 Amount = 1.0f);

	void ClampToMin();

	void ClampToMax();

	void ResetToMin();

	void ResetToMax();
	
	int32 GetNormalizedValue() const;

	bool ReachedMinValue() const;

	bool ReachedMaxValue() const;
};
