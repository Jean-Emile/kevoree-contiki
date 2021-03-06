#ifndef H_ContainerRoot
#define H_ContainerRoot

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hashmap.h"
#include "tools.h"
#include "kevoree.h"

/*typedef struct _Group Group;
typedef struct _Visitor Visitor;*/
typedef struct _ContainerRoot ContainerRoot;

typedef char* (*fptrContRootMetaClassName)(ContainerRoot*);
typedef char* (*fptrContRootInternalGetKey)(ContainerRoot*);
typedef ContainerNode* (*fptrContRootFindNodesByID)(ContainerRoot*, char*);
typedef TypeDefinition* (*fptrContRootFindTypeDefsByID)(ContainerRoot*, char*);
typedef Repository* (*fptrContRootFindRepositoriesByID)(ContainerRoot*, char*);
typedef TypedElement* (*fptrContRootFindDataTypesByID)(ContainerRoot*, char*);
typedef TypeLibrary* (*fptrContRootFindLibrariesByID)(ContainerRoot*, char*);
/*typedef Channel* (*fptrContRootFindHubsByID)(ContainerRoot*, char*);
typedef MBinding* (*fptrContRootFindBndingsByID)(ContainerRoot*, char*);*/
typedef DeployUnit* (*fptrContRootFindDeployUnitsByID)(ContainerRoot*, char*);
typedef NodeNetwork* (*fptrContRootFindNodeNetworksByID)(ContainerRoot*, char*);
typedef Group* (*fptrContRootFindGroupsByID)(ContainerRoot*, char*);
typedef void (*fptrContRootAddNodes)(ContainerRoot*, ContainerNode*);
typedef void (*fptrContRootAddTypeDefinitions)(ContainerRoot*, TypeDefinition*);
typedef void (*fptrContRootAddRepositories)(ContainerRoot*, Repository*);
typedef void (*fptrContRootAddDataTypes)(ContainerRoot*, TypedElement*);
typedef void (*fptrContRootAddLibraries)(ContainerRoot*, TypeLibrary*);
/*typedef void (*fptrContRootAddHubs)(ContainerRoot*, Channel*);
typedef void (*fptrContRootAddBindings)(ContainerRoot*, MBinding*);*/
typedef void (*fptrContRootAddDeployUnits)(ContainerRoot*, DeployUnit*);
typedef void (*fptrContRootAddNodeNetworks)(ContainerRoot*, NodeNetwork*);
typedef void (*fptrContRootAddGroups)(ContainerRoot*, Group*);
typedef void (*fptrContRootRemoveNodes)(ContainerRoot*, ContainerNode*);
typedef void (*fptrContRootRemoveTypeDefinitions)(ContainerRoot*, TypeDefinition*);
typedef void (*fptrContRootRemoveRepositories)(ContainerRoot*, Repository*);
typedef void (*fptrContRootRemoveDataTypes)(ContainerRoot*, TypedElement*);
typedef void (*fptrContRootRemoveLibraries)(ContainerRoot*, TypeLibrary*);
/*typedef void (*fptrContRootRemoveHubs)(ContainerRoot*, Channel*);
typedef void (*fptrContRootRemoveBindings)(ContainerRoot*, MBinding*);*/
typedef void (*fptrContRootRemoveDeployUnits)(ContainerRoot*, DeployUnit*);
typedef void (*fptrContRootRemoveNodeNetworks)(ContainerRoot*, NodeNetwork*);
typedef void (*fptrContRootRemoveGroups)(ContainerRoot*, Group*);
typedef void (*fptrDeleteContainerRoot)(ContainerRoot*);
typedef void (*fptrVisitContainerRoot)(void*, Visitor*);

typedef struct _ContainerRoot {
	void* pDerivedObj;
	char* generated_KMF_ID;
	map_t nodes;
	map_t typeDefinitions;
	map_t repositories;
	map_t dataTypes;
	map_t libraries;
	/*std::map<string,Channel*> hubs;
	 *std::map<string,MBinding*> mBindings; */
	map_t deployUnits;
	map_t nodeNetworks;
	map_t groups;
	fptrContRootMetaClassName MetaClassName;
	fptrContRootInternalGetKey InternalGetKey;
	fptrContRootFindNodesByID FindNodesByID;
	fptrContRootFindTypeDefsByID FindTypeDefsByID;
	fptrContRootFindRepositoriesByID FindRepositoriesByID;
	fptrContRootFindDataTypesByID FindDataTypesByID;
	fptrContRootFindLibrariesByID FindLibrariesByID;
	/*fptrContRootFindHubsByID FindHubsByID;
	fptrContRootFindBndingsByID FindBindingsByID;*/
	fptrContRootFindDeployUnitsByID FindDeployUnitsByID;
	fptrContRootFindNodeNetworksByID FindNodeNetworksByID;
	fptrContRootFindGroupsByID FindGroupsByID;
	fptrContRootAddNodes AddNodes;
	fptrContRootAddTypeDefinitions AddTypeDefinitions;
	fptrContRootAddRepositories AddRepositories;
	fptrContRootAddDataTypes AddDataTypes;
	fptrContRootAddLibraries AddLibraries;
	/*fptrContRootAddHubs AddHubs;
	fptrContRootAddBindings AddBindings*/
	fptrContRootAddDeployUnits AddDeployUnits;
	fptrContRootAddNodeNetworks AddNodeNetworks;
	fptrContRootAddGroups AddGroups;
	fptrContRootRemoveNodes RemoveNodes;
	fptrContRootRemoveTypeDefinitions RemoveTypeDefinitions;
	fptrContRootRemoveRepositories RemoveRepositories;
	fptrContRootRemoveDataTypes RemoveDataTypes;
	fptrContRootRemoveLibraries RemoveLibraries;
	/*fptrContRootRemoveHubs RemoveHubs;
	fptrContRootRemoveBindings RemoveBindings;*/
	fptrContRootRemoveDeployUnits RemoveDeployUnits;
	fptrContRootRemoveNodeNetworks RemoveNodeNetworks;
	fptrContRootRemoveGroups RemoveGroups;
	fptrDeleteContainerRoot Delete;
	fptrVisitContainerRoot Visit;
} ContainerRoot;

ContainerRoot* new_ContainerRoot(void);
char* ContainerRoot_MetaClassName(ContainerRoot* const this);
char* ContainerRoot_InternalGetKey(ContainerRoot* const this);
ContainerNode* ContainerRoot_FindNodesByID(ContainerRoot* const this, char*);
TypeDefinition* ContainerRoot_FindTypeDefsByID(ContainerRoot* const this, char*);
Repository* ContainerRoot_FindRepositoriesByID(ContainerRoot* const this, char*);
TypedElement* ContainerRoot_FindDataTypesByID(ContainerRoot* const this, char*);
TypeLibrary* ContainerRoot_FindLibrariesByID(ContainerRoot* const this, char*);
/*Channel* ContainerRoot_FindHubsByID(ContainerRoot* const this, char*);
MBinding* ContainerRoot_FindBndingsByID(ContainerRoot* const this, char*);*/
DeployUnit* ContainerRoot_FindDeployUnitsByID(ContainerRoot* const this, char*);
NodeNetwork* ContainerRoot_FindNodeNetworksByID(ContainerRoot* const this, char*);
Group* ContainerRoot_FindGroupsByID(ContainerRoot* const this, char*);
void ContainerRoot_AddNodes(ContainerRoot* const this, ContainerNode* ptr);
void ContainerRoot_AddTypeDefinitions(ContainerRoot* const this, TypeDefinition* ptr);
void ContainerRoot_AddRepositories(ContainerRoot* const this, Repository* ptr);
void ContainerRoot_AddDataTypes(ContainerRoot* const this, TypedElement* ptr);
void ContainerRoot_AddLibraries(ContainerRoot* const this, TypeLibrary* ptr);
/*void ContainerRoot_AddHubs(ContainerRoot* const this, Channel* ptr);
void ContainerRoot_AddBindings(ContainerRoot* const this, MBinding* ptr);*/
void ContainerRoot_AddDeployUnits(ContainerRoot* const this, DeployUnit* ptr);
void ContainerRoot_AddNodeNetworks(ContainerRoot* const this, NodeNetwork* ptr);
void ContainerRoot_AddGroups(ContainerRoot* const this, Group* ptr);
void ContainerRoot_RemoveNodes(ContainerRoot* const this, ContainerNode* ptr);
void ContainerRoot_RemoveTypeDefinitions(ContainerRoot* const this, TypeDefinition* ptr);
void ContainerRoot_RemoveRepositories(ContainerRoot* const this, Repository* ptr);
void ContainerRoot_RemoveDataTypes(ContainerRoot* const this, TypedElement* ptr);
void ContainerRoot_RemoveLibraries(ContainerRoot* const this, TypeLibrary* ptr);
/*void ContainerRoot_RemoveHubs(ContainerRoot* const this, Channel* ptr);
void ContainerRoot_RemoveBindings(ContainerRoot* const this, MBinding* ptr);*/
void ContainerRoot_RemoveDeployUnits(ContainerRoot* const this,  DeployUnit* ptr);
void ContainerRoot_RemoveNodeNetworks(ContainerRoot* const this, NodeNetwork* ptr);
void ContainerRoot_RemoveGroups(ContainerRoot* const this, Group* ptr);
void delete_ContainerRoot(ContainerRoot* const this);
void ContainerRoot_Visit(void* const this, Visitor* visitor);

#endif
