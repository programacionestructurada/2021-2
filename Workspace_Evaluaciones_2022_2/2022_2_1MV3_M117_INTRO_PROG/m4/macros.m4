dnl divert(-1)
dnl # File macros.m4
dnl # Version 1.0 M4 macros for workspace 2022_2_Evals_1MV3_2MV4_3MM11
dnl #
dnl # A file trans-LANG.m4 is defined for each group.
dnl #
dnl divert(0)
changequote(`[',`]')                                dnl # change quotes to curly braces
ifdef([GRUPO],,[define([GRUPO],[2022_2_1MV3_IntroProg])]) dnl # Default= 2022_2_1MV3_IntroProg
include([m4/trans-]GRUPO[.m4])                     dnl # call translation file
undefine([format])                              dnl # Suppress the format definition
define([_ANNEE_],esyscmd(date +%Y))             dnl # Current year0
                                                dnl # First macro
dnl define([HEADER_TITRE],[define(_TITLE_,$1)]) 
dnl                                                 # Second macro
define([C_FILE_ENTETE],[
dnl divert(-1)
dnl /*
dnl  * DO NOT EDIT! This file is generated automatically!
dnl  */
dnl divert(0)
/*
 * This file is generated automatically!
 */
#include "../../CommFiles/Discente.h" 
]) 
define([[COUNTER]], defn([[COUNT_UP]]))             dnl Third macro
dnl # init counter
dnl COUNTER(0)
                                                dnl Fourth macro
divert(-1)
define([ESTRUCTURA_DISCENTE],[
struct Discente $1 = {
 "$2",
 {0,10,10,10,10,10,10,10,10}
};])
divert(0)
dnl define([ESTRUCTURA_DISCENTE],[[
dnl divert(0)dnl 
dnl struct Discente $1 = {
dnl  "$2",
dnl  {0,10,10,10,10,10,10,10,10}
dnl };//0x]eval(COUNTER,16,2)
dnl divert(-1)
dnl ])
dnl divert(0)dnl 
