class cfgPatches
{
  class A3M_Gendarmerie
  {
    units[]=
    {
      "A3M_Gendarmerie_Officer_SMG",
      "A3M_Gendarmerie_Pilot",
      "A3M_Gendarmerie_Officer_Pistol",
      "A3M_Gendarmerie_SWAT_Rifle",
      "A3M_Gendarmerie_SWAT_SMG",
      "A3M_Gendarmerie_SWAT_Marksman",
      "A3M_Gendarmerie_SWAT_Pistol",
      "A3M_Gendarmerie_Commander",
      "A3M_Gendarmerie_Offroad",
      "A3M_Gendarmerie_Offroad_Comms",
      "A3M_Gendarmerie_Offroad_Covered",
      "A3M_Gendarmerie_Van_Cargo",
      "A3M_Gendarmerie_Van_Transport",
      "A3M_Gendarmerie_MH6_Little_bird",
      "A3M_Gendarmerie_Ka60_Kasatka"
      };
    weapons[]=
    {
      "A3M_SMG_05_F",
      "A3M_hgun_P07_F",
      "A3M_hgun_P07_blk_F",
      "A3M_arifle_SPAR_01_blk_F_muzzle_snds_Macc_flashlightoptic_Holosight_blk_F",
      "A3M_SMG_02_F_muzzle_snds_lacc_flashlightoptic_Holosight_blk_F",
      "A3M_srifle_DMR_03_F_muzzle_snds_Bacc_flashlightoptic_KHS_blkbipod_01_F_blk",
      "A3M_hgun_ACPC2_F_muzzle_snds_acpacc_flashlight_pistol",
      "A3M_SMG_03C_black"
    };
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "A3_Weapons_F_Items",
      "A3_Weapons_F",
      "A3_Weapons_F_Exp_SMGs_SMG_05",
      "A3_Weapons_F_Pistols_P07",
      "A3_Missions_F_Oldman",
      "A3_Characters_F_Exp_Vests",
      "A3_Characters_F_Exp_Headgear",
      "A3_Weapons_F_Exp",
      "A3_Characters_F",
      "ace_medical_treatment",
      "ace_captives",
      "ace_hearing",
      "A3_Weapons_F_Exp_Rifles_SPAR_01",
      "A3_Characters_F_Orange_Headgear",
      "A3_Weapons_F_SMGs_SMG_02",
      "A3_Weapons_F_Mark_LongRangeRifles_DMR_03",
      "A3_Weapons_F_Pistols_ACPC2",
      "A3_Weapons_F_Mod_SMGs_SMG_03"
    };
  };
};

class cfgFactionClasses
{
  class A3M_Gendarmerie
  {
    icon="";
    displayName="Gendarmerie";
    side=0;
    priority=1;
  };
};


class cfgWeapons
{
  class SMG_05_F;
  class hgun_P07_F;
  class hgun_P07_blk_F;
  class arifle_SPAR_01_blk_F;
  class SMG_02_F;
  class srifle_DMR_03_F;
  class hgun_ACPC2_F;
  class SMG_03C_black;

  class A3M_SMG_05_F: SMG_05_F
  {
    displayName="MP5K";
    scope=1;
    class LinkedItems
    {
    };
  };

  class A3M_hgun_P07_F: hgun_P07_F
  {
    displayName="P99";
    scope=1;
    class LinkedItems
    {
    };
  };

  class A3M_hgun_P07_blk_F: hgun_P07_blk_F
  {
    displayName="P99 (Black)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class A3M_arifle_SPAR_01_blk_F_muzzle_snds_Macc_flashlightoptic_Holosight_blk_F: arifle_SPAR_01_blk_F
  {
    displayName="HK416A5 11' (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_M";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Holosight_blk_F";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
    };
  };

  class A3M_SMG_02_F_muzzle_snds_lacc_flashlightoptic_Holosight_blk_F: SMG_02_F
  {
    displayName="Scorpion Evo 3 A1";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_l";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Holosight_blk_F";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
    };
  };

  class A3M_srifle_DMR_03_F_muzzle_snds_Bacc_flashlightoptic_KHS_blkbipod_01_F_blk: srifle_DMR_03_F
  {
    displayName="SIG 556 (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_B";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_KHS_blk";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="bipod_01_F_blk";
      };
    };
  };

  class A3M_hgun_ACPC2_F_muzzle_snds_acpacc_flashlight_pistol: hgun_ACPC2_F
  {
    displayName="Custom Covert II";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_acp";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight_pistol";
      };
    };
  };

  class A3M_SMG_03C_black: SMG_03C_black
  {
    displayName="P90 (Black)";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class O_GEN_Soldier_F;
  class B_AssaultPack_blk;
  class O_GEN_Commander_F;

  class A3M_Gendarmerie_Officer_SMG: O_GEN_Soldier_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    faction="OPF_GEN_F";
    side=0;
    displayName="Gendarmerie Lieutenant (SMG)";
    editorSubcategory = "EdSubcat_Personnel";
    uniformClass="U_O_GEN_Soldier_F";
    weapons[]={"A3M_SMG_05_F","A3M_hgun_P07_F","Put","Throw"};
    respawnWeapons[]={"A3M_SMG_05_F","A3M_hgun_P07_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
    respawnMagazines[]={"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_MilCap_gen_F","V_TacVest_gen_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_MilCap_gen_F","V_TacVest_gen_F"};
    backpack="";
  };

  class A3M_Gendarmerie_Pilot: O_GEN_Soldier_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    faction="OPF_GEN_F";
    side=0;
    displayName="Gendarmerie Pilot";
    editorSubcategory = "EdSubcat_Personnel";
    uniformClass="U_O_GEN_Soldier_F";
    weapons[]={"A3M_hgun_P07_blk_F","Put","Throw"};
    respawnWeapons[]={"A3M_hgun_P07_blk_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetHeli_B","V_TacVest_gen_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetHeli_B","V_TacVest_gen_F"};
    backpack="";
  };

  class A3M_Gendarmerie_Officer_Pistol: O_GEN_Soldier_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    faction="OPF_GEN_F";
    side=0;
    displayName="Gendarmerie Officer (Pistol)";
    editorSubcategory = "EdSubcat_Personnel";
    uniformClass="U_O_GEN_Soldier_F";
    weapons[]={"A3M_hgun_P07_blk_F","Put","Throw"};
    respawnWeapons[]={"A3M_hgun_P07_blk_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","16Rnd_9x21_Mag"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","16Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_MilCap_gen_F","V_TacVest_gen_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_MilCap_gen_F","V_TacVest_gen_F"};
    backpack="";
  };

  class A3M_Gendarmerie_SWAT_Rifle: O_GEN_Soldier_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    faction="OPF_GEN_F";
    side=0;
    displayName="Gendarmerie SWAT (Rifle)";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
    uniformClass="U_O_GEN_Soldier_F";
    weapons[]={"A3M_arifle_SPAR_01_blk_F_muzzle_snds_Macc_flashlightoptic_Holosight_blk_F","A3M_hgun_P07_blk_F","Put","Throw"};
    respawnWeapons[]={"A3M_arifle_SPAR_01_blk_F_muzzle_snds_Macc_flashlightoptic_Holosight_blk_F","A3M_hgun_P07_blk_F","Put","Throw"};
    items[]={"FirstAidKit","ACE_fieldDressing","ACE_fieldDressing","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine"};
    respawnItems[]={"FirstAidKit","ACE_fieldDressing","ACE_fieldDressing","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ACE_M84"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ACE_M84"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PASGT_basic_black_F","V_PlateCarrierGL_blk","G_Balaclava_combat"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PASGT_basic_black_F","V_PlateCarrierGL_blk","G_Balaclava_combat"};
    backpack="A3M_Gendarmerie_SWAT_Rifle_pack";
  };

  class A3M_Gendarmerie_SWAT_SMG: O_GEN_Soldier_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    faction="OPF_GEN_F";
    side=0;
    displayName="Gendarmerie SWAT (SMG)";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
    uniformClass="U_O_GEN_Soldier_F";
    weapons[]={"A3M_SMG_02_F_muzzle_snds_lacc_flashlightoptic_Holosight_blk_F","A3M_hgun_P07_blk_F","Put","Throw"};
    respawnWeapons[]={"A3M_SMG_02_F_muzzle_snds_lacc_flashlightoptic_Holosight_blk_F","A3M_hgun_P07_blk_F","Put","Throw"};
    items[]={"FirstAidKit","ACE_fieldDressing","ACE_fieldDressing","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine"};
    respawnItems[]={"FirstAidKit","ACE_fieldDressing","ACE_fieldDressing","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ACE_M84","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ACE_M84","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PASGT_basic_black_F","V_PlateCarrierGL_blk","G_Balaclava_combat"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PASGT_basic_black_F","V_PlateCarrierGL_blk","G_Balaclava_combat"};
    backpack="A3M_Gendarmerie_SWAT_SMG_pack";
  };

  class A3M_Gendarmerie_SWAT_Marksman: O_GEN_Soldier_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    faction="OPF_GEN_F";
    side=0;
    displayName="Gendarmerie SWAT (Marksman)";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
    uniformClass="U_O_GEN_Soldier_F";
    weapons[]={"A3M_srifle_DMR_03_F_muzzle_snds_Bacc_flashlightoptic_KHS_blkbipod_01_F_blk","A3M_hgun_P07_blk_F","Put","Throw"};
    respawnWeapons[]={"A3M_srifle_DMR_03_F_muzzle_snds_Bacc_flashlightoptic_KHS_blkbipod_01_F_blk","A3M_hgun_P07_blk_F","Put","Throw"};
    items[]={"FirstAidKit","ACE_fieldDressing","ACE_fieldDressing","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine"};
    respawnItems[]={"FirstAidKit","ACE_fieldDressing","ACE_fieldDressing","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ACE_M84","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ACE_M84","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_PlateCarrierGL_blk","G_Balaclava_blk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_PlateCarrierGL_blk","G_Balaclava_blk"};
    backpack="A3M_Gendarmerie_SWAT_Marksman_pack";
  };

  class A3M_Gendarmerie_SWAT_Pistol: O_GEN_Soldier_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    faction="OPF_GEN_F";
    side=0;
    displayName="Gendarmerie SWAT (Pistol)";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
    uniformClass="U_O_GEN_Soldier_F";
    weapons[]={"A3M_hgun_ACPC2_F_muzzle_snds_acpacc_flashlight_pistol","Put","Throw"};
    respawnWeapons[]={"A3M_hgun_ACPC2_F_muzzle_snds_acpacc_flashlight_pistol","Put","Throw"};
    items[]={"FirstAidKit","ACE_fieldDressing","ACE_fieldDressing","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine"};
    respawnItems[]={"FirstAidKit","ACE_fieldDressing","ACE_fieldDressing","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","ACE_M84","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","ACE_M84","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PASGT_basic_black_F","V_PlateCarrierGL_blk","G_Balaclava_combat"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PASGT_basic_black_F","V_PlateCarrierGL_blk","G_Balaclava_combat"};
    backpack="A3M_Gendarmerie_SWAT_Pistol_pack";
  };

  class A3M_Gendarmerie_Commander: O_GEN_Commander_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    faction="OPF_GEN_F";
    side=0;
    displayName="Gendarmerie Commander";
    editorSubcategory = "EdSubcat_Personnel";
    uniformClass="U_O_GEN_Commander_F";
    weapons[]={"Binocular","A3M_SMG_03C_black","A3M_hgun_P07_F","Put","Throw"};
    respawnWeapons[]={"Binocular","A3M_SMG_03C_black","A3M_hgun_P07_F","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellYellow","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};
    respawnMagazines[]={"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellYellow","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","H_Beret_gen_F","V_TacVest_gen_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","H_Beret_gen_F","V_TacVest_gen_F"};
    backpack="";
  };

  class B_GEN_Offroad_01_gen_F;
  class B_GEN_Offroad_01_comms_F;
  class B_GEN_Offroad_01_covered_F;
  class B_GEN_Van_02_vehicle_F;
  class B_GEN_Van_02_transport_F;
  class B_Heli_Light_01_F;
  class O_Heli_Light_02_unarmed_F;

  class A3M_Gendarmerie_Offroad: B_GEN_Offroad_01_gen_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    faction="OPF_GEN_F";
    side=0;
    displayName="Gendarmerie Offroad";
    editorSubcategory = "EdSubcat_Cars";
    hiddenSelectionsTextures[]=
    {
    "a3\soft_f_exp\offroad_01\data\offroad_01_ext_gen_co.paa",
    "a3\soft_f_exp\offroad_01\data\offroad_01_ext_gen_co.paa"
    };
    crew="A3M_Gendarmerie_SWAT_Pistol";
    typicalCargo[]={"A3M_Gendarmerie_SWAT_Pistol"};
  };

  class A3M_Gendarmerie_Offroad_Comms: B_GEN_Offroad_01_comms_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    faction="OPF_GEN_F";
    side=0;
    displayName="Gendarmerie Offroad (Comms)";
    editorSubcategory = "EdSubcat_Cars";
    hiddenSelectionsTextures[]=
    {
    "a3\soft_f_exp\offroad_01\data\offroad_01_ext_gen_co.paa",
    "a3\soft_f_exp\offroad_01\data\offroad_01_ext_gen_co.paa",
    "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_gen_co.paa"
    };
    crew="A3M_Gendarmerie_SWAT_Pistol";
    typicalCargo[]={"A3M_Gendarmerie_SWAT_Pistol"};
  };

  class A3M_Gendarmerie_Offroad_Covered: B_GEN_Offroad_01_covered_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    faction="OPF_GEN_F";
    side=0;
    displayName="Gendarmerie Offroad (Covered)";
    hiddenSelectionsTextures[]=
    {
    "a3\soft_f_exp\offroad_01\data\offroad_01_ext_gen_co.paa",
    "a3\soft_f_exp\offroad_01\data\offroad_01_ext_gen_co.paa",
    "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_gen_co.paa"
    };
    crew="A3M_Gendarmerie_SWAT_Pistol";
    typicalCargo[]={"A3M_Gendarmerie_SWAT_Pistol"};
  };

  class A3M_Gendarmerie_Van_Cargo: B_GEN_Van_02_vehicle_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    faction="OPF_GEN_F";
    side=0;
    displayName="Gendarmerie Van (Cargo)";
    editorSubcategory = "EdSubcat_Cars";
    hiddenSelectionsTextures[]=
    {
    "a3\soft_f_orange\van_02\data\van_body_gen_co.paa",
    "a3\soft_f_orange\van_02\data\van_wheel_co.paa",
    "a3\soft_f_orange\van_02\data\van_glass_gen_ca.paa",
    "a3\soft_f_orange\van_02\data\van_body_gen_co.paa"
    };
    crew="A3M_Gendarmerie_SWAT_Pistol";
    typicalCargo[]={"A3M_Gendarmerie_SWAT_Pistol"};
  };

  class A3M_Gendarmerie_Van_Transport: B_GEN_Van_02_transport_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    faction="OPF_GEN_F";
    side=0;
    displayName="Gendarmerie Van (Transport)";
    editorSubcategory = "EdSubcat_Cars";
    hiddenSelectionsTextures[]=
    {
    "a3\soft_f_orange\van_02\data\van_body_gen_co.paa",
    "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
    "a3\soft_f_orange\van_02\data\van_glass_gen_ca.paa",
    "a3\soft_f_orange\van_02\data\van_body_gen_co.paa"
    };
    crew="A3M_Gendarmerie_SWAT_Pistol";
    typicalCargo[]={"A3M_Gendarmerie_SWAT_Pistol"};
  };

  class A3M_Gendarmerie_MH6_Little_bird: B_Heli_Light_01_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    faction="OPF_GEN_F";
    side=0;
    displayName="Gendarmerie MH-6 Little bird";
    editorSubcategory = "EdSubcat_Helicopters";
    hiddenSelectionsTextures[]=
    {
    "a3\air_f\heli_light_01\data\heli_light_01_ext_blufor_co.paa",
    ""
    };
    crew="A3M_Gendarmerie_Pilot";
    typicalCargo[]={"A3M_Gendarmerie_Pilot"};
  };

  class A3M_Gendarmerie_Ka60_Kasatka: O_Heli_Light_02_unarmed_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    faction="OPF_GEN_F";
    side=0;
    displayName="Gendarmerie Ka-60 Kasatka";
    editorSubcategory = "EdSubcat_Helicopters";
    hiddenSelectionsTextures[]=
    {
    "a3\air_f\heli_light_02\data\heli_light_02_ext_co.paa"
    };
    crew="A3M_Gendarmerie_Pilot";
    typicalCargo[]={"A3M_Gendarmerie_Pilot"};
  };


  class A3M_Gendarmerie_SWAT_Rifle_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=2;name="ACE_fieldDressing";};
     class _xx_ACE_CableTie {count=1;name="ACE_CableTie";};
     class _xx_ACE_EarPlugs {count=1;name="ACE_EarPlugs";};
     class _xx_ACE_epinephrine {count=1;name="ACE_epinephrine";};
     class _xx_ACE_morphine {count=2;name="ACE_morphine";};
    };
    class TransportWeapons{};
  };


  class A3M_Gendarmerie_SWAT_SMG_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=2;name="ACE_fieldDressing";};
     class _xx_ACE_CableTie {count=1;name="ACE_CableTie";};
     class _xx_ACE_EarPlugs {count=1;name="ACE_EarPlugs";};
     class _xx_ACE_epinephrine {count=1;name="ACE_epinephrine";};
     class _xx_ACE_morphine {count=2;name="ACE_morphine";};
    };
    class TransportWeapons{};
  };


  class A3M_Gendarmerie_SWAT_Marksman_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=2;name="ACE_fieldDressing";};
     class _xx_ACE_CableTie {count=1;name="ACE_CableTie";};
     class _xx_ACE_EarPlugs {count=1;name="ACE_EarPlugs";};
     class _xx_ACE_epinephrine {count=1;name="ACE_epinephrine";};
     class _xx_ACE_morphine {count=2;name="ACE_morphine";};
    };
    class TransportWeapons{};
  };


  class A3M_Gendarmerie_SWAT_Pistol_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=2;name="ACE_fieldDressing";};
     class _xx_ACE_CableTie {count=1;name="ACE_CableTie";};
     class _xx_ACE_EarPlugs {count=1;name="ACE_EarPlugs";};
     class _xx_ACE_epinephrine {count=1;name="ACE_epinephrine";};
     class _xx_ACE_morphine {count=2;name="ACE_morphine";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
