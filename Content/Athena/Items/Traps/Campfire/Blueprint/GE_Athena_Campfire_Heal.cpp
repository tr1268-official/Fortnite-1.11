class UGE_Athena_Campfire_Heal_C : public UGameplayEffect
{
public:
    struct FGameplayEffectModifierMagnitude DurationMagnitude = {
        "ScalableFloatMagnitude": {
            "Value": 1
        }
    };
    struct FScalableFloat Period = {
        "Value": 1
    };
    TArray<struct FGameplayModifierInfo> Modifiers = {
        {
            "Attribute": {
                "AttributeName": "Healing",
                "Attribute": "StructProperty'/Script/FortniteGame.FortHealthSet:Healing'",
                "AttributeOwner": "Class'/Script/FortniteGame.FortHealthSet'"
            },
            "ModifierOp": EGameplayModOp::Additive,
            "Magnitude": {
                "Value": 0,
                "Curve": {
                    "CurveTable": nullptr,
                    "RowName": FName("None")
                }
            },
            "ModifierMagnitude": {
                "MagnitudeCalculationType": EGameplayEffectMagnitudeCalculation::ScalableFloat,
                "ScalableFloatMagnitude": {
                    "Value": 1,
                    "Curve": {
                        "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                        "RowName": FName("Default.CampfireHealPerTick")
                    }
                },
                "AttributeBasedMagnitude": {
                    "Coefficient": {
                        "Value": 1,
                        "Curve": {
                            "CurveTable": nullptr,
                            "RowName": FName("None")
                        }
                    },
                    "PreMultiplyAdditiveValue": {
                        "Value": 0,
                        "Curve": {
                            "CurveTable": nullptr,
                            "RowName": FName("None")
                        }
                    },
                    "PostMultiplyAdditiveValue": {
                        "Value": 0,
                        "Curve": {
                            "CurveTable": nullptr,
                            "RowName": FName("None")
                        }
                    },
                    "BackingAttribute": {
                        "AttributeToCapture": {
                            "AttributeName": "",
                            "Attribute": nullptr,
                            "AttributeOwner": nullptr
                        },
                        "AttributeSource": EGameplayEffectAttributeCaptureSource::Source,
                        "bSnapshot": false
                    },
                    "AttributeCurve": {
                        "CurveTable": nullptr,
                        "RowName": FName("None")
                    },
                    "AttributeCalculationType": EAttributeBasedFloatCalculationType::AttributeMagnitude,
                    "FinalChannel": EGameplayModEvaluationChannel::Channel0,
                    "SourceTagFilter": FGameplayTagContainer({}),
                    "TargetTagFilter": FGameplayTagContainer({})
                },
                "CustomMagnitude": {
                    "CalculationClassMagnitude": nullptr,
                    "Coefficient": {
                        "Value": 0,
                        "Curve": {
                            "CurveTable": nullptr,
                            "RowName": FName("None")
                        }
                    },
                    "PreMultiplyAdditiveValue": {
                        "Value": 0,
                        "Curve": {
                            "CurveTable": nullptr,
                            "RowName": FName("None")
                        }
                    },
                    "PostMultiplyAdditiveValue": {
                        "Value": 0,
                        "Curve": {
                            "CurveTable": nullptr,
                            "RowName": FName("None")
                        }
                    },
                    "FinalLookupCurve": {
                        "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                        "RowName": FName("Default.CampfireHealPerTick")
                    }
                },
                "SetByCallerMagnitude": {
                    "DataName": FName("None"),
                    "DataTag": {
                        "TagName": FName("None")
                    }
                }
            },
            "EvaluationChannelSettings": {
                "Channel": EGameplayModEvaluationChannel::Channel0
            },
            "SourceTags": {
                "RequireTags": FGameplayTagContainer({}),
                "IgnoreTags": FGameplayTagContainer({})
            },
            "TargetTags": {
                "RequireTags": FGameplayTagContainer({}),
                "IgnoreTags": FGameplayTagContainer({})
            }
        }
    };
    TArray<struct FGameplayEffectCue> GameplayCues = {
        {
            "MagnitudeAttribute": {
                "AttributeName": "",
                "Attribute": nullptr,
                "AttributeOwner": nullptr
            },
            "MinLevel": 0,
            "MaxLevel": 0,
            "GameplayCueTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("GameplayCue.Generic.AdrenalineRush.DirectHeal"))
            })
        }
    };
    struct FInheritedTagContainer InheritableOwnedTagsContainer = {
        "CombinedTags": FGameplayTagContainer({
            FGameplayTag::RequestGameplayTag(FName("Athena.Item.Campfire"))
        }),
        "Added": FGameplayTagContainer({
            FGameplayTag::RequestGameplayTag(FName("Athena.Item.Campfire"))
        })
    };
    int32 StackLimitCount = 1;
    enum StackDurationRefreshPolicy = EGameplayEffectStackingDurationPolicy::NeverRefresh;
};