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

	bool IncreaseMinValue(const float Amount = 1.0f);

	bool DecreaseMinValue(const float Amount = 1.0f);
	
	bool IncreaseValue(const float Amount = 1.0f);

	bool DecreaseValue(const float Amount = 1.0f);

	bool IncreaseMaxValue(const float Amount = 1.0f);
	
	bool DecreaseMaxValue(const float Amount = 1.0f);

	void ClampToMin();

	void ClampToMax();
	
	float GetNormalizedValue() const;

	bool ReachedMinValue() const;

	bool ReachedMaxValue() const;
};
