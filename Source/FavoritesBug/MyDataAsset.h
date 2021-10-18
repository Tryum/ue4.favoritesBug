#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"

#include "StructA.h"
#include "StructB.h"

#include "MyDataAsset.generated.h"

UCLASS(BlueprintType)
class FAVORITESBUG_API UMyAssetData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(Category = Components, EditAnywhere)
	FStructA StructA;

	UPROPERTY(Category = Components, EditAnywhere)
	FStructB StructB;
};