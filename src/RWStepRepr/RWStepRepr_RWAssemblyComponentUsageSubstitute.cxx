//gka 05.03.99 S4134 upgrade from CD to DIS
#include <RWStepRepr_RWAssemblyComponentUsageSubstitute.ixx>
#include <StepRepr_AssemblyComponentUsage.hxx>


#include <Interface_EntityIterator.hxx>


#include <StepRepr_AssemblyComponentUsageSubstitute.hxx>


RWStepRepr_RWAssemblyComponentUsageSubstitute::RWStepRepr_RWAssemblyComponentUsageSubstitute () {}

void RWStepRepr_RWAssemblyComponentUsageSubstitute::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepRepr_AssemblyComponentUsageSubstitute)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,4,ach,"assembly_component_usage_substitute")) return;

	// --- inherited field : name ---

	Handle(TCollection_HAsciiString) aName;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadString (num,1,"name",ach,aName);

	// --- inherited field : definition ---

	Handle(TCollection_HAsciiString) aDef;
	if (data->IsParamDefined (num,2)) { //gka 05.03.99 S4134 upgrade from CD to DIS
	  //szv#4:S4163:12Mar99 `Standard_Boolean stat2 =` not needed
	  data->ReadString (num,2,"definition",ach,aDef);
	}
	// --- own field : base ---

	Handle(StepRepr_AssemblyComponentUsage) aBase;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat3 =` not needed
	data->ReadEntity(num, 3,"base", ach, STANDARD_TYPE(StepRepr_AssemblyComponentUsage), aBase);

	// --- own field : substitute ---

	Handle(StepRepr_AssemblyComponentUsage) aSubs;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat4 =` not needed
	data->ReadEntity(num, 4,"substitute", ach, STANDARD_TYPE(StepRepr_AssemblyComponentUsage), aSubs);

	//--- Initialisation of the read entity ---


	ent->Init(aName, aDef, aBase, aSubs);
}


void RWStepRepr_RWAssemblyComponentUsageSubstitute::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepRepr_AssemblyComponentUsageSubstitute)& ent) const
{

	SW.Send(ent->Name());
	SW.Send(ent->Definition());
	SW.Send(ent->Base());
	SW.Send(ent->Substitute());
}


void RWStepRepr_RWAssemblyComponentUsageSubstitute::Share(const Handle(StepRepr_AssemblyComponentUsageSubstitute)& ent, Interface_EntityIterator& iter) const
{

	iter.GetOneItem(ent->Base());

	iter.GetOneItem(ent->Substitute());
}

