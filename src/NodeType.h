#ifndef H_NodeType
#define H_NodeType

#include <string.h>
#include "TypeDefinition.h"

typedef struct _NodeType NodeType;

typedef char* (*fptrNodeTypeMetaClassName)(NodeType*);
typedef char* (*fptrNodeTypeInternalGetKey)(NodeType*);
typedef void (*fptrDeleteNodeType)(NodeType*);

typedef struct _NodeType {
	TypeDefinition* super;
	fptrNodeTypeMetaClassName MetaClassName;
	fptrNodeTypeInternalGetKey InternalGetKey;
	/*int (*accept)(struct _NodeType*, struct _NodeType*, Visitor*);*/
	fptrDeleteNodeType Delete;
} NodeType;

TypeDefinition* newPoly_NodeType(void);
NodeType* new_NodeType(void);
/*int _acceptNodeTpe(NodeType* this, NodeType* c, Visitor* visitor);*/
void deletePoly_NodeType(TypeDefinition*);
void delete_NodeType(NodeType*);
char* NodeType_MetaClassName(NodeType* const this);
char* NodeType_InternalGetKey(NodeType* const this);

#endif /* H_NodeType */