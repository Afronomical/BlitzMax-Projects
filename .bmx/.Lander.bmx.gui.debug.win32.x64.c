#include ".Lander.bmx.gui.debug.win32.x64.h"
static BBString _s10={
	&bbStringClass,
	0x68eca678877a0c7c,
	2,
	{13,10}
};
static BBString _s0={
	&bbStringClass,
	0x75cdc067fd4d9b00,
	64,
	{65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81
	,82,83,84,85,86,87,88,89,90,97,98,99,100,101,102,103
	,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119
	,120,121,122,48,49,50,51,52,53,54,55,56,57,43,47}
};
static BBString _s1={
	&bbStringClass,
	0xf25a07ea0c0e69f,
	54,
	{65,110,32,101,108,101,109,101,110,116,32,119,105,116,104,32,116
	,104,101,32,115,97,109,101,32,107,101,121,32,97,108,114,101
	,97,100,121,32,101,120,105,115,116,115,32,105,110,32,116,104
	,101,32,109,97,112}
};
static BBString _s2={
	&bbStringClass,
	0xbfd0800945fa68b4,
	18,
	{84,104,101,32,113,117,101,117,101,32,105,115,32,101,109,112,116
	,121}
};
static BBString _s3={
	&bbStringClass,
	0x5c2b786e4055ff04,
	18,
	{84,104,101,32,115,116,97,99,107,32,105,115,32,101,109,112,116
	,121}
};
static BBString _s4={
	&bbStringClass,
	0xf8c407ed2d3563fa,
	13,
	{108,105,115,116,32,105,115,32,101,109,112,116,121}
};
static BBString _s9={
	&bbStringClass,
	0x558220868d858e40,
	37,
	{108,111,119,101,114,86,97,108,117,101,32,105,115,32,103,114,101
	,97,116,101,114,32,116,104,97,110,32,117,112,112,101,114,86
	,97,108,117,101}
};
static BBString _s5={
	&bbStringClass,
	0x42ce070328eb2a04,
	4,
	{110,111,100,101}
};
static BBString _s7={
	&bbStringClass,
	0x7f0d637a59d0dd2b,
	25,
	{110,111,100,101,32,105,115,32,102,114,111,109,32,97,110,111,116
	,104,101,114,32,108,105,115,116}
};
static BBString _s6={
	&bbStringClass,
	0xdf1cc2d23552cb81,
	29,
	{110,111,100,101,32,112,97,114,101,110,116,32,108,105,115,116,32
	,105,115,32,100,105,102,102,101,114,101,110,116}
};
static BBString _s8={
	&bbStringClass,
	0x44dc2ffe03a7a88e,
	5,
	{111,116,104,101,114}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_14{int kind; const char *name; BBDebugDecl decls[15]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
BBFLOAT _m__Lander_gravity=0.06f;
BBFLOAT _m__Lander_air_rest=0.992f;
void __m__Lander_player_New(struct _m__Lander_player_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m__Lander_player;
	((struct _m__Lander_player_obj*)bbNullObjectTest(o))->__m__lander_player_pos = (struct _m__Lander_vector2_obj*)(&bbNullObject);
	((struct _m__Lander_player_obj*)bbNullObjectTest(o))->__m__lander_player_vel = (struct _m__Lander_vector2_obj*)(&bbNullObject);
	((struct _m__Lander_player_obj*)bbNullObjectTest(o))->__m__lander_player_acc = (struct _m__Lander_vector2_obj*)(&bbNullObject);
	((struct _m__Lander_player_obj*)bbNullObjectTest(o))->__m__lander_player_thrust = .00000000f;
	((struct _m__Lander_player_obj*)bbNullObjectTest(o))->__m__lander_player_rad = .00000000f;
	((struct _m__Lander_player_obj*)bbNullObjectTest(o))->__m__lander_player_rot = .00000000f;
	((struct _m__Lander_player_obj*)bbNullObjectTest(o))->__m__lander_player_rotrate = .00000000f;
	((struct _m__Lander_player_obj*)bbNullObjectTest(o))->__m__lander_player_scale = .00000000f;
	((struct _m__Lander_player_obj*)bbNullObjectTest(o))->__m__lander_player_verts = (struct brl_linkedlist_TList_obj*)(&bbNullObject);
	((struct _m__Lander_player_obj*)bbNullObjectTest(o))->__m__lander_player_turnrkey = 0;
	((struct _m__Lander_player_obj*)bbNullObjectTest(o))->__m__lander_player_turnlkey = 0;
	((struct _m__Lander_player_obj*)bbNullObjectTest(o))->__m__lander_player_firekey = 0;
	((struct _m__Lander_player_obj*)bbNullObjectTest(o))->__m__lander_player_thrustkey = 0;
}
struct BBDebugScope_14 _m__Lander_player_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"player",
	{
		{
			BBDEBUGDECL_FIELD,
			"pos",
			":vector2",
			.field_offset=offsetof(struct _m__Lander_player_obj,__m__lander_player_pos)
		},
		{
			BBDEBUGDECL_FIELD,
			"vel",
			":vector2",
			.field_offset=offsetof(struct _m__Lander_player_obj,__m__lander_player_vel)
		},
		{
			BBDEBUGDECL_FIELD,
			"acc",
			":vector2",
			.field_offset=offsetof(struct _m__Lander_player_obj,__m__lander_player_acc)
		},
		{
			BBDEBUGDECL_FIELD,
			"thrust",
			"f",
			.field_offset=offsetof(struct _m__Lander_player_obj,__m__lander_player_thrust)
		},
		{
			BBDEBUGDECL_FIELD,
			"rad",
			"f",
			.field_offset=offsetof(struct _m__Lander_player_obj,__m__lander_player_rad)
		},
		{
			BBDEBUGDECL_FIELD,
			"rot",
			"f",
			.field_offset=offsetof(struct _m__Lander_player_obj,__m__lander_player_rot)
		},
		{
			BBDEBUGDECL_FIELD,
			"rotRate",
			"f",
			.field_offset=offsetof(struct _m__Lander_player_obj,__m__lander_player_rotrate)
		},
		{
			BBDEBUGDECL_FIELD,
			"scale",
			"f",
			.field_offset=offsetof(struct _m__Lander_player_obj,__m__lander_player_scale)
		},
		{
			BBDEBUGDECL_FIELD,
			"verts",
			":TList",
			.field_offset=offsetof(struct _m__Lander_player_obj,__m__lander_player_verts)
		},
		{
			BBDEBUGDECL_FIELD,
			"turnRKey",
			"i",
			.field_offset=offsetof(struct _m__Lander_player_obj,__m__lander_player_turnrkey)
		},
		{
			BBDEBUGDECL_FIELD,
			"turnLKey",
			"i",
			.field_offset=offsetof(struct _m__Lander_player_obj,__m__lander_player_turnlkey)
		},
		{
			BBDEBUGDECL_FIELD,
			"fireKey",
			"i",
			.field_offset=offsetof(struct _m__Lander_player_obj,__m__lander_player_firekey)
		},
		{
			BBDEBUGDECL_FIELD,
			"thrustKey",
			"i",
			.field_offset=offsetof(struct _m__Lander_player_obj,__m__lander_player_thrustkey)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m__Lander_player_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m__Lander_player _m__Lander_player={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m__Lander_player_scope,
	sizeof(struct _m__Lander_player_obj),
	(void (*)(BBOBJECT))__m__Lander_player_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m__Lander_player_obj,__m__lander_player_thrustkey) - offsetof(struct _m__Lander_player_obj,__m__lander_player_pos) + sizeof(BBINT)
	,0
	,offsetof(struct _m__Lander_player_obj,__m__lander_player_pos)
};

struct _m__Lander_player_obj* _m__Lander_ship=(struct _m__Lander_player_obj*)(&bbNullObject);
void __m__Lander_vector2_New(struct _m__Lander_vector2_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m__Lander_vector2;
	((struct _m__Lander_vector2_obj*)bbNullObjectTest(o))->__m__lander_vector2_x = .00000000f;
	((struct _m__Lander_vector2_obj*)bbNullObjectTest(o))->__m__lander_vector2_y = .00000000f;
}
struct _m__Lander_vector2_obj* _m__Lander_vector2_Create_Tvector2_ii(BBINT bbt_x,BBINT bbt_y){
	struct _m__Lander_vector2_obj* bbt_vect=(struct _m__Lander_vector2_obj*)(&bbNullObject);
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Create",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"vect",
				":vector2",
				.var_address=&bbt_vect
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x94577888e95feaca, 194, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_vect=(struct _m__Lander_vector2_obj*)(struct _m__Lander_vector2_obj*)bbObjectAtomicNew((BBClass *)&_m__Lander_vector2);
	struct BBDebugStm __stmt_1 = {0x94577888e95feaca, 195, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_vect))->__m__lander_vector2_x =((BBFLOAT)bbt_x);
	struct BBDebugStm __stmt_2 = {0x94577888e95feaca, 196, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_vect))->__m__lander_vector2_y =((BBFLOAT)bbt_y);
	struct BBDebugStm __stmt_3 = {0x94577888e95feaca, 197, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbOnDebugLeaveScope();
	return (struct _m__Lander_vector2_obj*)bbt_vect;
}
struct BBDebugScope_4 _m__Lander_vector2_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"vector2",
	{
		{
			BBDEBUGDECL_FIELD,
			"x",
			"f",
			.field_offset=offsetof(struct _m__Lander_vector2_obj,__m__lander_vector2_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"y",
			"f",
			.field_offset=offsetof(struct _m__Lander_vector2_obj,__m__lander_vector2_y)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m__Lander_vector2_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i,i):vector2",
			.var_address=(void*)&_m__Lander_vector2_Create_Tvector2_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m__Lander_vector2 _m__Lander_vector2={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m__Lander_vector2_scope,
	sizeof(struct _m__Lander_vector2_obj),
	(void (*)(BBOBJECT))__m__Lander_vector2_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m__Lander_vector2_obj,__m__lander_vector2_y) - offsetof(struct _m__Lander_vector2_obj,__m__lander_vector2_x) + sizeof(BBFLOAT)
	,0
	,offsetof(struct _m__Lander_vector2_obj,__m__lander_vector2_x)
	,_m__Lander_vector2_Create_Tvector2_ii
};

BBINT _m__Lander_update_ship(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"update_ship",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x94577888e95feaca, 123, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(brl_polledinput_KeyDown(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_turnrkey )!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x94577888e95feaca, 123, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_rot +=((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_rotrate ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {0x94577888e95feaca, 124, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(brl_polledinput_KeyDown(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_turnlkey )!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x94577888e95feaca, 124, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_rot -=((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_rotrate ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {0x94577888e95feaca, 125, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(brl_polledinput_KeyDown(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_thrustkey )!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x94577888e95feaca, 127, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_acc ))->__m__lander_vector2_x =((BBFLOAT)(bbCos((double)((BBDOUBLE)((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_rot ))*((BBDOUBLE)((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_thrust )));
		struct BBDebugStm __stmt_1 = {0x94577888e95feaca, 128, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_acc ))->__m__lander_vector2_y =((BBFLOAT)(bbSin((double)((BBDOUBLE)((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_rot ))*((BBDOUBLE)((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_thrust )));
		struct BBDebugStm __stmt_2 = {0x94577888e95feaca, 130, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_vel ))->__m__lander_vector2_x =(((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_acc ))->__m__lander_vector2_x +((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_vel ))->__m__lander_vector2_x );
		struct BBDebugStm __stmt_3 = {0x94577888e95feaca, 131, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_vel ))->__m__lander_vector2_y =(((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_acc ))->__m__lander_vector2_y +((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_vel ))->__m__lander_vector2_y );
		bbOnDebugLeaveScope();
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x94577888e95feaca, 138, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_acc ))->__m__lander_vector2_x =0.000000000f;
		struct BBDebugStm __stmt_1 = {0x94577888e95feaca, 139, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_acc ))->__m__lander_vector2_y =0.000000000f;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {0x94577888e95feaca, 142, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_vel ))->__m__lander_vector2_y =(((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_vel ))->__m__lander_vector2_y +_m__Lander_gravity);
	struct BBDebugStm __stmt_4 = {0x94577888e95feaca, 145, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_pos ))->__m__lander_vector2_x =(((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_vel ))->__m__lander_vector2_x +((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_pos ))->__m__lander_vector2_x );
	struct BBDebugStm __stmt_5 = {0x94577888e95feaca, 146, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_pos ))->__m__lander_vector2_y =(((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_vel ))->__m__lander_vector2_y +((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_pos ))->__m__lander_vector2_y );
	struct BBDebugStm __stmt_6 = {0x94577888e95feaca, 169, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_pos ))->__m__lander_vector2_y >((BBFLOAT)brl_graphics_GraphicsHeight())){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x94577888e95feaca, 171, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_pos ))->__m__lander_vector2_x =((BBFLOAT)(brl_graphics_GraphicsWidth()/2));
		struct BBDebugStm __stmt_1 = {0x94577888e95feaca, 172, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_pos ))->__m__lander_vector2_y =(((BBFLOAT)brl_graphics_GraphicsHeight())*0.2f);
		struct BBDebugStm __stmt_2 = {0x94577888e95feaca, 173, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_acc ))->__m__lander_vector2_x =0.000000000f;
		struct BBDebugStm __stmt_3 = {0x94577888e95feaca, 174, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_acc ))->__m__lander_vector2_y =0.000000000f;
		struct BBDebugStm __stmt_4 = {0x94577888e95feaca, 175, 0};
		bbOnDebugEnterStm(&__stmt_4);
		((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_vel ))->__m__lander_vector2_x =0.000000000f;
		struct BBDebugStm __stmt_5 = {0x94577888e95feaca, 176, 0};
		bbOnDebugEnterStm(&__stmt_5);
		((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_vel ))->__m__lander_vector2_y =0.000000000f;
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct _m__Lander_vector2_obj* _m__Lander_transform_scale(struct _m__Lander_vector2_obj* bbt_p,BBFLOAT bbt_scale){
	struct _m__Lander_vector2_obj* bbt_rv=(struct _m__Lander_vector2_obj*)(&bbNullObject);
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"transform_scale",
		{
			{
				BBDEBUGDECL_LOCAL,
				"p",
				":vector2",
				.var_address=&bbt_p
			},
			{
				BBDEBUGDECL_LOCAL,
				"scale",
				"f",
				.var_address=&bbt_scale
			},
			{
				BBDEBUGDECL_LOCAL,
				"rv",
				":vector2",
				.var_address=&bbt_rv
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x94577888e95feaca, 98, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_rv=(struct _m__Lander_vector2_obj*)(struct _m__Lander_vector2_obj*)bbObjectAtomicNew((BBClass *)&_m__Lander_vector2);
	struct BBDebugStm __stmt_1 = {0x94577888e95feaca, 100, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_rv))->__m__lander_vector2_x =(((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_p))->__m__lander_vector2_x *bbt_scale);
	struct BBDebugStm __stmt_2 = {0x94577888e95feaca, 101, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_rv))->__m__lander_vector2_y =(((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_p))->__m__lander_vector2_y *bbt_scale);
	struct BBDebugStm __stmt_3 = {0x94577888e95feaca, 102, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbOnDebugLeaveScope();
	return (struct _m__Lander_vector2_obj*)bbt_rv;
}
struct _m__Lander_vector2_obj* _m__Lander_transform_rotate(struct _m__Lander_vector2_obj* bbt_p,BBFLOAT bbt_rot){
	struct _m__Lander_vector2_obj* bbt_rv=(struct _m__Lander_vector2_obj*)(&bbNullObject);
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"transform_rotate",
		{
			{
				BBDEBUGDECL_LOCAL,
				"p",
				":vector2",
				.var_address=&bbt_p
			},
			{
				BBDEBUGDECL_LOCAL,
				"rot",
				"f",
				.var_address=&bbt_rot
			},
			{
				BBDEBUGDECL_LOCAL,
				"rv",
				":vector2",
				.var_address=&bbt_rv
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x94577888e95feaca, 106, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_rv=(struct _m__Lander_vector2_obj*)(struct _m__Lander_vector2_obj*)bbObjectAtomicNew((BBClass *)&_m__Lander_vector2);
	struct BBDebugStm __stmt_1 = {0x94577888e95feaca, 108, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_rv))->__m__lander_vector2_x =((BBFLOAT)((((BBDOUBLE)((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_p))->__m__lander_vector2_x )*bbCos((double)((BBDOUBLE)bbt_rot)))-(((BBDOUBLE)((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_p))->__m__lander_vector2_y )*bbSin((double)((BBDOUBLE)bbt_rot)))));
	struct BBDebugStm __stmt_2 = {0x94577888e95feaca, 109, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_rv))->__m__lander_vector2_y =((BBFLOAT)((((BBDOUBLE)((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_p))->__m__lander_vector2_x )*bbSin((double)((BBDOUBLE)bbt_rot)))+(((BBDOUBLE)((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_p))->__m__lander_vector2_y )*bbCos((double)((BBDOUBLE)bbt_rot)))));
	struct BBDebugStm __stmt_3 = {0x94577888e95feaca, 110, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbOnDebugLeaveScope();
	return (struct _m__Lander_vector2_obj*)bbt_rv;
}
struct _m__Lander_vector2_obj* _m__Lander_transform_position(struct _m__Lander_vector2_obj* bbt_p){
	struct _m__Lander_vector2_obj* bbt_rv=(struct _m__Lander_vector2_obj*)(&bbNullObject);
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"transform_position",
		{
			{
				BBDEBUGDECL_LOCAL,
				"p",
				":vector2",
				.var_address=&bbt_p
			},
			{
				BBDEBUGDECL_LOCAL,
				"rv",
				":vector2",
				.var_address=&bbt_rv
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x94577888e95feaca, 115, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_rv=(struct _m__Lander_vector2_obj*)(struct _m__Lander_vector2_obj*)bbObjectAtomicNew((BBClass *)&_m__Lander_vector2);
	struct BBDebugStm __stmt_1 = {0x94577888e95feaca, 116, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_rv))->__m__lander_vector2_x =(((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_p))->__m__lander_vector2_x +((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_pos ))->__m__lander_vector2_x );
	struct BBDebugStm __stmt_2 = {0x94577888e95feaca, 117, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_rv))->__m__lander_vector2_y =(((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_p))->__m__lander_vector2_y +((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_pos ))->__m__lander_vector2_y );
	struct BBDebugStm __stmt_3 = {0x94577888e95feaca, 118, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbOnDebugLeaveScope();
	return (struct _m__Lander_vector2_obj*)bbt_rv;
}
BBINT _m__Lander_draw_shape(struct brl_linkedlist_TList_obj* bbt_shape,BBINT bbt_scale,BBINT bbt_rot){
	struct _m__Lander_vector2_obj* bbt_p1=(struct _m__Lander_vector2_obj*)(&bbNullObject);
	struct _m__Lander_vector2_obj* bbt_p2=(struct _m__Lander_vector2_obj*)(&bbNullObject);
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw_shape",
		{
			{
				BBDEBUGDECL_LOCAL,
				"shape",
				":TList",
				.var_address=&bbt_shape
			},
			{
				BBDEBUGDECL_LOCAL,
				"scale",
				"i",
				.var_address=&bbt_scale
			},
			{
				BBDEBUGDECL_LOCAL,
				"rot",
				"i",
				.var_address=&bbt_rot
			},
			{
				BBDEBUGDECL_LOCAL,
				"p1",
				":vector2",
				.var_address=&bbt_p1
			},
			{
				BBDEBUGDECL_LOCAL,
				"p2",
				":vector2",
				.var_address=&bbt_p2
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x94577888e95feaca, 77, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_max2d_SetColor(134,134,134);
	struct BBDebugStm __stmt_1 = {0x94577888e95feaca, 78, 0};
	bbOnDebugEnterStm(&__stmt_1);
	brl_max2d_SetLineWidth(2.00000000f);
	struct BBDebugStm __stmt_2 = {0x94577888e95feaca, 79, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_p1=(struct _m__Lander_vector2_obj*)(&bbNullObject);
	struct BBDebugStm __stmt_3 = {0x94577888e95feaca, 80, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_p2=(struct _m__Lander_vector2_obj*)(&bbNullObject);
	struct BBDebugStm __stmt_4 = {0x94577888e95feaca, 81, 0};
	bbOnDebugEnterStm(&__stmt_4);
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest(bbt_shape))->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_shape);
	while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct _m__Lander_vector2_obj* bbt_vert=(struct _m__Lander_vector2_obj*)(&bbNullObject);
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"vert",
					":vector2",
					.var_address=&bbt_vert
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbt_vert=(struct _m__Lander_vector2_obj*)((struct _m__Lander_vector2_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&_m__Lander_vector2));
		if(bbt_vert==&bbNullObject){
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_0 = {0x94577888e95feaca, 84, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_p1=(struct _m__Lander_vector2_obj*)bbt_vert;
		struct BBDebugStm __stmt_1 = {0x94577888e95feaca, 85, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_p1=(struct _m__Lander_vector2_obj*)_m__Lander_transform_scale((struct _m__Lander_vector2_obj*)bbt_p1,((BBFLOAT)bbt_scale));
		struct BBDebugStm __stmt_2 = {0x94577888e95feaca, 86, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_p1=(struct _m__Lander_vector2_obj*)_m__Lander_transform_rotate((struct _m__Lander_vector2_obj*)bbt_p1,((BBFLOAT)bbt_rot));
		struct BBDebugStm __stmt_3 = {0x94577888e95feaca, 87, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_p1=(struct _m__Lander_vector2_obj*)_m__Lander_transform_position((struct _m__Lander_vector2_obj*)bbt_p1);
		struct BBDebugStm __stmt_4 = {0x94577888e95feaca, 88, 0};
		bbOnDebugEnterStm(&__stmt_4);
		if(bbt_p2!=&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x94577888e95feaca, 90, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_max2d_DrawLine(((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_p1))->__m__lander_vector2_x ,((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_p1))->__m__lander_vector2_y ,((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_p2))->__m__lander_vector2_x ,((struct _m__Lander_vector2_obj*)bbNullObjectTest(bbt_p2))->__m__lander_vector2_y ,1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_5 = {0x94577888e95feaca, 92, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_p2=(struct _m__Lander_vector2_obj*)bbt_p1;
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		GC_add_roots(&_m__Lander_gravity, &_m__Lander_ship + 1);
		__bb_brl_blitz_blitz();
		__bb_brl_appstub_appstub();
		__bb_brl_audio_audio();
		__bb_brl_bank_bank();
		__bb_brl_bankstream_bankstream();
		__bb_brl_base64_base64();
		__bb_brl_basic_basic();
		__bb_brl_bmploader_bmploader();
		__bb_brl_bytebuffer_bytebuffer();
		__bb_brl_clipboard_clipboard();
		__bb_brl_collections_collections();
		__bb_brl_d3d7max2d_d3d7max2d();
		__bb_brl_d3d9max2d_d3d9max2d();
		__bb_brl_directsoundaudio_directsoundaudio();
		__bb_brl_eventqueue_eventqueue();
		__bb_brl_freeaudioaudio_freeaudioaudio();
		__bb_brl_freetypefont_freetypefont();
		__bb_brl_glgraphics_glgraphics();
		__bb_brl_glmax2d_glmax2d();
		__bb_brl_gnet_gnet();
		__bb_brl_jpgloader_jpgloader();
		__bb_brl_map_map();
		__bb_brl_matrix_matrix();
		__bb_brl_maxlua_maxlua();
		__bb_brl_maxunit_maxunit();
		__bb_brl_maxutil_maxutil();
		__bb_brl_objectlist_objectlist();
		__bb_brl_oggloader_oggloader();
		__bb_brl_openalaudio_openalaudio();
		__bb_brl_platform_platform();
		__bb_brl_pngloader_pngloader();
		__bb_brl_quaternion_quaternion();
		__bb_brl_randomdefault_randomdefault();
		__bb_brl_retro_retro();
		__bb_brl_tgaloader_tgaloader();
		__bb_brl_threadpool_threadpool();
		__bb_brl_timer_timer();
		__bb_brl_timerdefault_timerdefault();
		__bb_brl_uuid_uuid();
		__bb_brl_volumes_volumes();
		__bb_brl_wavloader_wavloader();
		__bb_pub_freejoy_freejoy();
		__bb_pub_freeprocess_freeprocess();
		__bb_pub_glad_glad();
		__bb_pub_nfd_nfd();
		__bb_pub_nx_nx();
		__bb_pub_opengles_opengles();
		__bb_pub_opengles3_opengles3();
		__bb_pub_vulkan_vulkan();
		__bb_pub_xmmintrin_xmmintrin();
		bbObjectRegisterType((BBCLASS)&_m__Lander_player);
		bbObjectRegisterType((BBCLASS)&_m__Lander_vector2);
		bbRegisterSource(0x351c27723b0f696e, "C:/Users/6euleo45/OneDrive - Solent University/Documents/GitHub/Solent-Maths-for-Programming/BlitzMax_win32_x64_0.129.3.45/BlitzMax/mod/brl.mod/collections.mod/sort.bmx");
		bbRegisterSource(0x85d2d5f78143b5a3, "C:/Users/6euleo45/OneDrive - Solent University/Documents/GitHub/Solent-Maths-for-Programming/BlitzMax_win32_x64_0.129.3.45/BlitzMax/mod/brl.mod/collections.mod/list.bmx");
		bbRegisterSource(0x94577888e95feaca, "C:/Users/6euleo45/OneDrive - Solent University/Documents/GitHub/Blitzmax Ps/BlitzMax-Projects/.Lander.bmx");
		struct BBDebugScope_3 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			".Lander",
			{
				{
					BBDEBUGDECL_GLOBAL,
					"gravity",
					"f",
					.var_address=(void*)&_m__Lander_gravity
				},
				{
					BBDEBUGDECL_GLOBAL,
					"air_rest",
					"f",
					.var_address=(void*)&_m__Lander_air_rest
				},
				{
					BBDEBUGDECL_GLOBAL,
					"ship",
					":player",
					.var_address=(void*)&_m__Lander_ship
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x94577888e95feaca, 4, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_graphics_Graphics(1500,900,0,60,0,-1,-1);
		struct BBDebugStm __stmt_1 = {0x94577888e95feaca, 12, 0};
		bbOnDebugEnterStm(&__stmt_1);
		struct BBDebugStm __stmt_2 = {0x94577888e95feaca, 13, 0};
		bbOnDebugEnterStm(&__stmt_2);
		struct BBDebugStm __stmt_3 = {0x94577888e95feaca, 17, 0};
		bbOnDebugEnterStm(&__stmt_3);
		_m__Lander_ship=(struct _m__Lander_player_obj*)(struct _m__Lander_player_obj*)bbObjectNew((BBClass *)&_m__Lander_player);
		struct BBDebugStm __stmt_4 = {0x94577888e95feaca, 18, 0};
		bbOnDebugEnterStm(&__stmt_4);
		((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_pos =(struct _m__Lander_vector2_obj*)(struct _m__Lander_vector2_obj*)bbObjectAtomicNew((BBClass *)&_m__Lander_vector2);
		struct BBDebugStm __stmt_5 = {0x94577888e95feaca, 19, 0};
		bbOnDebugEnterStm(&__stmt_5);
		((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_pos ))->__m__lander_vector2_x =((BBFLOAT)(brl_graphics_GraphicsWidth()/2));
		struct BBDebugStm __stmt_6 = {0x94577888e95feaca, 20, 0};
		bbOnDebugEnterStm(&__stmt_6);
		((struct _m__Lander_vector2_obj*)bbNullObjectTest(((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_pos ))->__m__lander_vector2_y =(((BBFLOAT)brl_graphics_GraphicsHeight())*0.2f);
		struct BBDebugStm __stmt_7 = {0x94577888e95feaca, 21, 0};
		bbOnDebugEnterStm(&__stmt_7);
		((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_vel =(struct _m__Lander_vector2_obj*)(struct _m__Lander_vector2_obj*)bbObjectAtomicNew((BBClass *)&_m__Lander_vector2);
		struct BBDebugStm __stmt_8 = {0x94577888e95feaca, 22, 0};
		bbOnDebugEnterStm(&__stmt_8);
		((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_acc =(struct _m__Lander_vector2_obj*)(struct _m__Lander_vector2_obj*)bbObjectAtomicNew((BBClass *)&_m__Lander_vector2);
		struct BBDebugStm __stmt_9 = {0x94577888e95feaca, 23, 0};
		bbOnDebugEnterStm(&__stmt_9);
		((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_thrust =0.2f;
		struct BBDebugStm __stmt_10 = {0x94577888e95feaca, 24, 0};
		bbOnDebugEnterStm(&__stmt_10);
		((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_rad =5.00000000f;
		struct BBDebugStm __stmt_11 = {0x94577888e95feaca, 25, 0};
		bbOnDebugEnterStm(&__stmt_11);
		((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_rot =270.000000f;
		struct BBDebugStm __stmt_12 = {0x94577888e95feaca, 26, 0};
		bbOnDebugEnterStm(&__stmt_12);
		((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_rotrate =2.00000000f;
		struct BBDebugStm __stmt_13 = {0x94577888e95feaca, 27, 0};
		bbOnDebugEnterStm(&__stmt_13);
		((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_scale =4.00000000f;
		struct BBDebugStm __stmt_14 = {0x94577888e95feaca, 28, 0};
		bbOnDebugEnterStm(&__stmt_14);
		((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_turnrkey =39;
		struct BBDebugStm __stmt_15 = {0x94577888e95feaca, 29, 0};
		bbOnDebugEnterStm(&__stmt_15);
		((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_turnlkey =37;
		struct BBDebugStm __stmt_16 = {0x94577888e95feaca, 30, 0};
		bbOnDebugEnterStm(&__stmt_16);
		((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_firekey =32;
		struct BBDebugStm __stmt_17 = {0x94577888e95feaca, 31, 0};
		bbOnDebugEnterStm(&__stmt_17);
		((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_thrustkey =38;
		struct BBDebugStm __stmt_18 = {0x94577888e95feaca, 34, 0};
		bbOnDebugEnterStm(&__stmt_18);
		((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_verts =(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
		struct BBDebugStm __stmt_19 = {0x94577888e95feaca, 36, 0};
		bbOnDebugEnterStm(&__stmt_19);
		struct brl_linkedlist_TList_obj* bbt_;
		(((struct brl_linkedlist_TList_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest((bbt_ = ((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_verts ))))->clas)->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_,(BBOBJECT)_m__Lander_vector2_Create_Tvector2_ii(4,0));
		struct BBDebugStm __stmt_20 = {0x94577888e95feaca, 37, 0};
		bbOnDebugEnterStm(&__stmt_20);
		struct brl_linkedlist_TList_obj* bbt_2;
		(((struct brl_linkedlist_TList_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest((bbt_2 = ((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_verts ))))->clas)->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_2,(BBOBJECT)_m__Lander_vector2_Create_Tvector2_ii(-4,3));
		struct BBDebugStm __stmt_21 = {0x94577888e95feaca, 38, 0};
		bbOnDebugEnterStm(&__stmt_21);
		struct brl_linkedlist_TList_obj* bbt_3;
		(((struct brl_linkedlist_TList_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest((bbt_3 = ((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_verts ))))->clas)->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_3,(BBOBJECT)_m__Lander_vector2_Create_Tvector2_ii(-2,0));
		struct BBDebugStm __stmt_22 = {0x94577888e95feaca, 39, 0};
		bbOnDebugEnterStm(&__stmt_22);
		struct brl_linkedlist_TList_obj* bbt_4;
		(((struct brl_linkedlist_TList_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest((bbt_4 = ((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_verts ))))->clas)->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_4,(BBOBJECT)_m__Lander_vector2_Create_Tvector2_ii(-4,-3));
		struct BBDebugStm __stmt_23 = {0x94577888e95feaca, 40, 0};
		bbOnDebugEnterStm(&__stmt_23);
		struct brl_linkedlist_TList_obj* bbt_5;
		(((struct brl_linkedlist_TList_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest((bbt_5 = ((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_verts ))))->clas)->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_5,(BBOBJECT)_m__Lander_vector2_Create_Tvector2_ii(4,0));
		struct BBDebugStm __stmt_24 = {0x94577888e95feaca, 46, 0};
		bbOnDebugEnterStm(&__stmt_24);
		brl_max2d_SetClsColor(11,22,82);
		struct BBDebugStm __stmt_25 = {0x94577888e95feaca, 63, 0};
		bbOnDebugEnterStm(&__stmt_25);
		do{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x94577888e95feaca, 48, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_max2d_SetBlend(5);
			struct BBDebugStm __stmt_1 = {0x94577888e95feaca, 49, 0};
			bbOnDebugEnterStm(&__stmt_1);
			brl_max2d_SetColor(222,232,222);
			struct BBDebugStm __stmt_2 = {0x94577888e95feaca, 50, 0};
			bbOnDebugEnterStm(&__stmt_2);
			brl_max2d_DrawRect(0.000000000f,0.000000000f,((BBFLOAT)(brl_graphics_GraphicsWidth()-2)),((BBFLOAT)(brl_graphics_GraphicsHeight()-1)));
			struct BBDebugStm __stmt_3 = {0x94577888e95feaca, 51, 0};
			bbOnDebugEnterStm(&__stmt_3);
			brl_max2d_SetBlend(2);
			struct BBDebugStm __stmt_4 = {0x94577888e95feaca, 54, 0};
			bbOnDebugEnterStm(&__stmt_4);
			_m__Lander_update_ship();
			struct BBDebugStm __stmt_5 = {0x94577888e95feaca, 56, 0};
			bbOnDebugEnterStm(&__stmt_5);
			_m__Lander_draw_shape((struct brl_linkedlist_TList_obj*)((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_verts ,((BBINT)((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_scale ),((BBINT)((struct _m__Lander_player_obj*)bbNullObjectTest(_m__Lander_ship))->__m__lander_player_rot ));
			struct BBDebugStm __stmt_6 = {0x94577888e95feaca, 61, 0};
			bbOnDebugEnterStm(&__stmt_6);
			brl_graphics_Flip(-1);
			bbOnDebugLeaveScope();
		}while(!((brl_polledinput_KeyDown(27)!=0) || (brl_polledinput_AppTerminate()!=0)));
		struct BBDebugStm __stmt_26 = {0x94577888e95feaca, 66, 0};
		bbOnDebugEnterStm(&__stmt_26);
		bbEnd();
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}