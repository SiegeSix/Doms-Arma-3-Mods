class Dynamic_Groups { //format: {"Group Name",{"Group","Roles","Matching","Role","Configs"},"Conditions for the group to be shown"}
	faction_name = "CSAT";
	group_setup[] = {
		{"Command",{"officer","medic","uavop"},"true"},
		{"Alpha",{"squadlead","teamlead","medic","rifleman","rifleman","teamlead","engineer","rifleman","rifleman"},"true"},
		{"Bravo",{"squadlead","teamlead","medic","rifleman","rifleman","teamlead","engineer","rifleman","rifleman"},"count playableUnits > 5"},
		{"Charlie",{"squadlead","teamlead","medic","rifleman","rifleman","teamlead","engineer","rifleman","rifleman"},"count playableUnits > 15"},
		{"Delta",{"squadlead","teamlead","medic","rifleman","rifleman","teamlead","engineer","rifleman","rifleman"},"count playableUnits > 25"},
		{"Raptor",{"pilot","pilot"},"true"},
		{"Spectre",{"pilot","pilot"},"count playableUnits > 10"},
		{"Warpig",{"commander","crewman","crewman"},"true"},
		{"Black Widow",{"commander","crewman","crewman"},"count playableUnits > 14"},
		{"FSG",{"squadlead","rifleman","rifleman"},"true"}
	};
};

#include "Config_Roles.hpp"
#include "Config_Logi.hpp"