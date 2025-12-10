class CfgPatches
{
	class A3M_PMCSIM
	{
		units[]={};
		requiredAddons[]=
		{
			"A3_Structures_F_Civ_Lamps"
		};
		weapons[]={};
		requiredVersion=1;
	};
};
class CfgSounds
{
	sounds[]=
	{
		"A3M_Buy",
		"A3M_deuce",
		"A3M_RTB",
		"A3M_Standby",
		"A3M_MissionAccepted",
		"A3M_MissionFailed",
		"A3M_WFP",
		"A3M_T9Cinematic1",
		"A3M_alarmed",
		"A3M_PLChant",
		"A3M_RadioChatter1",
		"A3M_RadioChatter2",
		"A3M_Snort",
		"A3M_Speech1",
		"A3M_Speech2",
		"A3M_Speech3",
		"A3M_CrowdPanic",
		"A3M_StageDeath",
		"A3M_GetDown",
		"A3M_KYHD",
		"A3M_GNA"
	};
	class A3M_buy
	{
		name="Buy Sound (Cha-ching)";
		sound[]=
		{
			"PMCSimulator\sounds\buy.ogg",
			0.5,
			1
		};
		titles[]=
		{
			1,
			"*You have made a purchase*"
		};
	};
	class A3M_deuce
	{
		name="Deuce and a Half - Truck";
		sound[]=
		{
			"PMCSimulator\sounds\deuce.ogg",
			0.80000001,
			1
		};
		titles[]=
		{
			1,
			"*Travelling to Destination: Standby*"
		};
	};
	class A3M_RTB
	{
		name="Return To Base";
		sound[]=
		{
			"PMCSimulator\sounds\AORTB.ogg",
			0.80000001,
			1
		};
		titles[]=
		{
			1,
			"*Radio Message: Return To Base*"
		};
	};
	class A3M_Standby
	{
		name="Standby for Radio Transmission";
		sound[]=
		{
			"PMCSimulator\sounds\AOSB.ogg",
			0.80000001,
			1
		};
		titles[]=
		{
			1,
			"*Radio Message: Standby for Transmission*"
		};
	};
	class A3M_MissionAccepted
	{
		name="Mission Accepted";
		sound[]=
		{
			"PMCSimulator\sounds\MissionAcc.ogg",
			0.5,
			1
		};
		titles[]=
		{
			1,
			"*You have accepted a contract*"
		};
	};
	class A3M_MissionFailed
	{
		name="Mission Failed";
		sound[]=
		{
			"PMCSimulator\sounds\MissionFail.ogg",
			0.5,
			1
		};
		titles[]=
		{
			1,
			"*You have failed to complete this contract*"
		};
	};
	class A3M_WFP
	{
		name="Wildfire Protocal Message}";
		sound[]=
		{
			"PMCSimulator\sounds\WildProEvac.ogg",
			0.5,
			1
		};
		titles[]=
		{
			1,
			"* Radio Message: WILDFIRE PROTOCOL. EVACUATE! *"
		};
	};
	class A3M_T9Cinematic1
	{
		name="A3M_T9Cinematic1";
		sound[]=
		{
			"PMCSimulator\sounds\T9Cinematic1.ogg",
			0.30000001,
			1
		};
		titles[]={};
	};
	class A3M_Alarmed
	{
		name="High - Low Alarm";
		sound[]=
		{
			"PMCSimulator\sounds\alarmc1.ogg",
			0.94999999,
			1
		};
		titles[]={};
	};
	class A3M_PLChant
	{
		name="Stop The Pipeline Chant";
		sound[]=
		{
			"PMCSimulator\sounds\noPL.ogg",
			0.75,
			1
		};
		titles[]={};
	};
	class A3M_RadioChatter1
	{
		name="Radio Chatter 1";
		sound[]=
		{
			"PMCSimulator\sounds\Chatter1.ogg",
			0.34999999,
			1
		};
		titles[]={};
	};
	class A3M_RadioChatter2
	{
		name="Radio Chatter 2";
		sound[]=
		{
			"PMCSimulator\sounds\Chatter2.ogg",
			0.34999999,
			1
		};
		titles[]={};
	};
	class A3M_Snort
	{
		name="Snort";
		sound[]=
		{
			"PMCSimulator\sounds\snort.ogg",
			0.80000001,
			1
		};
		titles[]=
		{
			1,
			"*You have consumed 1g of cocaine*"
		};
	};
	class A3M_Speech1
	{
		name="Speech 1 (Rus)";
		sound[]=
		{
			"PMCSimulator\sounds\speech1.ogg",
			0.80000001,
			1
		};
		titles[]={};
	};
	class A3M_Speech2
	{
		name="Speech 2 (Rus)";
		sound[]=
		{
			"PMCSimulator\sounds\speech2.ogg",
			0.80000001,
			1
		};
		titles[]={};
	};
	class A3M_Speech3
	{
		name="Speech 3 (Rus)";
		sound[]=
		{
			"PMCSimulator\sounds\speech3.ogg",
			0.80000001,
			1
		};
		titles[]={};
	};
	class A3M_CrowdPanic
	{
		name="Panic Crowd";
		sound[]=
		{
			"PMCSimulator\sounds\CrowdPanic.ogg",
			0.40000001,
			1
		};
		titles[]={};
	};
	class A3M_StageDeath
	{
		name="Death Behind Mic";
		sound[]=
		{
			"PMCSimulator\sounds\StageDeath.ogg",
			1,
			1
		};
		titles[]={};
	};
	class A3M_GetDown
	{
		name="Get Down";
		sound[]=
		{
			"PMCSimulator\sounds\GetDown.ogg",
			1,
			1
		};
		titles[]={};
	};
	class A3M_KYHD
	{
		name="Keep Your Head Down";
		sound[]=
		{
			"PMCSimulator\sounds\KeepYourHeadDown.ogg",
			1,
			1
		};
		titles[]={};
	};
	class A3M_GNA
	{
		name="Greek National Anthem";
		sound[]=
		{
			"PMCSimulator\sounds\gna.ogg",
			1,
			1
		};
		titles[]={};
	};
};
class CfgMusic
{
	tracks[]=
	{
		"Assigned",
		"gearup",
		"failure",
		"success",
		"dead",
		"mexmaf1"
	};
	class Assigned
	{
		name="Assigned";
		sound[]=
		{
			"PMCSimulator\music\Assigned.ogg",
			"db+0",
			1
		};
	};
	class gearup
	{
		name="Ready Room Music";
		sound[]=
		{
			"PMCSimulator\music\gearup.ogg",
			"db+1.05",
			1
		};
	};
	class failure
	{
		name="Failure";
		sound[]=
		{
			"PMCSimulator\music\failure.ogg",
			"db+0",
			1
		};
	};
	class success
	{
		name="Success";
		sound[]=
		{
			"PMCSimulator\music\success.ogg",
			"db+0",
			1
		};
	};
	class dead
	{
		name="Death To Islam";
		sound[]=
		{
			"\PMCSimulator\music\dead.ogg",
			"db+0",
			1
		};
	};
	class MexMaf1
	{
		name="Mexican Mafia";
		sound[]=
		{
			"\PMCSimulator\music\mexmaf1.ogg",
			"db+0",
			1
		};
	};
};
class CfgMissions
{
	class MPMissions
	{
		class MP_PMC_Simulator_Altis
		{
			briefingName="PMC Simulator (Total Modification) (Persistent COOP 42)";
			directory="PMCSimulator\PMC_Simulator.Altis";
			author="PMC Revival";
			overviewScript="\PMCSimulator\overviewScript.sqf";
			overviewPicture="\PMCSimulator\Loadimg.paa";
			overviewText="PMC Simulator is a multiplayer mode designed to simulate working as a Private Military Contractor in a conflict zone. You will be required to carry out security and paramilitary operations pursuant to your contracts with OPSG, and you will be paid based on performance per operation.";
		};
	};
};
