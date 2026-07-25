#include "TD_CombatSet.h"
#include "AbilitySystemGlobals.h"
#include "Net/UnrealNetwork.h"
void UTD_CombatSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_CombatSet, Health, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_CombatSet, Damage, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_CombatSet, Shield, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_CombatSet, ElemMult, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_CombatSet, FireRate, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_CombatSet, BulletSpeed, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_CombatSet, Range, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_CombatSet, HealValue, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_CombatSet, BoostMult, COND_None, REPNOTIFY_Always);
}
void UTD_CombatSet::OnRep_Health(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_CombatSet, Health, OldValue);
}
void UTD_CombatSet::OnRep_Damage(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_CombatSet, Damage, OldValue);
}
void UTD_CombatSet::OnRep_Shield(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_CombatSet, Shield, OldValue);
}
void UTD_CombatSet::OnRep_ElemMult(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_CombatSet, ElemMult, OldValue);
}
void UTD_CombatSet::OnRep_FireRate(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_CombatSet, FireRate, OldValue);
}
void UTD_CombatSet::OnRep_BulletSpeed(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_CombatSet, BulletSpeed, OldValue);
}
void UTD_CombatSet::OnRep_Range(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_CombatSet, Range, OldValue);
}
void UTD_CombatSet::OnRep_HealValue(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_CombatSet, HealValue, OldValue);
}
void UTD_CombatSet::OnRep_BoostMult(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_CombatSet, BoostMult, OldValue);
}