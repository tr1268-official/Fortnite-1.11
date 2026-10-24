class UGE_Map_Athena_Inventory_StartingSize_C : public UGE_Map_Offense_To_WeaponDamage_C
{
public:
    TArray<struct FGameplayModifierInfo> Modifiers = {
        {
            "Attribute": {
                "AttributeName": "WorldInventorySizeBonus",
                "Attribute": "StructProperty'/Script/FortniteGame.FortHomebaseSet:WorldInventorySizeBonus'",
                "AttributeOwner": "Class'/Script/FortniteGame.FortHomebaseSet'"
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
                    "Value": 5,
                    "Curve": {
                        "CurveTable": nullptr,
                        "RowName": FName("None")
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
                            "AttributeName": "Offense",
                            "Attribute": "StructProperty'/Script/FortniteGame.FortCharacterAttrSet:Offense'",
                            "AttributeOwner": "Class'/Script/FortniteGame.FortCharacterAttrSet'"
                        },
                        "AttributeSource": EGameplayEffectAttributeCaptureSource::Source,
                        "bSnapshot": false
                    },
                    "AttributeCurve": {
                        "CurveTable": "CurveTable'FortniteGame/Content/Balance/DataTables/CombatEffects.CombatEffects'",
                        "RowName": FName("Abilities.Generic.1PercentScalar")
                    },
                    "AttributeCalculationType": EAttributeBasedFloatCalculationType::AttributeMagnitude,
                    "FinalChannel": EGameplayModEvaluationChannel::Channel0,
                    "SourceTagFilter": FGameplayTagContainer({}),
                    "TargetTagFilter": FGameplayTagContainer({})
                },
                "CustomMagnitude": {
                    "CalculationClassMagnitude": "Class'/Script/FortniteGame.FromOffenseModMagnitudeCalculation'",
                    "Coefficient": {
                        "Value": 0.01,
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
                        "Value": 1,
                        "Curve": {
                            "CurveTable": nullptr,
                            "RowName": FName("None")
                        }
                    },
                    "FinalLookupCurve": {
                        "CurveTable": nullptr,
                        "RowName": FName("None")
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
};