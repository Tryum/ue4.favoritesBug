#pragma once

#include "CoreMinimal.h"

#include "StructB.generated.h"


USTRUCT()
struct FAVORITESBUG_API FStructB
{
	GENERATED_BODY()
public:
	virtual ~FStructB() {}

	UPROPERTY(EditAnywhere)
	float StructBFloat;

	UPROPERTY(EditAnywhere)
	int StructBInt;
};