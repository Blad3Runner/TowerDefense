#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "TD_EconomySet.generated.h"
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
UCLASS()
class TOWERDEFENSE_API UTD_EconomySet : public UAttributeSet
{
	GENERATED_BODY()
public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	UPROPERTY(ReplicatedUsing = OnRep_Reward, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData Reward = 0.f;
	ATTRIBUTE_ACCESSORS(UTD_EconomySet, Reward);
	UPROPERTY(ReplicatedUsing = OnRep_Cost, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData Cost = 0.f;
	ATTRIBUTE_ACCESSORS(UTD_EconomySet, Cost);
	UPROPERTY(ReplicatedUsing = OnRep_SellValue, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData SellValue = 0.f;
	ATTRIBUTE_ACCESSORS(UTD_EconomySet, SellValue);
	UPROPERTY(ReplicatedUsing = OnRep_Currency, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData Currency = 0.f;
	ATTRIBUTE_ACCESSORS(UTD_EconomySet, Currency);
	UFUNCTION()
	void OnRep_Reward(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Cost(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_SellValue(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Currency(const FGameplayAttributeData& OldValue);
};