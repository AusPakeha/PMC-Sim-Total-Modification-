class cfgPatches
{
  class A3M_Cartel
  {
    units[] =
        {
            "A3M_Drug_Lord_Solomon_Maru",
            "A3M_Pilot",
            "A3M_Lieutenant_Enforcer",
            "A3M_Lieutenant_Oppressor",
            "A3M_Falcon_Dealer",
            "A3M_Falcon_Guard",
            "A3M_Falcon_Hireling_Launcher",
            "A3M_Falcon_Scout_Rifle",
            "A3M_Falcon_Smuggler",
            "A3M_Falcon_Snatcher",
            "A3M_Falcon_Thug",
            "A3M_Falcon_Watcher",
            "A3M_Hitman_Deserter",
            "A3M_Hitman_Militiaman",
            "A3M_Hitman_Raider_UGL",
            "A3M_Hitman_Saboteur",
            "A3M_Hitman_Specialist",
            "A3M_Jeep_Wrangler",
            "A3M_Jeep_Wrangler_LMG",
            "A3M_Jeep_Wrangler_SPG9",
            "A3M_Truck",
            "A3M_Van_Cargo",
            "A3M_Van_Transport",
            "A3M_MD500",
            "A3M_Assault_Boat",
            "A3M_RHIB",
            "A3M_M2_HMG_50",
            "A3M_M2_HMG_50_Raised",
            "A3M_MK6_Mortar",
            "A3M_Offroad_AT",
            "A3M_Offroad_HMG",
            "A3M_Offroad", 
            "A3M_MotorBoat"
          };
    weapons[] =
        {
            "A3M_arifle_AK12_F_ACE_muzzle_mzls_Bacc_pointer_IRoptic_Holosight_smg_blk_F",
            "A3M_hgun_Pistol_01_F",
            "A3M_SMG_01_F_ACE_muzzle_mzls_smg_01optic_Holosight_smg_blk_F",
            "A3M_arifle_AK12_GL_F_ACE_muzzle_mzls_Bacc_pointer_IRoptic_Holosight_smg_blk_F",
            "A3M_MMG_02_black_F_acc_pointer_IRoptic_Holosight_smg_blk_Fbipod_01_F_blk",
            "A3M_arifle_AKS_F",
            "A3M_LMG_03_F_ACE_muzzle_mzls_Bacc_pointer_IRoptic_Holosight_smg_blk_F",
            "A3M_launch_RPG7_F",
            "A3M_srifle_DMR_03_F_muzzle_snds_Bacc_pointer_IRoptic_KHS_oldbipod_02_F_blk",
            "A3M_arifle_AKM_F",
            "A3M_arifle_SPAR_01_blk_F_muzzle_snds_Macc_pointer_IRoptic_Holosight_smg_blk_F",
            "A3M_SMG_05_F_muzzle_snds_lacc_pointer_IRoptic_Holosight_smg_blk_F",
            "A3M_arifle_SPAR_01_GL_blk_F_muzzle_snds_Macc_pointer_IRoptic_Holosight_smg_blk_F"
          };
    requiredVersion = 0.1;
    requiredAddons[] =
        {
            "ace_medical_treatment",
            "ace_captives",
            "ace_hearing",
            "ace_explosives",
            "A3_Weapons_F",
            "A3_Weapons_F_Exp_Rifles_AK12",
            "A3_Weapons_F_Exp_Pistols_Pistol_01",
            "A3_Characters_F_Enoch",
            "A3_Characters_F",
            "A3_Characters_F_Orange_Headgear",
            "A3_Characters_F_Exp",
            "A3_Weapons_F_SMGs_SMG_01",
            "A3_Weapons_F_Mark_Machineguns_MMG_02",
            "A3_Weapons_F_Exp_Rifles_AKS",
            "A3_Weapons_F_Exp_Machineguns_LMG_03",
            "A3_Weapons_F_Exp_Launchers_RPG7",
            "A3_Weapons_F_Mark_LongRangeRifles_DMR_03",
            "A3_Weapons_F_Exp_Rifles_AKM",
            "A3_Weapons_F_Items",
            "ace_logistics_wirecutter",
            "A3_Weapons_F_Exp_Rifles_SPAR_01",
            "A3_Characters_F_Exp_Vests",
            "A3_Weapons_F_Exp_SMGs_SMG_05"
          };
  };
};

class cfgFactionClasses
{
  class A3M_Cartel
  {
    icon = "";
    displayName = "APFC Cartel";
    side = 0;
    priority = 1;
  };
};

class cfgWeapons
{
  class arifle_AK12_F;
  class hgun_Pistol_01_F;
  class SMG_01_F;
  class arifle_AK12_GL_F;
  class MMG_02_black_F;
  class arifle_AKS_F;
  class LMG_03_F;
  class launch_RPG7_F;
  class srifle_DMR_03_F;
  class arifle_AKM_F;
  class arifle_SPAR_01_blk_F;
  class SMG_05_F;
  class arifle_SPAR_01_GL_blk_F;

  class A3M_arifle_AK12_F_ACE_muzzle_mzls_Bacc_pointer_IRoptic_Holosight_smg_blk_F : arifle_AK12_F
  {
    displayName = "AK-15";
    scope = 1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot = "MuzzleSlot";
        item = "ACE_muzzle_mzls_B";
      };
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "optic_Holosight_smg_blk_F";
      };
      class LinkedItemsAcc
      {
        slot = "PointerSlot";
        item = "acc_pointer_IR";
      };
    };
  };

  class A3M_hgun_Pistol_01_F : hgun_Pistol_01_F
  {
    displayName = "Makarov PM";
    scope = 1;
    class LinkedItems
    {
    };
  };

  class A3M_SMG_01_F_ACE_muzzle_mzls_smg_01optic_Holosight_smg_blk_F : SMG_01_F
  {
    displayName = "Vector SMG";
    scope = 1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot = "MuzzleSlot";
        item = "ACE_muzzle_mzls_smg_01";
      };
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "optic_Holosight_smg_blk_F";
      };
    };
  };

  class A3M_arifle_AK12_GL_F_ACE_muzzle_mzls_Bacc_pointer_IRoptic_Holosight_smg_blk_F : arifle_AK12_GL_F
  {
    displayName = "AK-15 GL";
    scope = 1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot = "MuzzleSlot";
        item = "ACE_muzzle_mzls_B";
      };
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "optic_Holosight_smg_blk_F";
      };
      class LinkedItemsAcc
      {
        slot = "PointerSlot";
        item = "acc_pointer_IR";
      };
    };
  };

  class A3M_MMG_02_black_F_acc_pointer_IRoptic_Holosight_smg_blk_Fbipod_01_F_blk : MMG_02_black_F
  {
    displayName = "LWMMG (Black)";
    scope = 1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "optic_Holosight_smg_blk_F";
      };
      class LinkedItemsAcc
      {
        slot = "PointerSlot";
        item = "acc_pointer_IR";
      };
      class LinkedItemsUnder
      {
        slot = "UnderBarrelSlot";
        item = "bipod_01_F_blk";
      };
    };
  };

  class A3M_arifle_AKS_F : arifle_AKS_F
  {
    displayName = "AKS-74U";
    scope = 1;
    class LinkedItems
    {
    };
  };

  class A3M_LMG_03_F_ACE_muzzle_mzls_Bacc_pointer_IRoptic_Holosight_smg_blk_F : LMG_03_F
  {
    displayName = "FN Minimi SPW";
    scope = 1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot = "MuzzleSlot";
        item = "ACE_muzzle_mzls_B";
      };
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "optic_Holosight_smg_blk_F";
      };
      class LinkedItemsAcc
      {
        slot = "PointerSlot";
        item = "acc_pointer_IR";
      };
    };
  };

  class A3M_launch_RPG7_F : launch_RPG7_F
  {
    displayName = "RPG-7";
    scope = 1;
    class LinkedItems
    {
    };
  };

  class A3M_srifle_DMR_03_F_muzzle_snds_Bacc_pointer_IRoptic_KHS_oldbipod_02_F_blk : srifle_DMR_03_F
  {
    displayName = "SIG 556 (Black)";
    scope = 1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot = "MuzzleSlot";
        item = "muzzle_snds_B";
      };
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "optic_KHS_old";
      };
      class LinkedItemsAcc
      {
        slot = "PointerSlot";
        item = "acc_pointer_IR";
      };
      class LinkedItemsUnder
      {
        slot = "UnderBarrelSlot";
        item = "bipod_02_F_blk";
      };
    };
  };

  class A3M_arifle_AKM_F : arifle_AKM_F
  {
    displayName = "AKM";
    scope = 1;
    class LinkedItems
    {
    };
  };

  class A3M_arifle_SPAR_01_blk_F_muzzle_snds_Macc_pointer_IRoptic_Holosight_smg_blk_F : arifle_SPAR_01_blk_F
  {
    displayName = "HK416A5 11 (Black) ";
        scope = 1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot = "MuzzleSlot";
        item = "muzzle_snds_M";
      };
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "optic_Holosight_smg_blk_F";
      };
      class LinkedItemsAcc
      {
        slot = "PointerSlot";
        item = "acc_pointer_IR";
      };
    };
  };

  class A3M_SMG_05_F_muzzle_snds_lacc_pointer_IRoptic_Holosight_smg_blk_F : SMG_05_F
  {
    displayName = "MP5K";
    scope = 1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot = "MuzzleSlot";
        item = "muzzle_snds_l";
      };
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "optic_Holosight_smg_blk_F";
      };
      class LinkedItemsAcc
      {
        slot = "PointerSlot";
        item = "acc_pointer_IR";
      };
    };
  };

  class A3M_arifle_SPAR_01_GL_blk_F_muzzle_snds_Macc_pointer_IRoptic_Holosight_smg_blk_F : arifle_SPAR_01_GL_blk_F
  {
    displayName = "HK416A5 11  GL(Black) ";
        scope = 1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot = "MuzzleSlot";
        item = "muzzle_snds_M";
      };
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "optic_Holosight_smg_blk_F";
      };
      class LinkedItemsAcc
      {
        slot = "PointerSlot";
        item = "acc_pointer_IR";
      };
    };
  };
};

class cfgVehicles
{
  class I_C_Soldier_Camo_F;
  class I_C_Helipilot_F;
  class I_C_Soldier_Para_2_F;
  class B_AssaultPack_blk;
  class I_C_Soldier_Para_4_F;
  class B_AssaultPack_sgg;
  class I_C_Soldier_Bandit_7_F;
  class B_Messenger_Olive_F;
  class I_C_Soldier_Bandit_3_F;
  class I_C_Soldier_Bandit_2_F;
  class B_FieldPack_oli;
  class I_C_Soldier_Bandit_5_F;
  class I_C_Soldier_Bandit_6_F;
  class I_C_Soldier_Bandit_1_F;
  class B_Carryall_oli;
  class I_C_Soldier_Bandit_8_F;
  class B_AssaultPack_rgr;
  class I_C_Soldier_Bandit_4_F;
  class I_C_Soldier_Para_7_F;
  class I_C_Soldier_Para_3_F;
  class I_C_Soldier_Para_6_F;
  class I_C_Soldier_Para_8_F;
  class I_C_Soldier_Para_5_F;

  class A3M_Drug_Lord : I_C_Soldier_Camo_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Drug Lord";
    editorSubcategory = "EdSubcat_Personnel";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_arifle_AK12_F_ACE_muzzle_mzls_Bacc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_arifle_AK12_F_ACE_muzzle_mzls_Bacc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    magazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade"};
    respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PASGT_basic_olive_F", "V_PlateCarrier2_blk", "G_Aviator"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PASGT_basic_olive_F", "V_PlateCarrier2_blk", "G_Aviator"};
    backpack = "";
  };

  class A3M_Pilot : I_C_Helipilot_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Pilot";
    editorSubcategory = "EdSubcat_Personnel";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_SMG_01_F_ACE_muzzle_mzls_smg_01optic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_SMG_01_F_ACE_muzzle_mzls_smg_01optic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    magazines[] = {"30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01"};
    respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PilotHelmetHeli_O", "V_Rangemaster_belt", "G_Aviator"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PilotHelmetHeli_O", "V_Rangemaster_belt", "G_Aviator"};
    backpack = "";
  };

  class A3M_Lieutenant_Enforcer : I_C_Soldier_Para_2_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Lieutenant (Enforcer)";
    editorSubcategory = "EdSubcat_Personnel";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_arifle_AK12_GL_F_ACE_muzzle_mzls_Bacc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_arifle_AK12_GL_F_ACE_muzzle_mzls_Bacc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    magazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell"};
    respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PASGT_basic_olive_F", "V_PlateCarrier2_blk", "G_Balaclava_Skull1"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PASGT_basic_olive_F", "V_PlateCarrier2_blk", "G_Balaclava_Skull1"};
    backpack = "A3M_Lieutenant_Enforcer_pack";
  };

  class A3M_Lieutenant_Oppressor : I_C_Soldier_Para_4_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Lieutenant (Oppressor)";
    editorSubcategory = "EdSubcat_Personnel";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_MMG_02_black_F_acc_pointer_IRoptic_Holosight_smg_blk_Fbipod_01_F_blk", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_MMG_02_black_F_acc_pointer_IRoptic_Holosight_smg_blk_Fbipod_01_F_blk", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    magazines[] = {"10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag"};
    respawnMagazines[] = {"10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PilotHelmetHeli_O", "V_PlateCarrierIAGL_oli", "G_Bandanna_CandySkull"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PilotHelmetHeli_O", "V_PlateCarrierIAGL_oli", "G_Bandanna_CandySkull"};
    backpack = "A3M_Lieutenant_Oppressor_pack";
  };

  class A3M_Falcon_Dealer : I_C_Soldier_Bandit_7_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Falcon (Dealer)";
    editorSubcategory = "EdSubcat_Personnel";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_arifle_AKS_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_arifle_AKS_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
    respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PASGT_basic_olive_F", "V_PlateCarrier2_blk", "G_Aviator"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PASGT_basic_olive_F", "V_PlateCarrier2_blk", "G_Aviator"};
    backpack = "A3M_Falcon_Dealer_pack";
  };

  class A3M_Falcon_Guard : I_C_Soldier_Bandit_3_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Falcon (Guard)";
    editorSubcategory = "EdSubcat_Personnel";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_LMG_03_F_ACE_muzzle_mzls_Bacc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_LMG_03_F_ACE_muzzle_mzls_Bacc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    magazines[] = {"10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F"};
    respawnMagazines[] = {"10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PASGT_basic_olive_F", "V_PlateCarrier2_blk", "G_Aviator"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PASGT_basic_olive_F", "V_PlateCarrier2_blk", "G_Aviator"};
    backpack = "A3M_Falcon_Guard_pack";
  };

  class A3M_Falcon_Hireling_Launcher : I_C_Soldier_Bandit_2_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Falcon (Hireling (Launcher))";
    editorSubcategory = "EdSubcat_Personnel";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_arifle_AKS_F", "A3M_launch_RPG7_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_arifle_AKS_F", "A3M_launch_RPG7_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "RPG7_F", "RPG7_F", "RPG7_F", "PSRL1_HE_RF", "PSRL1_FRAG_RF"};
    respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "RPG7_F", "RPG7_F", "RPG7_F", "PSRL1_HE_RF", "PSRL1_FRAG_RF"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PASGT_basic_olive_F", "V_PlateCarrier2_blk", "G_Aviator"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PASGT_basic_olive_F", "V_PlateCarrier2_blk", "G_Aviator"};
    backpack = "A3M_Falcon_Hireling_Launcher_pack";
  };

  class A3M_Falcon_Scout_Rifle : I_C_Soldier_Bandit_5_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Falcon (Scout (Rifle))";
    editorSubcategory = "EdSubcat_Personnel";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_srifle_DMR_03_F_muzzle_snds_Bacc_pointer_IRoptic_KHS_oldbipod_02_F_blk", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_srifle_DMR_03_F_muzzle_snds_Bacc_pointer_IRoptic_KHS_oldbipod_02_F_blk", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "APERSMineDispenser_Mag", "ClaymoreDirectionalMine_Remote_Mag"};
    respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "APERSMineDispenser_Mag", "ClaymoreDirectionalMine_Remote_Mag"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "V_PlateCarrier1_blk", "G_Bandanna_Skull1"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "V_PlateCarrier1_blk", "G_Bandanna_Skull1"};
    backpack = "A3M_Falcon_Scout_Rifle_pack";
  };

  class A3M_Falcon_Smuggler : I_C_Soldier_Bandit_6_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Falcon (Smuggler)";
    editorSubcategory = "EdSubcat_Personnel";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_arifle_AKM_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_arifle_AKM_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    magazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F"};
    respawnMagazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_Booniehat_oli", "V_PlateCarrier2_blk", "G_Aviator"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_Booniehat_oli", "V_PlateCarrier2_blk", "G_Aviator"};
    backpack = "";
  };

  class A3M_Falcon_Snatcher : I_C_Soldier_Bandit_1_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Falcon (Snatcher)";
    editorSubcategory = "EdSubcat_Personnel";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_arifle_AKS_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_arifle_AKS_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bloodIV", "ACE_bloodIV", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_plasmaIV", "ACE_plasmaIV", "ACE_splint", "ACE_splint", "Medikit", "ACE_tourniquet", "ACE_tourniquet", "ACE_surgicalKit"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bloodIV", "ACE_bloodIV", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_plasmaIV", "ACE_plasmaIV", "ACE_splint", "ACE_splint", "Medikit", "ACE_tourniquet", "ACE_tourniquet", "ACE_surgicalKit"};
    magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
    respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PASGT_basic_olive_F", "V_PlateCarrier2_blk", "G_Aviator"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PASGT_basic_olive_F", "V_PlateCarrier2_blk", "G_Aviator"};
    backpack = "A3M_Falcon_Snatcher_pack";
  };

  class A3M_Falcon_Thug : I_C_Soldier_Bandit_8_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Falcon (Thug)";
    editorSubcategory = "EdSubcat_Personnel";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_arifle_AKS_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_arifle_AKS_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch", "ACE_DefusalKit", "ACE_Clacker", "ToolKit", "ACE_wirecutter"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch", "ACE_DefusalKit", "ACE_Clacker", "ToolKit", "ACE_wirecutter"};
    magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
    respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PASGT_basic_olive_F", "V_PlateCarrier2_blk", "G_Aviator"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_PASGT_basic_olive_F", "V_PlateCarrier2_blk", "G_Aviator"};
    backpack = "A3M_Falcon_Thug_pack";
  };

  class A3M_Falcon_Watcher : I_C_Soldier_Bandit_4_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Falcon (Watcher)";
    editorSubcategory = "EdSubcat_Personnel";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_arifle_AKS_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_arifle_AKS_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
    respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_Cap_grn", "V_PlateCarrier2_blk", "G_Aviator"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_Cap_grn", "V_PlateCarrier2_blk", "G_Aviator"};
    backpack = "";
  };

  class A3M_Hitman_Deserter : I_C_Soldier_Para_7_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Hitman (Deserter)";
		class EventHandlers 
		{
			init = "";
		};
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_arifle_SPAR_01_blk_F_muzzle_snds_Macc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_arifle_SPAR_01_blk_F_muzzle_snds_Macc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_HelmetB_grass", "V_PlateCarrier2_rgr_noflag_F", "G_Balaclava_Skull1"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_HelmetB_grass", "V_PlateCarrier2_rgr_noflag_F", "G_Balaclava_Skull1"};
    backpack = "";
  };

  class A3M_Hitman_Militiaman : I_C_Soldier_Para_3_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Hitman (Militiaman)";
		class EventHandlers 
		{
			init = "";
		};
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_SMG_05_F_muzzle_snds_lacc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_SMG_05_F_muzzle_snds_lacc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch", "Medikit", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV", "ACE_bloodIV", "ACE_bodyBag", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "FirstAidKit", "FirstAidKit", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_plasmaIV", "ACE_plasmaIV"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch", "Medikit", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV", "ACE_bloodIV", "ACE_bodyBag", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "FirstAidKit", "FirstAidKit", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_plasmaIV", "ACE_plasmaIV"};
    magazines[] = {"30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade"};
    respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_HelmetB_grass", "V_PlateCarrier2_rgr_noflag_F", "G_Balaclava_Skull1"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_HelmetB_grass", "V_PlateCarrier2_rgr_noflag_F", "G_Balaclava_Skull1"};
    backpack = "A3M_Hitman_Militiaman_pack";
  };

  class A3M_Hitman_Raider_UGL : I_C_Soldier_Para_6_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Hitman (Raider (UGL))";
		class EventHandlers 
		{
			init = "";
		};
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_arifle_SPAR_01_GL_blk_F_muzzle_snds_Macc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_arifle_SPAR_01_GL_blk_F_muzzle_snds_Macc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_HelmetB_grass", "V_PlateCarrier2_rgr_noflag_F", "G_Balaclava_Skull1"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_HelmetB_grass", "V_PlateCarrier2_rgr_noflag_F", "G_Balaclava_Skull1"};
    backpack = "A3M_Hitman_Raider_UGL_pack";
  };

  class A3M_Hitman_Saboteur : I_C_Soldier_Para_8_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Hitman (Saboteur)";
		class EventHandlers 
		{
			init = "";
		};
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_arifle_SPAR_01_blk_F_muzzle_snds_Macc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_arifle_SPAR_01_blk_F_muzzle_snds_Macc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "SatchelCharge_Remote_Mag"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "SatchelCharge_Remote_Mag"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_HelmetB_grass", "V_PlateCarrier2_rgr_noflag_F", "G_Balaclava_Skull1"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_HelmetB_grass", "V_PlateCarrier2_rgr_noflag_F", "G_Balaclava_Skull1"};
    backpack = "A3M_Hitman_Saboteur_pack";
  };

  class A3M_Hitman_Specialist : I_C_Soldier_Para_5_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Hitman (Specialist)";
		class EventHandlers 
		{
			init = "";
		};
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
    uniformClass = "U_BG_Guerrilla_6_1";
    weapons[] = {"A3M_arifle_SPAR_01_blk_F_muzzle_snds_Macc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_launch_RPG7_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    respawnWeapons[] = {"A3M_arifle_SPAR_01_blk_F_muzzle_snds_Macc_pointer_IRoptic_Holosight_smg_blk_F", "A3M_launch_RPG7_F", "A3M_hgun_Pistol_01_F", "Put", "Throw"};
    items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_CableTie", "ACE_EarPlugs", "ACE_epinephrine", "ACE_epinephrine", "ACE_DeadManSwitch"};
    magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "RPG7_F", "RPG7_F", "RPG7_F", "RPG7_F", "PSRL1_FRAG_RF", "PSRL1_HE_RF"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "RPG7_F", "RPG7_F", "RPG7_F", "RPG7_F", "PSRL1_FRAG_RF", "PSRL1_HE_RF"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_HelmetB_grass", "V_PlateCarrier2_rgr_noflag_F", "G_Balaclava_Skull1"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "H_HelmetB_grass", "V_PlateCarrier2_rgr_noflag_F", "G_Balaclava_Skull1"};
    backpack = "A3M_Hitman_Specialist_pack";
  };

  class I_C_Offroad_02_unarmed_F;
  class I_C_Offroad_02_LMG_F;
  class I_C_Offroad_02_AT_F;
  class I_C_Van_01_transport_F;
  class I_C_Van_02_vehicle_F;
  class I_C_Van_02_transport_F;
  class I_C_Heli_Light_01_civil_F;
  class I_C_Boat_Transport_01_F;
  class I_C_Boat_Transport_02_F;
  class I_C_HMG_02_F;
  class I_C_HMG_02_high_F;
  class I_G_Mortar_01_F;
  class I_G_Offroad_01_AT_F;
  class I_G_Offroad_01_armed_F;
  class I_G_Offroad_01_F;
  class C_Boat_Civil_01_F;

  class A3M_Jeep_Wrangler : I_C_Offroad_02_unarmed_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Jeep Wrangler";
    editorSubcategory = "EdSubcat_Cars";
    hiddenSelectionsTextures[] =
        {
            "a3\soft_f_exp\offroad_02\data\offroad_02_ext_brown_co.paa",
            "a3\soft_f_exp\offroad_02\data\offroad_02_ext_brown_co.paa",
            "a3\soft_f_exp\offroad_02\data\offroad_02_int_brown_co.paa",
            "a3\soft_f_exp\offroad_02\data\offroad_02_int_brown_co.paa"};
    crew = "A3M_Falcon_Dealer";
    typicalCargo[] = {"A3M_Falcon_Dealer"};
  };

  class A3M_Jeep_Wrangler_LMG : I_C_Offroad_02_LMG_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Jeep Wrangler (LMG)";
    editorSubcategory = "EdSubcat_Cars";
    hiddenSelectionsTextures[] = 
    {
      "a3\soft_f_exp\offroad_02\data\offroad_02_ext_olive_co.paa",
      "a3\soft_f_exp\offroad_02\data\offroad_02_ext_olive_co.paa", 
      "a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa", 
      "a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa"
    };
    crew = "A3M_Falcon_Dealer";
    typicalCargo[] = {"A3M_Falcon_Dealer"};
  };

  class A3M_Jeep_Wrangler_SPG9 : I_C_Offroad_02_AT_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Jeep Wrangler (SPG9)";
    editorSubcategory = "EdSubcat_Cars";
    hiddenSelectionsTextures[] = 
    {
      "a3\soft_f_exp\offroad_02\data\offroad_02_ext_olive_co.paa", 
      "a3\soft_f_exp\offroad_02\data\offroad_02_ext_olive_co.paa", 
      "a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa", 
      "a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa"
    };
    crew = "A3M_Falcon_Dealer";
    typicalCargo[] = {"A3M_Falcon_Dealer"};
  };

  class A3M_Truck : I_C_Van_01_transport_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Truck";
    editorSubcategory = "EdSubcat_Cars";
    hiddenSelectionsTextures[] = 
    {
      "a3\soft_f_exp\van_01\data\van_01_ext_oli_co.paa", 
      "a3\soft_f_gamma\van_01\data\van_01_adds_co.paa", 
      "a3\soft_f_exp\van_01\data\van_01_int_base_3_co.paa"
    };
    crew = "A3M_Falcon_Dealer";
    typicalCargo[] = {"A3M_Falcon_Dealer"};
  };

  class A3M_Van_Cargo : I_C_Van_02_vehicle_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Van (Cargo)";
    editorSubcategory = "EdSubcat_Cars";
    hiddenSelectionsTextures[] = 
    {
      "a3\soft_f_orange\van_02\data\van_body_syndikat_co.paa", 
      "a3\soft_f_orange\van_02\data\van_wheel_co.paa", 
      "a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa", 
      "a3\soft_f_orange\van_02\data\van_body_syndikat_co.paa"
    };
    crew = "A3M_Falcon_Dealer";
    typicalCargo[] = {"A3M_Falcon_Dealer"};
  };

  class A3M_Van_Transport : I_C_Van_02_transport_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Van (Transport)";
    editorSubcategory = "EdSubcat_Cars";
    hiddenSelectionsTextures[] = 
    {
      "a3\soft_f_orange\van_02\data\van_body_syndikat_co.paa", 
      "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa", 
      "a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa", 
      "a3\soft_f_orange\van_02\data\van_body_syndikat_co.paa"
    };
    crew = "A3M_Falcon_Dealer";
    typicalCargo[] = {"A3M_Falcon_Dealer"};
  };

  class A3M_MD500 : I_C_Heli_Light_01_civil_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "MD 500";
    editorSubcategory = "EdSubcat_Helicopters";
    hiddenSelectionsTextures[] = 
    {
      "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_shadow_co.paa", 
      ""
    };
    crew = "A3M_Pilot";
    typicalCargo[] = {"A3M_Pilot"};
  };

  class A3M_Assault_Boat : I_C_Boat_Transport_01_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Assault Boat";
    hiddenSelectionsTextures[] = 
    {
      "a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"
    };
    crew = "A3M_Falcon_Dealer";
    typicalCargo[] = {"A3M_Falcon_Dealer"};
  };

  class A3M_RHIB : I_C_Boat_Transport_02_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "RHIB";
    hiddenSelectionsTextures[] = 
    {
      "a3\boat_f_exp\boat_transport_02\data\boat_transport_02_exterior_co.paa", 
      "a3\boat_f_exp\boat_transport_02\data\boat_transport_02_interior_2_co.paa"
    };
    crew = "A3M_Falcon_Dealer";
    typicalCargo[] = {"A3M_Falcon_Dealer"};
  };

  class A3M_M2_HMG_50 : I_C_HMG_02_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "M2 HMG .50";
    hiddenSelectionsTextures[] = 
    {
      "a3\static_f\hmg_02\data\static_m2_co.paa", 
      "a3\static_f\hmg_02\data\m2_combined_co.paa"
    };
    crew = "A3M_Falcon_Dealer";
    typicalCargo[] = {"A3M_Falcon_Dealer"};
  };

  class A3M_M2_HMG_50_Raised : I_C_HMG_02_high_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "M2 HMG .50 (Raised)";
    hiddenSelectionsTextures[] = 
    {
      "a3\static_f\hmg_02\data\static_m2_co.paa", 
      "a3\static_f\hmg_02\data\m2_combined_co.paa"
    };
    crew = "A3M_Falcon_Dealer";
    typicalCargo[] = {"A3M_Falcon_Dealer"};
  };

  class A3M_MK6_Mortar : I_G_Mortar_01_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "MK6 Mortar";
    hiddenSelectionsTextures[] = 
    {
      "a3\static_f\mortar_01\data\mortar_01_co.paa"
    };
    crew = "A3M_Falcon_Dealer";
    typicalCargo[] = {"A3M_Falcon_Dealer"};
  };

  class A3M_Offroad_AT : I_G_Offroad_01_AT_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Offroad (AT)";
    editorSubcategory = "EdSubcat_Cars";
    hiddenSelectionsTextures[] = 
    {
      "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_09_co.paa", 
      "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_09_co.paa"
    };
    crew = "A3M_Falcon_Dealer";
    typicalCargo[] = {"A3M_Falcon_Dealer"};
  };

  class A3M_Offroad_HMG : I_G_Offroad_01_armed_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Offroad (HMG)";
    editorSubcategory = "EdSubcat_Cars";
    hiddenSelectionsTextures[] = 
    {
      "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_03_co.paa", 
      "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_03_co.paa"
    };
    crew = "A3M_Falcon_Dealer";
    typicalCargo[] = {"A3M_Falcon_Dealer"};
  };

  class A3M_Offroad : I_G_Offroad_01_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "Offroad";
    editorSubcategory = "EdSubcat_Cars";
    hiddenSelectionsTextures[] = 
    {
      "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_05_co.paa", 
      "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_05_co.paa"
    };
    crew = "A3M_Falcon_Dealer";
    typicalCargo[] = {"A3M_Falcon_Dealer"};
  };

  class A3M_MotorBoat : C_Boat_Civil_01_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction = "A3M_Cartel";
    side = 0;
    displayName = "MotorBoat";
    hiddenSelectionsTextures[] = 
    {
      "a3\boat_f_gamma\boat_civil_01\data\boat_civil_01_ext_co.paa", 
      "a3\boat_f_gamma\boat_civil_01\data\boat_civil_01_int_co.paa"
    };
    crew = "A3M_Falcon_Dealer";
    typicalCargo[] = {"A3M_Falcon_Dealer"};
  };

  class A3M_Lieutenant_Enforcer_pack : B_AssaultPack_blk
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_1Rnd_HE_Grenade_shell
      {
        count = 8;
        magazine = "1Rnd_HE_Grenade_shell";
      };
      class _xx_UGL_FlareWhite_F
      {
        count = 1;
        magazine = "UGL_FlareWhite_F";
      };
      class _xx_UGL_FlareGreen_F
      {
        count = 1;
        magazine = "UGL_FlareGreen_F";
      };
      class _xx_UGL_FlareRed_F
      {
        count = 1;
        magazine = "UGL_FlareRed_F";
      };
      class _xx_1Rnd_Smoke_Grenade_shell
      {
        count = 1;
        magazine = "1Rnd_Smoke_Grenade_shell";
      };
      class _xx_1Rnd_SmokeRed_Grenade_shell
      {
        count = 1;
        magazine = "1Rnd_SmokeRed_Grenade_shell";
      };
      class _xx_1Rnd_SmokeGreen_Grenade_shell
      {
        count = 1;
        magazine = "1Rnd_SmokeGreen_Grenade_shell";
      };
    };
    class TransportItems
    {
    };
    class TransportWeapons
    {
    };
  };

  class A3M_Lieutenant_Oppressor_pack : B_AssaultPack_sgg
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_130Rnd_338_Mag
      {
        count = 2;
        magazine = "130Rnd_338_Mag";
      };
    };
    class TransportItems
    {
    };
    class TransportWeapons
    {
    };
  };

  class A3M_Falcon_Dealer_pack : B_Messenger_Olive_F
  {
    scope = 1;
    class TransportMagazines
    {
    };
    class TransportItems
    {
    };
    class TransportWeapons
    {
    };
  };

  class A3M_Falcon_Guard_pack : B_AssaultPack_blk
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_200Rnd_556x45_Box_F
      {
        count = 2;
        magazine = "200Rnd_556x45_Box_F";
      };
    };
    class TransportItems
    {
    };
    class TransportWeapons
    {
    };
  };

  class A3M_Falcon_Hireling_Launcher_pack : B_FieldPack_oli
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_RPG7_F
      {
        count = 3;
        magazine = "RPG7_F";
      };
      class _xx_PSRL1_HE_RF
      {
        count = 1;
        magazine = "PSRL1_HE_RF";
      };
      class _xx_PSRL1_FRAG_RF
      {
        count = 1;
        magazine = "PSRL1_FRAG_RF";
      };
    };
    class TransportItems
    {
    };
    class TransportWeapons
    {
    };
  };

  class A3M_Falcon_Scout_Rifle_pack : B_AssaultPack_blk
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_20Rnd_762x51_Mag
      {
        count = 4;
        magazine = "20Rnd_762x51_Mag";
      };
      class _xx_APERSMineDispenser_Mag
      {
        count = 1;
        magazine = "APERSMineDispenser_Mag";
      };
      class _xx_ClaymoreDirectionalMine_Remote_Mag
      {
        count = 1;
        magazine = "ClaymoreDirectionalMine_Remote_Mag";
      };
    };
    class TransportItems
    {
    };
    class TransportWeapons
    {
    };
  };

  class A3M_Falcon_Snatcher_pack : B_Carryall_oli
  {
    scope = 1;
    class TransportMagazines
    {
    };
    class TransportItems
    {
      class _xx_ACE_fieldDressing
      {
        count = 12;
        name = "ACE_fieldDressing";
      };
      class _xx_ACE_elasticBandage
      {
        count = 6;
        name = "ACE_elasticBandage";
      };
      class _xx_ACE_packingBandage
      {
        count = 6;
        name = "ACE_packingBandage";
      };
      class _xx_ACE_bloodIV
      {
        count = 2;
        name = "ACE_bloodIV";
      };
      class _xx_ACE_epinephrine
      {
        count = 12;
        name = "ACE_epinephrine";
      };
      class _xx_FirstAidKit
      {
        count = 4;
        name = "FirstAidKit";
      };
      class _xx_ACE_morphine
      {
        count = 20;
        name = "ACE_morphine";
      };
      class _xx_ACE_plasmaIV
      {
        count = 2;
        name = "ACE_plasmaIV";
      };
      class _xx_ACE_splint
      {
        count = 2;
        name = "ACE_splint";
      };
      class _xx_Medikit
      {
        count = 1;
        name = "Medikit";
      };
      class _xx_ACE_tourniquet
      {
        count = 2;
        name = "ACE_tourniquet";
      };
      class _xx_ACE_surgicalKit
      {
        count = 1;
        name = "ACE_surgicalKit";
      };
    };
    class TransportWeapons
    {
    };
  };

  class A3M_Falcon_Thug_pack : B_AssaultPack_rgr
  {
    scope = 1;
    class TransportMagazines
    {
    };
    class TransportItems
    {
      class _xx_ACE_DefusalKit
      {
        count = 1;
        name = "ACE_DefusalKit";
      };
      class _xx_ACE_Clacker
      {
        count = 1;
        name = "ACE_Clacker";
      };
      class _xx_ToolKit
      {
        count = 1;
        name = "ToolKit";
      };
      class _xx_ACE_wirecutter
      {
        count = 1;
        name = "ACE_wirecutter";
      };
    };
    class TransportWeapons
    {
    };
  };

  class A3M_Hitman_Militiaman_pack : B_AssaultPack_rgr
  {
    scope = 1;
    class TransportMagazines
    {
    };
    class TransportItems
    {
      class _xx_Medikit
      {
        count = 1;
        name = "Medikit";
      };
      class _xx_ACE_fieldDressing
      {
        count = 12;
        name = "ACE_fieldDressing";
      };
      class _xx_ACE_elasticBandage
      {
        count = 6;
        name = "ACE_elasticBandage";
      };
      class _xx_ACE_packingBandage
      {
        count = 6;
        name = "ACE_packingBandage";
      };
      class _xx_ACE_quikclot
      {
        count = 6;
        name = "ACE_quikclot";
      };
      class _xx_ACE_bloodIV
      {
        count = 2;
        name = "ACE_bloodIV";
      };
      class _xx_ACE_bodyBag
      {
        count = 1;
        name = "ACE_bodyBag";
      };
      class _xx_ACE_epinephrine
      {
        count = 6;
        name = "ACE_epinephrine";
      };
      class _xx_FirstAidKit
      {
        count = 2;
        name = "FirstAidKit";
      };
      class _xx_ACE_morphine
      {
        count = 12;
        name = "ACE_morphine";
      };
      class _xx_ACE_plasmaIV
      {
        count = 2;
        name = "ACE_plasmaIV";
      };
    };
    class TransportWeapons
    {
    };
  };

  class A3M_Hitman_Raider_UGL_pack : B_AssaultPack_blk
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_1Rnd_HE_Grenade_shell
      {
        count = 6;
        magazine = "1Rnd_HE_Grenade_shell";
      };
      class _xx_UGL_FlareWhite_F
      {
        count = 1;
        magazine = "UGL_FlareWhite_F";
      };
      class _xx_UGL_FlareGreen_F
      {
        count = 1;
        magazine = "UGL_FlareGreen_F";
      };
      class _xx_UGL_FlareRed_F
      {
        count = 1;
        magazine = "UGL_FlareRed_F";
      };
      class _xx_1Rnd_Smoke_Grenade_shell
      {
        count = 1;
        magazine = "1Rnd_Smoke_Grenade_shell";
      };
      class _xx_1Rnd_SmokeRed_Grenade_shell
      {
        count = 1;
        magazine = "1Rnd_SmokeRed_Grenade_shell";
      };
      class _xx_1Rnd_SmokeGreen_Grenade_shell
      {
        count = 1;
        magazine = "1Rnd_SmokeGreen_Grenade_shell";
      };
    };
    class TransportItems
    {
    };
    class TransportWeapons
    {
    };
  };

  class A3M_Hitman_Saboteur_pack : B_FieldPack_oli
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_DemoCharge_Remote_Mag
      {
        count = 2;
        magazine = "DemoCharge_Remote_Mag";
      };
      class _xx_SatchelCharge_Remote_Mag
      {
        count = 2;
        magazine = "SatchelCharge_Remote_Mag";
      };
    };
    class TransportItems
    {
    };
    class TransportWeapons
    {
    };
  };

  class A3M_Hitman_Specialist_pack : B_Carryall_oli
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_RPG7_F
      {
        count = 4;
        magazine = "RPG7_F";
      };
      class _xx_PSRL1_FRAG_RF
      {
        count = 1;
        magazine = "PSRL1_FRAG_RF";
      };
      class _xx_PSRL1_HE_RF
      {
        count = 1;
        magazine = "PSRL1_HE_RF";
      };
    };
    class TransportItems
    {
    };
    class TransportWeapons
    {
    };
  };
};

//////////////// Paste cfgGroups after this line ////////////////
