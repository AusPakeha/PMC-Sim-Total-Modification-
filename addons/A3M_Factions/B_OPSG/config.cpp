class cfgPatches
{
  class A3M_OPSG
  {
    units[]=
    {
      "A3M_OPSG_Team_Coordinator",
      "A3M_OPSG_Pilot",
      "A3M_OPSG_Operative",
      "A3M_OPSG_Guard",
      "A3M_OPSG_Light_Assault",
      "A3M_OPSG_Assault",
      "A3M_OPSG_Hvy_Assault",
      "A3M_OPSG_AI_Medic",
      "A3M_OPSG_Medic",
      "A3M_OPSG_Grenadier",
      "A3M_OPSG_Autorifleman",
      "A3M_OPSG_Marksman",
      "A3M_OPSG_Engineer",
      "A3M_OPSG_Armored_Suburban",
      "A3M_OPSG_Armored_Suburban_Minigun",
      "A3M_OPSG_MH6_Little_Bird",
      "A3M_OPSG_Ka60_Kasatka"
    };
    weapons[]=
    {
      "A3M_SMG_01_F",
      "A3M_SMG_02_F_acc_pointer_IRoptic_Yorris",
      "A3M_SMG_03C_TR_black_acc_pointer_IRoptic_Yorris",
      "A3M_arifle_MX_Black_F_acc_pointer_IRoptic_Yorris",
      "A3M_LMG_Mk200_black_F_acc_pointer_IRoptic_ACO_grn_smg",
      "A3M_arifle_MX_GL_Black_F_acc_pointer_IRoptic_Yorris",
      "A3M_MMG_02_black_F_acc_pointer_IRoptic_Aco_smgbipod_01_F_blk",
      "A3M_arifle_MXM_Black_F_muzzle_snds_hacc_pointer_IRoptic_AMSbipod_01_F_blk"
    };
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "ace_medical_treatment",
      "A3_Weapons_F",
      "A3_Characters_F_Exp",
      "A3_Characters_F",
      "A3M_Char_F",
      "A3_Weapons_F_Items",
      "A3_Weapons_F_SMGs_SMG_01",
      "A3_Weapons_F_SMGs_SMG_02",
      "A3_Weapons_F_Mod_SMGs_SMG_03",
      "A3_Weapons_F_Rifles_MX_Black",
      "A3_Characters_F_Orange_Headgear",
      "ace_hearing",
      "A3_Weapons_F_Enoch_Machineguns_M200",
      "A3_Weapons_F_Mark_Machineguns_MMG_02",
      "ace_explosives"
    };
  };
};

class cfgFactionClasses
{
  class opsg_faction
  {
    icon="";
    displayName="OPSG";
    side=1;
    priority=1;
  };
};


class cfgWeapons
{
  class SMG_01_F;
  class SMG_02_F;
  class SMG_03C_TR_black;
  class arifle_MX_Black_F;
  class LMG_Mk200_black_F;
  class arifle_MX_GL_Black_F;
  class MMG_02_black_F;
  class arifle_MXM_Black_F;

  class A3M_SMG_01_F: SMG_01_F
  {
    displayName="Vector SMG";
    scope=1;
    class LinkedItems
    {
    };
  };

  class A3M_SMG_02_F_acc_pointer_IRoptic_Yorris: SMG_02_F
  {
    displayName="Scorpion Evo 3 A1";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Yorris";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class A3M_SMG_03C_TR_black_acc_pointer_IRoptic_Yorris: SMG_03C_TR_black
  {
    displayName="P90 TR (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Yorris";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class A3M_arifle_MX_Black_F_acc_pointer_IRoptic_Yorris: arifle_MX_Black_F
  {
    displayName="MX (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Yorris";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class A3M_LMG_Mk200_black_F_acc_pointer_IRoptic_ACO_grn_smg: LMG_Mk200_black_F
  {
    displayName="Stoner 99 LMG (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_ACO_grn_smg";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class A3M_arifle_MX_GL_Black_F_acc_pointer_IRoptic_Yorris: arifle_MX_GL_Black_F
  {
    displayName="MX 3GL (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Yorris";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class A3M_MMG_02_black_F_acc_pointer_IRoptic_Aco_smgbipod_01_F_blk: MMG_02_black_F
  {
    displayName="LWMMG (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Aco_smg";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="bipod_01_F_blk";
      };
    };
  };

  class A3M_arifle_MXM_Black_F_muzzle_snds_hacc_pointer_IRoptic_AMSbipod_01_F_blk: arifle_MXM_Black_F
  {
    displayName="MXM (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_h";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_AMS";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="bipod_01_F_blk";
      };
    };
  };

};

class cfgVehicles
{
  class A3M_OPSG_UnarmedTC;
  class A3M_OPSG_Pilot;
  class A3M_OPSG_Unarmed;
  class A3M_OPSG_CQB;
  class A3M_OPSG_Assault_Light;
  class A3M_OPSG_Assault;
  class A3M_OPSG_Assault_Heavy;
  class A3M_OPSG_Medic;
  class B_AssaultPack_blk;
  class A3M_OPSG_Medic_Unarmed;
  class A3M_OPSG_Grenadier;
  class A3M_OPSG_Autorifleman;
  class A3M_OPSG_Marksman;
  class A3M_OPSG_Engineer;
  class B_FieldPack_blk;

  class A3M_OPSG_TC_B: A3M_OPSG_UnarmedTC
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";	
    side=1;
    displayName="OPSG Team Coordinator";
    editorSubcategory = "EdSubcat_Personnel";
    icon="iconManLeader";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass="U_B_GEN_Soldier_F";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","H_Beret_Colonel","V_PlateCarrier1_blk"};
    respawnLinkedItems[]={"ItemMap","H_Beret_Colonel","V_PlateCarrier1_blk"};
    backpack="";
  };

  class A3M_OPSG_Pilot_B: A3M_OPSG_Pilot
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG Pilot";
    editorSubcategory = "EdSubcat_Personnel";
		icon="iconMan";
    uniformClass="U_B_GEN_Soldier_F";
		class EventHandlers 
		{
			init = "";
		};
    weapons[]={"Binocular","A3M_SMG_01_F","Put","Throw"};
    respawnWeapons[]={"Binocular","A3M_SMG_01_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01"};
    respawnMagazines[]={"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR","Binocular","H_PilotHelmetHeli_O","V_TacVestIR_blk","G_Goggles_VR","NVGoggles_OPFOR"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR","Binocular","H_PilotHelmetHeli_O","V_TacVestIR_blk","G_Goggles_VR","NVGoggles_OPFOR"};
    backpack="";
  };

  class A3M_OPSG_Op_B: A3M_OPSG_Unarmed
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG Operative";
    editorSubcategory = "EdSubcat_Personnel";
		icon="iconMan";
    uniformClass="U_B_GEN_Soldier_F";
		class EventHandlers 
		{
			init = "";
		};
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","V_PlateCarrier1_blk"};
    respawnLinkedItems[]={"ItemMap","V_PlateCarrier1_blk"};
    backpack="";
  };

  class A3M_OPSG_Guard_B: A3M_OPSG_CQB
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG Guard";
    editorSubcategory = "EdSubcat_Personnel";
		icon="iconMan";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass="U_B_GEN_Soldier_F";
    weapons[]={"Binocular","A3M_SMG_02_F_acc_pointer_IRoptic_Yorris","Put","Throw"};
    respawnWeapons[]={"Binocular","A3M_SMG_02_F_acc_pointer_IRoptic_Yorris","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","HandGrenade","HandGrenade"};
    respawnMagazines[]={"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_Cap_usblack","V_PlateCarrierGL_blk","NVGoggles_OPFOR"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_Cap_usblack","V_PlateCarrierGL_blk","NVGoggles_OPFOR"};
    backpack="";
  };

  class A3M_OPSG_Light_Assault_B: A3M_OPSG_Assault_Light
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG Light Assault";
    uniformClass="U_B_GEN_Soldier_F";
    editorSubcategory = "EdSubcat_Personnel";
		icon="iconMan";
		class EventHandlers 
		{
			init = "";
		};
    weapons[]={"Binocular","A3M_SMG_03C_TR_black_acc_pointer_IRoptic_Yorris","Put","Throw"};
    respawnWeapons[]={"Binocular","A3M_SMG_03C_TR_black_acc_pointer_IRoptic_Yorris","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"30Rnd_65x39_caseless_mag","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","HandGrenade","HandGrenade","50Rnd_570x28_SMG_03"};
    respawnMagazines[]={"30Rnd_65x39_caseless_mag","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","HandGrenade","HandGrenade","50Rnd_570x28_SMG_03"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_Cap_usblack","V_PlateCarrier1_blk","NVGoggles_OPFOR"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_Cap_usblack","V_PlateCarrier1_blk","NVGoggles_OPFOR"};
    backpack="";
  };

  class A3M_OPSG_Assault_B: A3M_OPSG_Assault
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG Assault";
    editorSubcategory = "EdSubcat_Personnel";
		icon="iconMan";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass="U_B_GEN_Soldier_F";
    weapons[]={"Binocular","A3M_arifle_MX_Black_F_acc_pointer_IRoptic_Yorris","Put","Throw"};
    respawnWeapons[]={"Binocular","A3M_arifle_MX_Black_F_acc_pointer_IRoptic_Yorris","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","HandGrenade","HandGrenade"};
    respawnMagazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_PASGT_basic_black_F","V_PlateCarrier2_blk","G_Aviator","NVGoggles_OPFOR"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_PASGT_basic_black_F","V_PlateCarrier2_blk","G_Aviator","NVGoggles_OPFOR"};
    backpack="";
  };

  class A3M_OPSG_Hvy_Assault_B: A3M_OPSG_Assault_Heavy
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG Hvy Assault";
    editorSubcategory = "EdSubcat_Personnel";
		icon="iconMan";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass="U_B_GEN_Soldier_F";
    weapons[]={"Binocular","A3M_LMG_Mk200_black_F_acc_pointer_IRoptic_ACO_grn_smg","Put","Throw"};
    respawnWeapons[]={"Binocular","A3M_LMG_Mk200_black_F_acc_pointer_IRoptic_ACO_grn_smg","Put","Throw"};
    items[]={"FirstAidKit","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_EarPlugs"};
    magazines[]={"HandGrenade","HandGrenade","200Rnd_65x39_cased_Box"};
    respawnMagazines[]={"HandGrenade","HandGrenade","200Rnd_65x39_cased_Box"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_PASGT_basic_black_F","V_PlateCarrierSpec_blk","G_Tactical_Black","NVGoggles_OPFOR"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_PASGT_basic_black_F","V_PlateCarrierSpec_blk","G_Tactical_Black","NVGoggles_OPFOR"};
    backpack="";
  };

  class A3M_OPSG_AI_Medic_B: A3M_OPSG_Medic
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG AI Medic";
    editorSubcategory = "EdSubcat_Personnel";
		icon="iconMan";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass="U_B_GEN_Soldier_F";
    weapons[]={"Binocular","A3M_arifle_MX_Black_F_acc_pointer_IRoptic_Yorris","Put","Throw"};
    respawnWeapons[]={"Binocular","A3M_arifle_MX_Black_F_acc_pointer_IRoptic_Yorris","Put","Throw"};
    items[]={"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","HandGrenade","HandGrenade"};
    respawnMagazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_PASGT_basic_black_F","V_TacVestIR_blk","NVGoggles_OPFOR"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_PASGT_basic_black_F","V_TacVestIR_blk","NVGoggles_OPFOR"};
    backpack="A3M_OPSG_AI_Medic_pack";
  };

  class A3M_OPSG_Medic_B: A3M_OPSG_Medic_Unarmed
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG Medic";
    editorSubcategory = "EdSubcat_Personnel";
		icon="iconMan";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass="U_B_GEN_Soldier_F";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","V_TacVestIR_blk","G_Tactical_Black"};
    respawnLinkedItems[]={"ItemMap","V_TacVestIR_blk","G_Tactical_Black"};
    backpack="A3M_OPSG_Medic_pack";
  };

  class A3M_OPSG_Grenadier_B: A3M_OPSG_Grenadier
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG Grenadier";
    editorSubcategory = "EdSubcat_Personnel";
		icon="iconMan";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass="U_B_GEN_Soldier_F";
    weapons[]={"Binocular","A3M_arifle_MX_GL_Black_F_acc_pointer_IRoptic_Yorris","Put","Throw"};
    respawnWeapons[]={"Binocular","A3M_arifle_MX_GL_Black_F_acc_pointer_IRoptic_Yorris","Put","Throw"};
    items[]={"FirstAidKit","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_EarPlugs"};
    magazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade"};
    respawnMagazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_PASGT_basic_black_F","V_PlateCarrier1_blk","G_Combat","NVGoggles_OPFOR"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_PASGT_basic_black_F","V_PlateCarrier1_blk","G_Combat","NVGoggles_OPFOR"};
    backpack="";
  };

  class A3M_OPSG_AR_B: A3M_OPSG_Autorifleman
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG Autorifleman";
    editorSubcategory = "EdSubcat_Personnel";
		icon="iconMan";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass="U_B_GEN_Soldier_F";
    weapons[]={"Binocular","A3M_MMG_02_black_F_acc_pointer_IRoptic_Aco_smgbipod_01_F_blk","Put","Throw"};
    respawnWeapons[]={"Binocular","A3M_MMG_02_black_F_acc_pointer_IRoptic_Aco_smgbipod_01_F_blk","Put","Throw"};
    items[]={"FirstAidKit","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_EarPlugs"};
    magazines[]={"HandGrenade","HandGrenade","130Rnd_338_Mag","130Rnd_338_Mag"};
    respawnMagazines[]={"HandGrenade","HandGrenade","130Rnd_338_Mag","130Rnd_338_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_PASGT_basic_black_F","V_PlateCarrier1_blk","G_Combat","NVGoggles_OPFOR"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_PASGT_basic_black_F","V_PlateCarrier1_blk","G_Combat","NVGoggles_OPFOR"};
    backpack="A3M_OPSG_Autorifleman_pack";
  };

  class A3M_OPSG_Marksman_B: A3M_OPSG_Marksman
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG Marksman";
    editorSubcategory = "EdSubcat_Personnel";
		icon="iconMan";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass="U_B_GEN_Soldier_F";
    weapons[]={"Binocular","A3M_arifle_MXM_Black_F_muzzle_snds_hacc_pointer_IRoptic_AMSbipod_01_F_blk","Put","Throw"};
    respawnWeapons[]={"Binocular","A3M_arifle_MXM_Black_F_muzzle_snds_hacc_pointer_IRoptic_AMSbipod_01_F_blk","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","HandGrenade","HandGrenade"};
    respawnMagazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_PASGT_basic_black_F","V_PlateCarrier1_blk","NVGoggles_OPFOR"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR","Binocular","H_PASGT_basic_black_F","V_PlateCarrier1_blk","NVGoggles_OPFOR"};
    backpack="A3M_OPSG_Marksman_pack";
  };

  class A3M_OPSG_Engineer_B: A3M_OPSG_Engineer
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG Engineer";
    editorSubcategory = "EdSubcat_Personnel";
		icon="iconMan";
		class EventHandlers 
		{
			init = "";
		};
    uniformClass="U_B_GEN_Soldier_F";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"FirstAidKit","ACE_Clacker","ACE_DefusalKit","ToolKit"};
    respawnItems[]={"FirstAidKit","ACE_Clacker","ACE_DefusalKit","ToolKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","V_TacVestIR_blk","G_Combat"};
    respawnLinkedItems[]={"ItemMap","V_TacVestIR_blk","G_Combat"};
    backpack="A3M_OPSG_Engineer_pack";
  };
  
  class DEGA_ArmoredSUV_PMC;
  class DEGA_GunArmoredSUV_PMC;
  class B_Heli_Light_01_F;
  class O_Heli_Light_02_unarmed_F;

  class A3M_OPSG_Armored_Suburban_B: DEGA_ArmoredSUV_PMC
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG Armored Suburban";
    editorSubcategory = "EdSubcat_Cars";
    hiddenSelectionsTextures[]=
    {
      "dega_vehicles_suv\data\armoredsuv_body_co.paa",
      "dega_vehicles_suv\data\armoredsuv_interier_co.paa"
      };
    crew="A3M_OPSG_Guard_B";
    typicalCargo[]={"A3M_OPSG_Guard_B"};
  };

  class A3M_OPSG_Armored_Suburban_Minigun: DEGA_GunArmoredSUV_PMC
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG Armored Suburban Minigun";
    editorSubcategory = "EdSubcat_Cars";
    hiddenSelectionsTextures[]=
    {
      "dega_vehicles_suv\data\armoredsuv_bodygun_co.paa",
      "dega_vehicles_suv\data\armoredsuv_interiergun_co.paa"
      };
    crew="A3M_OPSG_Guard_B";
    typicalCargo[]={"A3M_OPSG_Guard_B"};
  };

  class A3M_OPSG_MH6_Little_Bird_B: B_Heli_Light_01_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG MH6 Little Bird";
    editorSubcategory = "EdSubcat_Helicopters";
    hiddenSelectionsTextures[]=
    {
      "\A3M_Factions\textures\littlebird\heli_light_01_ext_blk_co.paa",
      ""
      };
    crew="A3M_OPSG_Pilot_B";
    typicalCargo[]={"A3M_OPSG_Pilot_B"};
  };

  class A3M_OPSG_Ka60_Kasatka_B: O_Heli_Light_02_unarmed_F
  {
    editorPreview = "";
		scope = 2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2; // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal. 
		faction="opsg_faction";
    side=1;
    displayName="OPSG Ka60 Kasatka";
    editorSubcategory = "EdSubcat_Helicopters";
    hiddenSelectionsTextures[]=
    {"a3\air_f\heli_light_02\data\heli_light_02_ext_co.paa"
    };
    crew="A3M_OPSG_Pilot_B";
    typicalCargo[]={"A3M_OPSG_Pilot_B"};
  };


  class A3M_OPSG_AI_Medic_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_FirstAidKit {count=10;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class A3M_OPSG_Medic_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_FirstAidKit {count=10;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class A3M_OPSG_Autorifleman_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class A3M_OPSG_Marksman_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class A3M_OPSG_Engineer_pack: B_FieldPack_blk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
