/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode173647 tnode173647;
typedef struct ttype173681 ttype173681;
typedef struct tlineinfo131308 tlineinfo131308;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym173677 tsym173677;
typedef struct tident134015 tident134015;
typedef struct tnodeseq173641 tnodeseq173641;
typedef struct tidobj134009 tidobj134009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq173679 ttypeseq173679;
typedef struct TY173771 TY173771;
typedef struct tinstantiation173667 tinstantiation173667;
typedef struct tscope173671 tscope173671;
typedef struct tstrtable173651 tstrtable173651;
typedef struct tsymseq173649 tsymseq173649;
typedef struct tloc173661 tloc173661;
typedef struct trope129007 trope129007;
typedef struct tlib173665 tlib173665;
typedef struct tnodetable173705 tnodetable173705;
typedef struct tnodepairseq173703 tnodepairseq173703;
typedef struct tnodepair173701 tnodepair173701;
typedef struct tcell38646 tcell38646;
typedef struct tcellseq38662 tcellseq38662;
typedef struct tgcheap40616 tgcheap40616;
typedef struct tcellset38658 tcellset38658;
typedef struct tpagedesc38654 tpagedesc38654;
typedef struct tmemregion22210 tmemregion22210;
typedef struct tsmallchunk21443 tsmallchunk21443;
typedef struct tllchunk22204 tllchunk22204;
typedef struct tbigchunk21445 tbigchunk21445;
typedef struct tintset21418 tintset21418;
typedef struct ttrunk21414 ttrunk21414;
typedef struct tavlnode22208 tavlnode22208;
typedef struct tgcstat40614 tgcstat40614;
typedef struct TY173763 TY173763;
typedef struct tlistentry104011 tlistentry104011;
typedef struct tbasechunk21441 tbasechunk21441;
typedef struct tfreecell21433 tfreecell21433;
struct tlineinfo131308 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tnode173647 {
ttype173681* Typ;
tlineinfo131308 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym173677* Sym;
} S4;
struct {tident134015* Ident;
} S5;
struct {tnodeseq173641* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY173850[19];
typedef N_NIMCALL_PTR(void, TY891) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY891 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct tidobj134009 {
  TNimObject Sup;
NI Id;
};
struct tident134015 {
  tidobj134009 Sup;
NimStringDesc* S;
tident134015* Next;
NI H;
};
struct tstrtable173651 {
NI Counter;
tsymseq173649* Data;
};
struct tloc173661 {
NU8 K;
NU8 S;
NU8 Flags;
ttype173681* T;
trope129007* R;
trope129007* Heaproot;
NI A;
};
struct tsym173677 {
  tidobj134009 Sup;
NU8 Kind;
union {
struct {ttypeseq173679* Typeinstcache;
} S1;
struct {TY173771* Procinstcache;
tscope173671* Scope;
} S2;
struct {TY173771* Usedgenerics;
tstrtable173651 Tab;
} S3;
} kindU;
NU16 Magic;
ttype173681* Typ;
tident134015* Name;
tlineinfo131308 Info;
tsym173677* Owner;
NU32 Flags;
tnode173647* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc173661 Loc;
tlib173665* Annex;
tnode173647* Constraint;
};
struct tnodepair173701 {
NI H;
tnode173647* Key;
NI Val;
};
struct tnodetable173705 {
NI Counter;
tnodepairseq173703* Data;
};
struct tcell38646 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38662 {
NI Len;
NI Cap;
tcell38646** D;
};
struct tcellset38658 {
NI Counter;
NI Max;
tpagedesc38654* Head;
tpagedesc38654** Data;
};
typedef tsmallchunk21443* TY22222[512];
typedef ttrunk21414* ttrunkbuckets21416[256];
struct tintset21418 {
ttrunkbuckets21416 Data;
};
struct tmemregion22210 {
NI Minlargeobj;
NI Maxlargeobj;
TY22222 Freesmallchunks;
tllchunk22204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21445* Freechunkslist;
tintset21418 Chunkstarts;
tavlnode22208* Root;
tavlnode22208* Deleted;
tavlnode22208* Last;
tavlnode22208* Freeavlnodes;
};
struct tgcstat40614 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40616 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38662 Zct;
tcellseq38662 Decstack;
tcellset38658 Cycleroots;
tcellseq38662 Tempstack;
NI Recgclock;
tmemregion22210 Region;
tgcstat40614 Stat;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct ttype173681 {
  tidobj134009 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq173679* Sons;
tnode173647* N;
tsym173677* Destructor;
tsym173677* Owner;
tsym173677* Sym;
NI64 Size;
NI Align;
tloc173661 Loc;
};
struct tinstantiation173667 {
tsym173677* Sym;
ttypeseq173679* Concretetypes;
TY173763* Usedby;
};
struct tscope173671 {
NI Depthlevel;
tstrtable173651 Symbols;
tscope173671* Parent;
};
struct trope129007 {
  TNimObject Sup;
trope129007* Left;
trope129007* Right;
NI Length;
NimStringDesc* Data;
};
struct tlistentry104011 {
  TNimObject Sup;
tlistentry104011* Prev;
tlistentry104011* Next;
};
struct tlib173665 {
  tlistentry104011 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope129007* Name;
tnode173647* Path;
};
typedef NI TY21421[16];
struct tpagedesc38654 {
tpagedesc38654* Next;
NI Key;
TY21421 Bits;
};
struct tbasechunk21441 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21443 {
  tbasechunk21441 Sup;
tsmallchunk21443* Next;
tsmallchunk21443* Prev;
tfreecell21433* Freelist;
NI Free;
NI Acc;
NF64 Data;
};
struct tllchunk22204 {
NI Size;
NI Acc;
tllchunk22204* Next;
};
struct tbigchunk21445 {
  tbasechunk21441 Sup;
tbigchunk21445* Next;
tbigchunk21445* Prev;
NI Align;
NF64 Data;
};
struct ttrunk21414 {
ttrunk21414* Next;
NI Key;
TY21421 Bits;
};
typedef tavlnode22208* TY22214[2];
struct tavlnode22208 {
TY22214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tfreecell21433 {
tfreecell21433* Next;
NI Zerofield;
};
struct tnodeseq173641 {
  TGenericSeq Sup;
  tnode173647* data[SEQ_DECL_SIZE];
};
struct ttypeseq173679 {
  TGenericSeq Sup;
  ttype173681* data[SEQ_DECL_SIZE];
};
struct TY173771 {
  TGenericSeq Sup;
  tinstantiation173667* data[SEQ_DECL_SIZE];
};
struct tsymseq173649 {
  TGenericSeq Sup;
  tsym173677* data[SEQ_DECL_SIZE];
};
struct tnodepairseq173703 {
  TGenericSeq Sup;
  tnodepair173701 data[SEQ_DECL_SIZE];
};
struct TY173763 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, hashtree_223014)(tnode173647* n);
static N_INLINE(NI, HEX21HEX26_105011)(NI h, NI val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(NI, hash_105825)(NimStringDesc* x);
static N_INLINE(NI, sonslen_174003)(tnode173647* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, treesequivalent_223165)(tnode173647* a, tnode173647* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_204258)(ttype173681* a, ttype173681* b, NU8 flags);
N_NIMCALL(NI, nodetablerawget_223343)(tnodetable173705 t, NI k, tnode173647* key);
static N_INLINE(NI, nexttry_180196)(NI h, NI maxhash);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, nodetableget_223365)(tnodetable173705 t, tnode173647* key);
N_NIMCALL(void, nodetablerawinsert_223377)(tnodepairseq173703** data, NI k, tnode173647* key, NI val);
N_NIMCALL(void, hiddenraiseassert_72820)(NimStringDesc* msg);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38646*, usrtocell_42043)(void* usr);
static N_INLINE(void, rtladdzct_43202)(tcell38646* c);
N_NOINLINE(void, addzct_42015)(tcellseq38662* s, tcell38646* c);
N_NIMCALL(void, nodetableput_223605)(tnodetable173705* t, tnode173647* key, NI val);
N_NIMCALL(NIM_BOOL, mustrehash_180191)(NI length, NI counter);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, nodetabletestorset_223881)(tnodetable173705* t, tnode173647* key, NI val);
static NIM_CONST TY173850 TMP3065 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3066, "ident", 5);
static NIM_CONST TY173850 TMP3067 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3068, "sym", 3);
static NIM_CONST TY173850 TMP3069 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3070, "intVal", 6);
static NIM_CONST TY173850 TMP3071 = {
0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3072, "floatVal", 8);
static NIM_CONST TY173850 TMP3073 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3074, "strVal", 6);
static NIM_CONST TY173850 TMP3075 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3076, "sons", 4);
STRING_LITERAL(TMP3081, "data[h].key == nil ", 19);
STRING_LITERAL(TMP3082, "not t.data[index].key == nil ", 29);
extern TFrame* frameptr_12027;
extern tgcheap40616 gch_40642;
extern TNimType NTI173703; /* TNodePairSeq */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(NI, HEX21HEX26_105011)(NI h, NI val) {
	NI result;
	nimfr("!&", "hashes.nim")
	result = 0;
	nimln(24, "hashes.nim");
	nimln(24, "hashes.nim");
	result = (NI)((NU32)(h) + (NU32)(val));
	nimln(25, "hashes.nim");
	nimln(25, "hashes.nim");
	nimln(25, "hashes.nim");
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(10))));
	nimln(26, "hashes.nim");
	nimln(26, "hashes.nim");
	nimln(26, "hashes.nim");
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(6)));
	popFrame();
	return result;
}

static N_INLINE(NI, sonslen_174003)(tnode173647* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1175, "ast.nim");
	{
		nimln(1175, "ast.nim");
		if (((TMP3075[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3076));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1175, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1176, "ast.nim");
		nimln(1176, "ast.nim");
		if (((TMP3075[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3076));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, hashtree_223014)(tnode173647* n) {
	NI result;
	nimfr("hashTree", "treetab.nim")
	result = 0;
	nimln(16, "treetab.nim");
	{
		nimln(16, "treetab.nim");
		if (!(n == NIM_NIL)) goto LA3;
		nimln(16, "treetab.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(17, "treetab.nim");
	nimln(17, "treetab.nim");
	result = ((NI) ((*n).Kind));
	nimln(18, "treetab.nim");
	switch ((*n).Kind) {
	case ((NU8) 1):
	case ((NU8) 23):
	case ((NU8) 4):
	{
	}
	break;
	case ((NU8) 2):
	{
		nimln(22, "treetab.nim");
		if (!(((TMP3065[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3066));
		result = HEX21HEX26_105011(result, (*(*n).kindU.S5.Ident).H);
	}
	break;
	case ((NU8) 3):
	{
		nimln(24, "treetab.nim");
		if (!(((TMP3067[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3068));
		result = HEX21HEX26_105011(result, (*(*(*n).kindU.S4.Sym).Name).H);
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		nimln(26, "treetab.nim");
		{
			NIM_BOOL LOC11;
			nimln(26, "treetab.nim");
			nimln(688, "system.nim");
			if (!(((TMP3069[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3070));
			LOC11 = ((-2147483647 -1) <= (*n).kindU.S1.Intval);
			if (!(LOC11)) goto LA12;
			nimln(26, "treetab.nim");
			if (!(((TMP3069[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3070));
			LOC11 = ((*n).kindU.S1.Intval <= 2147483647);
			LA12: ;
			if (!LOC11) goto LA13;
			nimln(27, "treetab.nim");
			if (!(((TMP3069[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3070));
			result = HEX21HEX26_105011(result, ((NI)chckRange64((*n).kindU.S1.Intval, (-2147483647 -1), 2147483647)));
		}
		LA13: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		nimln(29, "treetab.nim");
		{
			NIM_BOOL LOC18;
			nimln(29, "treetab.nim");
			nimln(688, "system.nim");
			if (!(((TMP3071[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3072));
			LOC18 = (-1.0000000000000000e+06 <= ((NF) ((*n).kindU.S2.Floatval)));
			if (!(LOC18)) goto LA19;
			nimln(29, "treetab.nim");
			if (!(((TMP3071[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3072));
			LOC18 = (((NF) ((*n).kindU.S2.Floatval)) <= 1.0000000000000000e+06);
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(30, "treetab.nim");
			nimln(30, "treetab.nim");
			if (!(((TMP3071[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3072));
			result = HEX21HEX26_105011(result, float64ToInt32(((NF) ((*n).kindU.S2.Floatval))));
		}
		LA20: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		NI LOC23;
		nimln(32, "treetab.nim");
		nimln(32, "treetab.nim");
		if (!(((TMP3073[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3074));
		LOC23 = hash_105825((*n).kindU.S3.Strval);
		result = HEX21HEX26_105011(result, LOC23);
	}
	break;
	default:
	{
		NI i_223141;
		NI HEX3Atmp_223158;
		NI LOC25;
		NI TMP3077;
		NI res_223160;
		i_223141 = 0;
		HEX3Atmp_223158 = 0;
		nimln(34, "treetab.nim");
		nimln(34, "treetab.nim");
		nimln(34, "treetab.nim");
		LOC25 = sonslen_174003(n);
		TMP3077 = subInt(LOC25, 1);
		HEX3Atmp_223158 = (NI32)(TMP3077);
		nimln(1274, "system.nim");
		res_223160 = 0;
		nimln(1275, "system.nim");
		while (1) {
			NI LOC27;
			nimln(1275, "system.nim");
			if (!(res_223160 <= HEX3Atmp_223158)) goto LA26;
			nimln(1274, "system.nim");
			i_223141 = res_223160;
			nimln(35, "treetab.nim");
			nimln(35, "treetab.nim");
			if (((TMP3075[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3076));
			if ((NU)(i_223141) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC27 = hashtree_223014((*n).kindU.S6.Sons->data[i_223141]);
			result = HEX21HEX26_105011(result, LOC27);
			nimln(1277, "system.nim");
			res_223160 = addInt(res_223160, 1);
		} LA26: ;
	}
	break;
	}
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, treesequivalent_223165)(tnode173647* a, tnode173647* b) {
	NIM_BOOL result;
	nimfr("TreesEquivalent", "treetab.nim")
	result = 0;
	nimln(38, "treetab.nim");
	{
		nimln(38, "treetab.nim");
		if (!(a == b)) goto LA3;
		nimln(39, "treetab.nim");
		result = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		nimln(40, "treetab.nim");
		nimln(40, "treetab.nim");
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		LOC7 = !((a == NIM_NIL));
		if (!(LOC7)) goto LA8;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		LOC7 = !((b == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		nimln(40, "treetab.nim");
		LOC6 = ((*a).Kind == (*b).Kind);
		LA9: ;
		if (!LOC6) goto LA10;
		nimln(41, "treetab.nim");
		switch ((*a).Kind) {
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			nimln(42, "treetab.nim");
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 3):
		{
			nimln(43, "treetab.nim");
			nimln(43, "treetab.nim");
			if (!(((TMP3067[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3068));
			if (!(((TMP3067[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3068));
			result = ((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id);
		}
		break;
		case ((NU8) 2):
		{
			nimln(44, "treetab.nim");
			nimln(44, "treetab.nim");
			if (!(((TMP3065[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3066));
			if (!(((TMP3065[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3066));
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 15):
		{
			nimln(45, "treetab.nim");
			nimln(45, "treetab.nim");
			if (!(((TMP3069[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3070));
			if (!(((TMP3069[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3070));
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			nimln(46, "treetab.nim");
			nimln(46, "treetab.nim");
			if (!(((TMP3071[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3072));
			if (!(((TMP3071[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3072));
			result = (((NF) ((*a).kindU.S2.Floatval)) == ((NF) ((*b).kindU.S2.Floatval)));
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			nimln(47, "treetab.nim");
			nimln(47, "treetab.nim");
			if (!(((TMP3073[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3074));
			if (!(((TMP3073[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3074));
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
		}
		break;
		default:
		{
			nimln(49, "treetab.nim");
			{
				NI LOC21;
				NI LOC22;
				NI i_223315;
				NI HEX3Atmp_223336;
				NI LOC25;
				NI TMP3078;
				NI res_223338;
				nimln(49, "treetab.nim");
				nimln(49, "treetab.nim");
				LOC21 = sonslen_174003(a);
				nimln(49, "treetab.nim");
				LOC22 = sonslen_174003(b);
				if (!(LOC21 == LOC22)) goto LA23;
				i_223315 = 0;
				HEX3Atmp_223336 = 0;
				nimln(50, "treetab.nim");
				nimln(50, "treetab.nim");
				nimln(50, "treetab.nim");
				LOC25 = sonslen_174003(a);
				TMP3078 = subInt(LOC25, 1);
				HEX3Atmp_223336 = (NI32)(TMP3078);
				nimln(1274, "system.nim");
				res_223338 = 0;
				nimln(1275, "system.nim");
				while (1) {
					nimln(1275, "system.nim");
					if (!(res_223338 <= HEX3Atmp_223336)) goto LA26;
					nimln(1274, "system.nim");
					i_223315 = res_223338;
					nimln(51, "treetab.nim");
					{
						NIM_BOOL LOC29;
						nimln(51, "treetab.nim");
						nimln(51, "treetab.nim");
						if (((TMP3075[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3076));
						if ((NU)(i_223315) >= (NU)((*a).kindU.S6.Sons->Sup.len)) raiseIndexError();
						if (((TMP3075[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3076));
						if ((NU)(i_223315) >= (NU)((*b).kindU.S6.Sons->Sup.len)) raiseIndexError();
						LOC29 = treesequivalent_223165((*a).kindU.S6.Sons->data[i_223315], (*b).kindU.S6.Sons->data[i_223315]);
						if (!!(LOC29)) goto LA30;
						nimln(51, "treetab.nim");
						goto BeforeRet;
					}
					LA30: ;
					nimln(1277, "system.nim");
					res_223338 = addInt(res_223338, 1);
				} LA26: ;
				nimln(52, "treetab.nim");
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
		nimln(53, "treetab.nim");
		{
			if (!result) goto LA34;
			nimln(53, "treetab.nim");
			result = sametypeornil_204258((*a).Typ, (*b).Typ, 0);
		}
		LA34: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, nexttry_180196)(NI h, NI maxhash) {
	NI result;
	NI TMP3079;
	NI TMP3080;
	nimfr("nextTry", "astalgo.nim")
	result = 0;
	nimln(449, "astalgo.nim");
	nimln(449, "astalgo.nim");
	nimln(449, "astalgo.nim");
	nimln(449, "astalgo.nim");
	TMP3079 = mulInt(5, h);
	TMP3080 = addInt((NI32)(TMP3079), 1);
	result = (NI)((NI32)(TMP3080) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetablerawget_223343)(tnodetable173705 t, NI k, tnode173647* key) {
	NI result;
	NI h;
	nimfr("NodeTableRawGet", "treetab.nim")
	result = 0;
	nimln(56, "treetab.nim");
	nimln(56, "treetab.nim");
	nimln(56, "treetab.nim");
	h = (NI)(k & (t.Data->Sup.len-1));
	nimln(57, "treetab.nim");
	while (1) {
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		if (!!((t.Data->data[h].Key == NIM_NIL))) goto LA1;
		nimln(58, "treetab.nim");
		{
			NIM_BOOL LOC4;
			nimln(58, "treetab.nim");
			nimln(58, "treetab.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC4 = (t.Data->data[h].H == k);
			if (!(LOC4)) goto LA5;
			nimln(58, "treetab.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC4 = treesequivalent_223165(t.Data->data[h].Key, key);
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(59, "treetab.nim");
			nimln(59, "treetab.nim");
			result = h;
			goto BeforeRet;
		}
		LA6: ;
		nimln(60, "treetab.nim");
		nimln(60, "treetab.nim");
		h = nexttry_180196(h, (t.Data->Sup.len-1));
	} LA1: ;
	nimln(61, "treetab.nim");
	result = -1;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetableget_223365)(tnodetable173705 t, tnode173647* key) {
	NI result;
	NI index;
	NI LOC1;
	nimfr("NodeTableGet", "treetab.nim")
	result = 0;
	nimln(64, "treetab.nim");
	nimln(64, "treetab.nim");
	LOC1 = hashtree_223014(key);
	index = nodetablerawget_223343(t, LOC1, key);
	nimln(65, "treetab.nim");
	{
		nimln(688, "system.nim");
		if (!(0 <= index)) goto LA4;
		nimln(65, "treetab.nim");
		if ((NU)(index) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		result = t.Data->data[index].Val;
	}
	goto LA2;
	LA4: ;
	{
		nimln(66, "treetab.nim");
		result = (-2147483647 -1);
	}
	LA2: ;
	popFrame();
	return result;
}

static N_INLINE(tcell38646*, usrtocell_42043)(void* usr) {
	tcell38646* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	result = ((tcell38646*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell38646))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_43202)(tcell38646* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(184, "gc.nim");
	addzct_42015(&gch_40642.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(236, "gc.nim");
	{
		tcell38646* c;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(237, "gc.nim");
		c = usrtocell_42043(src);
		nimln(157, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(239, "gc.nim");
	{
		tcell38646* c;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(240, "gc.nim");
		c = usrtocell_42043((*dest));
		nimln(241, "gc.nim");
		{
			nimln(155, "gc.nim");
			(*c).Refcount -= 8;
			nimln(156, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(242, "gc.nim");
			rtladdzct_43202(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(243, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, nodetablerawinsert_223377)(tnodepairseq173703** data, NI k, tnode173647* key, NI val) {
	NI h;
	nimfr("NodeTableRawInsert", "treetab.nim")
	nimln(70, "treetab.nim");
	nimln(70, "treetab.nim");
	nimln(70, "treetab.nim");
	h = (NI)(k & ((*data)->Sup.len-1));
	nimln(71, "treetab.nim");
	while (1) {
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA1;
		nimln(71, "treetab.nim");
		nimln(71, "treetab.nim");
		h = nexttry_180196(h, ((*data)->Sup.len-1));
	} LA1: ;
	nimln(72, "treetab.nim");
	{
		nimln(72, "treetab.nim");
		nimln(72, "treetab.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA4;
		nimln(72, "treetab.nim");
		hiddenraiseassert_72820(((NimStringDesc*) &TMP3081));
	}
	LA4: ;
	nimln(73, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].H = k;
	nimln(74, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	asgnRefNoCycle((void**) &(*data)->data[h].Key, key);
	nimln(75, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].Val = val;
	popFrame();
}

N_NIMCALL(void, nodetableput_223605)(tnodetable173705* t, tnode173647* key, NI val) {
	tnodepairseq173703* n;
	NI k;
	NI index;
	nimfr("NodeTablePut", "treetab.nim")
	n = 0;
	nimln(79, "treetab.nim");
	k = hashtree_223014(key);
	nimln(80, "treetab.nim");
	index = nodetablerawget_223343((*t), k, key);
	nimln(81, "treetab.nim");
	{
		nimln(688, "system.nim");
		if (!(0 <= index)) goto LA3;
		nimln(82, "treetab.nim");
		{
			nimln(82, "treetab.nim");
			nimln(82, "treetab.nim");
			nimln(82, "treetab.nim");
			if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(!(((*t).Data->data[index].Key == NIM_NIL)))) goto LA7;
			nimln(82, "treetab.nim");
			hiddenraiseassert_72820(((NimStringDesc*) &TMP3082));
		}
		LA7: ;
		nimln(83, "treetab.nim");
		if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		(*t).Data->data[index].Val = val;
	}
	goto LA1;
	LA3: ;
	{
		nimln(85, "treetab.nim");
		{
			NIM_BOOL LOC12;
			NI TMP3083;
			NI i_223837;
			NI HEX3Atmp_223874;
			NI res_223876;
			tnodepairseq173703* LOC20;
			nimln(85, "treetab.nim");
			nimln(85, "treetab.nim");
			LOC12 = mustrehash_180191((*t).Data->Sup.len, (*t).Counter);
			if (!LOC12) goto LA13;
			nimln(86, "treetab.nim");
			nimln(86, "treetab.nim");
			nimln(86, "treetab.nim");
			TMP3083 = mulInt((*t).Data->Sup.len, 2);
			n = (tnodepairseq173703*) newSeq((&NTI173703), (NI32)(TMP3083));
			i_223837 = 0;
			HEX3Atmp_223874 = 0;
			nimln(87, "treetab.nim");
			nimln(87, "treetab.nim");
			HEX3Atmp_223874 = ((*t).Data->Sup.len-1);
			nimln(1274, "system.nim");
			res_223876 = 0;
			nimln(1275, "system.nim");
			while (1) {
				nimln(1275, "system.nim");
				if (!(res_223876 <= HEX3Atmp_223874)) goto LA15;
				nimln(1274, "system.nim");
				i_223837 = res_223876;
				nimln(88, "treetab.nim");
				{
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					if ((NU)(i_223837) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if (!!(((*t).Data->data[i_223837].Key == NIM_NIL))) goto LA18;
					nimln(89, "treetab.nim");
					if ((NU)(i_223837) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_223837) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_223837) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					nodetablerawinsert_223377(&n, (*t).Data->data[i_223837].H, (*t).Data->data[i_223837].Key, (*t).Data->data[i_223837].Val);
				}
				LA18: ;
				nimln(1277, "system.nim");
				res_223876 = addInt(res_223876, 1);
			} LA15: ;
			nimln(90, "treetab.nim");
			LOC20 = 0;
			LOC20 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC20;
		}
		LA13: ;
		nimln(91, "treetab.nim");
		nodetablerawinsert_223377(&(*t).Data, k, key, val);
		nimln(92, "treetab.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(NI, nodetabletestorset_223881)(tnodetable173705* t, tnode173647* key, NI val) {
	NI result;
	tnodepairseq173703* n;
	NI k;
	NI index;
	nimfr("NodeTableTestOrSet", "treetab.nim")
	result = 0;
	n = 0;
	nimln(96, "treetab.nim");
	k = hashtree_223014(key);
	nimln(97, "treetab.nim");
	index = nodetablerawget_223343((*t), k, key);
	nimln(98, "treetab.nim");
	{
		nimln(688, "system.nim");
		if (!(0 <= index)) goto LA3;
		nimln(99, "treetab.nim");
		{
			nimln(99, "treetab.nim");
			nimln(99, "treetab.nim");
			nimln(99, "treetab.nim");
			if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(!(((*t).Data->data[index].Key == NIM_NIL)))) goto LA7;
			nimln(99, "treetab.nim");
			hiddenraiseassert_72820(((NimStringDesc*) &TMP3082));
		}
		LA7: ;
		nimln(100, "treetab.nim");
		if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		result = (*t).Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		nimln(102, "treetab.nim");
		{
			NIM_BOOL LOC12;
			NI TMP3084;
			NI i_224037;
			NI HEX3Atmp_224074;
			NI res_224076;
			tnodepairseq173703* LOC20;
			nimln(102, "treetab.nim");
			nimln(102, "treetab.nim");
			LOC12 = mustrehash_180191((*t).Data->Sup.len, (*t).Counter);
			if (!LOC12) goto LA13;
			nimln(103, "treetab.nim");
			nimln(103, "treetab.nim");
			nimln(103, "treetab.nim");
			TMP3084 = mulInt((*t).Data->Sup.len, 2);
			n = (tnodepairseq173703*) newSeq((&NTI173703), (NI32)(TMP3084));
			i_224037 = 0;
			HEX3Atmp_224074 = 0;
			nimln(104, "treetab.nim");
			nimln(104, "treetab.nim");
			HEX3Atmp_224074 = ((*t).Data->Sup.len-1);
			nimln(1274, "system.nim");
			res_224076 = 0;
			nimln(1275, "system.nim");
			while (1) {
				nimln(1275, "system.nim");
				if (!(res_224076 <= HEX3Atmp_224074)) goto LA15;
				nimln(1274, "system.nim");
				i_224037 = res_224076;
				nimln(105, "treetab.nim");
				{
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					if ((NU)(i_224037) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if (!!(((*t).Data->data[i_224037].Key == NIM_NIL))) goto LA18;
					nimln(106, "treetab.nim");
					if ((NU)(i_224037) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_224037) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_224037) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					nodetablerawinsert_223377(&n, (*t).Data->data[i_224037].H, (*t).Data->data[i_224037].Key, (*t).Data->data[i_224037].Val);
				}
				LA18: ;
				nimln(1277, "system.nim");
				res_224076 = addInt(res_224076, 1);
			} LA15: ;
			nimln(107, "treetab.nim");
			LOC20 = 0;
			LOC20 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC20;
		}
		LA13: ;
		nimln(108, "treetab.nim");
		nodetablerawinsert_223377(&(*t).Data, k, key, val);
		nimln(109, "treetab.nim");
		result = val;
		nimln(110, "treetab.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}
	LA1: ;
	popFrame();
	return result;
}
N_NOINLINE(void, treetabInit)(void) {
	nimfr("treetab", "treetab.nim")
	popFrame();
}

N_NOINLINE(void, treetabDatInit)(void) {
}
