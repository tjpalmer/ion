// Preamble
#define __USE_MINGW_ANSI_STDIO 1
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#ifndef _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#endif

#if _MSC_VER >= 1900 || __STDC_VERSION__ >= 201112L
// Visual Studio 2015 supports enough C99/C11 features for us.
#else
#error "C11 support required or Visual Studio 2015 or later"
#endif

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wvarargs"
#endif

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>
#include <assert.h>

typedef unsigned char uchar;
typedef signed char schar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef long long llong;
typedef unsigned long long ullong;

#ifdef _MSC_VER
#define alignof(x) __alignof(x)
#else
#define alignof(x) __alignof__(x)
#endif

#define va_start_ptr(args, arg) (va_start(*(args), *(arg)))
#define va_copy_ptr(dest, src) (va_copy(*(dest), *(src)))
#define va_end_ptr(args) (va_end(*(args)))

struct Any;
static void va_arg_ptr(va_list *args, struct Any any);


// Foreign preamble
typedef struct _finddata64i32_t FindData;
typedef struct tm tm_t;

// Foreign header files
#include <limits.h>
#include <stdint.h>
#include <errno.h>
#include <io.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Forward declarations
typedef struct TypeInfo TypeInfo;
typedef struct ion_Arena ion_Arena;
typedef struct ion_SrcPos ion_SrcPos;
typedef struct ion_Note ion_Note;
typedef struct ion_Notes ion_Notes;
typedef struct ion_StmtList ion_StmtList;
typedef struct ion_Map ion_Map;
typedef struct ion_Token ion_Token;
typedef struct ion_CompoundField ion_CompoundField;
typedef struct ion_SwitchCasePattern ion_SwitchCasePattern;
typedef struct ion_SwitchCase ion_SwitchCase;
typedef struct ion_EnumItem ion_EnumItem;
typedef struct ion_AggregateItem ion_AggregateItem;
typedef struct ion_FuncParam ion_FuncParam;
typedef struct ion_NoteArg ion_NoteArg;
typedef union ion_Val ion_Val;
typedef struct ion_Sym ion_Sym;
typedef struct ion_Operand ion_Operand;
typedef struct ion_Label ion_Label;
typedef struct ion_StmtCtx ion_StmtCtx;
typedef struct ion_TypeMetrics ion_TypeMetrics;
typedef struct ion_TypeAggregate ion_TypeAggregate;
typedef struct ion_TypeFunc ion_TypeFunc;
typedef struct ion_Type ion_Type;
typedef struct TypeFieldInfo TypeFieldInfo;
typedef struct Any Any;
typedef struct ion_StmtIf ion_StmtIf;
typedef struct ion_StmtWhile ion_StmtWhile;
typedef struct ion_StmtFor ion_StmtFor;
typedef struct ion_StmtSwitch ion_StmtSwitch;
typedef struct ion_StmtAssign ion_StmtAssign;
typedef struct ion_StmtInit ion_StmtInit;
typedef struct ion_Stmt ion_Stmt;
typedef struct ion_TypespecFunc ion_TypespecFunc;
typedef struct ion_Typespec ion_Typespec;
typedef struct ion_ExprParen ion_ExprParen;
typedef struct ion_ExprIntLit ion_ExprIntLit;
typedef struct ion_ExprFloatLit ion_ExprFloatLit;
typedef struct ion_ExprStrLit ion_ExprStrLit;
typedef struct ion_ExprOffsetofField ion_ExprOffsetofField;
typedef struct ion_ExprCompound ion_ExprCompound;
typedef struct ion_ExprCast ion_ExprCast;
typedef struct ion_ExprModify ion_ExprModify;
typedef struct ion_ExprUnary ion_ExprUnary;
typedef struct ion_ExprBinary ion_ExprBinary;
typedef struct ion_ExprTernary ion_ExprTernary;
typedef struct ion_ExprCall ion_ExprCall;
typedef struct ion_ExprIndex ion_ExprIndex;
typedef struct ion_ExprField ion_ExprField;
typedef struct ion_Expr ion_Expr;
typedef struct ion_Decls ion_Decls;
typedef struct ion_DeclEnum ion_DeclEnum;
typedef struct ion_DeclFunc ion_DeclFunc;
typedef struct ion_DeclTypedef ion_DeclTypedef;
typedef struct ion_DeclVar ion_DeclVar;
typedef struct ion_DeclImport ion_DeclImport;
typedef struct ion_Decl ion_Decl;
typedef struct ion_Aggregate ion_Aggregate;
typedef struct ion_ImportItem ion_ImportItem;
typedef struct ion_ElseIf ion_ElseIf;
typedef struct ion_BufHdr ion_BufHdr;
typedef struct ion_Intern ion_Intern;
typedef struct ion_Package ion_Package;
typedef struct ion_TypeField ion_TypeField;
typedef struct ion_DirListIter ion_DirListIter;
typedef struct ion_FlagDefPtr ion_FlagDefPtr;
typedef struct ion_FlagDef ion_FlagDef;
typedef struct ion_CachedArrayType ion_CachedArrayType;
typedef struct ion_CachedFuncType ion_CachedFuncType;

// Sorted declarations
#line 12 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\main.ion"
int main(int argc, char const ((*(*argv))));

#line 1 "C:\\Users\\Tom\\Documents\\projects\\ion\\system_packages\\builtin\\config_win32.ion"
extern char const ((*IONOS));

#line 1 "C:\\Users\\Tom\\Documents\\projects\\ion\\system_packages\\builtin\\config_x64.ion"
extern char const ((*IONARCH));

#line 1 "C:\\Users\\Tom\\Documents\\projects\\ion\\system_packages\\builtin\\typeinfo.ion"
typedef ullong typeid;

typedef int TypeKind;

#line 4
#define TYPE_NONE ((TypeKind)(0))

#line 5
#define TYPE_VOID ((TypeKind)((TYPE_NONE) + (1)))

#line 6
#define TYPE_BOOL ((TypeKind)((TYPE_VOID) + (1)))

#line 7
#define TYPE_CHAR ((TypeKind)((TYPE_BOOL) + (1)))

#line 8
#define TYPE_UCHAR ((TypeKind)((TYPE_CHAR) + (1)))

#line 9
#define TYPE_SCHAR ((TypeKind)((TYPE_UCHAR) + (1)))

#line 10
#define TYPE_SHORT ((TypeKind)((TYPE_SCHAR) + (1)))

#line 11
#define TYPE_USHORT ((TypeKind)((TYPE_SHORT) + (1)))

#line 12
#define TYPE_INT ((TypeKind)((TYPE_USHORT) + (1)))

#line 13
#define TYPE_UINT ((TypeKind)((TYPE_INT) + (1)))

#line 14
#define TYPE_LONG ((TypeKind)((TYPE_UINT) + (1)))

#line 15
#define TYPE_ULONG ((TypeKind)((TYPE_LONG) + (1)))

#line 16
#define TYPE_LLONG ((TypeKind)((TYPE_ULONG) + (1)))

#line 17
#define TYPE_ULLONG ((TypeKind)((TYPE_LLONG) + (1)))

#line 18
#define TYPE_FLOAT ((TypeKind)((TYPE_ULLONG) + (1)))

#line 19
#define TYPE_DOUBLE ((TypeKind)((TYPE_FLOAT) + (1)))

#line 20
#define TYPE_CONST ((TypeKind)((TYPE_DOUBLE) + (1)))

#line 21
#define TYPE_PTR ((TypeKind)((TYPE_CONST) + (1)))

#line 22
#define TYPE_ARRAY ((TypeKind)((TYPE_PTR) + (1)))

#line 23
#define TYPE_STRUCT ((TypeKind)((TYPE_ARRAY) + (1)))

#line 24
#define TYPE_UNION ((TypeKind)((TYPE_STRUCT) + (1)))

#line 25
#define TYPE_FUNC ((TypeKind)((TYPE_UNION) + (1)))

#line 34
struct TypeInfo {
    TypeKind kind;
    int size;
    int align;
    char const ((*name));
    int count;
    typeid base;
    TypeFieldInfo (*fields);
    int num_fields;
};

#line 51
TypeKind typeid_kind(typeid type);

#line 55
int typeid_index(typeid type);

#line 59
size_t typeid_size(typeid type);

#line 63
TypeInfo const ((*get_typeinfo(typeid type)));

#line 65 "C:\\Users\\Tom\\Documents\\projects\\ion\\system_packages\\builtin\\types.ion"
#define UCHAR_MIN ((uchar)(0))

#line 88
#define USHORT_MIN ((short)(0))

#line 99
#define UINT_MIN ((uint)(0))

#line 110
#define ULLONG_MIN ((ullong)(0))

#line 115
#define UINT8_MIN (UCHAR_MIN)

#line 126
#define UINT16_MIN (USHORT_MIN)

#line 137
#define UINT32_MIN (UINT_MIN)

#line 148
#define UINT64_MIN (ULLONG_MIN)

#line 19 "C:\\Users\\Tom\\Documents\\projects\\ion\\system_packages\\builtin\\types_win32.ion"
#define ULONG_MIN ((ulong)(INT32_MIN))

#line 15 "C:\\Users\\Tom\\Documents\\projects\\ion\\system_packages\\builtin\\types_x64.ion"
#define USIZE_MIN (UINT64_MIN)

#line 26
#define UINTPTR_MIN (UINT64_MIN)

#line 246 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\common.ion"
struct ion_Arena {
    char (*ptr);
    char (*end);
    char (*(*blocks));
};

#line 1 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast.ion"
extern ion_Arena ion_ast_arena;

void (*ion_ast_alloc(size_t size));

#line 10
void (*ion_ast_dup(void const ((*src)), size_t size));

#line 273 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\lex.ion"
struct ion_SrcPos {
    char const ((*name));
    int line;
};

#line 9 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
struct ion_Note {
    ion_SrcPos pos;
    char const ((*name));
    ion_NoteArg (*args);
    size_t num_args;
};

#line 21 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast.ion"
ion_Note ion_new_note(ion_SrcPos pos, char const ((*name)), ion_NoteArg (*args), size_t num_args);

#line 16 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
struct ion_Notes {
    ion_Note (*notes);
    size_t num_notes;
};

#line 25 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast.ion"
ion_Notes ion_new_notes(ion_Note (*notes), size_t num_notes);

#line 21 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
struct ion_StmtList {
    ion_SrcPos pos;
    ion_Stmt (*(*stmts));
    size_t num_stmts;
};

#line 29 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast.ion"
ion_StmtList ion_new_stmt_list(ion_SrcPos pos, ion_Stmt (*(*stmts)), size_t num_stmts);

#line 27 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
typedef int ion_TypespecKind;

#line 33 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast.ion"
ion_Typespec (*ion_new_typespec(ion_TypespecKind kind, ion_SrcPos pos));

#line 40
ion_Typespec (*ion_new_typespec_name(ion_SrcPos pos, char const ((*name))));

#line 46
ion_Typespec (*ion_new_typespec_ptr(ion_SrcPos pos, ion_Typespec (*base)));

#line 52
ion_Typespec (*ion_new_typespec_const(ion_SrcPos pos, ion_Typespec (*base)));

#line 58
ion_Typespec (*ion_new_typespec_array(ion_SrcPos pos, ion_Typespec (*elem), ion_Expr (*size)));

#line 65
ion_Typespec (*ion_new_typespec_func(ion_SrcPos pos, ion_Typespec (*(*args)), size_t num_args, ion_Typespec (*ret), bool has_varargs));

#line 74
ion_Decls (*ion_new_decls(ion_Decl (*(*decls)), size_t num_decls));

#line 90 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
typedef int ion_DeclKind;

#line 81 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast.ion"
ion_Decl (*ion_new_decl(ion_DeclKind kind, ion_SrcPos pos, char const ((*name))));

#line 89
ion_Note (*ion_get_decl_note(ion_Decl (*decl), char const ((*name))));

#line 99
bool ion_is_decl_foreign(ion_Decl (*decl));

#line 103
ion_Decl (*ion_new_decl_enum(ion_SrcPos pos, char const ((*name)), ion_Typespec (*type), ion_EnumItem (*items), size_t num_items));

#line 103 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
typedef int ion_AggregateKind;

#line 111 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast.ion"
ion_Aggregate (*ion_new_aggregate(ion_SrcPos pos, ion_AggregateKind kind, ion_AggregateItem (*items), size_t num_items));

#line 120
ion_Decl (*ion_new_decl_aggregate(ion_SrcPos pos, ion_DeclKind kind, char const ((*name)), ion_Aggregate (*aggregate)));

#line 127
ion_Decl (*ion_new_decl_var(ion_SrcPos pos, char const ((*name)), ion_Typespec (*type), ion_Expr (*expr)));

#line 134
ion_Decl (*ion_new_decl_func(ion_SrcPos pos, char const ((*name)), ion_FuncParam (*params), size_t num_params, ion_Typespec (*ret_type), bool has_varargs, ion_StmtList block));

#line 144
ion_Decl (*ion_new_decl_const(ion_SrcPos pos, char const ((*name)), ion_Typespec (*type), ion_Expr (*expr)));

#line 151
ion_Decl (*ion_new_decl_typedef(ion_SrcPos pos, char const ((*name)), ion_Typespec (*type)));

#line 157
ion_Decl (*ion_new_decl_note(ion_SrcPos pos, ion_Note note));

#line 163
ion_Decl (*ion_new_decl_import(ion_SrcPos pos, char const ((*rename_name)), bool is_relative, char const ((*(*names))), size_t num_names, bool import_all, ion_ImportItem (*items), size_t num_items));

#line 172 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
typedef int ion_ExprKind;

#line 175 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast.ion"
ion_Expr (*ion_new_expr(ion_ExprKind kind, ion_SrcPos pos));

#line 182
ion_Expr (*ion_new_expr_paren(ion_SrcPos pos, ion_Expr (*expr)));

#line 188
ion_Expr (*ion_new_expr_sizeof_expr(ion_SrcPos pos, ion_Expr (*expr)));

#line 194
ion_Expr (*ion_new_expr_sizeof_type(ion_SrcPos pos, ion_Typespec (*type)));

#line 200
ion_Expr (*ion_new_expr_typeof_expr(ion_SrcPos pos, ion_Expr (*expr)));

#line 206
ion_Expr (*ion_new_expr_typeof_type(ion_SrcPos pos, ion_Typespec (*type)));

#line 212
ion_Expr (*ion_new_expr_alignof_expr(ion_SrcPos pos, ion_Expr (*expr)));

#line 218
ion_Expr (*ion_new_expr_alignof_type(ion_SrcPos pos, ion_Typespec (*type)));

#line 224
ion_Expr (*ion_new_expr_offsetof(ion_SrcPos pos, ion_Typespec (*type), char const ((*name))));

#line 96 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\lex.ion"
typedef int ion_TokenKind;

#line 231 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast.ion"
ion_Expr (*ion_new_expr_modify(ion_SrcPos pos, ion_TokenKind op, bool post, ion_Expr (*expr)));

#line 166 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\lex.ion"
typedef int ion_TokenMod;

#line 175
typedef int ion_TokenSuffix;

#line 239 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast.ion"
ion_Expr (*ion_new_expr_int(ion_SrcPos pos, ullong val, ion_TokenMod mod, ion_TokenSuffix suffix));

#line 247
ion_Expr (*ion_new_expr_float(ion_SrcPos pos, char const ((*start)), char const ((*end)), double val, ion_TokenSuffix suffix));

#line 256
ion_Expr (*ion_new_expr_str(ion_SrcPos pos, char const ((*val)), ion_TokenMod mod));

#line 263
ion_Expr (*ion_new_expr_name(ion_SrcPos pos, char const ((*name))));

#line 269
ion_Expr (*ion_new_expr_compound(ion_SrcPos pos, ion_Typespec (*type), ion_CompoundField (*fields), size_t num_fields));

#line 277
ion_Expr (*ion_new_expr_cast(ion_SrcPos pos, ion_Typespec (*type), ion_Expr (*expr)));

#line 284
ion_Expr (*ion_new_expr_call(ion_SrcPos pos, ion_Expr (*expr), ion_Expr (*(*args)), size_t num_args));

#line 292
ion_Expr (*ion_new_expr_index(ion_SrcPos pos, ion_Expr (*expr), ion_Expr (*index)));

#line 299
ion_Expr (*ion_new_expr_field(ion_SrcPos pos, ion_Expr (*expr), char const ((*name))));

#line 306
ion_Expr (*ion_new_expr_unary(ion_SrcPos pos, ion_TokenKind op, ion_Expr (*expr)));

#line 313
ion_Expr (*ion_new_expr_binary(ion_SrcPos pos, ion_TokenKind op, ion_Expr (*left), ion_Expr (*right)));

#line 321
ion_Expr (*ion_new_expr_ternary(ion_SrcPos pos, ion_Expr (*cond), ion_Expr (*then_expr), ion_Expr (*else_expr)));

#line 329
ion_Note (*ion_get_stmt_note(ion_Stmt (*stmt), char const ((*name))));

#line 335 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
typedef int ion_StmtKind;

#line 339 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast.ion"
ion_Stmt (*ion_new_stmt(ion_StmtKind kind, ion_SrcPos pos));

#line 346
ion_Stmt (*ion_new_stmt_label(ion_SrcPos pos, char const ((*label))));

#line 352
ion_Stmt (*ion_new_stmt_goto(ion_SrcPos pos, char const ((*label))));

#line 358
ion_Stmt (*ion_new_stmt_note(ion_SrcPos pos, ion_Note note));

#line 364
ion_Stmt (*ion_new_stmt_decl(ion_SrcPos pos, ion_Decl (*decl)));

#line 370
ion_Stmt (*ion_new_stmt_return(ion_SrcPos pos, ion_Expr (*expr)));

#line 376
ion_Stmt (*ion_new_stmt_break(ion_SrcPos pos));

#line 380
ion_Stmt (*ion_new_stmt_continue(ion_SrcPos pos));

#line 384
ion_Stmt (*ion_new_stmt_block(ion_SrcPos pos, ion_StmtList block));

#line 390
ion_Stmt (*ion_new_stmt_if(ion_SrcPos pos, ion_Stmt (*init), ion_Expr (*cond), ion_StmtList then_block, ion_ElseIf (*elseifs), size_t num_elseifs, ion_StmtList else_block));

#line 401
ion_Stmt (*ion_new_stmt_while(ion_SrcPos pos, ion_Expr (*cond), ion_StmtList block));

#line 408
ion_Stmt (*ion_new_stmt_do_while(ion_SrcPos pos, ion_Expr (*cond), ion_StmtList block));

#line 415
ion_Stmt (*ion_new_stmt_for(ion_SrcPos pos, ion_Stmt (*init), ion_Expr (*cond), ion_Stmt (*next), ion_StmtList block));

#line 424
ion_Stmt (*ion_new_stmt_switch(ion_SrcPos pos, ion_Expr (*expr), ion_SwitchCase (*cases), size_t num_cases));

#line 432
ion_Stmt (*ion_new_stmt_assign(ion_SrcPos pos, ion_TokenKind op, ion_Expr (*left), ion_Expr (*right)));

#line 440
ion_Stmt (*ion_new_stmt_init(ion_SrcPos pos, char const ((*name)), ion_Typespec (*type), ion_Expr (*expr)));

#line 448
ion_Stmt (*ion_new_stmt_expr(ion_SrcPos pos, ion_Expr (*expr)));

#line 28 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
#define ION_TYPESPEC_NONE ((ion_TypespecKind)(0))

#line 29
#define ION_TYPESPEC_NAME ((ion_TypespecKind)((ION_TYPESPEC_NONE) + (1)))

#line 30
#define ION_TYPESPEC_FUNC ((ion_TypespecKind)((ION_TYPESPEC_NAME) + (1)))

#line 31
#define ION_TYPESPEC_ARRAY ((ion_TypespecKind)((ION_TYPESPEC_FUNC) + (1)))

#line 32
#define ION_TYPESPEC_PTR ((ion_TypespecKind)((ION_TYPESPEC_ARRAY) + (1)))

#line 33
#define ION_TYPESPEC_CONST ((ion_TypespecKind)((ION_TYPESPEC_PTR) + (1)))

#line 60
typedef int ion_AggregateItemKind;

#line 61
#define ION_AGGREGATE_ITEM_NONE ((ion_AggregateItemKind)(0))

#line 62
#define ION_AGGREGATE_ITEM_FIELD ((ion_AggregateItemKind)((ION_AGGREGATE_ITEM_NONE) + (1)))

#line 63
#define ION_AGGREGATE_ITEM_SUBAGGREGATE ((ion_AggregateItemKind)((ION_AGGREGATE_ITEM_FIELD) + (1)))

#line 91
#define ION_DECL_NONE ((ion_DeclKind)(0))

#line 92
#define ION_DECL_ENUM ((ion_DeclKind)((ION_DECL_NONE) + (1)))

#line 93
#define ION_DECL_STRUCT ((ion_DeclKind)((ION_DECL_ENUM) + (1)))

#line 94
#define ION_DECL_UNION ((ion_DeclKind)((ION_DECL_STRUCT) + (1)))

#line 95
#define ION_DECL_VAR ((ion_DeclKind)((ION_DECL_UNION) + (1)))

#line 96
#define ION_DECL_CONST ((ion_DeclKind)((ION_DECL_VAR) + (1)))

#line 97
#define ION_DECL_TYPEDEF ((ion_DeclKind)((ION_DECL_CONST) + (1)))

#line 98
#define ION_DECL_FUNC ((ion_DeclKind)((ION_DECL_TYPEDEF) + (1)))

#line 99
#define ION_DECL_NOTE ((ion_DeclKind)((ION_DECL_FUNC) + (1)))

#line 100
#define ION_DECL_IMPORT ((ion_DeclKind)((ION_DECL_NOTE) + (1)))

#line 104
#define ION_AGGREGATE_NONE ((ion_AggregateKind)(0))

#line 105
#define ION_AGGREGATE_STRUCT ((ion_AggregateKind)((ION_AGGREGATE_NONE) + (1)))

#line 106
#define ION_AGGREGATE_UNION ((ion_AggregateKind)((ION_AGGREGATE_STRUCT) + (1)))

#line 173
#define ION_EXPR_NONE ((ion_ExprKind)(0))

#line 174
#define ION_EXPR_PAREN ((ion_ExprKind)((ION_EXPR_NONE) + (1)))

#line 175
#define ION_EXPR_INT ((ion_ExprKind)((ION_EXPR_PAREN) + (1)))

#line 176
#define ION_EXPR_FLOAT ((ion_ExprKind)((ION_EXPR_INT) + (1)))

#line 177
#define ION_EXPR_STR ((ion_ExprKind)((ION_EXPR_FLOAT) + (1)))

#line 178
#define ION_EXPR_NAME ((ion_ExprKind)((ION_EXPR_STR) + (1)))

#line 179
#define ION_EXPR_CAST ((ion_ExprKind)((ION_EXPR_NAME) + (1)))

#line 180
#define ION_EXPR_CALL ((ion_ExprKind)((ION_EXPR_CAST) + (1)))

#line 181
#define ION_EXPR_INDEX ((ion_ExprKind)((ION_EXPR_CALL) + (1)))

#line 182
#define ION_EXPR_FIELD ((ion_ExprKind)((ION_EXPR_INDEX) + (1)))

#line 183
#define ION_EXPR_COMPOUND ((ion_ExprKind)((ION_EXPR_FIELD) + (1)))

#line 184
#define ION_EXPR_UNARY ((ion_ExprKind)((ION_EXPR_COMPOUND) + (1)))

#line 185
#define ION_EXPR_BINARY ((ion_ExprKind)((ION_EXPR_UNARY) + (1)))

#line 186
#define ION_EXPR_TERNARY ((ion_ExprKind)((ION_EXPR_BINARY) + (1)))

#line 187
#define ION_EXPR_MODIFY ((ion_ExprKind)((ION_EXPR_TERNARY) + (1)))

#line 188
#define ION_EXPR_SIZEOF_EXPR ((ion_ExprKind)((ION_EXPR_MODIFY) + (1)))

#line 189
#define ION_EXPR_SIZEOF_TYPE ((ion_ExprKind)((ION_EXPR_SIZEOF_EXPR) + (1)))

#line 190
#define ION_EXPR_TYPEOF_EXPR ((ion_ExprKind)((ION_EXPR_SIZEOF_TYPE) + (1)))

#line 191
#define ION_EXPR_TYPEOF_TYPE ((ion_ExprKind)((ION_EXPR_TYPEOF_EXPR) + (1)))

#line 192
#define ION_EXPR_ALIGNOF_EXPR ((ion_ExprKind)((ION_EXPR_TYPEOF_TYPE) + (1)))

#line 193
#define ION_EXPR_ALIGNOF_TYPE ((ion_ExprKind)((ION_EXPR_ALIGNOF_EXPR) + (1)))

#line 194
#define ION_EXPR_OFFSETOF ((ion_ExprKind)((ION_EXPR_ALIGNOF_TYPE) + (1)))

#line 197
typedef int ion_CompoundFieldKind;

#line 198
#define ION_FIELD_DEFAULT ((ion_CompoundFieldKind)(0))

#line 199
#define ION_FIELD_NAME ((ion_CompoundFieldKind)((ION_FIELD_DEFAULT) + (1)))

#line 200
#define ION_FIELD_INDEX ((ion_CompoundFieldKind)((ION_FIELD_NAME) + (1)))

#line 336
#define ION_STMT_NONE ((ion_StmtKind)(0))

#line 337
#define ION_STMT_DECL ((ion_StmtKind)((ION_STMT_NONE) + (1)))

#line 338
#define ION_STMT_RETURN ((ion_StmtKind)((ION_STMT_DECL) + (1)))

#line 339
#define ION_STMT_BREAK ((ion_StmtKind)((ION_STMT_RETURN) + (1)))

#line 340
#define ION_STMT_CONTINUE ((ion_StmtKind)((ION_STMT_BREAK) + (1)))

#line 341
#define ION_STMT_BLOCK ((ion_StmtKind)((ION_STMT_CONTINUE) + (1)))

#line 342
#define ION_STMT_IF ((ion_StmtKind)((ION_STMT_BLOCK) + (1)))

#line 343
#define ION_STMT_WHILE ((ion_StmtKind)((ION_STMT_IF) + (1)))

#line 344
#define ION_STMT_DO_WHILE ((ion_StmtKind)((ION_STMT_WHILE) + (1)))

#line 345
#define ION_STMT_FOR ((ion_StmtKind)((ION_STMT_DO_WHILE) + (1)))

#line 346
#define ION_STMT_SWITCH ((ion_StmtKind)((ION_STMT_FOR) + (1)))

#line 347
#define ION_STMT_ASSIGN ((ion_StmtKind)((ION_STMT_SWITCH) + (1)))

#line 348
#define ION_STMT_INIT ((ion_StmtKind)((ION_STMT_ASSIGN) + (1)))

#line 349
#define ION_STMT_EXPR ((ion_StmtKind)((ION_STMT_INIT) + (1)))

#line 350
#define ION_STMT_NOTE ((ion_StmtKind)((ION_STMT_EXPR) + (1)))

#line 351
#define ION_STMT_LABEL ((ion_StmtKind)((ION_STMT_NOTE) + (1)))

#line 352
#define ION_STMT_GOTO ((ion_StmtKind)((ION_STMT_LABEL) + (1)))

#line 2 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\common.ion"
size_t ion_min(size_t x, size_t y);

#line 7
size_t ion_max(size_t x, size_t y);

#line 12
size_t ion_clamp_max(size_t x, size_t max);

#line 17
size_t ion_clamp_min(size_t x, size_t min);

#line 22
size_t ion_is_pow2(size_t x);

#line 27
uintptr_t ion_align_down(uintptr_t n, size_t a);

#line 32
uintptr_t ion_align_up(uintptr_t n, size_t a);

#line 37
void (*ion_align_down_ptr(void (*p), size_t a));

#line 42
void (*ion_align_up_ptr(void (*p), size_t a));

#line 46
void ion_fatal(char const ((*fmt)), ...);

#line 56
void (*ion_xcalloc(size_t num_elems, size_t elem_size));

#line 65
void (*ion_xrealloc(void (*ptr), size_t num_bytes));

#line 74
void (*ion_xmalloc(size_t num_bytes));

#line 83
void (*ion_memdup(void (*src), size_t size));

#line 89
char (*ion_strf(char const ((*fmt)), ...));

#line 101
char (*ion_read_file(char const ((*path))));

#line 120
bool ion_write_file(char const ((*path)), char const ((*buf)), size_t len);

#line 140
ion_BufHdr (*ion_buf__hdr(void (*b)));

#line 145
size_t ion_buf_len(void (*b));

#line 150
size_t ion_buf_cap(void const ((*b)));

#line 155
void (*ion_buf_end(void (*b), size_t elem_size));

#line 160
size_t ion_buf_sizeof(void (*b), size_t elem_size);

#line 165
void ion_buf_free(void (*(*b)));

#line 173
void ion_buf_fit(void (*(*b)), size_t new_len, size_t elem_size);

#line 181
void ion_buf_push(void (*(*b)), void (*elem), size_t elem_size);

#line 189
void (*ion_buf__grow(void const ((*buf)), size_t new_len, size_t elem_size));

#line 206
void ion_buf_printf(char (*(*buf)), char const ((*fmt)), ...);

#line 244
extern ion_Arena ion_allocator;

#line 252
#define ION_ARENA_ALIGNMENT (8)

#line 253
#define ION_ARENA_BLOCK_SIZE ((1024) * (1024))

#line 256
void ion_arena_grow(ion_Arena (*arena), size_t min_size);

#line 264
void (*ion_arena_alloc(ion_Arena (*arena), size_t size));

#line 276
void ion_arena_free(ion_Arena (*arena));

#line 286
uint64_t ion_hash_uint64(uint64_t x);

#line 292
uint64_t ion_hash_ptr(void const ((*ptr)));

#line 296
uint64_t ion_hash_mix(uint64_t x, uint64_t y);

#line 303
uint64_t ion_hash_bytes(void const ((*ptr)), size_t len);

#line 321
uint64_t ion_map_get_uint64_from_uint64(ion_Map (*map), uint64_t key);

#line 340
void ion_map_grow(ion_Map (*map), size_t new_cap);

#line 357
void ion_map_put_uint64_from_uint64(ion_Map (*map), uint64_t key, uint64_t val);

#line 383
void (*ion_map_get(ion_Map (*map), void const ((*key))));

#line 387
void ion_map_put(ion_Map (*map), void const ((*key)), void (*val));

#line 391
void (*ion_map_get_from_uint64(ion_Map (*map), uint64_t key));

#line 395
void ion_map_put_from_uint64(ion_Map (*map), uint64_t key, void (*val));

#line 399
uint64_t ion_map_get_uint64(ion_Map (*map), void (*key));

#line 403
void ion_map_put_uint64(ion_Map (*map), void (*key), uint64_t val);

#line 427
extern ion_Arena ion_intern_arena;

#line 314
struct ion_Map {
    uint64_t (*keys);
    uint64_t (*vals);
    size_t len;
    size_t cap;
};

#line 428
extern ion_Map ion_interns;

char const ((*ion_str_intern_range(char const ((*start)), char const ((*end)))));

#line 449
char const ((*ion_str_intern(char const ((*str)))));

#line 453
bool ion_str_islower(char const ((*str)));

#line 1 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\gen.ion"
extern char (*ion_gen_buf);

#line 6
extern int ion_gen_indent;

#line 7
extern ion_SrcPos ion_gen_pos;

extern char const ((*(*ion_gen_headers_buf)));

extern char (*ion_gen_preamble_str);

#line 59
extern char (*ion_gen_postamble_str);

#line 119
void ion_genln(void);

#line 124
bool ion_is_incomplete_array_typespec(ion_Typespec (*typespec));

#line 128
extern char (ion_char_to_escape[256]);

#line 141
void ion_gen_char(char c);

#line 151
void ion_gen_str(char const ((*str)), bool multiline);

#line 185
void ion_gen_sync_pos(ion_SrcPos pos);

#line 196
char const ((*ion_cdecl_paren(char const ((*str)), char c)));

#line 200
char const ((*ion_cdecl_name(ion_Type (*type))));

#line 210
char (*ion_type_to_cdecl(ion_Type (*type), char const ((*str))));

#line 243
char const ((*ion_gen_expr_str(ion_Expr (*expr))));

#line 252
extern ion_Map ion_gen_name_map;

char const ((*ion_get_gen_name_or_default(void const ((*ptr)), char const ((*default_name)))));

#line 288
char const ((*ion_get_gen_name(void const ((*ptr)))));

#line 292
char (*ion_typespec_to_cdecl(ion_Typespec (*typespec), char const ((*str))));

#line 331
void ion_gen_func_decl(ion_Decl (*decl));

#line 358
bool ion_gen_reachable(ion_Sym (*sym));

#line 362
void ion_gen_forward_decls(void);

#line 386
void ion_gen_aggregate_items(ion_Aggregate (*aggregate));

#line 406
void ion_gen_aggregate(ion_Decl (*decl));

#line 416
void ion_gen_paren_expr(ion_Expr (*expr));

#line 422
void ion_gen_expr_compound(ion_Expr (*expr));

#line 1 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\type.ion"
typedef int ion_CompilerTypeKind;

#line 2
#define ION_CMPL_TYPE_NONE ((ion_CompilerTypeKind)(0))

#line 3
#define ION_CMPL_TYPE_INCOMPLETE ((ion_CompilerTypeKind)((ION_CMPL_TYPE_NONE) + (1)))

#line 4
#define ION_CMPL_TYPE_COMPLETING ((ion_CompilerTypeKind)((ION_CMPL_TYPE_INCOMPLETE) + (1)))

#line 5
#define ION_CMPL_TYPE_VOID ((ion_CompilerTypeKind)((ION_CMPL_TYPE_COMPLETING) + (1)))

#line 6
#define ION_CMPL_TYPE_BOOL ((ion_CompilerTypeKind)((ION_CMPL_TYPE_VOID) + (1)))

#line 7
#define ION_CMPL_TYPE_CHAR ((ion_CompilerTypeKind)((ION_CMPL_TYPE_BOOL) + (1)))

#line 8
#define ION_CMPL_TYPE_SCHAR ((ion_CompilerTypeKind)((ION_CMPL_TYPE_CHAR) + (1)))

#line 9
#define ION_CMPL_TYPE_UCHAR ((ion_CompilerTypeKind)((ION_CMPL_TYPE_SCHAR) + (1)))

#line 10
#define ION_CMPL_TYPE_SHORT ((ion_CompilerTypeKind)((ION_CMPL_TYPE_UCHAR) + (1)))

#line 11
#define ION_CMPL_TYPE_USHORT ((ion_CompilerTypeKind)((ION_CMPL_TYPE_SHORT) + (1)))

#line 12
#define ION_CMPL_TYPE_INT ((ion_CompilerTypeKind)((ION_CMPL_TYPE_USHORT) + (1)))

#line 13
#define ION_CMPL_TYPE_UINT ((ion_CompilerTypeKind)((ION_CMPL_TYPE_INT) + (1)))

#line 14
#define ION_CMPL_TYPE_LONG ((ion_CompilerTypeKind)((ION_CMPL_TYPE_UINT) + (1)))

#line 15
#define ION_CMPL_TYPE_ULONG ((ion_CompilerTypeKind)((ION_CMPL_TYPE_LONG) + (1)))

#line 16
#define ION_CMPL_TYPE_LLONG ((ion_CompilerTypeKind)((ION_CMPL_TYPE_ULONG) + (1)))

#line 17
#define ION_CMPL_TYPE_ULLONG ((ion_CompilerTypeKind)((ION_CMPL_TYPE_LLONG) + (1)))

#line 18
#define ION_CMPL_TYPE_ENUM ((ion_CompilerTypeKind)((ION_CMPL_TYPE_ULLONG) + (1)))

#line 19
#define ION_CMPL_TYPE_FLOAT ((ion_CompilerTypeKind)((ION_CMPL_TYPE_ENUM) + (1)))

#line 20
#define ION_CMPL_TYPE_DOUBLE ((ion_CompilerTypeKind)((ION_CMPL_TYPE_FLOAT) + (1)))

#line 21
#define ION_CMPL_TYPE_PTR ((ion_CompilerTypeKind)((ION_CMPL_TYPE_DOUBLE) + (1)))

#line 22
#define ION_CMPL_TYPE_FUNC ((ion_CompilerTypeKind)((ION_CMPL_TYPE_PTR) + (1)))

#line 23
#define ION_CMPL_TYPE_ARRAY ((ion_CompilerTypeKind)((ION_CMPL_TYPE_FUNC) + (1)))

#line 24
#define ION_CMPL_TYPE_STRUCT ((ion_CompilerTypeKind)((ION_CMPL_TYPE_ARRAY) + (1)))

#line 25
#define ION_CMPL_TYPE_UNION ((ion_CompilerTypeKind)((ION_CMPL_TYPE_STRUCT) + (1)))

#line 26
#define ION_CMPL_TYPE_CONST ((ion_CompilerTypeKind)((ION_CMPL_TYPE_UNION) + (1)))

#line 27
#define ION_NUM_CMPL_TYPE_KINDS ((ion_CompilerTypeKind)((ION_CMPL_TYPE_CONST) + (1)))

#line 451 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\gen.ion"
extern char const ((*(ion_typeid_kind_names[ION_NUM_CMPL_TYPE_KINDS])));

#line 476
char const ((*ion_typeid_kind_name(ion_Type (*type))));

#line 486
bool ion_is_excluded_typeinfo(ion_Type (*type));

#line 497
void ion_gen_typeid(ion_Type (*type));

#line 505
void ion_gen_expr(ion_Expr (*expr));

#line 624
void ion_gen_stmt_block(ion_StmtList block);

#line 634
void ion_gen_simple_stmt(ion_Stmt (*stmt));

#line 664
bool ion_is_char_lit(ion_Expr (*expr));

#line 668
void ion_gen_stmt(ion_Stmt (*stmt));

#line 833
void ion_gen_decl(ion_Sym (*sym));

#line 881
void ion_gen_sorted_decls(void);

#line 889
void ion_gen_defs(void);

#line 916
extern ion_Map ion_gen_foreign_headers_map;

#line 917
extern char const ((*(*ion_gen_foreign_headers_buf)));

void ion_add_foreign_header(char const ((*name)));

#line 927
extern char const ((*(*ion_gen_foreign_sources_buf)));

void ion_add_foreign_source(char const ((*name)));

#line 934
void ion_gen_include(char const ((*path)));

#line 943
void ion_gen_foreign_headers(void);

#line 952
void ion_gen_foreign_sources(void);

#line 958
extern char const ((*(*ion_gen_sources_buf)));

void ion_put_include_path(char (path[MAX_PATH]), ion_Package (*package), char const ((*filename)));

#line 970
extern char (*ion_gen_preamble_buf);

#line 971
extern char (*ion_gen_postamble_buf);

void ion_preprocess_package(ion_Package (*package));

#line 1020
void ion_preprocess_packages(void);

#line 1026
void ion_gen_typeinfo_header(char const ((*kind)), ion_Type (*type));

#line 1035
void ion_gen_typeinfo_fields(ion_Type (*type));

#line 1054
void ion_gen_typeinfo(ion_Type (*type));

#line 1153
void ion_gen_typeinfos(void);

#line 1181
void ion_gen_package_external_names(void);

#line 1186
void ion_gen_preamble(void);

#line 1195
void ion_gen_postamble(void);

#line 1204
void ion_gen_all(void);

#line 1 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ion.ion"
#define ION_MAX_SEARCH_PATHS ((int)(256))

#line 2
extern char const ((*(ion_static_package_search_paths[ION_MAX_SEARCH_PATHS])));

#line 3
extern char const ((*(*ion_package_search_paths)));

#line 4
extern int ion_num_package_search_paths;

void ion_add_package_search_path(char const ((*path)));

#line 13
void ion_add_package_search_path_range(char const ((*start)), char const ((*end)));

#line 21
void ion_init_package_search_paths(void);

#line 47
void ion_init_compiler(void);

#line 55
void ion_parse_env_vars(void);

#line 76
int ion_ion_main(int argc, char const ((*(*argv))), void (*gen_all)(void), char const ((*extension)));

#line 1 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\lex.ion"
extern char const ((*ion_typedef_keyword));

#line 2
extern char const ((*ion_enum_keyword));

#line 3
extern char const ((*ion_struct_keyword));

#line 4
extern char const ((*ion_union_keyword));

#line 5
extern char const ((*ion_var_keyword));

#line 6
extern char const ((*ion_const_keyword));

#line 7
extern char const ((*ion_func_keyword));

#line 8
extern char const ((*ion_sizeof_keyword));

#line 9
extern char const ((*ion_alignof_keyword));

#line 10
extern char const ((*ion_typeof_keyword));

#line 11
extern char const ((*ion_offsetof_keyword));

#line 12
extern char const ((*ion_break_keyword));

#line 13
extern char const ((*ion_continue_keyword));

#line 14
extern char const ((*ion_return_keyword));

#line 15
extern char const ((*ion_if_keyword));

#line 16
extern char const ((*ion_else_keyword));

#line 17
extern char const ((*ion_while_keyword));

#line 18
extern char const ((*ion_do_keyword));

#line 19
extern char const ((*ion_for_keyword));

#line 20
extern char const ((*ion_switch_keyword));

#line 21
extern char const ((*ion_case_keyword));

#line 22
extern char const ((*ion_default_keyword));

#line 23
extern char const ((*ion_import_keyword));

#line 24
extern char const ((*ion_goto_keyword));

extern char const ((*ion_first_keyword));

#line 27
extern char const ((*ion_last_keyword));

#line 28
extern char const ((*(*ion_keywords)));

extern char const ((*ion_always_name));

#line 31
extern char const ((*ion_foreign_name));

#line 32
extern char const ((*ion_complete_name));

#line 33
extern char const ((*ion_assert_name));

#line 34
extern char const ((*ion_declare_note_name));

#line 35
extern char const ((*ion_static_assert_name));

#line 38
char const ((*ion_init_keyword(char const ((*keyword)))));

#line 45
extern bool ion_keywords_inited;

void ion_init_keywords(void);

#line 92
bool ion_is_keyword_name(char const ((*name)));

#line 97
#define ION_TOKEN_EOF ((ion_TokenKind)(0))

#line 98
#define ION_TOKEN_COLON ((ion_TokenKind)((ION_TOKEN_EOF) + (1)))

#line 99
#define ION_TOKEN_LPAREN ((ion_TokenKind)((ION_TOKEN_COLON) + (1)))

#line 100
#define ION_TOKEN_RPAREN ((ion_TokenKind)((ION_TOKEN_LPAREN) + (1)))

#line 101
#define ION_TOKEN_LBRACE ((ion_TokenKind)((ION_TOKEN_RPAREN) + (1)))

#line 102
#define ION_TOKEN_RBRACE ((ion_TokenKind)((ION_TOKEN_LBRACE) + (1)))

#line 103
#define ION_TOKEN_LBRACKET ((ion_TokenKind)((ION_TOKEN_RBRACE) + (1)))

#line 104
#define ION_TOKEN_RBRACKET ((ion_TokenKind)((ION_TOKEN_LBRACKET) + (1)))

#line 105
#define ION_TOKEN_COMMA ((ion_TokenKind)((ION_TOKEN_RBRACKET) + (1)))

#line 106
#define ION_TOKEN_DOT ((ion_TokenKind)((ION_TOKEN_COMMA) + (1)))

#line 107
#define ION_TOKEN_AT ((ion_TokenKind)((ION_TOKEN_DOT) + (1)))

#line 108
#define ION_TOKEN_POUND ((ion_TokenKind)((ION_TOKEN_AT) + (1)))

#line 109
#define ION_TOKEN_ELLIPSIS ((ion_TokenKind)((ION_TOKEN_POUND) + (1)))

#line 110
#define ION_TOKEN_QUESTION ((ion_TokenKind)((ION_TOKEN_ELLIPSIS) + (1)))

#line 111
#define ION_TOKEN_SEMICOLON ((ion_TokenKind)((ION_TOKEN_QUESTION) + (1)))

#line 112
#define ION_TOKEN_KEYWORD ((ion_TokenKind)((ION_TOKEN_SEMICOLON) + (1)))

#line 113
#define ION_TOKEN_INT ((ion_TokenKind)((ION_TOKEN_KEYWORD) + (1)))

#line 114
#define ION_TOKEN_FLOAT ((ion_TokenKind)((ION_TOKEN_INT) + (1)))

#line 115
#define ION_TOKEN_STR ((ion_TokenKind)((ION_TOKEN_FLOAT) + (1)))

#line 116
#define ION_TOKEN_NAME ((ion_TokenKind)((ION_TOKEN_STR) + (1)))

#line 117
#define ION_TOKEN_NEG ((ion_TokenKind)((ION_TOKEN_NAME) + (1)))

#line 118
#define ION_TOKEN_NOT ((ion_TokenKind)((ION_TOKEN_NEG) + (1)))

#define ION_TOKEN_FIRST_MUL ((ion_TokenKind)((ION_TOKEN_NOT) + (1)))

#line 121
#define ION_TOKEN_MUL ((ion_TokenKind)(ION_TOKEN_FIRST_MUL))

#line 122
#define ION_TOKEN_DIV ((ion_TokenKind)((ION_TOKEN_MUL) + (1)))

#line 123
#define ION_TOKEN_MOD ((ion_TokenKind)((ION_TOKEN_DIV) + (1)))

#line 124
#define ION_TOKEN_AND ((ion_TokenKind)((ION_TOKEN_MOD) + (1)))

#line 125
#define ION_TOKEN_LSHIFT ((ion_TokenKind)((ION_TOKEN_AND) + (1)))

#line 126
#define ION_TOKEN_RSHIFT ((ion_TokenKind)((ION_TOKEN_LSHIFT) + (1)))

#line 127
#define ION_TOKEN_LAST_MUL ((ion_TokenKind)(ION_TOKEN_RSHIFT))

#define ION_TOKEN_FIRST_ADD ((ion_TokenKind)((ION_TOKEN_LAST_MUL) + (1)))

#line 130
#define ION_TOKEN_ADD ((ion_TokenKind)(ION_TOKEN_FIRST_ADD))

#line 131
#define ION_TOKEN_SUB ((ion_TokenKind)((ION_TOKEN_ADD) + (1)))

#line 132
#define ION_TOKEN_XOR ((ion_TokenKind)((ION_TOKEN_SUB) + (1)))

#line 133
#define ION_TOKEN_OR ((ion_TokenKind)((ION_TOKEN_XOR) + (1)))

#line 134
#define ION_TOKEN_LAST_ADD ((ion_TokenKind)(ION_TOKEN_OR))

#define ION_TOKEN_FIRST_CMP ((ion_TokenKind)((ION_TOKEN_LAST_ADD) + (1)))

#line 137
#define ION_TOKEN_EQ ((ion_TokenKind)(ION_TOKEN_FIRST_CMP))

#line 138
#define ION_TOKEN_NOTEQ ((ion_TokenKind)((ION_TOKEN_EQ) + (1)))

#line 139
#define ION_TOKEN_LT ((ion_TokenKind)((ION_TOKEN_NOTEQ) + (1)))

#line 140
#define ION_TOKEN_GT ((ion_TokenKind)((ION_TOKEN_LT) + (1)))

#line 141
#define ION_TOKEN_LTEQ ((ion_TokenKind)((ION_TOKEN_GT) + (1)))

#line 142
#define ION_TOKEN_GTEQ ((ion_TokenKind)((ION_TOKEN_LTEQ) + (1)))

#line 143
#define ION_TOKEN_LAST_CMP ((ion_TokenKind)(ION_TOKEN_GTEQ))

#line 144
#define ION_TOKEN_AND_AND ((ion_TokenKind)((ION_TOKEN_LAST_CMP) + (1)))

#line 145
#define ION_TOKEN_OR_OR ((ion_TokenKind)((ION_TOKEN_AND_AND) + (1)))

#define ION_TOKEN_FIRST_ASSIGN ((ion_TokenKind)((ION_TOKEN_OR_OR) + (1)))

#line 148
#define ION_TOKEN_ASSIGN ((ion_TokenKind)(ION_TOKEN_FIRST_ASSIGN))

#line 149
#define ION_TOKEN_ADD_ASSIGN ((ion_TokenKind)((ION_TOKEN_ASSIGN) + (1)))

#line 150
#define ION_TOKEN_SUB_ASSIGN ((ion_TokenKind)((ION_TOKEN_ADD_ASSIGN) + (1)))

#line 151
#define ION_TOKEN_OR_ASSIGN ((ion_TokenKind)((ION_TOKEN_SUB_ASSIGN) + (1)))

#line 152
#define ION_TOKEN_AND_ASSIGN ((ion_TokenKind)((ION_TOKEN_OR_ASSIGN) + (1)))

#line 153
#define ION_TOKEN_XOR_ASSIGN ((ion_TokenKind)((ION_TOKEN_AND_ASSIGN) + (1)))

#line 154
#define ION_TOKEN_LSHIFT_ASSIGN ((ion_TokenKind)((ION_TOKEN_XOR_ASSIGN) + (1)))

#line 155
#define ION_TOKEN_RSHIFT_ASSIGN ((ion_TokenKind)((ION_TOKEN_LSHIFT_ASSIGN) + (1)))

#line 156
#define ION_TOKEN_MUL_ASSIGN ((ion_TokenKind)((ION_TOKEN_RSHIFT_ASSIGN) + (1)))

#line 157
#define ION_TOKEN_DIV_ASSIGN ((ion_TokenKind)((ION_TOKEN_MUL_ASSIGN) + (1)))

#line 158
#define ION_TOKEN_MOD_ASSIGN ((ion_TokenKind)((ION_TOKEN_DIV_ASSIGN) + (1)))

#line 159
#define ION_TOKEN_LAST_ASSIGN ((ion_TokenKind)(ION_TOKEN_MOD_ASSIGN))

#line 160
#define ION_TOKEN_INC ((ion_TokenKind)((ION_TOKEN_LAST_ASSIGN) + (1)))

#line 161
#define ION_TOKEN_DEC ((ion_TokenKind)((ION_TOKEN_INC) + (1)))

#line 162
#define ION_TOKEN_COLON_ASSIGN ((ion_TokenKind)((ION_TOKEN_DEC) + (1)))

#line 163
#define ION_NUM_TOKEN_KINDS ((ion_TokenKind)((ION_TOKEN_COLON_ASSIGN) + (1)))

#line 167
#define ION_MOD_NONE ((ion_TokenMod)(0))

#line 168
#define ION_MOD_HEX ((ion_TokenMod)((ION_MOD_NONE) + (1)))

#line 169
#define ION_MOD_BIN ((ion_TokenMod)((ION_MOD_HEX) + (1)))

#line 170
#define ION_MOD_OCT ((ion_TokenMod)((ION_MOD_BIN) + (1)))

#line 171
#define ION_MOD_CHAR ((ion_TokenMod)((ION_MOD_OCT) + (1)))

#line 172
#define ION_MOD_MULTILINE ((ion_TokenMod)((ION_MOD_CHAR) + (1)))

#line 176
#define ION_SUFFIX_NONE ((ion_TokenSuffix)(0))

#line 177
#define ION_SUFFIX_D ((ion_TokenSuffix)((ION_SUFFIX_NONE) + (1)))

#line 178
#define ION_SUFFIX_U ((ion_TokenSuffix)((ION_SUFFIX_D) + (1)))

#line 179
#define ION_SUFFIX_L ((ion_TokenSuffix)((ION_SUFFIX_U) + (1)))

#line 180
#define ION_SUFFIX_UL ((ion_TokenSuffix)((ION_SUFFIX_L) + (1)))

#line 181
#define ION_SUFFIX_LL ((ion_TokenSuffix)((ION_SUFFIX_UL) + (1)))

#line 182
#define ION_SUFFIX_ULL ((ion_TokenSuffix)((ION_SUFFIX_LL) + (1)))

#line 185
extern char const ((*(ion_token_suffix_names[7])));

#line 195
extern char const ((*(ion_token_kind_names[54])));

#line 252
char const ((*ion_token_kind_name(ion_TokenKind kind)));

#line 260
extern ion_TokenKind (ion_assign_token_to_binary_token[ION_NUM_TOKEN_KINDS]);

#line 278
extern ion_SrcPos ion_pos_builtin;

struct ion_Token {
    ion_TokenKind kind;
    ion_TokenMod mod;
    ion_TokenSuffix suffix;
    ion_SrcPos pos;
    char const ((*start));
    char const ((*end));
    union {
        ullong int_val;
        double float_val;
        char const ((*str_val));
        char const ((*name));
    };
};

extern ion_Token ion_token;

#line 296
extern char const ((*ion_stream));

#line 297
extern char const ((*ion_line_start));

void ion_vnotice(char const ((*level)), ion_SrcPos pos, char const ((*fmt)), va_list args);

#line 308
void ion_warning(ion_SrcPos pos, char const ((*fmt)), ...);

#line 315
void ion_verror(ion_SrcPos pos, char const ((*fmt)), va_list args);

#line 319
void ion_error(ion_SrcPos pos, char const ((*fmt)), ...);

#line 326
void ion_fatal_error(ion_SrcPos pos, char const ((*fmt)), ...);

#line 339
char const ((*ion_token_info(void)));

#line 347
extern uint8_t (ion_char_to_digit[256]);

#line 366
void ion_scan_int(void);

#line 441
void ion_scan_float(void);

#line 476
extern char (ion_escape_to_char[256]);

#line 489
int ion_scan_hex_escape(void);

#line 510
void ion_scan_char(void);

#line 544
void ion_scan_str(void);

#line 632
void ion_next_token(void);

#line 881
void ion_init_stream(char const ((*name)), char const ((*buf)));

#line 889
bool ion_is_token(ion_TokenKind kind);

#line 893
bool ion_is_token_eof(void);

#line 897
bool ion_is_token_name(char const ((*name)));

#line 901
bool ion_is_keyword(char const ((*name)));

#line 905
bool ion_match_keyword(char const ((*name)));

#line 914
bool ion_match_token(ion_TokenKind kind);

#line 923
bool ion_expect_token(ion_TokenKind kind);

#line 7 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\main.ion"
extern bool ion_flag_verbose;

#line 8
extern bool ion_flag_lazy;

#line 9
extern bool ion_flag_notypeinfo;

#line 10
extern bool ion_flag_fullgen;

#line 4 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\os.ion"
void ion_path_normalize(char (*path));

#line 16
void ion_path_copy(char (path[MAX_PATH]), char const ((*src)));

#line 22
void ion_path_join(char (path[MAX_PATH]), char const ((*src)));

#line 33
char (*ion_path_file(char (path[MAX_PATH])));

#line 43
char (*ion_path_ext(char (path[MAX_PATH])));

#line 64
bool ion_dir_excluded(ion_DirListIter (*iter));

#line 68
bool ion_dir_list_subdir(ion_DirListIter (*iter));

#line 80
char const ((*(*ion_dir_list_buf(char const ((*filespec))))));

#line 92
typedef int ion_FlagKind;

#line 93
#define ION_FLAG_BOOL ((ion_FlagKind)(0))

#line 94
#define ION_FLAG_STR ((ion_FlagKind)((ION_FLAG_BOOL) + (1)))

#line 95
#define ION_FLAG_ENUM ((ion_FlagKind)((ION_FLAG_STR) + (1)))

#line 114
extern ion_FlagDef (*ion_flag_defs);

void ion_add_flag_bool(char const ((*name)), bool (*ptr), char const ((*help)));

#line 121
void ion_add_flag_str(char const ((*name)), char const ((*(*ptr))), char const ((*arg_name)), char const ((*help)));

#line 126
void ion_add_flag_enum(char const ((*name)), int (*ptr), char const ((*help)), char const ((*(*options))), int num_options);

#line 131
ion_FlagDef (*ion_get_flag_def(char const ((*name))));

#line 140
void ion_print_flags_usage(void);

#line 172
char const ((*ion_parse_flags(int (*argc_ptr), char const ((*(*(*argv_ptr)))))));

#line 35 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\os_win32.ion"
void ion_path_absolute(char (path[MAX_PATH]));

#line 41
void ion_dir_list_free(ion_DirListIter (*iter));

#line 49
void ion_dir__update(ion_DirListIter (*iter), bool done, FindData (*fileinfo));

#line 60
void ion_dir_list_next(ion_DirListIter (*iter));

#line 75
void ion_dir_list(ion_DirListIter (*iter), char const ((*path)));

#line 1 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\parse.ion"
ion_Typespec (*ion_parse_type_func_param(void));

#line 12
ion_Typespec (*ion_parse_type_func(void));

#line 43
ion_Typespec (*ion_parse_type_base(void));

#line 61
ion_Typespec (*ion_parse_type(void));

#line 203 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
struct ion_CompoundField {
    ion_CompoundFieldKind kind;
    ion_SrcPos pos;
    ion_Expr (*init);
    union {
        char const ((*name));
        ion_Expr (*index);
    };
};

#line 83 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\parse.ion"
ion_CompoundField ion_parse_expr_compound_field(void);

#line 103
ion_Expr (*ion_parse_expr_compound(ion_Typespec (*type)));

#line 118
ion_Expr (*ion_parse_expr_operand(void));

#line 208
ion_Expr (*ion_parse_expr_base(void));

#line 242
bool ion_is_unary_op(void);

#line 254
ion_Expr (*ion_parse_expr_unary(void));

#line 269
bool ion_is_mul_op(void);

#line 273
ion_Expr (*ion_parse_expr_mul(void));

#line 284
bool ion_is_add_op(void);

#line 288
ion_Expr (*ion_parse_expr_add(void));

#line 299
bool ion_is_cmp_op(void);

#line 303
ion_Expr (*ion_parse_expr_cmp(void));

#line 314
ion_Expr (*ion_parse_expr_and(void));

#line 323
ion_Expr (*ion_parse_expr_or(void));

#line 332
ion_Expr (*ion_parse_expr_ternary(void));

#line 344
ion_Expr (*ion_parse_expr(void));

#line 348
ion_Expr (*ion_parse_paren_expr(void));

#line 355
ion_StmtList ion_parse_stmt_block(void);

#line 367
ion_Stmt (*ion_parse_stmt_if(ion_SrcPos pos));

#line 395
ion_Stmt (*ion_parse_stmt_while(ion_SrcPos pos));

#line 400
ion_Stmt (*ion_parse_stmt_do_while(ion_SrcPos pos));

#line 411
bool ion_is_assign_op(void);

#line 415
ion_Stmt (*ion_parse_init_stmt(ion_Expr (*left)));

#line 439
ion_Stmt (*ion_parse_simple_stmt(void));

#line 455
ion_Stmt (*ion_parse_stmt_for(ion_SrcPos pos));

#line 323 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
struct ion_SwitchCasePattern {
    ion_Expr (*start);
    ion_Expr (*end);
};

#line 479 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\parse.ion"
ion_SwitchCasePattern ion_parse_switch_case_pattern(void);

#line 328 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
struct ion_SwitchCase {
    ion_SwitchCasePattern (*patterns);
    size_t num_patterns;
    bool is_default;
    ion_StmtList block;
};

#line 488 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\parse.ion"
ion_SwitchCase ion_parse_stmt_switch_case(void);

#line 523
ion_Stmt (*ion_parse_stmt_switch(ion_SrcPos pos));

#line 535
ion_Stmt (*ion_parse_stmt(void));

#line 581
char const ((*ion_parse_name(void)));

#line 79 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
struct ion_EnumItem {
    ion_SrcPos pos;
    char const ((*name));
    ion_Expr (*init);
};

#line 587 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\parse.ion"
ion_EnumItem ion_parse_decl_enum_item(void);

#line 597
ion_Decl (*ion_parse_decl_enum(ion_SrcPos pos));

#line 66 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
struct ion_AggregateItem {
    ion_SrcPos pos;
    ion_AggregateItemKind kind;
    union {
        struct {
            char const ((*(*names)));
            size_t num_names;
            ion_Typespec (*type);
        };
        ion_Aggregate (*subaggregate);
    };
};

#line 619 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\parse.ion"
ion_AggregateItem ion_parse_decl_aggregate_item(void);

#line 654
ion_Aggregate (*ion_parse_aggregate(ion_AggregateKind kind));

#line 666
ion_Decl (*ion_parse_decl_aggregate(ion_SrcPos pos, ion_DeclKind kind));

#line 679
ion_Decl (*ion_parse_decl_var(ion_SrcPos pos));

#line 699
ion_Decl (*ion_parse_decl_const(ion_SrcPos pos));

#line 711
ion_Decl (*ion_parse_decl_typedef(ion_SrcPos pos));

#line 54 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
struct ion_FuncParam {
    ion_SrcPos pos;
    char const ((*name));
    ion_Typespec (*type);
};

#line 719 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\parse.ion"
ion_FuncParam ion_parse_decl_func_param(void);

#line 727
ion_Decl (*ion_parse_decl_func(ion_SrcPos pos));

#line 3 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
struct ion_NoteArg {
    ion_SrcPos pos;
    char const ((*name));
    ion_Expr (*expr);
};

#line 768 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\parse.ion"
ion_NoteArg ion_parse_note_arg(void);

#line 782
ion_Note ion_parse_note(void);

#line 798
ion_Notes ion_parse_notes(void);

#line 807
ion_Decl (*ion_parse_decl_note(ion_SrcPos pos));

#line 811
ion_Decl (*ion_parse_decl_import(ion_SrcPos pos));

#line 859
ion_Decl (*ion_parse_decl_opt(void));

#line 884
ion_Decl (*ion_parse_decl(void));

#line 894
ion_Decls (*ion_parse_decls(void));

#line 1 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\resolve.ion"
typedef int ion_SymKind;

#line 2
#define ION_SYM_NONE ((ion_SymKind)(0))

#line 3
#define ION_SYM_VAR ((ion_SymKind)((ION_SYM_NONE) + (1)))

#line 4
#define ION_SYM_CONST ((ion_SymKind)((ION_SYM_VAR) + (1)))

#line 5
#define ION_SYM_FUNC ((ion_SymKind)((ION_SYM_CONST) + (1)))

#line 6
#define ION_SYM_TYPE ((ion_SymKind)((ION_SYM_FUNC) + (1)))

#line 7
#define ION_SYM_PACKAGE ((ion_SymKind)((ION_SYM_TYPE) + (1)))

#line 10
typedef int ion_SymState;

#line 11
#define ION_SYM_UNRESOLVED ((ion_SymState)(0))

#line 12
#define ION_SYM_RESOLVING ((ion_SymState)((ION_SYM_UNRESOLVED) + (1)))

#line 13
#define ION_SYM_RESOLVED ((ion_SymState)((ION_SYM_RESOLVING) + (1)))

#line 45
#define ION_MAX_LOCAL_SYMS ((int)(1024))

#line 48
extern ion_Package (*ion_current_package);

#line 49
extern ion_Package (*ion_builtin_package);

#line 50
extern ion_Map ion_package_map;

#line 51
extern ion_Package (*(*ion_package_list));

#line 54
#define ION_REACHABLE_NONE ((int)(0))

#line 55
#define ION_REACHABLE_NATURAL ((int)((ION_REACHABLE_NONE) + (1)))

#line 56
#define ION_REACHABLE_FORCED ((int)((ION_REACHABLE_NATURAL) + (1)))

#line 59
extern uint8_t ion_reachable_phase;

ion_Sym (*ion_get_package_sym(ion_Package (*package), char const ((*name))));

#line 65
void ion_add_package(ion_Package (*package));

#line 74
ion_Package (*ion_enter_package(ion_Package (*new_package)));

#line 80
void ion_leave_package(ion_Package (*old_package));

#line 84
extern ion_Sym (*(*ion_reachable_syms));

#line 85
extern ion_Sym (*(*ion_sorted_syms));

#line 465 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\common.ion"
union ion_Val {
    bool b;
    char c;
    uchar uc;
    schar sc;
    short s;
    ushort us;
    int i;
    uint u;
    long l;
    ulong ul;
    llong ll;
    ullong ull;
    uintptr_t p;
};

#line 16 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\resolve.ion"
struct ion_Sym {
    char const ((*name));
    ion_Package (*home_package);
    ion_SymKind kind;
    ion_SymState state;
    uint8_t reachable;
    ion_Decl (*decl);
    char const ((*external_name));
    union {
        struct {
            ion_Type (*type);
            ion_Val val;
        };
        ion_Package (*package);
    };
};

#line 86
extern ion_Sym (ion_local_syms[ION_MAX_LOCAL_SYMS]);

#line 87
extern ion_Sym (*ion_local_syms_end);

bool ion_is_local_sym(ion_Sym (*sym));

#line 93
ion_Sym (*ion_sym_new(ion_SymKind kind, char const ((*name)), ion_Decl (*decl)));

#line 103
void ion_process_decl_notes(ion_Decl (*decl), ion_Sym (*sym));

#line 123
ion_Sym (*ion_sym_decl(ion_Decl (*decl)));

#line 146
ion_Sym (*ion_sym_get_local(char const ((*name))));

#line 156
ion_Sym (*ion_sym_get(char const ((*name))));

#line 161
bool ion_sym_push_var(char const ((*name)), ion_Type (*type));

#line 177
ion_Sym (*ion_sym_enter(void));

#line 181
void ion_sym_leave(ion_Sym (*sym));

#line 185
void ion_sym_global_put(char const ((*name)), ion_Sym (*sym));

#line 204
ion_Sym (*ion_sym_global_type(char const ((*name)), ion_Type (*type)));

#line 214
ion_Sym (*ion_sym_global_decl(ion_Decl (*decl)));

#line 242
void ion_put_type_name(char (*(*buf)), ion_Type (*type));

#line 285
char (*ion_get_type_name(ion_Type (*type)));

#line 291
struct ion_Operand {
    ion_Type (*type);
    bool is_lvalue;
    bool is_const;
    ion_Val val;
};

extern ion_Operand ion_operand_null;

ion_Operand ion_operand_rvalue(ion_Type (*type));

#line 306
ion_Operand ion_operand_lvalue(ion_Type (*type));

#line 313
ion_Operand ion_operand_const(ion_Type (*type), ion_Val val);

#line 321
ion_Type (*ion_type_decay(ion_Type (*type)));

#line 329
ion_Operand ion_operand_decay(ion_Operand operand);

#line 337
bool ion_is_convertible(ion_Operand (*operand), ion_Type (*dest));

#line 364
bool ion_is_castable(ion_Operand (*operand), ion_Type (*dest));

#line 382
bool ion_convert_operand(ion_Operand (*operand), ion_Type (*type));

#line 394
bool ion_is_null_ptr(ion_Operand operand);

#line 403
void ion_promote_operand(ion_Operand (*operand));

#line 418
void ion_unify_arithmetic_operands(ion_Operand (*left), ion_Operand (*right));

#line 457
extern ion_Map ion_resolved_val_map;

ion_Val ion_get_resolved_val(void (*ptr));

#line 467
void ion_set_resolved_val(void (*ptr), ion_Val val);

#line 474
extern ion_Map ion_resolved_type_map;

ion_Type (*ion_get_resolved_type(void (*ptr)));

#line 480
void ion_set_resolved_type(void (*ptr), ion_Type (*type));

#line 484
extern ion_Map ion_resolved_sym_map;

ion_Sym (*ion_get_resolved_sym(void const ((*ptr))));

#line 490
void ion_set_resolved_sym(void const ((*ptr)), ion_Sym (*sym));

#line 496
extern ion_Map ion_resolved_expected_type_map;

ion_Type (*ion_get_resolved_expected_type(ion_Expr (*expr)));

#line 502
void ion_set_resolved_expected_type(ion_Expr (*expr), ion_Type (*type));

#line 508
ion_Operand ion_resolve_expr(ion_Expr (*expr));

#line 512
ion_Operand ion_resolve_expr_rvalue(ion_Expr (*expr));

#line 516
ion_Operand ion_resolve_expected_expr_rvalue(ion_Expr (*expr), ion_Type (*expected_type));

#line 520
ion_Type (*ion_resolve_typespec(ion_Typespec (*typespec)));

#line 583
ion_Type (*ion_complete_aggregate(ion_Type (*type), ion_Aggregate (*aggregate)));

#line 623
void ion_complete_type(ion_Type (*type));

#line 643
ion_Type (*ion_resolve_typed_init(ion_SrcPos pos, ion_Type (*type), ion_Expr (*expr)));

#line 660
ion_Type (*ion_resolve_init(ion_SrcPos pos, ion_Typespec (*typespec), ion_Expr (*expr)));

#line 687
ion_Type (*ion_resolve_decl_var(ion_Decl (*decl)));

#line 692
ion_Type (*ion_resolve_decl_const(ion_Decl (*decl), ion_Val (*val)));

#line 708
ion_Type (*ion_resolve_decl_func(ion_Decl (*decl)));

#line 742
#define ION_MAX_LABELS (256)

#line 735
struct ion_Label {
    char const ((*name));
    ion_SrcPos pos;
    bool referenced;
    bool defined;
};

#line 744
extern ion_Label (ion_labels[ION_MAX_LABELS]);

#line 745
extern ion_Label (*ion_labels_end);

ion_Label (*ion_get_label(ion_SrcPos pos, char const ((*name))));

#line 762
void ion_reference_label(ion_SrcPos pos, char const ((*name)));

#line 767
void ion_define_label(ion_SrcPos pos, char const ((*name)));

#line 775
void ion_resolve_labels(void);

#line 787
bool ion_is_cond_operand(ion_Operand operand);

#line 792
void ion_resolve_cond_expr(ion_Expr (*expr));

#line 730
struct ion_StmtCtx {
    bool is_break_legal;
    bool is_continue_legal;
};

#line 799
bool ion_resolve_stmt_block(ion_StmtList block, ion_Type (*ret_type), ion_StmtCtx ctx);

#line 809
void ion_resolve_stmt_assign(ion_Stmt (*stmt));

#line 843
void ion_resolve_stmt_init(ion_Stmt (*stmt));

#line 851
void ion_resolve_static_assert(ion_Note note);

#line 861
bool ion_resolve_stmt(ion_Stmt (*stmt), ion_Type (*ret_type), ion_StmtCtx ctx);

#line 1017
void ion_resolve_func_body(ion_Sym (*sym));

#line 1045
void ion_resolve_sym(ion_Sym (*sym));

#line 1093
void ion_finalize_sym(ion_Sym (*sym));

#line 1104
ion_Sym (*ion_resolve_name(char const ((*name))));

#line 1113
ion_Package (*ion_try_resolve_package(ion_Expr (*expr)));

#line 1131
ion_Operand ion_resolve_expr_field(ion_Expr (*expr));

#line 1170
llong ion_eval_unary_op_ll(ion_TokenKind op, llong val);

#line 1186
ullong ion_eval_unary_op_ull(ion_TokenKind op, ullong val);

#line 1202
llong ion_eval_binary_op_ll(ion_TokenKind op, llong left, llong right);

#line 1242
ullong ion_eval_binary_op_ull(ion_TokenKind op, ullong left, ullong right);

#line 1282
ion_Val ion_eval_unary_op(ion_TokenKind op, ion_Type (*type), ion_Val val);

#line 1299
ion_Val ion_eval_binary_op(ion_TokenKind op, ion_Type (*type), ion_Val left, ion_Val right);

#line 1320
ion_Operand ion_resolve_name_operand(ion_SrcPos pos, char const ((*name)));

#line 1341
ion_Operand ion_resolve_expr_name(ion_Expr (*expr));

#line 1346
ion_Operand ion_resolve_unary_op(ion_TokenKind op, ion_Operand operand);

#line 1355
ion_Operand ion_resolve_expr_unary(ion_Expr (*expr));

#line 1386
ion_Operand ion_resolve_binary_op(ion_TokenKind op, ion_Operand left, ion_Operand right);

#line 1394
ion_Operand ion_resolve_binary_arithmetic_op(ion_TokenKind op, ion_Operand left, ion_Operand right);

#line 1399
ion_Operand ion_resolve_expr_binary_op(ion_TokenKind op, char const ((*op_name)), ion_SrcPos pos, ion_Operand left, ion_Operand right);

#line 1539
ion_Operand ion_resolve_expr_binary(ion_Expr (*expr));

#line 1548
ion_Operand ion_resolve_expr_compound(ion_Expr (*expr), ion_Type (*expected_type));

#line 1632
ion_Operand ion_resolve_expr_call(ion_Expr (*expr));

#line 1675
ion_Operand ion_resolve_expr_ternary(ion_Expr (*expr), ion_Type (*expected_type));

#line 1704
ion_Operand ion_resolve_expr_index(ion_Expr (*expr));

#line 1717
ion_Operand ion_resolve_expr_cast(ion_Expr (*expr));

#line 1727
ion_Operand ion_resolve_expr_int(ion_Expr (*expr));

#line 1837
ion_Operand ion_resolve_expr_modify(ion_Expr (*expr));

#line 1853
ion_Operand ion_resolve_expected_expr(ion_Expr (*expr), ion_Type (*expected_type));

#line 1975
ion_Operand ion_resolve_const_expr(ion_Expr (*expr));

#line 1983
extern ion_Map ion_decl_note_names;

void ion_init_builtin_syms(void);

#line 2004
void ion_add_package_decls(ion_Package (*package));

#line 2034
bool ion_is_package_dir(char const ((*search_path)), char const ((*package_path)));

#line 2049
bool ion_copy_package_full_path(char (dest[MAX_PATH]), char const ((*package_path)));

#line 2060
ion_Package (*ion_import_package(char const ((*package_path))));

#line 2080
void ion_import_all_package_symbols(ion_Package (*package));

#line 2090
void ion_import_package_symbols(ion_Decl (*decl), ion_Package (*package));

#line 2101
void ion_process_package_imports(ion_Package (*package));

#line 2136
bool ion_parse_package(ion_Package (*package));

#line 2172
bool ion_compile_package(ion_Package (*package));

#line 2189
void ion_resolve_package_syms(ion_Package (*package));

#line 2199
void ion_finalize_reachable_syms(void);

#line 1 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\targets.ion"
typedef int ion_Os;

#line 2
#define ION_OS_WIN32 ((ion_Os)(0))

#line 3
#define ION_OS_LINUX ((ion_Os)((ION_OS_WIN32) + (1)))

#line 4
#define ION_OS_OSX ((ion_Os)((ION_OS_LINUX) + (1)))

#line 5
#define ION_NUM_OSES ((ion_Os)((ION_OS_OSX) + (1)))

#line 8
extern char const ((*(ion_os_names[ION_NUM_OSES])));

#line 14
typedef int ion_Arch;

#line 15
#define ION_ARCH_X64 ((ion_Arch)(0))

#line 16
#define ION_ARCH_X86 ((ion_Arch)((ION_ARCH_X64) + (1)))

#line 17
#define ION_NUM_ARCHES ((ion_Arch)((ION_ARCH_X86) + (1)))

#line 20
extern char const ((*(ion_arch_names[ION_NUM_ARCHES])));

#line 25
extern int ion_target_os;

#line 26
extern int ion_target_arch;

int ion_get_os(char const ((*name)));

#line 37
int ion_get_arch(char const ((*name)));

#line 63 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\type.ion"
struct ion_TypeMetrics {
    size_t size;
    size_t align;
    bool sign;
    ullong max;
};

#line 46 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\targets.ion"
void ion_init_default_type_metrics(ion_TypeMetrics (metrics[ION_NUM_CMPL_TYPE_KINDS]));

#line 61
extern ion_TypeMetrics (ion_win32_x86_metrics[ION_NUM_CMPL_TYPE_KINDS]);

#line 68
extern ion_TypeMetrics (ion_win32_x64_metrics[ION_NUM_CMPL_TYPE_KINDS]);

#line 75
extern ion_TypeMetrics (ion_ilp32_metrics[ION_NUM_CMPL_TYPE_KINDS]);

#line 82
extern ion_TypeMetrics (ion_lp64_metrics[ION_NUM_CMPL_TYPE_KINDS]);

#line 89
void ion_init_target(void);

#line 133
bool ion_is_excluded_target_filename(char const ((*name)));

#line 70 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\type.ion"
extern ion_TypeMetrics (*ion_type_metrics);

#line 51
struct ion_TypeAggregate {
    ion_TypeField (*fields);
    size_t num_fields;
};

struct ion_TypeFunc {
    ion_Type (*(*params));
    size_t num_params;
    bool has_varargs;
    ion_Type (*ret);
};

#line 36
struct ion_Type {
    ion_CompilerTypeKind kind;
    size_t size;
    size_t align;
    ion_Sym (*sym);
    ion_Type (*base);
    int typeid;
    bool nonmodifiable;
    union {
        size_t num_elems;
        ion_TypeAggregate aggregate;
        ion_TypeFunc function;
    };
};

#line 72
extern ion_Type (*ion_type_void);

#line 73
extern ion_Type (*ion_type_bool);

#line 74
extern ion_Type (*ion_type_char);

#line 75
extern ion_Type (*ion_type_uchar);

#line 76
extern ion_Type (*ion_type_schar);

#line 77
extern ion_Type (*ion_type_short);

#line 78
extern ion_Type (*ion_type_ushort);

#line 79
extern ion_Type (*ion_type_int);

#line 80
extern ion_Type (*ion_type_uint);

#line 81
extern ion_Type (*ion_type_long);

#line 82
extern ion_Type (*ion_type_ulong);

#line 83
extern ion_Type (*ion_type_llong);

#line 84
extern ion_Type (*ion_type_ullong);

#line 85
extern ion_Type (*ion_type_float);

#line 86
extern ion_Type (*ion_type_double);

extern int ion_next_typeid;

extern ion_Type (*ion_type_uintptr);

#line 91
extern ion_Type (*ion_type_usize);

#line 92
extern ion_Type (*ion_type_ssize);

extern ion_Map ion_typeid_map;

ion_Type (*ion_get_type_from_typeid(int typeid));

#line 103
void ion_register_typeid(ion_Type (*type));

#line 107
ion_Type (*ion_type_alloc(TypeKind kind));

#line 115
bool ion_is_ptr_type(ion_Type (*type));

#line 119
bool ion_is_func_type(ion_Type (*type));

#line 123
bool ion_is_ptr_like_type(ion_Type (*type));

#line 127
bool ion_is_const_type(ion_Type (*type));

#line 131
bool ion_is_array_type(ion_Type (*type));

#line 135
bool ion_is_incomplete_array_type(ion_Type (*type));

#line 139
bool ion_is_integer_type(ion_Type (*type));

#line 143
bool ion_is_floating_type(ion_Type (*type));

#line 147
bool ion_is_arithmetic_type(ion_Type (*type));

#line 151
bool ion_is_scalar_type(ion_Type (*type));

#line 155
bool ion_is_aggregate_type(ion_Type (*type));

#line 159
bool ion_is_signed_type(ion_Type (*type));

#line 174
extern char const ((*(ion_type_names[ION_NUM_CMPL_TYPE_KINDS])));

#line 192
extern int (ion_type_ranks[ION_NUM_CMPL_TYPE_KINDS]);

#line 207
int ion_type_rank(ion_Type (*type));

#line 213
ion_Type (*ion_unsigned_type(ion_Type (*type)));

#line 239
size_t ion_type_sizeof(ion_Type (*type));

#line 244
size_t ion_type_alignof(ion_Type (*type));

#line 249
extern ion_Map ion_cached_ptr_types;

ion_Type (*ion_type_ptr(ion_Type (*base)));

#line 263
extern ion_Map ion_cached_const_types;

ion_Type (*ion_type_const(ion_Type (*base)));

#line 282
ion_Type (*ion_unqualify_type(ion_Type (*type)));

#line 295
extern ion_Map ion_cached_array_types;

ion_Type (*ion_type_array(ion_Type (*base), size_t num_elems));

#line 326
extern ion_Map ion_cached_func_types;

ion_Type (*ion_type_func(ion_Type (*(*params)), size_t num_params, ion_Type (*ret), bool has_varargs));

#line 355
bool ion_has_duplicate_fields(ion_Type (*type));

#line 366
void ion_add_type_fields(ion_TypeField (*(*fields)), ion_Type (*type), size_t offset);

#line 375
void ion_type_complete_struct(ion_Type (*type), ion_TypeField (*fields), size_t num_fields);

#line 400
void ion_type_complete_union(ion_Type (*type), ion_TypeField (*fields), size_t num_fields);

#line 425
ion_Type (*ion_type_incomplete(ion_Sym (*sym)));

#line 431
ion_Type (*ion_type_enum(ion_Sym (*sym), ion_Type (*base)));

#line 440
void ion_init_builtin_type(ion_Type (*type));

#line 447
void ion_init_builtin_types(void);

#line 465
int ion_aggregate_item_field_index(ion_Type (*type), char const ((*name)));

#line 475
ion_Type (*ion_aggregate_item_field_type_from_index(ion_Type (*type), int index));

#line 481
ion_Type (*ion_aggregate_item_field_type_from_name(ion_Type (*type), char const ((*name))));

#line 1 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\main.ion"

#line 28 "C:\\Users\\Tom\\Documents\\projects\\ion\\system_packages\\builtin\\typeinfo.ion"
struct TypeFieldInfo {
    char const ((*name));
    typeid type;
    int offset;
};

#line 72
struct Any {
    void (*ptr);
    typeid type;
};

#line 374 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast_h.ion"
struct ion_StmtIf {
    ion_Stmt (*init);
    ion_Expr (*cond);
    ion_StmtList then_block;
    ion_ElseIf (*elseifs);
    size_t num_elseifs;
    ion_StmtList else_block;
};

struct ion_StmtWhile {
    ion_Expr (*cond);
    ion_StmtList block;
};

struct ion_StmtFor {
    ion_Stmt (*init);
    ion_Expr (*cond);
    ion_Stmt (*next);
    ion_StmtList block;
};

struct ion_StmtSwitch {
    ion_Expr (*expr);
    ion_SwitchCase (*cases);
    size_t num_cases;
};

struct ion_StmtAssign {
    ion_TokenKind op;
    ion_Expr (*left);
    ion_Expr (*right);
};

struct ion_StmtInit {
    char const ((*name));
    ion_Typespec (*type);
    ion_Expr (*expr);
};

#line 355
struct ion_Stmt {
    ion_StmtKind kind;
    ion_Notes notes;
    ion_SrcPos pos;
    union {
        ion_Note note;
        ion_Expr (*expr);
        ion_Decl (*decl);
        ion_StmtIf if_stmt;
        ion_StmtWhile while_stmt;
        ion_StmtFor for_stmt;
        ion_StmtSwitch switch_stmt;
        ion_StmtList block;
        ion_StmtAssign assign;
        ion_StmtInit init;
        char const ((*label));
    };
};

#line 47
struct ion_TypespecFunc {
    ion_Typespec (*(*args));
    size_t num_args;
    bool has_varargs;
    ion_Typespec (*ret);
};

#line 36
struct ion_Typespec {
    ion_TypespecKind kind;
    ion_SrcPos pos;
    ion_Typespec (*base);
    union {
        char const ((*name));
        ion_TypespecFunc function;
        ion_Expr (*num_elems);
    };
};

#line 241
struct ion_ExprParen {
    ion_Expr (*expr);
};

struct ion_ExprIntLit {
    ullong val;
    ion_TokenMod mod;
    ion_TokenSuffix suffix;
};

struct ion_ExprFloatLit {
    char const ((*start));
    char const ((*end));
    double val;
    ion_TokenSuffix suffix;
};

struct ion_ExprStrLit {
    char const ((*val));
    ion_TokenMod mod;
};

struct ion_ExprOffsetofField {
    ion_Typespec (*type);
    char const ((*name));
};

struct ion_ExprCompound {
    ion_Typespec (*type);
    ion_CompoundField (*fields);
    size_t num_fields;
};

struct ion_ExprCast {
    ion_Typespec (*type);
    ion_Expr (*expr);
};

struct ion_ExprModify {
    ion_TokenKind op;
    bool post;
    ion_Expr (*expr);
};

struct ion_ExprUnary {
    ion_TokenKind op;
    ion_Expr (*expr);
};

struct ion_ExprBinary {
    ion_TokenKind op;
    ion_Expr (*left);
    ion_Expr (*right);
};

struct ion_ExprTernary {
    ion_Expr (*cond);
    ion_Expr (*then_expr);
    ion_Expr (*else_expr);
};

struct ion_ExprCall {
    ion_Expr (*expr);
    ion_Expr (*(*args));
    size_t num_args;
};

struct ion_ExprIndex {
    ion_Expr (*expr);
    ion_Expr (*index);
};

struct ion_ExprField {
    ion_Expr (*expr);
    char const ((*name));
};

#line 213
struct ion_Expr {
    ion_ExprKind kind;
    ion_SrcPos pos;
    union {
        ion_ExprParen paren;
        ion_ExprIntLit int_lit;
        ion_ExprFloatLit float_lit;
        ion_ExprStrLit str_lit;
        char const ((*name));
        ion_Expr (*sizeof_expr);
        ion_Typespec (*sizeof_type);
        ion_Expr (*typeof_expr);
        ion_Typespec (*typeof_type);
        ion_Expr (*alignof_expr);
        ion_Typespec (*alignof_type);
        ion_ExprOffsetofField offsetof_field;
        ion_ExprCompound compound;
        ion_ExprCast cast;
        ion_ExprModify modify;
        ion_ExprUnary unary;
        ion_ExprBinary binary;
        ion_ExprTernary ternary;
        ion_ExprCall call;
        ion_ExprIndex index;
        ion_ExprField field;
    };
};

#line 167
struct ion_Decls {
    ion_Decl (*(*decls));
    size_t num_decls;
};

#line 135
struct ion_DeclEnum {
    ion_Typespec (*type);
    ion_EnumItem (*items);
    size_t num_items;
};

struct ion_DeclFunc {
    ion_FuncParam (*params);
    size_t num_params;
    ion_Typespec (*ret_type);
    bool has_varargs;
    ion_StmtList block;
};

struct ion_DeclTypedef {
    ion_Typespec (*type);
};

struct ion_DeclVar {
    ion_Typespec (*type);
    ion_Expr (*expr);
};

struct ion_DeclImport {
    bool is_relative;
    char const ((*(*names)));
    size_t num_names;
    bool import_all;
    ion_ImportItem (*items);
    size_t num_items;
};

#line 116
struct ion_Decl {
    ion_DeclKind kind;
    ion_SrcPos pos;
    char const ((*name));
    ion_Notes notes;
    bool is_incomplete;
    union {
        ion_Note note;
        ion_DeclEnum enum_decl;
        ion_Aggregate (*aggregate);
        ion_DeclFunc function;
        ion_DeclTypedef typedef_decl;
        ion_DeclVar var_decl;
        ion_DeclVar const_decl;
        ion_DeclImport import_decl;
    };
};

#line 109
struct ion_Aggregate {
    ion_SrcPos pos;
    ion_AggregateKind kind;
    ion_AggregateItem (*items);
    size_t num_items;
};

#line 85
struct ion_ImportItem {
    char const ((*name));
    char const ((*rename));
};

#line 318
struct ion_ElseIf {
    ion_Expr (*cond);
    ion_StmtList block;
};

#line 132 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\common.ion"
struct ion_BufHdr {
    size_t len;
    size_t cap;
    #line 136
    char (buf[1]);
};

#line 421
struct ion_Intern {
    size_t len;
    ion_Intern (*next);
    char (str[1]);
};

#line 33 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\resolve.ion"
struct ion_Package {
    char const ((*path));
    char (full_path[MAX_PATH]);
    ion_Decl (*(*decls));
    size_t num_decls;
    ion_Map syms_map;
    ion_Sym (*(*syms));
    char const ((*external_name));
    bool always_reachable;
};

#line 30 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\type.ion"
struct ion_TypeField {
    char const ((*name));
    ion_Type (*type);
    size_t offset;
};

#line 52 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\os.ion"
struct ion_DirListIter {
    bool valid;
    bool error;
    #line 56
    char (base[MAX_PATH]);
    char (name[MAX_PATH]);
    size_t size;
    bool is_dir;
    #line 61
    void (*handle);
};

#line 108
struct ion_FlagDefPtr {
    int (*i);
    bool (*b);
    char const ((*(*s)));
};

#line 98
struct ion_FlagDef {
    ion_FlagKind kind;
    char const ((*name));
    char const ((*help));
    char const ((*(*options)));
    char const ((*arg_name));
    int num_options;
    ion_FlagDefPtr ptr;
};

#line 290 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\type.ion"
struct ion_CachedArrayType {
    ion_Type (*type);
    ion_CachedArrayType (*next);
};

#line 321
struct ion_CachedFuncType {
    ion_Type (*type);
    ion_CachedFuncType (*next);
};

// Typeinfo
#define TYPEID0(index, kind) ((ullong)(index) | ((ullong)(kind) << 24))
#define TYPEID(index, kind, ...) ((ullong)(index) | ((ullong)sizeof(__VA_ARGS__) << 32) | ((ullong)(kind) << 24))

const TypeInfo *typeinfo_table[647] = {
    [0] = NULL, // No associated type
    [1] = &(TypeInfo){TYPE_VOID, .name = "void", .size = 0, .align = 0},
    [2] = &(TypeInfo){TYPE_BOOL, .size = sizeof(bool), .align = sizeof(bool), .name = "bool"},
    [3] = &(TypeInfo){TYPE_CHAR, .size = sizeof(char), .align = sizeof(char), .name = "char"},
    [4] = &(TypeInfo){TYPE_UCHAR, .size = sizeof(uchar), .align = sizeof(uchar), .name = "uchar"},
    [5] = &(TypeInfo){TYPE_SCHAR, .size = sizeof(schar), .align = sizeof(schar), .name = "schar"},
    [6] = &(TypeInfo){TYPE_SHORT, .size = sizeof(short), .align = sizeof(short), .name = "short"},
    [7] = &(TypeInfo){TYPE_USHORT, .size = sizeof(ushort), .align = sizeof(ushort), .name = "ushort"},
    [8] = &(TypeInfo){TYPE_INT, .size = sizeof(int), .align = sizeof(int), .name = "int"},
    [9] = &(TypeInfo){TYPE_UINT, .size = sizeof(uint), .align = sizeof(uint), .name = "uint"},
    [10] = &(TypeInfo){TYPE_LONG, .size = sizeof(long), .align = sizeof(long), .name = "long"},
    [11] = &(TypeInfo){TYPE_ULONG, .size = sizeof(ulong), .align = sizeof(ulong), .name = "ulong"},
    [12] = &(TypeInfo){TYPE_LLONG, .size = sizeof(llong), .align = sizeof(llong), .name = "llong"},
    [13] = &(TypeInfo){TYPE_ULLONG, .size = sizeof(ullong), .align = sizeof(ullong), .name = "ullong"},
    [14] = &(TypeInfo){TYPE_FLOAT, .size = sizeof(float), .align = sizeof(float), .name = "float"},
    [15] = &(TypeInfo){TYPE_DOUBLE, .size = sizeof(double), .align = sizeof(double), .name = "double"},
    [16] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(1, TYPE_VOID)},
    [17] = &(TypeInfo){TYPE_CONST, .size = sizeof(char const ), .align = alignof(char const ), .base = TYPEID(3, TYPE_CHAR, char)},
    [18] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(17, TYPE_CONST, char const )},
    [19] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(18, TYPE_PTR, char const (*))},
    [20] = NULL, // Func
    [21] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [6]), .align = alignof(char [6]), .base = TYPEID(3, TYPE_CHAR, char), .count = 6},
    [22] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(3, TYPE_CHAR, char)},
    [23] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [4]), .align = alignof(char [4]), .base = TYPEID(3, TYPE_CHAR, char), .count = 4},
    [24] = NULL, // Enum
    [25] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(TypeFieldInfo), .align = alignof(TypeFieldInfo), .name = "TypeFieldInfo", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(TypeFieldInfo, name)},
        {"type", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(TypeFieldInfo, type)},
        {"offset", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(TypeFieldInfo, offset)},
    }},
    [26] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(TypeInfo), .align = alignof(TypeInfo), .name = "TypeInfo", .num_fields = 8, .fields = (TypeFieldInfo[]) {
        {"kind", .type = TYPEID(24, TYPE_NONE, TypeKind), .offset = offsetof(TypeInfo, kind)},
        {"size", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(TypeInfo, size)},
        {"align", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(TypeInfo, align)},
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(TypeInfo, name)},
        {"count", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(TypeInfo, count)},
        {"base", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(TypeInfo, base)},
        {"fields", .type = TYPEID(27, TYPE_PTR, TypeFieldInfo *), .offset = offsetof(TypeInfo, fields)},
        {"num_fields", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(TypeInfo, num_fields)},
    }},
    [27] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(25, TYPE_STRUCT, TypeFieldInfo)},
    [28] = &(TypeInfo){TYPE_CONST, .size = sizeof(TypeInfo const ), .align = alignof(TypeInfo const ), .base = TYPEID(26, TYPE_STRUCT, TypeInfo)},
    [29] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(28, TYPE_CONST, TypeInfo const )},
    [30] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(29, TYPE_PTR, TypeInfo const (*))},
    [31] = NULL, // Func
    [32] = NULL, // Func
    [33] = NULL, // Func
    [34] = NULL, // Func
    [35] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(Any), .align = alignof(Any), .name = "Any", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"ptr", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(Any, ptr)},
        {"type", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(Any, type)},
    }},
    [36] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Arena), .align = alignof(ion_Arena), .name = "ion_Arena", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"ptr", .type = TYPEID(22, TYPE_PTR, char *), .offset = offsetof(ion_Arena, ptr)},
        {"end", .type = TYPEID(22, TYPE_PTR, char *), .offset = offsetof(ion_Arena, end)},
        {"blocks", .type = TYPEID(37, TYPE_PTR, char (**)), .offset = offsetof(ion_Arena, blocks)},
    }},
    [37] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(22, TYPE_PTR, char *)},
    [38] = NULL, // Func
    [39] = &(TypeInfo){TYPE_CONST, .size = 0, .align = 0, .base = TYPEID0(1, TYPE_VOID)},
    [40] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(39, TYPE_CONST)},
    [41] = NULL, // Func
    [42] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_SrcPos), .align = alignof(ion_SrcPos), .name = "ion_SrcPos", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_SrcPos, name)},
        {"line", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(ion_SrcPos, line)},
    }},
    [43] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_NoteArg), .align = alignof(ion_NoteArg), .name = "ion_NoteArg", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"pos", .type = TYPEID(42, TYPE_STRUCT, ion_SrcPos), .offset = offsetof(ion_NoteArg, pos)},
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_NoteArg, name)},
        {"expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_NoteArg, expr)},
    }},
    [44] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(43, TYPE_STRUCT, ion_NoteArg)},
    [45] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Note), .align = alignof(ion_Note), .name = "ion_Note", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"pos", .type = TYPEID(42, TYPE_STRUCT, ion_SrcPos), .offset = offsetof(ion_Note, pos)},
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_Note, name)},
        {"args", .type = TYPEID(44, TYPE_PTR, ion_NoteArg *), .offset = offsetof(ion_Note, args)},
        {"num_args", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_Note, num_args)},
    }},
    [46] = NULL, // Func
    [47] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(45, TYPE_STRUCT, ion_Note)},
    [48] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Notes), .align = alignof(ion_Notes), .name = "ion_Notes", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"notes", .type = TYPEID(47, TYPE_PTR, ion_Note *), .offset = offsetof(ion_Notes, notes)},
        {"num_notes", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_Notes, num_notes)},
    }},
    [49] = NULL, // Func
    [50] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Stmt), .align = alignof(ion_Stmt), .name = "ion_Stmt", .num_fields = 14, .fields = (TypeFieldInfo[]) {
        {"kind", .type = TYPEID(120, TYPE_NONE, ion_StmtKind), .offset = offsetof(ion_Stmt, kind)},
        {"notes", .type = TYPEID(48, TYPE_STRUCT, ion_Notes), .offset = offsetof(ion_Stmt, notes)},
        {"pos", .type = TYPEID(42, TYPE_STRUCT, ion_SrcPos), .offset = offsetof(ion_Stmt, pos)},
        {"note", .type = TYPEID(45, TYPE_STRUCT, ion_Note), .offset = offsetof(ion_Stmt, note)},
        {"expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_Stmt, expr)},
        {"decl", .type = TYPEID(67, TYPE_PTR, ion_Decl *), .offset = offsetof(ion_Stmt, decl)},
        {"if_stmt", .type = TYPEID(161, TYPE_STRUCT, ion_StmtIf), .offset = offsetof(ion_Stmt, if_stmt)},
        {"while_stmt", .type = TYPEID(162, TYPE_STRUCT, ion_StmtWhile), .offset = offsetof(ion_Stmt, while_stmt)},
        {"for_stmt", .type = TYPEID(163, TYPE_STRUCT, ion_StmtFor), .offset = offsetof(ion_Stmt, for_stmt)},
        {"switch_stmt", .type = TYPEID(164, TYPE_STRUCT, ion_StmtSwitch), .offset = offsetof(ion_Stmt, switch_stmt)},
        {"block", .type = TYPEID(53, TYPE_STRUCT, ion_StmtList), .offset = offsetof(ion_Stmt, block)},
        {"assign", .type = TYPEID(165, TYPE_STRUCT, ion_StmtAssign), .offset = offsetof(ion_Stmt, assign)},
        {"init", .type = TYPEID(166, TYPE_STRUCT, ion_StmtInit), .offset = offsetof(ion_Stmt, init)},
        {"label", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_Stmt, label)},
    }},
    [51] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(50, TYPE_STRUCT, ion_Stmt)},
    [52] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(51, TYPE_PTR, ion_Stmt *)},
    [53] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_StmtList), .align = alignof(ion_StmtList), .name = "ion_StmtList", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"pos", .type = TYPEID(42, TYPE_STRUCT, ion_SrcPos), .offset = offsetof(ion_StmtList, pos)},
        {"stmts", .type = TYPEID(52, TYPE_PTR, ion_Stmt (**)), .offset = offsetof(ion_StmtList, stmts)},
        {"num_stmts", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_StmtList, num_stmts)},
    }},
    [54] = NULL, // Func
    [55] = NULL, // Enum
    [56] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Typespec), .align = alignof(ion_Typespec), .name = "ion_Typespec", .num_fields = 6, .fields = (TypeFieldInfo[]) {
        {"kind", .type = TYPEID(55, TYPE_NONE, ion_TypespecKind), .offset = offsetof(ion_Typespec, kind)},
        {"pos", .type = TYPEID(42, TYPE_STRUCT, ion_SrcPos), .offset = offsetof(ion_Typespec, pos)},
        {"base", .type = TYPEID(57, TYPE_PTR, ion_Typespec *), .offset = offsetof(ion_Typespec, base)},
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_Typespec, name)},
        {"function", .type = TYPEID(138, TYPE_STRUCT, ion_TypespecFunc), .offset = offsetof(ion_Typespec, function)},
        {"num_elems", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_Typespec, num_elems)},
    }},
    [57] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(56, TYPE_STRUCT, ion_Typespec)},
    [58] = NULL, // Func
    [59] = NULL, // Func
    [60] = NULL, // Func
    [61] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Expr), .align = alignof(ion_Expr), .name = "ion_Expr", .num_fields = 23, .fields = (TypeFieldInfo[]) {
        {"kind", .type = TYPEID(95, TYPE_NONE, ion_ExprKind), .offset = offsetof(ion_Expr, kind)},
        {"pos", .type = TYPEID(42, TYPE_STRUCT, ion_SrcPos), .offset = offsetof(ion_Expr, pos)},
        {"paren", .type = TYPEID(146, TYPE_STRUCT, ion_ExprParen), .offset = offsetof(ion_Expr, paren)},
        {"int_lit", .type = TYPEID(147, TYPE_STRUCT, ion_ExprIntLit), .offset = offsetof(ion_Expr, int_lit)},
        {"float_lit", .type = TYPEID(148, TYPE_STRUCT, ion_ExprFloatLit), .offset = offsetof(ion_Expr, float_lit)},
        {"str_lit", .type = TYPEID(149, TYPE_STRUCT, ion_ExprStrLit), .offset = offsetof(ion_Expr, str_lit)},
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_Expr, name)},
        {"sizeof_expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_Expr, sizeof_expr)},
        {"sizeof_type", .type = TYPEID(57, TYPE_PTR, ion_Typespec *), .offset = offsetof(ion_Expr, sizeof_type)},
        {"typeof_expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_Expr, typeof_expr)},
        {"typeof_type", .type = TYPEID(57, TYPE_PTR, ion_Typespec *), .offset = offsetof(ion_Expr, typeof_type)},
        {"alignof_expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_Expr, alignof_expr)},
        {"alignof_type", .type = TYPEID(57, TYPE_PTR, ion_Typespec *), .offset = offsetof(ion_Expr, alignof_type)},
        {"offsetof_field", .type = TYPEID(150, TYPE_STRUCT, ion_ExprOffsetofField), .offset = offsetof(ion_Expr, offsetof_field)},
        {"compound", .type = TYPEID(151, TYPE_STRUCT, ion_ExprCompound), .offset = offsetof(ion_Expr, compound)},
        {"cast", .type = TYPEID(152, TYPE_STRUCT, ion_ExprCast), .offset = offsetof(ion_Expr, cast)},
        {"modify", .type = TYPEID(153, TYPE_STRUCT, ion_ExprModify), .offset = offsetof(ion_Expr, modify)},
        {"unary", .type = TYPEID(154, TYPE_STRUCT, ion_ExprUnary), .offset = offsetof(ion_Expr, unary)},
        {"binary", .type = TYPEID(155, TYPE_STRUCT, ion_ExprBinary), .offset = offsetof(ion_Expr, binary)},
        {"ternary", .type = TYPEID(156, TYPE_STRUCT, ion_ExprTernary), .offset = offsetof(ion_Expr, ternary)},
        {"call", .type = TYPEID(157, TYPE_STRUCT, ion_ExprCall), .offset = offsetof(ion_Expr, call)},
        {"index", .type = TYPEID(158, TYPE_STRUCT, ion_ExprIndex), .offset = offsetof(ion_Expr, index)},
        {"field", .type = TYPEID(159, TYPE_STRUCT, ion_ExprField), .offset = offsetof(ion_Expr, field)},
    }},
    [62] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(61, TYPE_STRUCT, ion_Expr)},
    [63] = NULL, // Func
    [64] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(57, TYPE_PTR, ion_Typespec *)},
    [65] = NULL, // Func
    [66] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Decl), .align = alignof(ion_Decl), .name = "ion_Decl", .num_fields = 13, .fields = (TypeFieldInfo[]) {
        {"kind", .type = TYPEID(72, TYPE_NONE, ion_DeclKind), .offset = offsetof(ion_Decl, kind)},
        {"pos", .type = TYPEID(42, TYPE_STRUCT, ion_SrcPos), .offset = offsetof(ion_Decl, pos)},
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_Decl, name)},
        {"notes", .type = TYPEID(48, TYPE_STRUCT, ion_Notes), .offset = offsetof(ion_Decl, notes)},
        {"is_incomplete", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_Decl, is_incomplete)},
        {"note", .type = TYPEID(45, TYPE_STRUCT, ion_Note), .offset = offsetof(ion_Decl, note)},
        {"enum_decl", .type = TYPEID(140, TYPE_STRUCT, ion_DeclEnum), .offset = offsetof(ion_Decl, enum_decl)},
        {"aggregate", .type = TYPEID(83, TYPE_PTR, ion_Aggregate *), .offset = offsetof(ion_Decl, aggregate)},
        {"function", .type = TYPEID(141, TYPE_STRUCT, ion_DeclFunc), .offset = offsetof(ion_Decl, function)},
        {"typedef_decl", .type = TYPEID(142, TYPE_STRUCT, ion_DeclTypedef), .offset = offsetof(ion_Decl, typedef_decl)},
        {"var_decl", .type = TYPEID(143, TYPE_STRUCT, ion_DeclVar), .offset = offsetof(ion_Decl, var_decl)},
        {"const_decl", .type = TYPEID(143, TYPE_STRUCT, ion_DeclVar), .offset = offsetof(ion_Decl, const_decl)},
        {"import_decl", .type = TYPEID(144, TYPE_STRUCT, ion_DeclImport), .offset = offsetof(ion_Decl, import_decl)},
    }},
    [67] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(66, TYPE_STRUCT, ion_Decl)},
    [68] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(67, TYPE_PTR, ion_Decl *)},
    [69] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Decls), .align = alignof(ion_Decls), .name = "ion_Decls", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"decls", .type = TYPEID(68, TYPE_PTR, ion_Decl (**)), .offset = offsetof(ion_Decls, decls)},
        {"num_decls", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_Decls, num_decls)},
    }},
    [70] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(69, TYPE_STRUCT, ion_Decls)},
    [71] = NULL, // Func
    [72] = NULL, // Enum
    [73] = NULL, // Func
    [74] = NULL, // Func
    [75] = NULL, // Func
    [76] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_EnumItem), .align = alignof(ion_EnumItem), .name = "ion_EnumItem", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"pos", .type = TYPEID(42, TYPE_STRUCT, ion_SrcPos), .offset = offsetof(ion_EnumItem, pos)},
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_EnumItem, name)},
        {"init", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_EnumItem, init)},
    }},
    [77] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(76, TYPE_STRUCT, ion_EnumItem)},
    [78] = NULL, // Func
    [79] = NULL, // Enum
    [80] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_AggregateItem), .align = alignof(ion_AggregateItem), .name = "ion_AggregateItem", .num_fields = 6, .fields = (TypeFieldInfo[]) {
        {"pos", .type = TYPEID(42, TYPE_STRUCT, ion_SrcPos), .offset = offsetof(ion_AggregateItem, pos)},
        {"kind", .type = TYPEID(139, TYPE_NONE, ion_AggregateItemKind), .offset = offsetof(ion_AggregateItem, kind)},
        {"names", .type = TYPEID(19, TYPE_PTR, char const ((**))), .offset = offsetof(ion_AggregateItem, names)},
        {"num_names", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_AggregateItem, num_names)},
        {"type", .type = TYPEID(57, TYPE_PTR, ion_Typespec *), .offset = offsetof(ion_AggregateItem, type)},
        {"subaggregate", .type = TYPEID(83, TYPE_PTR, ion_Aggregate *), .offset = offsetof(ion_AggregateItem, subaggregate)},
    }},
    [81] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(80, TYPE_STRUCT, ion_AggregateItem)},
    [82] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Aggregate), .align = alignof(ion_Aggregate), .name = "ion_Aggregate", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"pos", .type = TYPEID(42, TYPE_STRUCT, ion_SrcPos), .offset = offsetof(ion_Aggregate, pos)},
        {"kind", .type = TYPEID(79, TYPE_NONE, ion_AggregateKind), .offset = offsetof(ion_Aggregate, kind)},
        {"items", .type = TYPEID(81, TYPE_PTR, ion_AggregateItem *), .offset = offsetof(ion_Aggregate, items)},
        {"num_items", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_Aggregate, num_items)},
    }},
    [83] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(82, TYPE_STRUCT, ion_Aggregate)},
    [84] = NULL, // Func
    [85] = NULL, // Func
    [86] = NULL, // Func
    [87] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_FuncParam), .align = alignof(ion_FuncParam), .name = "ion_FuncParam", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"pos", .type = TYPEID(42, TYPE_STRUCT, ion_SrcPos), .offset = offsetof(ion_FuncParam, pos)},
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_FuncParam, name)},
        {"type", .type = TYPEID(57, TYPE_PTR, ion_Typespec *), .offset = offsetof(ion_FuncParam, type)},
    }},
    [88] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(87, TYPE_STRUCT, ion_FuncParam)},
    [89] = NULL, // Func
    [90] = NULL, // Func
    [91] = NULL, // Func
    [92] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ImportItem), .align = alignof(ion_ImportItem), .name = "ion_ImportItem", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_ImportItem, name)},
        {"rename", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_ImportItem, rename)},
    }},
    [93] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(92, TYPE_STRUCT, ion_ImportItem)},
    [94] = NULL, // Func
    [95] = NULL, // Enum
    [96] = NULL, // Func
    [97] = NULL, // Func
    [98] = NULL, // Func
    [99] = NULL, // Func
    [100] = NULL, // Enum
    [101] = NULL, // Func
    [102] = NULL, // Enum
    [103] = NULL, // Enum
    [104] = NULL, // Func
    [105] = NULL, // Func
    [106] = NULL, // Func
    [107] = NULL, // Func
    [108] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_CompoundField), .align = alignof(ion_CompoundField), .name = "ion_CompoundField", .num_fields = 5, .fields = (TypeFieldInfo[]) {
        {"kind", .type = TYPEID(145, TYPE_NONE, ion_CompoundFieldKind), .offset = offsetof(ion_CompoundField, kind)},
        {"pos", .type = TYPEID(42, TYPE_STRUCT, ion_SrcPos), .offset = offsetof(ion_CompoundField, pos)},
        {"init", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_CompoundField, init)},
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_CompoundField, name)},
        {"index", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_CompoundField, index)},
    }},
    [109] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(108, TYPE_STRUCT, ion_CompoundField)},
    [110] = NULL, // Func
    [111] = NULL, // Func
    [112] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(62, TYPE_PTR, ion_Expr *)},
    [113] = NULL, // Func
    [114] = NULL, // Func
    [115] = NULL, // Func
    [116] = NULL, // Func
    [117] = NULL, // Func
    [118] = NULL, // Func
    [119] = NULL, // Func
    [120] = NULL, // Enum
    [121] = NULL, // Func
    [122] = NULL, // Func
    [123] = NULL, // Func
    [124] = NULL, // Func
    [125] = NULL, // Func
    [126] = NULL, // Func
    [127] = NULL, // Func
    [128] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ElseIf), .align = alignof(ion_ElseIf), .name = "ion_ElseIf", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"cond", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_ElseIf, cond)},
        {"block", .type = TYPEID(53, TYPE_STRUCT, ion_StmtList), .offset = offsetof(ion_ElseIf, block)},
    }},
    [129] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(128, TYPE_STRUCT, ion_ElseIf)},
    [130] = NULL, // Func
    [131] = NULL, // Func
    [132] = NULL, // Func
    [133] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_SwitchCase), .align = alignof(ion_SwitchCase), .name = "ion_SwitchCase", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"patterns", .type = TYPEID(311, TYPE_PTR, ion_SwitchCasePattern *), .offset = offsetof(ion_SwitchCase, patterns)},
        {"num_patterns", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_SwitchCase, num_patterns)},
        {"is_default", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_SwitchCase, is_default)},
        {"block", .type = TYPEID(53, TYPE_STRUCT, ion_StmtList), .offset = offsetof(ion_SwitchCase, block)},
    }},
    [134] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(133, TYPE_STRUCT, ion_SwitchCase)},
    [135] = NULL, // Func
    [136] = NULL, // Func
    [137] = NULL, // Func
    [138] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_TypespecFunc), .align = alignof(ion_TypespecFunc), .name = "ion_TypespecFunc", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"args", .type = TYPEID(64, TYPE_PTR, ion_Typespec (**)), .offset = offsetof(ion_TypespecFunc, args)},
        {"num_args", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_TypespecFunc, num_args)},
        {"has_varargs", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_TypespecFunc, has_varargs)},
        {"ret", .type = TYPEID(57, TYPE_PTR, ion_Typespec *), .offset = offsetof(ion_TypespecFunc, ret)},
    }},
    [139] = NULL, // Enum
    [140] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_DeclEnum), .align = alignof(ion_DeclEnum), .name = "ion_DeclEnum", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(57, TYPE_PTR, ion_Typespec *), .offset = offsetof(ion_DeclEnum, type)},
        {"items", .type = TYPEID(77, TYPE_PTR, ion_EnumItem *), .offset = offsetof(ion_DeclEnum, items)},
        {"num_items", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_DeclEnum, num_items)},
    }},
    [141] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_DeclFunc), .align = alignof(ion_DeclFunc), .name = "ion_DeclFunc", .num_fields = 5, .fields = (TypeFieldInfo[]) {
        {"params", .type = TYPEID(88, TYPE_PTR, ion_FuncParam *), .offset = offsetof(ion_DeclFunc, params)},
        {"num_params", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_DeclFunc, num_params)},
        {"ret_type", .type = TYPEID(57, TYPE_PTR, ion_Typespec *), .offset = offsetof(ion_DeclFunc, ret_type)},
        {"has_varargs", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_DeclFunc, has_varargs)},
        {"block", .type = TYPEID(53, TYPE_STRUCT, ion_StmtList), .offset = offsetof(ion_DeclFunc, block)},
    }},
    [142] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_DeclTypedef), .align = alignof(ion_DeclTypedef), .name = "ion_DeclTypedef", .num_fields = 1, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(57, TYPE_PTR, ion_Typespec *), .offset = offsetof(ion_DeclTypedef, type)},
    }},
    [143] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_DeclVar), .align = alignof(ion_DeclVar), .name = "ion_DeclVar", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(57, TYPE_PTR, ion_Typespec *), .offset = offsetof(ion_DeclVar, type)},
        {"expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_DeclVar, expr)},
    }},
    [144] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_DeclImport), .align = alignof(ion_DeclImport), .name = "ion_DeclImport", .num_fields = 6, .fields = (TypeFieldInfo[]) {
        {"is_relative", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_DeclImport, is_relative)},
        {"names", .type = TYPEID(19, TYPE_PTR, char const ((**))), .offset = offsetof(ion_DeclImport, names)},
        {"num_names", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_DeclImport, num_names)},
        {"import_all", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_DeclImport, import_all)},
        {"items", .type = TYPEID(93, TYPE_PTR, ion_ImportItem *), .offset = offsetof(ion_DeclImport, items)},
        {"num_items", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_DeclImport, num_items)},
    }},
    [145] = NULL, // Enum
    [146] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ExprParen), .align = alignof(ion_ExprParen), .name = "ion_ExprParen", .num_fields = 1, .fields = (TypeFieldInfo[]) {
        {"expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_ExprParen, expr)},
    }},
    [147] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ExprIntLit), .align = alignof(ion_ExprIntLit), .name = "ion_ExprIntLit", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"val", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_ExprIntLit, val)},
        {"mod", .type = TYPEID(102, TYPE_NONE, ion_TokenMod), .offset = offsetof(ion_ExprIntLit, mod)},
        {"suffix", .type = TYPEID(103, TYPE_NONE, ion_TokenSuffix), .offset = offsetof(ion_ExprIntLit, suffix)},
    }},
    [148] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ExprFloatLit), .align = alignof(ion_ExprFloatLit), .name = "ion_ExprFloatLit", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"start", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_ExprFloatLit, start)},
        {"end", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_ExprFloatLit, end)},
        {"val", .type = TYPEID(15, TYPE_DOUBLE, double), .offset = offsetof(ion_ExprFloatLit, val)},
        {"suffix", .type = TYPEID(103, TYPE_NONE, ion_TokenSuffix), .offset = offsetof(ion_ExprFloatLit, suffix)},
    }},
    [149] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ExprStrLit), .align = alignof(ion_ExprStrLit), .name = "ion_ExprStrLit", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"val", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_ExprStrLit, val)},
        {"mod", .type = TYPEID(102, TYPE_NONE, ion_TokenMod), .offset = offsetof(ion_ExprStrLit, mod)},
    }},
    [150] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ExprOffsetofField), .align = alignof(ion_ExprOffsetofField), .name = "ion_ExprOffsetofField", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(57, TYPE_PTR, ion_Typespec *), .offset = offsetof(ion_ExprOffsetofField, type)},
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_ExprOffsetofField, name)},
    }},
    [151] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ExprCompound), .align = alignof(ion_ExprCompound), .name = "ion_ExprCompound", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(57, TYPE_PTR, ion_Typespec *), .offset = offsetof(ion_ExprCompound, type)},
        {"fields", .type = TYPEID(109, TYPE_PTR, ion_CompoundField *), .offset = offsetof(ion_ExprCompound, fields)},
        {"num_fields", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_ExprCompound, num_fields)},
    }},
    [152] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ExprCast), .align = alignof(ion_ExprCast), .name = "ion_ExprCast", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(57, TYPE_PTR, ion_Typespec *), .offset = offsetof(ion_ExprCast, type)},
        {"expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_ExprCast, expr)},
    }},
    [153] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ExprModify), .align = alignof(ion_ExprModify), .name = "ion_ExprModify", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"op", .type = TYPEID(100, TYPE_NONE, ion_TokenKind), .offset = offsetof(ion_ExprModify, op)},
        {"post", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_ExprModify, post)},
        {"expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_ExprModify, expr)},
    }},
    [154] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ExprUnary), .align = alignof(ion_ExprUnary), .name = "ion_ExprUnary", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"op", .type = TYPEID(100, TYPE_NONE, ion_TokenKind), .offset = offsetof(ion_ExprUnary, op)},
        {"expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_ExprUnary, expr)},
    }},
    [155] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ExprBinary), .align = alignof(ion_ExprBinary), .name = "ion_ExprBinary", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"op", .type = TYPEID(100, TYPE_NONE, ion_TokenKind), .offset = offsetof(ion_ExprBinary, op)},
        {"left", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_ExprBinary, left)},
        {"right", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_ExprBinary, right)},
    }},
    [156] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ExprTernary), .align = alignof(ion_ExprTernary), .name = "ion_ExprTernary", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"cond", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_ExprTernary, cond)},
        {"then_expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_ExprTernary, then_expr)},
        {"else_expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_ExprTernary, else_expr)},
    }},
    [157] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ExprCall), .align = alignof(ion_ExprCall), .name = "ion_ExprCall", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_ExprCall, expr)},
        {"args", .type = TYPEID(112, TYPE_PTR, ion_Expr (**)), .offset = offsetof(ion_ExprCall, args)},
        {"num_args", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_ExprCall, num_args)},
    }},
    [158] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ExprIndex), .align = alignof(ion_ExprIndex), .name = "ion_ExprIndex", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_ExprIndex, expr)},
        {"index", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_ExprIndex, index)},
    }},
    [159] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_ExprField), .align = alignof(ion_ExprField), .name = "ion_ExprField", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_ExprField, expr)},
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_ExprField, name)},
    }},
    [160] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_SwitchCasePattern), .align = alignof(ion_SwitchCasePattern), .name = "ion_SwitchCasePattern", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"start", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_SwitchCasePattern, start)},
        {"end", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_SwitchCasePattern, end)},
    }},
    [161] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_StmtIf), .align = alignof(ion_StmtIf), .name = "ion_StmtIf", .num_fields = 6, .fields = (TypeFieldInfo[]) {
        {"init", .type = TYPEID(51, TYPE_PTR, ion_Stmt *), .offset = offsetof(ion_StmtIf, init)},
        {"cond", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_StmtIf, cond)},
        {"then_block", .type = TYPEID(53, TYPE_STRUCT, ion_StmtList), .offset = offsetof(ion_StmtIf, then_block)},
        {"elseifs", .type = TYPEID(129, TYPE_PTR, ion_ElseIf *), .offset = offsetof(ion_StmtIf, elseifs)},
        {"num_elseifs", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_StmtIf, num_elseifs)},
        {"else_block", .type = TYPEID(53, TYPE_STRUCT, ion_StmtList), .offset = offsetof(ion_StmtIf, else_block)},
    }},
    [162] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_StmtWhile), .align = alignof(ion_StmtWhile), .name = "ion_StmtWhile", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"cond", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_StmtWhile, cond)},
        {"block", .type = TYPEID(53, TYPE_STRUCT, ion_StmtList), .offset = offsetof(ion_StmtWhile, block)},
    }},
    [163] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_StmtFor), .align = alignof(ion_StmtFor), .name = "ion_StmtFor", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"init", .type = TYPEID(51, TYPE_PTR, ion_Stmt *), .offset = offsetof(ion_StmtFor, init)},
        {"cond", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_StmtFor, cond)},
        {"next", .type = TYPEID(51, TYPE_PTR, ion_Stmt *), .offset = offsetof(ion_StmtFor, next)},
        {"block", .type = TYPEID(53, TYPE_STRUCT, ion_StmtList), .offset = offsetof(ion_StmtFor, block)},
    }},
    [164] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_StmtSwitch), .align = alignof(ion_StmtSwitch), .name = "ion_StmtSwitch", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_StmtSwitch, expr)},
        {"cases", .type = TYPEID(134, TYPE_PTR, ion_SwitchCase *), .offset = offsetof(ion_StmtSwitch, cases)},
        {"num_cases", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_StmtSwitch, num_cases)},
    }},
    [165] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_StmtAssign), .align = alignof(ion_StmtAssign), .name = "ion_StmtAssign", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"op", .type = TYPEID(100, TYPE_NONE, ion_TokenKind), .offset = offsetof(ion_StmtAssign, op)},
        {"left", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_StmtAssign, left)},
        {"right", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_StmtAssign, right)},
    }},
    [166] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_StmtInit), .align = alignof(ion_StmtInit), .name = "ion_StmtInit", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_StmtInit, name)},
        {"type", .type = TYPEID(57, TYPE_PTR, ion_Typespec *), .offset = offsetof(ion_StmtInit, type)},
        {"expr", .type = TYPEID(62, TYPE_PTR, ion_Expr *), .offset = offsetof(ion_StmtInit, expr)},
    }},
    [167] = NULL, // Func
    [168] = NULL, // Func
    [169] = NULL, // Func
    [170] = NULL, // Func
    [171] = NULL, // Func
    [172] = NULL, // Func
    [173] = NULL, // Func
    [174] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_BufHdr), .align = alignof(ion_BufHdr), .name = "ion_BufHdr", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"len", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_BufHdr, len)},
        {"cap", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_BufHdr, cap)},
        {"buf", .type = TYPEID(253, TYPE_ARRAY, char [1]), .offset = offsetof(ion_BufHdr, buf)},
    }},
    [175] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(174, TYPE_STRUCT, ion_BufHdr)},
    [176] = NULL, // Func
    [177] = NULL, // Func
    [178] = NULL, // Func
    [179] = NULL, // Func
    [180] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(16, TYPE_PTR, void *)},
    [181] = NULL, // Func
    [182] = NULL, // Func
    [183] = NULL, // Func
    [184] = NULL, // Func
    [185] = NULL, // Func
    [186] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(36, TYPE_STRUCT, ion_Arena)},
    [187] = NULL, // Func
    [188] = NULL, // Func
    [189] = NULL, // Func
    [190] = NULL, // Func
    [191] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Map), .align = alignof(ion_Map), .name = "ion_Map", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"keys", .type = TYPEID(203, TYPE_PTR, ullong *), .offset = offsetof(ion_Map, keys)},
        {"vals", .type = TYPEID(203, TYPE_PTR, ullong *), .offset = offsetof(ion_Map, vals)},
        {"len", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_Map, len)},
        {"cap", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_Map, cap)},
    }},
    [192] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(191, TYPE_STRUCT, ion_Map)},
    [193] = NULL, // Func
    [194] = NULL, // Func
    [195] = NULL, // Func
    [196] = NULL, // Func
    [197] = NULL, // Func
    [198] = NULL, // Func
    [199] = NULL, // Func
    [200] = NULL, // Func
    [201] = NULL, // Func
    [202] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Intern), .align = alignof(ion_Intern), .name = "ion_Intern", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"len", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_Intern, len)},
        {"next", .type = TYPEID(453, TYPE_PTR, ion_Intern *), .offset = offsetof(ion_Intern, next)},
        {"str", .type = TYPEID(253, TYPE_ARRAY, char [1]), .offset = offsetof(ion_Intern, str)},
    }},
    [203] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(13, TYPE_ULLONG, ullong)},
    [204] = NULL, // Func
    [205] = NULL, // Func
    [206] = NULL, // Func
    [207] = &(TypeInfo){TYPE_UNION, .size = sizeof(ion_Val), .align = alignof(ion_Val), .name = "ion_Val", .num_fields = 13, .fields = (TypeFieldInfo[]) {
        {"b", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_Val, b)},
        {"c", .type = TYPEID(3, TYPE_CHAR, char), .offset = offsetof(ion_Val, c)},
        {"uc", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(ion_Val, uc)},
        {"sc", .type = TYPEID(5, TYPE_SCHAR, schar), .offset = offsetof(ion_Val, sc)},
        {"s", .type = TYPEID(6, TYPE_SHORT, short), .offset = offsetof(ion_Val, s)},
        {"us", .type = TYPEID(7, TYPE_USHORT, ushort), .offset = offsetof(ion_Val, us)},
        {"i", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(ion_Val, i)},
        {"u", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(ion_Val, u)},
        {"l", .type = TYPEID(10, TYPE_LONG, long), .offset = offsetof(ion_Val, l)},
        {"ul", .type = TYPEID(11, TYPE_ULONG, ulong), .offset = offsetof(ion_Val, ul)},
        {"ll", .type = TYPEID(12, TYPE_LLONG, llong), .offset = offsetof(ion_Val, ll)},
        {"ull", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_Val, ull)},
        {"p", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_Val, p)},
    }},
    [208] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [1109]), .align = alignof(char [1109]), .base = TYPEID(3, TYPE_CHAR, char), .count = 1109},
    [209] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [1565]), .align = alignof(char [1565]), .base = TYPEID(3, TYPE_CHAR, char), .count = 1565},
    [210] = NULL, // Func
    [211] = NULL, // Func
    [212] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [256]), .align = alignof(char [256]), .base = TYPEID(3, TYPE_CHAR, char), .count = 256},
    [213] = NULL, // Func
    [214] = NULL, // Func
    [215] = NULL, // Func
    [216] = NULL, // Func
    [217] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Type), .align = alignof(ion_Type), .name = "ion_Type", .num_fields = 10, .fields = (TypeFieldInfo[]) {
        {"kind", .type = TYPEID(231, TYPE_NONE, ion_CompilerTypeKind), .offset = offsetof(ion_Type, kind)},
        {"size", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_Type, size)},
        {"align", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_Type, align)},
        {"sym", .type = TYPEID(227, TYPE_PTR, ion_Sym *), .offset = offsetof(ion_Type, sym)},
        {"base", .type = TYPEID(218, TYPE_PTR, ion_Type *), .offset = offsetof(ion_Type, base)},
        {"typeid", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(ion_Type, typeid)},
        {"nonmodifiable", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_Type, nonmodifiable)},
        {"num_elems", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_Type, num_elems)},
        {"aggregate", .type = TYPEID(406, TYPE_STRUCT, ion_TypeAggregate), .offset = offsetof(ion_Type, aggregate)},
        {"function", .type = TYPEID(407, TYPE_STRUCT, ion_TypeFunc), .offset = offsetof(ion_Type, function)},
    }},
    [218] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(217, TYPE_STRUCT, ion_Type)},
    [219] = NULL, // Func
    [220] = NULL, // Func
    [221] = NULL, // Func
    [222] = NULL, // Func
    [223] = NULL, // Func
    [224] = NULL, // Func
    [225] = NULL, // Func
    [226] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Sym), .align = alignof(ion_Sym), .name = "ion_Sym", .num_fields = 10, .fields = (TypeFieldInfo[]) {
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_Sym, name)},
        {"home_package", .type = TYPEID(245, TYPE_PTR, ion_Package *), .offset = offsetof(ion_Sym, home_package)},
        {"kind", .type = TYPEID(326, TYPE_NONE, ion_SymKind), .offset = offsetof(ion_Sym, kind)},
        {"state", .type = TYPEID(327, TYPE_NONE, ion_SymState), .offset = offsetof(ion_Sym, state)},
        {"reachable", .type = TYPEID(4, TYPE_UCHAR, uchar), .offset = offsetof(ion_Sym, reachable)},
        {"decl", .type = TYPEID(67, TYPE_PTR, ion_Decl *), .offset = offsetof(ion_Sym, decl)},
        {"external_name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_Sym, external_name)},
        {"type", .type = TYPEID(218, TYPE_PTR, ion_Type *), .offset = offsetof(ion_Sym, type)},
        {"val", .type = TYPEID(207, TYPE_UNION, ion_Val), .offset = offsetof(ion_Sym, val)},
        {"package", .type = TYPEID(245, TYPE_PTR, ion_Package *), .offset = offsetof(ion_Sym, package)},
    }},
    [227] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(226, TYPE_STRUCT, ion_Sym)},
    [228] = NULL, // Func
    [229] = NULL, // Func
    [230] = NULL, // Func
    [231] = NULL, // Enum
    [232] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char const (*[25])), .align = alignof(char const (*[25])), .base = TYPEID(18, TYPE_PTR, char const (*)), .count = 25},
    [233] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [10]), .align = alignof(char [10]), .base = TYPEID(3, TYPE_CHAR, char), .count = 10},
    [234] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [11]), .align = alignof(char [11]), .base = TYPEID(3, TYPE_CHAR, char), .count = 11},
    [235] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [12]), .align = alignof(char [12]), .base = TYPEID(3, TYPE_CHAR, char), .count = 12},
    [236] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [9]), .align = alignof(char [9]), .base = TYPEID(3, TYPE_CHAR, char), .count = 9},
    [237] = NULL, // Func
    [238] = NULL, // Func
    [239] = NULL, // Func
    [240] = NULL, // Func
    [241] = NULL, // Func
    [242] = NULL, // Func
    [243] = NULL, // Func
    [244] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Package), .align = alignof(ion_Package), .name = "ion_Package", .num_fields = 8, .fields = (TypeFieldInfo[]) {
        {"path", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_Package, path)},
        {"full_path", .type = TYPEID(212, TYPE_ARRAY, char [256]), .offset = offsetof(ion_Package, full_path)},
        {"decls", .type = TYPEID(68, TYPE_PTR, ion_Decl (**)), .offset = offsetof(ion_Package, decls)},
        {"num_decls", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_Package, num_decls)},
        {"syms_map", .type = TYPEID(191, TYPE_STRUCT, ion_Map), .offset = offsetof(ion_Package, syms_map)},
        {"syms", .type = TYPEID(331, TYPE_PTR, ion_Sym (**)), .offset = offsetof(ion_Package, syms)},
        {"external_name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_Package, external_name)},
        {"always_reachable", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_Package, always_reachable)},
    }},
    [245] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(244, TYPE_STRUCT, ion_Package)},
    [246] = NULL, // Func
    [247] = NULL, // Func
    [248] = NULL, // Func
    [249] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char const (*[256])), .align = alignof(char const (*[256])), .base = TYPEID(18, TYPE_PTR, char const (*)), .count = 256},
    [250] = NULL, // Func
    [251] = NULL, // Func
    [252] = NULL, // Incomplete array type
    [253] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [1]), .align = alignof(char [1]), .base = TYPEID(3, TYPE_CHAR, char), .count = 1},
    [254] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [2]), .align = alignof(char [2]), .base = TYPEID(3, TYPE_CHAR, char), .count = 2},
    [255] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [3]), .align = alignof(char [3]), .base = TYPEID(3, TYPE_CHAR, char), .count = 3},
    [256] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char const (*[7])), .align = alignof(char const (*[7])), .base = TYPEID(18, TYPE_PTR, char const (*)), .count = 7},
    [257] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [8]), .align = alignof(char [8]), .base = TYPEID(3, TYPE_CHAR, char), .count = 8},
    [258] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [7]), .align = alignof(char [7]), .base = TYPEID(3, TYPE_CHAR, char), .count = 7},
    [259] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [5]), .align = alignof(char [5]), .base = TYPEID(3, TYPE_CHAR, char), .count = 5},
    [260] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char const (*[54])), .align = alignof(char const (*[54])), .base = TYPEID(18, TYPE_PTR, char const (*)), .count = 54},
    [261] = NULL, // Func
    [262] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(ion_TokenKind [54]), .align = alignof(ion_TokenKind [54]), .base = TYPEID(100, TYPE_NONE, ion_TokenKind), .count = 54},
    [263] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Token), .align = alignof(ion_Token), .name = "ion_Token", .num_fields = 10, .fields = (TypeFieldInfo[]) {
        {"kind", .type = TYPEID(100, TYPE_NONE, ion_TokenKind), .offset = offsetof(ion_Token, kind)},
        {"mod", .type = TYPEID(102, TYPE_NONE, ion_TokenMod), .offset = offsetof(ion_Token, mod)},
        {"suffix", .type = TYPEID(103, TYPE_NONE, ion_TokenSuffix), .offset = offsetof(ion_Token, suffix)},
        {"pos", .type = TYPEID(42, TYPE_STRUCT, ion_SrcPos), .offset = offsetof(ion_Token, pos)},
        {"start", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_Token, start)},
        {"end", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_Token, end)},
        {"int_val", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_Token, int_val)},
        {"float_val", .type = TYPEID(15, TYPE_DOUBLE, double), .offset = offsetof(ion_Token, float_val)},
        {"str_val", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_Token, str_val)},
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_Token, name)},
    }},
    [264] = NULL, // No associated type
    [265] = NULL, // Func
    [266] = NULL, // Func
    [267] = NULL, // Func
    [268] = NULL, // Func
    [269] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(uchar [256]), .align = alignof(uchar [256]), .base = TYPEID(4, TYPE_UCHAR, uchar), .count = 256},
    [270] = NULL, // Func
    [271] = NULL, // Func
    [272] = NULL, // Func
    [273] = NULL, // Func
    [274] = NULL, // Func
    [275] = NULL, // Func
    [276] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_DirListIter), .align = alignof(ion_DirListIter), .name = "ion_DirListIter", .num_fields = 7, .fields = (TypeFieldInfo[]) {
        {"valid", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_DirListIter, valid)},
        {"error", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_DirListIter, error)},
        {"base", .type = TYPEID(212, TYPE_ARRAY, char [256]), .offset = offsetof(ion_DirListIter, base)},
        {"name", .type = TYPEID(212, TYPE_ARRAY, char [256]), .offset = offsetof(ion_DirListIter, name)},
        {"size", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_DirListIter, size)},
        {"is_dir", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_DirListIter, is_dir)},
        {"handle", .type = TYPEID(16, TYPE_PTR, void *), .offset = offsetof(ion_DirListIter, handle)},
    }},
    [277] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(276, TYPE_STRUCT, ion_DirListIter)},
    [278] = NULL, // Func
    [279] = NULL, // Func
    [280] = NULL, // Enum
    [281] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_FlagDef), .align = alignof(ion_FlagDef), .name = "ion_FlagDef", .num_fields = 7, .fields = (TypeFieldInfo[]) {
        {"kind", .type = TYPEID(280, TYPE_NONE, ion_FlagKind), .offset = offsetof(ion_FlagDef, kind)},
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_FlagDef, name)},
        {"help", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_FlagDef, help)},
        {"options", .type = TYPEID(19, TYPE_PTR, char const ((**))), .offset = offsetof(ion_FlagDef, options)},
        {"arg_name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_FlagDef, arg_name)},
        {"num_options", .type = TYPEID(8, TYPE_INT, int), .offset = offsetof(ion_FlagDef, num_options)},
        {"ptr", .type = TYPEID(282, TYPE_STRUCT, ion_FlagDefPtr), .offset = offsetof(ion_FlagDef, ptr)},
    }},
    [282] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_FlagDefPtr), .align = alignof(ion_FlagDefPtr), .name = "ion_FlagDefPtr", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"i", .type = TYPEID(287, TYPE_PTR, int *), .offset = offsetof(ion_FlagDefPtr, i)},
        {"b", .type = TYPEID(284, TYPE_PTR, bool *), .offset = offsetof(ion_FlagDefPtr, b)},
        {"s", .type = TYPEID(19, TYPE_PTR, char const ((**))), .offset = offsetof(ion_FlagDefPtr, s)},
    }},
    [283] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(281, TYPE_STRUCT, ion_FlagDef)},
    [284] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(2, TYPE_BOOL, bool)},
    [285] = NULL, // Func
    [286] = NULL, // Func
    [287] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(8, TYPE_INT, int)},
    [288] = NULL, // Func
    [289] = NULL, // Func
    [290] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(19, TYPE_PTR, char const ((**)))},
    [291] = NULL, // Func
    [292] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(FindData), .align = alignof(FindData), .name = "FindData", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"attrib", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(FindData, attrib)},
        {"size", .type = TYPEID(9, TYPE_UINT, uint), .offset = offsetof(FindData, size)},
        {"name", .type = TYPEID(212, TYPE_ARRAY, char [256]), .offset = offsetof(FindData, name)},
    }},
    [293] = NULL, // Func
    [294] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(292, TYPE_STRUCT, FindData)},
    [295] = NULL, // Func
    [296] = NULL, // Func
    [297] = NULL, // Func
    [298] = NULL, // Func
    [299] = NULL, // Func
    [300] = NULL, // Func
    [301] = NULL, // Func
    [302] = NULL, // Func
    [303] = NULL, // No associated type
    [304] = NULL, // Func
    [305] = NULL, // Func
    [306] = NULL, // Func
    [307] = NULL, // Func
    [308] = NULL, // Func
    [309] = NULL, // Func
    [310] = NULL, // Func
    [311] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(160, TYPE_STRUCT, ion_SwitchCasePattern)},
    [312] = NULL, // Func
    [313] = NULL, // Func
    [314] = NULL, // Func
    [315] = NULL, // No associated type
    [316] = NULL, // No associated type
    [317] = NULL, // Func
    [318] = NULL, // Func
    [319] = NULL, // Func
    [320] = NULL, // Func
    [321] = NULL, // Func
    [322] = NULL, // Func
    [323] = NULL, // Func
    [324] = NULL, // Func
    [325] = NULL, // Func
    [326] = NULL, // Enum
    [327] = NULL, // Enum
    [328] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(245, TYPE_PTR, ion_Package *)},
    [329] = NULL, // Func
    [330] = NULL, // Func
    [331] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(227, TYPE_PTR, ion_Sym *)},
    [332] = NULL, // No associated type
    [333] = NULL, // No associated type
    [334] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(ion_Sym [1024]), .align = alignof(ion_Sym [1024]), .base = TYPEID(226, TYPE_STRUCT, ion_Sym), .count = 1024},
    [335] = NULL, // Func
    [336] = NULL, // Func
    [337] = NULL, // Func
    [338] = NULL, // Func
    [339] = NULL, // Func
    [340] = NULL, // Func
    [341] = NULL, // Func
    [342] = NULL, // Func
    [343] = NULL, // Func
    [344] = NULL, // Func
    [345] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Operand), .align = alignof(ion_Operand), .name = "ion_Operand", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(218, TYPE_PTR, ion_Type *), .offset = offsetof(ion_Operand, type)},
        {"is_lvalue", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_Operand, is_lvalue)},
        {"is_const", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_Operand, is_const)},
        {"val", .type = TYPEID(207, TYPE_UNION, ion_Val), .offset = offsetof(ion_Operand, val)},
    }},
    [346] = NULL, // Func
    [347] = NULL, // Func
    [348] = NULL, // Func
    [349] = NULL, // Func
    [350] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(345, TYPE_STRUCT, ion_Operand)},
    [351] = NULL, // Func
    [352] = NULL, // Func
    [353] = NULL, // Func
    [354] = NULL, // Func
    [355] = NULL, // Func
    [356] = NULL, // Func
    [357] = NULL, // Func
    [358] = NULL, // Func
    [359] = NULL, // Func
    [360] = NULL, // Func
    [361] = NULL, // Func
    [362] = NULL, // Func
    [363] = NULL, // Func
    [364] = NULL, // Func
    [365] = NULL, // Func
    [366] = NULL, // Func
    [367] = NULL, // Func
    [368] = NULL, // Func
    [369] = NULL, // Func
    [370] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(207, TYPE_UNION, ion_Val)},
    [371] = NULL, // Func
    [372] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_StmtCtx), .align = alignof(ion_StmtCtx), .name = "ion_StmtCtx", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"is_break_legal", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_StmtCtx, is_break_legal)},
        {"is_continue_legal", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_StmtCtx, is_continue_legal)},
    }},
    [373] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_Label), .align = alignof(ion_Label), .name = "ion_Label", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_Label, name)},
        {"pos", .type = TYPEID(42, TYPE_STRUCT, ion_SrcPos), .offset = offsetof(ion_Label, pos)},
        {"referenced", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_Label, referenced)},
        {"defined", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_Label, defined)},
    }},
    [374] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(ion_Label [256]), .align = alignof(ion_Label [256]), .base = TYPEID(373, TYPE_STRUCT, ion_Label), .count = 256},
    [375] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(373, TYPE_STRUCT, ion_Label)},
    [376] = NULL, // Func
    [377] = NULL, // Func
    [378] = NULL, // Func
    [379] = NULL, // Func
    [380] = NULL, // Func
    [381] = NULL, // Func
    [382] = NULL, // Func
    [383] = NULL, // Func
    [384] = NULL, // Func
    [385] = NULL, // Func
    [386] = NULL, // Func
    [387] = NULL, // Func
    [388] = NULL, // Func
    [389] = NULL, // Func
    [390] = NULL, // Func
    [391] = NULL, // Func
    [392] = NULL, // Func
    [393] = NULL, // Func
    [394] = NULL, // Func
    [395] = NULL, // Func
    [396] = NULL, // Func
    [397] = NULL, // Enum
    [398] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char const (*[3])), .align = alignof(char const (*[3])), .base = TYPEID(18, TYPE_PTR, char const (*)), .count = 3},
    [399] = NULL, // Enum
    [400] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char const (*[2])), .align = alignof(char const (*[2])), .base = TYPEID(18, TYPE_PTR, char const (*)), .count = 2},
    [401] = NULL, // Func
    [402] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_TypeMetrics), .align = alignof(ion_TypeMetrics), .name = "ion_TypeMetrics", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"size", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_TypeMetrics, size)},
        {"align", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_TypeMetrics, align)},
        {"sign", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_TypeMetrics, sign)},
        {"max", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_TypeMetrics, max)},
    }},
    [403] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(ion_TypeMetrics [25]), .align = alignof(ion_TypeMetrics [25]), .base = TYPEID(402, TYPE_STRUCT, ion_TypeMetrics), .count = 25},
    [404] = NULL, // Func
    [405] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_TypeField), .align = alignof(ion_TypeField), .name = "ion_TypeField", .num_fields = 3, .fields = (TypeFieldInfo[]) {
        {"name", .type = TYPEID(18, TYPE_PTR, char const (*)), .offset = offsetof(ion_TypeField, name)},
        {"type", .type = TYPEID(218, TYPE_PTR, ion_Type *), .offset = offsetof(ion_TypeField, type)},
        {"offset", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_TypeField, offset)},
    }},
    [406] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_TypeAggregate), .align = alignof(ion_TypeAggregate), .name = "ion_TypeAggregate", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"fields", .type = TYPEID(409, TYPE_PTR, ion_TypeField *), .offset = offsetof(ion_TypeAggregate, fields)},
        {"num_fields", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_TypeAggregate, num_fields)},
    }},
    [407] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_TypeFunc), .align = alignof(ion_TypeFunc), .name = "ion_TypeFunc", .num_fields = 4, .fields = (TypeFieldInfo[]) {
        {"params", .type = TYPEID(410, TYPE_PTR, ion_Type (**)), .offset = offsetof(ion_TypeFunc, params)},
        {"num_params", .type = TYPEID(13, TYPE_ULLONG, ullong), .offset = offsetof(ion_TypeFunc, num_params)},
        {"has_varargs", .type = TYPEID(2, TYPE_BOOL, bool), .offset = offsetof(ion_TypeFunc, has_varargs)},
        {"ret", .type = TYPEID(218, TYPE_PTR, ion_Type *), .offset = offsetof(ion_TypeFunc, ret)},
    }},
    [408] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(402, TYPE_STRUCT, ion_TypeMetrics)},
    [409] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(405, TYPE_STRUCT, ion_TypeField)},
    [410] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(218, TYPE_PTR, ion_Type *)},
    [411] = NULL, // No associated type
    [412] = NULL, // Func
    [413] = NULL, // Func
    [414] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(int [25]), .align = alignof(int [25]), .base = TYPEID(8, TYPE_INT, int), .count = 25},
    [415] = NULL, // Func
    [416] = NULL, // Func
    [417] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_CachedArrayType), .align = alignof(ion_CachedArrayType), .name = "ion_CachedArrayType", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(218, TYPE_PTR, ion_Type *), .offset = offsetof(ion_CachedArrayType, type)},
        {"next", .type = TYPEID(547, TYPE_PTR, ion_CachedArrayType *), .offset = offsetof(ion_CachedArrayType, next)},
    }},
    [418] = NULL, // Func
    [419] = &(TypeInfo){TYPE_STRUCT, .size = sizeof(ion_CachedFuncType), .align = alignof(ion_CachedFuncType), .name = "ion_CachedFuncType", .num_fields = 2, .fields = (TypeFieldInfo[]) {
        {"type", .type = TYPEID(218, TYPE_PTR, ion_Type *), .offset = offsetof(ion_CachedFuncType, type)},
        {"next", .type = TYPEID(548, TYPE_PTR, ion_CachedFuncType *), .offset = offsetof(ion_CachedFuncType, next)},
    }},
    [420] = NULL, // Func
    [421] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(409, TYPE_PTR, ion_TypeField *)},
    [422] = NULL, // Func
    [423] = NULL, // Func
    [424] = NULL, // Func
    [425] = NULL, // Func
    [426] = NULL, // Func
    [427] = NULL, // Func
    [428] = NULL, // Func
    [429] = NULL, // Func
    [430] = NULL, // Func
    [431] = NULL, // No associated type
    [432] = NULL, // No associated type
    [433] = NULL, // No associated type
    [434] = NULL, // No associated type
    [435] = NULL, // Func
    [436] = NULL, // Func
    [437] = NULL, // Func
    [438] = NULL, // Func
    [439] = NULL, // Func
    [440] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [15]), .align = alignof(char [15]), .base = TYPEID(3, TYPE_CHAR, char), .count = 15},
    [441] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [16]), .align = alignof(char [16]), .base = TYPEID(3, TYPE_CHAR, char), .count = 16},
    [442] = NULL, // Func
    [443] = NULL, // Incomplete: FILE
    [444] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID0(443, TYPE_NONE)},
    [445] = NULL, // Func
    [446] = NULL, // Func
    [447] = NULL, // Func
    [448] = NULL, // Func
    [449] = NULL, // Func
    [450] = NULL, // Func
    [451] = NULL, // Func
    [452] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(37, TYPE_PTR, char (**))},
    [453] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(202, TYPE_STRUCT, ion_Intern)},
    [454] = NULL, // Func
    [455] = NULL, // Func
    [456] = NULL, // Func
    [457] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [67]), .align = alignof(char [67]), .base = TYPEID(3, TYPE_CHAR, char), .count = 67},
    [458] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [18]), .align = alignof(char [18]), .base = TYPEID(3, TYPE_CHAR, char), .count = 18},
    [459] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [19]), .align = alignof(char [19]), .base = TYPEID(3, TYPE_CHAR, char), .count = 19},
    [460] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [17]), .align = alignof(char [17]), .base = TYPEID(3, TYPE_CHAR, char), .count = 17},
    [461] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [64]), .align = alignof(char [64]), .base = TYPEID(3, TYPE_CHAR, char), .count = 64},
    [462] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [55]), .align = alignof(char [55]), .base = TYPEID(3, TYPE_CHAR, char), .count = 55},
    [463] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [13]), .align = alignof(char [13]), .base = TYPEID(3, TYPE_CHAR, char), .count = 13},
    [464] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [24]), .align = alignof(char [24]), .base = TYPEID(3, TYPE_CHAR, char), .count = 24},
    [465] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [35]), .align = alignof(char [35]), .base = TYPEID(3, TYPE_CHAR, char), .count = 35},
    [466] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [37]), .align = alignof(char [37]), .base = TYPEID(3, TYPE_CHAR, char), .count = 37},
    [467] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [38]), .align = alignof(char [38]), .base = TYPEID(3, TYPE_CHAR, char), .count = 38},
    [468] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [57]), .align = alignof(char [57]), .base = TYPEID(3, TYPE_CHAR, char), .count = 57},
    [469] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [31]), .align = alignof(char [31]), .base = TYPEID(3, TYPE_CHAR, char), .count = 31},
    [470] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [77]), .align = alignof(char [77]), .base = TYPEID(3, TYPE_CHAR, char), .count = 77},
    [471] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [80]), .align = alignof(char [80]), .base = TYPEID(3, TYPE_CHAR, char), .count = 80},
    [472] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [83]), .align = alignof(char [83]), .base = TYPEID(3, TYPE_CHAR, char), .count = 83},
    [473] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [74]), .align = alignof(char [74]), .base = TYPEID(3, TYPE_CHAR, char), .count = 74},
    [474] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [63]), .align = alignof(char [63]), .base = TYPEID(3, TYPE_CHAR, char), .count = 63},
    [475] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [81]), .align = alignof(char [81]), .base = TYPEID(3, TYPE_CHAR, char), .count = 81},
    [476] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [50]), .align = alignof(char [50]), .base = TYPEID(3, TYPE_CHAR, char), .count = 50},
    [477] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [14]), .align = alignof(char [14]), .base = TYPEID(3, TYPE_CHAR, char), .count = 14},
    [478] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [72]), .align = alignof(char [72]), .base = TYPEID(3, TYPE_CHAR, char), .count = 72},
    [479] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [114]), .align = alignof(char [114]), .base = TYPEID(3, TYPE_CHAR, char), .count = 114},
    [480] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [28]), .align = alignof(char [28]), .base = TYPEID(3, TYPE_CHAR, char), .count = 28},
    [481] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [39]), .align = alignof(char [39]), .base = TYPEID(3, TYPE_CHAR, char), .count = 39},
    [482] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [20]), .align = alignof(char [20]), .base = TYPEID(3, TYPE_CHAR, char), .count = 20},
    [483] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [21]), .align = alignof(char [21]), .base = TYPEID(3, TYPE_CHAR, char), .count = 21},
    [484] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [23]), .align = alignof(char [23]), .base = TYPEID(3, TYPE_CHAR, char), .count = 23},
    [485] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [106]), .align = alignof(char [106]), .base = TYPEID(3, TYPE_CHAR, char), .count = 106},
    [486] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [65]), .align = alignof(char [65]), .base = TYPEID(3, TYPE_CHAR, char), .count = 65},
    [487] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [44]), .align = alignof(char [44]), .base = TYPEID(3, TYPE_CHAR, char), .count = 44},
    [488] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [42]), .align = alignof(char [42]), .base = TYPEID(3, TYPE_CHAR, char), .count = 42},
    [489] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [52]), .align = alignof(char [52]), .base = TYPEID(3, TYPE_CHAR, char), .count = 52},
    [490] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [58]), .align = alignof(char [58]), .base = TYPEID(3, TYPE_CHAR, char), .count = 58},
    [491] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [29]), .align = alignof(char [29]), .base = TYPEID(3, TYPE_CHAR, char), .count = 29},
    [492] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [34]), .align = alignof(char [34]), .base = TYPEID(3, TYPE_CHAR, char), .count = 34},
    [493] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [25]), .align = alignof(char [25]), .base = TYPEID(3, TYPE_CHAR, char), .count = 25},
    [494] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [45]), .align = alignof(char [45]), .base = TYPEID(3, TYPE_CHAR, char), .count = 45},
    [495] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [54]), .align = alignof(char [54]), .base = TYPEID(3, TYPE_CHAR, char), .count = 54},
    [496] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [48]), .align = alignof(char [48]), .base = TYPEID(3, TYPE_CHAR, char), .count = 48},
    [497] = NULL, // Func
    [498] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [33]), .align = alignof(char [33]), .base = TYPEID(3, TYPE_CHAR, char), .count = 33},
    [499] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(4, TYPE_UCHAR, uchar)},
    [500] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [36]), .align = alignof(char [36]), .base = TYPEID(3, TYPE_CHAR, char), .count = 36},
    [501] = NULL, // Func
    [502] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [30]), .align = alignof(char [30]), .base = TYPEID(3, TYPE_CHAR, char), .count = 30},
    [503] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [56]), .align = alignof(char [56]), .base = TYPEID(3, TYPE_CHAR, char), .count = 56},
    [504] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [26]), .align = alignof(char [26]), .base = TYPEID(3, TYPE_CHAR, char), .count = 26},
    [505] = NULL, // Func
    [506] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(283, TYPE_PTR, ion_FlagDef *)},
    [507] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [27]), .align = alignof(char [27]), .base = TYPEID(3, TYPE_CHAR, char), .count = 27},
    [508] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [62]), .align = alignof(char [62]), .base = TYPEID(3, TYPE_CHAR, char), .count = 62},
    [509] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(64, TYPE_PTR, ion_Typespec (**))},
    [510] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [49]), .align = alignof(char [49]), .base = TYPEID(3, TYPE_CHAR, char), .count = 49},
    [511] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [69]), .align = alignof(char [69]), .base = TYPEID(3, TYPE_CHAR, char), .count = 69},
    [512] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(109, TYPE_PTR, ion_CompoundField *)},
    [513] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(112, TYPE_PTR, ion_Expr (**))},
    [514] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(52, TYPE_PTR, ion_Stmt (**))},
    [515] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(129, TYPE_PTR, ion_ElseIf *)},
    [516] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [59]), .align = alignof(char [59]), .base = TYPEID(3, TYPE_CHAR, char), .count = 59},
    [517] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(311, TYPE_PTR, ion_SwitchCasePattern *)},
    [518] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [47]), .align = alignof(char [47]), .base = TYPEID(3, TYPE_CHAR, char), .count = 47},
    [519] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(134, TYPE_PTR, ion_SwitchCase *)},
    [520] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(77, TYPE_PTR, ion_EnumItem *)},
    [521] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(81, TYPE_PTR, ion_AggregateItem *)},
    [522] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(88, TYPE_PTR, ion_FuncParam *)},
    [523] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [51]), .align = alignof(char [51]), .base = TYPEID(3, TYPE_CHAR, char), .count = 51},
    [524] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(44, TYPE_PTR, ion_NoteArg *)},
    [525] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(47, TYPE_PTR, ion_Note *)},
    [526] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(93, TYPE_PTR, ion_ImportItem *)},
    [527] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(68, TYPE_PTR, ion_Decl (**))},
    [528] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(328, TYPE_PTR, ion_Package (**))},
    [529] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(331, TYPE_PTR, ion_Sym (**))},
    [530] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [22]), .align = alignof(char [22]), .base = TYPEID(3, TYPE_CHAR, char), .count = 22},
    [531] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(410, TYPE_PTR, ion_Type (**))},
    [532] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [41]), .align = alignof(char [41]), .base = TYPEID(3, TYPE_CHAR, char), .count = 41},
    [533] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [53]), .align = alignof(char [53]), .base = TYPEID(3, TYPE_CHAR, char), .count = 53},
    [534] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(100, TYPE_NONE, ion_TokenKind)},
    [535] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [32]), .align = alignof(char [32]), .base = TYPEID(3, TYPE_CHAR, char), .count = 32},
    [536] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [60]), .align = alignof(char [60]), .base = TYPEID(3, TYPE_CHAR, char), .count = 60},
    [537] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [46]), .align = alignof(char [46]), .base = TYPEID(3, TYPE_CHAR, char), .count = 46},
    [538] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [43]), .align = alignof(char [43]), .base = TYPEID(3, TYPE_CHAR, char), .count = 43},
    [539] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [100]), .align = alignof(char [100]), .base = TYPEID(3, TYPE_CHAR, char), .count = 100},
    [540] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [68]), .align = alignof(char [68]), .base = TYPEID(3, TYPE_CHAR, char), .count = 68},
    [541] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [73]), .align = alignof(char [73]), .base = TYPEID(3, TYPE_CHAR, char), .count = 73},
    [542] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [70]), .align = alignof(char [70]), .base = TYPEID(3, TYPE_CHAR, char), .count = 70},
    [543] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [66]), .align = alignof(char [66]), .base = TYPEID(3, TYPE_CHAR, char), .count = 66},
    [544] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [92]), .align = alignof(char [92]), .base = TYPEID(3, TYPE_CHAR, char), .count = 92},
    [545] = NULL, // Func
    [546] = &(TypeInfo){TYPE_ARRAY, .size = sizeof(char [40]), .align = alignof(char [40]), .base = TYPEID(3, TYPE_CHAR, char), .count = 40},
    [547] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(417, TYPE_STRUCT, ion_CachedArrayType)},
    [548] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(419, TYPE_STRUCT, ion_CachedFuncType)},
    [549] = NULL, // Func
    [550] = NULL, // Func
    [551] = NULL, // Func
    [552] = NULL, // Func
    [553] = NULL, // Func
    [554] = NULL, // Func
    [555] = NULL, // Func
    [556] = NULL, // Func
    [557] = NULL, // Func
    [558] = NULL, // Func
    [559] = NULL, // Func
    [560] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(14, TYPE_FLOAT, float)},
    [561] = NULL, // Func
    [562] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(15, TYPE_DOUBLE, double)},
    [563] = NULL, // Func
    [564] = NULL, // Func
    [565] = NULL, // Func
    [566] = NULL, // Func
    [567] = NULL, // Func
    [568] = NULL, // Func
    [569] = NULL, // Func
    [570] = NULL, // Func
    [571] = NULL, // Func
    [572] = NULL, // Func
    [573] = NULL, // Func
    [574] = NULL, // Func
    [575] = NULL, // Func
    [576] = NULL, // Func
    [577] = &(TypeInfo){TYPE_CONST, .size = sizeof(char (*const )), .align = alignof(char (*const )), .base = TYPEID(22, TYPE_PTR, char *)},
    [578] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(577, TYPE_CONST, char (*const ))},
    [579] = NULL, // Func
    [580] = NULL, // No associated type
    [581] = NULL, // Func
    [582] = NULL, // Func
    [583] = NULL, // Func
    [584] = NULL, // Func
    [585] = NULL, // Func
    [586] = NULL, // Func
    [587] = NULL, // Func
    [588] = NULL, // Func
    [589] = NULL, // Func
    [590] = NULL, // Func
    [591] = NULL, // Func
    [592] = NULL, // Func
    [593] = NULL, // Func
    [594] = NULL, // Func
    [595] = NULL, // No associated type
    [596] = NULL, // Func
    [597] = NULL, // Func
    [598] = NULL, // No associated type
    [599] = NULL, // No associated type
    [600] = NULL, // No associated type
    [601] = NULL, // Func
    [602] = NULL, // Func
    [603] = NULL, // Func
    [604] = NULL, // Func
    [605] = NULL, // Func
    [606] = NULL, // Func
    [607] = NULL, // Func
    [608] = NULL, // Func
    [609] = NULL, // Func
    [610] = NULL, // Func
    [611] = NULL, // Func
    [612] = NULL, // Func
    [613] = NULL, // Func
    [614] = NULL, // Func
    [615] = NULL, // Func
    [616] = NULL, // Func
    [617] = NULL, // Func
    [618] = NULL, // Func
    [619] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(6, TYPE_SHORT, short)},
    [620] = NULL, // Func
    [621] = NULL, // Func
    [622] = NULL, // Func
    [623] = &(TypeInfo){TYPE_CONST, .size = sizeof(short const ), .align = alignof(short const ), .base = TYPEID(6, TYPE_SHORT, short)},
    [624] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(623, TYPE_CONST, short const )},
    [625] = NULL, // Func
    [626] = NULL, // Func
    [627] = NULL, // Func
    [628] = NULL, // Func
    [629] = NULL, // Func
    [630] = NULL, // Func
    [631] = NULL, // Func
    [632] = NULL, // No associated type
    [633] = NULL, // Func
    [634] = NULL, // Func
    [635] = NULL, // No associated type
    [636] = NULL, // Func
    [637] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(12, TYPE_LLONG, llong)},
    [638] = NULL, // Func
    [639] = NULL, // No associated type
    [640] = NULL, // No associated type
    [641] = NULL, // Func
    [642] = &(TypeInfo){TYPE_CONST, .size = sizeof(llong const ), .align = alignof(llong const ), .base = TYPEID(12, TYPE_LLONG, llong)},
    [643] = &(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = TYPEID(642, TYPE_CONST, llong const )},
    [644] = NULL, // Func
    [645] = NULL, // Func
    [646] = NULL, // Func
};

int num_typeinfos = 647;
const TypeInfo **typeinfos = (const TypeInfo **)typeinfo_table;

// Definitions
#line 12 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\main.ion"
int main(int argc, char const ((*(*argv)))) {
    #line 14
    return ion_ion_main(argc, argv, ion_gen_all, "c");
}

char const ((*IONOS)) = "win32";
char const ((*IONARCH)) = "x64";
#line 51 "C:\\Users\\Tom\\Documents\\projects\\ion\\system_packages\\builtin\\typeinfo.ion"
TypeKind typeid_kind(typeid type) {
    return (TypeKind)((((type) >> (24))) & (0xff));
}

int typeid_index(typeid type) {
    return (int)((type) & (0xffffff));
}

size_t typeid_size(typeid type) {
    return (size_t)((type) >> (32));
}

TypeInfo const ((*get_typeinfo(typeid type))) {
    int index = typeid_index(type);
    if ((typeinfos) && ((index) < (num_typeinfos))) {
        return typeinfos[index];
    } else {
        return NULL;
    }
}

ion_Arena ion_ast_arena;
#line 3 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ast.ion"
void (*ion_ast_alloc(size_t size)) {
    assert((size) != (0));
    void (*ptr) = ion_arena_alloc(&(ion_ast_arena), size);
    memset(ptr, 0, size);
    return ptr;
}

void (*ion_ast_dup(void const ((*src)), size_t size)) {
    if ((size) == (0)) {
        return NULL;
    }
    void (*ptr) = ion_arena_alloc(&(ion_ast_arena), size);
    memcpy(ptr, src, size);
    return ptr;
}

#line 21
ion_Note ion_new_note(ion_SrcPos pos, char const ((*name)), ion_NoteArg (*args), size_t num_args) {
    return (ion_Note){.pos = pos, .name = name, .args = ion_ast_dup(args, (num_args) * (sizeof(*(args)))), .num_args = num_args};
}

ion_Notes ion_new_notes(ion_Note (*notes), size_t num_notes) {
    return (ion_Notes){ion_ast_dup(notes, (num_notes) * (sizeof(*(notes)))), num_notes};
}

ion_StmtList ion_new_stmt_list(ion_SrcPos pos, ion_Stmt (*(*stmts)), size_t num_stmts) {
    return (ion_StmtList){pos, ion_ast_dup(stmts, (num_stmts) * (sizeof(*(stmts)))), num_stmts};
}

ion_Typespec (*ion_new_typespec(ion_TypespecKind kind, ion_SrcPos pos)) {
    ion_Typespec (*t) = ion_ast_alloc(sizeof(ion_Typespec));
    t->kind = kind;
    t->pos = pos;
    return t;
}

ion_Typespec (*ion_new_typespec_name(ion_SrcPos pos, char const ((*name)))) {
    ion_Typespec (*t) = ion_new_typespec(ION_TYPESPEC_NAME, pos);
    t->name = name;
    return t;
}

ion_Typespec (*ion_new_typespec_ptr(ion_SrcPos pos, ion_Typespec (*base))) {
    ion_Typespec (*t) = ion_new_typespec(ION_TYPESPEC_PTR, pos);
    t->base = base;
    return t;
}

ion_Typespec (*ion_new_typespec_const(ion_SrcPos pos, ion_Typespec (*base))) {
    ion_Typespec (*t) = ion_new_typespec(ION_TYPESPEC_CONST, pos);
    t->base = base;
    return t;
}

ion_Typespec (*ion_new_typespec_array(ion_SrcPos pos, ion_Typespec (*elem), ion_Expr (*size))) {
    ion_Typespec (*t) = ion_new_typespec(ION_TYPESPEC_ARRAY, pos);
    t->base = elem;
    t->num_elems = size;
    return t;
}

ion_Typespec (*ion_new_typespec_func(ion_SrcPos pos, ion_Typespec (*(*args)), size_t num_args, ion_Typespec (*ret), bool has_varargs)) {
    ion_Typespec (*t) = ion_new_typespec(ION_TYPESPEC_FUNC, pos);
    t->function.args = ion_ast_dup(args, (num_args) * (sizeof(*(args))));
    t->function.num_args = num_args;
    t->function.ret = ret;
    t->function.has_varargs = has_varargs;
    return t;
}

ion_Decls (*ion_new_decls(ion_Decl (*(*decls)), size_t num_decls)) {
    ion_Decls (*d) = ion_ast_alloc(sizeof(ion_Decls));
    d->decls = ion_ast_dup(decls, (num_decls) * (sizeof(*(decls))));
    d->num_decls = num_decls;
    return d;
}

ion_Decl (*ion_new_decl(ion_DeclKind kind, ion_SrcPos pos, char const ((*name)))) {
    ion_Decl (*d) = ion_ast_alloc(sizeof(ion_Decl));
    d->kind = kind;
    d->pos = pos;
    d->name = name;
    return d;
}

ion_Note (*ion_get_decl_note(ion_Decl (*decl), char const ((*name)))) {
    for (size_t i = 0; (i) < (decl->notes.num_notes); (i)++) {
        ion_Note (*note) = (decl->notes.notes) + (i);
        if ((note->name) == (name)) {
            return note;
        }
    }
    return NULL;
}

bool ion_is_decl_foreign(ion_Decl (*decl)) {
    return (ion_get_decl_note(decl, ion_foreign_name)) != (NULL);
}

ion_Decl (*ion_new_decl_enum(ion_SrcPos pos, char const ((*name)), ion_Typespec (*type), ion_EnumItem (*items), size_t num_items)) {
    ion_Decl (*d) = ion_new_decl(ION_DECL_ENUM, pos, name);
    d->enum_decl.type = type;
    d->enum_decl.items = ion_ast_dup(items, (num_items) * (sizeof(*(items))));
    d->enum_decl.num_items = num_items;
    return d;
}

ion_Aggregate (*ion_new_aggregate(ion_SrcPos pos, ion_AggregateKind kind, ion_AggregateItem (*items), size_t num_items)) {
    ion_Aggregate (*aggregate) = ion_ast_alloc(sizeof(ion_Aggregate));
    aggregate->pos = pos;
    aggregate->kind = kind;
    aggregate->items = ion_ast_dup(items, (num_items) * (sizeof(*(items))));
    aggregate->num_items = num_items;
    return aggregate;
}

ion_Decl (*ion_new_decl_aggregate(ion_SrcPos pos, ion_DeclKind kind, char const ((*name)), ion_Aggregate (*aggregate))) {
    assert(((kind) == (ION_DECL_STRUCT)) || ((kind) == (ION_DECL_UNION)));
    ion_Decl (*d) = ion_new_decl(kind, pos, name);
    d->aggregate = aggregate;
    return d;
}

ion_Decl (*ion_new_decl_var(ion_SrcPos pos, char const ((*name)), ion_Typespec (*type), ion_Expr (*expr))) {
    ion_Decl (*d) = ion_new_decl(ION_DECL_VAR, pos, name);
    d->var_decl.type = type;
    d->var_decl.expr = expr;
    return d;
}

ion_Decl (*ion_new_decl_func(ion_SrcPos pos, char const ((*name)), ion_FuncParam (*params), size_t num_params, ion_Typespec (*ret_type), bool has_varargs, ion_StmtList block)) {
    ion_Decl (*d) = ion_new_decl(ION_DECL_FUNC, pos, name);
    d->function.params = ion_ast_dup(params, (num_params) * (sizeof(*(params))));
    d->function.num_params = num_params;
    d->function.ret_type = ret_type;
    d->function.has_varargs = has_varargs;
    d->function.block = block;
    return d;
}

ion_Decl (*ion_new_decl_const(ion_SrcPos pos, char const ((*name)), ion_Typespec (*type), ion_Expr (*expr))) {
    ion_Decl (*d) = ion_new_decl(ION_DECL_CONST, pos, name);
    d->const_decl.type = type;
    d->const_decl.expr = expr;
    return d;
}

ion_Decl (*ion_new_decl_typedef(ion_SrcPos pos, char const ((*name)), ion_Typespec (*type))) {
    ion_Decl (*d) = ion_new_decl(ION_DECL_TYPEDEF, pos, name);
    d->typedef_decl.type = type;
    return d;
}

ion_Decl (*ion_new_decl_note(ion_SrcPos pos, ion_Note note)) {
    ion_Decl (*d) = ion_new_decl(ION_DECL_NOTE, pos, NULL);
    d->note = note;
    return d;
}

ion_Decl (*ion_new_decl_import(ion_SrcPos pos, char const ((*rename_name)), bool is_relative, char const ((*(*names))), size_t num_names, bool import_all, ion_ImportItem (*items), size_t num_items)) {
    ion_Decl (*d) = ion_new_decl(ION_DECL_IMPORT, pos, NULL);
    d->name = rename_name;
    d->import_decl.is_relative = is_relative;
    d->import_decl.names = ion_ast_dup(names, (num_names) * (sizeof(*(names))));
    d->import_decl.num_names = num_names;
    d->import_decl.import_all = import_all;
    d->import_decl.items = ion_ast_dup(items, (num_items) * (sizeof(*(items))));
    d->import_decl.num_items = num_items;
    return d;
}

ion_Expr (*ion_new_expr(ion_ExprKind kind, ion_SrcPos pos)) {
    ion_Expr (*e) = ion_ast_alloc(sizeof(ion_Expr));
    e->kind = kind;
    e->pos = pos;
    return e;
}

ion_Expr (*ion_new_expr_paren(ion_SrcPos pos, ion_Expr (*expr))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_PAREN, pos);
    e->paren.expr = expr;
    return e;
}

ion_Expr (*ion_new_expr_sizeof_expr(ion_SrcPos pos, ion_Expr (*expr))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_SIZEOF_EXPR, pos);
    e->sizeof_expr = expr;
    return e;
}

ion_Expr (*ion_new_expr_sizeof_type(ion_SrcPos pos, ion_Typespec (*type))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_SIZEOF_TYPE, pos);
    e->sizeof_type = type;
    return e;
}

ion_Expr (*ion_new_expr_typeof_expr(ion_SrcPos pos, ion_Expr (*expr))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_TYPEOF_EXPR, pos);
    e->typeof_expr = expr;
    return e;
}

ion_Expr (*ion_new_expr_typeof_type(ion_SrcPos pos, ion_Typespec (*type))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_TYPEOF_TYPE, pos);
    e->typeof_type = type;
    return e;
}

ion_Expr (*ion_new_expr_alignof_expr(ion_SrcPos pos, ion_Expr (*expr))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_ALIGNOF_EXPR, pos);
    e->alignof_expr = expr;
    return e;
}

ion_Expr (*ion_new_expr_alignof_type(ion_SrcPos pos, ion_Typespec (*type))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_ALIGNOF_TYPE, pos);
    e->alignof_type = type;
    return e;
}

ion_Expr (*ion_new_expr_offsetof(ion_SrcPos pos, ion_Typespec (*type), char const ((*name)))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_OFFSETOF, pos);
    e->offsetof_field.type = type;
    e->offsetof_field.name = name;
    return e;
}

ion_Expr (*ion_new_expr_modify(ion_SrcPos pos, ion_TokenKind op, bool post, ion_Expr (*expr))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_MODIFY, pos);
    e->modify.op = op;
    e->modify.post = post;
    e->modify.expr = expr;
    return e;
}

ion_Expr (*ion_new_expr_int(ion_SrcPos pos, ullong val, ion_TokenMod mod, ion_TokenSuffix suffix)) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_INT, pos);
    e->int_lit.val = val;
    e->int_lit.mod = mod;
    e->int_lit.suffix = suffix;
    return e;
}

ion_Expr (*ion_new_expr_float(ion_SrcPos pos, char const ((*start)), char const ((*end)), double val, ion_TokenSuffix suffix)) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_FLOAT, pos);
    e->float_lit.start = start;
    e->float_lit.end = end;
    e->float_lit.val = val;
    e->float_lit.suffix = suffix;
    return e;
}

ion_Expr (*ion_new_expr_str(ion_SrcPos pos, char const ((*val)), ion_TokenMod mod)) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_STR, pos);
    e->str_lit.val = val;
    e->str_lit.mod = mod;
    return e;
}

ion_Expr (*ion_new_expr_name(ion_SrcPos pos, char const ((*name)))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_NAME, pos);
    e->name = name;
    return e;
}

ion_Expr (*ion_new_expr_compound(ion_SrcPos pos, ion_Typespec (*type), ion_CompoundField (*fields), size_t num_fields)) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_COMPOUND, pos);
    e->compound.type = type;
    e->compound.fields = ion_ast_dup(fields, (num_fields) * (sizeof(*(fields))));
    e->compound.num_fields = num_fields;
    return e;
}

ion_Expr (*ion_new_expr_cast(ion_SrcPos pos, ion_Typespec (*type), ion_Expr (*expr))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_CAST, pos);
    e->cast.type = type;
    e->cast.expr = expr;
    return e;
}

ion_Expr (*ion_new_expr_call(ion_SrcPos pos, ion_Expr (*expr), ion_Expr (*(*args)), size_t num_args)) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_CALL, pos);
    e->call.expr = expr;
    e->call.args = ion_ast_dup(args, (num_args) * (sizeof(*(args))));
    e->call.num_args = num_args;
    return e;
}

ion_Expr (*ion_new_expr_index(ion_SrcPos pos, ion_Expr (*expr), ion_Expr (*index))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_INDEX, pos);
    e->index.expr = expr;
    e->index.index = index;
    return e;
}

ion_Expr (*ion_new_expr_field(ion_SrcPos pos, ion_Expr (*expr), char const ((*name)))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_FIELD, pos);
    e->field.expr = expr;
    e->field.name = name;
    return e;
}

ion_Expr (*ion_new_expr_unary(ion_SrcPos pos, ion_TokenKind op, ion_Expr (*expr))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_UNARY, pos);
    e->unary.op = op;
    e->unary.expr = expr;
    return e;
}

ion_Expr (*ion_new_expr_binary(ion_SrcPos pos, ion_TokenKind op, ion_Expr (*left), ion_Expr (*right))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_BINARY, pos);
    e->binary.op = op;
    e->binary.left = left;
    e->binary.right = right;
    return e;
}

ion_Expr (*ion_new_expr_ternary(ion_SrcPos pos, ion_Expr (*cond), ion_Expr (*then_expr), ion_Expr (*else_expr))) {
    ion_Expr (*e) = ion_new_expr(ION_EXPR_TERNARY, pos);
    e->ternary.cond = cond;
    e->ternary.then_expr = then_expr;
    e->ternary.else_expr = else_expr;
    return e;
}

ion_Note (*ion_get_stmt_note(ion_Stmt (*stmt), char const ((*name)))) {
    for (size_t i = 0; (i) < (stmt->notes.num_notes); (i)++) {
        ion_Note (*note) = (stmt->notes.notes) + (i);
        if ((note->name) == (name)) {
            return note;
        }
    }
    return NULL;
}

ion_Stmt (*ion_new_stmt(ion_StmtKind kind, ion_SrcPos pos)) {
    ion_Stmt (*s) = ion_ast_alloc(sizeof(ion_Stmt));
    s->kind = kind;
    s->pos = pos;
    return s;
}

ion_Stmt (*ion_new_stmt_label(ion_SrcPos pos, char const ((*label)))) {
    ion_Stmt (*s) = ion_new_stmt(ION_STMT_LABEL, pos);
    s->label = label;
    return s;
}

ion_Stmt (*ion_new_stmt_goto(ion_SrcPos pos, char const ((*label)))) {
    ion_Stmt (*s) = ion_new_stmt(ION_STMT_GOTO, pos);
    s->label = label;
    return s;
}

ion_Stmt (*ion_new_stmt_note(ion_SrcPos pos, ion_Note note)) {
    ion_Stmt (*s) = ion_new_stmt(ION_STMT_NOTE, pos);
    s->note = note;
    return s;
}

ion_Stmt (*ion_new_stmt_decl(ion_SrcPos pos, ion_Decl (*decl))) {
    ion_Stmt (*s) = ion_new_stmt(ION_STMT_DECL, pos);
    s->decl = decl;
    return s;
}

ion_Stmt (*ion_new_stmt_return(ion_SrcPos pos, ion_Expr (*expr))) {
    ion_Stmt (*s) = ion_new_stmt(ION_STMT_RETURN, pos);
    s->expr = expr;
    return s;
}

ion_Stmt (*ion_new_stmt_break(ion_SrcPos pos)) {
    return ion_new_stmt(ION_STMT_BREAK, pos);
}

ion_Stmt (*ion_new_stmt_continue(ion_SrcPos pos)) {
    return ion_new_stmt(ION_STMT_CONTINUE, pos);
}

ion_Stmt (*ion_new_stmt_block(ion_SrcPos pos, ion_StmtList block)) {
    ion_Stmt (*s) = ion_new_stmt(ION_STMT_BLOCK, pos);
    s->block = block;
    return s;
}

ion_Stmt (*ion_new_stmt_if(ion_SrcPos pos, ion_Stmt (*init), ion_Expr (*cond), ion_StmtList then_block, ion_ElseIf (*elseifs), size_t num_elseifs, ion_StmtList else_block)) {
    ion_Stmt (*s) = ion_new_stmt(ION_STMT_IF, pos);
    s->if_stmt.init = init;
    s->if_stmt.cond = cond;
    s->if_stmt.then_block = then_block;
    s->if_stmt.elseifs = ion_ast_dup(elseifs, (num_elseifs) * (sizeof(*(elseifs))));
    s->if_stmt.num_elseifs = num_elseifs;
    s->if_stmt.else_block = else_block;
    return s;
}

ion_Stmt (*ion_new_stmt_while(ion_SrcPos pos, ion_Expr (*cond), ion_StmtList block)) {
    ion_Stmt (*s) = ion_new_stmt(ION_STMT_WHILE, pos);
    s->while_stmt.cond = cond;
    s->while_stmt.block = block;
    return s;
}

ion_Stmt (*ion_new_stmt_do_while(ion_SrcPos pos, ion_Expr (*cond), ion_StmtList block)) {
    ion_Stmt (*s) = ion_new_stmt(ION_STMT_DO_WHILE, pos);
    s->while_stmt.cond = cond;
    s->while_stmt.block = block;
    return s;
}

ion_Stmt (*ion_new_stmt_for(ion_SrcPos pos, ion_Stmt (*init), ion_Expr (*cond), ion_Stmt (*next), ion_StmtList block)) {
    ion_Stmt (*s) = ion_new_stmt(ION_STMT_FOR, pos);
    s->for_stmt.init = init;
    s->for_stmt.cond = cond;
    s->for_stmt.next = next;
    s->for_stmt.block = block;
    return s;
}

ion_Stmt (*ion_new_stmt_switch(ion_SrcPos pos, ion_Expr (*expr), ion_SwitchCase (*cases), size_t num_cases)) {
    ion_Stmt (*s) = ion_new_stmt(ION_STMT_SWITCH, pos);
    s->switch_stmt.expr = expr;
    s->switch_stmt.cases = ion_ast_dup(cases, (num_cases) * (sizeof(*(cases))));
    s->switch_stmt.num_cases = num_cases;
    return s;
}

ion_Stmt (*ion_new_stmt_assign(ion_SrcPos pos, ion_TokenKind op, ion_Expr (*left), ion_Expr (*right))) {
    ion_Stmt (*s) = ion_new_stmt(ION_STMT_ASSIGN, pos);
    s->assign.op = op;
    s->assign.left = left;
    s->assign.right = right;
    return s;
}

ion_Stmt (*ion_new_stmt_init(ion_SrcPos pos, char const ((*name)), ion_Typespec (*type), ion_Expr (*expr))) {
    ion_Stmt (*s) = ion_new_stmt(ION_STMT_INIT, pos);
    s->init.name = name;
    s->init.type = type;
    s->init.expr = expr;
    return s;
}

ion_Stmt (*ion_new_stmt_expr(ion_SrcPos pos, ion_Expr (*expr))) {
    ion_Stmt (*s) = ion_new_stmt(ION_STMT_EXPR, pos);
    s->expr = expr;
    return s;
}

#line 2 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\common.ion"
size_t ion_min(size_t x, size_t y) {
    return ((x) <= (y) ? x : y);
}

#line 7
size_t ion_max(size_t x, size_t y) {
    return ((x) >= (y) ? x : y);
}

#line 12
size_t ion_clamp_max(size_t x, size_t max) {
    return ion_min(x, max);
}

#line 17
size_t ion_clamp_min(size_t x, size_t min) {
    return ion_max(x, min);
}

#line 22
size_t ion_is_pow2(size_t x) {
    return ((x) != (0)) && (((x) & (((x) - (1)))) == (0));
}

#line 27
uintptr_t ion_align_down(uintptr_t n, size_t a) {
    return (n) & (~(((a) - (1))));
}

#line 32
uintptr_t ion_align_up(uintptr_t n, size_t a) {
    return ion_align_down(((n) + (a)) - (1), a);
}

#line 37
void (*ion_align_down_ptr(void (*p), size_t a)) {
    return (void *)(ion_align_down((uintptr_t)(p), a));
}

#line 42
void (*ion_align_up_ptr(void (*p), size_t a)) {
    return (void *)(ion_align_up((uintptr_t)(p), a));
}

void ion_fatal(char const ((*fmt)), ...) {
    va_list args = {0};
    va_start_ptr(&(args), &(fmt));
    printf("FATAL: ");
    vprintf(fmt, args);
    printf("\n");
    va_end_ptr(&(args));
    exit(1);
}

void (*ion_xcalloc(size_t num_elems, size_t elem_size)) {
    void (*ptr) = calloc(num_elems, elem_size);
    if (!(ptr)) {
        perror("xcalloc failed");
        exit(1);
    }
    return ptr;
}

void (*ion_xrealloc(void (*ptr), size_t num_bytes)) {
    ptr = realloc(ptr, num_bytes);
    if (!(ptr)) {
        perror("xrealloc failed");
        exit(1);
    }
    return ptr;
}

void (*ion_xmalloc(size_t num_bytes)) {
    void (*ptr) = malloc(num_bytes);
    if (!(ptr)) {
        perror("xmalloc failed");
        exit(1);
    }
    return ptr;
}

void (*ion_memdup(void (*src), size_t size)) {
    void (*dest) = ion_xmalloc(size);
    memcpy(dest, src, size);
    return dest;
}

char (*ion_strf(char const ((*fmt)), ...)) {
    va_list args = {0};
    va_start_ptr(&(args), &(fmt));
    int n = (1) + (vsnprintf(NULL, 0, fmt, args));
    va_end_ptr(&(args));
    char (*str) = ion_xmalloc(n);
    va_start_ptr(&(args), &(fmt));
    vsnprintf(str, n, fmt, args);
    va_end_ptr(&(args));
    return str;
}

char (*ion_read_file(char const ((*path)))) {
    FILE (*file) = fopen(path, "rb");
    if (!(file)) {
        return NULL;
    }
    fseek(file, 0, SEEK_END);
    long len = ftell(file);
    fseek(file, 0, SEEK_SET);
    char (*buf) = ion_xmalloc((len) + (1));
    if ((len) && ((fread(buf, len, 1, file)) != (1))) {
        fclose(file);
        free(buf);
        return NULL;
    }
    fclose(file);
    buf[len] = 0;
    return buf;
}

bool ion_write_file(char const ((*path)), char const ((*buf)), size_t len) {
    FILE (*file) = fopen(path, "w");
    if (!(file)) {
        return false;
    }
    ullong n = fwrite(buf, len, 1, file);
    fclose(file);
    return (n) == (1);
}

#line 140
ion_BufHdr (*ion_buf__hdr(void (*b))) {
    return (ion_BufHdr *)((((char *)(b)) - (offsetof(ion_BufHdr, buf))));
}

#line 145
size_t ion_buf_len(void (*b)) {
    return (b ? ion_buf__hdr(b)->len : 0);
}

#line 150
size_t ion_buf_cap(void const ((*b))) {
    return (b ? ion_buf__hdr((void *)(b))->cap : 0);
}

#line 155
void (*ion_buf_end(void (*b), size_t elem_size)) {
    return ((char *)(b)) + ((elem_size) * (ion_buf_len(b)));
}

#line 160
size_t ion_buf_sizeof(void (*b), size_t elem_size) {
    return (b ? (ion_buf_len(b)) * (elem_size) : 0);
}

#line 165
void ion_buf_free(void (*(*b))) {
    if (b) {
        free(ion_buf__hdr(*(b)));
        *(b) = NULL;
    }
}

#line 173
void ion_buf_fit(void (*(*b)), size_t new_len, size_t elem_size) {
    if ((new_len) > (ion_buf_cap(*(b)))) {
        *(b) = ion_buf__grow(*(b), new_len, elem_size);
    }
}

#line 181
void ion_buf_push(void (*(*b)), void (*elem), size_t elem_size) {
    ion_buf_fit(b, (1) + (ion_buf_len(*(b))), elem_size);
    memcpy(((char *)(*(b))) + ((elem_size) * ((ion_buf__hdr(*(b))->len)++)), elem, elem_size);
}

#line 189
void (*ion_buf__grow(void const ((*buf)), size_t new_len, size_t elem_size)) {
    assert((ion_buf_cap(buf)) <= ((((SIZE_MAX) - (1))) / (2)));
    ullong new_cap = ion_clamp_min((2) * (ion_buf_cap(buf)), ion_max(new_len, 16));
    assert((new_len) <= (new_cap));
    assert((new_cap) <= ((((SIZE_MAX) - (offsetof(ion_BufHdr, buf)))) / (elem_size)));
    ullong new_size = (offsetof(ion_BufHdr, buf)) + ((new_cap) * (elem_size));
    ion_BufHdr (*new_hdr) = {0};
    if (buf) {
        new_hdr = ion_xrealloc(ion_buf__hdr((void *)(buf)), new_size);
    } else {
        new_hdr = ion_xmalloc(new_size);
        new_hdr->len = 0;
    }
    new_hdr->cap = new_cap;
    return new_hdr->buf;
}

void ion_buf_printf(char (*(*buf)), char const ((*fmt)), ...) {
    va_list args = {0};
    va_start_ptr(&(args), &(fmt));
    ullong cap = (ion_buf_cap(*(buf))) - (ion_buf_len(*(buf)));
    int n = (1) + (vsnprintf(ion_buf_end(*(buf), 1), cap, fmt, args));
    va_end_ptr(&(args));
    if ((n) > (cap)) {
        ion_buf_fit((void (**))(buf), (n) + (ion_buf_len(*(buf))), 1);
        va_start_ptr(&(args), &(fmt));
        ullong new_cap = (ion_buf_cap(*(buf))) - (ion_buf_len(*(buf)));
        n = (1) + (vsnprintf(ion_buf_end(*(buf), 1), new_cap, fmt, args));
        assert((n) <= (new_cap));
        va_end_ptr(&(args));
    }
    ion_buf__hdr(*(buf))->len += (n) - (1);
}

ion_Arena ion_allocator;
#line 256
void ion_arena_grow(ion_Arena (*arena), size_t min_size) {
    ullong size = ion_align_up(ion_clamp_min(min_size, ION_ARENA_BLOCK_SIZE), ION_ARENA_ALIGNMENT);
    arena->ptr = ion_xmalloc(size);
    assert((arena->ptr) == (ion_align_down_ptr(arena->ptr, ION_ARENA_ALIGNMENT)));
    arena->end = (arena->ptr) + (size);
    ion_buf_push((void (**))(&(arena->blocks)), &(arena->ptr), sizeof(arena->ptr));
}

void (*ion_arena_alloc(ion_Arena (*arena), size_t size)) {
    if ((size) > ((size_t)(((arena->end) - (arena->ptr))))) {
        ion_arena_grow(arena, size);
        assert((size) <= ((size_t)(((arena->end) - (arena->ptr)))));
    }
    char (*ptr) = arena->ptr;
    arena->ptr = ion_align_up_ptr((arena->ptr) + (size), ION_ARENA_ALIGNMENT);
    assert((arena->ptr) <= (arena->end));
    assert((ptr) == (ion_align_down_ptr(ptr, ION_ARENA_ALIGNMENT)));
    return ptr;
}

void ion_arena_free(ion_Arena (*arena)) {
    void (*end) = ion_buf_end(arena->blocks, sizeof(arena->ptr));
    for (char (*(*it)) = arena->blocks; (it) != (end); (it)++) {
        free(*(it));
    }
    ion_buf_free((void (**))(&(arena->blocks)));
}

#line 286
uint64_t ion_hash_uint64(uint64_t x) {
    x *= 0xff51afd7ed558ccd;
    x ^= (x) >> (32);
    return x;
}

uint64_t ion_hash_ptr(void const ((*ptr))) {
    return ion_hash_uint64((uintptr_t)(ptr));
}

uint64_t ion_hash_mix(uint64_t x, uint64_t y) {
    x ^= y;
    x *= 0xff51afd7ed558ccd;
    x ^= (x) >> (32);
    return x;
}

uint64_t ion_hash_bytes(void const ((*ptr)), size_t len) {
    uint64_t x = 0xcbf29ce484222325;
    char const ((*buf)) = (char const (*))(ptr);
    for (size_t i = 0; (i) < (len); (i)++) {
        x ^= buf[i];
        x *= 0x100000001b3;
        x ^= (x) >> (32);
    }
    return x;
}

#line 321
uint64_t ion_map_get_uint64_from_uint64(ion_Map (*map), uint64_t key) {
    if ((map->len) == (0)) {
        return 0;
    }
    assert(ion_is_pow2(map->cap));
    ullong i = (size_t)(ion_hash_uint64(key));
    assert((map->len) < (map->cap));
    for (;;) {
        i &= (map->cap) - (1);
        if ((map->keys[i]) == (key)) {
            return map->vals[i];
        } else if (!(map->keys[i])) {
            return 0;
        }
        (i)++;
    }
    return 0;
}

void ion_map_grow(ion_Map (*map), size_t new_cap) {
    new_cap = ion_clamp_min(new_cap, 16);
    ion_Map new_map = {.keys = ion_xcalloc(new_cap, sizeof(uint64_t)), .vals = ion_xmalloc((new_cap) * (sizeof(uint64_t))), .cap = new_cap};
    #line 347
    for (size_t i = 0; (i) < (map->cap); (i)++) {
        if (map->keys[i]) {
            ion_map_put_uint64_from_uint64(&(new_map), map->keys[i], map->vals[i]);
        }
    }
    free((void *)(map->keys));
    free(map->vals);
    *(map) = new_map;
}

void ion_map_put_uint64_from_uint64(ion_Map (*map), uint64_t key, uint64_t val) {
    assert(key);
    if (!(val)) {
        return;
    }
    if (((2) * (map->len)) >= (map->cap)) {
        ion_map_grow(map, (2) * (map->cap));
    }
    assert(((2) * (map->len)) < (map->cap));
    assert(ion_is_pow2(map->cap));
    ullong i = (size_t)(ion_hash_uint64(key));
    for (;;) {
        i &= (map->cap) - (1);
        if (!(map->keys[i])) {
            (map->len)++;
            map->keys[i] = key;
            map->vals[i] = val;
            return;
        } else if ((map->keys[i]) == (key)) {
            map->vals[i] = val;
            return;
        }
        (i)++;
    }
}

void (*ion_map_get(ion_Map (*map), void const ((*key)))) {
    return (void *)((uintptr_t)(ion_map_get_uint64_from_uint64(map, (uint64_t)((uintptr_t)(key)))));
}

void ion_map_put(ion_Map (*map), void const ((*key)), void (*val)) {
    ion_map_put_uint64_from_uint64(map, (uint64_t)((uintptr_t)(key)), (uint64_t)((uintptr_t)(val)));
}

void (*ion_map_get_from_uint64(ion_Map (*map), uint64_t key)) {
    return (void *)((uintptr_t)(ion_map_get_uint64_from_uint64(map, key)));
}

void ion_map_put_from_uint64(ion_Map (*map), uint64_t key, void (*val)) {
    ion_map_put_uint64_from_uint64(map, key, (uint64_t)((uintptr_t)(val)));
}

uint64_t ion_map_get_uint64(ion_Map (*map), void (*key)) {
    return ion_map_get_uint64_from_uint64(map, (uint64_t)((uintptr_t)(key)));
}

void ion_map_put_uint64(ion_Map (*map), void (*key), uint64_t val) {
    ion_map_put_uint64_from_uint64(map, (uint64_t)((uintptr_t)(key)), val);
}

ion_Arena ion_intern_arena;
ion_Map ion_interns;
#line 430
char const ((*ion_str_intern_range(char const ((*start)), char const ((*end))))) {
    size_t len = (end) - (start);
    ullong hash = ion_hash_bytes(start, len);
    uint64_t key = (hash ? hash : 1);
    ion_Intern (*intern) = ion_map_get_from_uint64(&(ion_interns), key);
    for (ion_Intern (*it) = intern; it; it = it->next) {
        if (((it->len) == (len)) && ((strncmp(it->str, start, len)) == (0))) {
            return it->str;
        }
    }
    ion_Intern (*new_intern) = ion_arena_alloc(&(ion_intern_arena), ((offsetof(ion_Intern, str)) + (len)) + (1));
    new_intern->len = len;
    new_intern->next = intern;
    memcpy(new_intern->str, start, len);
    new_intern->str[len] = 0;
    ion_map_put_from_uint64(&(ion_interns), key, new_intern);
    return new_intern->str;
}

char const ((*ion_str_intern(char const ((*str))))) {
    return ion_str_intern_range(str, (str) + (strlen(str)));
}

bool ion_str_islower(char const ((*str))) {
    while (*(str)) {
        if ((isalpha(*(str))) && (!(islower(*(str))))) {
            return false;
        }
        (str)++;
    }
    return true;
}

char (*ion_gen_buf) = NULL;
int ion_gen_indent;
ion_SrcPos ion_gen_pos;
char const ((*(*ion_gen_headers_buf)));
char (*ion_gen_preamble_str) = 
    "// Preamble\n"
    "#define __USE_MINGW_ANSI_STDIO 1\n"
    "#ifndef _CRT_SECURE_NO_WARNINGS\n"
    "#define _CRT_SECURE_NO_WARNINGS\n"
    "#endif\n"
    "#ifndef _CRT_NONSTDC_NO_DEPRECATE\n"
    "#define _CRT_NONSTDC_NO_DEPRECATE\n"
    "#endif\n"
    "\n"
    "#if _MSC_VER >= 1900 || __STDC_VERSION__ >= 201112L\n"
    "// Visual Studio 2015 supports enough C99/C11 features for us.\n"
    "#else\n"
    "#error \"C11 support required or Visual Studio 2015 or later\"\n"
    "#endif\n"
    "\n"
    "#ifdef __GNUC__\n"
    "#pragma GCC diagnostic push\n"
    "#pragma GCC diagnostic ignored \"-Wvarargs\"\n"
    "#endif\n"
    "\n"
    "#include <stdbool.h>\n"
    "#include <stdint.h>\n"
    "#include <stddef.h>\n"
    "#include <stdarg.h>\n"
    "#include <assert.h>\n"
    "\n"
    "typedef unsigned char uchar;\n"
    "typedef signed char schar;\n"
    "typedef unsigned short ushort;\n"
    "typedef unsigned int uint;\n"
    "typedef unsigned long ulong;\n"
    "typedef long long llong;\n"
    "typedef unsigned long long ullong;\n"
    "\n"
    "#ifdef _MSC_VER\n"
    "#define alignof(x) __alignof(x)\n"
    "#else\n"
    "#define alignof(x) __alignof__(x)\n"
    "#endif\n"
    "\n"
    "#define va_start_ptr(args, arg) (va_start(*(args), *(arg)))\n"
    "#define va_copy_ptr(dest, src) (va_copy(*(dest), *(src)))\n"
    "#define va_end_ptr(args) (va_end(*(args)))\n"
    "\n"
    "struct Any;\n"
    "static void va_arg_ptr(va_list *args, struct Any any);\n";
char (*ion_gen_postamble_str) = 
    "\n"
    "static void va_arg_ptr(va_list *args, Any any) {\n"
    "    switch (typeid_kind(any.type)) {\n"
    "    case TYPE_BOOL:\n"
    "        *(bool *)any.ptr = (bool)va_arg(*args, int);\n"
    "        break;\n"
    "    case TYPE_CHAR:\n"
    "        *(char *)any.ptr = (char)va_arg(*args, int);\n"
    "        break;\n"
    "    case TYPE_UCHAR:\n"
    "        *(uchar *)any.ptr = (uchar)va_arg(*args, int);\n"
    "        break;\n"
    "    case TYPE_SCHAR:\n"
    "        *(schar *)any.ptr = (schar)va_arg(*args, int);\n"
    "        break;\n"
    "    case TYPE_SHORT:\n"
    "        *(short *)any.ptr = (short)va_arg(*args, int);\n"
    "        break;\n"
    "    case TYPE_USHORT:\n"
    "        *(ushort *)any.ptr = (ushort)va_arg(*args, int);\n"
    "        break;\n"
    "    case TYPE_INT:\n"
    "        *(int *)any.ptr = va_arg(*args, int);\n"
    "        break;\n"
    "    case TYPE_UINT:\n"
    "        *(uint *)any.ptr = va_arg(*args, uint);\n"
    "        break;\n"
    "    case TYPE_LONG:\n"
    "        *(long *)any.ptr = va_arg(*args, long);\n"
    "        break;\n"
    "    case TYPE_ULONG:\n"
    "        *(ulong *)any.ptr = va_arg(*args, ulong);\n"
    "        break;\n"
    "    case TYPE_LLONG:\n"
    "        *(llong *)any.ptr = va_arg(*args, llong);\n"
    "        break;\n"
    "    case TYPE_ULLONG:\n"
    "        *(ullong *)any.ptr = va_arg(*args, ullong);\n"
    "        break;\n"
    "    case TYPE_FLOAT:\n"
    "        *(float *)any.ptr = (float)va_arg(*args, double);\n"
    "        break;\n"
    "    case TYPE_DOUBLE:\n"
    "        *(double *)any.ptr = va_arg(*args, double);\n"
    "        break;\n"
    "    case TYPE_FUNC:\n"
    "    case TYPE_PTR:\n"
    "        *(void **)any.ptr = va_arg(*args, void *);\n"
    "        break;\n"
    "    default:\n"
    "        assert(0 && \"argument type not supported\");\n"
    "        break;\n"
    "    }\n"
    "}\n"
    "\n"
    "#ifdef __GNUC__\n"
    "#pragma GCC diagnostic pop\n"
    "#endif\n";
#line 119 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\gen.ion"
void ion_genln(void) {
    ion_buf_printf(&(ion_gen_buf), "\n"
    "%.*s", (ion_gen_indent) * (4), "                                                                  ");
    #line 121
    (ion_gen_pos.line)++;
}

bool ion_is_incomplete_array_typespec(ion_Typespec (*typespec)) {
    return ((typespec->kind) == (ION_TYPESPEC_ARRAY)) && (!(typespec->num_elems));
}

char (ion_char_to_escape[256]) = {['\0'] = '0', ['\n'] = 'n', ['\r'] = 'r', ['\t'] = 't', ['\v'] = 'v', ['\b'] = 'b', ['\a'] = 'a', ['\\'] = '\\', ['\"'] = '\"', ['\''] = '\''};
#line 141
void ion_gen_char(char c) {
    if (ion_char_to_escape[(uchar)(c)]) {
        ion_buf_printf(&(ion_gen_buf), "\'\\%c\'", ion_char_to_escape[(uchar)(c)]);
    } else if (isprint(c)) {
        ion_buf_printf(&(ion_gen_buf), "\'%c\'", c);
    } else {
        ion_buf_printf(&(ion_gen_buf), "\'\\x%X\'", (uchar)(c));
    }
}

void ion_gen_str(char const ((*str)), bool multiline) {
    if (multiline) {
        (ion_gen_indent)++;
        ion_genln();
    }
    ion_buf_printf(&(ion_gen_buf), "\"");
    while (*(str)) {
        char const ((*start)) = str;
        while (((*(str)) && (isprint(*(str)))) && (!(ion_char_to_escape[(uchar)(*(str))]))) {
            (str)++;
        }
        if ((start) != (str)) {
            ion_buf_printf(&(ion_gen_buf), "%.*s", (str) - (start), start);
        }
        if (*(str)) {
            if (ion_char_to_escape[(uchar)(*(str))]) {
                ion_buf_printf(&(ion_gen_buf), "\\%c", ion_char_to_escape[(uchar)(*(str))]);
                if (((str[0]) == ('\n')) && (str[1])) {
                    ion_buf_printf(&(ion_gen_buf), "\"");
                    ion_genln();
                    #line 170
                    ion_buf_printf(&(ion_gen_buf), "\"");
                }
            } else {
                assert(!(isprint(*(str))));
                ion_buf_printf(&(ion_gen_buf), "\\x%X", (uchar)(*(str)));
            }
            (str)++;
        }
    }
    ion_buf_printf(&(ion_gen_buf), "\"");
    if (multiline) {
        (ion_gen_indent)--;
    }
}

void ion_gen_sync_pos(ion_SrcPos pos) {
    if (((ion_gen_pos.line) != (pos.line)) || ((ion_gen_pos.name) != (pos.name))) {
        ion_genln();
        #line 187
        ion_buf_printf(&(ion_gen_buf), "#line %d", pos.line);
        if ((ion_gen_pos.name) != (pos.name)) {
            ion_buf_printf(&(ion_gen_buf), " ");
            ion_gen_str(pos.name, false);
        }
        ion_gen_pos = pos;
    }
}

char const ((*ion_cdecl_paren(char const ((*str)), char c))) {
    return ((c) && ((c) != ('[')) ? (char const (*))(ion_strf("(%s)", str)) : str);
}

char const ((*ion_cdecl_name(ion_Type (*type)))) {
    char const ((*type_name)) = ion_type_names[type->kind];
    if (type_name) {
        return type_name;
    } else {
        assert(type->sym);
        return ion_get_gen_name(type->sym);
    }
}

char (*ion_type_to_cdecl(ion_Type (*type), char const ((*str)))) {
    switch (type->kind) {
    case ION_CMPL_TYPE_PTR: {
        return ion_type_to_cdecl(type->base, ion_cdecl_paren(ion_strf("*%s", str), *(str)));
        break;
    }
    case ION_CMPL_TYPE_CONST: {
        #line 215
        return ion_type_to_cdecl(type->base, ion_strf("const %s", ion_cdecl_paren(str, *(str))));
        break;
    }
    case ION_CMPL_TYPE_ARRAY: {
        #line 217
        if ((type->num_elems) == (0)) {
            return ion_type_to_cdecl(type->base, ion_cdecl_paren(ion_strf("%s[]", str), *(str)));
        } else {
            return ion_type_to_cdecl(type->base, ion_cdecl_paren(ion_strf("%s[%zu]", str, type->num_elems), *(str)));
        }
        break;
    }
    case ION_CMPL_TYPE_FUNC: {
        #line 222
        {
            char (*result) = NULL;
            ion_buf_printf(&(result), "(*%s)(", str);
            if ((type->function.num_params) == (0)) {
                ion_buf_printf(&(result), "void");
            } else {
                for (size_t i = 0; (i) < (type->function.num_params); (i)++) {
                    ion_buf_printf(&(result), "%s%s", ((i) == (0) ? "" : ", "), ion_type_to_cdecl(type->function.params[i], ""));
                }
            }
            if (type->function.has_varargs) {
                ion_buf_printf(&(result), ", ...");
            }
            ion_buf_printf(&(result), ")");
            return ion_type_to_cdecl(type->function.ret, result);
        }
        break;
    }
    default: {
        #line 239
        return ion_strf("%s%s%s", ion_cdecl_name(type), (*(str) ? " " : ""), str);
        break;
    }
    }
}

#line 243
char const ((*ion_gen_expr_str(ion_Expr (*expr)))) {
    char (*temp) = ion_gen_buf;
    ion_gen_buf = NULL;
    ion_gen_expr(expr);
    char (*result) = ion_gen_buf;
    ion_gen_buf = temp;
    return result;
}

ion_Map ion_gen_name_map;
#line 254
char const ((*ion_get_gen_name_or_default(void const ((*ptr)), char const ((*default_name))))) {
    char const ((*name)) = ion_map_get(&(ion_gen_name_map), ptr);
    if (!(name)) {
        ion_Sym (*sym) = ion_get_resolved_sym(ptr);
        if (sym) {
            if (sym->external_name) {
                name = sym->external_name;
            } else if (sym->home_package->external_name) {
                char const ((*external_name)) = sym->home_package->external_name;
                char (buf[256]) = {0};
                if ((sym->kind) == (ION_SYM_CONST)) {
                    char (*ptr2) = buf;
                    for (char const ((*str)) = external_name; (*(str)) && ((ptr2) < (((buf) + (sizeof(buf))) - (1))); (str)++) {
                        *(ptr2) = toupper(*(str));
                        (ptr2)++;
                    }
                    *(ptr2) = 0;
                    if ((ptr2) < ((buf) + (sizeof(buf)))) {
                        external_name = buf;
                    }
                }
                name = ion_strf("%s%s", external_name, sym->name);
            } else {
                name = sym->name;
            }
        } else {
            assert(default_name);
            name = default_name;
        }
        ion_map_put(&(ion_gen_name_map), ptr, (void *)(name));
    }
    return name;
}

char const ((*ion_get_gen_name(void const ((*ptr))))) {
    return ion_get_gen_name_or_default(ptr, "ERROR");
}

char (*ion_typespec_to_cdecl(ion_Typespec (*typespec), char const ((*str)))) {
    if (!(typespec)) {
        return ion_strf("void%s%s", (*(str) ? " " : ""), str);
    }
    switch (typespec->kind) {
    case ION_TYPESPEC_NAME: {
        return ion_strf("%s%s%s", ion_get_gen_name_or_default(typespec, typespec->name), (*(str) ? " " : ""), str);
        break;
    }
    case ION_TYPESPEC_PTR: {
        #line 300
        return ion_typespec_to_cdecl(typespec->base, ion_cdecl_paren(ion_strf("*%s", str), *(str)));
        break;
    }
    case ION_TYPESPEC_CONST: {
        #line 302
        return ion_typespec_to_cdecl(typespec->base, ion_strf("const %s", ion_cdecl_paren(str, *(str))));
        break;
    }
    case ION_TYPESPEC_ARRAY: {
        #line 304
        if ((typespec->num_elems) == (0)) {
            return ion_typespec_to_cdecl(typespec->base, ion_cdecl_paren(ion_strf("%s[]", str), *(str)));
        } else {
            return ion_typespec_to_cdecl(typespec->base, ion_cdecl_paren(ion_strf("%s[%s]", str, ion_gen_expr_str(typespec->num_elems)), *(str)));
        }
        break;
    }
    case ION_TYPESPEC_FUNC: {
        #line 309
        {
            char (*result) = NULL;
            ion_buf_printf(&(result), "(*%s)(", str);
            if ((typespec->function.num_args) == (0)) {
                ion_buf_printf(&(result), "void");
            } else {
                for (size_t i = 0; (i) < (typespec->function.num_args); (i)++) {
                    ion_buf_printf(&(result), "%s%s", ((i) == (0) ? "" : ", "), ion_typespec_to_cdecl(typespec->function.args[i], ""));
                }
            }
            if (typespec->function.has_varargs) {
                ion_buf_printf(&(result), ", ...");
            }
            ion_buf_printf(&(result), ")");
            return ion_typespec_to_cdecl(typespec->function.ret, result);
        }
        break;
    }
    default: {
        #line 326
        assert(0);
        return NULL;
        break;
    }
    }
}

#line 331
void ion_gen_func_decl(ion_Decl (*decl)) {
    assert((decl->kind) == (ION_DECL_FUNC));
    char (*result) = NULL;
    ion_buf_printf(&(result), "%s(", ion_get_gen_name(decl));
    if ((decl->function.num_params) == (0)) {
        ion_buf_printf(&(result), "void");
    } else {
        for (size_t i = 0; (i) < (decl->function.num_params); (i)++) {
            ion_FuncParam param = decl->function.params[i];
            if ((i) != (0)) {
                ion_buf_printf(&(result), ", ");
            }
            ion_buf_printf(&(result), "%s", ion_typespec_to_cdecl(param.type, param.name));
        }
    }
    if (decl->function.has_varargs) {
        ion_buf_printf(&(result), ", ...");
    }
    ion_buf_printf(&(result), ")");
    ion_gen_sync_pos(decl->pos);
    if (decl->function.ret_type) {
        ion_genln();
        #line 352
        ion_buf_printf(&(ion_gen_buf), "%s", ion_typespec_to_cdecl(decl->function.ret_type, result));
    } else {
        ion_genln();
        #line 354
        ion_buf_printf(&(ion_gen_buf), "void %s", result);
    }
}

bool ion_gen_reachable(ion_Sym (*sym)) {
    return (ion_flag_fullgen) || ((sym->reachable) == (ION_REACHABLE_NATURAL));
}

void ion_gen_forward_decls(void) {
    for (ion_Sym (*(*it)) = ion_sorted_syms; (it) != (ion_buf_end(ion_sorted_syms, sizeof(*(ion_sorted_syms)))); (it)++) {
        ion_Sym (*sym) = *(it);
        ion_Decl (*decl) = sym->decl;
        if ((!(decl)) || (!(ion_gen_reachable(sym)))) {
            continue;
        }
        if (ion_is_decl_foreign(decl)) {
            continue;
        }
        switch (decl->kind) {
        case ION_DECL_STRUCT:
        case ION_DECL_UNION: {
            #line 374
            {
                char const ((*name)) = ion_get_gen_name(sym);
                ion_genln();
                #line 376
                ion_buf_printf(&(ion_gen_buf), "typedef %s %s %s;", ((decl->kind) == (ION_DECL_STRUCT) ? "struct" : "union"), name, name);
                break;
            }
            break;
        }
        default: {
            #line 381
            break;
            break;
        }
        }
    }
}

#line 386
void ion_gen_aggregate_items(ion_Aggregate (*aggregate)) {
    (ion_gen_indent)++;
    for (size_t i = 0; (i) < (aggregate->num_items); (i)++) {
        ion_AggregateItem item = aggregate->items[i];
        if ((item.kind) == (ION_AGGREGATE_ITEM_FIELD)) {
            for (size_t j = 0; (j) < (item.num_names); (j)++) {
                ion_gen_sync_pos(item.pos);
                ion_genln();
                #line 393
                ion_buf_printf(&(ion_gen_buf), "%s;", ion_typespec_to_cdecl(item.type, item.names[j]));
            }
        } else if ((item.kind) == (ION_AGGREGATE_ITEM_SUBAGGREGATE)) {
            ion_genln();
            #line 396
            ion_buf_printf(&(ion_gen_buf), "%s {", ((item.subaggregate->kind) == (ION_AGGREGATE_STRUCT) ? "struct" : "union"));
            ion_gen_aggregate_items(item.subaggregate);
            ion_genln();
            #line 398
            ion_buf_printf(&(ion_gen_buf), "};");
        } else {
            assert(0);
        }
    }
    (ion_gen_indent)--;
}

void ion_gen_aggregate(ion_Decl (*decl)) {
    assert(((decl->kind) == (ION_DECL_STRUCT)) || ((decl->kind) == (ION_DECL_UNION)));
    if (decl->is_incomplete) {
        return;
    }
    ion_genln();
    #line 411
    ion_buf_printf(&(ion_gen_buf), "%s %s {", ((decl->kind) == (ION_DECL_STRUCT) ? "struct" : "union"), ion_get_gen_name(decl));
    ion_gen_aggregate_items(decl->aggregate);
    ion_genln();
    #line 413
    ion_buf_printf(&(ion_gen_buf), "};");
}

void ion_gen_paren_expr(ion_Expr (*expr)) {
    ion_buf_printf(&(ion_gen_buf), "(");
    ion_gen_expr(expr);
    ion_buf_printf(&(ion_gen_buf), ")");
}

void ion_gen_expr_compound(ion_Expr (*expr)) {
    ion_Type (*expected_type) = ion_get_resolved_expected_type(expr);
    if ((expected_type) && (!(ion_is_ptr_type(expected_type)))) {
        ion_buf_printf(&(ion_gen_buf), "{");
    } else if (expr->compound.type) {
        ion_buf_printf(&(ion_gen_buf), "(%s){", ion_typespec_to_cdecl(expr->compound.type, ""));
    } else {
        ion_buf_printf(&(ion_gen_buf), "(%s){", ion_type_to_cdecl(ion_get_resolved_type(expr), ""));
    }
    for (size_t i = 0; (i) < (expr->compound.num_fields); (i)++) {
        if ((i) != (0)) {
            ion_buf_printf(&(ion_gen_buf), ", ");
        }
        ion_CompoundField field = expr->compound.fields[i];
        if ((field.kind) == (ION_FIELD_NAME)) {
            ion_buf_printf(&(ion_gen_buf), ".%s = ", field.name);
        } else if ((field.kind) == (ION_FIELD_INDEX)) {
            ion_buf_printf(&(ion_gen_buf), "[");
            ion_gen_expr(field.index);
            ion_buf_printf(&(ion_gen_buf), "] = ");
        }
        ion_gen_expr(field.init);
    }
    if ((expr->compound.num_fields) == (0)) {
        ion_buf_printf(&(ion_gen_buf), "0");
    }
    ion_buf_printf(&(ion_gen_buf), "}");
}

char const ((*(ion_typeid_kind_names[ION_NUM_CMPL_TYPE_KINDS]))) = {[ION_CMPL_TYPE_NONE] = "TYPE_NONE", [ION_CMPL_TYPE_VOID] = "TYPE_VOID", [ION_CMPL_TYPE_BOOL] = "TYPE_BOOL", [ION_CMPL_TYPE_CHAR] = "TYPE_CHAR", [ION_CMPL_TYPE_UCHAR] = "TYPE_UCHAR", [ION_CMPL_TYPE_SCHAR] = "TYPE_SCHAR", [ION_CMPL_TYPE_SHORT] = "TYPE_SHORT", [ION_CMPL_TYPE_USHORT] = "TYPE_USHORT", [ION_CMPL_TYPE_INT] = "TYPE_INT", [ION_CMPL_TYPE_UINT] = "TYPE_UINT", [ION_CMPL_TYPE_LONG] = "TYPE_LONG", [ION_CMPL_TYPE_ULONG] = "TYPE_ULONG", [ION_CMPL_TYPE_LLONG] = "TYPE_LLONG", [ION_CMPL_TYPE_ULLONG] = "TYPE_ULLONG", [ION_CMPL_TYPE_FLOAT] = "TYPE_FLOAT", [ION_CMPL_TYPE_DOUBLE] = "TYPE_DOUBLE", [ION_CMPL_TYPE_CONST] = "TYPE_CONST", [ION_CMPL_TYPE_PTR] = "TYPE_PTR", [ION_CMPL_TYPE_ARRAY] = "TYPE_ARRAY", [ION_CMPL_TYPE_STRUCT] = "TYPE_STRUCT", [ION_CMPL_TYPE_UNION] = "TYPE_UNION", [ION_CMPL_TYPE_FUNC] = "TYPE_FUNC"};
#line 476
char const ((*ion_typeid_kind_name(ion_Type (*type)))) {
    if ((type->kind) < (ION_NUM_CMPL_TYPE_KINDS)) {
        char const ((*name)) = ion_typeid_kind_names[type->kind];
        if (name) {
            return name;
        }
    }
    return "TYPE_NONE";
}

bool ion_is_excluded_typeinfo(ion_Type (*type)) {
    while ((((type->kind) == (ION_CMPL_TYPE_ARRAY)) || ((type->kind) == (ION_CMPL_TYPE_CONST))) || ((type->kind) == (ION_CMPL_TYPE_PTR))) {
        type = type->base;
    }
    if (type->sym) {
        return !(ion_gen_reachable(type->sym));
    } else {
        return (!(type->sym)) && ((((type->kind) == (ION_CMPL_TYPE_STRUCT)) || ((type->kind) == (ION_CMPL_TYPE_UNION))));
    }
}

void ion_gen_typeid(ion_Type (*type)) {
    if (((type->size) == (0)) || (ion_is_excluded_typeinfo(type))) {
        ion_buf_printf(&(ion_gen_buf), "TYPEID0(%d, %s)", type->typeid, ion_typeid_kind_name(type));
    } else {
        ion_buf_printf(&(ion_gen_buf), "TYPEID(%d, %s, %s)", type->typeid, ion_typeid_kind_name(type), ion_type_to_cdecl(type, ""));
    }
}

void ion_gen_expr(ion_Expr (*expr)) {
    switch (expr->kind) {
    case ION_EXPR_PAREN: {
        ion_buf_printf(&(ion_gen_buf), "(");
        ion_gen_expr(expr->paren.expr);
        ion_buf_printf(&(ion_gen_buf), ")");
        break;
    }
    case ION_EXPR_INT: {
        #line 511
        {
            char const ((*suffix_name)) = ion_token_suffix_names[expr->int_lit.suffix];
            switch (expr->int_lit.mod) {
            case ION_MOD_BIN:
            case ION_MOD_HEX: {
                ion_buf_printf(&(ion_gen_buf), "0x%llx%s", expr->int_lit.val, suffix_name);
                break;
            }
            case ION_MOD_OCT: {
                #line 518
                ion_buf_printf(&(ion_gen_buf), "0%llo%s", expr->int_lit.val, suffix_name);
                break;
            }
            case ION_MOD_CHAR: {
                #line 520
                ion_gen_char((char)(expr->int_lit.val));
                break;
            }
            default: {
                #line 522
                ion_buf_printf(&(ion_gen_buf), "%llu%s", expr->int_lit.val, suffix_name);
                break;
            }
            }
        }
        break;
    }
    case ION_EXPR_FLOAT: {
        #line 525
        {
            int is_double = (expr->float_lit.suffix) == (ION_SUFFIX_D);
            size_t len = (expr->float_lit.end) - (expr->float_lit.start);
            ion_buf_printf(&(ion_gen_buf), "%.*s%s", (is_double ? (len) - (1) : len), expr->float_lit.start, (is_double ? "" : "f"));
        }
        break;
    }
    case ION_EXPR_STR: {
        #line 531
        ion_gen_str(expr->str_lit.val, (expr->str_lit.mod) == (ION_MOD_MULTILINE));
        break;
    }
    case ION_EXPR_NAME: {
        #line 533
        ion_buf_printf(&(ion_gen_buf), "%s", ion_get_gen_name_or_default(expr, expr->name));
        break;
    }
    case ION_EXPR_CAST: {
        #line 535
        ion_buf_printf(&(ion_gen_buf), "(%s)(", ion_typespec_to_cdecl(expr->cast.type, ""));
        ion_gen_expr(expr->cast.expr);
        ion_buf_printf(&(ion_gen_buf), ")");
        break;
    }
    case ION_EXPR_CALL: {
        #line 538
        {
            ion_Sym (*sym) = ion_get_resolved_sym(expr->call.expr);
            if ((sym) && ((sym->kind) == (ION_SYM_TYPE))) {
                ion_buf_printf(&(ion_gen_buf), "(%s)", ion_get_gen_name(sym));
            } else {
                ion_gen_expr(expr->call.expr);
            }
            ion_buf_printf(&(ion_gen_buf), "(");
            for (size_t i = 0; (i) < (expr->call.num_args); (i)++) {
                if ((i) != (0)) {
                    ion_buf_printf(&(ion_gen_buf), ", ");
                }
                ion_gen_expr(expr->call.args[i]);
            }
            ion_buf_printf(&(ion_gen_buf), ")");
        }
        break;
    }
    case ION_EXPR_INDEX: {
        #line 555
        ion_gen_expr(expr->index.expr);
        ion_buf_printf(&(ion_gen_buf), "[");
        ion_gen_expr(expr->index.index);
        ion_buf_printf(&(ion_gen_buf), "]");
        break;
    }
    case ION_EXPR_FIELD: {
        #line 559
        {
            ion_Sym (*sym) = ion_get_resolved_sym(expr);
            if (sym) {
                ion_buf_printf(&(ion_gen_buf), "(%s)", ion_get_gen_name(sym));
            } else {
                ion_gen_expr(expr->field.expr);
                ion_Type (*type) = ion_unqualify_type(ion_get_resolved_type(expr->field.expr));
                ion_buf_printf(&(ion_gen_buf), "%s%s", ((type->kind) == (ION_CMPL_TYPE_PTR) ? "->" : "."), expr->field.name);
            }
        }
        break;
    }
    case ION_EXPR_COMPOUND: {
        #line 570
        ion_gen_expr_compound(expr);
        break;
    }
    case ION_EXPR_UNARY: {
        #line 572
        ion_buf_printf(&(ion_gen_buf), "%s(", ion_token_kind_name(expr->unary.op));
        ion_gen_expr(expr->unary.expr);
        ion_buf_printf(&(ion_gen_buf), ")");
        break;
    }
    case ION_EXPR_BINARY: {
        #line 576
        ion_buf_printf(&(ion_gen_buf), "(");
        ion_gen_expr(expr->binary.left);
        ion_buf_printf(&(ion_gen_buf), ") %s (", ion_token_kind_name(expr->binary.op));
        ion_gen_expr(expr->binary.right);
        ion_buf_printf(&(ion_gen_buf), ")");
        break;
    }
    case ION_EXPR_TERNARY: {
        #line 582
        ion_buf_printf(&(ion_gen_buf), "(");
        ion_gen_expr(expr->ternary.cond);
        ion_buf_printf(&(ion_gen_buf), " ? ");
        ion_gen_expr(expr->ternary.then_expr);
        ion_buf_printf(&(ion_gen_buf), " : ");
        ion_gen_expr(expr->ternary.else_expr);
        ion_buf_printf(&(ion_gen_buf), ")");
        break;
    }
    case ION_EXPR_SIZEOF_EXPR: {
        #line 590
        ion_buf_printf(&(ion_gen_buf), "sizeof(");
        ion_gen_expr(expr->sizeof_expr);
        ion_buf_printf(&(ion_gen_buf), ")");
        break;
    }
    case ION_EXPR_SIZEOF_TYPE: {
        #line 594
        ion_buf_printf(&(ion_gen_buf), "sizeof(%s)", ion_typespec_to_cdecl(expr->sizeof_type, ""));
        break;
    }
    case ION_EXPR_ALIGNOF_EXPR: {
        #line 596
        ion_buf_printf(&(ion_gen_buf), "alignof(%s)", ion_type_to_cdecl(ion_get_resolved_type(expr->alignof_expr), ""));
        break;
    }
    case ION_EXPR_ALIGNOF_TYPE: {
        #line 598
        ion_buf_printf(&(ion_gen_buf), "alignof(%s)", ion_typespec_to_cdecl(expr->alignof_type, ""));
        break;
    }
    case ION_EXPR_TYPEOF_EXPR: {
        #line 599
        {
            ion_Type (*type) = ion_get_resolved_type(expr->typeof_expr);
            assert(type->typeid);
            ion_gen_typeid(type);
        }
        break;
    }
    case ION_EXPR_TYPEOF_TYPE: {
        #line 604
        {
            ion_Type (*type) = ion_get_resolved_type(expr->typeof_type);
            assert(type->typeid);
            ion_gen_typeid(type);
        }
        break;
    }
    case ION_EXPR_OFFSETOF: {
        #line 610
        ion_buf_printf(&(ion_gen_buf), "offsetof(%s, %s)", ion_typespec_to_cdecl(expr->offsetof_field.type, ""), expr->offsetof_field.name);
        break;
    }
    case ION_EXPR_MODIFY: {
        #line 612
        if (!(expr->modify.post)) {
            ion_buf_printf(&(ion_gen_buf), "%s", ion_token_kind_name(expr->modify.op));
        }
        ion_gen_paren_expr(expr->modify.expr);
        if (expr->modify.post) {
            ion_buf_printf(&(ion_gen_buf), "%s", ion_token_kind_name(expr->modify.op));
        }
        break;
    }
    default: {
        #line 620
        assert(0);
        break;
    }
    }
}

#line 624
void ion_gen_stmt_block(ion_StmtList block) {
    ion_buf_printf(&(ion_gen_buf), "{");
    (ion_gen_indent)++;
    for (size_t i = 0; (i) < (block.num_stmts); (i)++) {
        ion_gen_stmt(block.stmts[i]);
    }
    (ion_gen_indent)--;
    ion_genln();
    #line 631
    ion_buf_printf(&(ion_gen_buf), "}");
}

void ion_gen_simple_stmt(ion_Stmt (*stmt)) {
    switch (stmt->kind) {
    case ION_STMT_EXPR: {
        ion_gen_expr(stmt->expr);
        break;
    }
    case ION_STMT_INIT: {
        #line 639
        if (stmt->init.type) {
            ion_Typespec (*init_typespec) = stmt->init.type;
            if (ion_is_incomplete_array_typespec(stmt->init.type)) {
                ion_Expr (*size) = ion_new_expr_int(init_typespec->pos, ion_get_resolved_type(stmt->init.expr)->num_elems, 0, 0);
                init_typespec = ion_new_typespec_array(init_typespec->pos, init_typespec->base, size);
            }
            ion_buf_printf(&(ion_gen_buf), "%s = ", ion_typespec_to_cdecl(stmt->init.type, stmt->init.name));
            if (stmt->init.expr) {
                ion_gen_expr(stmt->init.expr);
            } else {
                ion_buf_printf(&(ion_gen_buf), "{0}");
            }
        } else {
            ion_buf_printf(&(ion_gen_buf), "%s = ", ion_type_to_cdecl(ion_unqualify_type(ion_get_resolved_type(stmt->init.expr)), stmt->init.name));
            ion_gen_expr(stmt->init.expr);
        }
        break;
    }
    case ION_STMT_ASSIGN: {
        #line 656
        ion_gen_expr(stmt->assign.left);
        ion_buf_printf(&(ion_gen_buf), " %s ", ion_token_kind_name(stmt->assign.op));
        ion_gen_expr(stmt->assign.right);
        break;
    }
    default: {
        #line 660
        assert(0);
        break;
    }
    }
}

#line 664
bool ion_is_char_lit(ion_Expr (*expr)) {
    return ((expr->kind) == (ION_EXPR_INT)) && ((expr->int_lit.mod) == (ION_MOD_CHAR));
}

void ion_gen_stmt(ion_Stmt (*stmt)) {
    ion_gen_sync_pos(stmt->pos);
    switch (stmt->kind) {
    case ION_STMT_RETURN: {
        ion_genln();
        #line 672
        ion_buf_printf(&(ion_gen_buf), "return");
        if (stmt->expr) {
            ion_buf_printf(&(ion_gen_buf), " ");
            ion_gen_expr(stmt->expr);
        }
        ion_buf_printf(&(ion_gen_buf), ";");
        break;
    }
    case ION_STMT_BREAK: {
        #line 679
        ion_genln();
        #line 679
        ion_buf_printf(&(ion_gen_buf), "break;");
        break;
    }
    case ION_STMT_CONTINUE: {
        #line 681
        ion_genln();
        #line 681
        ion_buf_printf(&(ion_gen_buf), "continue;");
        break;
    }
    case ION_STMT_BLOCK: {
        #line 683
        ion_genln();
        ion_gen_stmt_block(stmt->block);
        break;
    }
    case ION_STMT_NOTE: {
        #line 686
        if ((stmt->note.name) == (ion_assert_name)) {
            ion_genln();
            #line 687
            ion_buf_printf(&(ion_gen_buf), "assert(");
            assert((stmt->note.num_args) == (1));
            ion_gen_expr(stmt->note.args[0].expr);
            ion_buf_printf(&(ion_gen_buf), ");");
        }
        break;
    }
    case ION_STMT_IF: {
        #line 693
        if (stmt->if_stmt.init) {
            ion_genln();
            #line 694
            ion_buf_printf(&(ion_gen_buf), "{");
            (ion_gen_indent)++;
            ion_gen_stmt(stmt->if_stmt.init);
        }
        ion_gen_sync_pos(stmt->pos);
        ion_genln();
        #line 699
        ion_buf_printf(&(ion_gen_buf), "if (");
        if (stmt->if_stmt.cond) {
            ion_gen_expr(stmt->if_stmt.cond);
        } else {
            ion_buf_printf(&(ion_gen_buf), "%s", stmt->if_stmt.init->init.name);
        }
        ion_buf_printf(&(ion_gen_buf), ") ");
        ion_gen_stmt_block(stmt->if_stmt.then_block);
        for (size_t i = 0; (i) < (stmt->if_stmt.num_elseifs); (i)++) {
            ion_ElseIf elseif = stmt->if_stmt.elseifs[i];
            ion_buf_printf(&(ion_gen_buf), " else if (");
            ion_gen_expr(elseif.cond);
            ion_buf_printf(&(ion_gen_buf), ") ");
            ion_gen_stmt_block(elseif.block);
        }
        if (stmt->if_stmt.else_block.stmts) {
            ion_buf_printf(&(ion_gen_buf), " else ");
            ion_gen_stmt_block(stmt->if_stmt.else_block);
        } else {
            ion_Note (*complete_note) = ion_get_stmt_note(stmt, ion_complete_name);
            if (complete_note) {
                ion_buf_printf(&(ion_gen_buf), " else {");
                (ion_gen_indent)++;
                ion_gen_sync_pos(complete_note->pos);
                ion_genln();
                #line 723
                ion_buf_printf(&(ion_gen_buf), "assert(\"@complete if/elseif chain failed to handle case\" && 0);");
                (ion_gen_indent)--;
                ion_genln();
                #line 725
                ion_buf_printf(&(ion_gen_buf), "}");
            }
        }
        if (stmt->if_stmt.init) {
            (ion_gen_indent)--;
            ion_genln();
            #line 730
            ion_buf_printf(&(ion_gen_buf), "}");
        }
        break;
    }
    case ION_STMT_WHILE: {
        #line 733
        ion_genln();
        #line 733
        ion_buf_printf(&(ion_gen_buf), "while (");
        ion_gen_expr(stmt->while_stmt.cond);
        ion_buf_printf(&(ion_gen_buf), ") ");
        ion_gen_stmt_block(stmt->while_stmt.block);
        break;
    }
    case ION_STMT_DO_WHILE: {
        #line 738
        ion_genln();
        #line 738
        ion_buf_printf(&(ion_gen_buf), "do ");
        ion_gen_stmt_block(stmt->while_stmt.block);
        ion_buf_printf(&(ion_gen_buf), " while (");
        ion_gen_expr(stmt->while_stmt.cond);
        ion_buf_printf(&(ion_gen_buf), ");");
        break;
    }
    case ION_STMT_FOR: {
        #line 744
        ion_genln();
        #line 744
        ion_buf_printf(&(ion_gen_buf), "for (");
        if (stmt->for_stmt.init) {
            ion_gen_simple_stmt(stmt->for_stmt.init);
        }
        ion_buf_printf(&(ion_gen_buf), ";");
        if (stmt->for_stmt.cond) {
            ion_buf_printf(&(ion_gen_buf), " ");
            ion_gen_expr(stmt->for_stmt.cond);
        }
        ion_buf_printf(&(ion_gen_buf), ";");
        if (stmt->for_stmt.next) {
            ion_buf_printf(&(ion_gen_buf), " ");
            ion_gen_simple_stmt(stmt->for_stmt.next);
        }
        ion_buf_printf(&(ion_gen_buf), ") ");
        ion_gen_stmt_block(stmt->for_stmt.block);
        break;
    }
    case ION_STMT_SWITCH: {
        #line 760
        {
            ion_genln();
            #line 761
            ion_buf_printf(&(ion_gen_buf), "switch (");
            ion_gen_expr(stmt->switch_stmt.expr);
            ion_buf_printf(&(ion_gen_buf), ") {");
            bool has_default = false;
            for (size_t i = 0; (i) < (stmt->switch_stmt.num_cases); (i)++) {
                ion_SwitchCase switch_case = stmt->switch_stmt.cases[i];
                for (size_t j = 0; (j) < (switch_case.num_patterns); (j)++) {
                    ion_SwitchCasePattern pattern = switch_case.patterns[j];
                    if (pattern.end) {
                        ion_Val start_val = ion_get_resolved_val(pattern.start);
                        ion_Val end_val = ion_get_resolved_val(pattern.end);
                        if ((ion_is_char_lit(pattern.start)) && (ion_is_char_lit(pattern.end))) {
                            ion_genln();
                            for (int c = (int)(start_val.ll); (c) <= ((int)(end_val.ll)); (c)++) {
                                ion_buf_printf(&(ion_gen_buf), "case ");
                                ion_gen_char(c);
                                ion_buf_printf(&(ion_gen_buf), ": ");
                            }
                        } else {
                            ion_genln();
                            #line 780
                            ion_buf_printf(&(ion_gen_buf), "// ");
                            ion_gen_expr(pattern.start);
                            ion_buf_printf(&(ion_gen_buf), "...");
                            ion_gen_expr(pattern.end);
                            ion_genln();
                            for (llong ll = start_val.ll; (ll) <= (end_val.ll); (ll)++) {
                                ion_buf_printf(&(ion_gen_buf), "case %lld: ", ll);
                            }
                        }
                    } else {
                        ion_genln();
                        #line 790
                        ion_buf_printf(&(ion_gen_buf), "case ");
                        ion_gen_expr(pattern.start);
                        ion_buf_printf(&(ion_gen_buf), ":");
                    }
                }
                if (switch_case.is_default) {
                    has_default = true;
                    ion_genln();
                    #line 797
                    ion_buf_printf(&(ion_gen_buf), "default:");
                }
                ion_buf_printf(&(ion_gen_buf), " ");
                ion_buf_printf(&(ion_gen_buf), "{");
                (ion_gen_indent)++;
                ion_StmtList block = switch_case.block;
                for (size_t j = 0; (j) < (block.num_stmts); (j)++) {
                    ion_gen_stmt(block.stmts[j]);
                }
                ion_genln();
                #line 806
                ion_buf_printf(&(ion_gen_buf), "break;");
                (ion_gen_indent)--;
                ion_genln();
                #line 808
                ion_buf_printf(&(ion_gen_buf), "}");
            }
            if (!(has_default)) {
                ion_Note (*note) = ion_get_stmt_note(stmt, ion_complete_name);
                if (note) {
                    ion_genln();
                    #line 813
                    ion_buf_printf(&(ion_gen_buf), "default:");
                    (ion_gen_indent)++;
                    ion_genln();
                    #line 815
                    ion_buf_printf(&(ion_gen_buf), "assert(\"@complete switch failed to handle case\" && 0);");
                    ion_genln();
                    #line 816
                    ion_buf_printf(&(ion_gen_buf), "break;");
                    (ion_gen_indent)--;
                }
            }
            ion_genln();
            #line 820
            ion_buf_printf(&(ion_gen_buf), "}");
        }
        break;
    }
    case ION_STMT_LABEL: {
        #line 823
        ion_genln();
        #line 823
        ion_buf_printf(&(ion_gen_buf), "%s: ;", stmt->label);
        break;
    }
    case ION_STMT_GOTO: {
        #line 825
        ion_genln();
        #line 825
        ion_buf_printf(&(ion_gen_buf), "goto %s;", stmt->label);
        break;
    }
    default: {
        #line 827
        ion_genln();
        ion_gen_simple_stmt(stmt);
        ion_buf_printf(&(ion_gen_buf), ";");
        break;
    }
    }
}

#line 833
void ion_gen_decl(ion_Sym (*sym)) {
    ion_Decl (*decl) = sym->decl;
    if ((!(decl)) || (ion_is_decl_foreign(decl))) {
        return;
    }
    ion_gen_sync_pos(decl->pos);
    switch (decl->kind) {
    case ION_DECL_CONST: {
        ion_genln();
        #line 841
        ion_buf_printf(&(ion_gen_buf), "#define %s (", ion_get_gen_name(sym));
        if (decl->const_decl.type) {
            ion_buf_printf(&(ion_gen_buf), "(%s)(", ion_typespec_to_cdecl(decl->const_decl.type, ""));
        }
        ion_gen_expr(decl->const_decl.expr);
        if (decl->const_decl.type) {
            ion_buf_printf(&(ion_gen_buf), ")");
        }
        ion_buf_printf(&(ion_gen_buf), ")");
        break;
    }
    case ION_DECL_VAR: {
        #line 851
        ion_genln();
        #line 851
        ion_buf_printf(&(ion_gen_buf), "extern ");
        if ((decl->var_decl.type) && (!(ion_is_incomplete_array_typespec(decl->var_decl.type)))) {
            ion_buf_printf(&(ion_gen_buf), "%s", ion_typespec_to_cdecl(decl->var_decl.type, ion_get_gen_name(sym)));
        } else {
            ion_buf_printf(&(ion_gen_buf), "%s", ion_type_to_cdecl(sym->type, ion_get_gen_name(sym)));
        }
        ion_buf_printf(&(ion_gen_buf), ";");
        break;
    }
    case ION_DECL_FUNC: {
        #line 859
        ion_gen_func_decl(decl);
        ion_buf_printf(&(ion_gen_buf), ";");
        break;
    }
    case ION_DECL_STRUCT:
    case ION_DECL_UNION: {
        #line 863
        ion_gen_aggregate(decl);
        break;
    }
    case ION_DECL_TYPEDEF: {
        #line 865
        ion_genln();
        #line 865
        ion_buf_printf(&(ion_gen_buf), "typedef %s;", ion_typespec_to_cdecl(decl->typedef_decl.type, ion_get_gen_name(sym)));
        break;
    }
    case ION_DECL_ENUM: {
        #line 867
        if (decl->enum_decl.type) {
            ion_genln();
            #line 868
            ion_buf_printf(&(ion_gen_buf), "typedef %s;", ion_typespec_to_cdecl(decl->enum_decl.type, ion_get_gen_name(decl)));
        } else {
            ion_genln();
            #line 870
            ion_buf_printf(&(ion_gen_buf), "typedef int %s;", ion_get_gen_name(decl));
        }
        break;
    }
    case ION_DECL_IMPORT: {
        #line 874
        break;
        break;
    }
    default: {
        #line 876
        assert(0);
        break;
    }
    }
    #line 878
    ion_genln();
}

void ion_gen_sorted_decls(void) {
    for (size_t i = 0; (i) < (ion_buf_len(ion_sorted_syms)); (i)++) {
        if ((ion_sorted_syms[i]->reachable) == (ION_REACHABLE_NATURAL)) {
            ion_gen_decl(ion_sorted_syms[i]);
        }
    }
}

void ion_gen_defs(void) {
    for (ion_Sym (*(*it)) = ion_sorted_syms; (it) != (ion_buf_end(ion_sorted_syms, sizeof(*(ion_sorted_syms)))); (it)++) {
        ion_Sym (*sym) = *(it);
        ion_Decl (*decl) = sym->decl;
        if ((((((sym->state) != (ION_SYM_RESOLVED)) || (!(decl))) || (ion_is_decl_foreign(decl))) || (decl->is_incomplete)) || ((sym->reachable) != (ION_REACHABLE_NATURAL))) {
            continue;
        }
        if ((decl->kind) == (ION_DECL_FUNC)) {
            ion_gen_func_decl(decl);
            ion_buf_printf(&(ion_gen_buf), " ");
            ion_gen_stmt_block(decl->function.block);
            ion_genln();
        } else if ((decl->kind) == (ION_DECL_VAR)) {
            if ((decl->var_decl.type) && (!(ion_is_incomplete_array_typespec(decl->var_decl.type)))) {
                ion_genln();
                #line 903
                ion_buf_printf(&(ion_gen_buf), "%s", ion_typespec_to_cdecl(decl->var_decl.type, ion_get_gen_name(sym)));
            } else {
                ion_genln();
                #line 905
                ion_buf_printf(&(ion_gen_buf), "%s", ion_type_to_cdecl(sym->type, ion_get_gen_name(sym)));
            }
            if (decl->var_decl.expr) {
                ion_buf_printf(&(ion_gen_buf), " = ");
                ion_gen_expr(decl->var_decl.expr);
            }
            ion_buf_printf(&(ion_gen_buf), ";");
        }
    }
}

ion_Map ion_gen_foreign_headers_map;
char const ((*(*ion_gen_foreign_headers_buf)));
#line 919
void ion_add_foreign_header(char const ((*name))) {
    name = ion_str_intern(name);
    if (!(ion_map_get(&(ion_gen_foreign_headers_map), name))) {
        ion_map_put(&(ion_gen_foreign_headers_map), name, (void *)(1));
        ion_buf_push((void (**))(&(ion_gen_foreign_headers_buf)), &(name), sizeof(name));
    }
}

char const ((*(*ion_gen_foreign_sources_buf)));
#line 929
void ion_add_foreign_source(char const ((*name))) {
    char const ((*interned)) = ion_str_intern(name);
    ion_buf_push((void (**))(&(ion_gen_foreign_sources_buf)), &(interned), sizeof(interned));
}

void ion_gen_include(char const ((*path))) {
    ion_genln();
    #line 935
    ion_buf_printf(&(ion_gen_buf), "#include ");
    if ((*(path)) == ('<')) {
        ion_buf_printf(&(ion_gen_buf), "%s", path);
    } else {
        ion_gen_str(path, false);
    }
}

void ion_gen_foreign_headers(void) {
    if (ion_gen_foreign_headers_buf) {
        ion_genln();
        #line 945
        ion_buf_printf(&(ion_gen_buf), "// Foreign header files");
        for (size_t i = 0; (i) < (ion_buf_len(ion_gen_foreign_headers_buf)); (i)++) {
            ion_gen_include(ion_gen_foreign_headers_buf[i]);
        }
    }
}

void ion_gen_foreign_sources(void) {
    for (size_t i = 0; (i) < (ion_buf_len(ion_gen_foreign_sources_buf)); (i)++) {
        ion_gen_include(ion_gen_foreign_sources_buf[i]);
    }
}

char const ((*(*ion_gen_sources_buf)));
#line 960
void ion_put_include_path(char (path[MAX_PATH]), ion_Package (*package), char const ((*filename))) {
    if ((*(filename)) == ('<')) {
        ion_path_copy(path, filename);
    } else {
        ion_path_copy(path, package->full_path);
        ion_path_join(path, filename);
        ion_path_absolute(path);
    }
}

char (*ion_gen_preamble_buf);
char (*ion_gen_postamble_buf);
#line 973
void ion_preprocess_package(ion_Package (*package)) {
    if (!(package->external_name)) {
        char (*external_name) = NULL;
        for (char const ((*ptr)) = package->path; *(ptr); (ptr)++) {
            ion_buf_printf(&(external_name), "%c", ((*(ptr)) == ('/') ? '_' : *(ptr)));
        }
        ion_buf_printf(&(external_name), "_");
        package->external_name = ion_str_intern(external_name);
    }
    char const ((*header_name)) = ion_str_intern("header");
    char const ((*source_name)) = ion_str_intern("source");
    char const ((*preamble_name)) = ion_str_intern("preamble");
    char const ((*postamble_name)) = ion_str_intern("postamble");
    for (size_t i = 0; (i) < (package->num_decls); (i)++) {
        ion_Decl (*decl) = package->decls[i];
        if ((decl->kind) != (ION_DECL_NOTE)) {
            continue;
        }
        ion_Note note = decl->note;
        if ((note.name) == (ion_foreign_name)) {
            for (size_t k = 0; (k) < (note.num_args); (k)++) {
                ion_NoteArg arg = note.args[k];
                ion_Expr (*expr) = note.args[k].expr;
                if ((expr->kind) != (ION_EXPR_STR)) {
                    ion_fatal_error(decl->pos, "#foreign argument must be a string");
                }
                char const ((*str)) = expr->str_lit.val;
                if ((arg.name) == (header_name)) {
                    char (path[MAX_PATH]) = {0};
                    ion_put_include_path(path, package, str);
                    ion_add_foreign_header(path);
                } else if ((arg.name) == (source_name)) {
                    char (path[MAX_PATH]) = {0};
                    ion_put_include_path(path, package, str);
                    ion_add_foreign_source(path);
                } else if ((arg.name) == (preamble_name)) {
                    ion_buf_printf(&(ion_gen_preamble_buf), "%s\n", str);
                } else if ((arg.name) == (postamble_name)) {
                    ion_buf_printf(&(ion_gen_postamble_buf), "%s\n", str);
                } else {
                    ion_fatal_error(decl->pos, "Unknown #foreign named argument \'%s\'", arg.name);
                }
            }
        }
    }
}

void ion_preprocess_packages(void) {
    for (size_t i = 0; (i) < (ion_buf_len(ion_package_list)); (i)++) {
        ion_preprocess_package(ion_package_list[i]);
    }
}

void ion_gen_typeinfo_header(char const ((*kind)), ion_Type (*type)) {
    if ((ion_type_sizeof(type)) == (0)) {
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){%s, .size = 0, .align = 0", kind);
    } else {
        char (*ctype) = ion_type_to_cdecl(type, "");
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){%s, .size = sizeof(%s), .align = alignof(%s)", kind, ctype, ctype);
    }
}

void ion_gen_typeinfo_fields(ion_Type (*type)) {
    (ion_gen_indent)++;
    for (size_t i = 0; (i) < (type->aggregate.num_fields); (i)++) {
        ion_TypeField field = type->aggregate.fields[i];
        ion_genln();
        #line 1039
        ion_buf_printf(&(ion_gen_buf), "{");
        ion_gen_str(field.name, false);
        ion_buf_printf(&(ion_gen_buf), ", .type = ");
        ion_gen_typeid(field.type);
        ion_buf_printf(&(ion_gen_buf), ", .offset = offsetof(%s, %s)},", ion_get_gen_name(type->sym), field.name);
    }
    (ion_gen_indent)--;
}

#line 1054
void ion_gen_typeinfo(ion_Type (*type)) {
    switch (type->kind) {
    case ION_CMPL_TYPE_BOOL: {
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_BOOL, .size = sizeof(bool), .align = sizeof(bool), .name = ");
        ion_gen_str("bool", false);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_CHAR: {
        #line 1061
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_CHAR, .size = sizeof(char), .align = sizeof(char), .name = ");
        ion_gen_str("char", false);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_UCHAR: {
        #line 1065
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_UCHAR, .size = sizeof(uchar), .align = sizeof(uchar), .name = ");
        ion_gen_str("uchar", false);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_SCHAR: {
        #line 1069
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_SCHAR, .size = sizeof(schar), .align = sizeof(schar), .name = ");
        ion_gen_str("schar", false);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_SHORT: {
        #line 1073
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_SHORT, .size = sizeof(short), .align = sizeof(short), .name = ");
        ion_gen_str("short", false);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_USHORT: {
        #line 1077
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_USHORT, .size = sizeof(ushort), .align = sizeof(ushort), .name = ");
        ion_gen_str("ushort", false);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_INT: {
        #line 1081
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_INT, .size = sizeof(int), .align = sizeof(int), .name = ");
        ion_gen_str("int", false);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_UINT: {
        #line 1085
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_UINT, .size = sizeof(uint), .align = sizeof(uint), .name = ");
        ion_gen_str("uint", false);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_LONG: {
        #line 1089
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_LONG, .size = sizeof(long), .align = sizeof(long), .name = ");
        ion_gen_str("long", false);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_ULONG: {
        #line 1093
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_ULONG, .size = sizeof(ulong), .align = sizeof(ulong), .name = ");
        ion_gen_str("ulong", false);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_LLONG: {
        #line 1097
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_LLONG, .size = sizeof(llong), .align = sizeof(llong), .name = ");
        ion_gen_str("llong", false);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_ULLONG: {
        #line 1101
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_ULLONG, .size = sizeof(ullong), .align = sizeof(ullong), .name = ");
        ion_gen_str("ullong", false);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_FLOAT: {
        #line 1105
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_FLOAT, .size = sizeof(float), .align = sizeof(float), .name = ");
        ion_gen_str("float", false);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_DOUBLE: {
        #line 1109
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_DOUBLE, .size = sizeof(double), .align = sizeof(double), .name = ");
        ion_gen_str("double", false);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_VOID: {
        #line 1113
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_VOID, .name = \"void\", .size = 0, .align = 0},");
        break;
    }
    case ION_CMPL_TYPE_PTR: {
        #line 1115
        ion_buf_printf(&(ion_gen_buf), "&(TypeInfo){TYPE_PTR, .size = sizeof(void *), .align = alignof(void *), .base = ");
        ion_gen_typeid(type->base);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_CONST: {
        #line 1119
        ion_gen_typeinfo_header("TYPE_CONST", type);
        ion_buf_printf(&(ion_gen_buf), ", .base = ");
        ion_gen_typeid(type->base);
        ion_buf_printf(&(ion_gen_buf), "},");
        break;
    }
    case ION_CMPL_TYPE_ARRAY: {
        #line 1124
        if (ion_is_incomplete_array_type(type)) {
            ion_buf_printf(&(ion_gen_buf), "NULL, // Incomplete array type");
        } else {
            ion_gen_typeinfo_header("TYPE_ARRAY", type);
            ion_buf_printf(&(ion_gen_buf), ", .base = ");
            ion_gen_typeid(type->base);
            ion_buf_printf(&(ion_gen_buf), ", .count = %d},", type->num_elems);
        }
        break;
    }
    case ION_CMPL_TYPE_STRUCT:
    case ION_CMPL_TYPE_UNION: {
        #line 1134
        ion_gen_typeinfo_header(((type->kind) == (ION_CMPL_TYPE_STRUCT) ? "TYPE_STRUCT" : "TYPE_UNION"), type);
        ion_buf_printf(&(ion_gen_buf), ", .name = ");
        ion_gen_str(ion_get_gen_name(type->sym), false);
        ion_buf_printf(&(ion_gen_buf), ", .num_fields = %d, .fields = (TypeFieldInfo[]) {", type->aggregate.num_fields);
        ion_gen_typeinfo_fields(type);
        ion_genln();
        #line 1139
        ion_buf_printf(&(ion_gen_buf), "}},");
        break;
    }
    case ION_CMPL_TYPE_FUNC: {
        #line 1141
        ion_buf_printf(&(ion_gen_buf), "NULL, // Func");
        break;
    }
    case ION_CMPL_TYPE_ENUM: {
        #line 1143
        ion_buf_printf(&(ion_gen_buf), "NULL, // Enum");
        break;
    }
    case ION_CMPL_TYPE_INCOMPLETE: {
        #line 1145
        ion_buf_printf(&(ion_gen_buf), "NULL, // Incomplete: %s", ion_get_gen_name(type->sym));
        break;
    }
    default: {
        #line 1147
        ion_buf_printf(&(ion_gen_buf), "NULL, // Unhandled");
        break;
    }
    }
}

void ion_gen_typeinfos(void) {
    ion_genln();
    #line 1154
    ion_buf_printf(&(ion_gen_buf), "#define TYPEID0(index, kind) ((ullong)(index) | ((ullong)(kind) << 24))");
    ion_genln();
    #line 1155
    ion_buf_printf(&(ion_gen_buf), "#define TYPEID(index, kind, ...) ((ullong)(index) | ((ullong)sizeof(__VA_ARGS__) << 32) | ((ullong)(kind) << 24))");
    ion_genln();
    if (ion_flag_notypeinfo) {
        ion_genln();
        #line 1158
        ion_buf_printf(&(ion_gen_buf), "int num_typeinfos;");
        ion_genln();
        #line 1159
        ion_buf_printf(&(ion_gen_buf), "const TypeInfo **typeinfos;");
    } else {
        int num_typeinfos = ion_next_typeid;
        ion_genln();
        #line 1162
        ion_buf_printf(&(ion_gen_buf), "const TypeInfo *typeinfo_table[%d] = {", num_typeinfos);
        (ion_gen_indent)++;
        for (int typeid = 0; (typeid) < (num_typeinfos); (typeid)++) {
            ion_genln();
            #line 1165
            ion_buf_printf(&(ion_gen_buf), "[%d] = ", typeid);
            ion_Type (*type) = ion_get_type_from_typeid(typeid);
            if ((type) && (!(ion_is_excluded_typeinfo(type)))) {
                ion_gen_typeinfo(type);
            } else {
                ion_buf_printf(&(ion_gen_buf), "NULL, // No associated type");
            }
        }
        (ion_gen_indent)--;
        ion_genln();
        #line 1174
        ion_buf_printf(&(ion_gen_buf), "};");
        ion_genln();
        ion_genln();
        #line 1176
        ion_buf_printf(&(ion_gen_buf), "int num_typeinfos = %d;", num_typeinfos);
        ion_genln();
        #line 1177
        ion_buf_printf(&(ion_gen_buf), "const TypeInfo **typeinfos = (const TypeInfo **)typeinfo_table;");
    }
}

void ion_gen_package_external_names(void) {
    for (size_t i = 0; (i) < (ion_buf_len(ion_package_list)); (i)++) {
    }
}

void ion_gen_preamble(void) {
    ion_buf_printf(&(ion_gen_buf), "%s", ion_gen_preamble_str);
    if (ion_gen_preamble_buf) {
        ion_genln();
        ion_genln();
        #line 1190
        ion_buf_printf(&(ion_gen_buf), "// Foreign preamble");
        ion_genln();
        #line 1191
        ion_buf_printf(&(ion_gen_buf), "%s", ion_gen_preamble_buf);
    }
}

void ion_gen_postamble(void) {
    ion_buf_printf(&(ion_gen_buf), "%s", ion_gen_postamble_str);
    if (ion_gen_postamble_buf) {
        ion_genln();
        ion_genln();
        #line 1199
        ion_buf_printf(&(ion_gen_buf), "// Foreign postamble");
        ion_genln();
        #line 1200
        ion_buf_printf(&(ion_gen_buf), "%s", ion_gen_postamble_buf);
    }
}

void ion_gen_all(void) {
    ion_preprocess_packages();
    ion_gen_buf = NULL;
    ion_gen_preamble();
    ion_gen_foreign_headers();
    ion_genln();
    ion_genln();
    #line 1210
    ion_buf_printf(&(ion_gen_buf), "// Forward declarations");
    ion_gen_forward_decls();
    ion_genln();
    ion_genln();
    #line 1213
    ion_buf_printf(&(ion_gen_buf), "// Sorted declarations");
    ion_gen_sorted_decls();
    ion_genln();
    #line 1215
    ion_buf_printf(&(ion_gen_buf), "// Typeinfo");
    ion_gen_typeinfos();
    ion_genln();
    ion_genln();
    #line 1218
    ion_buf_printf(&(ion_gen_buf), "// Definitions");
    ion_gen_defs();
    ion_genln();
    #line 1220
    ion_buf_printf(&(ion_gen_buf), "// Foreign source files");
    ion_gen_foreign_sources();
    ion_genln();
    ion_gen_postamble();
}

char const ((*(ion_static_package_search_paths[ION_MAX_SEARCH_PATHS])));
char const ((*(*ion_package_search_paths))) = ion_static_package_search_paths;
int ion_num_package_search_paths;
#line 6 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\ion.ion"
void ion_add_package_search_path(char const ((*path))) {
    if (ion_flag_verbose) {
        printf("Adding package search path %s\n", path);
    }
    ion_package_search_paths[(ion_num_package_search_paths)++] = ion_str_intern(path);
}

void ion_add_package_search_path_range(char const ((*start)), char const ((*end))) {
    char (path[MAX_PATH]) = {0};
    size_t len = ion_clamp_max((end) - (start), (MAX_PATH) - (1));
    memcpy(path, start, len);
    path[len] = 0;
    ion_add_package_search_path(path);
}

void ion_init_package_search_paths(void) {
    char (*ionhome_var) = getenv("IONHOME");
    if (!(ionhome_var)) {
        printf("error: Set the environment variable IONHOME to the Ion home directory (where system_packages is located)\n");
        exit(1);
    }
    char (path[MAX_PATH]) = {0};
    ion_path_copy(path, ionhome_var);
    ion_path_join(path, "system_packages");
    ion_add_package_search_path(path);
    ion_add_package_search_path(".");
    char (*ionpath_var) = getenv("IONPATH");
    if (ionpath_var) {
        char (*start) = ionpath_var;
        for (char (*ptr) = ionpath_var; *(ptr); (ptr)++) {
            if ((*(ptr)) == (';')) {
                ion_add_package_search_path_range(start, ptr);
                start = (ptr) + (1);
            }
        }
        if (*(start)) {
            ion_add_package_search_path(start);
        }
    }
}

void ion_init_compiler(void) {
    ion_init_target();
    ion_init_package_search_paths();
    ion_init_keywords();
    ion_init_builtin_types();
    ion_map_put(&(ion_decl_note_names), ion_declare_note_name, (void *)(1));
}

void ion_parse_env_vars(void) {
    char (*ionos_var) = getenv("IONOS");
    if (ionos_var) {
        int os = ion_get_os(ionos_var);
        if ((os) == (-(1))) {
            printf("Unknown target operating system in IONOS environment variable: %s\n", ionos_var);
        } else {
            ion_target_os = os;
        }
    }
    char (*ionarch_var) = getenv("IONARCH");
    if (ionarch_var) {
        int arch = ion_get_arch(ionarch_var);
        if ((arch) == (-(1))) {
            printf("Unknown target architecture in IONARCH environment variable: %s\n", ionarch_var);
        } else {
            ion_target_arch = arch;
        }
    }
}

int ion_ion_main(int argc, char const ((*(*argv))), void (*gen_all)(void), char const ((*extension))) {
    ion_parse_env_vars();
    char const ((*output_name)) = {0};
    bool flag_check = false;
    ion_add_flag_str("o", &(output_name), "file", "Output file (default: out_<main-package>.c)");
    ion_add_flag_enum("os", &(ion_target_os), "Target operating system", ion_os_names, ION_NUM_OSES);
    ion_add_flag_enum("arch", &(ion_target_arch), "Target machine architecture", ion_arch_names, ION_NUM_ARCHES);
    ion_add_flag_bool("check", &(flag_check), "Semantic checking with no code generation");
    ion_add_flag_bool("lazy", &(ion_flag_lazy), "Only compile what\'s reachable from the main package");
    ion_add_flag_bool("notypeinfo", &(ion_flag_notypeinfo), "Don\'t generate any typeinfo tables");
    ion_add_flag_bool("fullgen", &(ion_flag_fullgen), "Force full code generation even for non-reachable symbols");
    ion_add_flag_bool("verbose", &(ion_flag_verbose), "Extra diagnostic information");
    char const ((*program_name)) = ion_parse_flags(&(argc), &(argv));
    if ((argc) != (1)) {
        printf("Usage: %s [flags] <main-package>\n", program_name);
        ion_print_flags_usage();
        return 1;
    }
    char const ((*package_name)) = argv[0];
    if (ion_flag_verbose) {
        printf("Target operating system: %s\n", ion_os_names[ion_target_os]);
        printf("Target architecture: %s\n", ion_arch_names[ion_target_arch]);
    }
    ion_init_compiler();
    ion_builtin_package = ion_import_package("builtin");
    if (!(ion_builtin_package)) {
        printf("error: Failed to compile package \'builtin\'.\n");
        return 1;
    }
    ion_builtin_package->external_name = ion_str_intern("");
    ion_Package (*main_package) = ion_import_package(package_name);
    if (!(main_package)) {
        printf("error: Failed to compile package \'%s\'\n", package_name);
        return 1;
    }
    char const ((*main_name)) = ion_str_intern("main");
    ion_Sym (*main_sym) = ion_get_package_sym(main_package, main_name);
    if (!(main_sym)) {
        printf("error: No \'main\' entry point defined in package \'%s\'\n", package_name);
        return 1;
    }
    main_sym->external_name = main_name;
    ion_reachable_phase = ION_REACHABLE_NATURAL;
    ion_resolve_sym(main_sym);
    for (size_t i = 0; (i) < (ion_buf_len(ion_package_list)); (i)++) {
        if (ion_package_list[i]->always_reachable) {
            ion_resolve_package_syms(ion_package_list[i]);
        }
    }
    ion_finalize_reachable_syms();
    if (ion_flag_verbose) {
        printf("Reached %d symbols in %d packages from %s/main\n", (int)(ion_buf_len(ion_reachable_syms)), (int)(ion_buf_len(ion_package_list)), package_name);
    }
    if (!(ion_flag_lazy)) {
        ion_reachable_phase = ION_REACHABLE_FORCED;
        for (size_t i = 0; (i) < (ion_buf_len(ion_package_list)); (i)++) {
            ion_resolve_package_syms(ion_package_list[i]);
        }
        ion_finalize_reachable_syms();
    }
    printf("Processed %d symbols in %d packages\n", (int)(ion_buf_len(ion_reachable_syms)), (int)(ion_buf_len(ion_package_list)));
    if (!(flag_check)) {
        char (c_path[MAX_PATH]) = {0};
        if (output_name) {
            ion_path_copy(c_path, output_name);
        } else {
            snprintf(c_path, sizeof(c_path), "out_%s.%s", package_name, extension);
        }
        gen_all();
        char (*c_code) = ion_gen_buf;
        ion_gen_buf = NULL;
        if (!(ion_write_file(c_path, c_code, ion_buf_len(c_code)))) {
            printf("error: Failed to write file: %s\n", c_path);
            return 1;
        }
        printf("Generated %s\n", c_path);
    }
    return 0;
}

char const ((*ion_typedef_keyword));
char const ((*ion_enum_keyword));
char const ((*ion_struct_keyword));
char const ((*ion_union_keyword));
char const ((*ion_var_keyword));
char const ((*ion_const_keyword));
char const ((*ion_func_keyword));
char const ((*ion_sizeof_keyword));
char const ((*ion_alignof_keyword));
char const ((*ion_typeof_keyword));
char const ((*ion_offsetof_keyword));
char const ((*ion_break_keyword));
char const ((*ion_continue_keyword));
char const ((*ion_return_keyword));
char const ((*ion_if_keyword));
char const ((*ion_else_keyword));
char const ((*ion_while_keyword));
char const ((*ion_do_keyword));
char const ((*ion_for_keyword));
char const ((*ion_switch_keyword));
char const ((*ion_case_keyword));
char const ((*ion_default_keyword));
char const ((*ion_import_keyword));
char const ((*ion_goto_keyword));
char const ((*ion_first_keyword));
char const ((*ion_last_keyword));
char const ((*(*ion_keywords)));
char const ((*ion_always_name));
char const ((*ion_foreign_name));
char const ((*ion_complete_name));
char const ((*ion_assert_name));
char const ((*ion_declare_note_name));
char const ((*ion_static_assert_name));
#line 38 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\lex.ion"
char const ((*ion_init_keyword(char const ((*keyword))))) {
    keyword = ion_str_intern(keyword);
    #line 41
    ion_buf_push((void (**))(&(ion_keywords)), (void *)(&(keyword)), sizeof(keyword));
    return keyword;
}

bool ion_keywords_inited = false;
#line 47
void ion_init_keywords(void) {
    if (ion_keywords_inited) {
        return;
    }
    ion_typedef_keyword = ion_init_keyword("typedef");
    char (*arena_end) = ion_intern_arena.end;
    ion_enum_keyword = ion_init_keyword("enum");
    ion_struct_keyword = ion_init_keyword("struct");
    ion_union_keyword = ion_init_keyword("union");
    ion_const_keyword = ion_init_keyword("const");
    ion_var_keyword = ion_init_keyword("var");
    ion_func_keyword = ion_init_keyword("func");
    ion_import_keyword = ion_init_keyword("import");
    ion_goto_keyword = ion_init_keyword("goto");
    ion_sizeof_keyword = ion_init_keyword("sizeof");
    ion_alignof_keyword = ion_init_keyword("alignof");
    ion_typeof_keyword = ion_init_keyword("typeof");
    ion_offsetof_keyword = ion_init_keyword("offsetof");
    ion_break_keyword = ion_init_keyword("break");
    ion_continue_keyword = ion_init_keyword("continue");
    ion_return_keyword = ion_init_keyword("return");
    ion_if_keyword = ion_init_keyword("if");
    ion_else_keyword = ion_init_keyword("else");
    ion_while_keyword = ion_init_keyword("while");
    ion_do_keyword = ion_init_keyword("do");
    ion_for_keyword = ion_init_keyword("for");
    ion_switch_keyword = ion_init_keyword("switch");
    ion_case_keyword = ion_init_keyword("case");
    ion_default_keyword = ion_init_keyword("default");
    assert((ion_intern_arena.end) == (arena_end));
    ion_first_keyword = ion_typedef_keyword;
    ion_last_keyword = ion_default_keyword;
    #line 80
    ion_always_name = ion_str_intern("always");
    ion_foreign_name = ion_str_intern("foreign");
    ion_complete_name = ion_str_intern("complete");
    ion_assert_name = ion_str_intern("assert");
    ion_declare_note_name = ion_str_intern("declare_note");
    ion_static_assert_name = ion_str_intern("static_assert");
    #line 87
    ion_keywords_inited = true;
}

#line 92
bool ion_is_keyword_name(char const ((*name))) {
    return ((ion_first_keyword) <= (name)) && ((name) <= (ion_last_keyword));
}

char const ((*(ion_token_suffix_names[7]))) = {[ION_SUFFIX_NONE] = "", [ION_SUFFIX_D] = "d", [ION_SUFFIX_U] = "u", [ION_SUFFIX_L] = "l", [ION_SUFFIX_UL] = "ul", [ION_SUFFIX_LL] = "ll", [ION_SUFFIX_ULL] = "ull"};
char const ((*(ion_token_kind_names[54]))) = {[ION_TOKEN_EOF] = "EOF", [ION_TOKEN_COLON] = ":", [ION_TOKEN_LPAREN] = "(", [ION_TOKEN_RPAREN] = ")", [ION_TOKEN_LBRACE] = "{", [ION_TOKEN_RBRACE] = "}", [ION_TOKEN_LBRACKET] = "[", [ION_TOKEN_RBRACKET] = "]", [ION_TOKEN_COMMA] = ",", [ION_TOKEN_DOT] = ".", [ION_TOKEN_AT] = "@", [ION_TOKEN_POUND] = "#", [ION_TOKEN_ELLIPSIS] = "...", [ION_TOKEN_QUESTION] = "?", [ION_TOKEN_SEMICOLON] = ";", [ION_TOKEN_KEYWORD] = "keyword", [ION_TOKEN_INT] = "int", [ION_TOKEN_FLOAT] = "float", [ION_TOKEN_STR] = "string", [ION_TOKEN_NAME] = "name", [ION_TOKEN_NEG] = "~", [ION_TOKEN_NOT] = "!", [ION_TOKEN_MUL] = "*", [ION_TOKEN_DIV] = "/", [ION_TOKEN_MOD] = "%", [ION_TOKEN_AND] = "&", [ION_TOKEN_LSHIFT] = "<<", [ION_TOKEN_RSHIFT] = ">>", [ION_TOKEN_ADD] = "+", [ION_TOKEN_SUB] = "-", [ION_TOKEN_OR] = "|", [ION_TOKEN_XOR] = "^", [ION_TOKEN_EQ] = "==", [ION_TOKEN_NOTEQ] = "!=", [ION_TOKEN_LT] = "<", [ION_TOKEN_GT] = ">", [ION_TOKEN_LTEQ] = "<=", [ION_TOKEN_GTEQ] = ">=", [ION_TOKEN_AND_AND] = "&&", [ION_TOKEN_OR_OR] = "||", [ION_TOKEN_ASSIGN] = "=", [ION_TOKEN_ADD_ASSIGN] = "+=", [ION_TOKEN_SUB_ASSIGN] = "-=", [ION_TOKEN_OR_ASSIGN] = "|=", [ION_TOKEN_AND_ASSIGN] = "&=", [ION_TOKEN_XOR_ASSIGN] = "^=", [ION_TOKEN_MUL_ASSIGN] = "*=", [ION_TOKEN_DIV_ASSIGN] = "/=", [ION_TOKEN_MOD_ASSIGN] = "%=", [ION_TOKEN_LSHIFT_ASSIGN] = "<<=", [ION_TOKEN_RSHIFT_ASSIGN] = ">>=", [ION_TOKEN_INC] = "++", [ION_TOKEN_DEC] = "--", [ION_TOKEN_COLON_ASSIGN] = ":="};
#line 252
char const ((*ion_token_kind_name(ion_TokenKind kind))) {
    if ((kind) < ((sizeof(ion_token_kind_names)) / (sizeof(*(ion_token_kind_names))))) {
        return ion_token_kind_names[kind];
    } else {
        return "<unknown>";
    }
}

ion_TokenKind (ion_assign_token_to_binary_token[ION_NUM_TOKEN_KINDS]) = {[ION_TOKEN_ADD_ASSIGN] = ION_TOKEN_ADD, [ION_TOKEN_SUB_ASSIGN] = ION_TOKEN_SUB, [ION_TOKEN_OR_ASSIGN] = ION_TOKEN_OR, [ION_TOKEN_AND_ASSIGN] = ION_TOKEN_AND, [ION_TOKEN_XOR_ASSIGN] = ION_TOKEN_XOR, [ION_TOKEN_LSHIFT_ASSIGN] = ION_TOKEN_LSHIFT, [ION_TOKEN_RSHIFT_ASSIGN] = ION_TOKEN_RSHIFT, [ION_TOKEN_MUL_ASSIGN] = ION_TOKEN_MUL, [ION_TOKEN_DIV_ASSIGN] = ION_TOKEN_DIV, [ION_TOKEN_MOD_ASSIGN] = ION_TOKEN_MOD};
ion_SrcPos ion_pos_builtin = {.name = "<builtin>"};
ion_Token ion_token;
char const ((*ion_stream));
char const ((*ion_line_start));
#line 299
void ion_vnotice(char const ((*level)), ion_SrcPos pos, char const ((*fmt)), va_list args) {
    if ((pos.name) == (NULL)) {
        pos = ion_pos_builtin;
    }
    printf("%s(%d): %s: ", pos.name, pos.line, level);
    vprintf(fmt, args);
    printf("\n");
}

void ion_warning(ion_SrcPos pos, char const ((*fmt)), ...) {
    va_list args = {0};
    va_start_ptr(&(args), &(fmt));
    ion_vnotice("warning", pos, fmt, args);
    va_end_ptr(&(args));
}

void ion_verror(ion_SrcPos pos, char const ((*fmt)), va_list args) {
    ion_vnotice("error", pos, fmt, args);
}

void ion_error(ion_SrcPos pos, char const ((*fmt)), ...) {
    va_list args = {0};
    va_start_ptr(&(args), &(fmt));
    ion_verror(pos, fmt, args);
    va_end_ptr(&(args));
}

void ion_fatal_error(ion_SrcPos pos, char const ((*fmt)), ...) {
    va_list args = {0};
    va_start_ptr(&(args), &(fmt));
    ion_verror(pos, fmt, args);
    va_end_ptr(&(args));
    exit(1);
}

#line 339
char const ((*ion_token_info(void))) {
    if (((ion_token.kind) == (ION_TOKEN_NAME)) || ((ion_token.kind) == (ION_TOKEN_KEYWORD))) {
        return ion_token.name;
    } else {
        return ion_token_kind_name(ion_token.kind);
    }
}

uint8_t (ion_char_to_digit[256]) = {['0'] = 0, ['1'] = 1, ['2'] = 2, ['3'] = 3, ['4'] = 4, ['5'] = 5, ['6'] = 6, ['7'] = 7, ['8'] = 8, ['9'] = 9, ['a'] = 10, ['A'] = 10, ['b'] = 11, ['B'] = 11, ['c'] = 12, ['C'] = 12, ['d'] = 13, ['D'] = 13, ['e'] = 14, ['E'] = 14, ['f'] = 15, ['F'] = 15};
#line 366
void ion_scan_int(void) {
    int base = 10;
    char const ((*start_digits)) = ion_stream;
    if ((*(ion_stream)) == ('0')) {
        (ion_stream)++;
        if ((tolower(*(ion_stream))) == ('x')) {
            (ion_stream)++;
            ion_token.mod = ION_MOD_HEX;
            base = 16;
            start_digits = ion_stream;
        } else if ((tolower(*(ion_stream))) == ('b')) {
            (ion_stream)++;
            ion_token.mod = ION_MOD_BIN;
            base = 2;
            start_digits = ion_stream;
        } else if (isdigit(*(ion_stream))) {
            ion_token.mod = ION_MOD_OCT;
            base = 8;
            start_digits = ion_stream;
        }
    }
    ullong val = 0;
    for (;;) {
        if ((*(ion_stream)) == ('_')) {
            (ion_stream)++;
            continue;
        }
        uchar digit = ion_char_to_digit[(uchar)(*(ion_stream))];
        if (((digit) == (0)) && ((*(ion_stream)) != ('0'))) {
            break;
        }
        if ((digit) >= (base)) {
            ion_error(ion_token.pos, "Digit \'%c\' out of range for base %d", *(ion_stream), base);
            digit = 0;
        }
        if ((val) > ((((ULLONG_MAX) - (digit))) / (base))) {
            ion_error(ion_token.pos, "Integer literal overflow");
            while (isdigit(*(ion_stream))) {
                (ion_stream)++;
            }
            val = 0;
            break;
        }
        val = ((val) * (base)) + (digit);
        (ion_stream)++;
    }
    if ((ion_stream) == (start_digits)) {
        ion_error(ion_token.pos, "Expected base %d digit, got \'%c\'", base, *(ion_stream));
    }
    ion_token.kind = ION_TOKEN_INT;
    ion_token.int_val = val;
    if ((tolower(*(ion_stream))) == ('u')) {
        ion_token.suffix = ION_SUFFIX_U;
        (ion_stream)++;
        if ((tolower(*(ion_stream))) == ('l')) {
            ion_token.suffix = ION_SUFFIX_UL;
            (ion_stream)++;
            if ((tolower(*(ion_stream))) == ('l')) {
                ion_token.suffix = ION_SUFFIX_ULL;
                (ion_stream)++;
            }
        }
    } else if ((tolower(*(ion_stream))) == ('l')) {
        ion_token.suffix = ION_SUFFIX_L;
        (ion_stream)++;
        if ((tolower(*(ion_stream))) == ('l')) {
            ion_token.suffix = ION_SUFFIX_LL;
            (ion_stream)++;
        }
    }
}

#line 441
void ion_scan_float(void) {
    char const ((*start)) = ion_stream;
    while (isdigit(*(ion_stream))) {
        (ion_stream)++;
    }
    if ((*(ion_stream)) == ('.')) {
        (ion_stream)++;
    }
    while (isdigit(*(ion_stream))) {
        (ion_stream)++;
    }
    if ((tolower(*(ion_stream))) == ('e')) {
        (ion_stream)++;
        if (((*(ion_stream)) == ('+')) || ((*(ion_stream)) == ('-'))) {
            (ion_stream)++;
        }
        if (!(isdigit(*(ion_stream)))) {
            ion_error(ion_token.pos, "Expected digit after float literal exponent, found \'%c\'.", *(ion_stream));
        }
        while (isdigit(*(ion_stream))) {
            (ion_stream)++;
        }
    }
    double val = strtod(start, NULL);
    if ((val) == (HUGE_VAL)) {
        ion_error(ion_token.pos, "Float literal overflow");
    }
    ion_token.kind = ION_TOKEN_FLOAT;
    ion_token.float_val = val;
    if ((tolower(*(ion_stream))) == ('d')) {
        ion_token.suffix = ION_SUFFIX_D;
        (ion_stream)++;
    }
}

char (ion_escape_to_char[256]) = {['0'] = '\0', ['\''] = '\'', ['\"'] = '\"', ['\\'] = '\\', ['n'] = '\n', ['r'] = '\r', ['t'] = '\t', ['v'] = '\v', ['b'] = '\b', ['a'] = '\a'};
#line 489
int ion_scan_hex_escape(void) {
    assert((*(ion_stream)) == ('x'));
    (ion_stream)++;
    uchar val = ion_char_to_digit[(uchar)(*(ion_stream))];
    if ((!(val)) && ((*(ion_stream)) != ('0'))) {
        ion_error(ion_token.pos, "\\x needs at least 1 hex digit");
    }
    (ion_stream)++;
    uchar digit = ion_char_to_digit[(uchar)(*(ion_stream))];
    if ((digit) || ((*(ion_stream)) == ('0'))) {
        val *= 16;
        val += digit;
        if ((val) > (0xff)) {
            ion_error(ion_token.pos, "\\x argument out of range");
            val = 0xff;
        }
        (ion_stream)++;
    }
    return val;
}

void ion_scan_char(void) {
    assert((*(ion_stream)) == ('\''));
    (ion_stream)++;
    int val = 0;
    if ((*(ion_stream)) == ('\'')) {
        ion_error(ion_token.pos, "Char literal cannot be empty");
        (ion_stream)++;
    } else if ((*(ion_stream)) == ('\n')) {
        ion_error(ion_token.pos, "Char literal cannot contain newline");
    } else if ((*(ion_stream)) == ('\\')) {
        (ion_stream)++;
        if ((*(ion_stream)) == ('x')) {
            val = ion_scan_hex_escape();
        } else {
            val = ion_escape_to_char[(uchar)(*(ion_stream))];
            if (((val) == (0)) && ((*(ion_stream)) != ('0'))) {
                ion_error(ion_token.pos, "Invalid char literal escape \'\\%c\'", *(ion_stream));
            }
            (ion_stream)++;
        }
    } else {
        val = *(ion_stream);
        (ion_stream)++;
    }
    if ((*(ion_stream)) != ('\'')) {
        ion_error(ion_token.pos, "Expected closing char quote, got \'%c\'", *(ion_stream));
    } else {
        (ion_stream)++;
    }
    ion_token.kind = ION_TOKEN_INT;
    ion_token.int_val = val;
    ion_token.mod = ION_MOD_CHAR;
}

void ion_scan_str(void) {
    assert((*(ion_stream)) == ('\"'));
    (ion_stream)++;
    char (*str) = NULL;
    if (((ion_stream[0]) == ('\"')) && ((ion_stream[1]) == ('\"'))) {
        ion_stream += 2;
        while (*(ion_stream)) {
            if ((((ion_stream[0]) == ('\"')) && ((ion_stream[1]) == ('\"'))) && ((ion_stream[2]) == ('\"'))) {
                ion_stream += 3;
                break;
            }
            if ((*(ion_stream)) != ('\r')) {
                #line 557
                ion_buf_push((void (**))(&(str)), (void *)(ion_stream), 1);
            }
            if ((*(ion_stream)) == ('\n')) {
                (ion_token.pos.line)++;
            }
            (ion_stream)++;
        }
        if (!(*(ion_stream))) {
            ion_error(ion_token.pos, "Unexpected end of file within multi-line string literal");
        }
        ion_token.mod = ION_MOD_MULTILINE;
    } else {
        while ((*(ion_stream)) && ((*(ion_stream)) != ('\"'))) {
            char val = *(ion_stream);
            if ((val) == ('\n')) {
                ion_error(ion_token.pos, "String literal cannot contain newline");
                break;
            } else if ((val) == ('\\')) {
                (ion_stream)++;
                if ((*(ion_stream)) == ('x')) {
                    val = ion_scan_hex_escape();
                } else {
                    val = ion_escape_to_char[(uchar)(*(ion_stream))];
                    if (((val) == (0)) && ((*(ion_stream)) != ('0'))) {
                        ion_error(ion_token.pos, "Invalid string literal escape \'\\%c\'", *(ion_stream));
                    }
                    (ion_stream)++;
                }
            } else {
                (ion_stream)++;
            }
            ion_buf_push((void (**))(&(str)), &(val), 1);
        }
        if (*(ion_stream)) {
            (ion_stream)++;
        } else {
            ion_error(ion_token.pos, "Unexpected end of file within string literal");
        }
    }
    #line 597
    int nul = '\0';
    ion_buf_push((void (**))(&(str)), &(nul), 1);
    ion_token.kind = ION_TOKEN_STR;
    ion_token.str_val = str;
}

#line 632
void ion_next_token(void) {
    repeat: ;
    ion_token.start = ion_stream;
    ion_token.mod = 0;
    ion_token.suffix = 0;
    switch (*(ion_stream)) {
    case ' ':
    case '\n':
    case '\r':
    case '\t':
    case '\v': {
        #line 639
        while (isspace(*(ion_stream))) {
            if ((*((ion_stream)++)) == ('\n')) {
                ion_line_start = ion_stream;
                (ion_token.pos.line)++;
            }
        }
        goto repeat;
        break;
    }
    case '\'': {
        #line 647
        ion_scan_char();
        break;
    }
    case '\"': {
        #line 649
        ion_scan_str();
        break;
    }
    case '.': {
        #line 651
        if (isdigit(ion_stream[1])) {
            ion_scan_float();
        } else if (((ion_stream[1]) == ('.')) && ((ion_stream[2]) == ('.'))) {
            ion_token.kind = ION_TOKEN_ELLIPSIS;
            ion_stream += 3;
        } else {
            ion_token.kind = ION_TOKEN_DOT;
            (ion_stream)++;
        }
        break;
    }
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9': {
        #line 660
        {
            while (isdigit(*(ion_stream))) {
                (ion_stream)++;
            }
            char c = *(ion_stream);
            ion_stream = ion_token.start;
            if (((c) == ('.')) || ((tolower(c)) == ('e'))) {
                ion_scan_float();
            } else {
                ion_scan_int();
            }
        }
        break;
    }
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '_': {
        #line 679
        while ((isalnum(*(ion_stream))) || ((*(ion_stream)) == ('_'))) {
            (ion_stream)++;
        }
        ion_token.name = ion_str_intern_range(ion_token.start, ion_stream);
        ion_token.kind = (ion_is_keyword_name(ion_token.name) ? ION_TOKEN_KEYWORD : ION_TOKEN_NAME);
        break;
    }
    case '<': {
        #line 685
        ion_token.kind = ION_TOKEN_LT;
        (ion_stream)++;
        if ((*(ion_stream)) == ('<')) {
            ion_token.kind = ION_TOKEN_LSHIFT;
            (ion_stream)++;
            if ((*(ion_stream)) == ('=')) {
                ion_token.kind = ION_TOKEN_LSHIFT_ASSIGN;
                (ion_stream)++;
            }
        } else if ((*(ion_stream)) == ('=')) {
            ion_token.kind = ION_TOKEN_LTEQ;
            (ion_stream)++;
        }
        break;
    }
    case '>': {
        #line 699
        ion_token.kind = ION_TOKEN_GT;
        (ion_stream)++;
        if ((*(ion_stream)) == ('>')) {
            ion_token.kind = ION_TOKEN_RSHIFT;
            (ion_stream)++;
            if ((*(ion_stream)) == ('=')) {
                ion_token.kind = ION_TOKEN_RSHIFT_ASSIGN;
                (ion_stream)++;
            }
        } else if ((*(ion_stream)) == ('=')) {
            ion_token.kind = ION_TOKEN_GTEQ;
            (ion_stream)++;
        }
        break;
    }
    case '/': {
        #line 713
        ion_token.kind = ION_TOKEN_DIV;
        (ion_stream)++;
        if ((*(ion_stream)) == ('=')) {
            ion_token.kind = ION_TOKEN_DIV_ASSIGN;
            (ion_stream)++;
        } else if ((*(ion_stream)) == ('/')) {
            (ion_stream)++;
            while ((*(ion_stream)) && ((*(ion_stream)) != ('\n'))) {
                (ion_stream)++;
            }
            goto repeat;
        } else if ((*(ion_stream)) == ('*')) {
            (ion_stream)++;
            int level = 1;
            while ((*(ion_stream)) && ((level) > (0))) {
                if (((ion_stream[0]) == ('/')) && ((ion_stream[1]) == ('*'))) {
                    (level)++;
                    ion_stream += 2;
                } else if (((ion_stream[0]) == ('*')) && ((ion_stream[1]) == ('/'))) {
                    (level)--;
                    ion_stream += 2;
                } else {
                    if ((*(ion_stream)) == ('\n')) {
                        (ion_token.pos.line)++;
                    }
                    (ion_stream)++;
                }
            }
            goto repeat;
        }
        break;
    }
    case '\0': {
        #line 747
        ion_token.kind = ION_TOKEN_EOF;
        (ion_stream)++;
        break;
    }
    case '(': {
        #line 750
        ion_token.kind = ION_TOKEN_LPAREN;
        (ion_stream)++;
        break;
    }
    case ')': {
        #line 753
        ion_token.kind = ION_TOKEN_RPAREN;
        (ion_stream)++;
        break;
    }
    case '{': {
        #line 756
        ion_token.kind = ION_TOKEN_LBRACE;
        (ion_stream)++;
        break;
    }
    case '}': {
        #line 759
        ion_token.kind = ION_TOKEN_RBRACE;
        (ion_stream)++;
        break;
    }
    case '[': {
        #line 762
        ion_token.kind = ION_TOKEN_LBRACKET;
        (ion_stream)++;
        break;
    }
    case ']': {
        #line 765
        ion_token.kind = ION_TOKEN_RBRACKET;
        (ion_stream)++;
        break;
    }
    case ',': {
        #line 768
        ion_token.kind = ION_TOKEN_COMMA;
        (ion_stream)++;
        break;
    }
    case '@': {
        #line 771
        ion_token.kind = ION_TOKEN_AT;
        (ion_stream)++;
        break;
    }
    case '#': {
        #line 774
        ion_token.kind = ION_TOKEN_POUND;
        (ion_stream)++;
        break;
    }
    case '?': {
        #line 777
        ion_token.kind = ION_TOKEN_QUESTION;
        (ion_stream)++;
        break;
    }
    case ';': {
        #line 780
        ion_token.kind = ION_TOKEN_SEMICOLON;
        (ion_stream)++;
        break;
    }
    case '~': {
        #line 783
        ion_token.kind = ION_TOKEN_NEG;
        (ion_stream)++;
        break;
    }
    case '!': {
        #line 787
        ion_token.kind = ION_TOKEN_NOT;
        (ion_stream)++;
        if ((*(ion_stream)) == ('=')) {
            ion_token.kind = ION_TOKEN_NOTEQ;
            (ion_stream)++;
        }
        break;
    }
    case ':': {
        #line 794
        ion_token.kind = ION_TOKEN_COLON;
        (ion_stream)++;
        if ((*(ion_stream)) == ('=')) {
            ion_token.kind = ION_TOKEN_COLON_ASSIGN;
            (ion_stream)++;
        }
        break;
    }
    case '=': {
        #line 801
        ion_token.kind = ION_TOKEN_ASSIGN;
        (ion_stream)++;
        if ((*(ion_stream)) == ('=')) {
            ion_token.kind = ION_TOKEN_EQ;
            (ion_stream)++;
        }
        break;
    }
    case '^': {
        #line 808
        ion_token.kind = ION_TOKEN_XOR;
        (ion_stream)++;
        if ((*(ion_stream)) == ('=')) {
            ion_token.kind = ION_TOKEN_XOR_ASSIGN;
            (ion_stream)++;
        }
        break;
    }
    case '*': {
        #line 815
        ion_token.kind = ION_TOKEN_MUL;
        (ion_stream)++;
        if ((*(ion_stream)) == ('=')) {
            ion_token.kind = ION_TOKEN_MUL_ASSIGN;
            (ion_stream)++;
        }
        break;
    }
    case '%': {
        #line 822
        ion_token.kind = ION_TOKEN_MOD;
        (ion_stream)++;
        if ((*(ion_stream)) == ('=')) {
            ion_token.kind = ION_TOKEN_MOD_ASSIGN;
            (ion_stream)++;
        }
        break;
    }
    case '+': {
        #line 830
        ion_token.kind = ION_TOKEN_ADD;
        (ion_stream)++;
        if ((*(ion_stream)) == ('=')) {
            ion_token.kind = ION_TOKEN_ADD_ASSIGN;
            (ion_stream)++;
        } else if ((*(ion_stream)) == ('+')) {
            ion_token.kind = ION_TOKEN_INC;
            (ion_stream)++;
        }
        break;
    }
    case '-': {
        #line 840
        ion_token.kind = ION_TOKEN_SUB;
        (ion_stream)++;
        if ((*(ion_stream)) == ('=')) {
            ion_token.kind = ION_TOKEN_SUB_ASSIGN;
            (ion_stream)++;
        } else if ((*(ion_stream)) == ('-')) {
            ion_token.kind = ION_TOKEN_DEC;
            (ion_stream)++;
        }
        break;
    }
    case '&': {
        #line 850
        ion_token.kind = ION_TOKEN_AND;
        (ion_stream)++;
        if ((*(ion_stream)) == ('=')) {
            ion_token.kind = ION_TOKEN_AND_ASSIGN;
            (ion_stream)++;
        } else if ((*(ion_stream)) == ('&')) {
            ion_token.kind = ION_TOKEN_AND_AND;
            (ion_stream)++;
        }
        break;
    }
    case '|': {
        #line 860
        ion_token.kind = ION_TOKEN_OR;
        (ion_stream)++;
        if ((*(ion_stream)) == ('=')) {
            ion_token.kind = ION_TOKEN_OR_ASSIGN;
            (ion_stream)++;
        } else if ((*(ion_stream)) == ('|')) {
            ion_token.kind = ION_TOKEN_OR_OR;
            (ion_stream)++;
        }
        break;
    }
    default: {
        #line 870
        ion_error(ion_token.pos, "Invalid \'%c\' token, skipping", *(ion_stream));
        (ion_stream)++;
        goto repeat;
        break;
    }
    }
    #line 874
    ion_token.end = ion_stream;
}

#line 881
void ion_init_stream(char const ((*name)), char const ((*buf))) {
    ion_stream = buf;
    ion_line_start = ion_stream;
    ion_token.pos.name = (name ? name : (char const (*))("<string>"));
    ion_token.pos.line = 1;
    ion_next_token();
}

bool ion_is_token(ion_TokenKind kind) {
    return (ion_token.kind) == (kind);
}

bool ion_is_token_eof(void) {
    return (ion_token.kind) == (ION_TOKEN_EOF);
}

bool ion_is_token_name(char const ((*name))) {
    return ((ion_token.kind) == (ION_TOKEN_NAME)) && ((ion_token.name) == (name));
}

bool ion_is_keyword(char const ((*name))) {
    return (ion_is_token(ION_TOKEN_KEYWORD)) && ((ion_token.name) == (name));
}

bool ion_match_keyword(char const ((*name))) {
    if (ion_is_keyword(name)) {
        ion_next_token();
        return true;
    } else {
        return false;
    }
}

bool ion_match_token(ion_TokenKind kind) {
    if (ion_is_token(kind)) {
        ion_next_token();
        return true;
    } else {
        return false;
    }
}

bool ion_expect_token(ion_TokenKind kind) {
    if (ion_is_token(kind)) {
        ion_next_token();
        return true;
    } else {
        ion_fatal_error(ion_token.pos, "Expected token %s, got %s", ion_token_kind_name(kind), ion_token_info());
        return false;
    }
}

bool ion_flag_verbose;
bool ion_flag_lazy;
bool ion_flag_notypeinfo;
bool ion_flag_fullgen;
#line 4 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\os.ion"
void ion_path_normalize(char (*path)) {
    char (*ptr) = {0};
    for (ptr = path; *(ptr); (ptr)++) {
        if ((*(ptr)) == ('\\')) {
            *(ptr) = '/';
        }
    }
    if (((ptr) != (path)) && ((ptr[-(1)]) == ('/'))) {
        ptr[-(1)] = 0;
    }
}

void ion_path_copy(char (path[MAX_PATH]), char const ((*src))) {
    strncpy(path, src, MAX_PATH);
    path[(MAX_PATH) - (1)] = 0;
    ion_path_normalize(path);
}

void ion_path_join(char (path[MAX_PATH]), char const ((*src))) {
    char (*ptr) = (path) + (strlen(path));
    if (((ptr) != (path)) && ((ptr[-(1)]) == ('/'))) {
        (ptr)--;
    }
    if ((*(src)) == ('/')) {
        (src)++;
    }
    snprintf(ptr, ((path) + (MAX_PATH)) - (ptr), "/%s", src);
}

char (*ion_path_file(char (path[MAX_PATH]))) {
    ion_path_normalize(path);
    for (char (*ptr) = (path) + (strlen(path)); (ptr) != (path); (ptr)--) {
        if ((ptr[-(1)]) == ('/')) {
            return ptr;
        }
    }
    return path;
}

char (*ion_path_ext(char (path[MAX_PATH]))) {
    for (char (*ptr) = (path) + (strlen(path)); (ptr) != (path); (ptr)--) {
        if ((ptr[-(1)]) == ('.')) {
            return ptr;
        }
    }
    return path;
}

#line 64
bool ion_dir_excluded(ion_DirListIter (*iter)) {
    return (iter->valid) && ((((strcmp(iter->name, ".")) == (0)) || ((strcmp(iter->name, "..")) == (0))));
}

bool ion_dir_list_subdir(ion_DirListIter (*iter)) {
    if ((!(iter->valid)) || (!(iter->is_dir))) {
        return false;
    }
    ion_DirListIter subdir_iter = {0};
    ion_path_join(iter->base, iter->name);
    ion_dir_list(&(subdir_iter), iter->base);
    ion_dir_list_free(iter);
    *(iter) = subdir_iter;
    return true;
}

char const ((*(*ion_dir_list_buf(char const ((*filespec)))))) {
    char const ((*(*buf))) = NULL;
    ion_DirListIter iter = {0};
    for (ion_dir_list(&(iter), filespec); iter.valid; ion_dir_list_next(&(iter))) {
        char const ((*name)) = _strdup(iter.name);
        ion_buf_push((void (**))(&(buf)), &(name), sizeof(name));
    }
    return buf;
}

ion_FlagDef (*ion_flag_defs);
#line 116
void ion_add_flag_bool(char const ((*name)), bool (*ptr), char const ((*help))) {
    ion_FlagDef def = {.kind = ION_FLAG_BOOL, .name = name, .help = help, .ptr = {.b = ptr}};
    ion_buf_push((void (**))(&(ion_flag_defs)), &(def), sizeof(def));
}

void ion_add_flag_str(char const ((*name)), char const ((*(*ptr))), char const ((*arg_name)), char const ((*help))) {
    ion_FlagDef def = {.kind = ION_FLAG_STR, .name = name, .help = help, .arg_name = arg_name, .ptr = {.s = ptr}};
    ion_buf_push((void (**))(&(ion_flag_defs)), &(def), sizeof(def));
}

void ion_add_flag_enum(char const ((*name)), int (*ptr), char const ((*help)), char const ((*(*options))), int num_options) {
    ion_FlagDef def = {.kind = ION_FLAG_ENUM, .name = name, .help = help, .ptr = {.i = ptr}, .options = options, .num_options = num_options};
    ion_buf_push((void (**))(&(ion_flag_defs)), &(def), sizeof(def));
}

ion_FlagDef (*ion_get_flag_def(char const ((*name)))) {
    for (size_t i = 0; (i) < (ion_buf_len(ion_flag_defs)); (i)++) {
        if ((strcmp(ion_flag_defs[i].name, name)) == (0)) {
            return &(ion_flag_defs[i]);
        }
    }
    return NULL;
}

void ion_print_flags_usage(void) {
    printf("Flags:\n");
    for (size_t i = 0; (i) < (ion_buf_len(ion_flag_defs)); (i)++) {
        ion_FlagDef flag = ion_flag_defs[i];
        char (note[256]) = {0};
        char (format[256]) = {0};
        switch (flag.kind) {
        case ION_FLAG_STR: {
            snprintf(format, sizeof(format), "%s <%s>", flag.name, (flag.arg_name ? flag.arg_name : (char const (*))("value")));
            if (*(flag.ptr.s)) {
                snprintf(note, sizeof(note), "(default: %s)", *(flag.ptr.s));
            }
            break;
        }
        case ION_FLAG_ENUM: {
            #line 152
            {
                char (*end) = (format) + (sizeof(format));
                char (*ptr) = format;
                ptr += snprintf(ptr, (end) - (ptr), "%s <", flag.name);
                for (int k = 0; (k) < (flag.num_options); (k)++) {
                    ptr += snprintf(ptr, (end) - (ptr), "%s%s", ((k) == (0) ? "" : "|"), flag.options[k]);
                    if ((k) == (*(flag.ptr.i))) {
                        snprintf(note, sizeof(note), " (default: %s)", flag.options[k]);
                    }
                }
                snprintf(ptr, (end) - (ptr), ">");
            }
            break;
        }
        case ION_FLAG_BOOL:
        default: {
            #line 166
            snprintf(format, sizeof(format), "%s", flag.name);
            break;
        }
        }
        #line 168
        printf(" -%-32s %s%s\n", format, (flag.help ? flag.help : (char const (*))("")), note);
    }
}

char const ((*ion_parse_flags(int (*argc_ptr), char const ((*(*(*argv_ptr))))))) {
    int argc = *(argc_ptr);
    char const ((*(*argv))) = *(argv_ptr);
    int i = {0};
    for (i = 1; (i) < (argc); (i)++) {
        char const ((*arg)) = argv[i];
        char const ((*name)) = arg;
        if ((*(name)) == ('-')) {
            (name)++;
            if ((*(name)) == ('-')) {
                (name)++;
            }
            ion_FlagDef (*flag) = ion_get_flag_def(name);
            if (!(flag)) {
                printf("Unknown flag %s\n", arg);
                continue;
            }
            switch (flag->kind) {
            case ION_FLAG_BOOL: {
                *(flag->ptr.b) = true;
                break;
            }
            case ION_FLAG_STR: {
                #line 193
                if (((i) + (1)) < (argc)) {
                    (i)++;
                    *(flag->ptr.s) = argv[i];
                } else {
                    printf("No value argument after -%s\n", arg);
                }
                break;
            }
            case ION_FLAG_ENUM: {
                #line 199
                {
                    char const ((*option)) = {0};
                    if (((i) + (1)) < (argc)) {
                        (i)++;
                        option = argv[i];
                    } else {
                        printf("No value after %s\n", arg);
                        break;
                    }
                    bool found = false;
                    for (int k = 0; (k) < (flag->num_options); (k)++) {
                        if ((strcmp(flag->options[k], option)) == (0)) {
                            *(flag->ptr.i) = k;
                            found = true;
                            break;
                        }
                    }
                    if (!(found)) {
                        printf("Invalid value \'%s\' for %s\n", option, arg);
                    }
                }
                break;
            }
            default: {
                #line 221
                printf("Unhandled flag kind\n");
                break;
            }
            }
        } else {
            #line 224
            break;
        }
    }
    *(argc_ptr) = (argc) - (i);
    *(argv_ptr) = (argv) + (i);
    return ion_path_file(_strdup(argv[0]));
}

#line 35 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\os_win32.ion"
void ion_path_absolute(char (path[MAX_PATH])) {
    char (rel_path[MAX_PATH]) = {0};
    ion_path_copy(rel_path, path);
    _fullpath(path, rel_path, MAX_PATH);
}

void ion_dir_list_free(ion_DirListIter (*iter)) {
    if (iter->valid) {
        _findclose((intptr_t)(iter->handle));
        iter->valid = false;
        iter->error = false;
    }
}

void ion_dir__update(ion_DirListIter (*iter), bool done, FindData (*fileinfo)) {
    iter->valid = !(done);
    iter->error = (done) && ((errno) != (ENOENT));
    if (!(done)) {
        iter->size = fileinfo->size;
        memcpy(iter->name, fileinfo->name, (sizeof(iter->name)) - (1));
        iter->name[(MAX_PATH) - (1)] = 0;
        iter->is_dir = (fileinfo->attrib) & (_A_SUBDIR);
    }
}

void ion_dir_list_next(ion_DirListIter (*iter)) {
    if (!(iter->valid)) {
        return;
    }
    do {
        FindData fileinfo = {0};
        int result = _findnext((intptr_t)(iter->handle), &(fileinfo));
        ion_dir__update(iter, (result) != (0), &(fileinfo));
        if ((result) != (0)) {
            ion_dir_list_free(iter);
            return;
        }
    } while (ion_dir_excluded(iter));
}

void ion_dir_list(ion_DirListIter (*iter), char const ((*path))) {
    memset(iter, 0, sizeof(*(iter)));
    ion_path_copy(iter->base, path);
    char (filespec[MAX_PATH]) = {0};
    ion_path_copy(filespec, path);
    ion_path_join(filespec, "*");
    FindData fileinfo = {0};
    llong handle = _findfirst(filespec, &(fileinfo));
    iter->handle = (void *)(handle);
    ion_dir__update(iter, (handle) == (-(1)), &(fileinfo));
    if (ion_dir_excluded(iter)) {
        ion_dir_list_next(iter);
    }
}

#line 1 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\parse.ion"
ion_Typespec (*ion_parse_type_func_param(void)) {
    ion_Typespec (*type) = ion_parse_type();
    if (ion_match_token(ION_TOKEN_COLON)) {
        if ((type->kind) != (ION_TYPESPEC_NAME)) {
            ion_error(ion_token.pos, "Colons in parameters of func types must be preceded by names.");
        }
        type = ion_parse_type();
    }
    return type;
}

ion_Typespec (*ion_parse_type_func(void)) {
    ion_SrcPos pos = ion_token.pos;
    ion_Typespec (*(*args)) = NULL;
    bool has_varargs = false;
    ion_expect_token(ION_TOKEN_LPAREN);
    if (!(ion_is_token(ION_TOKEN_RPAREN))) {
        ion_Typespec (*param) = ion_parse_type_func_param();
        ion_buf_push((void (**))(&(args)), &(param), sizeof(param));
        while (ion_match_token(ION_TOKEN_COMMA)) {
            if (ion_match_token(ION_TOKEN_ELLIPSIS)) {
                if (has_varargs) {
                    ion_error(ion_token.pos, "Multiple ellipsis instances in function type");
                }
                has_varargs = true;
            } else {
                if (has_varargs) {
                    ion_error(ion_token.pos, "Ellipsis must be last parameter in function type");
                }
                param = ion_parse_type_func_param();
                ion_buf_push((void (**))(&(args)), &(param), sizeof(param));
            }
        }
    }
    ion_expect_token(ION_TOKEN_RPAREN);
    ion_Typespec (*ret) = NULL;
    if (ion_match_token(ION_TOKEN_COLON)) {
        ret = ion_parse_type();
    }
    return ion_new_typespec_func(pos, args, ion_buf_len(args), ret, has_varargs);
}

ion_Typespec (*ion_parse_type_base(void)) {
    if (ion_is_token(ION_TOKEN_NAME)) {
        ion_SrcPos pos = ion_token.pos;
        char const ((*name)) = ion_token.name;
        ion_next_token();
        return ion_new_typespec_name(pos, name);
    } else if (ion_match_keyword(ion_func_keyword)) {
        return ion_parse_type_func();
    } else if (ion_match_token(ION_TOKEN_LPAREN)) {
        ion_Typespec (*type) = ion_parse_type();
        ion_expect_token(ION_TOKEN_RPAREN);
        return type;
    } else {
        ion_fatal_error(ion_token.pos, "Unexpected token %s in type", ion_token_info());
        return NULL;
    }
}

ion_Typespec (*ion_parse_type(void)) {
    ion_Typespec (*type) = ion_parse_type_base();
    ion_SrcPos pos = ion_token.pos;
    while (((ion_is_token(ION_TOKEN_LBRACKET)) || (ion_is_token(ION_TOKEN_MUL))) || (ion_is_keyword(ion_const_keyword))) {
        if (ion_match_token(ION_TOKEN_LBRACKET)) {
            ion_Expr (*size) = NULL;
            if (!(ion_is_token(ION_TOKEN_RBRACKET))) {
                size = ion_parse_expr();
            }
            ion_expect_token(ION_TOKEN_RBRACKET);
            type = ion_new_typespec_array(pos, type, size);
        } else if (ion_match_keyword(ion_const_keyword)) {
            type = ion_new_typespec_const(pos, type);
        } else {
            assert(ion_is_token(ION_TOKEN_MUL));
            ion_next_token();
            type = ion_new_typespec_ptr(pos, type);
        }
    }
    return type;
}

ion_CompoundField ion_parse_expr_compound_field(void) {
    ion_SrcPos pos = ion_token.pos;
    if (ion_match_token(ION_TOKEN_LBRACKET)) {
        ion_Expr (*index) = ion_parse_expr();
        ion_expect_token(ION_TOKEN_RBRACKET);
        ion_expect_token(ION_TOKEN_ASSIGN);
        return (ion_CompoundField){ION_FIELD_INDEX, pos, ion_parse_expr(), .index = index};
    } else {
        ion_Expr (*expr) = ion_parse_expr();
        if (ion_match_token(ION_TOKEN_ASSIGN)) {
            if ((expr->kind) != (ION_EXPR_NAME)) {
                ion_fatal_error(ion_token.pos, "Named initializer in compound literal must be preceded by field name");
            }
            return (ion_CompoundField){ION_FIELD_NAME, pos, ion_parse_expr(), .name = expr->name};
        } else {
            return (ion_CompoundField){ION_FIELD_DEFAULT, pos, expr};
        }
    }
}

ion_Expr (*ion_parse_expr_compound(ion_Typespec (*type))) {
    ion_SrcPos pos = ion_token.pos;
    ion_expect_token(ION_TOKEN_LBRACE);
    ion_CompoundField (*fields) = NULL;
    while (!(ion_is_token(ION_TOKEN_RBRACE))) {
        ion_CompoundField field = ion_parse_expr_compound_field();
        ion_buf_push((void (**))(&(fields)), &(field), sizeof(field));
        if (!(ion_match_token(ION_TOKEN_COMMA))) {
            break;
        }
    }
    ion_expect_token(ION_TOKEN_RBRACE);
    return ion_new_expr_compound(pos, type, fields, ion_buf_len(fields));
}

ion_Expr (*ion_parse_expr_operand(void)) {
    ion_SrcPos pos = ion_token.pos;
    if (ion_is_token(ION_TOKEN_INT)) {
        ullong val = ion_token.int_val;
        ion_TokenMod mod = ion_token.mod;
        ion_TokenSuffix suffix = ion_token.suffix;
        ion_next_token();
        return ion_new_expr_int(pos, val, mod, suffix);
    } else if (ion_is_token(ION_TOKEN_FLOAT)) {
        char const ((*start)) = ion_token.start;
        char const ((*end)) = ion_token.end;
        double val = ion_token.float_val;
        ion_TokenSuffix suffix = ion_token.suffix;
        ion_next_token();
        return ion_new_expr_float(pos, start, end, val, suffix);
    } else if (ion_is_token(ION_TOKEN_STR)) {
        char const ((*val)) = ion_token.str_val;
        ion_TokenMod mod = ion_token.mod;
        ion_next_token();
        return ion_new_expr_str(pos, val, mod);
    } else if (ion_is_token(ION_TOKEN_NAME)) {
        char const ((*name)) = ion_token.name;
        ion_next_token();
        if (ion_is_token(ION_TOKEN_LBRACE)) {
            return ion_parse_expr_compound(ion_new_typespec_name(pos, name));
        } else {
            return ion_new_expr_name(pos, name);
        }
    } else if (ion_match_keyword(ion_sizeof_keyword)) {
        ion_expect_token(ION_TOKEN_LPAREN);
        if (ion_match_token(ION_TOKEN_COLON)) {
            ion_Typespec (*type) = ion_parse_type();
            ion_expect_token(ION_TOKEN_RPAREN);
            return ion_new_expr_sizeof_type(pos, type);
        } else {
            ion_Expr (*expr) = ion_parse_expr();
            ion_expect_token(ION_TOKEN_RPAREN);
            return ion_new_expr_sizeof_expr(pos, expr);
        }
    } else if (ion_match_keyword(ion_alignof_keyword)) {
        ion_expect_token(ION_TOKEN_LPAREN);
        if (ion_match_token(ION_TOKEN_COLON)) {
            ion_Typespec (*type) = ion_parse_type();
            ion_expect_token(ION_TOKEN_RPAREN);
            return ion_new_expr_alignof_type(pos, type);
        } else {
            ion_Expr (*expr) = ion_parse_expr();
            ion_expect_token(ION_TOKEN_RPAREN);
            return ion_new_expr_alignof_expr(pos, expr);
        }
    } else if (ion_match_keyword(ion_typeof_keyword)) {
        ion_expect_token(ION_TOKEN_LPAREN);
        if (ion_match_token(ION_TOKEN_COLON)) {
            ion_Typespec (*type) = ion_parse_type();
            ion_expect_token(ION_TOKEN_RPAREN);
            return ion_new_expr_typeof_type(pos, type);
        } else {
            ion_Expr (*expr) = ion_parse_expr();
            ion_expect_token(ION_TOKEN_RPAREN);
            return ion_new_expr_typeof_expr(pos, expr);
        }
    } else if (ion_match_keyword(ion_offsetof_keyword)) {
        ion_expect_token(ION_TOKEN_LPAREN);
        ion_Typespec (*type) = ion_parse_type();
        ion_expect_token(ION_TOKEN_COMMA);
        char const ((*name)) = ion_parse_name();
        ion_expect_token(ION_TOKEN_RPAREN);
        return ion_new_expr_offsetof(pos, type, name);
    } else if (ion_is_token(ION_TOKEN_LBRACE)) {
        return ion_parse_expr_compound(NULL);
    } else if (ion_match_token(ION_TOKEN_LPAREN)) {
        if (ion_match_token(ION_TOKEN_COLON)) {
            ion_Typespec (*type) = ion_parse_type();
            ion_expect_token(ION_TOKEN_RPAREN);
            if (ion_is_token(ION_TOKEN_LBRACE)) {
                return ion_parse_expr_compound(type);
            } else {
                return ion_new_expr_cast(pos, type, ion_parse_expr_unary());
            }
        } else {
            ion_Expr (*expr) = ion_parse_expr();
            ion_expect_token(ION_TOKEN_RPAREN);
            return ion_new_expr_paren(pos, expr);
        }
    } else {
        ion_fatal_error(ion_token.pos, "Unexpected token %s in expression", ion_token_info());
        return NULL;
    }
}

ion_Expr (*ion_parse_expr_base(void)) {
    ion_Expr (*expr) = ion_parse_expr_operand();
    while (((((ion_is_token(ION_TOKEN_LPAREN)) || (ion_is_token(ION_TOKEN_LBRACKET))) || (ion_is_token(ION_TOKEN_DOT))) || (ion_is_token(ION_TOKEN_INC))) || (ion_is_token(ION_TOKEN_DEC))) {
        ion_SrcPos pos = ion_token.pos;
        if (ion_match_token(ION_TOKEN_LPAREN)) {
            ion_Expr (*(*args)) = NULL;
            while (!(ion_is_token(ION_TOKEN_RPAREN))) {
                ion_Expr (*arg) = ion_parse_expr();
                ion_buf_push((void (**))(&(args)), &(arg), sizeof(arg));
                if (!(ion_match_token(ION_TOKEN_COMMA))) {
                    break;
                }
            }
            ion_expect_token(ION_TOKEN_RPAREN);
            expr = ion_new_expr_call(pos, expr, args, ion_buf_len(args));
        } else if (ion_match_token(ION_TOKEN_LBRACKET)) {
            ion_Expr (*index) = ion_parse_expr();
            ion_expect_token(ION_TOKEN_RBRACKET);
            expr = ion_new_expr_index(pos, expr, index);
        } else if (ion_is_token(ION_TOKEN_DOT)) {
            ion_next_token();
            char const ((*field)) = ion_token.name;
            ion_expect_token(ION_TOKEN_NAME);
            expr = ion_new_expr_field(pos, expr, field);
        } else {
            assert((ion_is_token(ION_TOKEN_INC)) || (ion_is_token(ION_TOKEN_DEC)));
            ion_TokenKind op = ion_token.kind;
            ion_next_token();
            expr = ion_new_expr_modify(pos, op, true, expr);
        }
    }
    return expr;
}

bool ion_is_unary_op(void) {
    return (((((((ion_is_token(ION_TOKEN_ADD)) || (ion_is_token(ION_TOKEN_SUB))) || (ion_is_token(ION_TOKEN_MUL))) || (ion_is_token(ION_TOKEN_AND))) || (ion_is_token(ION_TOKEN_NEG))) || (ion_is_token(ION_TOKEN_NOT))) || (ion_is_token(ION_TOKEN_INC))) || (ion_is_token(ION_TOKEN_DEC));
}

#line 254
ion_Expr (*ion_parse_expr_unary(void)) {
    if (ion_is_unary_op()) {
        ion_SrcPos pos = ion_token.pos;
        ion_TokenKind op = ion_token.kind;
        ion_next_token();
        if (((op) == (ION_TOKEN_INC)) || ((op) == (ION_TOKEN_DEC))) {
            return ion_new_expr_modify(pos, op, false, ion_parse_expr_unary());
        } else {
            return ion_new_expr_unary(pos, op, ion_parse_expr_unary());
        }
    } else {
        return ion_parse_expr_base();
    }
}

bool ion_is_mul_op(void) {
    return ((ION_TOKEN_FIRST_MUL) <= (ion_token.kind)) && ((ion_token.kind) <= (ION_TOKEN_LAST_MUL));
}

ion_Expr (*ion_parse_expr_mul(void)) {
    ion_Expr (*expr) = ion_parse_expr_unary();
    while (ion_is_mul_op()) {
        ion_SrcPos pos = ion_token.pos;
        ion_TokenKind op = ion_token.kind;
        ion_next_token();
        expr = ion_new_expr_binary(pos, op, expr, ion_parse_expr_unary());
    }
    return expr;
}

bool ion_is_add_op(void) {
    return ((ION_TOKEN_FIRST_ADD) <= (ion_token.kind)) && ((ion_token.kind) <= (ION_TOKEN_LAST_ADD));
}

ion_Expr (*ion_parse_expr_add(void)) {
    ion_Expr (*expr) = ion_parse_expr_mul();
    while (ion_is_add_op()) {
        ion_SrcPos pos = ion_token.pos;
        ion_TokenKind op = ion_token.kind;
        ion_next_token();
        expr = ion_new_expr_binary(pos, op, expr, ion_parse_expr_mul());
    }
    return expr;
}

bool ion_is_cmp_op(void) {
    return ((ION_TOKEN_FIRST_CMP) <= (ion_token.kind)) && ((ion_token.kind) <= (ION_TOKEN_LAST_CMP));
}

ion_Expr (*ion_parse_expr_cmp(void)) {
    ion_Expr (*expr) = ion_parse_expr_add();
    while (ion_is_cmp_op()) {
        ion_SrcPos pos = ion_token.pos;
        ion_TokenKind op = ion_token.kind;
        ion_next_token();
        expr = ion_new_expr_binary(pos, op, expr, ion_parse_expr_add());
    }
    return expr;
}

ion_Expr (*ion_parse_expr_and(void)) {
    ion_Expr (*expr) = ion_parse_expr_cmp();
    while (ion_match_token(ION_TOKEN_AND_AND)) {
        ion_SrcPos pos = ion_token.pos;
        expr = ion_new_expr_binary(pos, ION_TOKEN_AND_AND, expr, ion_parse_expr_cmp());
    }
    return expr;
}

ion_Expr (*ion_parse_expr_or(void)) {
    ion_Expr (*expr) = ion_parse_expr_and();
    while (ion_match_token(ION_TOKEN_OR_OR)) {
        ion_SrcPos pos = ion_token.pos;
        expr = ion_new_expr_binary(pos, ION_TOKEN_OR_OR, expr, ion_parse_expr_and());
    }
    return expr;
}

ion_Expr (*ion_parse_expr_ternary(void)) {
    ion_SrcPos pos = ion_token.pos;
    ion_Expr (*expr) = ion_parse_expr_or();
    if (ion_match_token(ION_TOKEN_QUESTION)) {
        ion_Expr (*then_expr) = ion_parse_expr_ternary();
        ion_expect_token(ION_TOKEN_COLON);
        ion_Expr (*else_expr) = ion_parse_expr_ternary();
        expr = ion_new_expr_ternary(pos, expr, then_expr, else_expr);
    }
    return expr;
}

ion_Expr (*ion_parse_expr(void)) {
    return ion_parse_expr_ternary();
}

ion_Expr (*ion_parse_paren_expr(void)) {
    ion_expect_token(ION_TOKEN_LPAREN);
    ion_Expr (*expr) = ion_parse_expr();
    ion_expect_token(ION_TOKEN_RPAREN);
    return expr;
}

ion_StmtList ion_parse_stmt_block(void) {
    ion_SrcPos pos = ion_token.pos;
    ion_expect_token(ION_TOKEN_LBRACE);
    ion_Stmt (*(*stmts)) = NULL;
    while ((!(ion_is_token_eof())) && (!(ion_is_token(ION_TOKEN_RBRACE)))) {
        ion_Stmt (*stmt) = ion_parse_stmt();
        ion_buf_push((void (**))(&(stmts)), &(stmt), sizeof(stmt));
    }
    ion_expect_token(ION_TOKEN_RBRACE);
    return ion_new_stmt_list(pos, stmts, ion_buf_len(stmts));
}

ion_Stmt (*ion_parse_stmt_if(ion_SrcPos pos)) {
    ion_expect_token(ION_TOKEN_LPAREN);
    ion_Expr (*cond) = ion_parse_expr();
    ion_Stmt (*init) = ion_parse_init_stmt(cond);
    if (init) {
        if (ion_match_token(ION_TOKEN_SEMICOLON)) {
            cond = ion_parse_expr();
        } else {
            cond = NULL;
        }
    }
    ion_expect_token(ION_TOKEN_RPAREN);
    ion_StmtList then_block = ion_parse_stmt_block();
    ion_StmtList else_block = {{NULL, 0}, NULL, 0};
    ion_ElseIf (*elseifs) = NULL;
    while (ion_match_keyword(ion_else_keyword)) {
        if (!(ion_match_keyword(ion_if_keyword))) {
            else_block = ion_parse_stmt_block();
            break;
        }
        ion_Expr (*elseif_cond) = ion_parse_paren_expr();
        ion_StmtList elseif_block = ion_parse_stmt_block();
        ion_ElseIf elseif = {elseif_cond, elseif_block};
        ion_buf_push((void (**))(&(elseifs)), &(elseif), sizeof(elseif));
    }
    return ion_new_stmt_if(pos, init, cond, then_block, elseifs, ion_buf_len(elseifs), else_block);
}

ion_Stmt (*ion_parse_stmt_while(ion_SrcPos pos)) {
    ion_Expr (*cond) = ion_parse_paren_expr();
    return ion_new_stmt_while(pos, cond, ion_parse_stmt_block());
}

ion_Stmt (*ion_parse_stmt_do_while(ion_SrcPos pos)) {
    ion_StmtList block = ion_parse_stmt_block();
    if (!(ion_match_keyword(ion_while_keyword))) {
        ion_fatal_error(ion_token.pos, "Expected \'while\' after \'do\' block");
        return NULL;
    }
    ion_Stmt (*stmt) = ion_new_stmt_do_while(pos, ion_parse_paren_expr(), block);
    ion_expect_token(ION_TOKEN_SEMICOLON);
    return stmt;
}

bool ion_is_assign_op(void) {
    return ((ION_TOKEN_FIRST_ASSIGN) <= (ion_token.kind)) && ((ion_token.kind) <= (ION_TOKEN_LAST_ASSIGN));
}

ion_Stmt (*ion_parse_init_stmt(ion_Expr (*left))) {
    if (ion_match_token(ION_TOKEN_COLON_ASSIGN)) {
        if ((left->kind) != (ION_EXPR_NAME)) {
            ion_fatal_error(ion_token.pos, ":= must be preceded by a name");
            return NULL;
        }
        return ion_new_stmt_init(left->pos, left->name, NULL, ion_parse_expr());
    } else if (ion_match_token(ION_TOKEN_COLON)) {
        if ((left->kind) != (ION_EXPR_NAME)) {
            ion_fatal_error(ion_token.pos, ": must be preceded by a name");
            return NULL;
        }
        char const ((*name)) = left->name;
        ion_Typespec (*type) = ion_parse_type();
        ion_Expr (*expr) = NULL;
        if (ion_match_token(ION_TOKEN_ASSIGN)) {
            expr = ion_parse_expr();
        }
        return ion_new_stmt_init(left->pos, name, type, expr);
    } else {
        return NULL;
    }
}

ion_Stmt (*ion_parse_simple_stmt(void)) {
    ion_SrcPos pos = ion_token.pos;
    ion_Expr (*expr) = ion_parse_expr();
    ion_Stmt (*stmt) = ion_parse_init_stmt(expr);
    if (!(stmt)) {
        if (ion_is_assign_op()) {
            ion_TokenKind op = ion_token.kind;
            ion_next_token();
            stmt = ion_new_stmt_assign(pos, op, expr, ion_parse_expr());
        } else {
            stmt = ion_new_stmt_expr(pos, expr);
        }
    }
    return stmt;
}

ion_Stmt (*ion_parse_stmt_for(ion_SrcPos pos)) {
    ion_expect_token(ION_TOKEN_LPAREN);
    ion_Stmt (*init) = NULL;
    if (!(ion_is_token(ION_TOKEN_SEMICOLON))) {
        init = ion_parse_simple_stmt();
    }
    ion_expect_token(ION_TOKEN_SEMICOLON);
    ion_Expr (*cond) = NULL;
    if (!(ion_is_token(ION_TOKEN_SEMICOLON))) {
        cond = ion_parse_expr();
    }
    ion_Stmt (*next) = NULL;
    if (ion_match_token(ION_TOKEN_SEMICOLON)) {
        if (!(ion_is_token(ION_TOKEN_RPAREN))) {
            next = ion_parse_simple_stmt();
            if ((next->kind) == (ION_STMT_INIT)) {
                ion_error(ion_token.pos, "Init statements not allowed in for-statement\'s next clause");
            }
        }
    }
    ion_expect_token(ION_TOKEN_RPAREN);
    return ion_new_stmt_for(pos, init, cond, next, ion_parse_stmt_block());
}

ion_SwitchCasePattern ion_parse_switch_case_pattern(void) {
    ion_Expr (*start) = ion_parse_expr();
    ion_Expr (*end) = NULL;
    if (ion_match_token(ION_TOKEN_ELLIPSIS)) {
        end = ion_parse_expr();
    }
    return (ion_SwitchCasePattern){start, end};
}

ion_SwitchCase ion_parse_stmt_switch_case(void) {
    ion_SwitchCasePattern (*patterns) = NULL;
    bool is_default = false;
    bool is_first_case = true;
    while ((ion_is_keyword(ion_case_keyword)) || (ion_is_keyword(ion_default_keyword))) {
        if (ion_match_keyword(ion_case_keyword)) {
            if (!(is_first_case)) {
                ion_error(ion_token.pos, "Use comma-separated expressions to match multiple values with one case label");
                is_first_case = false;
            }
            ion_SwitchCasePattern pattern = ion_parse_switch_case_pattern();
            ion_buf_push((void (**))(&(patterns)), &(pattern), sizeof(pattern));
            while (ion_match_token(ION_TOKEN_COMMA)) {
                pattern = ion_parse_switch_case_pattern();
                ion_buf_push((void (**))(&(patterns)), &(pattern), sizeof(pattern));
            }
        } else {
            assert(ion_is_keyword(ion_default_keyword));
            ion_next_token();
            if (is_default) {
                ion_error(ion_token.pos, "Duplicate default labels in same switch clause");
            }
            is_default = true;
        }
        ion_expect_token(ION_TOKEN_COLON);
    }
    ion_SrcPos pos = ion_token.pos;
    ion_Stmt (*(*stmts)) = {0};
    while ((((!(ion_is_token_eof())) && (!(ion_is_token(ION_TOKEN_RBRACE)))) && (!(ion_is_keyword(ion_case_keyword)))) && (!(ion_is_keyword(ion_default_keyword)))) {
        ion_Stmt (*stmt) = ion_parse_stmt();
        ion_buf_push((void (**))(&(stmts)), &(stmt), sizeof(stmt));
    }
    return (ion_SwitchCase){patterns, ion_buf_len(patterns), is_default, ion_new_stmt_list(pos, stmts, ion_buf_len(stmts))};
}

ion_Stmt (*ion_parse_stmt_switch(ion_SrcPos pos)) {
    ion_Expr (*expr) = ion_parse_paren_expr();
    ion_SwitchCase (*cases) = {0};
    ion_expect_token(ION_TOKEN_LBRACE);
    while ((!(ion_is_token_eof())) && (!(ion_is_token(ION_TOKEN_RBRACE)))) {
        ion_SwitchCase case_stmt = ion_parse_stmt_switch_case();
        ion_buf_push((void (**))(&(cases)), &(case_stmt), sizeof(case_stmt));
    }
    ion_expect_token(ION_TOKEN_RBRACE);
    return ion_new_stmt_switch(pos, expr, cases, ion_buf_len(cases));
}

ion_Stmt (*ion_parse_stmt(void)) {
    ion_Notes notes = ion_parse_notes();
    ion_SrcPos pos = ion_token.pos;
    ion_Stmt (*stmt) = {0};
    if (ion_match_keyword(ion_if_keyword)) {
        stmt = ion_parse_stmt_if(pos);
    } else if (ion_match_keyword(ion_while_keyword)) {
        stmt = ion_parse_stmt_while(pos);
    } else if (ion_match_keyword(ion_do_keyword)) {
        stmt = ion_parse_stmt_do_while(pos);
    } else if (ion_match_keyword(ion_for_keyword)) {
        stmt = ion_parse_stmt_for(pos);
    } else if (ion_match_keyword(ion_switch_keyword)) {
        stmt = ion_parse_stmt_switch(pos);
    } else if (ion_is_token(ION_TOKEN_LBRACE)) {
        stmt = ion_new_stmt_block(pos, ion_parse_stmt_block());
    } else if (ion_match_keyword(ion_break_keyword)) {
        ion_expect_token(ION_TOKEN_SEMICOLON);
        stmt = ion_new_stmt_break(pos);
    } else if (ion_match_keyword(ion_continue_keyword)) {
        ion_expect_token(ION_TOKEN_SEMICOLON);
        stmt = ion_new_stmt_continue(pos);
    } else if (ion_match_keyword(ion_return_keyword)) {
        ion_Expr (*expr) = {0};
        if (!(ion_is_token(ION_TOKEN_SEMICOLON))) {
            expr = ion_parse_expr();
        }
        ion_expect_token(ION_TOKEN_SEMICOLON);
        stmt = ion_new_stmt_return(pos, expr);
    } else if (ion_match_token(ION_TOKEN_POUND)) {
        ion_Note note = ion_parse_note();
        ion_expect_token(ION_TOKEN_SEMICOLON);
        stmt = ion_new_stmt_note(pos, note);
    } else if (ion_match_token(ION_TOKEN_COLON)) {
        stmt = ion_new_stmt_label(pos, ion_parse_name());
    } else if (ion_match_keyword(ion_goto_keyword)) {
        stmt = ion_new_stmt_goto(pos, ion_parse_name());
        ion_expect_token(ION_TOKEN_SEMICOLON);
    } else {
        stmt = ion_parse_simple_stmt();
        ion_expect_token(ION_TOKEN_SEMICOLON);
    }
    stmt->notes = notes;
    return stmt;
}

char const ((*ion_parse_name(void))) {
    char const ((*name)) = ion_token.name;
    ion_expect_token(ION_TOKEN_NAME);
    return name;
}

ion_EnumItem ion_parse_decl_enum_item(void) {
    ion_SrcPos pos = ion_token.pos;
    char const ((*name)) = ion_parse_name();
    ion_Expr (*init) = NULL;
    if (ion_match_token(ION_TOKEN_ASSIGN)) {
        init = ion_parse_expr();
    }
    return (ion_EnumItem){pos, name, init};
}

ion_Decl (*ion_parse_decl_enum(ion_SrcPos pos)) {
    char const ((*name)) = NULL;
    if (ion_is_token(ION_TOKEN_NAME)) {
        name = ion_parse_name();
    }
    ion_Typespec (*type) = NULL;
    if (ion_match_token(ION_TOKEN_ASSIGN)) {
        type = ion_parse_type();
    }
    ion_expect_token(ION_TOKEN_LBRACE);
    ion_EnumItem (*items) = NULL;
    while (!(ion_is_token(ION_TOKEN_RBRACE))) {
        ion_EnumItem item = ion_parse_decl_enum_item();
        ion_buf_push((void (**))(&(items)), &(item), sizeof(item));
        if (!(ion_match_token(ION_TOKEN_COMMA))) {
            break;
        }
    }
    ion_expect_token(ION_TOKEN_RBRACE);
    return ion_new_decl_enum(pos, name, type, items, ion_buf_len(items));
}

ion_AggregateItem ion_parse_decl_aggregate_item(void) {
    ion_SrcPos pos = ion_token.pos;
    if (ion_match_keyword(ion_struct_keyword)) {
        return (ion_AggregateItem){.pos = pos, .kind = ION_AGGREGATE_ITEM_SUBAGGREGATE, .subaggregate = ion_parse_aggregate(ION_AGGREGATE_STRUCT)};
    } else if (ion_match_keyword(ion_union_keyword)) {
        #line 628
        return (ion_AggregateItem){.pos = pos, .kind = ION_AGGREGATE_ITEM_SUBAGGREGATE, .subaggregate = ion_parse_aggregate(ION_AGGREGATE_UNION)};
    } else {
        #line 634
        char const ((*(*names))) = NULL;
        char const ((*name)) = ion_parse_name();
        ion_buf_push((void (**))(&(names)), &(name), sizeof(name));
        while (ion_match_token(ION_TOKEN_COMMA)) {
            name = ion_parse_name();
            ion_buf_push((void (**))(&(names)), &(name), sizeof(name));
        }
        ion_expect_token(ION_TOKEN_COLON);
        ion_Typespec (*type) = ion_parse_type();
        ion_expect_token(ION_TOKEN_SEMICOLON);
        return (ion_AggregateItem){.pos = pos, .kind = ION_AGGREGATE_ITEM_FIELD, .names = names, .num_names = ion_buf_len(names), .type = type};
    }
}

#line 654
ion_Aggregate (*ion_parse_aggregate(ion_AggregateKind kind)) {
    ion_SrcPos pos = ion_token.pos;
    ion_expect_token(ION_TOKEN_LBRACE);
    ion_AggregateItem (*items) = NULL;
    while ((!(ion_is_token_eof())) && (!(ion_is_token(ION_TOKEN_RBRACE)))) {
        ion_AggregateItem item = ion_parse_decl_aggregate_item();
        ion_buf_push((void (**))(&(items)), &(item), sizeof(item));
    }
    ion_expect_token(ION_TOKEN_RBRACE);
    return ion_new_aggregate(pos, kind, items, ion_buf_len(items));
}

ion_Decl (*ion_parse_decl_aggregate(ion_SrcPos pos, ion_DeclKind kind)) {
    assert(((kind) == (ION_DECL_STRUCT)) || ((kind) == (ION_DECL_UNION)));
    char const ((*name)) = ion_parse_name();
    ion_AggregateKind aggregate_kind = ((kind) == (ION_DECL_STRUCT) ? ION_AGGREGATE_STRUCT : ION_AGGREGATE_UNION);
    if (ion_match_token(ION_TOKEN_SEMICOLON)) {
        ion_Decl (*decl) = ion_new_decl_aggregate(pos, kind, name, ion_new_aggregate(pos, aggregate_kind, NULL, 0));
        decl->is_incomplete = true;
        return decl;
    } else {
        return ion_new_decl_aggregate(pos, kind, name, ion_parse_aggregate(aggregate_kind));
    }
}

ion_Decl (*ion_parse_decl_var(ion_SrcPos pos)) {
    char const ((*name)) = ion_parse_name();
    if (ion_match_token(ION_TOKEN_ASSIGN)) {
        ion_Expr (*expr) = ion_parse_expr();
        ion_expect_token(ION_TOKEN_SEMICOLON);
        return ion_new_decl_var(pos, name, NULL, expr);
    } else if (ion_match_token(ION_TOKEN_COLON)) {
        ion_Typespec (*type) = ion_parse_type();
        ion_Expr (*expr) = NULL;
        if (ion_match_token(ION_TOKEN_ASSIGN)) {
            expr = ion_parse_expr();
        }
        ion_expect_token(ION_TOKEN_SEMICOLON);
        return ion_new_decl_var(pos, name, type, expr);
    } else {
        ion_fatal_error(ion_token.pos, "Expected : or = after var, got %s", ion_token_info());
        return NULL;
    }
}

ion_Decl (*ion_parse_decl_const(ion_SrcPos pos)) {
    char const ((*name)) = ion_parse_name();
    ion_Typespec (*type) = NULL;
    if (ion_match_token(ION_TOKEN_COLON)) {
        type = ion_parse_type();
    }
    ion_expect_token(ION_TOKEN_ASSIGN);
    ion_Expr (*expr) = ion_parse_expr();
    ion_expect_token(ION_TOKEN_SEMICOLON);
    return ion_new_decl_const(pos, name, type, expr);
}

ion_Decl (*ion_parse_decl_typedef(ion_SrcPos pos)) {
    char const ((*name)) = ion_parse_name();
    ion_expect_token(ION_TOKEN_ASSIGN);
    ion_Typespec (*type) = ion_parse_type();
    ion_expect_token(ION_TOKEN_SEMICOLON);
    return ion_new_decl_typedef(pos, name, type);
}

ion_FuncParam ion_parse_decl_func_param(void) {
    ion_SrcPos pos = ion_token.pos;
    char const ((*name)) = ion_parse_name();
    ion_expect_token(ION_TOKEN_COLON);
    ion_Typespec (*type) = ion_parse_type();
    return (ion_FuncParam){pos, name, type};
}

ion_Decl (*ion_parse_decl_func(ion_SrcPos pos)) {
    char const ((*name)) = ion_parse_name();
    ion_expect_token(ION_TOKEN_LPAREN);
    ion_FuncParam (*params) = NULL;
    bool has_varargs = false;
    if (!(ion_is_token(ION_TOKEN_RPAREN))) {
        ion_FuncParam param = ion_parse_decl_func_param();
        ion_buf_push((void (**))(&(params)), &(param), sizeof(param));
        while (ion_match_token(ION_TOKEN_COMMA)) {
            if (ion_match_token(ION_TOKEN_ELLIPSIS)) {
                if (has_varargs) {
                    ion_error(ion_token.pos, "Multiple ellipsis in function declaration");
                }
                has_varargs = true;
            } else {
                if (has_varargs) {
                    ion_error(ion_token.pos, "Ellipsis must be last parameter in function declaration");
                }
                param = ion_parse_decl_func_param();
                ion_buf_push((void (**))(&(params)), &(param), sizeof(param));
            }
        }
    }
    ion_expect_token(ION_TOKEN_RPAREN);
    ion_Typespec (*ret_type) = NULL;
    if (ion_match_token(ION_TOKEN_COLON)) {
        ret_type = ion_parse_type();
    }
    ion_StmtList block = {0};
    bool is_incomplete = {0};
    if (ion_match_token(ION_TOKEN_SEMICOLON)) {
        is_incomplete = true;
    } else {
        block = ion_parse_stmt_block();
        is_incomplete = false;
    }
    ion_Decl (*decl) = ion_new_decl_func(pos, name, params, ion_buf_len(params), ret_type, has_varargs, block);
    decl->is_incomplete = is_incomplete;
    return decl;
}

ion_NoteArg ion_parse_note_arg(void) {
    ion_SrcPos pos = ion_token.pos;
    ion_Expr (*expr) = ion_parse_expr();
    char const ((*name)) = NULL;
    if (ion_match_token(ION_TOKEN_ASSIGN)) {
        if ((expr->kind) != (ION_EXPR_NAME)) {
            ion_fatal_error(ion_token.pos, "Left of: operand = in note argument must be a name");
        }
        name = expr->name;
        expr = ion_parse_expr();
    }
    return (ion_NoteArg){.pos = pos, .name = name, .expr = expr};
}

ion_Note ion_parse_note(void) {
    ion_SrcPos pos = ion_token.pos;
    char const ((*name)) = ion_parse_name();
    ion_NoteArg (*args) = NULL;
    if (ion_match_token(ION_TOKEN_LPAREN)) {
        ion_NoteArg arg = ion_parse_note_arg();
        ion_buf_push((void (**))(&(args)), &(arg), sizeof(arg));
        while (ion_match_token(ION_TOKEN_COMMA)) {
            arg = ion_parse_note_arg();
            ion_buf_push((void (**))(&(args)), &(arg), sizeof(arg));
        }
        ion_expect_token(ION_TOKEN_RPAREN);
    }
    return ion_new_note(pos, name, args, ion_buf_len(args));
}

ion_Notes ion_parse_notes(void) {
    ion_Note (*notes) = NULL;
    while (ion_match_token(ION_TOKEN_AT)) {
        ion_Note note = ion_parse_note();
        ion_buf_push((void (**))(&(notes)), &(note), sizeof(note));
    }
    return ion_new_notes(notes, ion_buf_len(notes));
}

ion_Decl (*ion_parse_decl_note(ion_SrcPos pos)) {
    return ion_new_decl_note(pos, ion_parse_note());
}

ion_Decl (*ion_parse_decl_import(ion_SrcPos pos)) {
    char const ((*rename_name)) = {0};
    bool is_relative = {0};
    repeat: ;
    is_relative = false;
    if (ion_match_token(ION_TOKEN_DOT)) {
        is_relative = true;
    }
    char const ((*name)) = ion_token.name;
    ion_expect_token(ION_TOKEN_NAME);
    if ((!(is_relative)) && (ion_match_token(ION_TOKEN_ASSIGN))) {
        if (rename_name) {
            ion_fatal_error(pos, "Only one import assignment is allowed");
        }
        rename_name = name;
        goto repeat;
    }
    char const ((*(*names))) = NULL;
    ion_buf_push((void (**))(&(names)), &(name), sizeof(name));
    while (ion_match_token(ION_TOKEN_DOT)) {
        ion_buf_push((void (**))(&(names)), &(ion_token.name), sizeof(ion_token.name));
        ion_expect_token(ION_TOKEN_NAME);
    }
    bool import_all = false;
    ion_ImportItem (*items) = {0};
    if (ion_match_token(ION_TOKEN_LBRACE)) {
        while (!(ion_is_token(ION_TOKEN_RBRACE))) {
            if (ion_match_token(ION_TOKEN_ELLIPSIS)) {
                import_all = true;
            } else {
                char const ((*item_name)) = ion_parse_name();
                if (ion_match_token(ION_TOKEN_ASSIGN)) {
                    ion_ImportItem item = {.name = ion_parse_name(), .rename = item_name};
                    ion_buf_push((void (**))(&(items)), &(item), sizeof(item));
                } else {
                    ion_ImportItem item = {.name = item_name};
                    ion_buf_push((void (**))(&(items)), &(item), sizeof(item));
                }
                if (!(ion_match_token(ION_TOKEN_COMMA))) {
                    break;
                }
            }
        }
        ion_expect_token(ION_TOKEN_RBRACE);
    }
    return ion_new_decl_import(pos, rename_name, is_relative, names, ion_buf_len(names), import_all, items, ion_buf_len(items));
}

ion_Decl (*ion_parse_decl_opt(void)) {
    ion_SrcPos pos = ion_token.pos;
    if (ion_match_keyword(ion_enum_keyword)) {
        return ion_parse_decl_enum(pos);
    } else if (ion_match_keyword(ion_struct_keyword)) {
        return ion_parse_decl_aggregate(pos, ION_DECL_STRUCT);
    } else if (ion_match_keyword(ion_union_keyword)) {
        return ion_parse_decl_aggregate(pos, ION_DECL_UNION);
    } else if (ion_match_keyword(ion_const_keyword)) {
        return ion_parse_decl_const(pos);
    } else if (ion_match_keyword(ion_typedef_keyword)) {
        return ion_parse_decl_typedef(pos);
    } else if (ion_match_keyword(ion_func_keyword)) {
        return ion_parse_decl_func(pos);
    } else if (ion_match_keyword(ion_var_keyword)) {
        return ion_parse_decl_var(pos);
    } else if (ion_match_keyword(ion_import_keyword)) {
        return ion_parse_decl_import(pos);
    } else if (ion_match_token(ION_TOKEN_POUND)) {
        return ion_parse_decl_note(pos);
    } else {
        return NULL;
    }
}

ion_Decl (*ion_parse_decl(void)) {
    ion_Notes notes = ion_parse_notes();
    ion_Decl (*decl) = ion_parse_decl_opt();
    if (!(decl)) {
        ion_fatal_error(ion_token.pos, "Expected declaration keyword, got %s", ion_token_info());
    }
    decl->notes = notes;
    return decl;
}

ion_Decls (*ion_parse_decls(void)) {
    ion_Decl (*(*decls)) = NULL;
    while (!(ion_is_token(ION_TOKEN_EOF))) {
        ion_Decl (*decl) = ion_parse_decl();
        ion_buf_push((void (**))(&(decls)), &(decl), sizeof(decl));
    }
    return ion_new_decls(decls, ion_buf_len(decls));
}

ion_Package (*ion_current_package);
ion_Package (*ion_builtin_package);
ion_Map ion_package_map;
ion_Package (*(*ion_package_list));
uint8_t ion_reachable_phase = ION_REACHABLE_NATURAL;
#line 61 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\resolve.ion"
ion_Sym (*ion_get_package_sym(ion_Package (*package), char const ((*name)))) {
    return ion_map_get(&(package->syms_map), name);
}

void ion_add_package(ion_Package (*package)) {
    ion_Package (*old_package) = ion_map_get(&(ion_package_map), package->path);
    if ((old_package) != (package)) {
        assert(!(old_package));
        ion_map_put(&(ion_package_map), package->path, package);
        ion_buf_push((void (**))(&(ion_package_list)), &(package), sizeof(package));
    }
}

ion_Package (*ion_enter_package(ion_Package (*new_package))) {
    ion_Package (*old_package) = ion_current_package;
    ion_current_package = new_package;
    return old_package;
}

void ion_leave_package(ion_Package (*old_package)) {
    ion_current_package = old_package;
}

ion_Sym (*(*ion_reachable_syms));
ion_Sym (*(*ion_sorted_syms));
ion_Sym (ion_local_syms[ION_MAX_LOCAL_SYMS]);
ion_Sym (*ion_local_syms_end) = ion_local_syms;
#line 89
bool ion_is_local_sym(ion_Sym (*sym)) {
    return ((ion_local_syms) <= (sym)) && ((sym) < (ion_local_syms_end));
}

ion_Sym (*ion_sym_new(ion_SymKind kind, char const ((*name)), ion_Decl (*decl))) {
    ion_Sym (*sym) = ion_xcalloc(1, sizeof(ion_Sym));
    sym->kind = kind;
    sym->name = name;
    sym->decl = decl;
    sym->home_package = ion_current_package;
    ion_set_resolved_sym(sym, sym);
    return sym;
}

void ion_process_decl_notes(ion_Decl (*decl), ion_Sym (*sym)) {
    ion_Note (*foreign_note) = ion_get_decl_note(decl, ion_foreign_name);
    if (foreign_note) {
        if ((foreign_note->num_args) > (1)) {
            ion_fatal_error(decl->pos, "@foreign takes 0 or 1 argument");
        }
        char const ((*external_name)) = {0};
        if ((foreign_note->num_args) == (0)) {
            external_name = sym->name;
        } else {
            ion_Expr (*arg) = foreign_note->args[0].expr;
            if ((arg->kind) != (ION_EXPR_STR)) {
                ion_fatal_error(decl->pos, "@foreign argument 1 must be a string literal");
            }
            external_name = arg->str_lit.val;
        }
        sym->external_name = external_name;
    }
}

ion_Sym (*ion_sym_decl(ion_Decl (*decl))) {
    ion_SymKind kind = ION_SYM_NONE;
    switch (decl->kind) {
    case ION_DECL_STRUCT:
    case ION_DECL_UNION:
    case ION_DECL_TYPEDEF:
    case ION_DECL_ENUM: {
        kind = ION_SYM_TYPE;
        break;
    }
    case ION_DECL_VAR: {
        #line 132
        kind = ION_SYM_VAR;
        break;
    }
    case ION_DECL_CONST: {
        #line 134
        kind = ION_SYM_CONST;
        break;
    }
    case ION_DECL_FUNC: {
        #line 136
        kind = ION_SYM_FUNC;
        break;
    }
    default: {
        #line 138
        assert(0);
        break;
    }
    }
    #line 140
    ion_Sym (*sym) = ion_sym_new(kind, decl->name, decl);
    ion_set_resolved_sym(decl, sym);
    ion_process_decl_notes(decl, sym);
    return sym;
}

ion_Sym (*ion_sym_get_local(char const ((*name)))) {
    for (ion_Sym (*it) = ion_local_syms_end; (it) != (ion_local_syms); (it)--) {
        ion_Sym (*sym) = (it) - (1);
        if ((sym->name) == (name)) {
            return sym;
        }
    }
    return NULL;
}

ion_Sym (*ion_sym_get(char const ((*name)))) {
    ion_Sym (*sym) = ion_sym_get_local(name);
    return (sym ? sym : ion_get_package_sym(ion_current_package, name));
}

bool ion_sym_push_var(char const ((*name)), ion_Type (*type)) {
    if (ion_sym_get_local(name)) {
        return false;
    }
    if ((ion_local_syms_end) == ((ion_local_syms) + (ION_MAX_LOCAL_SYMS))) {
        ion_fatal("Too many local symbols");
    }
    *((ion_local_syms_end)++) = (ion_Sym){.name = name, .kind = ION_SYM_VAR, .state = ION_SYM_RESOLVED, .type = type};
    #line 174
    return true;
}

ion_Sym (*ion_sym_enter(void)) {
    return ion_local_syms_end;
}

void ion_sym_leave(ion_Sym (*sym)) {
    ion_local_syms_end = sym;
}

void ion_sym_global_put(char const ((*name)), ion_Sym (*sym)) {
    ion_Sym (*old_sym) = ion_map_get(&(ion_current_package->syms_map), name);
    if (old_sym) {
        if ((sym) == (old_sym)) {
            return;
        }
        if ((((sym->kind) == (ION_SYM_PACKAGE)) && ((old_sym->kind) == (ION_SYM_PACKAGE))) && ((sym->package) == (old_sym->package))) {
            return;
        }
        ion_SrcPos pos = (sym->decl ? sym->decl->pos : ion_pos_builtin);
        if (old_sym->decl) {
            ion_warning(old_sym->decl->pos, "Previous definition of \'%s\'", name);
        }
        ion_fatal_error(pos, "Duplicate definition of global symbol \'%s\'.", name);
    }
    ion_map_put(&(ion_current_package->syms_map), name, sym);
    ion_buf_push((void (**))(&(ion_current_package->syms)), &(sym), sizeof(sym));
}

ion_Sym (*ion_sym_global_type(char const ((*name)), ion_Type (*type))) {
    name = ion_str_intern(name);
    ion_Sym (*sym) = ion_sym_new(ION_SYM_TYPE, name, NULL);
    sym->state = ION_SYM_RESOLVED;
    sym->type = type;
    sym->external_name = name;
    ion_sym_global_put(name, sym);
    return sym;
}

ion_Sym (*ion_sym_global_decl(ion_Decl (*decl))) {
    ion_Sym (*sym) = NULL;
    if (decl->name) {
        sym = ion_sym_decl(decl);
        ion_sym_global_put(sym->name, sym);
    }
    if ((decl->kind) == (ION_DECL_ENUM)) {
        ion_Typespec (*enum_typespec) = ion_new_typespec_name(decl->pos, (sym ? sym->name : ion_str_intern("int")));
        char const ((*prev_item_name)) = NULL;
        for (size_t i = 0; (i) < (decl->enum_decl.num_items); (i)++) {
            ion_EnumItem item = decl->enum_decl.items[i];
            ion_Expr (*init) = {0};
            if (item.init) {
                init = item.init;
            } else if (prev_item_name) {
                init = ion_new_expr_binary(item.pos, ION_TOKEN_ADD, ion_new_expr_name(item.pos, prev_item_name), ion_new_expr_int(item.pos, 1, 0, 0));
            } else {
                init = ion_new_expr_int(item.pos, 0, 0, 0);
            }
            ion_Decl (*item_decl) = ion_new_decl_const(item.pos, item.name, enum_typespec, init);
            item_decl->notes = decl->notes;
            ion_sym_global_decl(item_decl);
            prev_item_name = item.name;
        }
    }
    return sym;
}

void ion_put_type_name(char (*(*buf)), ion_Type (*type)) {
    char const ((*type_name)) = ion_type_names[type->kind];
    if (type_name) {
        ion_buf_printf(buf, "%s", type_name);
    } else {
        switch (type->kind) {
        case ION_CMPL_TYPE_STRUCT:
        case ION_CMPL_TYPE_UNION:
        case ION_CMPL_TYPE_ENUM:
        case ION_CMPL_TYPE_INCOMPLETE: {
            assert(type->sym);
            ion_buf_printf(buf, "%s", type->sym->name);
            break;
        }
        case ION_CMPL_TYPE_CONST: {
            #line 255
            ion_put_type_name(buf, type->base);
            ion_buf_printf(buf, " const");
            break;
        }
        case ION_CMPL_TYPE_PTR: {
            #line 258
            ion_put_type_name(buf, type->base);
            ion_buf_printf(buf, "*");
            break;
        }
        case ION_CMPL_TYPE_ARRAY: {
            #line 261
            ion_put_type_name(buf, type->base);
            ion_buf_printf(buf, "[%zu]", type->num_elems);
            break;
        }
        case ION_CMPL_TYPE_FUNC: {
            #line 264
            ion_buf_printf(buf, "func(");
            for (size_t i = 0; (i) < (type->function.num_params); (i)++) {
                if ((i) != (0)) {
                    ion_buf_printf(buf, ", ");
                }
                ion_put_type_name(buf, type->function.params[i]);
            }
            if (type->function.has_varargs) {
                ion_buf_printf(buf, "...");
            }
            ion_buf_printf(buf, ")");
            if ((type->function.ret) != (ion_type_void)) {
                ion_buf_printf(buf, ": ");
                ion_put_type_name(buf, type->function.ret);
            }
            break;
        }
        default: {
            #line 280
            assert(0);
            break;
        }
        }
    }
}

#line 285
char (*ion_get_type_name(ion_Type (*type))) {
    char (*buf) = NULL;
    ion_put_type_name(&(buf), type);
    return buf;
}

ion_Operand ion_operand_null;
#line 300
ion_Operand ion_operand_rvalue(ion_Type (*type)) {
    return (ion_Operand){.type = ion_unqualify_type(type)};
}

#line 306
ion_Operand ion_operand_lvalue(ion_Type (*type)) {
    return (ion_Operand){.type = type, .is_lvalue = true};
}

#line 313
ion_Operand ion_operand_const(ion_Type (*type), ion_Val val) {
    return (ion_Operand){.type = ion_unqualify_type(type), .is_const = true, .val = val};
}

#line 321
ion_Type (*ion_type_decay(ion_Type (*type))) {
    type = ion_unqualify_type(type);
    if ((type->kind) == (ION_CMPL_TYPE_ARRAY)) {
        type = ion_type_ptr(type->base);
    }
    return type;
}

ion_Operand ion_operand_decay(ion_Operand operand) {
    operand.type = ion_type_decay(operand.type);
    operand.is_lvalue = false;
    return operand;
}

#line 337
bool ion_is_convertible(ion_Operand (*operand), ion_Type (*dest)) {
    dest = ion_unqualify_type(dest);
    ion_Type (*src) = ion_unqualify_type(operand->type);
    if ((dest) == (src)) {
        return true;
    } else if ((ion_is_arithmetic_type(dest)) && (ion_is_arithmetic_type(src))) {
        return true;
    } else if ((ion_is_ptr_like_type(dest)) && (ion_is_null_ptr(*(operand)))) {
        return true;
    } else if ((ion_is_ptr_type(dest)) && (ion_is_ptr_type(src))) {
        if ((ion_is_const_type(dest->base)) && (ion_is_const_type(src->base))) {
            return (((dest->base->base) == (src->base->base)) || ((dest->base->base) == (ion_type_void))) || ((src->base->base) == (ion_type_void));
        } else {
            ion_Type (*unqual_dest_base) = ion_unqualify_type(dest->base);
            if ((unqual_dest_base) == (src->base)) {
                return true;
            } else if ((unqual_dest_base) == (ion_type_void)) {
                return (ion_is_const_type(dest->base)) || (!(ion_is_const_type(src->base)));
            } else {
                return (src->base) == (ion_type_void);
            }
        }
    } else {
        return false;
    }
}

bool ion_is_castable(ion_Operand (*operand), ion_Type (*dest)) {
    ion_Type (*src) = operand->type;
    if (ion_is_convertible(operand, dest)) {
        return true;
    } else if (ion_is_integer_type(dest)) {
        return ion_is_ptr_like_type(src);
    } else if (ion_is_integer_type(src)) {
        return ion_is_ptr_like_type(dest);
    } else if ((ion_is_ptr_like_type(dest)) && (ion_is_ptr_like_type(src))) {
        return true;
    } else {
        return false;
    }
}

#line 382
bool ion_convert_operand(ion_Operand (*operand), ion_Type (*type)) {
    if (ion_is_convertible(operand, type)) {
        cast_operand(operand, type);
        operand->type = ion_unqualify_type(operand->type);
        operand->is_lvalue = false;
        return true;
    }
    return false;
}

#line 394
bool ion_is_null_ptr(ion_Operand operand) {
    if ((operand.is_const) && (((ion_is_ptr_type(operand.type)) || (ion_is_integer_type(operand.type))))) {
        cast_operand(&(operand), ion_type_ullong);
        return (operand.val.ull) == (0);
    } else {
        return false;
    }
}

void ion_promote_operand(ion_Operand (*operand)) {
    switch (operand->type->kind) {
    case ION_CMPL_TYPE_BOOL:
    case ION_CMPL_TYPE_CHAR:
    case ION_CMPL_TYPE_SCHAR:
    case ION_CMPL_TYPE_UCHAR:
    case ION_CMPL_TYPE_SHORT:
    case ION_CMPL_TYPE_USHORT:
    case ION_CMPL_TYPE_ENUM: {
        cast_operand(operand, ion_type_int);
        break;
    }
    default: {
        break;
    }
    }
}

#line 418
void ion_unify_arithmetic_operands(ion_Operand (*left), ion_Operand (*right)) {
    if ((left->type) == (ion_type_double)) {
        cast_operand(right, ion_type_double);
    } else if ((right->type) == (ion_type_double)) {
        cast_operand(left, ion_type_double);
    } else if ((left->type) == (ion_type_float)) {
        cast_operand(right, ion_type_float);
    } else if ((right->type) == (ion_type_float)) {
        cast_operand(left, ion_type_float);
    } else {
        assert(ion_is_integer_type(left->type));
        assert(ion_is_integer_type(right->type));
        ion_promote_operand(left);
        ion_promote_operand(right);
        if ((left->type) != (right->type)) {
            if ((ion_is_signed_type(left->type)) == (ion_is_signed_type(right->type))) {
                if ((ion_type_rank(left->type)) <= (ion_type_rank(right->type))) {
                    cast_operand(left, right->type);
                } else {
                    cast_operand(right, left->type);
                }
            } else if ((ion_is_signed_type(left->type)) && ((ion_type_rank(right->type)) >= (ion_type_rank(left->type)))) {
                cast_operand(left, right->type);
            } else if ((ion_is_signed_type(right->type)) && ((ion_type_rank(left->type)) >= (ion_type_rank(right->type)))) {
                cast_operand(right, left->type);
            } else if ((ion_is_signed_type(left->type)) && ((ion_type_sizeof(left->type)) > (ion_type_sizeof(right->type)))) {
                cast_operand(right, left->type);
            } else if ((ion_is_signed_type(right->type)) && ((ion_type_sizeof(right->type)) > (ion_type_sizeof(left->type)))) {
                cast_operand(left, right->type);
            } else {
                ion_Type (*type) = ion_unsigned_type((ion_is_signed_type(left->type) ? left->type : right->type));
                cast_operand(left, type);
                cast_operand(right, type);
            }
        }
    }
    assert((left->type) == (right->type));
}

ion_Map ion_resolved_val_map;
#line 459
ion_Val ion_get_resolved_val(void (*ptr)) {
    uint64_t u64 = ion_map_get_uint64(&(ion_resolved_val_map), ptr);
    ion_Val val = {0};
    assert((sizeof(val)) == (sizeof(u64)));
    memcpy(&(val), &(u64), sizeof(u64));
    return val;
}

void ion_set_resolved_val(void (*ptr), ion_Val val) {
    uint64_t u64 = {0};
    assert((sizeof(val)) == (sizeof(u64)));
    memcpy(&(u64), &(val), sizeof(val));
    ion_map_put_uint64(&(ion_resolved_val_map), ptr, u64);
}

ion_Map ion_resolved_type_map;
#line 476
ion_Type (*ion_get_resolved_type(void (*ptr))) {
    return ion_map_get(&(ion_resolved_type_map), ptr);
}

void ion_set_resolved_type(void (*ptr), ion_Type (*type)) {
    ion_map_put(&(ion_resolved_type_map), ptr, type);
}

ion_Map ion_resolved_sym_map;
#line 486
ion_Sym (*ion_get_resolved_sym(void const ((*ptr)))) {
    return ion_map_get(&(ion_resolved_sym_map), ptr);
}

void ion_set_resolved_sym(void const ((*ptr)), ion_Sym (*sym)) {
    if (!(ion_is_local_sym(sym))) {
        ion_map_put(&(ion_resolved_sym_map), ptr, sym);
    }
}

ion_Map ion_resolved_expected_type_map;
#line 498
ion_Type (*ion_get_resolved_expected_type(ion_Expr (*expr))) {
    return ion_map_get(&(ion_resolved_expected_type_map), expr);
}

void ion_set_resolved_expected_type(ion_Expr (*expr), ion_Type (*type)) {
    if ((expr) && (type)) {
        ion_map_put(&(ion_resolved_expected_type_map), expr, type);
    }
}

ion_Operand ion_resolve_expr(ion_Expr (*expr)) {
    return ion_resolve_expected_expr(expr, NULL);
}

ion_Operand ion_resolve_expr_rvalue(ion_Expr (*expr)) {
    return ion_operand_decay(ion_resolve_expr(expr));
}

ion_Operand ion_resolve_expected_expr_rvalue(ion_Expr (*expr), ion_Type (*expected_type)) {
    return ion_operand_decay(ion_resolve_expected_expr(expr, expected_type));
}

ion_Type (*ion_resolve_typespec(ion_Typespec (*typespec))) {
    if (!(typespec)) {
        return ion_type_void;
    }
    ion_Type (*result) = NULL;
    switch (typespec->kind) {
    case ION_TYPESPEC_NAME: {
        #line 526
        {
            ion_Sym (*sym) = ion_resolve_name(typespec->name);
            if (!(sym)) {
                ion_fatal_error(typespec->pos, "Unresolved type name \'%s\'", typespec->name);
            }
            if ((sym->kind) != (ION_SYM_TYPE)) {
                ion_fatal_error(typespec->pos, "%s must denote a type", typespec->name);
                return NULL;
            }
            ion_set_resolved_sym(typespec, sym);
            result = sym->type;
        }
        break;
    }
    case ION_TYPESPEC_CONST: {
        #line 539
        result = ion_type_const(ion_resolve_typespec(typespec->base));
        break;
    }
    case ION_TYPESPEC_PTR: {
        #line 541
        result = ion_type_ptr(ion_resolve_typespec(typespec->base));
        break;
    }
    case ION_TYPESPEC_ARRAY: {
        #line 542
        {
            int size = 0;
            if (typespec->num_elems) {
                ion_Operand operand = ion_resolve_const_expr(typespec->num_elems);
                if (!(ion_is_integer_type(operand.type))) {
                    ion_fatal_error(typespec->pos, "Array size constant expression must have integer type");
                }
                cast_operand(&(operand), ion_type_int);
                size = operand.val.i;
                if ((size) <= (0)) {
                    ion_fatal_error(typespec->num_elems->pos, "Non-positive array size");
                }
            }
            result = ion_type_array(ion_resolve_typespec(typespec->base), size);
        }
        break;
    }
    case ION_TYPESPEC_FUNC: {
        #line 557
        {
            ion_Type (*(*args)) = NULL;
            for (size_t i = 0; (i) < (typespec->function.num_args); (i)++) {
                ion_Type (*arg) = ion_resolve_typespec(typespec->function.args[i]);
                if ((arg) == (ion_type_void)) {
                    ion_fatal_error(typespec->pos, "Function parameter type cannot be void");
                }
                ion_buf_push((void (**))(&(args)), &(arg), sizeof(arg));
            }
            ion_Type (*ret) = ion_type_void;
            if (typespec->function.ret) {
                ret = ion_resolve_typespec(typespec->function.ret);
            }
            if (ion_is_array_type(ret)) {
                ion_fatal_error(typespec->pos, "Function return type cannot be array");
            }
            result = ion_type_func(args, ion_buf_len(args), ret, false);
        }
        break;
    }
    default: {
        #line 576
        assert(0);
        return NULL;
        break;
    }
    }
    #line 579
    ion_set_resolved_type(typespec, result);
    return result;
}

ion_Type (*ion_complete_aggregate(ion_Type (*type), ion_Aggregate (*aggregate))) {
    ion_TypeField (*fields) = {0};
    for (size_t i = 0; (i) < (aggregate->num_items); (i)++) {
        ion_AggregateItem item = aggregate->items[i];
        if ((item.kind) == (ION_AGGREGATE_ITEM_FIELD)) {
            ion_Type (*item_type) = ion_resolve_typespec(item.type);
            ion_complete_type(item_type);
            if ((ion_type_sizeof(item_type)) == (0)) {
                ion_fatal_error(item.pos, "Field type of size 0 is not allowed");
            }
            for (size_t j = 0; (j) < (item.num_names); (j)++) {
                ion_TypeField type_field = {item.names[j], item_type};
                ion_buf_push((void (**))(&(fields)), &(type_field), sizeof(type_field));
            }
        } else {
            assert((item.kind) == (ION_AGGREGATE_ITEM_SUBAGGREGATE));
            ion_Type (*item_type) = ion_complete_aggregate(NULL, item.subaggregate);
            ion_TypeField type_field = {NULL, item_type};
            ion_buf_push((void (**))(&(fields)), &(type_field), sizeof(type_field));
        }
    }
    if (!(type)) {
        type = ion_type_incomplete(NULL);
        type->kind = ION_CMPL_TYPE_COMPLETING;
    }
    if ((aggregate->kind) == (ION_AGGREGATE_STRUCT)) {
        ion_type_complete_struct(type, fields, ion_buf_len(fields));
    } else {
        assert((aggregate->kind) == (ION_AGGREGATE_UNION));
        ion_type_complete_union(type, fields, ion_buf_len(fields));
    }
    if ((type->aggregate.num_fields) == (0)) {
        ion_fatal_error(aggregate->pos, "No fields");
    }
    if (ion_has_duplicate_fields(type)) {
        ion_fatal_error(aggregate->pos, "Duplicate fields");
    }
    return type;
}

void ion_complete_type(ion_Type (*type)) {
    if ((type->kind) == (ION_CMPL_TYPE_COMPLETING)) {
        ion_fatal_error(type->sym->decl->pos, "Type completion cycle");
        return;
    } else if ((type->kind) != (ION_CMPL_TYPE_INCOMPLETE)) {
        return;
    }
    ion_Sym (*sym) = type->sym;
    ion_Package (*old_package) = ion_enter_package(sym->home_package);
    ion_Decl (*decl) = sym->decl;
    if (decl->is_incomplete) {
        ion_fatal_error(decl->pos, "Trying to use incomplete type as complete type");
    }
    type->kind = ION_CMPL_TYPE_COMPLETING;
    assert(((decl->kind) == (ION_DECL_STRUCT)) || ((decl->kind) == (ION_DECL_UNION)));
    ion_complete_aggregate(type, decl->aggregate);
    ion_buf_push((void (**))(&(ion_sorted_syms)), &(type->sym), sizeof(type->sym));
    ion_leave_package(old_package);
}

ion_Type (*ion_resolve_typed_init(ion_SrcPos pos, ion_Type (*type), ion_Expr (*expr))) {
    ion_Type (*expected_type) = ion_unqualify_type(type);
    ion_Operand operand = ion_resolve_expected_expr(expr, expected_type);
    if (((ion_is_incomplete_array_type(type)) && (ion_is_array_type(operand.type))) && ((type->base) == (operand.type->base))) {
    } else {
        #line 649
        if ((type) && (ion_is_ptr_type(type))) {
            operand = ion_operand_decay(operand);
        }
        if (!(ion_convert_operand(&(operand), expected_type))) {
            return NULL;
        }
    }
    ion_set_resolved_expected_type(expr, operand.type);
    return operand.type;
}

ion_Type (*ion_resolve_init(ion_SrcPos pos, ion_Typespec (*typespec), ion_Expr (*expr))) {
    ion_Type (*type) = {0};
    if (typespec) {
        ion_Type (*declared_type) = ion_resolve_typespec(typespec);
        type = declared_type;
        if (expr) {
            type = ion_resolve_typed_init(pos, declared_type, expr);
            if (!(type)) {
                ion_fatal_error(pos, "Invalid type in initialization. Expected %s", ion_get_type_name(declared_type));
            }
        }
    } else {
        assert(expr);
        type = ion_unqualify_type(ion_resolve_expr(expr).type);
        if ((ion_is_array_type(type)) && ((expr->kind) != (ION_EXPR_COMPOUND))) {
            type = ion_type_decay(type);
            ion_set_resolved_type(expr, type);
        }
        ion_set_resolved_expected_type(expr, type);
    }
    ion_complete_type(type);
    if ((type->size) == (0)) {
        ion_fatal_error(pos, "Cannot declare variable of size 0");
    }
    return type;
}

ion_Type (*ion_resolve_decl_var(ion_Decl (*decl))) {
    assert((decl->kind) == (ION_DECL_VAR));
    return ion_resolve_init(decl->pos, decl->var_decl.type, decl->var_decl.expr);
}

ion_Type (*ion_resolve_decl_const(ion_Decl (*decl), ion_Val (*val))) {
    assert((decl->kind) == (ION_DECL_CONST));
    ion_Operand result = ion_resolve_const_expr(decl->const_decl.expr);
    if (!(ion_is_scalar_type(result.type))) {
        ion_fatal_error(decl->pos, "Const declarations must have scalar type");
    }
    if (decl->const_decl.type) {
        ion_Type (*type) = ion_resolve_typespec(decl->const_decl.type);
        if (!(ion_convert_operand(&(result), type))) {
            ion_fatal_error(decl->pos, "Invalid type in constant declaration. Expected %s, got %s", ion_get_type_name(type), ion_get_type_name(result.type));
        }
    }
    *(val) = result.val;
    return result.type;
}

ion_Type (*ion_resolve_decl_func(ion_Decl (*decl))) {
    assert((decl->kind) == (ION_DECL_FUNC));
    ion_Type (*(*params)) = NULL;
    for (size_t i = 0; (i) < (decl->function.num_params); (i)++) {
        ion_Type (*param) = ion_resolve_typespec(decl->function.params[i].type);
        ion_complete_type(param);
        if ((param) == (ion_type_void)) {
            ion_fatal_error(decl->pos, "Function parameter type cannot be void");
        }
        ion_buf_push((void (**))(&(params)), &(param), sizeof(param));
    }
    ion_Type (*ret_type) = ion_type_void;
    if (decl->function.ret_type) {
        ret_type = ion_resolve_typespec(decl->function.ret_type);
        ion_complete_type(ret_type);
    }
    if (ion_is_array_type(ret_type)) {
        ion_fatal_error(decl->pos, "Function return type cannot be array");
    }
    return ion_type_func(params, ion_buf_len(params), ret_type, decl->function.has_varargs);
}

ion_Label (ion_labels[ION_MAX_LABELS]);
ion_Label (*ion_labels_end) = ion_labels;
#line 747
ion_Label (*ion_get_label(ion_SrcPos pos, char const ((*name)))) {
    ion_Label (*label) = {0};
    for (label = ion_labels; (label) != (ion_labels_end); (label)++) {
        if ((label->name) == (name)) {
            return label;
        }
    }
    if ((label) == ((ion_labels) + (ION_MAX_LABELS))) {
        ion_fatal_error(pos, "Too many labels");
    }
    *(label) = (ion_Label){.name = name, .pos = pos};
    (ion_labels_end)++;
    return label;
}

void ion_reference_label(ion_SrcPos pos, char const ((*name))) {
    ion_Label (*label) = ion_get_label(pos, name);
    label->referenced = true;
}

void ion_define_label(ion_SrcPos pos, char const ((*name))) {
    ion_Label (*label) = ion_get_label(pos, name);
    if (label->defined) {
        ion_fatal_error(pos, "Multiple definitions of label \'%s\'", name);
    }
    label->defined = true;
}

void ion_resolve_labels(void) {
    for (ion_Label (*label) = ion_labels; (label) != (ion_labels_end); (label)++) {
        if ((label->referenced) && (!(label->defined))) {
            ion_fatal_error(label->pos, "Label \'%s\' referenced but not defined", label->name);
        }
        if ((label->defined) && (!(label->referenced))) {
            ion_warning(label->pos, "Label \'%s\' defined but not referenced", label->name);
        }
    }
    ion_labels_end = ion_labels;
}

bool ion_is_cond_operand(ion_Operand operand) {
    operand = ion_operand_decay(operand);
    return ion_is_scalar_type(operand.type);
}

void ion_resolve_cond_expr(ion_Expr (*expr)) {
    ion_Operand cond = ion_resolve_expr_rvalue(expr);
    if (!(ion_is_cond_operand(cond))) {
        ion_fatal_error(expr->pos, "Conditional expression must have scalar type");
    }
}

bool ion_resolve_stmt_block(ion_StmtList block, ion_Type (*ret_type), ion_StmtCtx ctx) {
    ion_Sym (*scope) = ion_sym_enter();
    bool returns = false;
    for (size_t i = 0; (i) < (block.num_stmts); (i)++) {
        returns = (ion_resolve_stmt(block.stmts[i], ret_type, ctx)) || (returns);
    }
    ion_sym_leave(scope);
    return returns;
}

void ion_resolve_stmt_assign(ion_Stmt (*stmt)) {
    assert((stmt->kind) == (ION_STMT_ASSIGN));
    ion_Operand left = ion_resolve_expr(stmt->assign.left);
    if (!(left.is_lvalue)) {
        ion_fatal_error(stmt->pos, "Cannot assign to non-lvalue");
    }
    if (ion_is_array_type(left.type)) {
        ion_fatal_error(stmt->pos, "Cannot assign to array");
    }
    if (left.type->nonmodifiable) {
        ion_fatal_error(stmt->pos, "Left-hand side of assignment has non-modifiable type");
    }
    char const ((*assign_op_name)) = ion_token_kind_name(stmt->assign.op);
    ion_TokenKind binary_op = ion_assign_token_to_binary_token[stmt->assign.op];
    ion_Operand right = ion_resolve_expected_expr_rvalue(stmt->assign.right, left.type);
    ion_Operand result = {0};
    if ((stmt->assign.op) == (ION_TOKEN_ASSIGN)) {
        result = right;
    } else if (((stmt->assign.op) == (ION_TOKEN_ADD_ASSIGN)) || ((stmt->assign.op) == (ION_TOKEN_SUB_ASSIGN))) {
        if (((left.type->kind) == (ION_CMPL_TYPE_PTR)) && (ion_is_integer_type(right.type))) {
            result = ion_operand_rvalue(left.type);
        } else if ((ion_is_arithmetic_type(left.type)) && (ion_is_arithmetic_type(right.type))) {
            result = ion_resolve_expr_binary_op(binary_op, assign_op_name, stmt->pos, left, right);
        } else {
            ion_fatal_error(stmt->pos, "Invalid operand types for %s", assign_op_name);
        }
    } else {
        result = ion_resolve_expr_binary_op(binary_op, assign_op_name, stmt->pos, left, right);
    }
    if (!(ion_convert_operand(&(result), left.type))) {
        ion_fatal_error(stmt->pos, "Invalid type in assignment. Expected %s, got %s", ion_get_type_name(left.type), ion_get_type_name(result.type));
    }
}

void ion_resolve_stmt_init(ion_Stmt (*stmt)) {
    assert((stmt->kind) == (ION_STMT_INIT));
    ion_Type (*type) = ion_resolve_init(stmt->pos, stmt->init.type, stmt->init.expr);
    if (!(ion_sym_push_var(stmt->init.name, type))) {
        ion_fatal_error(stmt->pos, "Shadowed definition of local symbol");
    }
}

void ion_resolve_static_assert(ion_Note note) {
    if ((note.num_args) != (1)) {
        ion_fatal_error(note.pos, "#static_assert takes 1 argument");
    }
    ion_Operand operand = ion_resolve_const_expr(note.args[0].expr);
    if (!(operand.val.ull)) {
        ion_fatal_error(note.pos, "#static_assert failed");
    }
}

bool ion_resolve_stmt(ion_Stmt (*stmt), ion_Type (*ret_type), ion_StmtCtx ctx) {
    switch (stmt->kind) {
    case ION_STMT_RETURN: {
        if (stmt->expr) {
            ion_Operand operand = ion_resolve_expected_expr_rvalue(stmt->expr, ret_type);
            if (!(ion_convert_operand(&(operand), ret_type))) {
                ion_fatal_error(stmt->pos, "Invalid type in return expression. Expected %s, got %s", ion_get_type_name(ret_type), ion_get_type_name(operand.type));
            }
        } else if ((ret_type) != (ion_type_void)) {
            ion_fatal_error(stmt->pos, "Empty return expression for function with non-void return type");
        }
        return true;
        break;
    }
    case ION_STMT_BREAK: {
        #line 874
        if (!(ctx.is_break_legal)) {
            ion_fatal_error(stmt->pos, "Illegal break");
        }
        return false;
        break;
    }
    case ION_STMT_CONTINUE: {
        #line 879
        if (!(ctx.is_continue_legal)) {
            ion_fatal_error(stmt->pos, "Illegal continue");
        }
        return false;
        break;
    }
    case ION_STMT_BLOCK: {
        #line 884
        return ion_resolve_stmt_block(stmt->block, ret_type, ctx);
        break;
    }
    case ION_STMT_NOTE: {
        #line 886
        if ((stmt->note.name) == (ion_assert_name)) {
            if ((stmt->note.num_args) != (1)) {
                ion_fatal_error(stmt->pos, "#assert takes 1 argument");
            }
            ion_resolve_cond_expr(stmt->note.args[0].expr);
        } else if ((stmt->note.name) == (ion_static_assert_name)) {
            ion_resolve_static_assert(stmt->note);
        } else {
            ion_warning(stmt->pos, "Unknown statement #directive \'%s\'", stmt->note.name);
        }
        return false;
        break;
    }
    case ION_STMT_IF: {
        #line 897
        {
            ion_Sym (*scope) = ion_sym_enter();
            if (stmt->if_stmt.init) {
                ion_resolve_stmt_init(stmt->if_stmt.init);
            }
            if (stmt->if_stmt.cond) {
                ion_resolve_cond_expr(stmt->if_stmt.cond);
            } else if (!(ion_is_cond_operand(ion_resolve_name_operand(stmt->pos, stmt->if_stmt.init->init.name)))) {
                ion_fatal_error(stmt->pos, "Conditional expression must have scalar type");
            }
            bool returns = ion_resolve_stmt_block(stmt->if_stmt.then_block, ret_type, ctx);
            for (size_t i = 0; (i) < (stmt->if_stmt.num_elseifs); (i)++) {
                ion_ElseIf elseif = stmt->if_stmt.elseifs[i];
                ion_resolve_cond_expr(elseif.cond);
                returns = (ion_resolve_stmt_block(elseif.block, ret_type, ctx)) && (returns);
            }
            if (stmt->if_stmt.else_block.stmts) {
                returns = (ion_resolve_stmt_block(stmt->if_stmt.else_block, ret_type, ctx)) && (returns);
            } else {
                returns = false;
            }
            ion_sym_leave(scope);
            return returns;
        }
        break;
    }
    case ION_STMT_WHILE:
    case ION_STMT_DO_WHILE: {
        #line 923
        ion_resolve_cond_expr(stmt->while_stmt.cond);
        ctx.is_break_legal = true;
        ctx.is_continue_legal = true;
        ion_resolve_stmt_block(stmt->while_stmt.block, ret_type, ctx);
        return false;
        break;
    }
    case ION_STMT_FOR: {
        #line 928
        {
            ion_Sym (*scope) = ion_sym_enter();
            if (stmt->for_stmt.init) {
                ion_resolve_stmt(stmt->for_stmt.init, ret_type, ctx);
            }
            if (stmt->for_stmt.cond) {
                ion_resolve_cond_expr(stmt->for_stmt.cond);
            }
            if (stmt->for_stmt.next) {
                ion_resolve_stmt(stmt->for_stmt.next, ret_type, ctx);
            }
            ctx.is_break_legal = true;
            ctx.is_continue_legal = true;
            ion_resolve_stmt_block(stmt->for_stmt.block, ret_type, ctx);
            ion_sym_leave(scope);
            return false;
        }
        break;
    }
    case ION_STMT_SWITCH: {
        #line 945
        {
            ion_Operand operand = ion_resolve_expr_rvalue(stmt->switch_stmt.expr);
            if (!(ion_is_integer_type(operand.type))) {
                ion_fatal_error(stmt->pos, "Switch expression must have integer type");
            }
            ctx.is_break_legal = true;
            bool returns = true;
            bool has_default = false;
            for (size_t i = 0; (i) < (stmt->switch_stmt.num_cases); (i)++) {
                ion_SwitchCase switch_case = stmt->switch_stmt.cases[i];
                for (size_t j = 0; (j) < (switch_case.num_patterns); (j)++) {
                    ion_SwitchCasePattern pattern = switch_case.patterns[j];
                    ion_Expr (*start_expr) = pattern.start;
                    ion_Operand start_operand = ion_resolve_const_expr(start_expr);
                    if (!(ion_convert_operand(&(start_operand), operand.type))) {
                        ion_fatal_error(start_expr->pos, "Invalid type in switch case expression. Expected %s, got %s", ion_get_type_name(operand.type), ion_get_type_name(start_operand.type));
                    }
                    ion_Expr (*end_expr) = pattern.end;
                    if (end_expr) {
                        ion_Operand end_operand = ion_resolve_const_expr(end_expr);
                        if (!(ion_convert_operand(&(end_operand), operand.type))) {
                            ion_fatal_error(end_expr->pos, "Invalid type in switch case expression. Expected %s, got %s", ion_get_type_name(operand.type), ion_get_type_name(end_operand.type));
                        }
                        ion_convert_operand(&(start_operand), ion_type_llong);
                        ion_set_resolved_val(start_expr, start_operand.val);
                        ion_convert_operand(&(end_operand), ion_type_llong);
                        ion_set_resolved_val(end_expr, end_operand.val);
                        if ((end_operand.val.ll) < (start_operand.val.ll)) {
                            ion_fatal_error(start_expr->pos, "Case range end value cannot be less thn start value");
                        }
                        if (((end_operand.val.ll) - (start_operand.val.ll)) >= (256)) {
                            ion_fatal_error(start_expr->pos, "Case range cannot span more than 256 values");
                        }
                    }
                }
                if (switch_case.is_default) {
                    if (has_default) {
                        ion_fatal_error(stmt->pos, "Switch statement has multiple default clauses");
                    }
                    has_default = true;
                }
                if ((switch_case.block.num_stmts) > (1)) {
                    ion_Stmt (*last_stmt) = switch_case.block.stmts[(switch_case.block.num_stmts) - (1)];
                    if ((last_stmt->kind) == (ION_STMT_BREAK)) {
                        ion_warning(last_stmt->pos, "Case blocks already end with an implicit break");
                    }
                }
                returns = (ion_resolve_stmt_block(switch_case.block, ret_type, ctx)) && (returns);
            }
            return (returns) && (has_default);
        }
        break;
    }
    case ION_STMT_ASSIGN: {
        #line 997
        ion_resolve_stmt_assign(stmt);
        return false;
        break;
    }
    case ION_STMT_INIT: {
        #line 1000
        ion_resolve_stmt_init(stmt);
        return false;
        break;
    }
    case ION_STMT_EXPR: {
        #line 1003
        ion_resolve_expr(stmt->expr);
        return false;
        break;
    }
    case ION_STMT_LABEL: {
        #line 1006
        ion_define_label(stmt->pos, stmt->label);
        return false;
        break;
    }
    case ION_STMT_GOTO: {
        #line 1009
        ion_reference_label(stmt->pos, stmt->label);
        return false;
        break;
    }
    default: {
        #line 1012
        assert(0);
        return false;
        break;
    }
    }
}

#line 1017
void ion_resolve_func_body(ion_Sym (*sym)) {
    ion_Decl (*decl) = sym->decl;
    assert((decl->kind) == (ION_DECL_FUNC));
    assert((sym->state) == (ION_SYM_RESOLVED));
    if (decl->is_incomplete) {
        return;
    }
    ion_Package (*old_package) = ion_enter_package(sym->home_package);
    ion_Sym (*scope) = ion_sym_enter();
    for (size_t i = 0; (i) < (decl->function.num_params); (i)++) {
        ion_FuncParam param = decl->function.params[i];
        ion_Type (*param_type) = ion_resolve_typespec(param.type);
        if (ion_is_array_type(param_type)) {
            param_type = ion_type_ptr(param_type->base);
        }
        ion_sym_push_var(param.name, param_type);
    }
    ion_Type (*ret_type) = ion_resolve_typespec(decl->function.ret_type);
    assert(!(ion_is_array_type(ret_type)));
    bool returns = ion_resolve_stmt_block(decl->function.block, ret_type, (ion_StmtCtx){0});
    ion_resolve_labels();
    ion_sym_leave(scope);
    if (((ret_type) != (ion_type_void)) && (!(returns))) {
        ion_fatal_error(decl->pos, "Not all control paths return values");
    }
    ion_leave_package(old_package);
}

void ion_resolve_sym(ion_Sym (*sym)) {
    if ((sym->state) == (ION_SYM_RESOLVED)) {
        return;
    } else if ((sym->state) == (ION_SYM_RESOLVING)) {
        ion_fatal_error(sym->decl->pos, "Cyclic dependency");
        return;
    }
    assert((sym->state) == (ION_SYM_UNRESOLVED));
    assert(!(sym->reachable));
    if (!(ion_is_local_sym(sym))) {
        ion_buf_push((void (**))(&(ion_reachable_syms)), &(sym), sizeof(sym));
        sym->reachable = ion_reachable_phase;
    }
    sym->state = ION_SYM_RESOLVING;
    ion_Decl (*decl) = sym->decl;
    ion_Package (*old_package) = ion_enter_package(sym->home_package);
    switch (sym->kind) {
    case ION_SYM_TYPE: {
        if ((decl) && ((decl->kind) == (ION_DECL_TYPEDEF))) {
            sym->type = ion_resolve_typespec(decl->typedef_decl.type);
        } else if ((decl->kind) == (ION_DECL_ENUM)) {
            ion_Type (*base) = (decl->enum_decl.type ? ion_resolve_typespec(decl->enum_decl.type) : ion_type_int);
            if (!(ion_is_integer_type(base))) {
                ion_fatal_error(decl->pos, "Base type of enum must be integer type");
            }
            sym->type = ion_type_enum(sym, base);
        } else {
            sym->type = ion_type_incomplete(sym);
        }
        break;
    }
    case ION_SYM_VAR: {
        #line 1075
        sym->type = ion_resolve_decl_var(decl);
        break;
    }
    case ION_SYM_CONST: {
        #line 1077
        sym->type = ion_resolve_decl_const(decl, &(sym->val));
        break;
    }
    case ION_SYM_FUNC: {
        #line 1079
        sym->type = ion_resolve_decl_func(decl);
        break;
    }
    case ION_SYM_PACKAGE: {
        #line 1082
        break;
        break;
    }
    default: {
        #line 1084
        assert(0);
        break;
    }
    }
    #line 1086
    ion_leave_package(old_package);
    sym->state = ION_SYM_RESOLVED;
    if ((decl->is_incomplete) || ((((decl->kind) != (ION_DECL_STRUCT)) && ((decl->kind) != (ION_DECL_UNION))))) {
        ion_buf_push((void (**))(&(ion_sorted_syms)), &(sym), sizeof(sym));
    }
}

void ion_finalize_sym(ion_Sym (*sym)) {
    assert((sym->state) == (ION_SYM_RESOLVED));
    if (((sym->decl) && (!(ion_is_decl_foreign(sym->decl)))) && (!(sym->decl->is_incomplete))) {
        if ((sym->kind) == (ION_SYM_TYPE)) {
            ion_complete_type(sym->type);
        } else if ((sym->kind) == (ION_SYM_FUNC)) {
            ion_resolve_func_body(sym);
        }
    }
}

ion_Sym (*ion_resolve_name(char const ((*name)))) {
    ion_Sym (*sym) = ion_sym_get(name);
    if (!(sym)) {
        return NULL;
    }
    ion_resolve_sym(sym);
    return sym;
}

ion_Package (*ion_try_resolve_package(ion_Expr (*expr))) {
    if ((expr->kind) == (ION_EXPR_NAME)) {
        ion_Sym (*sym) = ion_resolve_name(expr->name);
        if ((sym) && ((sym->kind) == (ION_SYM_PACKAGE))) {
            return sym->package;
        }
    } else if ((expr->kind) == (ION_EXPR_FIELD)) {
        ion_Package (*package) = ion_try_resolve_package(expr->field.expr);
        if (package) {
            ion_Sym (*sym) = ion_get_package_sym(package, expr->field.name);
            if ((sym) && ((sym->kind) == (ION_SYM_PACKAGE))) {
                return sym->package;
            }
        }
    }
    return NULL;
}

ion_Operand ion_resolve_expr_field(ion_Expr (*expr)) {
    assert((expr->kind) == (ION_EXPR_FIELD));
    ion_Package (*package) = ion_try_resolve_package(expr->field.expr);
    if (package) {
        ion_Package (*old_package) = ion_enter_package(package);
        ion_Sym (*sym) = ion_resolve_name(expr->field.name);
        ion_Operand operand = ion_resolve_name_operand(expr->pos, expr->field.name);
        ion_leave_package(old_package);
        ion_set_resolved_sym(expr, sym);
        return operand;
    }
    ion_Operand operand = ion_resolve_expr(expr->field.expr);
    bool was_const_type = ion_is_const_type(operand.type);
    ion_Type (*type) = ion_unqualify_type(operand.type);
    ion_complete_type(type);
    if (ion_is_ptr_type(type)) {
        operand = ion_operand_lvalue(type->base);
        was_const_type = ion_is_const_type(operand.type);
        type = ion_unqualify_type(operand.type);
        ion_complete_type(type);
    }
    if (((type->kind) != (ION_CMPL_TYPE_STRUCT)) && ((type->kind) != (ION_CMPL_TYPE_UNION))) {
        ion_fatal_error(expr->pos, "Can only access fields on aggregates or pointers to aggregates");
        return ion_operand_null;
    }
    for (size_t i = 0; (i) < (type->aggregate.num_fields); (i)++) {
        ion_TypeField field = type->aggregate.fields[i];
        if ((field.name) == (expr->field.name)) {
            ion_Operand field_operand = (operand.is_lvalue ? ion_operand_lvalue(field.type) : ion_operand_rvalue(field.type));
            if (was_const_type) {
                field_operand.type = ion_type_const(field_operand.type);
            }
            return field_operand;
        }
    }
    ion_fatal_error(expr->pos, "No field named \'%s\'", expr->field.name);
    return ion_operand_null;
}

llong ion_eval_unary_op_ll(ion_TokenKind op, llong val) {
    switch (op) {
    case ION_TOKEN_ADD: {
        return +(val);
        break;
    }
    case ION_TOKEN_SUB: {
        #line 1175
        return -(val);
        break;
    }
    case ION_TOKEN_NEG: {
        #line 1177
        return ~(val);
        break;
    }
    case ION_TOKEN_NOT: {
        #line 1179
        return !(val);
        break;
    }
    default: {
        #line 1181
        assert(0);
        break;
    }
    }
    #line 1183
    return 0;
}

ullong ion_eval_unary_op_ull(ion_TokenKind op, ullong val) {
    switch (op) {
    case ION_TOKEN_ADD: {
        return +(val);
        break;
    }
    case ION_TOKEN_SUB: {
        #line 1191
        return (0ull) - (val);
        break;
    }
    case ION_TOKEN_NEG: {
        #line 1193
        return ~(val);
        break;
    }
    case ION_TOKEN_NOT: {
        #line 1195
        return !(val);
        break;
    }
    default: {
        #line 1197
        assert(0);
        break;
    }
    }
    #line 1199
    return 0;
}

llong ion_eval_binary_op_ll(ion_TokenKind op, llong left, llong right) {
    switch (op) {
    case ION_TOKEN_MUL: {
        return (left) * (right);
        break;
    }
    case ION_TOKEN_DIV: {
        #line 1207
        return ((right) != (0) ? (left) / (right) : 0);
        break;
    }
    case ION_TOKEN_MOD: {
        #line 1209
        return ((right) != (0) ? (left) % (right) : 0);
        break;
    }
    case ION_TOKEN_AND: {
        #line 1211
        return (left) & (right);
        break;
    }
    case ION_TOKEN_LSHIFT: {
        #line 1213
        return (left) << (right);
        break;
    }
    case ION_TOKEN_RSHIFT: {
        #line 1215
        return (left) >> (right);
        break;
    }
    case ION_TOKEN_ADD: {
        #line 1217
        return (left) + (right);
        break;
    }
    case ION_TOKEN_SUB: {
        #line 1219
        return (left) - (right);
        break;
    }
    case ION_TOKEN_OR: {
        #line 1221
        return (left) | (right);
        break;
    }
    case ION_TOKEN_XOR: {
        #line 1223
        return (left) ^ (right);
        break;
    }
    case ION_TOKEN_EQ: {
        #line 1225
        return (left) == (right);
        break;
    }
    case ION_TOKEN_NOTEQ: {
        #line 1227
        return (left) != (right);
        break;
    }
    case ION_TOKEN_LT: {
        #line 1229
        return (left) < (right);
        break;
    }
    case ION_TOKEN_LTEQ: {
        #line 1231
        return (left) <= (right);
        break;
    }
    case ION_TOKEN_GT: {
        #line 1233
        return (left) > (right);
        break;
    }
    case ION_TOKEN_GTEQ: {
        #line 1235
        return (left) >= (right);
        break;
    }
    default: {
        #line 1237
        assert(0);
        break;
    }
    }
    #line 1239
    return 0;
}

ullong ion_eval_binary_op_ull(ion_TokenKind op, ullong left, ullong right) {
    switch (op) {
    case ION_TOKEN_MUL: {
        return (left) * (right);
        break;
    }
    case ION_TOKEN_DIV: {
        #line 1247
        return ((right) != (0) ? (left) / (right) : 0);
        break;
    }
    case ION_TOKEN_MOD: {
        #line 1249
        return ((right) != (0) ? (left) % (right) : 0);
        break;
    }
    case ION_TOKEN_AND: {
        #line 1251
        return (left) & (right);
        break;
    }
    case ION_TOKEN_LSHIFT: {
        #line 1253
        return (left) << (right);
        break;
    }
    case ION_TOKEN_RSHIFT: {
        #line 1255
        return (left) >> (right);
        break;
    }
    case ION_TOKEN_ADD: {
        #line 1257
        return (left) + (right);
        break;
    }
    case ION_TOKEN_SUB: {
        #line 1259
        return (left) - (right);
        break;
    }
    case ION_TOKEN_OR: {
        #line 1261
        return (left) | (right);
        break;
    }
    case ION_TOKEN_XOR: {
        #line 1263
        return (left) ^ (right);
        break;
    }
    case ION_TOKEN_EQ: {
        #line 1265
        return (left) == (right);
        break;
    }
    case ION_TOKEN_NOTEQ: {
        #line 1267
        return (left) != (right);
        break;
    }
    case ION_TOKEN_LT: {
        #line 1269
        return (left) < (right);
        break;
    }
    case ION_TOKEN_LTEQ: {
        #line 1271
        return (left) <= (right);
        break;
    }
    case ION_TOKEN_GT: {
        #line 1273
        return (left) > (right);
        break;
    }
    case ION_TOKEN_GTEQ: {
        #line 1275
        return (left) >= (right);
        break;
    }
    default: {
        #line 1277
        assert(0);
        break;
    }
    }
    #line 1279
    return 0;
}

ion_Val ion_eval_unary_op(ion_TokenKind op, ion_Type (*type), ion_Val val) {
    if (ion_is_integer_type(type)) {
        ion_Operand operand = ion_operand_const(type, val);
        if (ion_is_signed_type(type)) {
            cast_operand(&(operand), ion_type_llong);
            operand.val.ll = ion_eval_unary_op_ll(op, operand.val.ll);
        } else {
            cast_operand(&(operand), ion_type_ullong);
            operand.val.ll = ion_eval_unary_op_ull(op, operand.val.ull);
        }
        cast_operand(&(operand), type);
        return operand.val;
    } else {
        return (ion_Val){0};
    }
}

ion_Val ion_eval_binary_op(ion_TokenKind op, ion_Type (*type), ion_Val left, ion_Val right) {
    if (ion_is_integer_type(type)) {
        ion_Operand left_operand = ion_operand_const(type, left);
        ion_Operand right_operand = ion_operand_const(type, right);
        ion_Operand result_operand = {0};
        if (ion_is_signed_type(type)) {
            cast_operand(&(left_operand), ion_type_llong);
            cast_operand(&(right_operand), ion_type_llong);
            result_operand = ion_operand_const(ion_type_llong, (ion_Val){.ll = ion_eval_binary_op_ll(op, left_operand.val.ll, right_operand.val.ll)});
        } else {
            cast_operand(&(left_operand), ion_type_ullong);
            cast_operand(&(right_operand), ion_type_ullong);
            result_operand = ion_operand_const(ion_type_ullong, (ion_Val){.ull = ion_eval_binary_op_ull(op, left_operand.val.ull, right_operand.val.ull)});
        }
        cast_operand(&(result_operand), type);
        return result_operand.val;
    } else {
        return (ion_Val){0};
    }
}

ion_Operand ion_resolve_name_operand(ion_SrcPos pos, char const ((*name))) {
    ion_Sym (*sym) = ion_resolve_name(name);
    if (!(sym)) {
        ion_fatal_error(pos, "Unresolved name \'%s\'", name);
    }
    if ((sym->kind) == (ION_SYM_VAR)) {
        ion_Operand operand = ion_operand_lvalue(sym->type);
        if (ion_is_array_type(operand.type)) {
            operand = ion_operand_decay(operand);
        }
        return operand;
    } else if ((sym->kind) == (ION_SYM_CONST)) {
        return ion_operand_const(sym->type, sym->val);
    } else if ((sym->kind) == (ION_SYM_FUNC)) {
        return ion_operand_rvalue(sym->type);
    } else {
        ion_fatal_error(pos, "%s must be a var or const", name);
        return ion_operand_null;
    }
}

ion_Operand ion_resolve_expr_name(ion_Expr (*expr)) {
    assert((expr->kind) == (ION_EXPR_NAME));
    return ion_resolve_name_operand(expr->pos, expr->name);
}

ion_Operand ion_resolve_unary_op(ion_TokenKind op, ion_Operand operand) {
    ion_promote_operand(&(operand));
    if (operand.is_const) {
        return ion_operand_const(operand.type, ion_eval_unary_op(op, operand.type, operand.val));
    } else {
        return operand;
    }
}

ion_Operand ion_resolve_expr_unary(ion_Expr (*expr)) {
    ion_Operand operand = ion_resolve_expr_rvalue(expr->unary.expr);
    ion_Type (*type) = operand.type;
    switch (expr->unary.op) {
    case ION_TOKEN_MUL: {
        if (!(ion_is_ptr_type(type))) {
            ion_fatal_error(expr->pos, "Cannot deref non-ptr type");
        }
        return ion_operand_lvalue(type->base);
        break;
    }
    case ION_TOKEN_ADD:
    case ION_TOKEN_SUB: {
        #line 1366
        if (!(ion_is_arithmetic_type(type))) {
            ion_fatal_error(expr->pos, "Can only use unary %s with arithmetic types", ion_token_kind_name(expr->unary.op));
        }
        return ion_resolve_unary_op(expr->unary.op, operand);
        break;
    }
    case ION_TOKEN_NEG: {
        #line 1371
        if (!(ion_is_integer_type(type))) {
            ion_fatal_error(expr->pos, "Can only use ~ with integer types");
        }
        return ion_resolve_unary_op(expr->unary.op, operand);
        break;
    }
    case ION_TOKEN_NOT: {
        #line 1376
        if (!(ion_is_scalar_type(type))) {
            ion_fatal_error(expr->pos, " Can only use ! with scalar types");
        }
        return ion_resolve_unary_op(expr->unary.op, operand);
        break;
    }
    default: {
        #line 1381
        assert(0);
        break;
    }
    }
    #line 1383
    return (ion_Operand){0};
}

ion_Operand ion_resolve_binary_op(ion_TokenKind op, ion_Operand left, ion_Operand right) {
    if ((left.is_const) && (right.is_const)) {
        return ion_operand_const(left.type, ion_eval_binary_op(op, left.type, left.val, right.val));
    } else {
        return ion_operand_rvalue(left.type);
    }
}

ion_Operand ion_resolve_binary_arithmetic_op(ion_TokenKind op, ion_Operand left, ion_Operand right) {
    ion_unify_arithmetic_operands(&(left), &(right));
    return ion_resolve_binary_op(op, left, right);
}

ion_Operand ion_resolve_expr_binary_op(ion_TokenKind op, char const ((*op_name)), ion_SrcPos pos, ion_Operand left, ion_Operand right) {
    switch (op) {
    case ION_TOKEN_MUL:
    case ION_TOKEN_DIV: {
        if (!(ion_is_arithmetic_type(left.type))) {
            ion_fatal_error(pos, "Left operand of %s must have arithmetic type", op_name);
        }
        if (!(ion_is_arithmetic_type(right.type))) {
            ion_fatal_error(pos, "Right operand of %s must have arithmetic type", op_name);
        }
        return ion_resolve_binary_arithmetic_op(op, left, right);
        break;
    }
    case ION_TOKEN_MOD: {
        #line 1411
        if (!(ion_is_integer_type(left.type))) {
            ion_fatal_error(pos, "Left operand of %% must have integer type");
        }
        if (!(ion_is_integer_type(right.type))) {
            ion_fatal_error(pos, "Right operand of %% must have integer type");
        }
        return ion_resolve_binary_arithmetic_op(op, left, right);
        break;
    }
    case ION_TOKEN_ADD: {
        #line 1419
        if ((ion_is_arithmetic_type(left.type)) && (ion_is_arithmetic_type(right.type))) {
            return ion_resolve_binary_arithmetic_op(op, left, right);
        } else if ((ion_is_ptr_type(left.type)) && (ion_is_integer_type(right.type))) {
            ion_complete_type(left.type->base);
            if ((ion_type_sizeof(left.type->base)) == (0)) {
                ion_fatal_error(pos, "Cannot do pointer arithmetic with size 0 base type");
            }
            return ion_operand_rvalue(left.type);
        } else if ((ion_is_ptr_type(right.type)) && (ion_is_integer_type(left.type))) {
            ion_complete_type(right.type->base);
            if ((ion_type_sizeof(right.type->base)) == (0)) {
                ion_fatal_error(pos, "Cannot do pointer arithmetic with size 0 base type");
            }
            return ion_operand_rvalue(right.type);
        } else {
            ion_fatal_error(pos, "Operands of + must both have arithmetic type, or pointer and integer type");
        }
        break;
    }
    case ION_TOKEN_SUB: {
        #line 1437
        if ((ion_is_arithmetic_type(left.type)) && (ion_is_arithmetic_type(right.type))) {
            return ion_resolve_binary_arithmetic_op(op, left, right);
        } else if ((ion_is_ptr_type(left.type)) && (ion_is_integer_type(right.type))) {
            return ion_operand_rvalue(left.type);
        } else if ((ion_is_ptr_type(left.type)) && (ion_is_ptr_type(right.type))) {
            if ((left.type->base) != (right.type->base)) {
                ion_fatal_error(pos, "Cannot subtract pointers to different types");
            }
            return ion_operand_rvalue(ion_type_ssize);
        } else {
            ion_fatal_error(pos, "Operands of - must both have arithmetic type, pointer and integer type, or compatible pointer types");
        }
        break;
    }
    case ION_TOKEN_LSHIFT:
    case ION_TOKEN_RSHIFT: {
        #line 1451
        if ((ion_is_integer_type(left.type)) && (ion_is_integer_type(right.type))) {
            ion_promote_operand(&(left));
            ion_promote_operand(&(right));
            ion_Type (*result_type) = left.type;
            ion_Operand result = {0};
            if (ion_is_signed_type(left.type)) {
                cast_operand(&(left), ion_type_llong);
                cast_operand(&(right), ion_type_llong);
            } else {
                cast_operand(&(left), ion_type_ullong);
                cast_operand(&(right), ion_type_ullong);
            }
            result = ion_resolve_binary_op(op, left, right);
            cast_operand(&(result), result_type);
            return result;
        } else {
            ion_fatal_error(pos, "Operands of %s must both have integer type", op_name);
        }
        break;
    }
    case ION_TOKEN_EQ:
    case ION_TOKEN_NOTEQ: {
        #line 1471
        if ((ion_is_arithmetic_type(left.type)) && (ion_is_arithmetic_type(right.type))) {
            ion_Operand result = ion_resolve_binary_arithmetic_op(op, left, right);
            cast_operand(&(result), ion_type_int);
            return result;
        } else if ((ion_is_ptr_type(left.type)) && (ion_is_ptr_type(right.type))) {
            ion_Type (*unqual_left_base) = ion_unqualify_type(left.type->base);
            ion_Type (*unqual_right_base) = ion_unqualify_type(right.type->base);
            if ((((unqual_left_base) != (unqual_right_base)) && ((unqual_left_base) != (ion_type_void))) && ((unqual_right_base) != (ion_type_void))) {
                ion_fatal_error(pos, "Cannot compare pointers to different types");
            }
            return ion_operand_rvalue(ion_type_int);
        } else if ((((ion_is_null_ptr(left)) && (ion_is_ptr_type(right.type)))) || (((ion_is_null_ptr(right)) && (ion_is_ptr_type(left.type))))) {
            return ion_operand_rvalue(ion_type_int);
        } else {
            ion_fatal_error(pos, "Operands of %s must be arithmetic types or compatible pointer types", op_name);
        }
        break;
    }
    case ION_TOKEN_LT:
    case ION_TOKEN_LTEQ:
    case ION_TOKEN_GT:
    case ION_TOKEN_GTEQ: {
        #line 1491
        if ((ion_is_arithmetic_type(left.type)) && (ion_is_arithmetic_type(right.type))) {
            ion_Operand result = ion_resolve_binary_arithmetic_op(op, left, right);
            cast_operand(&(result), ion_type_int);
            return result;
        } else if ((ion_is_ptr_type(left.type)) && (ion_is_ptr_type(right.type))) {
            if ((ion_unqualify_type(left.type->base)) != (ion_unqualify_type(right.type->base))) {
                ion_fatal_error(pos, "Cannot compare pointers to different types");
            }
            return ion_operand_rvalue(ion_type_int);
        } else if ((((ion_is_null_ptr(left)) && (ion_is_ptr_type(right.type)))) || (((ion_is_null_ptr(right)) && (ion_is_ptr_type(left.type))))) {
            return ion_operand_rvalue(ion_type_int);
        } else {
            ion_fatal_error(pos, "Operands of %s must be arithmetic types or compatible pointer types", op_name);
        }
        break;
    }
    case ION_TOKEN_AND:
    case ION_TOKEN_XOR:
    case ION_TOKEN_OR: {
        #line 1508
        if ((ion_is_integer_type(left.type)) && (ion_is_integer_type(right.type))) {
            return ion_resolve_binary_arithmetic_op(op, left, right);
        } else {
            ion_fatal_error(pos, "Operands of %s must have arithmetic types", op_name);
        }
        break;
    }
    case ION_TOKEN_AND_AND:
    case ION_TOKEN_OR_OR: {
        #line 1515
        if ((ion_is_scalar_type(left.type)) && (ion_is_scalar_type(right.type))) {
            if ((left.is_const) && (right.is_const)) {
                cast_operand(&(left), ion_type_bool);
                cast_operand(&(right), ion_type_bool);
                int i = {0};
                if ((op) == (ION_TOKEN_AND_AND)) {
                    i = (left.val.b) && (right.val.b);
                } else {
                    assert((op) == (ION_TOKEN_OR_OR));
                    i = (left.val.b) || (right.val.b);
                }
                return ion_operand_const(ion_type_int, (ion_Val){.i = i});
            } else {
                return ion_operand_rvalue(ion_type_int);
            }
        } else {
            ion_fatal_error(pos, "Operands of %s must have scalar types", op_name);
        }
        break;
    }
    default: {
        #line 1534
        assert(0);
        break;
    }
    }
    #line 1536
    return (ion_Operand){0};
}

ion_Operand ion_resolve_expr_binary(ion_Expr (*expr)) {
    assert((expr->kind) == (ION_EXPR_BINARY));
    ion_Operand left = ion_resolve_expr_rvalue(expr->binary.left);
    ion_Operand right = ion_resolve_expr_rvalue(expr->binary.right);
    ion_TokenKind op = expr->binary.op;
    char const ((*op_name)) = ion_token_kind_name(op);
    return ion_resolve_expr_binary_op(op, op_name, expr->pos, left, right);
}

ion_Operand ion_resolve_expr_compound(ion_Expr (*expr), ion_Type (*expected_type)) {
    assert((expr->kind) == (ION_EXPR_COMPOUND));
    if ((!(expected_type)) && (!(expr->compound.type))) {
        ion_fatal_error(expr->pos, "Implicitly typed compound literals used in context without expected type");
    }
    ion_Type (*type) = NULL;
    if (expr->compound.type) {
        type = ion_resolve_typespec(expr->compound.type);
    } else {
        type = expected_type;
    }
    ion_complete_type(type);
    bool is_const = ion_is_const_type(type);
    type = ion_unqualify_type(type);
    if (((type->kind) == (ION_CMPL_TYPE_STRUCT)) || ((type->kind) == (ION_CMPL_TYPE_UNION))) {
        int index = 0;
        for (size_t i = 0; (i) < (expr->compound.num_fields); (i)++) {
            ion_CompoundField field = expr->compound.fields[i];
            if ((field.kind) == (ION_FIELD_INDEX)) {
                ion_fatal_error(field.pos, "Index field initializer not allowed for struct/union compound literal");
            } else if ((field.kind) == (ION_FIELD_NAME)) {
                index = ion_aggregate_item_field_index(type, field.name);
                if ((index) == (-(1))) {
                    ion_fatal_error(field.pos, "Named field in compound literal does not exist");
                }
            }
            if ((index) >= ((int)(type->aggregate.num_fields))) {
                ion_fatal_error(field.pos, "Field initializer in struct/union compound literal out of range");
            }
            ion_Type (*field_type) = type->aggregate.fields[index].type;
            if (!(ion_resolve_typed_init(field.pos, field_type, field.init))) {
                ion_fatal_error(field.pos, "Invalid type in compound literal initializer for aggregate type. Expected %s", ion_get_type_name(field_type));
            }
            (index)++;
        }
    } else if ((type->kind) == (ION_CMPL_TYPE_ARRAY)) {
        #line 1585
        size_t index = 0;
        size_t max_index = 0;
        for (size_t i = 0; (i) < (expr->compound.num_fields); (i)++) {
            ion_CompoundField field = expr->compound.fields[i];
            if ((field.kind) == (ION_FIELD_NAME)) {
                ion_fatal_error(field.pos, "Named field initializer not allowed for array compound literals");
            } else if ((field.kind) == (ION_FIELD_INDEX)) {
                ion_Operand operand = ion_resolve_const_expr(field.index);
                if (!(ion_is_integer_type(operand.type))) {
                    ion_fatal_error(field.pos, "Field initializer index expression must have type int");
                }
                if (!(cast_operand(&(operand), ion_type_int))) {
                    ion_fatal_error(field.pos, "Invalid type in field initializer index. Expected integer type");
                }
                if ((operand.val.i) < (0)) {
                    ion_fatal_error(field.pos, "Field initializer index cannot be negative");
                }
                index = operand.val.i;
            }
            if ((type->num_elems) && ((index) >= ((int)(type->num_elems)))) {
                ion_fatal_error(field.pos, "Field initializer in array compound literal out of range");
            }
            if (!(ion_resolve_typed_init(field.pos, type->base, field.init))) {
                ion_fatal_error(field.pos, "Invalid type in compound literal initializer for array type. Expected %s", ion_get_type_name(type->base));
            }
            max_index = ion_max(max_index, index);
            (index)++;
        }
        if ((type->num_elems) == (0)) {
            type = ion_type_array(type->base, (max_index) + (1));
        }
    } else {
        assert(ion_is_scalar_type(type));
        if ((expr->compound.num_fields) > (1)) {
            ion_fatal_error(expr->pos, "Compound literal for scalar type cannot have more than one operand");
        }
        if ((expr->compound.num_fields) == (1)) {
            ion_CompoundField field = expr->compound.fields[0];
            ion_Operand init = ion_resolve_expected_expr_rvalue(field.init, type);
            if (!(ion_convert_operand(&(init), type))) {
                ion_fatal_error(field.pos, "Invalid type in compound literal initializer. Expected %s, got %s", ion_get_type_name(type), ion_get_type_name(init.type));
            }
        }
    }
    return ion_operand_lvalue((is_const ? ion_type_const(type) : type));
}

ion_Operand ion_resolve_expr_call(ion_Expr (*expr)) {
    assert((expr->kind) == (ION_EXPR_CALL));
    if ((expr->call.expr->kind) == (ION_EXPR_NAME)) {
        ion_Sym (*sym) = ion_resolve_name(expr->call.expr->name);
        if ((sym) && ((sym->kind) == (ION_SYM_TYPE))) {
            if ((expr->call.num_args) != (1)) {
                ion_fatal_error(expr->pos, "Type conversion operator takes 1 argument");
            }
            ion_Operand operand = ion_resolve_expr_rvalue(expr->call.args[0]);
            if (!(cast_operand(&(operand), sym->type))) {
                ion_fatal_error(expr->pos, "Invalid type cast from %s to %s", ion_get_type_name(operand.type), ion_get_type_name(sym->type));
            }
            ion_set_resolved_sym(expr->call.expr, sym);
            return operand;
        }
    }
    ion_Operand function = ion_resolve_expr_rvalue(expr->call.expr);
    if ((function.type->kind) != (ION_CMPL_TYPE_FUNC)) {
        ion_fatal_error(expr->pos, "Cannot call non-function value");
    }
    size_t num_params = function.type->function.num_params;
    if ((expr->call.num_args) < (num_params)) {
        ion_fatal_error(expr->pos, "Function call with too few arguments");
    }
    if (((expr->call.num_args) > (num_params)) && (!(function.type->function.has_varargs))) {
        ion_fatal_error(expr->pos, "Function call with too many arguments");
    }
    for (size_t i = 0; (i) < (num_params); (i)++) {
        ion_Type (*param_type) = function.type->function.params[i];
        ion_Operand arg = ion_resolve_expected_expr_rvalue(expr->call.args[i], param_type);
        if (ion_is_array_type(param_type)) {
            param_type = ion_type_ptr(param_type->base);
        }
        if (!(ion_convert_operand(&(arg), param_type))) {
            ion_fatal_error(expr->call.args[i]->pos, "Invalid type in function call argument. Expected %s, got %s", ion_get_type_name(param_type), ion_get_type_name(arg.type));
        }
    }
    for (size_t i = num_params; (i) < (expr->call.num_args); (i)++) {
        ion_resolve_expr_rvalue(expr->call.args[i]);
    }
    return ion_operand_rvalue(function.type->function.ret);
}

ion_Operand ion_resolve_expr_ternary(ion_Expr (*expr), ion_Type (*expected_type)) {
    assert((expr->kind) == (ION_EXPR_TERNARY));
    ion_Operand cond = ion_resolve_expr_rvalue(expr->ternary.cond);
    if (!(ion_is_scalar_type(cond.type))) {
        ion_fatal_error(expr->pos, "Ternary conditional must have scalar type");
    }
    ion_Operand left = ion_resolve_expected_expr_rvalue(expr->ternary.then_expr, expected_type);
    ion_Operand right = ion_resolve_expected_expr_rvalue(expr->ternary.else_expr, expected_type);
    if ((left.type) == (right.type)) {
        return ion_operand_rvalue(left.type);
    } else if ((ion_is_arithmetic_type(left.type)) && (ion_is_arithmetic_type(right.type))) {
        ion_unify_arithmetic_operands(&(left), &(right));
        if (((cond.is_const) && (left.is_const)) && (right.is_const)) {
            return ion_operand_const(left.type, (cond.val.i ? left.val : right.val));
        } else {
            return ion_operand_rvalue(left.type);
        }
    } else if ((ion_is_ptr_type(left.type)) && (ion_is_null_ptr(right))) {
        return ion_operand_rvalue(left.type);
    } else if ((ion_is_ptr_type(right.type)) && (ion_is_null_ptr(left))) {
        return ion_operand_rvalue(right.type);
    } else {
        ion_fatal_error(expr->pos, "Left and right operands of ternary expression must have arithmetic types or identical types");
    }
    #line 1701
    return (ion_Operand){0};
}

ion_Operand ion_resolve_expr_index(ion_Expr (*expr)) {
    assert((expr->kind) == (ION_EXPR_INDEX));
    ion_Operand operand = ion_resolve_expr_rvalue(expr->index.expr);
    if (!(ion_is_ptr_type(operand.type))) {
        ion_fatal_error(expr->pos, "Can only index arrays and pointers");
    }
    ion_Operand index = ion_resolve_expr_rvalue(expr->index.index);
    if (!(ion_is_integer_type(index.type))) {
        ion_fatal_error(expr->pos, "Index must have integer type");
    }
    return ion_operand_lvalue(operand.type->base);
}

ion_Operand ion_resolve_expr_cast(ion_Expr (*expr)) {
    assert((expr->kind) == (ION_EXPR_CAST));
    ion_Type (*type) = ion_resolve_typespec(expr->cast.type);
    ion_Operand operand = ion_resolve_expr_rvalue(expr->cast.expr);
    if (!(cast_operand(&(operand), type))) {
        ion_fatal_error(expr->pos, "Invalid type cast from %s to %s", ion_get_type_name(operand.type), ion_get_type_name(type));
    }
    return operand;
}

ion_Operand ion_resolve_expr_int(ion_Expr (*expr)) {
    assert((expr->kind) == (ION_EXPR_INT));
    ullong int_max = ion_type_metrics[ION_CMPL_TYPE_INT].max;
    ullong uint_max = ion_type_metrics[ION_CMPL_TYPE_UINT].max;
    ullong long_max = ion_type_metrics[ION_CMPL_TYPE_LONG].max;
    ullong ulong_max = ion_type_metrics[ION_CMPL_TYPE_ULONG].max;
    ullong llong_max = ion_type_metrics[ION_CMPL_TYPE_LLONG].max;
    ullong val = expr->int_lit.val;
    ion_Operand operand = ion_operand_const(ion_type_ullong, (ion_Val){.ull = val});
    ion_Type (*type) = ion_type_ullong;
    if ((expr->int_lit.mod) == (ION_MOD_NONE)) {
        bool overflow = false;
        switch (expr->int_lit.suffix) {
        case ION_SUFFIX_NONE: {
            type = ion_type_int;
            if ((val) > (int_max)) {
                type = ion_type_long;
                if ((val) > (long_max)) {
                    type = ion_type_llong;
                    overflow = (val) > (llong_max);
                }
            }
            break;
        }
        case ION_SUFFIX_U: {
            #line 1750
            type = ion_type_uint;
            if ((val) > (uint_max)) {
                type = ion_type_ulong;
                if ((val) > (ulong_max)) {
                    type = ion_type_ullong;
                }
            }
            break;
        }
        case ION_SUFFIX_L: {
            #line 1758
            type = ion_type_long;
            if ((val) > (long_max)) {
                type = ion_type_llong;
                overflow = (val) > (llong_max);
            }
            break;
        }
        case ION_SUFFIX_UL: {
            #line 1764
            type = ion_type_ulong;
            if ((val) > (ulong_max)) {
                type = ion_type_ullong;
            }
            break;
        }
        case ION_SUFFIX_LL: {
            #line 1769
            type = ion_type_llong;
            overflow = (val) > (llong_max);
            break;
        }
        case ION_SUFFIX_ULL: {
            #line 1772
            type = ion_type_ullong;
            break;
        }
        default: {
            #line 1774
            assert(0);
            break;
        }
        }
        #line 1776
        if (overflow) {
            ion_fatal_error(expr->pos, "Integer literal overflow");
        }
    } else {
        switch (expr->int_lit.suffix) {
        case ION_SUFFIX_NONE: {
            type = ion_type_int;
            if ((val) > (int_max)) {
                type = ion_type_uint;
                if ((val) > (uint_max)) {
                    type = ion_type_long;
                    if ((val) > (long_max)) {
                        type = ion_type_ulong;
                        if ((val) > (ulong_max)) {
                            type = ion_type_llong;
                            if ((val) > (llong_max)) {
                                type = ion_type_ullong;
                            }
                        }
                    }
                }
            }
            break;
        }
        case ION_SUFFIX_U: {
            #line 1799
            type = ion_type_uint;
            if ((val) > (uint_max)) {
                type = ion_type_ulong;
                if ((val) > (ulong_max)) {
                    type = ion_type_ullong;
                }
            }
            break;
        }
        case ION_SUFFIX_L: {
            #line 1807
            type = ion_type_long;
            if ((val) > (long_max)) {
                type = ion_type_ulong;
                if ((val) > (ulong_max)) {
                    type = ion_type_llong;
                    if ((val) > (llong_max)) {
                        type = ion_type_ullong;
                    }
                }
            }
            break;
        }
        case ION_SUFFIX_UL: {
            #line 1818
            type = ion_type_ulong;
            if ((val) > (ulong_max)) {
                type = ion_type_ullong;
            }
            break;
        }
        case ION_SUFFIX_LL: {
            #line 1823
            type = ion_type_llong;
            if ((val) > (llong_max)) {
                type = ion_type_ullong;
            }
            break;
        }
        case ION_SUFFIX_ULL: {
            #line 1828
            type = ion_type_ullong;
            break;
        }
        default: {
            #line 1830
            assert(0);
            break;
        }
        }
    }
    #line 1833
    cast_operand(&(operand), type);
    return operand;
}

ion_Operand ion_resolve_expr_modify(ion_Expr (*expr)) {
    ion_Operand operand = ion_resolve_expr(expr->modify.expr);
    ion_Type (*type) = operand.type;
    ion_complete_type(type);
    if (!(operand.is_lvalue)) {
        ion_fatal_error(expr->pos, "Cannot modify non-lvalue");
    }
    if (type->nonmodifiable) {
        ion_fatal_error(expr->pos, "Cannot modify non-modifiable type");
    }
    if (!(((ion_is_integer_type(type)) || ((type->kind) == (ION_CMPL_TYPE_PTR))))) {
        ion_fatal_error(expr->pos, "%s only valid for integer and pointer types", ion_token_kind_name(expr->modify.op));
    }
    return ion_operand_rvalue(type);
}

ion_Operand ion_resolve_expected_expr(ion_Expr (*expr), ion_Type (*expected_type)) {
    ion_Operand result = {0};
    switch (expr->kind) {
    case ION_EXPR_PAREN: {
        result = ion_resolve_expected_expr(expr->paren.expr, expected_type);
        break;
    }
    case ION_EXPR_INT: {
        #line 1859
        result = ion_resolve_expr_int(expr);
        break;
    }
    case ION_EXPR_FLOAT: {
        #line 1861
        result = ion_operand_const(((expr->float_lit.suffix) == (ION_SUFFIX_D) ? ion_type_double : ion_type_float), (ion_Val){0});
        break;
    }
    case ION_EXPR_STR: {
        #line 1863
        result = ion_operand_rvalue(ion_type_array(ion_type_char, (strlen(expr->str_lit.val)) + (1)));
        break;
    }
    case ION_EXPR_NAME: {
        #line 1865
        result = ion_resolve_expr_name(expr);
        ion_set_resolved_sym(expr, ion_resolve_name(expr->name));
        break;
    }
    case ION_EXPR_CAST: {
        #line 1868
        result = ion_resolve_expr_cast(expr);
        break;
    }
    case ION_EXPR_CALL: {
        #line 1870
        result = ion_resolve_expr_call(expr);
        break;
    }
    case ION_EXPR_INDEX: {
        #line 1872
        result = ion_resolve_expr_index(expr);
        break;
    }
    case ION_EXPR_FIELD: {
        #line 1874
        result = ion_resolve_expr_field(expr);
        break;
    }
    case ION_EXPR_COMPOUND: {
        #line 1876
        result = ion_resolve_expr_compound(expr, expected_type);
        break;
    }
    case ION_EXPR_UNARY: {
        #line 1878
        if ((expr->unary.op) == (ION_TOKEN_AND)) {
            ion_Operand operand = {0};
            if ((expected_type) && (ion_is_ptr_type(expected_type))) {
                operand = ion_resolve_expected_expr(expr->unary.expr, expected_type->base);
            } else {
                operand = ion_resolve_expr(expr->unary.expr);
            }
            if (!(operand.is_lvalue)) {
                ion_fatal_error(expr->pos, "Cannot take address of non-lvalue");
            }
            result = ion_operand_rvalue(ion_type_ptr(operand.type));
        } else {
            result = ion_resolve_expr_unary(expr);
        }
        break;
    }
    case ION_EXPR_BINARY: {
        #line 1893
        result = ion_resolve_expr_binary(expr);
        break;
    }
    case ION_EXPR_TERNARY: {
        #line 1895
        result = ion_resolve_expr_ternary(expr, expected_type);
        break;
    }
    case ION_EXPR_SIZEOF_EXPR: {
        #line 1896
        {
            if ((expr->sizeof_expr->kind) == (ION_EXPR_NAME)) {
                ion_Sym (*sym) = ion_resolve_name(expr->sizeof_expr->name);
                if ((sym) && ((sym->kind) == (ION_SYM_TYPE))) {
                    ion_complete_type(sym->type);
                    result = ion_operand_const(ion_type_usize, (ion_Val){.ull = ion_type_sizeof(sym->type)});
                    ion_set_resolved_type(expr->sizeof_expr, sym->type);
                    ion_set_resolved_sym(expr->sizeof_expr, sym);
                    break;
                }
            }
            ion_Type (*type) = ion_resolve_expr(expr->sizeof_expr).type;
            ion_complete_type(type);
            result = ion_operand_const(ion_type_usize, (ion_Val){.ull = ion_type_sizeof(type)});
        }
        break;
    }
    case ION_EXPR_SIZEOF_TYPE: {
        #line 1911
        {
            ion_Type (*type) = ion_resolve_typespec(expr->sizeof_type);
            ion_complete_type(type);
            result = ion_operand_const(ion_type_usize, (ion_Val){.ull = ion_type_sizeof(type)});
        }
        break;
    }
    case ION_EXPR_ALIGNOF_EXPR: {
        #line 1916
        {
            if ((expr->sizeof_expr->kind) == (ION_EXPR_NAME)) {
                ion_Sym (*sym) = ion_resolve_name(expr->alignof_expr->name);
                if ((sym) && ((sym->kind) == (ION_SYM_TYPE))) {
                    ion_complete_type(sym->type);
                    result = ion_operand_const(ion_type_usize, (ion_Val){.ull = ion_type_alignof(sym->type)});
                    ion_set_resolved_type(expr->alignof_expr, sym->type);
                    ion_set_resolved_sym(expr->alignof_expr, sym);
                    break;
                }
            }
            ion_Type (*type) = ion_resolve_expr(expr->alignof_expr).type;
            ion_complete_type(type);
            result = ion_operand_const(ion_type_usize, (ion_Val){.ull = ion_type_alignof(type)});
        }
        break;
    }
    case ION_EXPR_ALIGNOF_TYPE: {
        #line 1931
        {
            ion_Type (*type) = ion_resolve_typespec(expr->alignof_type);
            ion_complete_type(type);
            result = ion_operand_const(ion_type_usize, (ion_Val){.ull = ion_type_alignof(type)});
        }
        break;
    }
    case ION_EXPR_TYPEOF_TYPE: {
        #line 1936
        {
            ion_Type (*type) = ion_resolve_typespec(expr->typeof_type);
            result = ion_operand_const(ion_type_ullong, (ion_Val){.ull = type->typeid});
        }
        break;
    }
    case ION_EXPR_TYPEOF_EXPR: {
        #line 1940
        {
            if ((expr->typeof_expr->kind) == (ION_EXPR_NAME)) {
                ion_Sym (*sym) = ion_resolve_name(expr->typeof_expr->name);
                if ((sym) && ((sym->kind) == (ION_SYM_TYPE))) {
                    result = ion_operand_const(ion_type_ullong, (ion_Val){.ull = sym->type->typeid});
                    ion_set_resolved_type(expr->typeof_expr, sym->type);
                    ion_set_resolved_sym(expr->typeof_expr, sym);
                    break;
                }
            }
            ion_Type (*type) = ion_resolve_expr(expr->typeof_expr).type;
            result = ion_operand_const(ion_type_ullong, (ion_Val){.ull = type->typeid});
        }
        break;
    }
    case ION_EXPR_OFFSETOF: {
        #line 1953
        {
            ion_Type (*type) = ion_resolve_typespec(expr->offsetof_field.type);
            ion_complete_type(type);
            if (((type->kind) != (ION_CMPL_TYPE_STRUCT)) && ((type->kind) != (ION_CMPL_TYPE_UNION))) {
                ion_fatal_error(expr->pos, "offsetof can only be used with struct/union types");
            }
            int field = ion_aggregate_item_field_index(type, expr->offsetof_field.name);
            if ((field) < (0)) {
                ion_fatal_error(expr->pos, "No field \'%s\' in type", expr->offsetof_field.name);
            }
            result = ion_operand_const(ion_type_usize, (ion_Val){.ull = type->aggregate.fields[field].offset});
        }
        break;
    }
    case ION_EXPR_MODIFY: {
        #line 1966
        result = ion_resolve_expr_modify(expr);
        break;
    }
    default: {
        #line 1968
        assert(0);
        result = ion_operand_null;
        break;
    }
    }
    #line 1971
    ion_set_resolved_type(expr, result.type);
    return result;
}

ion_Operand ion_resolve_const_expr(ion_Expr (*expr)) {
    ion_Operand operand = ion_resolve_expr(expr);
    if (!(operand.is_const)) {
        ion_fatal_error(expr->pos, "Expected constant expression");
    }
    return operand;
}

ion_Map ion_decl_note_names;
#line 1985
void ion_init_builtin_syms(void) {
    assert(ion_current_package);
    ion_sym_global_type("void", ion_type_void);
    ion_sym_global_type("bool", ion_type_bool);
    ion_sym_global_type("char", ion_type_char);
    ion_sym_global_type("schar", ion_type_schar);
    ion_sym_global_type("uchar", ion_type_uchar);
    ion_sym_global_type("short", ion_type_short);
    ion_sym_global_type("ushort", ion_type_ushort);
    ion_sym_global_type("int", ion_type_int);
    ion_sym_global_type("uint", ion_type_uint);
    ion_sym_global_type("long", ion_type_long);
    ion_sym_global_type("ulong", ion_type_ulong);
    ion_sym_global_type("llong", ion_type_llong);
    ion_sym_global_type("ullong", ion_type_ullong);
    ion_sym_global_type("float", ion_type_float);
    ion_sym_global_type("double", ion_type_double);
}

void ion_add_package_decls(ion_Package (*package)) {
    for (size_t i = 0; (i) < (package->num_decls); (i)++) {
        ion_Decl (*decl) = package->decls[i];
        if ((decl->kind) == (ION_DECL_NOTE)) {
            if (!(ion_map_get(&(ion_decl_note_names), decl->note.name))) {
                ion_warning(decl->pos, "Unknown declaration #directive \'%s\'", decl->note.name);
            }
            if ((decl->note.name) == (ion_declare_note_name)) {
                if ((decl->note.num_args) != (1)) {
                    ion_fatal_error(decl->pos, "#declare_note takes 1 argument");
                }
                ion_Expr (*arg) = decl->note.args[0].expr;
                if ((arg->kind) != (ION_EXPR_NAME)) {
                    ion_fatal_error(decl->pos, "#declare_note argument must be name");
                }
                ion_map_put(&(ion_decl_note_names), arg->name, (void *)(1));
            } else if ((decl->note.name) == (ion_static_assert_name)) {
                #line 2022
                if (!(ion_flag_lazy)) {
                    ion_resolve_static_assert(decl->note);
                }
            }
        } else if ((decl->kind) == (ION_DECL_IMPORT)) {
        } else {
            #line 2029
            ion_sym_global_decl(decl);
        }
    }
}

bool ion_is_package_dir(char const ((*search_path)), char const ((*package_path))) {
    char (path[MAX_PATH]) = {0};
    ion_path_copy(path, search_path);
    ion_path_join(path, package_path);
    ion_DirListIter iter = {0};
    for (ion_dir_list(&(iter), path); iter.valid; ion_dir_list_next(&(iter))) {
        char const ((*ext)) = ion_path_ext(iter.name);
        if (((ext) != (iter.name)) && ((strcmp(ext, "ion")) == (0))) {
            ion_dir_list_free(&(iter));
            return true;
        }
    }
    return false;
}

bool ion_copy_package_full_path(char (dest[MAX_PATH]), char const ((*package_path))) {
    for (int i = 0; (i) < (ion_num_package_search_paths); (i)++) {
        if (ion_is_package_dir(ion_package_search_paths[i], package_path)) {
            ion_path_copy(dest, ion_package_search_paths[i]);
            ion_path_join(dest, package_path);
            return true;
        }
    }
    return false;
}

ion_Package (*ion_import_package(char const ((*package_path)))) {
    package_path = ion_str_intern(package_path);
    ion_Package (*package) = ion_map_get(&(ion_package_map), package_path);
    if (!(package)) {
        package = ion_xcalloc(1, sizeof(ion_Package));
        package->path = package_path;
        if (ion_flag_verbose) {
            printf("Importing %s\n", package_path);
        }
        char (full_path[MAX_PATH]) = {0};
        if (!(ion_copy_package_full_path(full_path, package_path))) {
            return NULL;
        }
        strcpy(package->full_path, full_path);
        ion_add_package(package);
        ion_compile_package(package);
    }
    return package;
}

void ion_import_all_package_symbols(ion_Package (*package)) {
    #line 2082
    char const ((*main_name)) = ion_str_intern("main");
    for (size_t i = 0; (i) < (ion_buf_len(package->syms)); (i)++) {
        if (((package->syms[i]->home_package) == (package)) && ((package->syms[i]->name) != (main_name))) {
            ion_sym_global_put(package->syms[i]->name, package->syms[i]);
        }
    }
}

void ion_import_package_symbols(ion_Decl (*decl), ion_Package (*package)) {
    for (size_t i = 0; (i) < (decl->import_decl.num_items); (i)++) {
        ion_ImportItem item = decl->import_decl.items[i];
        ion_Sym (*sym) = ion_get_package_sym(package, item.name);
        if (!(sym)) {
            ion_fatal_error(decl->pos, "Symbol \'%s\' does not exist in package \'%s\'", item.name, package->path);
        }
        ion_sym_global_put((item.rename ? item.rename : item.name), sym);
    }
}

void ion_process_package_imports(ion_Package (*package)) {
    for (size_t i = 0; (i) < (package->num_decls); (i)++) {
        ion_Decl (*decl) = package->decls[i];
        if ((decl->kind) == (ION_DECL_NOTE)) {
            if ((decl->note.name) == (ion_always_name)) {
                package->always_reachable = true;
            }
        } else if ((decl->kind) == (ION_DECL_IMPORT)) {
            char (*path_buf) = NULL;
            if (decl->import_decl.is_relative) {
                ion_buf_printf(&(path_buf), "%s/", package->path);
            }
            for (size_t k = 0; (k) < (decl->import_decl.num_names); (k)++) {
                if (!(ion_str_islower(decl->import_decl.names[k]))) {
                    ion_fatal_error(decl->pos, "Import name must be lower case: \'%s\'", decl->import_decl.names[k]);
                }
                ion_buf_printf(&(path_buf), "%s%s", ((k) == (0) ? "" : "/"), decl->import_decl.names[k]);
            }
            ion_Package (*imported_package) = ion_import_package(path_buf);
            if (!(imported_package)) {
                ion_fatal_error(decl->pos, "Failed to import package \'%s\'", path_buf);
            }
            ion_buf_free((void (**))(&(path_buf)));
            ion_import_package_symbols(decl, imported_package);
            if (decl->import_decl.import_all) {
                ion_import_all_package_symbols(imported_package);
            }
            char const ((*sym_name)) = (decl->name ? decl->name : decl->import_decl.names[(decl->import_decl.num_names) - (1)]);
            ion_Sym (*sym) = ion_sym_new(ION_SYM_PACKAGE, sym_name, decl);
            sym->package = imported_package;
            ion_sym_global_put(sym_name, sym);
        }
    }
}

bool ion_parse_package(ion_Package (*package)) {
    ion_Decl (*(*decls)) = NULL;
    ion_DirListIter iter = {0};
    for (ion_dir_list(&(iter), package->full_path); iter.valid; ion_dir_list_next(&(iter))) {
        if (((iter.is_dir) || ((iter.name[0]) == ('_'))) || ((iter.name[0]) == ('.'))) {
            continue;
        }
        char (name[MAX_PATH]) = {0};
        ion_path_copy(name, iter.name);
        char (*ext) = ion_path_ext(name);
        if (((ext) == (name)) || ((strcmp(ext, "ion")) != (0))) {
            continue;
        }
        ext[-(1)] = 0;
        if (ion_is_excluded_target_filename(name)) {
            continue;
        }
        char (path[MAX_PATH]) = {0};
        ion_path_copy(path, iter.base);
        ion_path_join(path, iter.name);
        ion_path_absolute(path);
        char const ((*code)) = ion_read_file(path);
        if (!(code)) {
            ion_fatal_error((ion_SrcPos){.name = path}, "Failed to read source file");
        }
        ion_init_stream(ion_str_intern(path), code);
        ion_Decls (*file_decls) = ion_parse_decls();
        for (size_t i = 0; (i) < (file_decls->num_decls); (i)++) {
            ion_buf_push((void (**))(&(decls)), &(file_decls->decls[i]), sizeof(file_decls->decls[i]));
        }
    }
    package->decls = decls;
    package->num_decls = (int)(ion_buf_len(decls));
    return (package) != (NULL);
}

bool ion_compile_package(ion_Package (*package)) {
    if (!(ion_parse_package(package))) {
        return false;
    }
    ion_Package (*old_package) = ion_enter_package(package);
    if ((ion_buf_len(ion_package_list)) == (1)) {
        ion_init_builtin_syms();
    }
    if (ion_builtin_package) {
        ion_import_all_package_symbols(ion_builtin_package);
    }
    ion_add_package_decls(package);
    ion_process_package_imports(package);
    ion_leave_package(old_package);
    return true;
}

void ion_resolve_package_syms(ion_Package (*package)) {
    ion_Package (*old_package) = ion_enter_package(package);
    for (size_t i = 0; (i) < (ion_buf_len(package->syms)); (i)++) {
        if ((package->syms[i]->home_package) == (package)) {
            ion_resolve_sym(package->syms[i]);
        }
    }
    ion_leave_package(old_package);
}

void ion_finalize_reachable_syms(void) {
    if (ion_flag_verbose) {
        printf("Finalizing reachable symbols\n");
    }
    size_t prev_num_reachable = 0;
    ullong num_reachable = ion_buf_len(ion_reachable_syms);
    for (size_t i = 0; (i) < (num_reachable); (i)++) {
        ion_finalize_sym(ion_reachable_syms[i]);
        if ((i) == ((num_reachable) - (1))) {
            if (ion_flag_verbose) {
                printf("New reachable symbols:");
                for (size_t k = prev_num_reachable; (k) < (num_reachable); (k)++) {
                    printf(" %s/%s", ion_reachable_syms[k]->home_package->path, ion_reachable_syms[k]->name);
                }
                printf("\n");
            }
            prev_num_reachable = num_reachable;
            num_reachable = ion_buf_len(ion_reachable_syms);
        }
    }
}

char const ((*(ion_os_names[ION_NUM_OSES]))) = {[ION_OS_WIN32] = "win32", [ION_OS_LINUX] = "linux", [ION_OS_OSX] = "osx"};
char const ((*(ion_arch_names[ION_NUM_ARCHES]))) = {[ION_ARCH_X64] = "x64", [ION_ARCH_X86] = "x86"};
int ion_target_os;
int ion_target_arch;
#line 28 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\targets.ion"
int ion_get_os(char const ((*name))) {
    for (int i = 0; (i) < (ION_NUM_OSES); (i)++) {
        if ((strcmp(ion_os_names[i], name)) == (0)) {
            return i;
        }
    }
    return -(1);
}

int ion_get_arch(char const ((*name))) {
    for (int i = 0; (i) < (ION_NUM_ARCHES); (i)++) {
        if ((strcmp(ion_arch_names[i], name)) == (0)) {
            return i;
        }
    }
    return -(1);
}

void ion_init_default_type_metrics(ion_TypeMetrics (metrics[ION_NUM_CMPL_TYPE_KINDS])) {
    metrics[ION_CMPL_TYPE_BOOL] = (ion_TypeMetrics){.size = 1, .align = 1};
    metrics[ION_CMPL_TYPE_CHAR] = (ion_TypeMetrics){.size = 1, .align = 1, .max = 0x7f, .sign = true};
    metrics[ION_CMPL_TYPE_SCHAR] = (ion_TypeMetrics){.size = 1, .align = 1, .max = 0x7f, .sign = true};
    metrics[ION_CMPL_TYPE_UCHAR] = (ion_TypeMetrics){.size = 1, .align = 1, .max = 0xff};
    metrics[ION_CMPL_TYPE_SHORT] = (ion_TypeMetrics){.size = 2, .align = 2, .max = 0x7fff, .sign = true};
    metrics[ION_CMPL_TYPE_USHORT] = (ion_TypeMetrics){.size = 2, .align = 2, .max = 0xffff};
    metrics[ION_CMPL_TYPE_INT] = (ion_TypeMetrics){.size = 4, .align = 4, .max = 0x7fffffff, .sign = true};
    metrics[ION_CMPL_TYPE_UINT] = (ion_TypeMetrics){.size = 4, .align = 4, .max = 0xffffffff};
    metrics[ION_CMPL_TYPE_LLONG] = (ion_TypeMetrics){.size = 8, .align = 8, .max = 0x7fffffffffffffff, .sign = true};
    metrics[ION_CMPL_TYPE_ULLONG] = (ion_TypeMetrics){.size = 8, .align = 8, .max = 0xffffffffffffffff};
    metrics[ION_CMPL_TYPE_FLOAT] = (ion_TypeMetrics){.size = 4, .align = 4};
    metrics[ION_CMPL_TYPE_DOUBLE] = (ion_TypeMetrics){.size = 8, .align = 8};
}

ion_TypeMetrics (ion_win32_x86_metrics[ION_NUM_CMPL_TYPE_KINDS]) = {[ION_CMPL_TYPE_PTR] = {.size = 4, .align = 4}, [ION_CMPL_TYPE_LONG] = {.size = 4, .align = 4, .max = 0x7fffffff, .sign = true}, [ION_CMPL_TYPE_ULONG] = {.size = 4, .align = 4, .max = 0x7fffffff, .sign = true}};
ion_TypeMetrics (ion_win32_x64_metrics[ION_NUM_CMPL_TYPE_KINDS]) = {[ION_CMPL_TYPE_PTR] = {.size = 8, .align = 8}, [ION_CMPL_TYPE_LONG] = {.size = 4, .align = 4, .max = 0x7fffffff, .sign = true}, [ION_CMPL_TYPE_ULONG] = {.size = 4, .align = 4, .max = 0x7fffffff, .sign = true}};
ion_TypeMetrics (ion_ilp32_metrics[ION_NUM_CMPL_TYPE_KINDS]) = {[ION_CMPL_TYPE_PTR] = {.size = 4, .align = 4}, [ION_CMPL_TYPE_LONG] = {.size = 4, .align = 4, .max = 0x7fffffff, .sign = true}, [ION_CMPL_TYPE_ULONG] = {.size = 4, .align = 4, .max = 0x7fffffff, .sign = true}};
ion_TypeMetrics (ion_lp64_metrics[ION_NUM_CMPL_TYPE_KINDS]) = {[ION_CMPL_TYPE_PTR] = {.size = 8, .align = 8}, [ION_CMPL_TYPE_LONG] = {.size = 8, .align = 8, .max = 0x7fffffffffffffff, .sign = true}, [ION_CMPL_TYPE_ULONG] = {.size = 8, .align = 8, .max = 0xffffffffffffffff, .sign = true}};
#line 89
void ion_init_target(void) {
    ion_type_metrics = NULL;
    switch (ion_target_os) {
    case ION_OS_WIN32: {
        switch (ion_target_arch) {
        case ION_ARCH_X86: {
            ion_type_metrics = ion_win32_x86_metrics;
            break;
        }
        case ION_ARCH_X64: {
            #line 97
            ion_type_metrics = ion_win32_x64_metrics;
            break;
        }
        default: {
            break;
        }
        }
        break;
    }
    case ION_OS_LINUX: {
        #line 101
        switch (ion_target_arch) {
        case ION_ARCH_X86: {
            ion_type_metrics = ion_ilp32_metrics;
            break;
        }
        case ION_ARCH_X64: {
            #line 105
            ion_type_metrics = ion_lp64_metrics;
            break;
        }
        default: {
            break;
        }
        }
        break;
    }
    case ION_OS_OSX: {
        #line 109
        switch (ion_target_arch) {
        case ION_ARCH_X64: {
            ion_type_metrics = ion_lp64_metrics;
            break;
        }
        default: {
            break;
        }
        }
        break;
    }
    default: {
        break;
    }
    }
    #line 116
    if (!(ion_type_metrics)) {
        printf("Unsupported os/arch combination: %s/%s\n", ion_os_names[ion_target_os], ion_arch_names[ion_target_arch]);
        exit(1);
    }
    ion_init_default_type_metrics(ion_type_metrics);
    if ((ion_type_metrics[ION_CMPL_TYPE_PTR].size) == (4)) {
        ion_type_uintptr = ion_type_uint;
        ion_type_usize = ion_type_uint;
        ion_type_ssize = ion_type_int;
    } else {
        assert((ion_type_metrics[ION_CMPL_TYPE_PTR].size) == (8));
        ion_type_uintptr = ion_type_ullong;
        ion_type_usize = ion_type_ullong;
        ion_type_ssize = ion_type_llong;
    }
}

bool ion_is_excluded_target_filename(char const ((*name))) {
    char const ((*end)) = (name) + (strlen(name));
    #line 136
    char const ((*ptr1)) = end;
    while (((ptr1) != (name)) && ((ptr1[-(1)]) != ('_'))) {
        (ptr1)--;
    }
    char (str1[MAX_PATH]) = {0};
    if ((ptr1) == (name)) {
        str1[0] = 0;
    } else {
        memcpy(str1, ptr1, (end) - (ptr1));
        str1[(end) - (ptr1)] = 0;
        (ptr1)--;
    }
    #line 149
    char const ((*ptr2)) = ptr1;
    while (((ptr2) != (name)) && ((ptr2[-(1)]) != ('_'))) {
        (ptr2)--;
    }
    char (str2[MAX_PATH]) = {0};
    if ((ptr2) == (name)) {
        str2[0] = 0;
    } else {
        memcpy(str2, ptr2, (ptr1) - (ptr2));
        str2[(ptr1) - (ptr2)] = 0;
    }
    #line 161
    int os1 = ion_get_os(str1);
    int arch1 = ion_get_arch(str1);
    int os2 = ion_get_os(str2);
    int arch2 = ion_get_arch(str2);
    if (((arch1) != (-(1))) && ((os2) != (-(1)))) {
        return ((arch1) != (ion_target_arch)) || ((os2) != (ion_target_os));
    } else if (((arch2) != (-(1))) && ((os1) != (-(1)))) {
        return ((arch2) != (ion_target_arch)) || ((os1) != (ion_target_os));
    } else if ((os1) != (-(1))) {
        return (os1) != (ion_target_os);
    } else if ((arch1) != (-(1))) {
        return (arch1) != (ion_target_arch);
    } else {
        return false;
    }
}

ion_TypeMetrics (*ion_type_metrics);
ion_Type (*ion_type_void) = &((ion_Type){ION_CMPL_TYPE_VOID});
ion_Type (*ion_type_bool) = &((ion_Type){ION_CMPL_TYPE_BOOL});
ion_Type (*ion_type_char) = &((ion_Type){ION_CMPL_TYPE_CHAR});
ion_Type (*ion_type_uchar) = &((ion_Type){ION_CMPL_TYPE_UCHAR});
ion_Type (*ion_type_schar) = &((ion_Type){ION_CMPL_TYPE_SCHAR});
ion_Type (*ion_type_short) = &((ion_Type){ION_CMPL_TYPE_SHORT});
ion_Type (*ion_type_ushort) = &((ion_Type){ION_CMPL_TYPE_USHORT});
ion_Type (*ion_type_int) = &((ion_Type){ION_CMPL_TYPE_INT});
ion_Type (*ion_type_uint) = &((ion_Type){ION_CMPL_TYPE_UINT});
ion_Type (*ion_type_long) = &((ion_Type){ION_CMPL_TYPE_LONG});
ion_Type (*ion_type_ulong) = &((ion_Type){ION_CMPL_TYPE_ULONG});
ion_Type (*ion_type_llong) = &((ion_Type){ION_CMPL_TYPE_LLONG});
ion_Type (*ion_type_ullong) = &((ion_Type){ION_CMPL_TYPE_ULLONG});
ion_Type (*ion_type_float) = &((ion_Type){ION_CMPL_TYPE_FLOAT});
ion_Type (*ion_type_double) = &((ion_Type){ION_CMPL_TYPE_DOUBLE});
int ion_next_typeid = 1;
ion_Type (*ion_type_uintptr);
ion_Type (*ion_type_usize);
ion_Type (*ion_type_ssize);
ion_Map ion_typeid_map;
#line 96 "C:\\Users\\Tom\\Documents\\projects\\ion\\ion\\type.ion"
ion_Type (*ion_get_type_from_typeid(int typeid)) {
    if ((typeid) == (0)) {
        return NULL;
    }
    return ion_map_get(&(ion_typeid_map), (void *)((uintptr_t)(typeid)));
}

void ion_register_typeid(ion_Type (*type)) {
    ion_map_put(&(ion_typeid_map), (void *)((uintptr_t)(type->typeid)), type);
}

ion_Type (*ion_type_alloc(TypeKind kind)) {
    ion_Type (*type) = ion_xcalloc(1, sizeof(ion_Type));
    type->kind = kind;
    type->typeid = (ion_next_typeid)++;
    ion_register_typeid(type);
    return type;
}

bool ion_is_ptr_type(ion_Type (*type)) {
    return (type->kind) == (ION_CMPL_TYPE_PTR);
}

bool ion_is_func_type(ion_Type (*type)) {
    return (type->kind) == (ION_CMPL_TYPE_FUNC);
}

bool ion_is_ptr_like_type(ion_Type (*type)) {
    return ((type->kind) == (ION_CMPL_TYPE_PTR)) || ((type->kind) == (ION_CMPL_TYPE_FUNC));
}

bool ion_is_const_type(ion_Type (*type)) {
    return (type->kind) == (ION_CMPL_TYPE_CONST);
}

bool ion_is_array_type(ion_Type (*type)) {
    return (type->kind) == (ION_CMPL_TYPE_ARRAY);
}

bool ion_is_incomplete_array_type(ion_Type (*type)) {
    return (ion_is_array_type(type)) && ((type->num_elems) == (0));
}

bool ion_is_integer_type(ion_Type (*type)) {
    return ((ION_CMPL_TYPE_BOOL) <= (type->kind)) && ((type->kind) <= (ION_CMPL_TYPE_ENUM));
}

bool ion_is_floating_type(ion_Type (*type)) {
    return ((ION_CMPL_TYPE_FLOAT) <= (type->kind)) && ((type->kind) <= (ION_CMPL_TYPE_DOUBLE));
}

bool ion_is_arithmetic_type(ion_Type (*type)) {
    return ((ION_CMPL_TYPE_BOOL) <= (type->kind)) && ((type->kind) <= (ION_CMPL_TYPE_DOUBLE));
}

bool ion_is_scalar_type(ion_Type (*type)) {
    return ((ION_CMPL_TYPE_BOOL) <= (type->kind)) && ((type->kind) <= (ION_CMPL_TYPE_FUNC));
}

bool ion_is_aggregate_type(ion_Type (*type)) {
    return ((type->kind) == (ION_CMPL_TYPE_STRUCT)) || ((type->kind) == (ION_CMPL_TYPE_UNION));
}

bool ion_is_signed_type(ion_Type (*type)) {
    switch (type->kind) {
    case ION_CMPL_TYPE_CHAR: {
        return ion_type_metrics[ION_CMPL_TYPE_CHAR].sign;
        break;
    }
    case ION_CMPL_TYPE_SCHAR:
    case ION_CMPL_TYPE_SHORT:
    case ION_CMPL_TYPE_INT:
    case ION_CMPL_TYPE_LONG:
    case ION_CMPL_TYPE_LLONG: {
        #line 168
        return true;
        break;
    }
    default: {
        #line 170
        return false;
        break;
    }
    }
}

char const ((*(ion_type_names[ION_NUM_CMPL_TYPE_KINDS]))) = {[ION_CMPL_TYPE_VOID] = "void", [ION_CMPL_TYPE_BOOL] = "bool", [ION_CMPL_TYPE_CHAR] = "char", [ION_CMPL_TYPE_SCHAR] = "schar", [ION_CMPL_TYPE_UCHAR] = "uchar", [ION_CMPL_TYPE_SHORT] = "short", [ION_CMPL_TYPE_USHORT] = "ushort", [ION_CMPL_TYPE_INT] = "int", [ION_CMPL_TYPE_UINT] = "uint", [ION_CMPL_TYPE_LONG] = "long", [ION_CMPL_TYPE_ULONG] = "ulong", [ION_CMPL_TYPE_LLONG] = "llong", [ION_CMPL_TYPE_ULLONG] = "ullong", [ION_CMPL_TYPE_FLOAT] = "float", [ION_CMPL_TYPE_DOUBLE] = "double"};
int (ion_type_ranks[ION_NUM_CMPL_TYPE_KINDS]) = {[ION_CMPL_TYPE_BOOL] = 1, [ION_CMPL_TYPE_CHAR] = 2, [ION_CMPL_TYPE_SCHAR] = 2, [ION_CMPL_TYPE_UCHAR] = 2, [ION_CMPL_TYPE_SHORT] = 3, [ION_CMPL_TYPE_USHORT] = 3, [ION_CMPL_TYPE_INT] = 4, [ION_CMPL_TYPE_UINT] = 4, [ION_CMPL_TYPE_LONG] = 5, [ION_CMPL_TYPE_ULONG] = 5, [ION_CMPL_TYPE_LLONG] = 6, [ION_CMPL_TYPE_ULLONG] = 6};
#line 207
int ion_type_rank(ion_Type (*type)) {
    int rank = ion_type_ranks[type->kind];
    assert((rank) != (0));
    return rank;
}

ion_Type (*ion_unsigned_type(ion_Type (*type))) {
    switch (type->kind) {
    case ION_CMPL_TYPE_BOOL: {
        return ion_type_bool;
        break;
    }
    case ION_CMPL_TYPE_CHAR:
    case ION_CMPL_TYPE_SCHAR:
    case ION_CMPL_TYPE_UCHAR: {
        #line 220
        return ion_type_uchar;
        break;
    }
    case ION_CMPL_TYPE_SHORT:
    case ION_CMPL_TYPE_USHORT: {
        #line 223
        return ion_type_ushort;
        break;
    }
    case ION_CMPL_TYPE_INT:
    case ION_CMPL_TYPE_UINT: {
        #line 226
        return ion_type_uint;
        break;
    }
    case ION_CMPL_TYPE_LONG:
    case ION_CMPL_TYPE_ULONG: {
        #line 229
        return ion_type_ulong;
        break;
    }
    case ION_CMPL_TYPE_LLONG:
    case ION_CMPL_TYPE_ULLONG: {
        #line 232
        return ion_type_ullong;
        break;
    }
    default: {
        #line 234
        assert(0);
        return NULL;
        break;
    }
    }
}

#line 239
size_t ion_type_sizeof(ion_Type (*type)) {
    assert((type->kind) > (ION_CMPL_TYPE_COMPLETING));
    return type->size;
}

size_t ion_type_alignof(ion_Type (*type)) {
    assert((type->kind) > (ION_CMPL_TYPE_COMPLETING));
    return type->align;
}

ion_Map ion_cached_ptr_types;
#line 251
ion_Type (*ion_type_ptr(ion_Type (*base))) {
    ion_Type (*type) = ion_map_get(&(ion_cached_ptr_types), base);
    if (!(type)) {
        type = ion_type_alloc(ION_CMPL_TYPE_PTR);
        type->size = ion_type_metrics[ION_CMPL_TYPE_PTR].size;
        type->align = ion_type_metrics[ION_CMPL_TYPE_PTR].align;
        type->base = base;
        ion_map_put(&(ion_cached_ptr_types), base, type);
    }
    return type;
}

ion_Map ion_cached_const_types;
#line 265
ion_Type (*ion_type_const(ion_Type (*base))) {
    if ((base->kind) == (ION_CMPL_TYPE_CONST)) {
        return base;
    }
    ion_Type (*type) = ion_map_get(&(ion_cached_const_types), base);
    if (!(type)) {
        ion_complete_type(base);
        type = ion_type_alloc(ION_CMPL_TYPE_CONST);
        type->nonmodifiable = true;
        type->size = base->size;
        type->align = base->align;
        type->base = base;
        ion_map_put(&(ion_cached_const_types), base, type);
    }
    return type;
}

ion_Type (*ion_unqualify_type(ion_Type (*type))) {
    if ((type->kind) == (ION_CMPL_TYPE_CONST)) {
        return type->base;
    } else {
        return type;
    }
}

ion_Map ion_cached_array_types;
#line 297
ion_Type (*ion_type_array(ion_Type (*base), size_t num_elems)) {
    ullong hash = ion_hash_mix(ion_hash_ptr(base), ion_hash_uint64(num_elems));
    uint64_t key = (hash ? hash : 1);
    ion_CachedArrayType (*cached) = ion_map_get_from_uint64(&(ion_cached_array_types), key);
    for (ion_CachedArrayType (*it) = cached; it; it = it->next) {
        ion_Type (*type) = it->type;
        if (((type->base) == (base)) && ((type->num_elems) == (num_elems))) {
            return type;
        }
    }
    ion_complete_type(base);
    ion_Type (*type) = ion_type_alloc(ION_CMPL_TYPE_ARRAY);
    type->nonmodifiable = base->nonmodifiable;
    type->size = (num_elems) * (ion_type_sizeof(base));
    type->align = ion_type_alignof(base);
    type->base = base;
    type->num_elems = num_elems;
    ion_CachedArrayType (*new_cached) = ion_xmalloc(sizeof(ion_CachedArrayType));
    new_cached->type = type;
    new_cached->next = cached;
    ion_map_put_from_uint64(&(ion_cached_array_types), key, new_cached);
    return type;
}

ion_Map ion_cached_func_types;
#line 328
ion_Type (*ion_type_func(ion_Type (*(*params)), size_t num_params, ion_Type (*ret), bool has_varargs)) {
    ullong params_size = (num_params) * (sizeof(*(params)));
    ullong hash = ion_hash_mix(ion_hash_bytes(params, params_size), ion_hash_ptr(ret));
    uint64_t key = (hash ? hash : 1);
    ion_CachedFuncType (*cached) = ion_map_get_from_uint64(&(ion_cached_func_types), key);
    for (ion_CachedFuncType (*it) = cached; it; it = it->next) {
        ion_Type (*type) = it->type;
        if ((((type->function.num_params) == (num_params)) && ((type->function.ret) == (ret))) && ((type->function.has_varargs) == (has_varargs))) {
            if ((memcmp(type->function.params, params, params_size)) == (0)) {
                return type;
            }
        }
    }
    ion_Type (*type) = ion_type_alloc(ION_CMPL_TYPE_FUNC);
    type->size = ion_type_metrics[ION_CMPL_TYPE_PTR].size;
    type->align = ion_type_metrics[ION_CMPL_TYPE_PTR].align;
    type->function.params = ion_memdup(params, params_size);
    type->function.num_params = num_params;
    type->function.has_varargs = has_varargs;
    type->function.ret = ret;
    ion_CachedFuncType (*new_cached) = ion_xmalloc(sizeof(ion_CachedFuncType));
    new_cached->type = type;
    new_cached->next = cached;
    ion_map_put_from_uint64(&(ion_cached_func_types), key, new_cached);
    return type;
}

bool ion_has_duplicate_fields(ion_Type (*type)) {
    for (size_t i = 0; (i) < (type->aggregate.num_fields); (i)++) {
        for (size_t j = (i) + (1); (j) < (type->aggregate.num_fields); (j)++) {
            if ((type->aggregate.fields[i].name) == (type->aggregate.fields[j].name)) {
                return true;
            }
        }
    }
    return false;
}

void ion_add_type_fields(ion_TypeField (*(*fields)), ion_Type (*type), size_t offset) {
    assert(((type->kind) == (ION_CMPL_TYPE_STRUCT)) || ((type->kind) == (ION_CMPL_TYPE_UNION)));
    for (size_t i = 0; (i) < (type->aggregate.num_fields); (i)++) {
        ion_TypeField (*field) = &(type->aggregate.fields[i]);
        ion_TypeField new_field = {field->name, field->type, (field->offset) + (offset)};
        ion_buf_push((void (**))(fields), &(new_field), sizeof(new_field));
    }
}

void ion_type_complete_struct(ion_Type (*type), ion_TypeField (*fields), size_t num_fields) {
    assert((type->kind) == (ION_CMPL_TYPE_COMPLETING));
    type->kind = ION_CMPL_TYPE_STRUCT;
    type->size = 0;
    type->align = 0;
    bool nonmodifiable = false;
    ion_TypeField (*new_fields) = {0};
    for (ion_TypeField (*it) = fields; (it) != ((fields) + (num_fields)); (it)++) {
        assert(ion_is_pow2(ion_type_alignof(it->type)));
        if (it->name) {
            it->offset = type->size;
            ion_buf_push((void (**))(&(new_fields)), it, sizeof(*(it)));
        } else {
            ion_add_type_fields(&(new_fields), it->type, type->size);
        }
        type->align = ion_max(type->align, ion_type_alignof(it->type));
        type->size = (ion_type_sizeof(it->type)) + (ion_align_up(type->size, ion_type_alignof(it->type)));
        nonmodifiable = (it->type->nonmodifiable) || (nonmodifiable);
    }
    type->size = ion_align_up(type->size, type->align);
    type->aggregate.fields = new_fields;
    type->aggregate.num_fields = ion_buf_len(new_fields);
    type->nonmodifiable = nonmodifiable;
}

void ion_type_complete_union(ion_Type (*type), ion_TypeField (*fields), size_t num_fields) {
    assert((type->kind) == (ION_CMPL_TYPE_COMPLETING));
    type->kind = ION_CMPL_TYPE_UNION;
    type->size = 0;
    type->align = 0;
    bool nonmodifiable = false;
    ion_TypeField (*new_fields) = {0};
    for (ion_TypeField (*it) = fields; (it) != ((fields) + (num_fields)); (it)++) {
        assert((it->type->kind) > (ION_CMPL_TYPE_COMPLETING));
        if (it->name) {
            it->offset = type->size;
            ion_buf_push((void (**))(&(new_fields)), it, sizeof(*(it)));
        } else {
            ion_add_type_fields(&(new_fields), it->type, 0);
        }
        type->size = ion_max(type->size, ion_type_sizeof(it->type));
        type->align = ion_max(type->align, ion_type_alignof(it->type));
        nonmodifiable = (it->type->nonmodifiable) || (nonmodifiable);
    }
    type->size = ion_align_up(type->size, type->align);
    type->aggregate.fields = new_fields;
    type->aggregate.num_fields = ion_buf_len(new_fields);
    type->nonmodifiable = nonmodifiable;
}

ion_Type (*ion_type_incomplete(ion_Sym (*sym))) {
    ion_Type (*type) = ion_type_alloc(ION_CMPL_TYPE_INCOMPLETE);
    type->sym = sym;
    return type;
}

ion_Type (*ion_type_enum(ion_Sym (*sym), ion_Type (*base))) {
    ion_Type (*type) = ion_type_alloc(ION_CMPL_TYPE_ENUM);
    type->sym = sym;
    type->base = base;
    type->size = ion_type_int->size;
    type->align = ion_type_int->align;
    return type;
}

void ion_init_builtin_type(ion_Type (*type)) {
    type->typeid = (ion_next_typeid)++;
    ion_register_typeid(type);
    type->size = ion_type_metrics[type->kind].size;
    type->align = ion_type_metrics[type->kind].align;
}

void ion_init_builtin_types(void) {
    ion_init_builtin_type(ion_type_void);
    ion_init_builtin_type(ion_type_bool);
    ion_init_builtin_type(ion_type_char);
    ion_init_builtin_type(ion_type_uchar);
    ion_init_builtin_type(ion_type_schar);
    ion_init_builtin_type(ion_type_short);
    ion_init_builtin_type(ion_type_ushort);
    ion_init_builtin_type(ion_type_int);
    ion_init_builtin_type(ion_type_uint);
    ion_init_builtin_type(ion_type_long);
    ion_init_builtin_type(ion_type_ulong);
    ion_init_builtin_type(ion_type_llong);
    ion_init_builtin_type(ion_type_ullong);
    ion_init_builtin_type(ion_type_float);
    ion_init_builtin_type(ion_type_double);
}

int ion_aggregate_item_field_index(ion_Type (*type), char const ((*name))) {
    assert(ion_is_aggregate_type(type));
    for (size_t i = 0; (i) < (type->aggregate.num_fields); (i)++) {
        if ((type->aggregate.fields[i].name) == (name)) {
            return (int)(i);
        }
    }
    return -(1);
}

ion_Type (*ion_aggregate_item_field_type_from_index(ion_Type (*type), int index)) {
    assert(ion_is_aggregate_type(type));
    assert(((0) <= (index)) && ((index) < ((int)(type->aggregate.num_fields))));
    return type->aggregate.fields[index].type;
}

ion_Type (*ion_aggregate_item_field_type_from_name(ion_Type (*type), char const ((*name)))) {
    assert(ion_is_aggregate_type(type));
    int index = ion_aggregate_item_field_index(type, name);
    if ((index) < (0)) {
        return NULL;
    }
    return ion_aggregate_item_field_type_from_index(type, index);
}

// Foreign source files

static void va_arg_ptr(va_list *args, Any any) {
    switch (typeid_kind(any.type)) {
    case TYPE_BOOL:
        *(bool *)any.ptr = (bool)va_arg(*args, int);
        break;
    case TYPE_CHAR:
        *(char *)any.ptr = (char)va_arg(*args, int);
        break;
    case TYPE_UCHAR:
        *(uchar *)any.ptr = (uchar)va_arg(*args, int);
        break;
    case TYPE_SCHAR:
        *(schar *)any.ptr = (schar)va_arg(*args, int);
        break;
    case TYPE_SHORT:
        *(short *)any.ptr = (short)va_arg(*args, int);
        break;
    case TYPE_USHORT:
        *(ushort *)any.ptr = (ushort)va_arg(*args, int);
        break;
    case TYPE_INT:
        *(int *)any.ptr = va_arg(*args, int);
        break;
    case TYPE_UINT:
        *(uint *)any.ptr = va_arg(*args, uint);
        break;
    case TYPE_LONG:
        *(long *)any.ptr = va_arg(*args, long);
        break;
    case TYPE_ULONG:
        *(ulong *)any.ptr = va_arg(*args, ulong);
        break;
    case TYPE_LLONG:
        *(llong *)any.ptr = va_arg(*args, llong);
        break;
    case TYPE_ULLONG:
        *(ullong *)any.ptr = va_arg(*args, ullong);
        break;
    case TYPE_FLOAT:
        *(float *)any.ptr = (float)va_arg(*args, double);
        break;
    case TYPE_DOUBLE:
        *(double *)any.ptr = va_arg(*args, double);
        break;
    case TYPE_FUNC:
    case TYPE_PTR:
        *(void **)any.ptr = va_arg(*args, void *);
        break;
    default:
        assert(0 && "argument type not supported");
        break;
    }
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif
