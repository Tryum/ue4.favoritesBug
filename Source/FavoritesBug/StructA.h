#pragma once

#include "CoreMinimal.h"

#include "StructA.generated.h"


USTRUCT()
struct FAVORITESBUG_API FStructA
{
	GENERATED_BODY()
public:
	virtual ~FStructA() {}

	UPROPERTY(EditAnywhere)
	float StructAFloat;

	UPROPERTY(EditAnywhere)
	int StructAInt;
};