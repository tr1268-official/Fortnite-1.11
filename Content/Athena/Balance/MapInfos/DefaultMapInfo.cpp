class UDefaultMapInfo_C : public UFortAthenaMapInfo
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Balance/MapInfos/DefaultMapInfo.DefaultMapInfo_C:SimpleConstructionScript_0'";
    class UBlueprintGeneratedClass* TreasureChestClass = "BlueprintGeneratedClass'FortniteGame/Content/Building/ActorBlueprints/Containers/Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C'";
    struct FScalableFloat TreasureChestMinSpawnPercent = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.TreasureChest.MinSpawnPercent")
        }
    };
    struct FScalableFloat TreasureChestMaxSpawnPercent = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.TreasureChest.MaxSpawnPercent")
        }
    };
    class UBlueprintGeneratedClass* SupplyDropClass = "BlueprintGeneratedClass'FortniteGame/Content/Athena/SupplyDrops/AthenaSupplyDrop_02.AthenaSupplyDrop_02_C'";
    struct FScalableFloat SupplyDropMinPlacementHeight = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.SupplyDrop.MinPlacementHeight")
        }
    };
    struct FScalableFloat SupplyDropMaxPlacementHeight = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.SupplyDrop.MaxPlacementHeight")
        }
    };
    struct FScalableFloat SupplyDropTimeInterval = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.SupplyDrop.TimeInterval")
        }
    };
    struct FScalableFloat SupplyDropTimeDeviation = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.SupplyDrop.TimeDeviation")
        }
    };
    class UBlueprintGeneratedClass* AircraftClass = "BlueprintGeneratedClass'FortniteGame/Content/Athena/Aircraft/AthenaAircraft.AthenaAircraft_C'";
    struct FBox2D AircraftSpawnZone = bIsValid=1, Min=(X=-150000.000 Y=-150000.000), Max=(X=150000.000 Y=150000.000);
    struct FBox2D AircraftDropZone = bIsValid=1, Min=(X=-80000.000 Y=-80000.000), Max=(X=80000.000 Y=80000.000);
    struct FScalableFloat SkydivingScanForImpactWorldZ = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.Skydiving.ScanForImpactWorldZ")
        }
    };
    struct FScalableFloat SkydivingForceDeployParachuteWorldZ = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.Skydiving.ForceDeployParachuteWorldZ")
        }
    };
    struct FScalableFloat AircraftDeviationAngle = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.Aircraft.DeviationAngle")
        }
    };
    struct FScalableFloat AircraftHeight = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.Aircraft.Height")
        }
    };
    struct FScalableFloat AircraftSpeed = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.Aircraft.Speed")
        }
    };
    struct FScalableFloat SafeZoneStartDelay = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.SafeZone.StartDelay")
        }
    };
    struct FScalableFloat SafeZoneStartingRadius = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.SafeZone.StartingRadius")
        }
    };
    TArray<struct FFortSafeZoneDefinition> SafeZoneDefinitions = {
        {
            "Radius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.00.Radius")
                }
            },
            "RejectRadius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.00.RejectRadius")
                }
            },
            "WaitTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.00.WaitTime")
                }
            },
            "ShrinkTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.00.ShrinkTime")
                }
            },
            "FiftyFiftyWaitTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.00.FiftyFiftyWaitTimeScale")
                }
            },
            "FiftyFiftyShrinkTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.00.FiftyFiftyShrinkTimeScale")
                }
            },
            "SupplyDropMinCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.00.SupplyDropMinCount")
                }
            },
            "SupplyDropMaxCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.00.SupplyDropMaxCount")
                }
            }
        },
        {
            "Radius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.01.Radius")
                }
            },
            "RejectRadius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.01.RejectRadius")
                }
            },
            "WaitTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.01.WaitTime")
                }
            },
            "ShrinkTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.01.ShrinkTime")
                }
            },
            "FiftyFiftyWaitTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.01.FiftyFiftyWaitTimeScale")
                }
            },
            "FiftyFiftyShrinkTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.01.FiftyFiftyShrinkTimeScale")
                }
            },
            "SupplyDropMinCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.01.SupplyDropMinCount")
                }
            },
            "SupplyDropMaxCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.01.SupplyDropMaxCount")
                }
            }
        },
        {
            "Radius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.02.Radius")
                }
            },
            "RejectRadius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.02.RejectRadius")
                }
            },
            "WaitTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.02.WaitTime")
                }
            },
            "ShrinkTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.02.ShrinkTime")
                }
            },
            "FiftyFiftyWaitTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.02.FiftyFiftyWaitTimeScale")
                }
            },
            "FiftyFiftyShrinkTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.02.FiftyFiftyShrinkTimeScale")
                }
            },
            "SupplyDropMinCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.02.SupplyDropMinCount")
                }
            },
            "SupplyDropMaxCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.02.SupplyDropMaxCount")
                }
            }
        },
        {
            "Radius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.03.Radius")
                }
            },
            "RejectRadius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.03.RejectRadius")
                }
            },
            "WaitTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.03.WaitTime")
                }
            },
            "ShrinkTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.03.ShrinkTime")
                }
            },
            "FiftyFiftyWaitTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.03.FiftyFiftyWaitTimeScale")
                }
            },
            "FiftyFiftyShrinkTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.03.FiftyFiftyShrinkTimeScale")
                }
            },
            "SupplyDropMinCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.03.SupplyDropMinCount")
                }
            },
            "SupplyDropMaxCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.03.SupplyDropMaxCount")
                }
            }
        },
        {
            "Radius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.04.Radius")
                }
            },
            "RejectRadius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.04.RejectRadius")
                }
            },
            "WaitTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.04.WaitTime")
                }
            },
            "ShrinkTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.04.ShrinkTime")
                }
            },
            "FiftyFiftyWaitTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.04.FiftyFiftyWaitTimeScale")
                }
            },
            "FiftyFiftyShrinkTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.04.FiftyFiftyShrinkTimeScale")
                }
            },
            "SupplyDropMinCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.04.SupplyDropMinCount")
                }
            },
            "SupplyDropMaxCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.04.SupplyDropMaxCount")
                }
            }
        },
        {
            "Radius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.05.Radius")
                }
            },
            "RejectRadius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.05.RejectRadius")
                }
            },
            "WaitTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.05.WaitTime")
                }
            },
            "ShrinkTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.05.ShrinkTime")
                }
            },
            "FiftyFiftyWaitTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.05.FiftyFiftyWaitTimeScale")
                }
            },
            "FiftyFiftyShrinkTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.05.FiftyFiftyShrinkTimeScale")
                }
            },
            "SupplyDropMinCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.05.SupplyDropMinCount")
                }
            },
            "SupplyDropMaxCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.05.SupplyDropMaxCount")
                }
            }
        },
        {
            "Radius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.06.Radius")
                }
            },
            "RejectRadius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.06.RejectRadius")
                }
            },
            "WaitTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.06.WaitTime")
                }
            },
            "ShrinkTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.06.ShrinkTime")
                }
            },
            "FiftyFiftyWaitTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.06.FiftyFiftyWaitTimeScale")
                }
            },
            "FiftyFiftyShrinkTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.06.FiftyFiftyShrinkTimeScale")
                }
            },
            "SupplyDropMinCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.06.SupplyDropMinCount")
                }
            },
            "SupplyDropMaxCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.06.SupplyDropMaxCount")
                }
            }
        },
        {
            "Radius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.07.Radius")
                }
            },
            "RejectRadius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.07.RejectRadius")
                }
            },
            "WaitTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.07.WaitTime")
                }
            },
            "ShrinkTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.07.ShrinkTime")
                }
            },
            "FiftyFiftyWaitTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.07.FiftyFiftyWaitTimeScale")
                }
            },
            "FiftyFiftyShrinkTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.07.FiftyFiftyShrinkTimeScale")
                }
            },
            "SupplyDropMinCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.07.SupplyDropMinCount")
                }
            },
            "SupplyDropMaxCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.07.SupplyDropMaxCount")
                }
            }
        },
        {
            "Radius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.08.Radius")
                }
            },
            "RejectRadius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.08.RejectRadius")
                }
            },
            "WaitTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.08.WaitTime")
                }
            },
            "ShrinkTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.08.ShrinkTime")
                }
            },
            "FiftyFiftyWaitTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.08.FiftyFiftyWaitTimeScale")
                }
            },
            "FiftyFiftyShrinkTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.08.FiftyFiftyShrinkTimeScale")
                }
            },
            "SupplyDropMinCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.08.SupplyDropMinCount")
                }
            },
            "SupplyDropMaxCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.08.SupplyDropMaxCount")
                }
            }
        },
        {
            "Radius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.09.Radius")
                }
            },
            "RejectRadius": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.09.RejectRadius")
                }
            },
            "WaitTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.09.WaitTime")
                }
            },
            "ShrinkTime": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.09.ShrinkTime")
                }
            },
            "FiftyFiftyWaitTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.09.FiftyFiftyWaitTimeScale")
                }
            },
            "FiftyFiftyShrinkTimePlayerRatioScale": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaFiftyFiftySafeZoneTimeScaling.AthenaFiftyFiftySafeZoneTimeScaling'",
                    "RowName": FName("Default.SafeZone.09.FiftyFiftyShrinkTimeScale")
                }
            },
            "SupplyDropMinCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.09.SupplyDropMinCount")
                }
            },
            "SupplyDropMaxCount": {
                "Value": 1,
                "Curve": {
                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                    "RowName": FName("Default.SafeZone.09.SupplyDropMaxCount")
                }
            }
        }
    };
    class USceneComponent* RootComponent = "SceneComponent'FortniteGame/Content/Athena/Balance/MapInfos/DefaultMapInfo.Default__DefaultMapInfo_C:RootComponent0'";
};