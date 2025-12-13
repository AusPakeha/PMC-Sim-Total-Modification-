class DefaultEventhandlers;
class CfgPatches
{
	class A3M_Char_F
	{
		units[]=
		{
			"Astral_VIP_0",
			"A3M_OPSG_Unarmed",
			"A3M_OPSG_CQB",
			"A3M_OPSG_Assault_Light",
			"A3M_OPSG_Assault",
			"A3M_OPSG_Assault_Heavy",
			"A3M_OPSG_Grenadier",
			"A3M_OPSG_Autorifleman",
			"A3M_OPSG_Marksman",
			"A3M_OPSG_Pilot",
			"A3M_OPSG_Medic",
			"A3M_OPSG_Medic_Unarmed",
			"A3M_APFC_ME_Rifleman_1",
			"A3M_APFC_ME_Rifleman_AT",
			"A3M_APFC_ME_Rifleman_2",
			"A3M_APFC_ME_AutoRifleman",
			"A3M_APFC_ME_Rifleman_Elite",
			"A3M_OPSG_UnarmedTC",
			"A3M_OPSG_Engineer",
			"A3M_APFC_ME_Criminal",
			"A3M_APFC_ME_Medic",
			"A3M_APFC_ME_Engineer"
		};
		weapons[]=
		{
			"A3M_MXM_Black_F",
			"A3M_BusinessSuitA",
			"A3M_APFC_ME_uni_1",
			"A3M_APFC_ME_uni_2",
			"A3M_APFC_Tbn",
			"A3M_APFC_A9Mask"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Weapons_F_Rifles_MX"
		};
	};
};
class CfgFactionClasses
{
	class opsg_faction
	{
		displayName="Orion PSG";
		author="Cody Salazar (Fr33d0m)";
		icon="";
		priority=1;
		side=1;
	};
	class Astral_faction
	{
		displayName="Astral Corporation";
		author="Cody Salazar (Fr33d0m)";
		icon="";
		priority=1;
		side=2;
	};
	class apfc_faction
	{
		displayName="Altian Peoples Freedom Corps";
		author="Cody Salazar (Fr33d0m)";
		icon="";
		priority=3;
		side=0;
	};
};
class CfgVehicleClasses
{
	class opsg_units
	{
		displayName="OPSG Contractors";
	};
	class Astral_units
	{
		displayName="VIPs";
	};
	class apfc_units
	{
		displayName="Freedom Fighters";
	};
};
class UniformSlotInfo;
class CfgVehicles
{
	class B_Soldier_base_F;
	class A3M_OPSG_Unarmed: B_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		_generalMacro="A3M_OPSG_Unarmed";
		scope=2;
		displayName="Operative";
		faction="opsg_faction";
		vehicleClass="opsg_units";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="U_Marshal";
		backpack="";
		linkedItems[]=
		{
			"H_Cap_usblack",
			"ItemMap"
		};
		respawnLinkedItems[]=
		{
			"H_Cap_usblack",
			"ItemMap"
		};
		weapons[]={};
		respawnweapons[]={};
		magazines[]={};
		Respawnmagazines[]={};
	};
	class A3M_OPSG_UnarmedTC: B_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		_generalMacro="A3M_OPSG_UnarmedTC";
		scope=2;
		displayName="Team Coordinator";
		faction="opsg_faction";
		vehicleClass="opsg_units";
		icon="iconManLeader";
		nakedUniform="U_BasicBody";
		uniformClass="U_Marshal";
		backpack="";
		linkedItems[]=
		{
			"H_Beret_Colonel",
			"ItemMap"
		};
		respawnLinkedItems[]=
		{
			"H_Beret_Colonel",
			"ItemMap"
		};
		weapons[]={};
		respawnweapons[]={};
		magazines[]={};
		Respawnmagazines[]={};
	};
	class A3M_OPSG_CQB: B_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		_generalMacro="A3M_OPSG_CQB";
		scope=2;
		displayName="Operative I (Guard)";
		faction="opsg_faction";
		vehicleClass="opsg_units";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="U_Marshal";
		backpack="";
		linkedItems[]=
		{
			"V_PlateCarrierIAGL_oli",
			"H_Cap_usblack",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrierIAGL_oli",
			"H_Cap_usblack",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SMG_02_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"SMG_02_F",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class A3M_OPSG_Assault_Light: B_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		_generalMacro="A3M_OPSG_Assault_Light";
		scope=2;
		displayName="Operative II (Light Assault)";
		faction="opsg_faction";
		vehicleClass="opsg_units";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="U_Marshal";
		backpack="";
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_Cap_usblack",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_Cap_usblack",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"srifle_DMR_05_blk_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"srifle_DMR_05_blk_F",
			"Binocular"
		};
		magazines[]=
		{
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"HandGrenade",
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class A3M_OPSG_Assault: B_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		_generalMacro="iconMan";
		scope=2;
		displayName="Operative III (Assault)";
		faction="opsg_faction";
		vehicleClass="opsg_units";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="U_Marshal";
		backpack="";
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"arifle_MX_Black_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"arifle_MX_Black_F",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"HandGrenade",
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class A3M_OPSG_Assault_Heavy: B_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		_generalMacro="A3M_OPSG_Assault_Heavy";
		scope=2;
		displayName="Operative IV (Hvy Assault)";
		faction="opsg_faction";
		vehicleClass="opsg_units";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="U_Marshal";
		backpack="";
		linkedItems[]=
		{
			"V_PlateCarrierIAGL_oli",
			"H_HelmetB",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrierIAGL_oli",
			"H_HelmetB",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"srifle_DMR_03_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"srifle_DMR_03_F",
			"Binocular"
		};
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"HandGrenade",
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class A3M_OPSG_Grenadier: B_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		_generalMacro="A3M_OPSG_Grenadier";
		scope=2;
		displayName="Operative V  (Grenadier)";
		faction="opsg_faction";
		vehicleClass="opsg_units";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="U_Marshal";
		backpack="";
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"arifle_MX_GL_Black_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"arifle_MX_GL_Black_F",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"HandGrenade",
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class A3M_OPSG_Autorifleman: B_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		_generalMacro="A3M_OPSG_Autorifleman";
		scope=2;
		displayName="Operative VI  (Autorifleman)";
		faction="opsg_faction";
		vehicleClass="opsg_units";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="U_Marshal";
		backpack="B_AssaultPack_rgr";
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"MMG_02_black_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"MMG_02_black_F",
			"Binocular"
		};
		magazines[]=
		{
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"HandGrenade",
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class A3M_OPSG_Marksman: B_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		_generalMacro="A3M_OPSG_Marksman";
		scope=2;
		displayName="Operative VII  (Marksman)";
		faction="opsg_faction";
		vehicleClass="opsg_units";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="U_Marshal";
		backpack="B_AssaultPack_rgr";
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"A3M_MXM_Black_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"A3M_MXM_Black_F",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"HandGrenade",
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class A3M_OPSG_Pilot: B_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		_generalMacro="A3M_OPSG_Pilot";
		scope=2;
		displayName="Operative VIII (Pilot)";
		faction="opsg_faction";
		vehicleClass="opsg_units";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="U_Marshal";
		backpack="B_Parachute";
		linkedItems[]=
		{
			"V_RebreatherB",
			"H_PilotHelmetHeli_O",
			"NVGoggles_INDEP",
			"G_Goggles_VR",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_RebreatherB",
			"H_PilotHelmetHeli_O",
			"NVGoggles_INDEP",
			"G_Goggles_VR",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SMG_01_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"SMG_01_F",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01"
		};
		Respawnmagazines[]=
		{
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01"
		};
	};
	class B_Medic_F: B_Soldier_base_F
	{
	};
	class A3M_OPSG_Medic: B_Medic_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		_generalMacro="A3M_OPSG_Medic";
		scope=2;
		displayName="Operative IX (AI Medic)";
		faction="opsg_faction";
		vehicleClass="opsg_units";
		uniformClass="U_Marshal";
		backpack="B_AssaultPack_rgr_Medic";
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"arifle_MX_Black_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"arifle_MX_Black_F",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"HandGrenade",
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class A3M_OPSG_Medic_Unarmed: B_Medic_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		_generalMacro="A3M_OPSG_Medic_Unarmed";
		scope=2;
		displayName="Operative IX (Medic)";
		faction="opsg_faction";
		vehicleClass="opsg_units";
		uniformClass="U_Marshal";
		linkedItems[]=
		{
			"ItemMap"
		};
		respawnLinkedItems[]=
		{
			"ItemMap"
		};
		weapons[]={};
		respawnweapons[]={};
		magazines[]={};
		Respawnmagazines[]={};
	};
	class B_Soldier_03_f: B_Soldier_base_F
	{
	};
	class B_engineer_F: B_Soldier_03_f
	{
	};
	class A3M_OPSG_Engineer: B_engineer_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		scope=2;
		displayName="Operative X (Engineer)";
		faction="opsg_faction";
		vehicleClass="opsg_units";
		uniformClass="U_Marshal";
		backpack="B_FieldPack_cbr_Repair";
		linkedItems[]=
		{
			"ItemMap"
		};
		respawnLinkedItems[]=
		{
			"ItemMap"
		};
		weapons[]={};
		respawnweapons[]={};
		magazines[]={};
		Respawnmagazines[]={};
	};
	class Civilian;
	class Civilian_F: Civilian
	{
	};
	class Astral_VIP_0: Civilian_F
	{
		author="Cody Salazar (Fr33d0m)";
		_generalMacro="Astral_VIP_0";
		scope=2;
		displayName="Astral Corporation VIP 1";
		faction="astral_faction";
		vehicleClass="astral_units";
		icon="iconMan";
		model="\A3M_Char\A3M_BusinessSuit_A.p3d";
		modelSides[]={3,1};
		camouflage=1.4;
		nakedUniform="U_BasicBody";
		uniformClass="A3M_BusinessSuitA";
		backpack="";
		linkedItems[]=
		{
			"ItemMap"
		};
		respawnLinkedItems[]=
		{
			"ItemMap"
		};
		weapons[]={};
		respawnweapons[]={};
		magazines[]={};
		Respawnmagazines[]={};
		hiddenSelections[]=
		{
			"Camo",
			"insiginia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3M_Char\uniforms\Suit_A_co.paa"
		};
		hideProxySelections[]=
		{
			"ghillie_hide"
		};
	};
	class O_Soldier_base_F;
	class A3M_APFC_ME_Rifleman_1: O_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		scope=2;
		displayName="Freedom Fighter (Rifleman)";
		faction="apfc_faction";
		vehicleClass="apfc_units";
		icon="iconMan";
		model="A3M_Char\A3M_APFC_ME_1.p3d";
		modelSides[]={3,1};
		camouflage=1.4;
		nakedUniform="U_BasicBody";
		uniformClass="A3M_APFC_ME_uni_1";
		backpack="";
		linkedItems[]=
		{
			"V_BandollierB_khk",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_BandollierB_khk",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"arifle_AK12_F",
			"hgun_Pistol_01_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"arifle_AK12_F",
			"hgun_Pistol_01_F",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_762x39_Mag_F",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"HandGrenade",
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			"30Rnd_762x39_Mag_F",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"HandGrenade",
			"HandGrenade"
		};
		hiddenSelections[]=
		{
			"Camo",
			"insiginia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3M_Char\uniforms\A3M_APFC_ME_1_co.paa"
		};
		hideProxySelections[]=
		{
			"ghillie_hide"
		};
	};
	class A3M_APFC_ME_Rifleman_2: O_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		scope=2;
		displayName="Freedom Fighter (Rifleman II)";
		faction="apfc_faction";
		vehicleClass="apfc_units";
		icon="iconMan";
		model="A3M_Char\A3M_APFC_ME_2.p3d";
		modelSides[]={3,1};
		camouflage=1.4;
		nakedUniform="U_BasicBody";
		uniformClass="A3M_APFC_ME_uni_2";
		backpack="B_FieldPack_cbr";
		linkedItems[]=
		{
			"V_Chestrig_blk",
			"A3M_APFC_Tbn",
			"G_Bandanna_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_Chestrig_blk",
			"A3M_APFC_Tbn",
			"G_Bandanna_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"arifle_AKM_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"arifle_AKM_F",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"HandGrenade",
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"HandGrenade",
			"HandGrenade"
		};
		hiddenSelections[]=
		{
			"Camo",
			"insiginia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3M_Char\uniforms\A3M_APFC_ME_2_co.paa"
		};
		hideProxySelections[]=
		{
			"ghillie_hide"
		};
	};
	class A3M_APFC_ME_Rifleman_AT: O_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		scope=2;
		displayName="Freedom Fighter (AT Rifleman)";
		faction="apfc_faction";
		vehicleClass="apfc_units";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="A3M_APFC_ME_uni_1";
		backpack="B_TacticalPack_blk";
		linkedItems[]=
		{
			"V_BandollierB_khk",
			"H_ShemagOpen_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_BandollierB_khk",
			"H_ShemagOpen_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"arifle_AKM_F",
			"Binocular",
			"launch_RPG32_F",
			"hgun_Rook40_snds_F"
		};
		respawnweapons[]=
		{
			"arifle_AKM_F",
			"Binocular",
			"launch_RPG32_F",
			"hgun_Rook40_snds_F"
		};
		magazines[]=
		{
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"HandGrenade",
			"HandGrenade",
			"RPG32_F",
			"RPG32_F"
		};
		Respawnmagazines[]=
		{
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"HandGrenade",
			"HandGrenade",
			"RPG32_F",
			"RPG32_F"
		};
	};
	class A3M_APFC_ME_AutoRifleman: O_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		scope=2;
		displayName="Freedom Fighter (Autorifleman)";
		faction="apfc_faction";
		vehicleClass="apfc_units";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="A3M_APFC_ME_uni_1";
		backpack="B_FieldPack_cbr";
		linkedItems[]=
		{
			"V_BandollierB_khk",
			"G_Bandanna_aviator",
			"A3M_APFC_Tbn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_BandollierB_khk",
			"G_Bandanna_aviator",
			"A3M_APFC_Tbn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"LMG_03_F",
			"hgun_ACPC2_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"LMG_03_F",
			"hgun_ACPC2_F",
			"Binocular"
		};
		magazines[]=
		{
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"HandGrenade",
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class A3M_APFC_ME_Rifleman_Elite: O_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		scope=2;
		displayName="Freedom Fighter (Elite)";
		faction="apfc_faction";
		vehicleClass="apfc_units";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="A3M_APFC_ME_uni_2";
		backpack="B_FieldPack_blk";
		linkedItems[]=
		{
			"V_BandollierB_blk",
			"A3M_APFC_Tbn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_BandollierB_blk",
			"A3M_APFC_Tbn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"arifle_ARX_blk_F",
			"hgun_Rook40_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"arifle_ARX_blk_F",
			"hgun_Rook40_F",
			"Binocular"
		};
		magazines[]=
		{
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"HandGrenade",
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class A3M_APFC_ME_Criminal: O_Soldier_base_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		scope=2;
		displayName="Freedom Fighter (Criminal)";
		faction="apfc_faction";
		vehicleClass="apfc_units";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="A3M_APFC_ME_uni_2";
		backpack="B_FieldPack_blk";
		linkedItems[]=
		{
			"ItemMap",
			"G_Bandanna_aviator",
			"V_BandollierB_blk",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"G_Bandanna_aviator",
			"V_BandollierB_blk",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SMG_01_F",
			"hgun_P07_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"SMG_01_F",
			"hgun_P07_F",
			"Binocular"
		};
		magazines[]=
		{
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"HandGrenade",
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class O_G_medic_F: O_Soldier_base_F
	{
	};
	class A3M_APFC_ME_Medic: O_G_medic_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		scope=2;
		displayName="Anon Medic";
		faction="apfc_faction";
		vehicleClass="apfc_units";
		uniformClass="A3M_APFC_ME_uni_2";
		backpack="B_FieldPack_ocamo_Medic";
		linkedItems[]=
		{
			"V_BandollierB_blk",
			"A3M_APFC_A9Mask",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_BandollierB_blk",
			"A3M_APFC_A9Mask",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"hgun_PDW2000_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"hgun_PDW2000_F",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class O_G_engineer_F: O_Soldier_base_F
	{
	};
	class A3M_APFC_ME_Engineer: O_G_engineer_F
	{
		author="Cody Salazar AKA TMN Fr33d0m";
		scope=2;
		displayName="Freedom Builder (Engineer)";
		faction="apfc_faction";
		vehicleClass="apfc_units";
		uniformClass="A3M_APFC_ME_uni_2";
		backpack="B_FieldPack_cbr_Repair";
		linkedItems[]=
		{
			"V_BandollierB_blk",
			"A3M_APFC_Tbn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_BandollierB_blk",
			"A3M_APFC_Tbn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"arifle_AKS_F",
			"hgun_Pistol_heavy_02_F",
			"Binocular"
		};
		respawnweapons[]=
		{
			"arifle_AKS_F",
			"hgun_Pistol_heavy_02_F",
			"Binocular"
		};
		magazines[]=
		{
			"6Rnd_45ACP_Cylinder",
			"6Rnd_45ACP_Cylinder",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"HandGrenade",
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			"6Rnd_45ACP_Cylinder",
			"6Rnd_45ACP_Cylinder",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"HandGrenade",
			"HandGrenade"
		};
	};
};
class CfgGroups
{
	class East
	{
		class apfc_faction
		{
			name="APFC";
			class Infantry
			{
				name="Freedom Fighter Cells";
				class A3M_apfc_InfSentry
				{
					name="Light Senty";
					side=0;
					faction="apfc_faction";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_2";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class A3M_apfc_InfSquad
				{
					name="Death Squad";
					side=0;
					faction="apfc_faction";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_AT";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_2";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="A3M_APFC_ME_AutoRifleman";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_Elite";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=0;
						vehicle="A3M_APFC_ME_AutoRifleman";
						rank="CORPORAL";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=0;
						vehicle="A3M_APFC_ME_Medic";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
				class A3M_apfc_InfSquad_Weapons
				{
					name="Elite Death Squad";
					side=0;
					faction="apfc_faction";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_Elite";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_Elite";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="A3M_APFC_ME_AutoRifleman";
						rank="SERGEANT";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=0;
						vehicle="A3M_APFC_ME_AutoRifleman";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_AT";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit6
					{
						side=0;
						vehicle="A3M_APFC_ME_Medic";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit7
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_2";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
				class A3M_apfc_InfTeam
				{
					name="Terror Cell";
					side=0;
					faction="apfc_faction";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_2";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="A3M_APFC_ME_AutoRifleman";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="A3M_APFC_ME_Medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class A3M_apfc_InfTeam_AA
				{
					name="Heavy Rocket Team";
					side=0;
					faction="apfc_faction";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_AT";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_AT";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="A3M_APFC_ME_AutoRifleman";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class A3M_apfc_InfTeam_AT
				{
					name="Light Rocket Team";
					side=0;
					faction="apfc_faction";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_AT";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_2";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class A3M_apfc_InfWepTeam
				{
					name="Elite Weapons Team";
					side=0;
					faction="apfc_faction";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="A3M_APFC_ME_AutoRifleman";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_Elite";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="A3M_APFC_ME_AutoRifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class A3M_apfc_InfSupTeam
				{
					name="Light Support Team";
					side=0;
					faction="apfc_faction";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_AT";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="A3M_APFC_ME_Medic";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class A3M_apfc_InfHQ
				{
					name="Advanced Terror Cell";
					side=0;
					faction="apfc_faction";
					rarityGroup=0;
					class Unit0
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_AT";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="A3M_APFC_ME_Medic";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="A3M_APFC_ME_AutoRifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_Elite";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class A3M_apfc_ReconSentry
				{
					name="Freedom Fighter Patrol";
					side=0;
					faction="apfc_faction";
					rarityGroup=0;
					class Unit0
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_2";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
			};
			class Motorized
			{
				name="Motorized Infantry";
				class A3M_apfc_MotInf_Team
				{
					name="Motorized Fighters";
					side=0;
					faction="apfc_faction";
					rarityGroup=0.2;
					class Unit0
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_G_Offroad_01_F";
						rank="SERGEANT";
						position[]={0,-10,0};
					};
					class Unit2
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_AT";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_2";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit4
					{
						side=0;
						vehicle="A3M_APFC_ME_Medic";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class Unit5
					{
						side=0;
						vehicle="A3M_APFC_ME_AutoRifleman";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
				};
				class A3M_apfc_Technicals
				{
					name="Technical Assets";
					side=0;
					faction="apfc_faction";
					rarityGroup=0.2;
					class Unit0
					{
						side=0;
						vehicle="O_G_Offroad_01_armed_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_G_Offroad_01_armed_F";
						rank="SERGEANT";
						position[]={10,-10,0};
					};
					class Unit2
					{
						side=0;
						vehicle="O_G_Offroad_01_armed_F";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
				};
			};
			class Support
			{
				name="Support Infantry";
				class A3M_apfc_Support_CLS
				{
					name="Anon Medics";
					side=0;
					faction="apfc_faction";
					rarityGroup=0.1;
					class Unit0
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="A3M_APFC_ME_Medic";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="A3M_APFC_ME_Medic";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_2";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class A3M_apfc_Support_ENG
				{
					name="Freedom Builders";
					side=0;
					faction="apfc_faction";
					rarityGroup=0.1;
					class Unit0
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="A3M_APFC_ME_AutoRifleman";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="A3M_APFC_ME_Engineer";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="A3M_APFC_ME_Engineer";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class A3M_apfc_Support_EOD
				{
					name="Peoples IED Team";
					side=0;
					faction="apfc_faction";
					rarityGroup=0.1;
					class Unit0
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_AT";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="A3M_APFC_ME_Engineer";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="A3M_APFC_ME_Rifleman_1";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
			};
		};
	};
	class West
	{
		class opsg_faction
		{
			name="OPSG";
			class Infantry
			{
				name="Private Security Team";
				class A3M_opsg_InfSentry
				{
					name="Light Senty";
					side=1;
					faction="opsg_faction";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="A3M_OPSG_CQB";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="A3M_OPSG_Assault_Light";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class A3M_opsg_InfSquad
				{
					name="Assault Detail";
					side=1;
					faction="opsg_faction";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="A3M_OPSG_Assault";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="A3M_OPSG_Assault_Heavy";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="A3M_OPSG_Grenadier";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="A3M_OPSG_Autorifleman";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="A3M_OPSG_Medic";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="A3M_OPSG_Assault_Light";
						rank="CORPORAL";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=1;
						vehicle="A3M_OPSG_Marksman";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=1;
						vehicle="A3M_OPSG_Grenadier";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
				class A3M_opsg_InfSquad_Weapons
				{
					name="Heavy Assault Detail";
					side=1;
					faction="opsg_faction";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="A3M_OPSG_Assault_Heavy";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="A3M_OPSG_Assault";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="A3M_OPSG_Autorifleman";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="A3M_OPSG_Assault";
						rank="SERGEANT";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="A3M_OPSG_Assault_Heavy";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="A3M_OPSG_Marksman";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit6
					{
						side=1;
						vehicle="A3M_OPSG_Medic";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit7
					{
						side=1;
						vehicle="A3M_OPSG_Assault_Light";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
				class A3M_opsg_InfTeam
				{
					name="Light Security Team";
					side=1;
					faction="opsg_faction";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="A3M_OPSG_Assault_Light";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="A3M_OPSG_Assault";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="A3M_OPSG_Assault";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="A3M_OPSG_Medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class A3M_OPSG_InfWepTeam
				{
					name="Heavy Security Team";
					side=1;
					faction="opsg_faction";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="A3M_OPSG_Assault_Heavy";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="A3M_OPSG_Autorifleman";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="A3M_OPSG_Marksman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="A3M_OPSG_Medic";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class A3M_opsg_InfSupTeam
				{
					name="Light Support Team";
					side=1;
					faction="opsg_faction";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="A3M_OPSG_CQB";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="A3M_OPSG_Medic";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="A3M_OPSG_Medic";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="A3M_OPSG_Assault_Light";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class A3M_opsg_InfHQ
				{
					name="Command Security Unit";
					side=1;
					faction="opsg_faction";
					rarityGroup=0;
					class Unit0
					{
						side=1;
						vehicle="A3M_OPSG_Unarmed";
						rank="MAJOR";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="A3M_OPSG_Assault_Heavy";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="A3M_OPSG_Medic";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="A3M_OPSG_Grenadier";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="A3M_OPSG_Autorifleman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class A3M_opsg_ReconSentry
				{
					name="Light Recon Detail";
					side=1;
					faction="opsg_faction";
					rarityGroup=0;
					class Unit0
					{
						side=1;
						vehicle="A3M_OPSG_Marksman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="A3M_OPSG_Marksman";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
			};
			class Motorized
			{
				name="Motorized Infantry";
				class A3M_opsg_MotInf_Team
				{
					name="Motorized Fighters";
					side=1;
					faction="opsg_faction";
					rarityGroup=0.2;
					class Unit0
					{
						side=1;
						vehicle="A3M_OPSG_Assault_Heavy";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="B_Truck_01_covered_F";
						rank="SERGEANT";
						position[]={0,-10,0};
					};
					class Unit2
					{
						side=1;
						vehicle="A3M_OPSG_Autorifleman";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="A3M_OPSG_Assault_Heavy";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit4
					{
						side=1;
						vehicle="A3M_OPSG_Medic";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="A3M_OPSG_Grenadier";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
				};
				class A3M_opsg_Technicals
				{
					name="Ground Control Team";
					side=1;
					faction="opsg_faction";
					rarityGroup=0.2;
					class Unit0
					{
						side=1;
						vehicle="B_MRAP_01_hmg_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="B_MRAP_01_hmg_F";
						rank="SERGEANT";
						position[]={10,-10,0};
					};
					class Unit2
					{
						side=1;
						vehicle="B_MRAP_01_hmg_F";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
				};
			};
			class Support
			{
				name="Medical Support Infantry";
				class A3M_opsg_Support_CLS
				{
					name="Medical Support Team";
					side=1;
					faction="opsg_faction";
					rarityGroup=0.1;
					class Unit0
					{
						side=1;
						vehicle="A3M_OPSG_Assault";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="A3M_OPSG_Assault";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="A3M_OPSG_Medic";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="A3M_OPSG_Medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class A3M_opsg_Support_ENG
				{
					name="Engineering Unit";
					side=1;
					faction="opsg_faction";
					rarityGroup=0.1;
					class Unit0
					{
						side=1;
						vehicle="A3M_OPSG_Assault";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="A3M_OPSG_Assault";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="A3M_OPSG_Medic";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="A3M_OPSG_Medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
			};
		};
	};
};
class CfgWeapons
{
	class arifle_MXM_F
	{
	};
	class arifle_MXM_Black_F: arifle_MXM_F
	{
	};
	class A3M_MXM_Black_F: arifle_MXM_Black_F
	{
		scope=2;
		displayName="A3M MX-M Marksman Elite";
		descriptionShort="A finely tuned, semi-automatic Marksman MX-M";
		maxRecoilSway=0.011;
		swayDecaySpeed=1.05;
		modes[]=
		{
			"Single",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_AMS";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F
	{
		type=801;
	};
	class A3M_BusinessSuitA: ItemCore
	{
		scope=2;
		allowedSlots[]={901};
		displayName="Business Suit (B/W)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="A3M_Char\A3M_BusinessSuit_A.p3d";
			uniformClass="Astral_VIP_0";
			containerClass="Supply90";
			mass=80;
		};
	};
	class A3M_APFC_ME_uni_1: ItemCore
	{
		scope=2;
		allowedSlots[]={901};
		displayName="APFC Middle Eastern Attire 1";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="A3M_Char\A3M_APFC_ME_1.p3d";
			uniformClass="A3M_APFC_ME_Rifleman_1";
			containerClass="Supply90";
			mass=80;
		};
	};
	class A3M_APFC_ME_uni_2: ItemCore
	{
		scope=2;
		allowedSlots[]={901};
		displayName="APFC Middle Eastern Attire 2";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="A3M_Char\A3M_APFC_ME_2.p3d";
			uniformClass="A3M_APFC_ME_Rifleman_2";
			containerClass="Supply90";
			mass=80;
		};
	};
	class HeadgearItem: InventoryItem_Base_F
	{
		allowedSlots[]={901,605};
		type=605;
		hiddenSelections[]={};
		hitpointName="HitHead";
	};
	class A3M_APFC_Tbn: ItemCore
	{
		scope=2;
		displayName="APFC Middle Eastern Head Wrap";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\A3M_Char\A3M_APFC_TbnBlk.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\A3M_Char\A3M_APFC_TbnBlk.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			armor=0;
			passThrough=1;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class A3M_APFC_A9Mask: ItemCore
	{
		scope=2;
		displayName="Fawkes Mask (Anonymous)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\A3M_Char\A3M_APFC_A9.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\A3M_Char\A3M_APFC_A9.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			armor=0;
			passThrough=1;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
};
