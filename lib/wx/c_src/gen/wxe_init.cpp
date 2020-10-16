/*
 * %CopyrightBegin%
 *
 * Copyright Ericsson AB 2008-2020. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * %CopyrightEnd%
*/
 /* This file is also generated */
#include <wx/wx.h>
#include "../wxe_impl.h"
#include "wxe_macros.h"
#include "../wxe_return.h"
void WxeApp::init_consts(wxeMetaCommand& event) {
  WxeApp * app = this;
  ErlNifPid caller = event.caller;
  wxeMemEnv * memenv = global_me;
  wxeReturn rt = wxeReturn(memenv, caller, true);
  ERL_NIF_TERM consts[] = {
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxBLACK"), rt.make(*(wxBLACK))),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxBLACK_BRUSH"),rt.make_ref(app->getRef((void *)wxBLACK_BRUSH,memenv), "wxBrush")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxBLACK_DASHED_PEN"),rt.make_ref(app->getRef((void *)wxBLACK_DASHED_PEN,memenv), "wxPen")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxBLACK_PEN"),rt.make_ref(app->getRef((void *)wxBLACK_PEN,memenv), "wxPen")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxBLUE"), rt.make(*(wxBLUE))),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxBLUE_BRUSH"),rt.make_ref(app->getRef((void *)wxBLUE_BRUSH,memenv), "wxBrush")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxCROSS_CURSOR"),rt.make_ref(app->getRef((void *)wxCROSS_CURSOR,memenv), "wxCursor")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxCYAN"), rt.make(*(wxCYAN))),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxCYAN_BRUSH"),rt.make_ref(app->getRef((void *)wxCYAN_BRUSH,memenv), "wxBrush")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxCYAN_PEN"),rt.make_ref(app->getRef((void *)wxCYAN_PEN,memenv), "wxPen")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxGREEN"), rt.make(*(wxGREEN))),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxGREEN_BRUSH"),rt.make_ref(app->getRef((void *)wxGREEN_BRUSH,memenv), "wxBrush")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxGREEN_PEN"),rt.make_ref(app->getRef((void *)wxGREEN_PEN,memenv), "wxPen")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxGREY_BRUSH"),rt.make_ref(app->getRef((void *)wxGREY_BRUSH,memenv), "wxBrush")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxGREY_PEN"),rt.make_ref(app->getRef((void *)wxGREY_PEN,memenv), "wxPen")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxHOURGLASS_CURSOR"),rt.make_ref(app->getRef((void *)wxHOURGLASS_CURSOR,memenv), "wxCursor")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxITALIC_FONT"),rt.make_ref(app->getRef((void *)wxITALIC_FONT,memenv), "wxFont")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxLIGHT_GREY"), rt.make(*(wxLIGHT_GREY))),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxLIGHT_GREY_BRUSH"),rt.make_ref(app->getRef((void *)wxLIGHT_GREY_BRUSH,memenv), "wxBrush")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxLIGHT_GREY_PEN"),rt.make_ref(app->getRef((void *)wxLIGHT_GREY_PEN,memenv), "wxPen")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxMEDIUM_GREY_BRUSH"),rt.make_ref(app->getRef((void *)wxMEDIUM_GREY_BRUSH,memenv), "wxBrush")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxMEDIUM_GREY_PEN"),rt.make_ref(app->getRef((void *)wxMEDIUM_GREY_PEN,memenv), "wxPen")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxNORMAL_FONT"),rt.make_ref(app->getRef((void *)wxNORMAL_FONT,memenv), "wxFont")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxNullBitmap"),rt.make_ref(app->getRef((void *)&wxNullBitmap,memenv), "wxBitmap")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxNullBrush"),rt.make_ref(app->getRef((void *)&wxNullBrush,memenv), "wxBrush")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxNullCursor"),rt.make_ref(app->getRef((void *)&wxNullCursor,memenv), "wxCursor")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxNullFont"),rt.make_ref(app->getRef((void *)&wxNullFont,memenv), "wxFont")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxNullIcon"),rt.make_ref(app->getRef((void *)&wxNullIcon,memenv), "wxIcon")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxNullPalette"),rt.make_ref(app->getRef((void *)&wxNullPalette,memenv), "wxPalette")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxNullPen"),rt.make_ref(app->getRef((void *)&wxNullPen,memenv), "wxPen")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxRED"), rt.make(*(wxRED))),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxRED_BRUSH"),rt.make_ref(app->getRef((void *)wxRED_BRUSH,memenv), "wxBrush")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxRED_PEN"),rt.make_ref(app->getRef((void *)wxRED_PEN,memenv), "wxPen")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxSMALL_FONT"),rt.make_ref(app->getRef((void *)wxSMALL_FONT,memenv), "wxFont")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxSTANDARD_CURSOR"),rt.make_ref(app->getRef((void *)wxSTANDARD_CURSOR,memenv), "wxCursor")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxSWISS_FONT"),rt.make_ref(app->getRef((void *)wxSWISS_FONT,memenv), "wxFont")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxTRANSPARENT_BRUSH"),rt.make_ref(app->getRef((void *)wxTRANSPARENT_BRUSH,memenv), "wxBrush")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxTRANSPARENT_PEN"),rt.make_ref(app->getRef((void *)wxTRANSPARENT_PEN,memenv), "wxPen")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxWHITE"), rt.make(*(wxWHITE))),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxWHITE_BRUSH"),rt.make_ref(app->getRef((void *)wxWHITE_BRUSH,memenv), "wxBrush")),
    enif_make_tuple3(rt.env, rt.make_atom("global"), rt.make_atom("wxWHITE_PEN"),rt.make_ref(app->getRef((void *)wxWHITE_PEN,memenv), "wxPen")),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDefaultCoord"), rt.make_int(-1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDefaultSize"), enif_make_tuple2(rt.env, rt.make_int(-1), rt.make_int(-1))),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDefaultPosition"), enif_make_tuple2(rt.env, rt.make_int(-1), rt.make_int(-1))),
//  From "anybutton.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBU_AUTODRAW"), rt.make_int(wxBU_AUTODRAW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBU_NOTEXT"), rt.make_int(wxBU_NOTEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBU_EXACTFIT"), rt.make_int(wxBU_EXACTFIT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBU_ALIGN_MASK"), rt.make_int(wxBU_ALIGN_MASK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBU_BOTTOM"), rt.make_int(wxBU_BOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBU_RIGHT"), rt.make_int(wxBU_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBU_TOP"), rt.make_int(wxBU_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBU_LEFT"), rt.make_int(wxBU_LEFT)),
//  From "bitmap.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBITMAP_SCREEN_DEPTH"), rt.make_int(wxBITMAP_SCREEN_DEPTH)),
//  From "bookctrl.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBK_ALIGN_MASK"), rt.make_int(wxBK_ALIGN_MASK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBK_RIGHT"), rt.make_int(wxBK_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBK_LEFT"), rt.make_int(wxBK_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBK_BOTTOM"), rt.make_int(wxBK_BOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBK_TOP"), rt.make_int(wxBK_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBK_DEFAULT"), rt.make_int(wxBK_DEFAULT)),
//  From "checkbox.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCHK_ALLOW_3RD_STATE_FOR_USER"), rt.make_int(wxCHK_ALLOW_3RD_STATE_FOR_USER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCHK_3STATE"), rt.make_int(wxCHK_3STATE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCHK_2STATE"), rt.make_int(wxCHK_2STATE)),
//  From "choicdlg.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCHOICEDLG_STYLE"), rt.make_int(wxCHOICEDLG_STYLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCHOICE_HEIGHT"), rt.make_int(wxCHOICE_HEIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCHOICE_WIDTH"), rt.make_int(wxCHOICE_WIDTH)),
//  From "choicebk.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCHB_ALIGN_MASK"), rt.make_int(wxCHB_ALIGN_MASK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCHB_RIGHT"), rt.make_int(wxCHB_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCHB_LEFT"), rt.make_int(wxCHB_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCHB_BOTTOM"), rt.make_int(wxCHB_BOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCHB_TOP"), rt.make_int(wxCHB_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCHB_DEFAULT"), rt.make_int(wxCHB_DEFAULT)),
//  From "clrpicker.h"
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCLRP_SHOW_ALPHA"), rt.make_int(wxCLRP_SHOW_ALPHA)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCLRP_SHOW_ALPHA"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCLRP_SHOW_LABEL"), rt.make_int(wxCLRP_SHOW_LABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCLRP_DEFAULT_STYLE"), rt.make_int(wxCLRP_DEFAULT_STYLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCLRP_USE_TEXTCTRL"), rt.make_int(wxCLRP_USE_TEXTCTRL)),
//  From "datetime.h"
//  From "dcbuffer.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxALWAYS_NATIVE_DOUBLE_BUFFER"), rt.make_int(wxALWAYS_NATIVE_DOUBLE_BUFFER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBUFFER_USES_SHARED_BUFFER"), rt.make_int(wxBUFFER_USES_SHARED_BUFFER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBUFFER_CLIENT_AREA"), rt.make_int(wxBUFFER_CLIENT_AREA)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBUFFER_VIRTUAL_AREA"), rt.make_int(wxBUFFER_VIRTUAL_AREA)),
//  From "defs.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxRESIZE_BORDER"), rt.make_int(wxRESIZE_BORDER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTINY_CAPTION"), rt.make_int(wxTINY_CAPTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxMAXIMIZE_BOX"), rt.make_int(wxMAXIMIZE_BOX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxMINIMIZE_BOX"), rt.make_int(wxMINIMIZE_BOX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSYSTEM_MENU"), rt.make_int(wxSYSTEM_MENU)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCLOSE_BOX"), rt.make_int(wxCLOSE_BOX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxMAXIMIZE"), rt.make_int(wxMAXIMIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxMINIMIZE"), rt.make_int(wxMINIMIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxICONIZE"), rt.make_int(wxICONIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTAY_ON_TOP"), rt.make_int(wxSTAY_ON_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBETA_NUMBER"), rt.make_int(wxBETA_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSUBRELEASE_NUMBER"), rt.make_int(wxSUBRELEASE_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxRELEASE_NUMBER"), rt.make_int(wxRELEASE_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxMINOR_VERSION"), rt.make_int(wxMINOR_VERSION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxMAJOR_VERSION"), rt.make_int(wxMAJOR_VERSION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBROWSER_NEW_WINDOW"), rt.make_int(wxBROWSER_NEW_WINDOW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTOPLEVEL_EX_DIALOG"), rt.make_int(wxTOPLEVEL_EX_DIALOG)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxWS_EX_VALIDATE_RECURSIVELY"), rt.make_int(wxWS_EX_VALIDATE_RECURSIVELY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxScrolledWindowStyle"), rt.make_int(wxScrolledWindowStyle)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_USER_TEXT"), rt.make_int(wxLC_USER_TEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFRAME_SHAPED"), rt.make_int(wxFRAME_SHAPED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxID_TREECTRL"), rt.make_int(wxID_TREECTRL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCENTER_ON_SCREEN"), rt.make_int(wxCENTER_ON_SCREEN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCENTRE_ON_SCREEN"), rt.make_int(wxCENTRE_ON_SCREEN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCENTER_FRAME"), rt.make_int(wxCENTER_FRAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPRINT_QUALITY_DRAFT"), rt.make_int(wxPRINT_QUALITY_DRAFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPRINT_QUALITY_LOW"), rt.make_int(wxPRINT_QUALITY_LOW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPRINT_QUALITY_MEDIUM"), rt.make_int(wxPRINT_QUALITY_MEDIUM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPRINT_QUALITY_HIGH"), rt.make_int(wxPRINT_QUALITY_HIGH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBG_STYLE_CUSTOM"), rt.make_int(wxBG_STYLE_CUSTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxNOT_FOUND"), rt.make_int(wxNOT_FOUND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxICON_MASK"), rt.make_int(wxICON_MASK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxICON_AUTH_NEEDED"), rt.make_int(wxICON_AUTH_NEEDED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxICON_NONE"), rt.make_int(wxICON_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSETUP"), rt.make_int(wxSETUP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxMORE"), rt.make_int(wxMORE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxRESET"), rt.make_int(wxRESET)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBACKWARD"), rt.make_int(wxBACKWARD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFORWARD"), rt.make_int(wxFORWARD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxHELP"), rt.make_int(wxHELP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxICON_ASTERISK"), rt.make_int(wxICON_ASTERISK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxICON_STOP"), rt.make_int(wxICON_STOP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxICON_INFORMATION"), rt.make_int(wxICON_INFORMATION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxICON_QUESTION"), rt.make_int(wxICON_QUESTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxICON_ERROR"), rt.make_int(wxICON_ERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxICON_WARNING"), rt.make_int(wxICON_WARNING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxICON_HAND"), rt.make_int(wxICON_HAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxICON_EXCLAMATION"), rt.make_int(wxICON_EXCLAMATION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCANCEL_DEFAULT"), rt.make_int(wxCANCEL_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxNO_DEFAULT"), rt.make_int(wxNO_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxYES_DEFAULT"), rt.make_int(wxYES_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxOK_DEFAULT"), rt.make_int(wxOK_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCLOSE"), rt.make_int(wxCLOSE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxAPPLY"), rt.make_int(wxAPPLY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCANCEL"), rt.make_int(wxCANCEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxYES_NO"), rt.make_int(wxYES_NO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxNO"), rt.make_int(wxNO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxOK"), rt.make_int(wxOK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxYES"), rt.make_int(wxYES)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLI_VERTICAL"), rt.make_int(wxLI_VERTICAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLI_HORIZONTAL"), rt.make_int(wxLI_HORIZONTAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBI_EXPAND"), rt.make_int(wxBI_EXPAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTC_OWNERDRAW"), rt.make_int(wxTC_OWNERDRAW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTC_MULTILINE"), rt.make_int(wxTC_MULTILINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTC_BOTTOM"), rt.make_int(wxTC_BOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTC_RIGHT"), rt.make_int(wxTC_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTC_LEFT"), rt.make_int(wxTC_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTC_TOP"), rt.make_int(wxTC_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTC_FIXEDWIDTH"), rt.make_int(wxTC_FIXEDWIDTH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTC_RIGHTJUSTIFY"), rt.make_int(wxTC_RIGHTJUSTIFY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSP_WRAP"), rt.make_int(wxSP_WRAP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSP_ARROW_KEYS"), rt.make_int(wxSP_ARROW_KEYS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSP_VERTICAL"), rt.make_int(wxSP_VERTICAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSP_HORIZONTAL"), rt.make_int(wxSP_HORIZONTAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSB_VERTICAL"), rt.make_int(wxSB_VERTICAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSB_HORIZONTAL"), rt.make_int(wxSB_HORIZONTAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxRB_SINGLE"), rt.make_int(wxRB_SINGLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxRB_GROUP"), rt.make_int(wxRB_GROUP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxRA_VERTICAL"), rt.make_int(wxRA_VERTICAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxRA_HORIZONTAL"), rt.make_int(wxRA_HORIZONTAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxRA_SPECIFY_ROWS"), rt.make_int(wxRA_SPECIFY_ROWS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxRA_SPECIFY_COLS"), rt.make_int(wxRA_SPECIFY_COLS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxRA_TOPTOBOTTOM"), rt.make_int(wxRA_TOPTOBOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxRA_LEFTTORIGHT"), rt.make_int(wxRA_LEFTTORIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCB_DROPDOWN"), rt.make_int(wxCB_DROPDOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCB_READONLY"), rt.make_int(wxCB_READONLY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCB_SORT"), rt.make_int(wxCB_SORT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCB_SIMPLE"), rt.make_int(wxCB_SIMPLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_INT_HEIGHT"), rt.make_int(wxLB_INT_HEIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_HSCROLL"), rt.make_int(wxLB_HSCROLL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_NO_SB"), rt.make_int(wxLB_NO_SB)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_ALWAYS_SB"), rt.make_int(wxLB_ALWAYS_SB)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_OWNERDRAW"), rt.make_int(wxLB_OWNERDRAW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_NEEDED_SB"), rt.make_int(wxLB_NEEDED_SB)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_EXTENDED"), rt.make_int(wxLB_EXTENDED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_MULTIPLE"), rt.make_int(wxLB_MULTIPLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_SINGLE"), rt.make_int(wxLB_SINGLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_SORT"), rt.make_int(wxLB_SORT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFIXED_LENGTH"), rt.make_int(wxFIXED_LENGTH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCOLOURED"), rt.make_int(wxCOLOURED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxMENU_TEAROFF"), rt.make_int(wxMENU_TEAROFF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxMB_DOCKABLE"), rt.make_int(wxMB_DOCKABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFRAME_NO_WINDOW_MENU"), rt.make_int(wxFRAME_NO_WINDOW_MENU)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFRAME_DRAWER"), rt.make_int(wxFRAME_DRAWER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDIALOG_EX_CONTEXTHELP"), rt.make_int(wxDIALOG_EX_CONTEXTHELP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFRAME_EX_CONTEXTHELP"), rt.make_int(wxFRAME_EX_CONTEXTHELP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxWS_EX_CONTEXTHELP"), rt.make_int(wxWS_EX_CONTEXTHELP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDIALOG_EX_METAL"), rt.make_int(wxDIALOG_EX_METAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFRAME_EX_METAL"), rt.make_int(wxFRAME_EX_METAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxWS_EX_PROCESS_UI_UPDATES"), rt.make_int(wxWS_EX_PROCESS_UI_UPDATES)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxWS_EX_PROCESS_IDLE"), rt.make_int(wxWS_EX_PROCESS_IDLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxWS_EX_THEMED_BACKGROUND"), rt.make_int(wxWS_EX_THEMED_BACKGROUND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxWS_EX_TRANSIENT"), rt.make_int(wxWS_EX_TRANSIENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxWS_EX_BLOCK_EVENTS"), rt.make_int(wxWS_EX_BLOCK_EVENTS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxWINDOW_STYLE_MASK"), rt.make_int(wxWINDOW_STYLE_MASK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxNO_FULL_REPAINT_ON_RESIZE"), rt.make_int(wxNO_FULL_REPAINT_ON_RESIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFULL_REPAINT_ON_RESIZE"), rt.make_int(wxFULL_REPAINT_ON_RESIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPOPUP_WINDOW"), rt.make_int(wxPOPUP_WINDOW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBACKINGSTORE"), rt.make_int(wxBACKINGSTORE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxRETAINED"), rt.make_int(wxRETAINED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxWANTS_CHARS"), rt.make_int(wxWANTS_CHARS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTAB_TRAVERSAL"), rt.make_int(wxTAB_TRAVERSAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTRANSPARENT_WINDOW"), rt.make_int(wxTRANSPARENT_WINDOW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCLIP_SIBLINGS"), rt.make_int(wxCLIP_SIBLINGS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCLIP_CHILDREN"), rt.make_int(wxCLIP_CHILDREN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxALWAYS_SHOW_SB"), rt.make_int(wxALWAYS_SHOW_SB)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxNO_BORDER"), rt.make_int(wxNO_BORDER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTATIC_BORDER"), rt.make_int(wxSTATIC_BORDER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSIMPLE_BORDER"), rt.make_int(wxSIMPLE_BORDER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxBORDER"), rt.make_int(wxBORDER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxRAISED_BORDER"), rt.make_int(wxRAISED_BORDER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSUNKEN_BORDER"), rt.make_int(wxSUNKEN_BORDER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDOUBLE_BORDER"), rt.make_int(wxDOUBLE_BORDER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxCAPTION"), rt.make_int(wxCAPTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxHSCROLL"), rt.make_int(wxHSCROLL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxVSCROLL"), rt.make_int(wxVSCROLL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSIZE_FORCE_EVENT"), rt.make_int(wxSIZE_FORCE_EVENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSIZE_FORCE"), rt.make_int(wxSIZE_FORCE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSIZE_NO_ADJUSTMENTS"), rt.make_int(wxSIZE_NO_ADJUSTMENTS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSIZE_ALLOW_MINUS_ONE"), rt.make_int(wxSIZE_ALLOW_MINUS_ONE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSIZE_USE_EXISTING"), rt.make_int(wxSIZE_USE_EXISTING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSIZE_AUTO"), rt.make_int(wxSIZE_AUTO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSIZE_AUTO_HEIGHT"), rt.make_int(wxSIZE_AUTO_HEIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSIZE_AUTO_WIDTH"), rt.make_int(wxSIZE_AUTO_WIDTH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDEFAULT_CONTROL_BORDER"), rt.make_int(wxDEFAULT_CONTROL_BORDER)),
//  From "dialog.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDIALOG_ADAPTATION_LOOSE_BUTTONS"), rt.make_int(wxDIALOG_ADAPTATION_LOOSE_BUTTONS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDIALOG_ADAPTATION_ANY_SIZER"), rt.make_int(wxDIALOG_ADAPTATION_ANY_SIZER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDIALOG_ADAPTATION_STANDARD_SIZER"), rt.make_int(wxDIALOG_ADAPTATION_STANDARD_SIZER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDIALOG_ADAPTATION_NONE"), rt.make_int(wxDIALOG_ADAPTATION_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDEFAULT_DIALOG_STYLE"), rt.make_int(wxDEFAULT_DIALOG_STYLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDIALOG_NO_PARENT"), rt.make_int(wxDIALOG_NO_PARENT)),
//  From "dirdlg.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDD_DEFAULT_STYLE"), rt.make_int(wxDD_DEFAULT_STYLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDD_NEW_DIR_BUTTON"), rt.make_int(wxDD_NEW_DIR_BUTTON)),
#if wxCHECK_VERSION(3,1,4)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDD_SHOW_HIDDEN"), rt.make_int(wxDD_SHOW_HIDDEN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDD_SHOW_HIDDEN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,4)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDD_MULTIPLE"), rt.make_int(wxDD_MULTIPLE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDD_MULTIPLE"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDD_DIR_MUST_EXIST"), rt.make_int(wxDD_DIR_MUST_EXIST)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDD_CHANGE_DIR"), rt.make_int(wxDD_CHANGE_DIR)),
//  From "filedlg.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFD_DEFAULT_STYLE"), rt.make_int(wxFD_DEFAULT_STYLE)),
//  From "filepicker.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDIRP_DEFAULT_STYLE"), rt.make_int(wxDIRP_DEFAULT_STYLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDIRP_USE_TEXTCTRL"), rt.make_int(wxDIRP_USE_TEXTCTRL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDIRP_SMALL"), rt.make_int(wxDIRP_SMALL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDIRP_CHANGE_DIR"), rt.make_int(wxDIRP_CHANGE_DIR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDIRP_DIR_MUST_EXIST"), rt.make_int(wxDIRP_DIR_MUST_EXIST)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFLP_DEFAULT_STYLE"), rt.make_int(wxFLP_DEFAULT_STYLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFLP_USE_TEXTCTRL"), rt.make_int(wxFLP_USE_TEXTCTRL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFLP_SMALL"), rt.make_int(wxFLP_SMALL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFLP_CHANGE_DIR"), rt.make_int(wxFLP_CHANGE_DIR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFLP_FILE_MUST_EXIST"), rt.make_int(wxFLP_FILE_MUST_EXIST)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFLP_OVERWRITE_PROMPT"), rt.make_int(wxFLP_OVERWRITE_PROMPT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFLP_SAVE"), rt.make_int(wxFLP_SAVE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFLP_OPEN"), rt.make_int(wxFLP_OPEN)),
//  From "fontpicker.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFNTP_DEFAULT_STYLE"), rt.make_int(wxFNTP_DEFAULT_STYLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFNTP_USE_TEXTCTRL"), rt.make_int(wxFNTP_USE_TEXTCTRL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFONTBTN_DEFAULT_STYLE"), rt.make_int(wxFONTBTN_DEFAULT_STYLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFNTP_USEFONT_FOR_LABEL"), rt.make_int(wxFNTP_USEFONT_FOR_LABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFNTP_FONTDESC_AS_LABEL"), rt.make_int(wxFNTP_FONTDESC_AS_LABEL)),
//  From "frame.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFRAME_FLOAT_ON_PARENT"), rt.make_int(wxFRAME_FLOAT_ON_PARENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFRAME_TOOL_WINDOW"), rt.make_int(wxFRAME_TOOL_WINDOW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFRAME_NO_TASKBAR"), rt.make_int(wxFRAME_NO_TASKBAR)),
//  From "gauge.h"
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxGA_TEXT"), rt.make_int(wxGA_TEXT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxGA_TEXT"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxGA_SMOOTH"), rt.make_int(wxGA_SMOOTH)),
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxGA_PROGRESS"), rt.make_int(wxGA_PROGRESS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxGA_PROGRESS"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxGA_VERTICAL"), rt.make_int(wxGA_VERTICAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxGA_HORIZONTAL"), rt.make_int(wxGA_HORIZONTAL)),
//  From "grid.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxGRID_AUTOSIZE"), rt.make_int(wxGRID_AUTOSIZE)),
//  From "htmlwin.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxHW_DEFAULT_STYLE"), rt.make_int(wxHW_DEFAULT_STYLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxHW_NO_SELECTION"), rt.make_int(wxHW_NO_SELECTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxHW_SCROLLBAR_AUTO"), rt.make_int(wxHW_SCROLLBAR_AUTO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxHW_SCROLLBAR_NEVER"), rt.make_int(wxHW_SCROLLBAR_NEVER)),
//  From "icon.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxICON_SCREEN_DEPTH"), rt.make_int(wxICON_SCREEN_DEPTH)),
//  From "imaglist.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxIMAGELIST_DRAW_FOCUSED"), rt.make_int(wxIMAGELIST_DRAW_FOCUSED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxIMAGELIST_DRAW_SELECTED"), rt.make_int(wxIMAGELIST_DRAW_SELECTED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxIMAGELIST_DRAW_TRANSPARENT"), rt.make_int(wxIMAGELIST_DRAW_TRANSPARENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxIMAGELIST_DRAW_NORMAL"), rt.make_int(wxIMAGELIST_DRAW_NORMAL)),
//  From "listbook.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_ALIGN_MASK"), rt.make_int(wxLB_ALIGN_MASK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_RIGHT"), rt.make_int(wxLB_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_LEFT"), rt.make_int(wxLB_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_BOTTOM"), rt.make_int(wxLB_BOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_TOP"), rt.make_int(wxLB_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLB_DEFAULT"), rt.make_int(wxLB_DEFAULT)),
//  From "listctrl.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_HITTEST_ONITEM"), rt.make_int(wxLIST_HITTEST_ONITEM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_HITTEST_TORIGHT"), rt.make_int(wxLIST_HITTEST_TORIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_HITTEST_TOLEFT"), rt.make_int(wxLIST_HITTEST_TOLEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_HITTEST_ONITEMSTATEICON"), rt.make_int(wxLIST_HITTEST_ONITEMSTATEICON)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_HITTEST_ONITEMLABEL"), rt.make_int(wxLIST_HITTEST_ONITEMLABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_HITTEST_ONITEMICON"), rt.make_int(wxLIST_HITTEST_ONITEMICON)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_HITTEST_NOWHERE"), rt.make_int(wxLIST_HITTEST_NOWHERE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_HITTEST_BELOW"), rt.make_int(wxLIST_HITTEST_BELOW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_HITTEST_ABOVE"), rt.make_int(wxLIST_HITTEST_ABOVE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_STATE_CUT"), rt.make_int(wxLIST_STATE_CUT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_STATE_SELECTED"), rt.make_int(wxLIST_STATE_SELECTED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_STATE_FOCUSED"), rt.make_int(wxLIST_STATE_FOCUSED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_STATE_DROPHILITED"), rt.make_int(wxLIST_STATE_DROPHILITED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_STATE_DONTCARE"), rt.make_int(wxLIST_STATE_DONTCARE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_MASK_FORMAT"), rt.make_int(wxLIST_MASK_FORMAT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_MASK_WIDTH"), rt.make_int(wxLIST_MASK_WIDTH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_SET_ITEM"), rt.make_int(wxLIST_SET_ITEM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_MASK_DATA"), rt.make_int(wxLIST_MASK_DATA)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_MASK_IMAGE"), rt.make_int(wxLIST_MASK_IMAGE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_MASK_TEXT"), rt.make_int(wxLIST_MASK_TEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLIST_MASK_STATE"), rt.make_int(wxLIST_MASK_STATE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_MASK_SORT"), rt.make_int(wxLC_MASK_SORT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_MASK_ALIGN"), rt.make_int(wxLC_MASK_ALIGN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_MASK_TYPE"), rt.make_int(wxLC_MASK_TYPE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_SORT_DESCENDING"), rt.make_int(wxLC_SORT_DESCENDING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_SORT_ASCENDING"), rt.make_int(wxLC_SORT_ASCENDING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_SINGLE_SEL"), rt.make_int(wxLC_SINGLE_SEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_NO_SORT_HEADER"), rt.make_int(wxLC_NO_SORT_HEADER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_NO_HEADER"), rt.make_int(wxLC_NO_HEADER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_EDIT_LABELS"), rt.make_int(wxLC_EDIT_LABELS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_VIRTUAL"), rt.make_int(wxLC_VIRTUAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_AUTOARRANGE"), rt.make_int(wxLC_AUTOARRANGE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_ALIGN_LEFT"), rt.make_int(wxLC_ALIGN_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_ALIGN_TOP"), rt.make_int(wxLC_ALIGN_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_REPORT"), rt.make_int(wxLC_REPORT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_LIST"), rt.make_int(wxLC_LIST)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_SMALL_ICON"), rt.make_int(wxLC_SMALL_ICON)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_ICON"), rt.make_int(wxLC_ICON)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_HRULES"), rt.make_int(wxLC_HRULES)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxLC_VRULES"), rt.make_int(wxLC_VRULES)),
//  From "nonownedwnd.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxFRAME_SHAPED"), rt.make_int(wxFRAME_SHAPED)),
//  From "notebook.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxNB_NOPAGETHEME"), rt.make_int(wxNB_NOPAGETHEME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxNB_MULTILINE"), rt.make_int(wxNB_MULTILINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxNB_FIXEDWIDTH"), rt.make_int(wxNB_FIXEDWIDTH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxNB_RIGHT"), rt.make_int(wxNB_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxNB_LEFT"), rt.make_int(wxNB_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxNB_BOTTOM"), rt.make_int(wxNB_BOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxNB_TOP"), rt.make_int(wxNB_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxNB_DEFAULT"), rt.make_int(wxNB_DEFAULT)),
//  From "pickerbase.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPB_SMALL"), rt.make_int(wxPB_SMALL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPB_USE_TEXTCTRL"), rt.make_int(wxPB_USE_TEXTCTRL)),
//  From "popupwin.h"
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPU_CONTAINS_CONTROLS"), rt.make_int(wxPU_CONTAINS_CONTROLS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPU_CONTAINS_CONTROLS"), WXE_ATOM_undefined),
#endif
//  From "print.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxID_PREVIEW_ZOOM_OUT"), rt.make_int(wxID_PREVIEW_ZOOM_OUT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxID_PREVIEW_ZOOM_IN"), rt.make_int(wxID_PREVIEW_ZOOM_IN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxID_PREVIEW_GOTO"), rt.make_int(wxID_PREVIEW_GOTO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxID_PREVIEW_LAST"), rt.make_int(wxID_PREVIEW_LAST)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxID_PREVIEW_FIRST"), rt.make_int(wxID_PREVIEW_FIRST)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxID_PREVIEW_ZOOM"), rt.make_int(wxID_PREVIEW_ZOOM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxID_PREVIEW_PRINT"), rt.make_int(wxID_PREVIEW_PRINT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxID_PREVIEW_PREVIOUS"), rt.make_int(wxID_PREVIEW_PREVIOUS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxID_PREVIEW_NEXT"), rt.make_int(wxID_PREVIEW_NEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxID_PREVIEW_CLOSE"), rt.make_int(wxID_PREVIEW_CLOSE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPREVIEW_DEFAULT"), rt.make_int(wxPREVIEW_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPREVIEW_GOTO"), rt.make_int(wxPREVIEW_GOTO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPREVIEW_LAST"), rt.make_int(wxPREVIEW_LAST)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPREVIEW_FIRST"), rt.make_int(wxPREVIEW_FIRST)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPREVIEW_ZOOM"), rt.make_int(wxPREVIEW_ZOOM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPREVIEW_NEXT"), rt.make_int(wxPREVIEW_NEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPREVIEW_PREVIOUS"), rt.make_int(wxPREVIEW_PREVIOUS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPREVIEW_PRINT"), rt.make_int(wxPREVIEW_PRINT)),
//  From "progdlg.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPD_CAN_SKIP"), rt.make_int(wxPD_CAN_SKIP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPD_REMAINING_TIME"), rt.make_int(wxPD_REMAINING_TIME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPD_SMOOTH"), rt.make_int(wxPD_SMOOTH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPD_ESTIMATED_TIME"), rt.make_int(wxPD_ESTIMATED_TIME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPD_ELAPSED_TIME"), rt.make_int(wxPD_ELAPSED_TIME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPD_AUTO_HIDE"), rt.make_int(wxPD_AUTO_HIDE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPD_APP_MODAL"), rt.make_int(wxPD_APP_MODAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxPD_CAN_ABORT"), rt.make_int(wxPD_CAN_ABORT)),
//  From "sashwin.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSW_3D"), rt.make_int(wxSW_3D)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSW_3DBORDER"), rt.make_int(wxSW_3DBORDER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSW_3DSASH"), rt.make_int(wxSW_3DSASH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSW_BORDER"), rt.make_int(wxSW_BORDER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSW_NOBORDER"), rt.make_int(wxSW_NOBORDER)),
//  From "slider.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSL_LABELS"), rt.make_int(wxSL_LABELS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSL_VALUE_LABEL"), rt.make_int(wxSL_VALUE_LABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSL_MIN_MAX_LABELS"), rt.make_int(wxSL_MIN_MAX_LABELS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSL_INVERSE"), rt.make_int(wxSL_INVERSE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSL_SELRANGE"), rt.make_int(wxSL_SELRANGE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSL_BOTH"), rt.make_int(wxSL_BOTH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSL_BOTTOM"), rt.make_int(wxSL_BOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSL_RIGHT"), rt.make_int(wxSL_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSL_TOP"), rt.make_int(wxSL_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSL_LEFT"), rt.make_int(wxSL_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSL_AUTOTICKS"), rt.make_int(wxSL_AUTOTICKS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSL_TICKS"), rt.make_int(wxSL_TICKS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSL_VERTICAL"), rt.make_int(wxSL_VERTICAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSL_HORIZONTAL"), rt.make_int(wxSL_HORIZONTAL)),
//  From "splash.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSPLASH_NO_TIMEOUT"), rt.make_int(wxSPLASH_NO_TIMEOUT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSPLASH_TIMEOUT"), rt.make_int(wxSPLASH_TIMEOUT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSPLASH_NO_CENTRE"), rt.make_int(wxSPLASH_NO_CENTRE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSPLASH_CENTRE_ON_SCREEN"), rt.make_int(wxSPLASH_CENTRE_ON_SCREEN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSPLASH_CENTRE_ON_PARENT"), rt.make_int(wxSPLASH_CENTRE_ON_PARENT)),
//  From "splitter.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSP_3D"), rt.make_int(wxSP_3D)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSP_BORDER"), rt.make_int(wxSP_BORDER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSP_NO_XP_THEME"), rt.make_int(wxSP_NO_XP_THEME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSP_3DBORDER"), rt.make_int(wxSP_3DBORDER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSP_3DSASH"), rt.make_int(wxSP_3DSASH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSP_LIVE_UPDATE"), rt.make_int(wxSP_LIVE_UPDATE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSP_PERMIT_UNSPLIT"), rt.make_int(wxSP_PERMIT_UNSPLIT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSP_NOSASH"), rt.make_int(wxSP_NOSASH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSP_THIN_SASH"), rt.make_int(wxSP_THIN_SASH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSP_NOBORDER"), rt.make_int(wxSP_NOBORDER)),
//  From "stattext.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxST_ELLIPSIZE_END"), rt.make_int(wxST_ELLIPSIZE_END)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxST_ELLIPSIZE_MIDDLE"), rt.make_int(wxST_ELLIPSIZE_MIDDLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxST_ELLIPSIZE_START"), rt.make_int(wxST_ELLIPSIZE_START)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxST_NO_AUTORESIZE"), rt.make_int(wxST_NO_AUTORESIZE)),
//  From "statusbr.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSB_SUNKEN"), rt.make_int(wxSB_SUNKEN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSB_RAISED"), rt.make_int(wxSB_RAISED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSB_FLAT"), rt.make_int(wxSB_FLAT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSB_NORMAL"), rt.make_int(wxSB_NORMAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTB_DEFAULT_STYLE"), rt.make_int(wxSTB_DEFAULT_STYLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTB_ELLIPSIZE_END"), rt.make_int(wxSTB_ELLIPSIZE_END)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTB_ELLIPSIZE_MIDDLE"), rt.make_int(wxSTB_ELLIPSIZE_MIDDLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTB_ELLIPSIZE_START"), rt.make_int(wxSTB_ELLIPSIZE_START)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTB_SHOW_TIPS"), rt.make_int(wxSTB_SHOW_TIPS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTB_SIZEGRIP"), rt.make_int(wxSTB_SIZEGRIP)),
//  From "stc.h"
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_VCHOMEDISPLAYEXTEND"), rt.make_int(wxSTC_CMD_VCHOMEDISPLAYEXTEND)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_VCHOMEDISPLAYEXTEND"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_VCHOMEDISPLAY"), rt.make_int(wxSTC_CMD_VCHOMEDISPLAY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_VCHOMEDISPLAY"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_SCROLLTOEND"), rt.make_int(wxSTC_CMD_SCROLLTOEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_SCROLLTOSTART"), rt.make_int(wxSTC_CMD_SCROLLTOSTART)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_MOVESELECTEDLINESDOWN"), rt.make_int(wxSTC_CMD_MOVESELECTEDLINESDOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_MOVESELECTEDLINESUP"), rt.make_int(wxSTC_CMD_MOVESELECTEDLINESUP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_VERTICALCENTRECARET"), rt.make_int(wxSTC_CMD_VERTICALCENTRECARET)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_WORDRIGHTENDEXTEND"), rt.make_int(wxSTC_CMD_WORDRIGHTENDEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_WORDRIGHTEND"), rt.make_int(wxSTC_CMD_WORDRIGHTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_WORDLEFTENDEXTEND"), rt.make_int(wxSTC_CMD_WORDLEFTENDEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_WORDLEFTEND"), rt.make_int(wxSTC_CMD_WORDLEFTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_STUTTEREDPAGEDOWNEXTEND"), rt.make_int(wxSTC_CMD_STUTTEREDPAGEDOWNEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_STUTTEREDPAGEDOWN"), rt.make_int(wxSTC_CMD_STUTTEREDPAGEDOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_STUTTEREDPAGEUPEXTEND"), rt.make_int(wxSTC_CMD_STUTTEREDPAGEUPEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_STUTTEREDPAGEUP"), rt.make_int(wxSTC_CMD_STUTTEREDPAGEUP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_PAGEDOWNRECTEXTEND"), rt.make_int(wxSTC_CMD_PAGEDOWNRECTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_PAGEUPRECTEXTEND"), rt.make_int(wxSTC_CMD_PAGEUPRECTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINEENDRECTEXTEND"), rt.make_int(wxSTC_CMD_LINEENDRECTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_VCHOMERECTEXTEND"), rt.make_int(wxSTC_CMD_VCHOMERECTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_HOMERECTEXTEND"), rt.make_int(wxSTC_CMD_HOMERECTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_CHARRIGHTRECTEXTEND"), rt.make_int(wxSTC_CMD_CHARRIGHTRECTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_CHARLEFTRECTEXTEND"), rt.make_int(wxSTC_CMD_CHARLEFTRECTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINEUPRECTEXTEND"), rt.make_int(wxSTC_CMD_LINEUPRECTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINEDOWNRECTEXTEND"), rt.make_int(wxSTC_CMD_LINEDOWNRECTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_PARAUPEXTEND"), rt.make_int(wxSTC_CMD_PARAUPEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_PARAUP"), rt.make_int(wxSTC_CMD_PARAUP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_PARADOWNEXTEND"), rt.make_int(wxSTC_CMD_PARADOWNEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_PARADOWN"), rt.make_int(wxSTC_CMD_PARADOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_DELLINERIGHT"), rt.make_int(wxSTC_CMD_DELLINERIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_DELLINELEFT"), rt.make_int(wxSTC_CMD_DELLINELEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_WORDPARTRIGHTEXTEND"), rt.make_int(wxSTC_CMD_WORDPARTRIGHTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_WORDPARTRIGHT"), rt.make_int(wxSTC_CMD_WORDPARTRIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_WORDPARTLEFTEXTEND"), rt.make_int(wxSTC_CMD_WORDPARTLEFTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_WORDPARTLEFT"), rt.make_int(wxSTC_CMD_WORDPARTLEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINECOPY"), rt.make_int(wxSTC_CMD_LINECOPY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_VCHOMEWRAPEXTEND"), rt.make_int(wxSTC_CMD_VCHOMEWRAPEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_VCHOMEWRAP"), rt.make_int(wxSTC_CMD_VCHOMEWRAP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINEENDWRAPEXTEND"), rt.make_int(wxSTC_CMD_LINEENDWRAPEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINEENDWRAP"), rt.make_int(wxSTC_CMD_LINEENDWRAP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_HOMEWRAPEXTEND"), rt.make_int(wxSTC_CMD_HOMEWRAPEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_HOMEWRAP"), rt.make_int(wxSTC_CMD_HOMEWRAP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINEENDDISPLAYEXTEND"), rt.make_int(wxSTC_CMD_LINEENDDISPLAYEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINEENDDISPLAY"), rt.make_int(wxSTC_CMD_LINEENDDISPLAY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_HOMEDISPLAYEXTEND"), rt.make_int(wxSTC_CMD_HOMEDISPLAYEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_HOMEDISPLAY"), rt.make_int(wxSTC_CMD_HOMEDISPLAY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_DELETEBACKNOTLINE"), rt.make_int(wxSTC_CMD_DELETEBACKNOTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINESCROLLUP"), rt.make_int(wxSTC_CMD_LINESCROLLUP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINESCROLLDOWN"), rt.make_int(wxSTC_CMD_LINESCROLLDOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_UPPERCASE"), rt.make_int(wxSTC_CMD_UPPERCASE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LOWERCASE"), rt.make_int(wxSTC_CMD_LOWERCASE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINEDUPLICATE"), rt.make_int(wxSTC_CMD_LINEDUPLICATE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINETRANSPOSE"), rt.make_int(wxSTC_CMD_LINETRANSPOSE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINEDELETE"), rt.make_int(wxSTC_CMD_LINEDELETE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINECUT"), rt.make_int(wxSTC_CMD_LINECUT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_DELWORDRIGHTEND"), rt.make_int(wxSTC_CMD_DELWORDRIGHTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_DELWORDRIGHT"), rt.make_int(wxSTC_CMD_DELWORDRIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_DELWORDLEFT"), rt.make_int(wxSTC_CMD_DELWORDLEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_ZOOMOUT"), rt.make_int(wxSTC_CMD_ZOOMOUT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_ZOOMIN"), rt.make_int(wxSTC_CMD_ZOOMIN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_VCHOMEEXTEND"), rt.make_int(wxSTC_CMD_VCHOMEEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_VCHOME"), rt.make_int(wxSTC_CMD_VCHOME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_FORMFEED"), rt.make_int(wxSTC_CMD_FORMFEED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_NEWLINE"), rt.make_int(wxSTC_CMD_NEWLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_BACKTAB"), rt.make_int(wxSTC_CMD_BACKTAB)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_TAB"), rt.make_int(wxSTC_CMD_TAB)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_DELETEBACK"), rt.make_int(wxSTC_CMD_DELETEBACK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_CANCEL"), rt.make_int(wxSTC_CMD_CANCEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_EDITTOGGLEOVERTYPE"), rt.make_int(wxSTC_CMD_EDITTOGGLEOVERTYPE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_PAGEDOWNEXTEND"), rt.make_int(wxSTC_CMD_PAGEDOWNEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_PAGEDOWN"), rt.make_int(wxSTC_CMD_PAGEDOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_PAGEUPEXTEND"), rt.make_int(wxSTC_CMD_PAGEUPEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_PAGEUP"), rt.make_int(wxSTC_CMD_PAGEUP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_DOCUMENTENDEXTEND"), rt.make_int(wxSTC_CMD_DOCUMENTENDEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_DOCUMENTEND"), rt.make_int(wxSTC_CMD_DOCUMENTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_DOCUMENTSTARTEXTEND"), rt.make_int(wxSTC_CMD_DOCUMENTSTARTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_DOCUMENTSTART"), rt.make_int(wxSTC_CMD_DOCUMENTSTART)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINEENDEXTEND"), rt.make_int(wxSTC_CMD_LINEENDEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINEEND"), rt.make_int(wxSTC_CMD_LINEEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_HOMEEXTEND"), rt.make_int(wxSTC_CMD_HOMEEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_HOME"), rt.make_int(wxSTC_CMD_HOME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_WORDRIGHTEXTEND"), rt.make_int(wxSTC_CMD_WORDRIGHTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_WORDRIGHT"), rt.make_int(wxSTC_CMD_WORDRIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_WORDLEFTEXTEND"), rt.make_int(wxSTC_CMD_WORDLEFTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_WORDLEFT"), rt.make_int(wxSTC_CMD_WORDLEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_CHARRIGHTEXTEND"), rt.make_int(wxSTC_CMD_CHARRIGHTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_CHARRIGHT"), rt.make_int(wxSTC_CMD_CHARRIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_CHARLEFTEXTEND"), rt.make_int(wxSTC_CMD_CHARLEFTEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_CHARLEFT"), rt.make_int(wxSTC_CMD_CHARLEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINEUPEXTEND"), rt.make_int(wxSTC_CMD_LINEUPEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINEUP"), rt.make_int(wxSTC_CMD_LINEUP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINEDOWNEXTEND"), rt.make_int(wxSTC_CMD_LINEDOWNEXTEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_LINEDOWN"), rt.make_int(wxSTC_CMD_LINEDOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_CLEAR"), rt.make_int(wxSTC_CMD_CLEAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_PASTE"), rt.make_int(wxSTC_CMD_PASTE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_COPY"), rt.make_int(wxSTC_CMD_COPY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_CUT"), rt.make_int(wxSTC_CMD_CUT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_UNDO"), rt.make_int(wxSTC_CMD_UNDO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_SELECTALL"), rt.make_int(wxSTC_CMD_SELECTALL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMD_REDO"), rt.make_int(wxSTC_CMD_REDO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDICS_MASK"), rt.make_int(wxSTC_INDICS_MASK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC2_MASK"), rt.make_int(wxSTC_INDIC2_MASK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC1_MASK"), rt.make_int(wxSTC_INDIC1_MASK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC0_MASK"), rt.make_int(wxSTC_INDIC0_MASK)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_BADSEGMENT"), rt.make_int(wxSTC_EDI_BADSEGMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_BADSEGMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_UNH"), rt.make_int(wxSTC_EDI_UNH)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_UNH"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_UNA"), rt.make_int(wxSTC_EDI_UNA)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_UNA"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_SEP_RELEASE"), rt.make_int(wxSTC_EDI_SEP_RELEASE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_SEP_RELEASE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_SEP_COMPOSITE"), rt.make_int(wxSTC_EDI_SEP_COMPOSITE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_SEP_COMPOSITE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_SEP_ELEMENT"), rt.make_int(wxSTC_EDI_SEP_ELEMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_SEP_ELEMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_SEGMENTEND"), rt.make_int(wxSTC_EDI_SEGMENTEND)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_SEGMENTEND"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_SEGMENTSTART"), rt.make_int(wxSTC_EDI_SEGMENTSTART)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_SEGMENTSTART"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_DEFAULT"), rt.make_int(wxSTC_EDI_DEFAULT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDI_DEFAULT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_ERROR"), rt.make_int(wxSTC_JSON_ERROR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_ERROR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_LDKEYWORD"), rt.make_int(wxSTC_JSON_LDKEYWORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_LDKEYWORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_KEYWORD"), rt.make_int(wxSTC_JSON_KEYWORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_KEYWORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_COMPACTIRI"), rt.make_int(wxSTC_JSON_COMPACTIRI)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_COMPACTIRI"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_URI"), rt.make_int(wxSTC_JSON_URI)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_URI"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_OPERATOR"), rt.make_int(wxSTC_JSON_OPERATOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_OPERATOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_BLOCKCOMMENT"), rt.make_int(wxSTC_JSON_BLOCKCOMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_BLOCKCOMMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_LINECOMMENT"), rt.make_int(wxSTC_JSON_LINECOMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_LINECOMMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_ESCAPESEQUENCE"), rt.make_int(wxSTC_JSON_ESCAPESEQUENCE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_ESCAPESEQUENCE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_PROPERTYNAME"), rt.make_int(wxSTC_JSON_PROPERTYNAME)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_PROPERTYNAME"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_STRINGEOL"), rt.make_int(wxSTC_JSON_STRINGEOL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_STRINGEOL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_STRING"), rt.make_int(wxSTC_JSON_STRING)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_STRING"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_NUMBER"), rt.make_int(wxSTC_JSON_NUMBER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_NUMBER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_DEFAULT"), rt.make_int(wxSTC_JSON_DEFAULT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_JSON_DEFAULT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_GARBAGE"), rt.make_int(wxSTC_HEX_GARBAGE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_GARBAGE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_CHECKSUM_WRONG"), rt.make_int(wxSTC_HEX_CHECKSUM_WRONG)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_CHECKSUM_WRONG"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_CHECKSUM"), rt.make_int(wxSTC_HEX_CHECKSUM)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_CHECKSUM"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_DATA_EMPTY"), rt.make_int(wxSTC_HEX_DATA_EMPTY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_DATA_EMPTY"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_DATA_UNKNOWN"), rt.make_int(wxSTC_HEX_DATA_UNKNOWN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_DATA_UNKNOWN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_DATA_EVEN"), rt.make_int(wxSTC_HEX_DATA_EVEN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_DATA_EVEN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_DATA_ODD"), rt.make_int(wxSTC_HEX_DATA_ODD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_DATA_ODD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_EXTENDEDADDRESS"), rt.make_int(wxSTC_HEX_EXTENDEDADDRESS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_EXTENDEDADDRESS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_ADDRESSFIELD_UNKNOWN"), rt.make_int(wxSTC_HEX_ADDRESSFIELD_UNKNOWN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_ADDRESSFIELD_UNKNOWN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_STARTADDRESS"), rt.make_int(wxSTC_HEX_STARTADDRESS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_STARTADDRESS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_RECCOUNT"), rt.make_int(wxSTC_HEX_RECCOUNT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_RECCOUNT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_DATAADDRESS"), rt.make_int(wxSTC_HEX_DATAADDRESS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_DATAADDRESS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_NOADDRESS"), rt.make_int(wxSTC_HEX_NOADDRESS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_NOADDRESS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_BYTECOUNT_WRONG"), rt.make_int(wxSTC_HEX_BYTECOUNT_WRONG)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_BYTECOUNT_WRONG"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_BYTECOUNT"), rt.make_int(wxSTC_HEX_BYTECOUNT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_BYTECOUNT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_RECTYPE_UNKNOWN"), rt.make_int(wxSTC_HEX_RECTYPE_UNKNOWN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_RECTYPE_UNKNOWN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_RECTYPE"), rt.make_int(wxSTC_HEX_RECTYPE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_RECTYPE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_RECSTART"), rt.make_int(wxSTC_HEX_RECSTART)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_RECSTART"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_DEFAULT"), rt.make_int(wxSTC_HEX_DEFAULT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HEX_DEFAULT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BIBTEX_COMMENT"), rt.make_int(wxSTC_BIBTEX_COMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BIBTEX_COMMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BIBTEX_VALUE"), rt.make_int(wxSTC_BIBTEX_VALUE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BIBTEX_VALUE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BIBTEX_PARAMETER"), rt.make_int(wxSTC_BIBTEX_PARAMETER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BIBTEX_PARAMETER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BIBTEX_KEY"), rt.make_int(wxSTC_BIBTEX_KEY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BIBTEX_KEY"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BIBTEX_UNKNOWN_ENTRY"), rt.make_int(wxSTC_BIBTEX_UNKNOWN_ENTRY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BIBTEX_UNKNOWN_ENTRY"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BIBTEX_ENTRY"), rt.make_int(wxSTC_BIBTEX_ENTRY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BIBTEX_ENTRY"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BIBTEX_DEFAULT"), rt.make_int(wxSTC_BIBTEX_DEFAULT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BIBTEX_DEFAULT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_OPERATOR"), rt.make_int(wxSTC_REG_OPERATOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_OPERATOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_PARAMETER"), rt.make_int(wxSTC_REG_PARAMETER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_PARAMETER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_STRING_GUID"), rt.make_int(wxSTC_REG_STRING_GUID)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_STRING_GUID"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_KEYPATH_GUID"), rt.make_int(wxSTC_REG_KEYPATH_GUID)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_KEYPATH_GUID"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_ESCAPED"), rt.make_int(wxSTC_REG_ESCAPED)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_ESCAPED"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_DELETEDKEY"), rt.make_int(wxSTC_REG_DELETEDKEY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_DELETEDKEY"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_ADDEDKEY"), rt.make_int(wxSTC_REG_ADDEDKEY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_ADDEDKEY"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_VALUETYPE"), rt.make_int(wxSTC_REG_VALUETYPE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_VALUETYPE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_HEXDIGIT"), rt.make_int(wxSTC_REG_HEXDIGIT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_HEXDIGIT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_STRING"), rt.make_int(wxSTC_REG_STRING)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_STRING"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_VALUENAME"), rt.make_int(wxSTC_REG_VALUENAME)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_VALUENAME"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_COMMENT"), rt.make_int(wxSTC_REG_COMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_COMMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_DEFAULT"), rt.make_int(wxSTC_REG_DEFAULT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REG_DEFAULT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_LABEL"), rt.make_int(wxSTC_DMIS_LABEL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_LABEL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_UNSUPPORTED_MINOR"), rt.make_int(wxSTC_DMIS_UNSUPPORTED_MINOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_UNSUPPORTED_MINOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_UNSUPPORTED_MAJOR"), rt.make_int(wxSTC_DMIS_UNSUPPORTED_MAJOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_UNSUPPORTED_MAJOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_MINORWORD"), rt.make_int(wxSTC_DMIS_MINORWORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_MINORWORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_MAJORWORD"), rt.make_int(wxSTC_DMIS_MAJORWORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_MAJORWORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_KEYWORD"), rt.make_int(wxSTC_DMIS_KEYWORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_KEYWORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_NUMBER"), rt.make_int(wxSTC_DMIS_NUMBER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_NUMBER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_STRING"), rt.make_int(wxSTC_DMIS_STRING)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_STRING"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_COMMENT"), rt.make_int(wxSTC_DMIS_COMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_COMMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_DEFAULT"), rt.make_int(wxSTC_DMIS_DEFAULT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMIS_DEFAULT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_WORD3"), rt.make_int(wxSTC_DMAP_WORD3)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_WORD3"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_WORD2"), rt.make_int(wxSTC_DMAP_WORD2)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_WORD2"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_WORD"), rt.make_int(wxSTC_DMAP_WORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_WORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_IDENTIFIER"), rt.make_int(wxSTC_DMAP_IDENTIFIER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_IDENTIFIER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_OPERATOR"), rt.make_int(wxSTC_DMAP_OPERATOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_OPERATOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_STRINGEOL"), rt.make_int(wxSTC_DMAP_STRINGEOL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_STRINGEOL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_STRING2"), rt.make_int(wxSTC_DMAP_STRING2)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_STRING2"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_STRING1"), rt.make_int(wxSTC_DMAP_STRING1)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_STRING1"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_NUMBER"), rt.make_int(wxSTC_DMAP_NUMBER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_NUMBER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_COMMENT"), rt.make_int(wxSTC_DMAP_COMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_COMMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_DEFAULT"), rt.make_int(wxSTC_DMAP_DEFAULT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DMAP_DEFAULT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_BYTECHARACTER"), rt.make_int(wxSTC_RUST_BYTECHARACTER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_BYTECHARACTER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_BYTESTRINGR"), rt.make_int(wxSTC_RUST_BYTESTRINGR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_BYTESTRINGR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_BYTESTRING"), rt.make_int(wxSTC_RUST_BYTESTRING)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_BYTESTRING"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_LEXERROR"), rt.make_int(wxSTC_RUST_LEXERROR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_LEXERROR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_MACRO"), rt.make_int(wxSTC_RUST_MACRO)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_MACRO"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_LIFETIME"), rt.make_int(wxSTC_RUST_LIFETIME)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_LIFETIME"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_IDENTIFIER"), rt.make_int(wxSTC_RUST_IDENTIFIER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_IDENTIFIER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_OPERATOR"), rt.make_int(wxSTC_RUST_OPERATOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_OPERATOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_CHARACTER"), rt.make_int(wxSTC_RUST_CHARACTER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_CHARACTER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_STRINGR"), rt.make_int(wxSTC_RUST_STRINGR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_STRINGR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_STRING"), rt.make_int(wxSTC_RUST_STRING)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_STRING"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_WORD7"), rt.make_int(wxSTC_RUST_WORD7)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_WORD7"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_WORD6"), rt.make_int(wxSTC_RUST_WORD6)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_WORD6"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_WORD5"), rt.make_int(wxSTC_RUST_WORD5)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_WORD5"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_WORD4"), rt.make_int(wxSTC_RUST_WORD4)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_WORD4"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_WORD3"), rt.make_int(wxSTC_RUST_WORD3)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_WORD3"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_WORD2"), rt.make_int(wxSTC_RUST_WORD2)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_WORD2"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_WORD"), rt.make_int(wxSTC_RUST_WORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_WORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_NUMBER"), rt.make_int(wxSTC_RUST_NUMBER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_NUMBER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_COMMENTLINEDOC"), rt.make_int(wxSTC_RUST_COMMENTLINEDOC)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_COMMENTLINEDOC"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_COMMENTBLOCKDOC"), rt.make_int(wxSTC_RUST_COMMENTBLOCKDOC)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_COMMENTBLOCKDOC"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_COMMENTLINE"), rt.make_int(wxSTC_RUST_COMMENTLINE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_COMMENTLINE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_COMMENTBLOCK"), rt.make_int(wxSTC_RUST_COMMENTBLOCK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_COMMENTBLOCK"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_DEFAULT"), rt.make_int(wxSTC_RUST_DEFAULT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RUST_DEFAULT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_STRING_VARIABLE"), rt.make_int(wxSTC_KVIRC_STRING_VARIABLE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_STRING_VARIABLE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_STRING_FUNCTION"), rt.make_int(wxSTC_KVIRC_STRING_FUNCTION)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_STRING_FUNCTION"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_OPERATOR"), rt.make_int(wxSTC_KVIRC_OPERATOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_OPERATOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_NUMBER"), rt.make_int(wxSTC_KVIRC_NUMBER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_NUMBER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_VARIABLE"), rt.make_int(wxSTC_KVIRC_VARIABLE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_VARIABLE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_FUNCTION"), rt.make_int(wxSTC_KVIRC_FUNCTION)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_FUNCTION"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_FUNCTION_KEYWORD"), rt.make_int(wxSTC_KVIRC_FUNCTION_KEYWORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_FUNCTION_KEYWORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_KEYWORD"), rt.make_int(wxSTC_KVIRC_KEYWORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_KEYWORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_WORD"), rt.make_int(wxSTC_KVIRC_WORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_WORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_STRING"), rt.make_int(wxSTC_KVIRC_STRING)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_STRING"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_COMMENTBLOCK"), rt.make_int(wxSTC_KVIRC_COMMENTBLOCK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_COMMENTBLOCK"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_COMMENT"), rt.make_int(wxSTC_KVIRC_COMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_COMMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_DEFAULT"), rt.make_int(wxSTC_KVIRC_DEFAULT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KVIRC_DEFAULT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_PRAGMAS"), rt.make_int(wxSTC_STTXT_PRAGMAS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_PRAGMAS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_VARS"), rt.make_int(wxSTC_STTXT_VARS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_VARS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_DATETIME"), rt.make_int(wxSTC_STTXT_DATETIME)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_DATETIME"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_IDENTIFIER"), rt.make_int(wxSTC_STTXT_IDENTIFIER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_IDENTIFIER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_STRINGEOL"), rt.make_int(wxSTC_STTXT_STRINGEOL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_STRINGEOL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_STRING2"), rt.make_int(wxSTC_STTXT_STRING2)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_STRING2"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_STRING1"), rt.make_int(wxSTC_STTXT_STRING1)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_STRING1"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_CHARACTER"), rt.make_int(wxSTC_STTXT_CHARACTER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_CHARACTER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_OPERATOR"), rt.make_int(wxSTC_STTXT_OPERATOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_OPERATOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_PRAGMA"), rt.make_int(wxSTC_STTXT_PRAGMA)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_PRAGMA"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_HEXNUMBER"), rt.make_int(wxSTC_STTXT_HEXNUMBER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_HEXNUMBER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_NUMBER"), rt.make_int(wxSTC_STTXT_NUMBER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_NUMBER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_FB"), rt.make_int(wxSTC_STTXT_FB)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_FB"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_FUNCTION"), rt.make_int(wxSTC_STTXT_FUNCTION)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_FUNCTION"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_TYPE"), rt.make_int(wxSTC_STTXT_TYPE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_TYPE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_KEYWORD"), rt.make_int(wxSTC_STTXT_KEYWORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_KEYWORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_COMMENTLINE"), rt.make_int(wxSTC_STTXT_COMMENTLINE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_COMMENTLINE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_COMMENT"), rt.make_int(wxSTC_STTXT_COMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_COMMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_DEFAULT"), rt.make_int(wxSTC_STTXT_DEFAULT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STTXT_DEFAULT"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_STRING_VERBATIM_EOL"), rt.make_int(wxSTC_VISUALPROLOG_STRING_VERBATIM_EOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_STRING_VERBATIM_SPECIAL"), rt.make_int(wxSTC_VISUALPROLOG_STRING_VERBATIM_SPECIAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_STRING_VERBATIM"), rt.make_int(wxSTC_VISUALPROLOG_STRING_VERBATIM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_STRING_EOL_OPEN"), rt.make_int(wxSTC_VISUALPROLOG_STRING_EOL_OPEN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_STRING_ESCAPE_ERROR"), rt.make_int(wxSTC_VISUALPROLOG_STRING_ESCAPE_ERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_STRING_ESCAPE"), rt.make_int(wxSTC_VISUALPROLOG_STRING_ESCAPE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_STRING"), rt.make_int(wxSTC_VISUALPROLOG_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_CHARACTER_ESCAPE_ERROR"), rt.make_int(wxSTC_VISUALPROLOG_CHARACTER_ESCAPE_ERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_CHARACTER_TOO_MANY"), rt.make_int(wxSTC_VISUALPROLOG_CHARACTER_TOO_MANY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_CHARACTER"), rt.make_int(wxSTC_VISUALPROLOG_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_OPERATOR"), rt.make_int(wxSTC_VISUALPROLOG_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_NUMBER"), rt.make_int(wxSTC_VISUALPROLOG_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_ANONYMOUS"), rt.make_int(wxSTC_VISUALPROLOG_ANONYMOUS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_VARIABLE"), rt.make_int(wxSTC_VISUALPROLOG_VARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_IDENTIFIER"), rt.make_int(wxSTC_VISUALPROLOG_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_COMMENT_KEY_ERROR"), rt.make_int(wxSTC_VISUALPROLOG_COMMENT_KEY_ERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_COMMENT_KEY"), rt.make_int(wxSTC_VISUALPROLOG_COMMENT_KEY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_COMMENT_LINE"), rt.make_int(wxSTC_VISUALPROLOG_COMMENT_LINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_COMMENT_BLOCK"), rt.make_int(wxSTC_VISUALPROLOG_COMMENT_BLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_KEY_DIRECTIVE"), rt.make_int(wxSTC_VISUALPROLOG_KEY_DIRECTIVE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_KEY_MINOR"), rt.make_int(wxSTC_VISUALPROLOG_KEY_MINOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_KEY_MAJOR"), rt.make_int(wxSTC_VISUALPROLOG_KEY_MAJOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISUALPROLOG_DEFAULT"), rt.make_int(wxSTC_VISUALPROLOG_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_METHOD"), rt.make_int(wxSTC_OSCRIPT_METHOD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_PROPERTY"), rt.make_int(wxSTC_OSCRIPT_PROPERTY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_OBJECT"), rt.make_int(wxSTC_OSCRIPT_OBJECT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_FUNCTION"), rt.make_int(wxSTC_OSCRIPT_FUNCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_TYPE"), rt.make_int(wxSTC_OSCRIPT_TYPE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_LABEL"), rt.make_int(wxSTC_OSCRIPT_LABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_OPERATOR"), rt.make_int(wxSTC_OSCRIPT_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_KEYWORD"), rt.make_int(wxSTC_OSCRIPT_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_GLOBAL"), rt.make_int(wxSTC_OSCRIPT_GLOBAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_IDENTIFIER"), rt.make_int(wxSTC_OSCRIPT_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_CONSTANT"), rt.make_int(wxSTC_OSCRIPT_CONSTANT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_DOUBLEQUOTE_STRING"), rt.make_int(wxSTC_OSCRIPT_DOUBLEQUOTE_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_SINGLEQUOTE_STRING"), rt.make_int(wxSTC_OSCRIPT_SINGLEQUOTE_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_NUMBER"), rt.make_int(wxSTC_OSCRIPT_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_PREPROCESSOR"), rt.make_int(wxSTC_OSCRIPT_PREPROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_DOC_COMMENT"), rt.make_int(wxSTC_OSCRIPT_DOC_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_BLOCK_COMMENT"), rt.make_int(wxSTC_OSCRIPT_BLOCK_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_LINE_COMMENT"), rt.make_int(wxSTC_OSCRIPT_LINE_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OSCRIPT_DEFAULT"), rt.make_int(wxSTC_OSCRIPT_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_MOVED"), rt.make_int(wxSTC_ECL_MOVED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_CHANGED"), rt.make_int(wxSTC_ECL_CHANGED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_DELETED"), rt.make_int(wxSTC_ECL_DELETED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_ADDED"), rt.make_int(wxSTC_ECL_ADDED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_COMMENTDOC"), rt.make_int(wxSTC_ECL_COMMENTDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_WORD5"), rt.make_int(wxSTC_ECL_WORD5)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_WORD4"), rt.make_int(wxSTC_ECL_WORD4)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_WORD3"), rt.make_int(wxSTC_ECL_WORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_WORD2"), rt.make_int(wxSTC_ECL_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_COMMENTDOCKEYWORDERROR"), rt.make_int(wxSTC_ECL_COMMENTDOCKEYWORDERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_COMMENTDOCKEYWORD"), rt.make_int(wxSTC_ECL_COMMENTDOCKEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_WORD1"), rt.make_int(wxSTC_ECL_WORD1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_COMMENTLINEDOC"), rt.make_int(wxSTC_ECL_COMMENTLINEDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_REGEX"), rt.make_int(wxSTC_ECL_REGEX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_VERBATIM"), rt.make_int(wxSTC_ECL_VERBATIM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_STRINGEOL"), rt.make_int(wxSTC_ECL_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_IDENTIFIER"), rt.make_int(wxSTC_ECL_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_UNKNOWN"), rt.make_int(wxSTC_ECL_UNKNOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_PREPROCESSOR"), rt.make_int(wxSTC_ECL_PREPROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_UUID"), rt.make_int(wxSTC_ECL_UUID)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_CHARACTER"), rt.make_int(wxSTC_ECL_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_OPERATOR"), rt.make_int(wxSTC_ECL_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_WORD0"), rt.make_int(wxSTC_ECL_WORD0)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_STRING"), rt.make_int(wxSTC_ECL_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_NUMBER"), rt.make_int(wxSTC_ECL_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_COMMENTLINE"), rt.make_int(wxSTC_ECL_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_COMMENT"), rt.make_int(wxSTC_ECL_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ECL_DEFAULT"), rt.make_int(wxSTC_ECL_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVS_USERDFN"), rt.make_int(wxSTC_AVS_USERDFN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVS_CLIPPROP"), rt.make_int(wxSTC_AVS_CLIPPROP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVS_FUNCTION"), rt.make_int(wxSTC_AVS_FUNCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVS_PLUGIN"), rt.make_int(wxSTC_AVS_PLUGIN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVS_FILTER"), rt.make_int(wxSTC_AVS_FILTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVS_KEYWORD"), rt.make_int(wxSTC_AVS_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVS_TRIPLESTRING"), rt.make_int(wxSTC_AVS_TRIPLESTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVS_STRING"), rt.make_int(wxSTC_AVS_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVS_IDENTIFIER"), rt.make_int(wxSTC_AVS_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVS_OPERATOR"), rt.make_int(wxSTC_AVS_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVS_NUMBER"), rt.make_int(wxSTC_AVS_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVS_COMMENTLINE"), rt.make_int(wxSTC_AVS_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVS_COMMENTBLOCKN"), rt.make_int(wxSTC_AVS_COMMENTBLOCKN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVS_COMMENTBLOCK"), rt.make_int(wxSTC_AVS_COMMENTBLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVS_DEFAULT"), rt.make_int(wxSTC_AVS_DEFAULT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_INSTANCEPROPERTY"), rt.make_int(wxSTC_COFFEESCRIPT_INSTANCEPROPERTY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_INSTANCEPROPERTY"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_VERBOSE_REGEX_COMMENT"), rt.make_int(wxSTC_COFFEESCRIPT_VERBOSE_REGEX_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_VERBOSE_REGEX"), rt.make_int(wxSTC_COFFEESCRIPT_VERBOSE_REGEX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_COMMENTBLOCK"), rt.make_int(wxSTC_COFFEESCRIPT_COMMENTBLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_TRIPLEVERBATIM"), rt.make_int(wxSTC_COFFEESCRIPT_TRIPLEVERBATIM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_STRINGRAW"), rt.make_int(wxSTC_COFFEESCRIPT_STRINGRAW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_GLOBALCLASS"), rt.make_int(wxSTC_COFFEESCRIPT_GLOBALCLASS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_COMMENTDOCKEYWORDERROR"), rt.make_int(wxSTC_COFFEESCRIPT_COMMENTDOCKEYWORDERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_COMMENTDOCKEYWORD"), rt.make_int(wxSTC_COFFEESCRIPT_COMMENTDOCKEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_WORD2"), rt.make_int(wxSTC_COFFEESCRIPT_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_COMMENTLINEDOC"), rt.make_int(wxSTC_COFFEESCRIPT_COMMENTLINEDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_REGEX"), rt.make_int(wxSTC_COFFEESCRIPT_REGEX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_VERBATIM"), rt.make_int(wxSTC_COFFEESCRIPT_VERBATIM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_STRINGEOL"), rt.make_int(wxSTC_COFFEESCRIPT_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_IDENTIFIER"), rt.make_int(wxSTC_COFFEESCRIPT_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_OPERATOR"), rt.make_int(wxSTC_COFFEESCRIPT_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_PREPROCESSOR"), rt.make_int(wxSTC_COFFEESCRIPT_PREPROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_UUID"), rt.make_int(wxSTC_COFFEESCRIPT_UUID)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_CHARACTER"), rt.make_int(wxSTC_COFFEESCRIPT_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_STRING"), rt.make_int(wxSTC_COFFEESCRIPT_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_WORD"), rt.make_int(wxSTC_COFFEESCRIPT_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_NUMBER"), rt.make_int(wxSTC_COFFEESCRIPT_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_COMMENTDOC"), rt.make_int(wxSTC_COFFEESCRIPT_COMMENTDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_COMMENTLINE"), rt.make_int(wxSTC_COFFEESCRIPT_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_COMMENT"), rt.make_int(wxSTC_COFFEESCRIPT_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_COFFEESCRIPT_DEFAULT"), rt.make_int(wxSTC_COFFEESCRIPT_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_BADSTR"), rt.make_int(wxSTC_MODULA_BADSTR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_OPERATOR"), rt.make_int(wxSTC_MODULA_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_PRGKEY"), rt.make_int(wxSTC_MODULA_PRGKEY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_PRAGMA"), rt.make_int(wxSTC_MODULA_PRAGMA)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_PROC"), rt.make_int(wxSTC_MODULA_PROC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_CHARSPEC"), rt.make_int(wxSTC_MODULA_CHARSPEC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_CHAR"), rt.make_int(wxSTC_MODULA_CHAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_STRSPEC"), rt.make_int(wxSTC_MODULA_STRSPEC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_STRING"), rt.make_int(wxSTC_MODULA_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_FLOAT"), rt.make_int(wxSTC_MODULA_FLOAT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_BASENUM"), rt.make_int(wxSTC_MODULA_BASENUM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_NUMBER"), rt.make_int(wxSTC_MODULA_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_RESERVED"), rt.make_int(wxSTC_MODULA_RESERVED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_KEYWORD"), rt.make_int(wxSTC_MODULA_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_DOXYKEY"), rt.make_int(wxSTC_MODULA_DOXYKEY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_DOXYCOMM"), rt.make_int(wxSTC_MODULA_DOXYCOMM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_COMMENT"), rt.make_int(wxSTC_MODULA_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODULA_DEFAULT"), rt.make_int(wxSTC_MODULA_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_COMMENT_DOXYGEN"), rt.make_int(wxSTC_A68K_COMMENT_DOXYGEN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_COMMENT_SPECIAL"), rt.make_int(wxSTC_A68K_COMMENT_SPECIAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_COMMENT_WORD"), rt.make_int(wxSTC_A68K_COMMENT_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_MACRO_DECLARATION"), rt.make_int(wxSTC_A68K_MACRO_DECLARATION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_IDENTIFIER"), rt.make_int(wxSTC_A68K_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_STRING2"), rt.make_int(wxSTC_A68K_STRING2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_LABEL"), rt.make_int(wxSTC_A68K_LABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_MACRO_ARG"), rt.make_int(wxSTC_A68K_MACRO_ARG)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_DIRECTIVE"), rt.make_int(wxSTC_A68K_DIRECTIVE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_REGISTER"), rt.make_int(wxSTC_A68K_REGISTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_EXTINSTRUCTION"), rt.make_int(wxSTC_A68K_EXTINSTRUCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_CPUINSTRUCTION"), rt.make_int(wxSTC_A68K_CPUINSTRUCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_OPERATOR"), rt.make_int(wxSTC_A68K_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_STRING1"), rt.make_int(wxSTC_A68K_STRING1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_NUMBER_HEX"), rt.make_int(wxSTC_A68K_NUMBER_HEX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_NUMBER_BIN"), rt.make_int(wxSTC_A68K_NUMBER_BIN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_NUMBER_DEC"), rt.make_int(wxSTC_A68K_NUMBER_DEC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_COMMENT"), rt.make_int(wxSTC_A68K_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_A68K_DEFAULT"), rt.make_int(wxSTC_A68K_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_POSTPROC"), rt.make_int(wxSTC_TXT2TAGS_POSTPROC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_PREPROC"), rt.make_int(wxSTC_TXT2TAGS_PREPROC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_OPTION"), rt.make_int(wxSTC_TXT2TAGS_OPTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_COMMENT"), rt.make_int(wxSTC_TXT2TAGS_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_CODEBK"), rt.make_int(wxSTC_TXT2TAGS_CODEBK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_CODE2"), rt.make_int(wxSTC_TXT2TAGS_CODE2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_CODE"), rt.make_int(wxSTC_TXT2TAGS_CODE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_LINK"), rt.make_int(wxSTC_TXT2TAGS_LINK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_HRULE"), rt.make_int(wxSTC_TXT2TAGS_HRULE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_STRIKEOUT"), rt.make_int(wxSTC_TXT2TAGS_STRIKEOUT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_BLOCKQUOTE"), rt.make_int(wxSTC_TXT2TAGS_BLOCKQUOTE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_OLIST_ITEM"), rt.make_int(wxSTC_TXT2TAGS_OLIST_ITEM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_ULIST_ITEM"), rt.make_int(wxSTC_TXT2TAGS_ULIST_ITEM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_PRECHAR"), rt.make_int(wxSTC_TXT2TAGS_PRECHAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_HEADER6"), rt.make_int(wxSTC_TXT2TAGS_HEADER6)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_HEADER5"), rt.make_int(wxSTC_TXT2TAGS_HEADER5)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_HEADER4"), rt.make_int(wxSTC_TXT2TAGS_HEADER4)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_HEADER3"), rt.make_int(wxSTC_TXT2TAGS_HEADER3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_HEADER2"), rt.make_int(wxSTC_TXT2TAGS_HEADER2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_HEADER1"), rt.make_int(wxSTC_TXT2TAGS_HEADER1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_EM2"), rt.make_int(wxSTC_TXT2TAGS_EM2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_EM1"), rt.make_int(wxSTC_TXT2TAGS_EM1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_STRONG2"), rt.make_int(wxSTC_TXT2TAGS_STRONG2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_STRONG1"), rt.make_int(wxSTC_TXT2TAGS_STRONG1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_LINE_BEGIN"), rt.make_int(wxSTC_TXT2TAGS_LINE_BEGIN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TXT2TAGS_DEFAULT"), rt.make_int(wxSTC_TXT2TAGS_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_CODEBK"), rt.make_int(wxSTC_MARKDOWN_CODEBK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_CODE2"), rt.make_int(wxSTC_MARKDOWN_CODE2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_CODE"), rt.make_int(wxSTC_MARKDOWN_CODE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_LINK"), rt.make_int(wxSTC_MARKDOWN_LINK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_HRULE"), rt.make_int(wxSTC_MARKDOWN_HRULE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_STRIKEOUT"), rt.make_int(wxSTC_MARKDOWN_STRIKEOUT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_BLOCKQUOTE"), rt.make_int(wxSTC_MARKDOWN_BLOCKQUOTE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_OLIST_ITEM"), rt.make_int(wxSTC_MARKDOWN_OLIST_ITEM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_ULIST_ITEM"), rt.make_int(wxSTC_MARKDOWN_ULIST_ITEM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_PRECHAR"), rt.make_int(wxSTC_MARKDOWN_PRECHAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_HEADER6"), rt.make_int(wxSTC_MARKDOWN_HEADER6)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_HEADER5"), rt.make_int(wxSTC_MARKDOWN_HEADER5)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_HEADER4"), rt.make_int(wxSTC_MARKDOWN_HEADER4)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_HEADER3"), rt.make_int(wxSTC_MARKDOWN_HEADER3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_HEADER2"), rt.make_int(wxSTC_MARKDOWN_HEADER2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_HEADER1"), rt.make_int(wxSTC_MARKDOWN_HEADER1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_EM2"), rt.make_int(wxSTC_MARKDOWN_EM2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_EM1"), rt.make_int(wxSTC_MARKDOWN_EM1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_STRONG2"), rt.make_int(wxSTC_MARKDOWN_STRONG2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_STRONG1"), rt.make_int(wxSTC_MARKDOWN_STRONG1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_LINE_BEGIN"), rt.make_int(wxSTC_MARKDOWN_LINE_BEGIN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKDOWN_DEFAULT"), rt.make_int(wxSTC_MARKDOWN_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SML_COMMENT3"), rt.make_int(wxSTC_SML_COMMENT3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SML_COMMENT2"), rt.make_int(wxSTC_SML_COMMENT2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SML_COMMENT1"), rt.make_int(wxSTC_SML_COMMENT1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SML_COMMENT"), rt.make_int(wxSTC_SML_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SML_STRING"), rt.make_int(wxSTC_SML_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SML_CHAR"), rt.make_int(wxSTC_SML_CHAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SML_NUMBER"), rt.make_int(wxSTC_SML_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SML_OPERATOR"), rt.make_int(wxSTC_SML_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SML_LINENUM"), rt.make_int(wxSTC_SML_LINENUM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SML_KEYWORD3"), rt.make_int(wxSTC_SML_KEYWORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SML_KEYWORD2"), rt.make_int(wxSTC_SML_KEYWORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SML_KEYWORD"), rt.make_int(wxSTC_SML_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SML_TAGNAME"), rt.make_int(wxSTC_SML_TAGNAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SML_IDENTIFIER"), rt.make_int(wxSTC_SML_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SML_DEFAULT"), rt.make_int(wxSTC_SML_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_FUNCTION"), rt.make_int(wxSTC_POWERPRO_FUNCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_ALTQUOTE"), rt.make_int(wxSTC_POWERPRO_ALTQUOTE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_VERBATIM"), rt.make_int(wxSTC_POWERPRO_VERBATIM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_STRINGEOL"), rt.make_int(wxSTC_POWERPRO_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_IDENTIFIER"), rt.make_int(wxSTC_POWERPRO_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_OPERATOR"), rt.make_int(wxSTC_POWERPRO_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_LINECONTINUE"), rt.make_int(wxSTC_POWERPRO_LINECONTINUE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_SINGLEQUOTEDSTRING"), rt.make_int(wxSTC_POWERPRO_SINGLEQUOTEDSTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_DOUBLEQUOTEDSTRING"), rt.make_int(wxSTC_POWERPRO_DOUBLEQUOTEDSTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_WORD4"), rt.make_int(wxSTC_POWERPRO_WORD4)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_WORD3"), rt.make_int(wxSTC_POWERPRO_WORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_WORD2"), rt.make_int(wxSTC_POWERPRO_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_WORD"), rt.make_int(wxSTC_POWERPRO_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_NUMBER"), rt.make_int(wxSTC_POWERPRO_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_COMMENTLINE"), rt.make_int(wxSTC_POWERPRO_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_COMMENTBLOCK"), rt.make_int(wxSTC_POWERPRO_COMMENTBLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERPRO_DEFAULT"), rt.make_int(wxSTC_POWERPRO_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SORCUS_CONSTANT"), rt.make_int(wxSTC_SORCUS_CONSTANT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SORCUS_NUMBER"), rt.make_int(wxSTC_SORCUS_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SORCUS_OPERATOR"), rt.make_int(wxSTC_SORCUS_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SORCUS_IDENTIFIER"), rt.make_int(wxSTC_SORCUS_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SORCUS_STRINGEOL"), rt.make_int(wxSTC_SORCUS_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SORCUS_STRING"), rt.make_int(wxSTC_SORCUS_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SORCUS_COMMENTLINE"), rt.make_int(wxSTC_SORCUS_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SORCUS_PARAMETER"), rt.make_int(wxSTC_SORCUS_PARAMETER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SORCUS_COMMAND"), rt.make_int(wxSTC_SORCUS_COMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SORCUS_DEFAULT"), rt.make_int(wxSTC_SORCUS_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PAS_ASM"), rt.make_int(wxSTC_PAS_ASM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PAS_OPERATOR"), rt.make_int(wxSTC_PAS_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PAS_CHARACTER"), rt.make_int(wxSTC_PAS_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PAS_STRINGEOL"), rt.make_int(wxSTC_PAS_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PAS_STRING"), rt.make_int(wxSTC_PAS_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PAS_WORD"), rt.make_int(wxSTC_PAS_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PAS_HEXNUMBER"), rt.make_int(wxSTC_PAS_HEXNUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PAS_NUMBER"), rt.make_int(wxSTC_PAS_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PAS_PREPROCESSOR2"), rt.make_int(wxSTC_PAS_PREPROCESSOR2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PAS_PREPROCESSOR"), rt.make_int(wxSTC_PAS_PREPROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PAS_COMMENTLINE"), rt.make_int(wxSTC_PAS_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PAS_COMMENT2"), rt.make_int(wxSTC_PAS_COMMENT2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PAS_COMMENT"), rt.make_int(wxSTC_PAS_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PAS_IDENTIFIER"), rt.make_int(wxSTC_PAS_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PAS_DEFAULT"), rt.make_int(wxSTC_PAS_DEFAULT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_ERROR"), rt.make_int(wxSTC_PO_ERROR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_ERROR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGCTXT_TEXT_EOL"), rt.make_int(wxSTC_PO_MSGCTXT_TEXT_EOL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGCTXT_TEXT_EOL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGSTR_TEXT_EOL"), rt.make_int(wxSTC_PO_MSGSTR_TEXT_EOL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGSTR_TEXT_EOL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGID_TEXT_EOL"), rt.make_int(wxSTC_PO_MSGID_TEXT_EOL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGID_TEXT_EOL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_FLAGS"), rt.make_int(wxSTC_PO_FLAGS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_FLAGS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_REFERENCE"), rt.make_int(wxSTC_PO_REFERENCE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_REFERENCE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_PROGRAMMER_COMMENT"), rt.make_int(wxSTC_PO_PROGRAMMER_COMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_PROGRAMMER_COMMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_FUZZY"), rt.make_int(wxSTC_PO_FUZZY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_FUZZY"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGCTXT_TEXT"), rt.make_int(wxSTC_PO_MSGCTXT_TEXT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGCTXT_TEXT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGCTXT"), rt.make_int(wxSTC_PO_MSGCTXT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGCTXT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGSTR_TEXT"), rt.make_int(wxSTC_PO_MSGSTR_TEXT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGSTR_TEXT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGSTR"), rt.make_int(wxSTC_PO_MSGSTR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGSTR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGID_TEXT"), rt.make_int(wxSTC_PO_MSGID_TEXT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGID_TEXT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGID"), rt.make_int(wxSTC_PO_MSGID)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_MSGID"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_COMMENT"), rt.make_int(wxSTC_PO_COMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_COMMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_DEFAULT"), rt.make_int(wxSTC_PO_DEFAULT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PO_DEFAULT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_PLACEHOLDER"), rt.make_int(wxSTC_MYSQL_PLACEHOLDER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_PLACEHOLDER"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_HIDDENCOMMAND"), rt.make_int(wxSTC_MYSQL_HIDDENCOMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_USER3"), rt.make_int(wxSTC_MYSQL_USER3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_USER2"), rt.make_int(wxSTC_MYSQL_USER2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_USER1"), rt.make_int(wxSTC_MYSQL_USER1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_QUOTEDIDENTIFIER"), rt.make_int(wxSTC_MYSQL_QUOTEDIDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_IDENTIFIER"), rt.make_int(wxSTC_MYSQL_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_FUNCTION"), rt.make_int(wxSTC_MYSQL_FUNCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_OPERATOR"), rt.make_int(wxSTC_MYSQL_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_DQSTRING"), rt.make_int(wxSTC_MYSQL_DQSTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_SQSTRING"), rt.make_int(wxSTC_MYSQL_SQSTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_STRING"), rt.make_int(wxSTC_MYSQL_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_PROCEDUREKEYWORD"), rt.make_int(wxSTC_MYSQL_PROCEDUREKEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_DATABASEOBJECT"), rt.make_int(wxSTC_MYSQL_DATABASEOBJECT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_KEYWORD"), rt.make_int(wxSTC_MYSQL_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_MAJORKEYWORD"), rt.make_int(wxSTC_MYSQL_MAJORKEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_NUMBER"), rt.make_int(wxSTC_MYSQL_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_KNOWNSYSTEMVARIABLE"), rt.make_int(wxSTC_MYSQL_KNOWNSYSTEMVARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_SYSTEMVARIABLE"), rt.make_int(wxSTC_MYSQL_SYSTEMVARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_VARIABLE"), rt.make_int(wxSTC_MYSQL_VARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_COMMENTLINE"), rt.make_int(wxSTC_MYSQL_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_COMMENT"), rt.make_int(wxSTC_MYSQL_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MYSQL_DEFAULT"), rt.make_int(wxSTC_MYSQL_DEFAULT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_COMMENTDOCKEYWORD"), rt.make_int(wxSTC_POWERSHELL_COMMENTDOCKEYWORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_COMMENTDOCKEYWORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_HERE_CHARACTER"), rt.make_int(wxSTC_POWERSHELL_HERE_CHARACTER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_HERE_CHARACTER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_HERE_STRING"), rt.make_int(wxSTC_POWERSHELL_HERE_STRING)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_HERE_STRING"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_COMMENTSTREAM"), rt.make_int(wxSTC_POWERSHELL_COMMENTSTREAM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_USER1"), rt.make_int(wxSTC_POWERSHELL_USER1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_FUNCTION"), rt.make_int(wxSTC_POWERSHELL_FUNCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_ALIAS"), rt.make_int(wxSTC_POWERSHELL_ALIAS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_CMDLET"), rt.make_int(wxSTC_POWERSHELL_CMDLET)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_KEYWORD"), rt.make_int(wxSTC_POWERSHELL_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_IDENTIFIER"), rt.make_int(wxSTC_POWERSHELL_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_OPERATOR"), rt.make_int(wxSTC_POWERSHELL_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_VARIABLE"), rt.make_int(wxSTC_POWERSHELL_VARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_NUMBER"), rt.make_int(wxSTC_POWERSHELL_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_CHARACTER"), rt.make_int(wxSTC_POWERSHELL_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_STRING"), rt.make_int(wxSTC_POWERSHELL_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_COMMENT"), rt.make_int(wxSTC_POWERSHELL_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POWERSHELL_DEFAULT"), rt.make_int(wxSTC_POWERSHELL_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_SYMBOL"), rt.make_int(wxSTC_MAGIK_SYMBOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_PRAGMA"), rt.make_int(wxSTC_MAGIK_PRAGMA)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_KEYWORD"), rt.make_int(wxSTC_MAGIK_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_UNKNOWN_KEYWORD"), rt.make_int(wxSTC_MAGIK_UNKNOWN_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_SQBRACKET_BLOCK"), rt.make_int(wxSTC_MAGIK_SQBRACKET_BLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_BRACE_BLOCK"), rt.make_int(wxSTC_MAGIK_BRACE_BLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_BRACKET_BLOCK"), rt.make_int(wxSTC_MAGIK_BRACKET_BLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_CONTAINER"), rt.make_int(wxSTC_MAGIK_CONTAINER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_FLOW"), rt.make_int(wxSTC_MAGIK_FLOW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_OPERATOR"), rt.make_int(wxSTC_MAGIK_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_IDENTIFIER"), rt.make_int(wxSTC_MAGIK_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_NUMBER"), rt.make_int(wxSTC_MAGIK_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_CHARACTER"), rt.make_int(wxSTC_MAGIK_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_STRING"), rt.make_int(wxSTC_MAGIK_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_HYPER_COMMENT"), rt.make_int(wxSTC_MAGIK_HYPER_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_COMMENT"), rt.make_int(wxSTC_MAGIK_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAGIK_DEFAULT"), rt.make_int(wxSTC_MAGIK_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_R_INFIXEOL"), rt.make_int(wxSTC_R_INFIXEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_R_INFIX"), rt.make_int(wxSTC_R_INFIX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_R_IDENTIFIER"), rt.make_int(wxSTC_R_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_R_OPERATOR"), rt.make_int(wxSTC_R_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_R_STRING2"), rt.make_int(wxSTC_R_STRING2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_R_STRING"), rt.make_int(wxSTC_R_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_R_NUMBER"), rt.make_int(wxSTC_R_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_R_OTHERKWORD"), rt.make_int(wxSTC_R_OTHERKWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_R_BASEKWORD"), rt.make_int(wxSTC_R_BASEKWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_R_KWORD"), rt.make_int(wxSTC_R_KWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_R_COMMENT"), rt.make_int(wxSTC_R_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_R_DEFAULT"), rt.make_int(wxSTC_R_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASY_WORD2"), rt.make_int(wxSTC_ASY_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASY_COMMENTLINEDOC"), rt.make_int(wxSTC_ASY_COMMENTLINEDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASY_STRINGEOL"), rt.make_int(wxSTC_ASY_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASY_IDENTIFIER"), rt.make_int(wxSTC_ASY_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASY_OPERATOR"), rt.make_int(wxSTC_ASY_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASY_CHARACTER"), rt.make_int(wxSTC_ASY_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASY_STRING"), rt.make_int(wxSTC_ASY_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASY_WORD"), rt.make_int(wxSTC_ASY_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASY_NUMBER"), rt.make_int(wxSTC_ASY_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASY_COMMENTLINE"), rt.make_int(wxSTC_ASY_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASY_COMMENT"), rt.make_int(wxSTC_ASY_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASY_DEFAULT"), rt.make_int(wxSTC_ASY_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABAQUS_FUNCTION"), rt.make_int(wxSTC_ABAQUS_FUNCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABAQUS_ARGUMENT"), rt.make_int(wxSTC_ABAQUS_ARGUMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABAQUS_STARCOMMAND"), rt.make_int(wxSTC_ABAQUS_STARCOMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABAQUS_SLASHCOMMAND"), rt.make_int(wxSTC_ABAQUS_SLASHCOMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABAQUS_COMMAND"), rt.make_int(wxSTC_ABAQUS_COMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABAQUS_PROCESSOR"), rt.make_int(wxSTC_ABAQUS_PROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABAQUS_WORD"), rt.make_int(wxSTC_ABAQUS_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABAQUS_OPERATOR"), rt.make_int(wxSTC_ABAQUS_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABAQUS_STRING"), rt.make_int(wxSTC_ABAQUS_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABAQUS_NUMBER"), rt.make_int(wxSTC_ABAQUS_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABAQUS_COMMENTBLOCK"), rt.make_int(wxSTC_ABAQUS_COMMENTBLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABAQUS_COMMENT"), rt.make_int(wxSTC_ABAQUS_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABAQUS_DEFAULT"), rt.make_int(wxSTC_ABAQUS_DEFAULT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_LINECOMMENT"), rt.make_int(wxSTC_ABL_LINECOMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_LINECOMMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_TASKMARKER"), rt.make_int(wxSTC_ABL_TASKMARKER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_TASKMARKER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_COMMENT"), rt.make_int(wxSTC_ABL_COMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_COMMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_END"), rt.make_int(wxSTC_ABL_END)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_END"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_BLOCK"), rt.make_int(wxSTC_ABL_BLOCK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_BLOCK"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_IDENTIFIER"), rt.make_int(wxSTC_ABL_IDENTIFIER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_IDENTIFIER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_OPERATOR"), rt.make_int(wxSTC_ABL_OPERATOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_OPERATOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_PREPROCESSOR"), rt.make_int(wxSTC_ABL_PREPROCESSOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_PREPROCESSOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_CHARACTER"), rt.make_int(wxSTC_ABL_CHARACTER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_CHARACTER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_STRING"), rt.make_int(wxSTC_ABL_STRING)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_STRING"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_WORD"), rt.make_int(wxSTC_ABL_WORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_WORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_NUMBER"), rt.make_int(wxSTC_ABL_NUMBER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_NUMBER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_DEFAULT"), rt.make_int(wxSTC_ABL_DEFAULT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ABL_DEFAULT"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PLM_KEYWORD"), rt.make_int(wxSTC_PLM_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PLM_CONTROL"), rt.make_int(wxSTC_PLM_CONTROL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PLM_OPERATOR"), rt.make_int(wxSTC_PLM_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PLM_IDENTIFIER"), rt.make_int(wxSTC_PLM_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PLM_NUMBER"), rt.make_int(wxSTC_PLM_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PLM_STRING"), rt.make_int(wxSTC_PLM_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PLM_COMMENT"), rt.make_int(wxSTC_PLM_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PLM_DEFAULT"), rt.make_int(wxSTC_PLM_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GAP_STRINGEOL"), rt.make_int(wxSTC_GAP_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GAP_NUMBER"), rt.make_int(wxSTC_GAP_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GAP_COMMENT"), rt.make_int(wxSTC_GAP_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GAP_OPERATOR"), rt.make_int(wxSTC_GAP_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GAP_CHAR"), rt.make_int(wxSTC_GAP_CHAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GAP_STRING"), rt.make_int(wxSTC_GAP_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GAP_KEYWORD4"), rt.make_int(wxSTC_GAP_KEYWORD4)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GAP_KEYWORD3"), rt.make_int(wxSTC_GAP_KEYWORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GAP_KEYWORD2"), rt.make_int(wxSTC_GAP_KEYWORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GAP_KEYWORD"), rt.make_int(wxSTC_GAP_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GAP_IDENTIFIER"), rt.make_int(wxSTC_GAP_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GAP_DEFAULT"), rt.make_int(wxSTC_GAP_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMAKE_NUMBER"), rt.make_int(wxSTC_CMAKE_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMAKE_STRINGVAR"), rt.make_int(wxSTC_CMAKE_STRINGVAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMAKE_MACRODEF"), rt.make_int(wxSTC_CMAKE_MACRODEF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMAKE_IFDEFINEDEF"), rt.make_int(wxSTC_CMAKE_IFDEFINEDEF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMAKE_FOREACHDEF"), rt.make_int(wxSTC_CMAKE_FOREACHDEF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMAKE_WHILEDEF"), rt.make_int(wxSTC_CMAKE_WHILEDEF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMAKE_USERDEFINED"), rt.make_int(wxSTC_CMAKE_USERDEFINED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMAKE_VARIABLE"), rt.make_int(wxSTC_CMAKE_VARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMAKE_PARAMETERS"), rt.make_int(wxSTC_CMAKE_PARAMETERS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMAKE_COMMANDS"), rt.make_int(wxSTC_CMAKE_COMMANDS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMAKE_STRINGRQ"), rt.make_int(wxSTC_CMAKE_STRINGRQ)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMAKE_STRINGLQ"), rt.make_int(wxSTC_CMAKE_STRINGLQ)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMAKE_STRINGDQ"), rt.make_int(wxSTC_CMAKE_STRINGDQ)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMAKE_COMMENT"), rt.make_int(wxSTC_CMAKE_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CMAKE_DEFAULT"), rt.make_int(wxSTC_CMAKE_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SPICE_COMMENTLINE"), rt.make_int(wxSTC_SPICE_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SPICE_VALUE"), rt.make_int(wxSTC_SPICE_VALUE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SPICE_DELIMITER"), rt.make_int(wxSTC_SPICE_DELIMITER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SPICE_NUMBER"), rt.make_int(wxSTC_SPICE_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SPICE_KEYWORD3"), rt.make_int(wxSTC_SPICE_KEYWORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SPICE_KEYWORD2"), rt.make_int(wxSTC_SPICE_KEYWORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SPICE_KEYWORD"), rt.make_int(wxSTC_SPICE_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SPICE_IDENTIFIER"), rt.make_int(wxSTC_SPICE_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SPICE_DEFAULT"), rt.make_int(wxSTC_SPICE_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OPAL_DEFAULT"), rt.make_int(wxSTC_OPAL_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OPAL_BOOL_CONST"), rt.make_int(wxSTC_OPAL_BOOL_CONST)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OPAL_PAR"), rt.make_int(wxSTC_OPAL_PAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OPAL_STRING"), rt.make_int(wxSTC_OPAL_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OPAL_SORT"), rt.make_int(wxSTC_OPAL_SORT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OPAL_KEYWORD"), rt.make_int(wxSTC_OPAL_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OPAL_INTEGER"), rt.make_int(wxSTC_OPAL_INTEGER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OPAL_COMMENT_LINE"), rt.make_int(wxSTC_OPAL_COMMENT_LINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OPAL_COMMENT_BLOCK"), rt.make_int(wxSTC_OPAL_COMMENT_BLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OPAL_SPACE"), rt.make_int(wxSTC_OPAL_SPACE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INNO_IDENTIFIER"), rt.make_int(wxSTC_INNO_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INNO_STRING_SINGLE"), rt.make_int(wxSTC_INNO_STRING_SINGLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INNO_STRING_DOUBLE"), rt.make_int(wxSTC_INNO_STRING_DOUBLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INNO_KEYWORD_USER"), rt.make_int(wxSTC_INNO_KEYWORD_USER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INNO_KEYWORD_PASCAL"), rt.make_int(wxSTC_INNO_KEYWORD_PASCAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INNO_COMMENT_PASCAL"), rt.make_int(wxSTC_INNO_COMMENT_PASCAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INNO_INLINE_EXPANSION"), rt.make_int(wxSTC_INNO_INLINE_EXPANSION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INNO_PREPROC"), rt.make_int(wxSTC_INNO_PREPROC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INNO_SECTION"), rt.make_int(wxSTC_INNO_SECTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INNO_PARAMETER"), rt.make_int(wxSTC_INNO_PARAMETER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INNO_KEYWORD"), rt.make_int(wxSTC_INNO_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INNO_COMMENT"), rt.make_int(wxSTC_INNO_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INNO_DEFAULT"), rt.make_int(wxSTC_INNO_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_STRINGEOL"), rt.make_int(wxSTC_CSOUND_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_GLOBAL_VAR"), rt.make_int(wxSTC_CSOUND_GLOBAL_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_IRATE_VAR"), rt.make_int(wxSTC_CSOUND_IRATE_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_KRATE_VAR"), rt.make_int(wxSTC_CSOUND_KRATE_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_ARATE_VAR"), rt.make_int(wxSTC_CSOUND_ARATE_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_PARAM"), rt.make_int(wxSTC_CSOUND_PARAM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_COMMENTBLOCK"), rt.make_int(wxSTC_CSOUND_COMMENTBLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_USERKEYWORD"), rt.make_int(wxSTC_CSOUND_USERKEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_HEADERSTMT"), rt.make_int(wxSTC_CSOUND_HEADERSTMT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_OPCODE"), rt.make_int(wxSTC_CSOUND_OPCODE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_IDENTIFIER"), rt.make_int(wxSTC_CSOUND_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_INSTR"), rt.make_int(wxSTC_CSOUND_INSTR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_OPERATOR"), rt.make_int(wxSTC_CSOUND_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_NUMBER"), rt.make_int(wxSTC_CSOUND_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_COMMENT"), rt.make_int(wxSTC_CSOUND_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSOUND_DEFAULT"), rt.make_int(wxSTC_CSOUND_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_STRINGEOL_C"), rt.make_int(wxSTC_FS_STRINGEOL_C)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_IDENTIFIER_C"), rt.make_int(wxSTC_FS_IDENTIFIER_C)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_OPERATOR_C"), rt.make_int(wxSTC_FS_OPERATOR_C)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_PREPROCESSOR_C"), rt.make_int(wxSTC_FS_PREPROCESSOR_C)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_STRING_C"), rt.make_int(wxSTC_FS_STRING_C)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_NUMBER_C"), rt.make_int(wxSTC_FS_NUMBER_C)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_KEYWORD2_C"), rt.make_int(wxSTC_FS_KEYWORD2_C)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_KEYWORD_C"), rt.make_int(wxSTC_FS_KEYWORD_C)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_COMMENTLINEDOC_C"), rt.make_int(wxSTC_FS_COMMENTLINEDOC_C)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_COMMENTDOC_C"), rt.make_int(wxSTC_FS_COMMENTDOC_C)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_DEFAULT_C"), rt.make_int(wxSTC_FS_DEFAULT_C)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_DISABLEDCODE"), rt.make_int(wxSTC_FS_DISABLEDCODE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_WORDOPERATOR"), rt.make_int(wxSTC_FS_WORDOPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_CONSTANT"), rt.make_int(wxSTC_FS_CONSTANT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_STRINGEOL"), rt.make_int(wxSTC_FS_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_DATE"), rt.make_int(wxSTC_FS_DATE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_IDENTIFIER"), rt.make_int(wxSTC_FS_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_OPERATOR"), rt.make_int(wxSTC_FS_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_PREPROCESSOR"), rt.make_int(wxSTC_FS_PREPROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_STRING"), rt.make_int(wxSTC_FS_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_NUMBER"), rt.make_int(wxSTC_FS_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_KEYWORD4"), rt.make_int(wxSTC_FS_KEYWORD4)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_KEYWORD3"), rt.make_int(wxSTC_FS_KEYWORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_KEYWORD2"), rt.make_int(wxSTC_FS_KEYWORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_KEYWORD"), rt.make_int(wxSTC_FS_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_COMMENTDOCKEYWORDERROR"), rt.make_int(wxSTC_FS_COMMENTDOCKEYWORDERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_COMMENTDOCKEYWORD"), rt.make_int(wxSTC_FS_COMMENTDOCKEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_COMMENTLINEDOC"), rt.make_int(wxSTC_FS_COMMENTLINEDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_COMMENTDOC"), rt.make_int(wxSTC_FS_COMMENTDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_COMMENTLINE"), rt.make_int(wxSTC_FS_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_COMMENT"), rt.make_int(wxSTC_FS_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FS_DEFAULT"), rt.make_int(wxSTC_FS_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_SPEC_SEL"), rt.make_int(wxSTC_ST_SPEC_SEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_CHARACTER"), rt.make_int(wxSTC_ST_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_ASSIGN"), rt.make_int(wxSTC_ST_ASSIGN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_KWSEND"), rt.make_int(wxSTC_ST_KWSEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_SPECIAL"), rt.make_int(wxSTC_ST_SPECIAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_RETURN"), rt.make_int(wxSTC_ST_RETURN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_GLOBAL"), rt.make_int(wxSTC_ST_GLOBAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_NIL"), rt.make_int(wxSTC_ST_NIL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_SUPER"), rt.make_int(wxSTC_ST_SUPER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_SELF"), rt.make_int(wxSTC_ST_SELF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_BOOL"), rt.make_int(wxSTC_ST_BOOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_BINARY"), rt.make_int(wxSTC_ST_BINARY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_SYMBOL"), rt.make_int(wxSTC_ST_SYMBOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_COMMENT"), rt.make_int(wxSTC_ST_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_NUMBER"), rt.make_int(wxSTC_ST_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_STRING"), rt.make_int(wxSTC_ST_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ST_DEFAULT"), rt.make_int(wxSTC_ST_DEFAULT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_QOPERATOR"), rt.make_int(wxSTC_SQL_QOPERATOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_QOPERATOR"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_QUOTEDIDENTIFIER"), rt.make_int(wxSTC_SQL_QUOTEDIDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_USER4"), rt.make_int(wxSTC_SQL_USER4)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_USER3"), rt.make_int(wxSTC_SQL_USER3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_USER2"), rt.make_int(wxSTC_SQL_USER2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_USER1"), rt.make_int(wxSTC_SQL_USER1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_COMMENTDOCKEYWORDERROR"), rt.make_int(wxSTC_SQL_COMMENTDOCKEYWORDERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_COMMENTDOCKEYWORD"), rt.make_int(wxSTC_SQL_COMMENTDOCKEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_WORD2"), rt.make_int(wxSTC_SQL_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_COMMENTLINEDOC"), rt.make_int(wxSTC_SQL_COMMENTLINEDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_SQLPLUS_COMMENT"), rt.make_int(wxSTC_SQL_SQLPLUS_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_IDENTIFIER"), rt.make_int(wxSTC_SQL_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_OPERATOR"), rt.make_int(wxSTC_SQL_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_SQLPLUS_PROMPT"), rt.make_int(wxSTC_SQL_SQLPLUS_PROMPT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_SQLPLUS"), rt.make_int(wxSTC_SQL_SQLPLUS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_CHARACTER"), rt.make_int(wxSTC_SQL_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_STRING"), rt.make_int(wxSTC_SQL_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_WORD"), rt.make_int(wxSTC_SQL_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_NUMBER"), rt.make_int(wxSTC_SQL_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_COMMENTDOC"), rt.make_int(wxSTC_SQL_COMMENTDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_COMMENTLINE"), rt.make_int(wxSTC_SQL_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_COMMENT"), rt.make_int(wxSTC_SQL_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SQL_DEFAULT"), rt.make_int(wxSTC_SQL_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_WORD8"), rt.make_int(wxSTC_REBOL_WORD8)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_WORD7"), rt.make_int(wxSTC_REBOL_WORD7)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_WORD6"), rt.make_int(wxSTC_REBOL_WORD6)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_WORD5"), rt.make_int(wxSTC_REBOL_WORD5)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_WORD4"), rt.make_int(wxSTC_REBOL_WORD4)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_WORD3"), rt.make_int(wxSTC_REBOL_WORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_WORD2"), rt.make_int(wxSTC_REBOL_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_WORD"), rt.make_int(wxSTC_REBOL_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_IDENTIFIER"), rt.make_int(wxSTC_REBOL_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_TIME"), rt.make_int(wxSTC_REBOL_TIME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_DATE"), rt.make_int(wxSTC_REBOL_DATE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_URL"), rt.make_int(wxSTC_REBOL_URL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_EMAIL"), rt.make_int(wxSTC_REBOL_EMAIL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_FILE"), rt.make_int(wxSTC_REBOL_FILE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_TAG"), rt.make_int(wxSTC_REBOL_TAG)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_ISSUE"), rt.make_int(wxSTC_REBOL_ISSUE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_MONEY"), rt.make_int(wxSTC_REBOL_MONEY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_BINARY"), rt.make_int(wxSTC_REBOL_BINARY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_TUPLE"), rt.make_int(wxSTC_REBOL_TUPLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_PAIR"), rt.make_int(wxSTC_REBOL_PAIR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_NUMBER"), rt.make_int(wxSTC_REBOL_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_BRACEDSTRING"), rt.make_int(wxSTC_REBOL_BRACEDSTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_QUOTEDSTRING"), rt.make_int(wxSTC_REBOL_QUOTEDSTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_CHARACTER"), rt.make_int(wxSTC_REBOL_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_OPERATOR"), rt.make_int(wxSTC_REBOL_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_PREFACE"), rt.make_int(wxSTC_REBOL_PREFACE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_COMMENTBLOCK"), rt.make_int(wxSTC_REBOL_COMMENTBLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_COMMENTLINE"), rt.make_int(wxSTC_REBOL_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_REBOL_DEFAULT"), rt.make_int(wxSTC_REBOL_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_BRACE"), rt.make_int(wxSTC_T3_BRACE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_USER3"), rt.make_int(wxSTC_T3_USER3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_USER2"), rt.make_int(wxSTC_T3_USER2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_USER1"), rt.make_int(wxSTC_T3_USER1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_HTML_STRING"), rt.make_int(wxSTC_T3_HTML_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_HTML_DEFAULT"), rt.make_int(wxSTC_T3_HTML_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_HTML_TAG"), rt.make_int(wxSTC_T3_HTML_TAG)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_MSG_PARAM"), rt.make_int(wxSTC_T3_MSG_PARAM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_LIB_DIRECTIVE"), rt.make_int(wxSTC_T3_LIB_DIRECTIVE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_X_STRING"), rt.make_int(wxSTC_T3_X_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_D_STRING"), rt.make_int(wxSTC_T3_D_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_S_STRING"), rt.make_int(wxSTC_T3_S_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_IDENTIFIER"), rt.make_int(wxSTC_T3_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_NUMBER"), rt.make_int(wxSTC_T3_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_KEYWORD"), rt.make_int(wxSTC_T3_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_OPERATOR"), rt.make_int(wxSTC_T3_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_LINE_COMMENT"), rt.make_int(wxSTC_T3_LINE_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_BLOCK_COMMENT"), rt.make_int(wxSTC_T3_BLOCK_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_PREPROCESSOR"), rt.make_int(wxSTC_T3_PREPROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_X_DEFAULT"), rt.make_int(wxSTC_T3_X_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_T3_DEFAULT"), rt.make_int(wxSTC_T3_DEFAULT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_LITERATE_CODEDELIM"), rt.make_int(wxSTC_HA_LITERATE_CODEDELIM)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_LITERATE_CODEDELIM"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_LITERATE_COMMENT"), rt.make_int(wxSTC_HA_LITERATE_COMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_LITERATE_COMMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_RESERVED_OPERATOR"), rt.make_int(wxSTC_HA_RESERVED_OPERATOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_RESERVED_OPERATOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_STRINGEOL"), rt.make_int(wxSTC_HA_STRINGEOL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_STRINGEOL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_PREPROCESSOR"), rt.make_int(wxSTC_HA_PREPROCESSOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_PREPROCESSOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_PRAGMA"), rt.make_int(wxSTC_HA_PRAGMA)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_PRAGMA"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_COMMENTBLOCK3"), rt.make_int(wxSTC_HA_COMMENTBLOCK3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_COMMENTBLOCK2"), rt.make_int(wxSTC_HA_COMMENTBLOCK2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_COMMENTBLOCK"), rt.make_int(wxSTC_HA_COMMENTBLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_COMMENTLINE"), rt.make_int(wxSTC_HA_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_INSTANCE"), rt.make_int(wxSTC_HA_INSTANCE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_OPERATOR"), rt.make_int(wxSTC_HA_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_IMPORT"), rt.make_int(wxSTC_HA_IMPORT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_DATA"), rt.make_int(wxSTC_HA_DATA)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_CAPITAL"), rt.make_int(wxSTC_HA_CAPITAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_MODULE"), rt.make_int(wxSTC_HA_MODULE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_CLASS"), rt.make_int(wxSTC_HA_CLASS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_CHARACTER"), rt.make_int(wxSTC_HA_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_STRING"), rt.make_int(wxSTC_HA_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_NUMBER"), rt.make_int(wxSTC_HA_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_KEYWORD"), rt.make_int(wxSTC_HA_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_IDENTIFIER"), rt.make_int(wxSTC_HA_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HA_DEFAULT"), rt.make_int(wxSTC_HA_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_COMMENT3"), rt.make_int(wxSTC_CAML_COMMENT3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_COMMENT2"), rt.make_int(wxSTC_CAML_COMMENT2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_COMMENT1"), rt.make_int(wxSTC_CAML_COMMENT1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_COMMENT"), rt.make_int(wxSTC_CAML_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_STRING"), rt.make_int(wxSTC_CAML_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_WHITE"), rt.make_int(wxSTC_CAML_WHITE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_CHAR"), rt.make_int(wxSTC_CAML_CHAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_NUMBER"), rt.make_int(wxSTC_CAML_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_OPERATOR"), rt.make_int(wxSTC_CAML_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_LINENUM"), rt.make_int(wxSTC_CAML_LINENUM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_KEYWORD3"), rt.make_int(wxSTC_CAML_KEYWORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_KEYWORD2"), rt.make_int(wxSTC_CAML_KEYWORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_KEYWORD"), rt.make_int(wxSTC_CAML_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_TAGNAME"), rt.make_int(wxSTC_CAML_TAGNAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_IDENTIFIER"), rt.make_int(wxSTC_CAML_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CAML_DEFAULT"), rt.make_int(wxSTC_CAML_DEFAULT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_BLOCK_COMMENT"), rt.make_int(wxSTC_VHDL_BLOCK_COMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_BLOCK_COMMENT"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_USERWORD"), rt.make_int(wxSTC_VHDL_USERWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_STDTYPE"), rt.make_int(wxSTC_VHDL_STDTYPE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_STDPACKAGE"), rt.make_int(wxSTC_VHDL_STDPACKAGE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_STDFUNCTION"), rt.make_int(wxSTC_VHDL_STDFUNCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_ATTRIBUTE"), rt.make_int(wxSTC_VHDL_ATTRIBUTE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_STDOPERATOR"), rt.make_int(wxSTC_VHDL_STDOPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_KEYWORD"), rt.make_int(wxSTC_VHDL_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_STRINGEOL"), rt.make_int(wxSTC_VHDL_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_IDENTIFIER"), rt.make_int(wxSTC_VHDL_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_OPERATOR"), rt.make_int(wxSTC_VHDL_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_STRING"), rt.make_int(wxSTC_VHDL_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_NUMBER"), rt.make_int(wxSTC_VHDL_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_COMMENTLINEBANG"), rt.make_int(wxSTC_VHDL_COMMENTLINEBANG)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_COMMENT"), rt.make_int(wxSTC_VHDL_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VHDL_DEFAULT"), rt.make_int(wxSTC_VHDL_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASN1_OPERATOR"), rt.make_int(wxSTC_ASN1_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASN1_TYPE"), rt.make_int(wxSTC_ASN1_TYPE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASN1_DESCRIPTOR"), rt.make_int(wxSTC_ASN1_DESCRIPTOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASN1_ATTRIBUTE"), rt.make_int(wxSTC_ASN1_ATTRIBUTE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASN1_KEYWORD"), rt.make_int(wxSTC_ASN1_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASN1_SCALAR"), rt.make_int(wxSTC_ASN1_SCALAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASN1_OID"), rt.make_int(wxSTC_ASN1_OID)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASN1_STRING"), rt.make_int(wxSTC_ASN1_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASN1_IDENTIFIER"), rt.make_int(wxSTC_ASN1_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASN1_COMMENT"), rt.make_int(wxSTC_ASN1_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASN1_DEFAULT"), rt.make_int(wxSTC_ASN1_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SH_HERE_Q"), rt.make_int(wxSTC_SH_HERE_Q)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SH_HERE_DELIM"), rt.make_int(wxSTC_SH_HERE_DELIM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SH_BACKTICKS"), rt.make_int(wxSTC_SH_BACKTICKS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SH_PARAM"), rt.make_int(wxSTC_SH_PARAM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SH_SCALAR"), rt.make_int(wxSTC_SH_SCALAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SH_IDENTIFIER"), rt.make_int(wxSTC_SH_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SH_OPERATOR"), rt.make_int(wxSTC_SH_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SH_CHARACTER"), rt.make_int(wxSTC_SH_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SH_STRING"), rt.make_int(wxSTC_SH_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SH_WORD"), rt.make_int(wxSTC_SH_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SH_NUMBER"), rt.make_int(wxSTC_SH_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SH_COMMENTLINE"), rt.make_int(wxSTC_SH_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SH_ERROR"), rt.make_int(wxSTC_SH_ERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SH_DEFAULT"), rt.make_int(wxSTC_SH_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_APDL_FUNCTION"), rt.make_int(wxSTC_APDL_FUNCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_APDL_ARGUMENT"), rt.make_int(wxSTC_APDL_ARGUMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_APDL_STARCOMMAND"), rt.make_int(wxSTC_APDL_STARCOMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_APDL_SLASHCOMMAND"), rt.make_int(wxSTC_APDL_SLASHCOMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_APDL_COMMAND"), rt.make_int(wxSTC_APDL_COMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_APDL_PROCESSOR"), rt.make_int(wxSTC_APDL_PROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_APDL_WORD"), rt.make_int(wxSTC_APDL_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_APDL_OPERATOR"), rt.make_int(wxSTC_APDL_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_APDL_STRING"), rt.make_int(wxSTC_APDL_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_APDL_NUMBER"), rt.make_int(wxSTC_APDL_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_APDL_COMMENTBLOCK"), rt.make_int(wxSTC_APDL_COMMENTBLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_APDL_COMMENT"), rt.make_int(wxSTC_APDL_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_APDL_DEFAULT"), rt.make_int(wxSTC_APDL_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_UDF"), rt.make_int(wxSTC_AU3_UDF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_COMOBJ"), rt.make_int(wxSTC_AU3_COMOBJ)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_EXPAND"), rt.make_int(wxSTC_AU3_EXPAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_SPECIAL"), rt.make_int(wxSTC_AU3_SPECIAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_PREPROCESSOR"), rt.make_int(wxSTC_AU3_PREPROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_SENT"), rt.make_int(wxSTC_AU3_SENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_VARIABLE"), rt.make_int(wxSTC_AU3_VARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_OPERATOR"), rt.make_int(wxSTC_AU3_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_STRING"), rt.make_int(wxSTC_AU3_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_MACRO"), rt.make_int(wxSTC_AU3_MACRO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_KEYWORD"), rt.make_int(wxSTC_AU3_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_FUNCTION"), rt.make_int(wxSTC_AU3_FUNCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_NUMBER"), rt.make_int(wxSTC_AU3_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_COMMENTBLOCK"), rt.make_int(wxSTC_AU3_COMMENTBLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_COMMENT"), rt.make_int(wxSTC_AU3_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AU3_DEFAULT"), rt.make_int(wxSTC_AU3_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_USER"), rt.make_int(wxSTC_SN_USER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_SIGNAL"), rt.make_int(wxSTC_SN_SIGNAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_REGEXTAG"), rt.make_int(wxSTC_SN_REGEXTAG)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_STRINGEOL"), rt.make_int(wxSTC_SN_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_IDENTIFIER"), rt.make_int(wxSTC_SN_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_OPERATOR"), rt.make_int(wxSTC_SN_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_PREPROCESSOR"), rt.make_int(wxSTC_SN_PREPROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_WORD3"), rt.make_int(wxSTC_SN_WORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_WORD2"), rt.make_int(wxSTC_SN_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_STRING"), rt.make_int(wxSTC_SN_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_WORD"), rt.make_int(wxSTC_SN_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_NUMBER"), rt.make_int(wxSTC_SN_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_COMMENTLINEBANG"), rt.make_int(wxSTC_SN_COMMENTLINEBANG)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_COMMENTLINE"), rt.make_int(wxSTC_SN_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_CODE"), rt.make_int(wxSTC_SN_CODE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SN_DEFAULT"), rt.make_int(wxSTC_SN_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GC_OPERATOR"), rt.make_int(wxSTC_GC_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GC_STRING"), rt.make_int(wxSTC_GC_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GC_COMMAND"), rt.make_int(wxSTC_GC_COMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GC_CONTROL"), rt.make_int(wxSTC_GC_CONTROL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GC_ATTRIBUTE"), rt.make_int(wxSTC_GC_ATTRIBUTE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GC_EVENT"), rt.make_int(wxSTC_GC_EVENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GC_GLOBAL"), rt.make_int(wxSTC_GC_GLOBAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GC_COMMENTBLOCK"), rt.make_int(wxSTC_GC_COMMENTBLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GC_COMMENTLINE"), rt.make_int(wxSTC_GC_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_GC_DEFAULT"), rt.make_int(wxSTC_GC_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KIX_IDENTIFIER"), rt.make_int(wxSTC_KIX_IDENTIFIER)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KIX_COMMENTSTREAM"), rt.make_int(wxSTC_KIX_COMMENTSTREAM)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KIX_COMMENTSTREAM"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KIX_OPERATOR"), rt.make_int(wxSTC_KIX_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KIX_FUNCTIONS"), rt.make_int(wxSTC_KIX_FUNCTIONS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KIX_KEYWORD"), rt.make_int(wxSTC_KIX_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KIX_MACRO"), rt.make_int(wxSTC_KIX_MACRO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KIX_VAR"), rt.make_int(wxSTC_KIX_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KIX_NUMBER"), rt.make_int(wxSTC_KIX_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KIX_STRING2"), rt.make_int(wxSTC_KIX_STRING2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KIX_STRING1"), rt.make_int(wxSTC_KIX_STRING1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KIX_COMMENT"), rt.make_int(wxSTC_KIX_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KIX_DEFAULT"), rt.make_int(wxSTC_KIX_DEFAULT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_PORT_CONNECT"), rt.make_int(wxSTC_V_PORT_CONNECT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_PORT_CONNECT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_INOUT"), rt.make_int(wxSTC_V_INOUT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_INOUT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_OUTPUT"), rt.make_int(wxSTC_V_OUTPUT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_OUTPUT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_INPUT"), rt.make_int(wxSTC_V_INPUT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_INPUT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_COMMENT_WORD"), rt.make_int(wxSTC_V_COMMENT_WORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_COMMENT_WORD"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_USER"), rt.make_int(wxSTC_V_USER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_STRINGEOL"), rt.make_int(wxSTC_V_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_IDENTIFIER"), rt.make_int(wxSTC_V_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_OPERATOR"), rt.make_int(wxSTC_V_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_PREPROCESSOR"), rt.make_int(wxSTC_V_PREPROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_WORD3"), rt.make_int(wxSTC_V_WORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_WORD2"), rt.make_int(wxSTC_V_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_STRING"), rt.make_int(wxSTC_V_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_WORD"), rt.make_int(wxSTC_V_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_NUMBER"), rt.make_int(wxSTC_V_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_COMMENTLINEBANG"), rt.make_int(wxSTC_V_COMMENTLINEBANG)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_COMMENTLINE"), rt.make_int(wxSTC_V_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_COMMENT"), rt.make_int(wxSTC_V_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_V_DEFAULT"), rt.make_int(wxSTC_V_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_COLUMN_NAME_2"), rt.make_int(wxSTC_MSSQL_COLUMN_NAME_2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_DEFAULT_PREF_DATATYPE"), rt.make_int(wxSTC_MSSQL_DEFAULT_PREF_DATATYPE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_STORED_PROCEDURE"), rt.make_int(wxSTC_MSSQL_STORED_PROCEDURE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_FUNCTION"), rt.make_int(wxSTC_MSSQL_FUNCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_GLOBAL_VARIABLE"), rt.make_int(wxSTC_MSSQL_GLOBAL_VARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_SYSTABLE"), rt.make_int(wxSTC_MSSQL_SYSTABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_DATATYPE"), rt.make_int(wxSTC_MSSQL_DATATYPE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_STATEMENT"), rt.make_int(wxSTC_MSSQL_STATEMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_COLUMN_NAME"), rt.make_int(wxSTC_MSSQL_COLUMN_NAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_VARIABLE"), rt.make_int(wxSTC_MSSQL_VARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_IDENTIFIER"), rt.make_int(wxSTC_MSSQL_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_OPERATOR"), rt.make_int(wxSTC_MSSQL_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_STRING"), rt.make_int(wxSTC_MSSQL_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_NUMBER"), rt.make_int(wxSTC_MSSQL_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_LINE_COMMENT"), rt.make_int(wxSTC_MSSQL_LINE_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_COMMENT"), rt.make_int(wxSTC_MSSQL_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MSSQL_DEFAULT"), rt.make_int(wxSTC_MSSQL_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_UNKNOWN"), rt.make_int(wxSTC_ERLANG_UNKNOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_MODULES_ATT"), rt.make_int(wxSTC_ERLANG_MODULES_ATT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_MODULES"), rt.make_int(wxSTC_ERLANG_MODULES)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_BIFS"), rt.make_int(wxSTC_ERLANG_BIFS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_NODE_NAME_QUOTED"), rt.make_int(wxSTC_ERLANG_NODE_NAME_QUOTED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_RECORD_QUOTED"), rt.make_int(wxSTC_ERLANG_RECORD_QUOTED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_MACRO_QUOTED"), rt.make_int(wxSTC_ERLANG_MACRO_QUOTED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_ATOM_QUOTED"), rt.make_int(wxSTC_ERLANG_ATOM_QUOTED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_COMMENT_DOC_MACRO"), rt.make_int(wxSTC_ERLANG_COMMENT_DOC_MACRO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_COMMENT_DOC"), rt.make_int(wxSTC_ERLANG_COMMENT_DOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_COMMENT_MODULE"), rt.make_int(wxSTC_ERLANG_COMMENT_MODULE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_COMMENT_FUNCTION"), rt.make_int(wxSTC_ERLANG_COMMENT_FUNCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_NODE_NAME"), rt.make_int(wxSTC_ERLANG_NODE_NAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_PREPROC"), rt.make_int(wxSTC_ERLANG_PREPROC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_RECORD"), rt.make_int(wxSTC_ERLANG_RECORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_MACRO"), rt.make_int(wxSTC_ERLANG_MACRO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_CHARACTER"), rt.make_int(wxSTC_ERLANG_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_FUNCTION_NAME"), rt.make_int(wxSTC_ERLANG_FUNCTION_NAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_ATOM"), rt.make_int(wxSTC_ERLANG_ATOM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_OPERATOR"), rt.make_int(wxSTC_ERLANG_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_STRING"), rt.make_int(wxSTC_ERLANG_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_KEYWORD"), rt.make_int(wxSTC_ERLANG_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_NUMBER"), rt.make_int(wxSTC_ERLANG_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_VARIABLE"), rt.make_int(wxSTC_ERLANG_VARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_COMMENT"), rt.make_int(wxSTC_ERLANG_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERLANG_DEFAULT"), rt.make_int(wxSTC_ERLANG_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_METAPOST_EXTRA"), rt.make_int(wxSTC_METAPOST_EXTRA)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_METAPOST_TEXT"), rt.make_int(wxSTC_METAPOST_TEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_METAPOST_COMMAND"), rt.make_int(wxSTC_METAPOST_COMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_METAPOST_SYMBOL"), rt.make_int(wxSTC_METAPOST_SYMBOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_METAPOST_GROUP"), rt.make_int(wxSTC_METAPOST_GROUP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_METAPOST_SPECIAL"), rt.make_int(wxSTC_METAPOST_SPECIAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_METAPOST_DEFAULT"), rt.make_int(wxSTC_METAPOST_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TEX_TEXT"), rt.make_int(wxSTC_TEX_TEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TEX_COMMAND"), rt.make_int(wxSTC_TEX_COMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TEX_SYMBOL"), rt.make_int(wxSTC_TEX_SYMBOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TEX_GROUP"), rt.make_int(wxSTC_TEX_GROUP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TEX_SPECIAL"), rt.make_int(wxSTC_TEX_SPECIAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TEX_DEFAULT"), rt.make_int(wxSTC_TEX_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_YAML_OPERATOR"), rt.make_int(wxSTC_YAML_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_YAML_ERROR"), rt.make_int(wxSTC_YAML_ERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_YAML_TEXT"), rt.make_int(wxSTC_YAML_TEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_YAML_DOCUMENT"), rt.make_int(wxSTC_YAML_DOCUMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_YAML_REFERENCE"), rt.make_int(wxSTC_YAML_REFERENCE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_YAML_NUMBER"), rt.make_int(wxSTC_YAML_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_YAML_KEYWORD"), rt.make_int(wxSTC_YAML_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_YAML_IDENTIFIER"), rt.make_int(wxSTC_YAML_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_YAML_COMMENT"), rt.make_int(wxSTC_YAML_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_YAML_DEFAULT"), rt.make_int(wxSTC_YAML_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOT_ABORT"), rt.make_int(wxSTC_LOT_ABORT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOT_FAIL"), rt.make_int(wxSTC_LOT_FAIL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOT_PASS"), rt.make_int(wxSTC_LOT_PASS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOT_SET"), rt.make_int(wxSTC_LOT_SET)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOT_BREAK"), rt.make_int(wxSTC_LOT_BREAK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOT_HEADER"), rt.make_int(wxSTC_LOT_HEADER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOT_DEFAULT"), rt.make_int(wxSTC_LOT_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_DEPRECATED"), rt.make_int(wxSTC_CLW_DEPRECATED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_ERROR"), rt.make_int(wxSTC_CLW_ERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_STANDARD_EQUATE"), rt.make_int(wxSTC_CLW_STANDARD_EQUATE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_ATTRIBUTE"), rt.make_int(wxSTC_CLW_ATTRIBUTE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_STRUCTURE_DATA_TYPE"), rt.make_int(wxSTC_CLW_STRUCTURE_DATA_TYPE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_BUILTIN_PROCEDURES_FUNCTION"), rt.make_int(wxSTC_CLW_BUILTIN_PROCEDURES_FUNCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_RUNTIME_EXPRESSIONS"), rt.make_int(wxSTC_CLW_RUNTIME_EXPRESSIONS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_COMPILER_DIRECTIVE"), rt.make_int(wxSTC_CLW_COMPILER_DIRECTIVE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_KEYWORD"), rt.make_int(wxSTC_CLW_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_PICTURE_STRING"), rt.make_int(wxSTC_CLW_PICTURE_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_REAL_CONSTANT"), rt.make_int(wxSTC_CLW_REAL_CONSTANT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_INTEGER_CONSTANT"), rt.make_int(wxSTC_CLW_INTEGER_CONSTANT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_USER_IDENTIFIER"), rt.make_int(wxSTC_CLW_USER_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_STRING"), rt.make_int(wxSTC_CLW_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_COMMENT"), rt.make_int(wxSTC_CLW_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_LABEL"), rt.make_int(wxSTC_CLW_LABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CLW_DEFAULT"), rt.make_int(wxSTC_CLW_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_INCLUDE"), rt.make_int(wxSTC_MMIXAL_INCLUDE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_SYMBOL"), rt.make_int(wxSTC_MMIXAL_SYMBOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_OPERATOR"), rt.make_int(wxSTC_MMIXAL_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_HEX"), rt.make_int(wxSTC_MMIXAL_HEX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_REGISTER"), rt.make_int(wxSTC_MMIXAL_REGISTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_STRING"), rt.make_int(wxSTC_MMIXAL_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_CHAR"), rt.make_int(wxSTC_MMIXAL_CHAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_REF"), rt.make_int(wxSTC_MMIXAL_REF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_NUMBER"), rt.make_int(wxSTC_MMIXAL_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_OPERANDS"), rt.make_int(wxSTC_MMIXAL_OPERANDS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_OPCODE_POST"), rt.make_int(wxSTC_MMIXAL_OPCODE_POST)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_OPCODE_UNKNOWN"), rt.make_int(wxSTC_MMIXAL_OPCODE_UNKNOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_OPCODE_VALID"), rt.make_int(wxSTC_MMIXAL_OPCODE_VALID)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_OPCODE_PRE"), rt.make_int(wxSTC_MMIXAL_OPCODE_PRE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_OPCODE"), rt.make_int(wxSTC_MMIXAL_OPCODE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_LABEL"), rt.make_int(wxSTC_MMIXAL_LABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_COMMENT"), rt.make_int(wxSTC_MMIXAL_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MMIXAL_LEADWS"), rt.make_int(wxSTC_MMIXAL_LEADWS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_COMMENTBOX"), rt.make_int(wxSTC_NSIS_COMMENTBOX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_FUNCTIONDEF"), rt.make_int(wxSTC_NSIS_FUNCTIONDEF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_PAGEEX"), rt.make_int(wxSTC_NSIS_PAGEEX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_SECTIONGROUP"), rt.make_int(wxSTC_NSIS_SECTIONGROUP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_NUMBER"), rt.make_int(wxSTC_NSIS_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_STRINGVAR"), rt.make_int(wxSTC_NSIS_STRINGVAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_MACRODEF"), rt.make_int(wxSTC_NSIS_MACRODEF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_IFDEFINEDEF"), rt.make_int(wxSTC_NSIS_IFDEFINEDEF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_SUBSECTIONDEF"), rt.make_int(wxSTC_NSIS_SUBSECTIONDEF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_SECTIONDEF"), rt.make_int(wxSTC_NSIS_SECTIONDEF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_USERDEFINED"), rt.make_int(wxSTC_NSIS_USERDEFINED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_LABEL"), rt.make_int(wxSTC_NSIS_LABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_VARIABLE"), rt.make_int(wxSTC_NSIS_VARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_FUNCTION"), rt.make_int(wxSTC_NSIS_FUNCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_STRINGRQ"), rt.make_int(wxSTC_NSIS_STRINGRQ)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_STRINGLQ"), rt.make_int(wxSTC_NSIS_STRINGLQ)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_STRINGDQ"), rt.make_int(wxSTC_NSIS_STRINGDQ)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_COMMENT"), rt.make_int(wxSTC_NSIS_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NSIS_DEFAULT"), rt.make_int(wxSTC_NSIS_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_BADSTRINGCHAR"), rt.make_int(wxSTC_PS_BADSTRINGCHAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_BASE85STRING"), rt.make_int(wxSTC_PS_BASE85STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_HEXSTRING"), rt.make_int(wxSTC_PS_HEXSTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_TEXT"), rt.make_int(wxSTC_PS_TEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_PAREN_PROC"), rt.make_int(wxSTC_PS_PAREN_PROC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_PAREN_DICT"), rt.make_int(wxSTC_PS_PAREN_DICT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_PAREN_ARRAY"), rt.make_int(wxSTC_PS_PAREN_ARRAY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_IMMEVAL"), rt.make_int(wxSTC_PS_IMMEVAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_LITERAL"), rt.make_int(wxSTC_PS_LITERAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_KEYWORD"), rt.make_int(wxSTC_PS_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_NAME"), rt.make_int(wxSTC_PS_NAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_NUMBER"), rt.make_int(wxSTC_PS_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_DSC_VALUE"), rt.make_int(wxSTC_PS_DSC_VALUE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_DSC_COMMENT"), rt.make_int(wxSTC_PS_DSC_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_COMMENT"), rt.make_int(wxSTC_PS_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PS_DEFAULT"), rt.make_int(wxSTC_PS_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ESCRIPT_WORD3"), rt.make_int(wxSTC_ESCRIPT_WORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ESCRIPT_WORD2"), rt.make_int(wxSTC_ESCRIPT_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ESCRIPT_BRACE"), rt.make_int(wxSTC_ESCRIPT_BRACE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ESCRIPT_IDENTIFIER"), rt.make_int(wxSTC_ESCRIPT_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ESCRIPT_OPERATOR"), rt.make_int(wxSTC_ESCRIPT_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ESCRIPT_STRING"), rt.make_int(wxSTC_ESCRIPT_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ESCRIPT_WORD"), rt.make_int(wxSTC_ESCRIPT_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ESCRIPT_NUMBER"), rt.make_int(wxSTC_ESCRIPT_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ESCRIPT_COMMENTDOC"), rt.make_int(wxSTC_ESCRIPT_COMMENTDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ESCRIPT_COMMENTLINE"), rt.make_int(wxSTC_ESCRIPT_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ESCRIPT_COMMENT"), rt.make_int(wxSTC_ESCRIPT_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ESCRIPT_DEFAULT"), rt.make_int(wxSTC_ESCRIPT_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOUT_STRINGEOL"), rt.make_int(wxSTC_LOUT_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOUT_IDENTIFIER"), rt.make_int(wxSTC_LOUT_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOUT_OPERATOR"), rt.make_int(wxSTC_LOUT_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOUT_STRING"), rt.make_int(wxSTC_LOUT_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOUT_WORD4"), rt.make_int(wxSTC_LOUT_WORD4)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOUT_WORD3"), rt.make_int(wxSTC_LOUT_WORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOUT_WORD2"), rt.make_int(wxSTC_LOUT_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOUT_WORD"), rt.make_int(wxSTC_LOUT_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOUT_NUMBER"), rt.make_int(wxSTC_LOUT_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOUT_COMMENT"), rt.make_int(wxSTC_LOUT_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LOUT_DEFAULT"), rt.make_int(wxSTC_LOUT_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_WORD8"), rt.make_int(wxSTC_POV_WORD8)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_WORD7"), rt.make_int(wxSTC_POV_WORD7)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_WORD6"), rt.make_int(wxSTC_POV_WORD6)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_WORD5"), rt.make_int(wxSTC_POV_WORD5)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_WORD4"), rt.make_int(wxSTC_POV_WORD4)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_WORD3"), rt.make_int(wxSTC_POV_WORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_WORD2"), rt.make_int(wxSTC_POV_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_BADDIRECTIVE"), rt.make_int(wxSTC_POV_BADDIRECTIVE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_DIRECTIVE"), rt.make_int(wxSTC_POV_DIRECTIVE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_STRINGEOL"), rt.make_int(wxSTC_POV_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_STRING"), rt.make_int(wxSTC_POV_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_IDENTIFIER"), rt.make_int(wxSTC_POV_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_OPERATOR"), rt.make_int(wxSTC_POV_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_NUMBER"), rt.make_int(wxSTC_POV_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_COMMENTLINE"), rt.make_int(wxSTC_POV_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_COMMENT"), rt.make_int(wxSTC_POV_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POV_DEFAULT"), rt.make_int(wxSTC_POV_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_VARIABLE"), rt.make_int(wxSTC_CSS_VARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_MEDIA"), rt.make_int(wxSTC_CSS_MEDIA)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_EXTENDED_PSEUDOELEMENT"), rt.make_int(wxSTC_CSS_EXTENDED_PSEUDOELEMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_EXTENDED_PSEUDOCLASS"), rt.make_int(wxSTC_CSS_EXTENDED_PSEUDOCLASS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_EXTENDED_IDENTIFIER"), rt.make_int(wxSTC_CSS_EXTENDED_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_PSEUDOELEMENT"), rt.make_int(wxSTC_CSS_PSEUDOELEMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_IDENTIFIER3"), rt.make_int(wxSTC_CSS_IDENTIFIER3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_ATTRIBUTE"), rt.make_int(wxSTC_CSS_ATTRIBUTE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_IDENTIFIER2"), rt.make_int(wxSTC_CSS_IDENTIFIER2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_SINGLESTRING"), rt.make_int(wxSTC_CSS_SINGLESTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_DOUBLESTRING"), rt.make_int(wxSTC_CSS_DOUBLESTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_DIRECTIVE"), rt.make_int(wxSTC_CSS_DIRECTIVE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_IMPORTANT"), rt.make_int(wxSTC_CSS_IMPORTANT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_ID"), rt.make_int(wxSTC_CSS_ID)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_COMMENT"), rt.make_int(wxSTC_CSS_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_VALUE"), rt.make_int(wxSTC_CSS_VALUE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_UNKNOWN_IDENTIFIER"), rt.make_int(wxSTC_CSS_UNKNOWN_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_IDENTIFIER"), rt.make_int(wxSTC_CSS_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_OPERATOR"), rt.make_int(wxSTC_CSS_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_UNKNOWN_PSEUDOCLASS"), rt.make_int(wxSTC_CSS_UNKNOWN_PSEUDOCLASS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_PSEUDOCLASS"), rt.make_int(wxSTC_CSS_PSEUDOCLASS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_CLASS"), rt.make_int(wxSTC_CSS_CLASS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_TAG"), rt.make_int(wxSTC_CSS_TAG)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CSS_DEFAULT"), rt.make_int(wxSTC_CSS_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_F_CONTINUATION"), rt.make_int(wxSTC_F_CONTINUATION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_F_LABEL"), rt.make_int(wxSTC_F_LABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_F_OPERATOR2"), rt.make_int(wxSTC_F_OPERATOR2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_F_PREPROCESSOR"), rt.make_int(wxSTC_F_PREPROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_F_WORD3"), rt.make_int(wxSTC_F_WORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_F_WORD2"), rt.make_int(wxSTC_F_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_F_WORD"), rt.make_int(wxSTC_F_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_F_IDENTIFIER"), rt.make_int(wxSTC_F_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_F_OPERATOR"), rt.make_int(wxSTC_F_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_F_STRINGEOL"), rt.make_int(wxSTC_F_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_F_STRING2"), rt.make_int(wxSTC_F_STRING2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_F_STRING1"), rt.make_int(wxSTC_F_STRING1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_F_NUMBER"), rt.make_int(wxSTC_F_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_F_COMMENT"), rt.make_int(wxSTC_F_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_F_DEFAULT"), rt.make_int(wxSTC_F_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_COMMENTDIRECTIVE"), rt.make_int(wxSTC_ASM_COMMENTDIRECTIVE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_EXTINSTRUCTION"), rt.make_int(wxSTC_ASM_EXTINSTRUCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_STRINGEOL"), rt.make_int(wxSTC_ASM_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_CHARACTER"), rt.make_int(wxSTC_ASM_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_COMMENTBLOCK"), rt.make_int(wxSTC_ASM_COMMENTBLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_DIRECTIVEOPERAND"), rt.make_int(wxSTC_ASM_DIRECTIVEOPERAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_DIRECTIVE"), rt.make_int(wxSTC_ASM_DIRECTIVE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_REGISTER"), rt.make_int(wxSTC_ASM_REGISTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_MATHINSTRUCTION"), rt.make_int(wxSTC_ASM_MATHINSTRUCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_CPUINSTRUCTION"), rt.make_int(wxSTC_ASM_CPUINSTRUCTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_IDENTIFIER"), rt.make_int(wxSTC_ASM_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_OPERATOR"), rt.make_int(wxSTC_ASM_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_STRING"), rt.make_int(wxSTC_ASM_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_NUMBER"), rt.make_int(wxSTC_ASM_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_COMMENT"), rt.make_int(wxSTC_ASM_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ASM_DEFAULT"), rt.make_int(wxSTC_ASM_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_PREPROCESSOR"), rt.make_int(wxSTC_SCRIPTOL_PREPROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_CLASSNAME"), rt.make_int(wxSTC_SCRIPTOL_CLASSNAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_TRIPLE"), rt.make_int(wxSTC_SCRIPTOL_TRIPLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_IDENTIFIER"), rt.make_int(wxSTC_SCRIPTOL_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_OPERATOR"), rt.make_int(wxSTC_SCRIPTOL_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_KEYWORD"), rt.make_int(wxSTC_SCRIPTOL_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_STRINGEOL"), rt.make_int(wxSTC_SCRIPTOL_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_CHARACTER"), rt.make_int(wxSTC_SCRIPTOL_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_STRING"), rt.make_int(wxSTC_SCRIPTOL_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_NUMBER"), rt.make_int(wxSTC_SCRIPTOL_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_COMMENTBLOCK"), rt.make_int(wxSTC_SCRIPTOL_COMMENTBLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_CSTYLE"), rt.make_int(wxSTC_SCRIPTOL_CSTYLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_PERSISTENT"), rt.make_int(wxSTC_SCRIPTOL_PERSISTENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_COMMENTLINE"), rt.make_int(wxSTC_SCRIPTOL_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_WHITE"), rt.make_int(wxSTC_SCRIPTOL_WHITE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SCRIPTOL_DEFAULT"), rt.make_int(wxSTC_SCRIPTOL_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MATLAB_DOUBLEQUOTESTRING"), rt.make_int(wxSTC_MATLAB_DOUBLEQUOTESTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MATLAB_IDENTIFIER"), rt.make_int(wxSTC_MATLAB_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MATLAB_OPERATOR"), rt.make_int(wxSTC_MATLAB_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MATLAB_STRING"), rt.make_int(wxSTC_MATLAB_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MATLAB_KEYWORD"), rt.make_int(wxSTC_MATLAB_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MATLAB_NUMBER"), rt.make_int(wxSTC_MATLAB_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MATLAB_COMMAND"), rt.make_int(wxSTC_MATLAB_COMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MATLAB_COMMENT"), rt.make_int(wxSTC_MATLAB_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MATLAB_DEFAULT"), rt.make_int(wxSTC_MATLAB_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FORTH_LOCALE"), rt.make_int(wxSTC_FORTH_LOCALE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FORTH_STRING"), rt.make_int(wxSTC_FORTH_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FORTH_NUMBER"), rt.make_int(wxSTC_FORTH_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FORTH_PREWORD2"), rt.make_int(wxSTC_FORTH_PREWORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FORTH_PREWORD1"), rt.make_int(wxSTC_FORTH_PREWORD1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FORTH_DEFWORD"), rt.make_int(wxSTC_FORTH_DEFWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FORTH_KEYWORD"), rt.make_int(wxSTC_FORTH_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FORTH_CONTROL"), rt.make_int(wxSTC_FORTH_CONTROL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FORTH_IDENTIFIER"), rt.make_int(wxSTC_FORTH_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FORTH_COMMENT_ML"), rt.make_int(wxSTC_FORTH_COMMENT_ML)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FORTH_COMMENT"), rt.make_int(wxSTC_FORTH_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FORTH_DEFAULT"), rt.make_int(wxSTC_FORTH_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NNCRONTAB_IDENTIFIER"), rt.make_int(wxSTC_NNCRONTAB_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NNCRONTAB_ENVIRONMENT"), rt.make_int(wxSTC_NNCRONTAB_ENVIRONMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NNCRONTAB_STRING"), rt.make_int(wxSTC_NNCRONTAB_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NNCRONTAB_NUMBER"), rt.make_int(wxSTC_NNCRONTAB_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NNCRONTAB_ASTERISK"), rt.make_int(wxSTC_NNCRONTAB_ASTERISK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NNCRONTAB_MODIFIER"), rt.make_int(wxSTC_NNCRONTAB_MODIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NNCRONTAB_KEYWORD"), rt.make_int(wxSTC_NNCRONTAB_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NNCRONTAB_SECTION"), rt.make_int(wxSTC_NNCRONTAB_SECTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NNCRONTAB_TASK"), rt.make_int(wxSTC_NNCRONTAB_TASK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NNCRONTAB_COMMENT"), rt.make_int(wxSTC_NNCRONTAB_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_NNCRONTAB_DEFAULT"), rt.make_int(wxSTC_NNCRONTAB_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EIFFEL_STRINGEOL"), rt.make_int(wxSTC_EIFFEL_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EIFFEL_IDENTIFIER"), rt.make_int(wxSTC_EIFFEL_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EIFFEL_OPERATOR"), rt.make_int(wxSTC_EIFFEL_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EIFFEL_CHARACTER"), rt.make_int(wxSTC_EIFFEL_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EIFFEL_STRING"), rt.make_int(wxSTC_EIFFEL_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EIFFEL_WORD"), rt.make_int(wxSTC_EIFFEL_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EIFFEL_NUMBER"), rt.make_int(wxSTC_EIFFEL_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EIFFEL_COMMENTLINE"), rt.make_int(wxSTC_EIFFEL_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EIFFEL_DEFAULT"), rt.make_int(wxSTC_EIFFEL_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LISP_MULTI_COMMENT"), rt.make_int(wxSTC_LISP_MULTI_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LISP_SPECIAL"), rt.make_int(wxSTC_LISP_SPECIAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LISP_OPERATOR"), rt.make_int(wxSTC_LISP_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LISP_IDENTIFIER"), rt.make_int(wxSTC_LISP_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LISP_STRINGEOL"), rt.make_int(wxSTC_LISP_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LISP_STRING"), rt.make_int(wxSTC_LISP_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LISP_SYMBOL"), rt.make_int(wxSTC_LISP_SYMBOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LISP_KEYWORD_KW"), rt.make_int(wxSTC_LISP_KEYWORD_KW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LISP_KEYWORD"), rt.make_int(wxSTC_LISP_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LISP_NUMBER"), rt.make_int(wxSTC_LISP_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LISP_COMMENT"), rt.make_int(wxSTC_LISP_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LISP_DEFAULT"), rt.make_int(wxSTC_LISP_DEFAULT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_DEFINEDEF"), rt.make_int(wxSTC_BAAN_DEFINEDEF)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_DEFINEDEF"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_OBJECTDEF"), rt.make_int(wxSTC_BAAN_OBJECTDEF)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_OBJECTDEF"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_FUNCDEF"), rt.make_int(wxSTC_BAAN_FUNCDEF)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_FUNCDEF"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_DOMDEF"), rt.make_int(wxSTC_BAAN_DOMDEF)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_DOMDEF"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_FUNCTION"), rt.make_int(wxSTC_BAAN_FUNCTION)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_FUNCTION"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_TABLESQL"), rt.make_int(wxSTC_BAAN_TABLESQL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_TABLESQL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_TABLEDEF"), rt.make_int(wxSTC_BAAN_TABLEDEF)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_TABLEDEF"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD9"), rt.make_int(wxSTC_BAAN_WORD9)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD9"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD8"), rt.make_int(wxSTC_BAAN_WORD8)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD8"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD7"), rt.make_int(wxSTC_BAAN_WORD7)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD7"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD6"), rt.make_int(wxSTC_BAAN_WORD6)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD6"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD5"), rt.make_int(wxSTC_BAAN_WORD5)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD5"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD4"), rt.make_int(wxSTC_BAAN_WORD4)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD4"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD3"), rt.make_int(wxSTC_BAAN_WORD3)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD3"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD2"), rt.make_int(wxSTC_BAAN_WORD2)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD2"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_STRINGEOL"), rt.make_int(wxSTC_BAAN_STRINGEOL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_STRINGEOL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_IDENTIFIER"), rt.make_int(wxSTC_BAAN_IDENTIFIER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_IDENTIFIER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_OPERATOR"), rt.make_int(wxSTC_BAAN_OPERATOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_OPERATOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_PREPROCESSOR"), rt.make_int(wxSTC_BAAN_PREPROCESSOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_PREPROCESSOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_STRING"), rt.make_int(wxSTC_BAAN_STRING)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_STRING"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD"), rt.make_int(wxSTC_BAAN_WORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_WORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_NUMBER"), rt.make_int(wxSTC_BAAN_NUMBER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_NUMBER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_COMMENTDOC"), rt.make_int(wxSTC_BAAN_COMMENTDOC)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_COMMENTDOC"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_COMMENT"), rt.make_int(wxSTC_BAAN_COMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_COMMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_DEFAULT"), rt.make_int(wxSTC_BAAN_DEFAULT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAAN_DEFAULT"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ADA_ILLEGAL"), rt.make_int(wxSTC_ADA_ILLEGAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ADA_COMMENTLINE"), rt.make_int(wxSTC_ADA_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ADA_LABEL"), rt.make_int(wxSTC_ADA_LABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ADA_STRINGEOL"), rt.make_int(wxSTC_ADA_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ADA_STRING"), rt.make_int(wxSTC_ADA_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ADA_CHARACTEREOL"), rt.make_int(wxSTC_ADA_CHARACTEREOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ADA_CHARACTER"), rt.make_int(wxSTC_ADA_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ADA_DELIMITER"), rt.make_int(wxSTC_ADA_DELIMITER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ADA_NUMBER"), rt.make_int(wxSTC_ADA_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ADA_IDENTIFIER"), rt.make_int(wxSTC_ADA_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ADA_WORD"), rt.make_int(wxSTC_ADA_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ADA_DEFAULT"), rt.make_int(wxSTC_ADA_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVE_WORD6"), rt.make_int(wxSTC_AVE_WORD6)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVE_WORD5"), rt.make_int(wxSTC_AVE_WORD5)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVE_WORD4"), rt.make_int(wxSTC_AVE_WORD4)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVE_WORD3"), rt.make_int(wxSTC_AVE_WORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVE_WORD2"), rt.make_int(wxSTC_AVE_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVE_WORD1"), rt.make_int(wxSTC_AVE_WORD1)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVE_OPERATOR"), rt.make_int(wxSTC_AVE_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVE_IDENTIFIER"), rt.make_int(wxSTC_AVE_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVE_STRINGEOL"), rt.make_int(wxSTC_AVE_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVE_ENUM"), rt.make_int(wxSTC_AVE_ENUM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVE_STRING"), rt.make_int(wxSTC_AVE_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVE_WORD"), rt.make_int(wxSTC_AVE_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVE_NUMBER"), rt.make_int(wxSTC_AVE_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVE_COMMENT"), rt.make_int(wxSTC_AVE_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AVE_DEFAULT"), rt.make_int(wxSTC_AVE_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CONF_DIRECTIVE"), rt.make_int(wxSTC_CONF_DIRECTIVE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CONF_IP"), rt.make_int(wxSTC_CONF_IP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CONF_OPERATOR"), rt.make_int(wxSTC_CONF_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CONF_STRING"), rt.make_int(wxSTC_CONF_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CONF_PARAMETER"), rt.make_int(wxSTC_CONF_PARAMETER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CONF_EXTENSION"), rt.make_int(wxSTC_CONF_EXTENSION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CONF_IDENTIFIER"), rt.make_int(wxSTC_CONF_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CONF_NUMBER"), rt.make_int(wxSTC_CONF_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CONF_COMMENT"), rt.make_int(wxSTC_CONF_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CONF_DEFAULT"), rt.make_int(wxSTC_CONF_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DIFF_CHANGED"), rt.make_int(wxSTC_DIFF_CHANGED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DIFF_ADDED"), rt.make_int(wxSTC_DIFF_ADDED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DIFF_DELETED"), rt.make_int(wxSTC_DIFF_DELETED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DIFF_POSITION"), rt.make_int(wxSTC_DIFF_POSITION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DIFF_HEADER"), rt.make_int(wxSTC_DIFF_HEADER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DIFF_COMMAND"), rt.make_int(wxSTC_DIFF_COMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DIFF_COMMENT"), rt.make_int(wxSTC_DIFF_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_DIFF_DEFAULT"), rt.make_int(wxSTC_DIFF_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAKE_IDEOL"), rt.make_int(wxSTC_MAKE_IDEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAKE_TARGET"), rt.make_int(wxSTC_MAKE_TARGET)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAKE_OPERATOR"), rt.make_int(wxSTC_MAKE_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAKE_IDENTIFIER"), rt.make_int(wxSTC_MAKE_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAKE_PREPROCESSOR"), rt.make_int(wxSTC_MAKE_PREPROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAKE_COMMENT"), rt.make_int(wxSTC_MAKE_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAKE_DEFAULT"), rt.make_int(wxSTC_MAKE_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCMD_CLABEL"), rt.make_int(wxSTC_TCMD_CLABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCMD_EXPANSION"), rt.make_int(wxSTC_TCMD_EXPANSION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCMD_ENVIRONMENT"), rt.make_int(wxSTC_TCMD_ENVIRONMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCMD_OPERATOR"), rt.make_int(wxSTC_TCMD_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCMD_IDENTIFIER"), rt.make_int(wxSTC_TCMD_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCMD_COMMAND"), rt.make_int(wxSTC_TCMD_COMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCMD_HIDE"), rt.make_int(wxSTC_TCMD_HIDE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCMD_LABEL"), rt.make_int(wxSTC_TCMD_LABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCMD_WORD"), rt.make_int(wxSTC_TCMD_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCMD_COMMENT"), rt.make_int(wxSTC_TCMD_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCMD_DEFAULT"), rt.make_int(wxSTC_TCMD_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAT_OPERATOR"), rt.make_int(wxSTC_BAT_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAT_IDENTIFIER"), rt.make_int(wxSTC_BAT_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAT_COMMAND"), rt.make_int(wxSTC_BAT_COMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAT_HIDE"), rt.make_int(wxSTC_BAT_HIDE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAT_LABEL"), rt.make_int(wxSTC_BAT_LABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAT_WORD"), rt.make_int(wxSTC_BAT_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAT_COMMENT"), rt.make_int(wxSTC_BAT_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_BAT_DEFAULT"), rt.make_int(wxSTC_BAT_DEFAULT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_WHITE"), rt.make_int(wxSTC_ERR_ES_WHITE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_WHITE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BRIGHT_CYAN"), rt.make_int(wxSTC_ERR_ES_BRIGHT_CYAN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BRIGHT_CYAN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BRIGHT_MAGENTA"), rt.make_int(wxSTC_ERR_ES_BRIGHT_MAGENTA)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BRIGHT_MAGENTA"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BRIGHT_BLUE"), rt.make_int(wxSTC_ERR_ES_BRIGHT_BLUE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BRIGHT_BLUE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_YELLOW"), rt.make_int(wxSTC_ERR_ES_YELLOW)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_YELLOW"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BRIGHT_GREEN"), rt.make_int(wxSTC_ERR_ES_BRIGHT_GREEN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BRIGHT_GREEN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BRIGHT_RED"), rt.make_int(wxSTC_ERR_ES_BRIGHT_RED)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BRIGHT_RED"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_DARK_GRAY"), rt.make_int(wxSTC_ERR_ES_DARK_GRAY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_DARK_GRAY"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_GRAY"), rt.make_int(wxSTC_ERR_ES_GRAY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_GRAY"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_CYAN"), rt.make_int(wxSTC_ERR_ES_CYAN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_CYAN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_MAGENTA"), rt.make_int(wxSTC_ERR_ES_MAGENTA)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_MAGENTA"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BLUE"), rt.make_int(wxSTC_ERR_ES_BLUE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BLUE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BROWN"), rt.make_int(wxSTC_ERR_ES_BROWN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BROWN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_GREEN"), rt.make_int(wxSTC_ERR_ES_GREEN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_GREEN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_RED"), rt.make_int(wxSTC_ERR_ES_RED)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_RED"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BLACK"), rt.make_int(wxSTC_ERR_ES_BLACK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ES_BLACK"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ESCSEQ_UNKNOWN"), rt.make_int(wxSTC_ERR_ESCSEQ_UNKNOWN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ESCSEQ_UNKNOWN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ESCSEQ"), rt.make_int(wxSTC_ERR_ESCSEQ)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ESCSEQ"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_GCC_INCLUDED_FROM"), rt.make_int(wxSTC_ERR_GCC_INCLUDED_FROM)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_GCC_INCLUDED_FROM"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_VALUE"), rt.make_int(wxSTC_ERR_VALUE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_JAVA_STACK"), rt.make_int(wxSTC_ERR_JAVA_STACK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_TIDY"), rt.make_int(wxSTC_ERR_TIDY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ABSF"), rt.make_int(wxSTC_ERR_ABSF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_IFORT"), rt.make_int(wxSTC_ERR_IFORT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_IFC"), rt.make_int(wxSTC_ERR_IFC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_ELF"), rt.make_int(wxSTC_ERR_ELF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_PHP"), rt.make_int(wxSTC_ERR_PHP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_DIFF_MESSAGE"), rt.make_int(wxSTC_ERR_DIFF_MESSAGE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_DIFF_DELETION"), rt.make_int(wxSTC_ERR_DIFF_DELETION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_DIFF_ADDITION"), rt.make_int(wxSTC_ERR_DIFF_ADDITION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_DIFF_CHANGED"), rt.make_int(wxSTC_ERR_DIFF_CHANGED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_CTAG"), rt.make_int(wxSTC_ERR_CTAG)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_LUA"), rt.make_int(wxSTC_ERR_LUA)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_NET"), rt.make_int(wxSTC_ERR_NET)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_PERL"), rt.make_int(wxSTC_ERR_PERL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_BORLAND"), rt.make_int(wxSTC_ERR_BORLAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_CMD"), rt.make_int(wxSTC_ERR_CMD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_MS"), rt.make_int(wxSTC_ERR_MS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_GCC"), rt.make_int(wxSTC_ERR_GCC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_PYTHON"), rt.make_int(wxSTC_ERR_PYTHON)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ERR_DEFAULT"), rt.make_int(wxSTC_ERR_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_LABEL"), rt.make_int(wxSTC_LUA_LABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_WORD8"), rt.make_int(wxSTC_LUA_WORD8)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_WORD7"), rt.make_int(wxSTC_LUA_WORD7)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_WORD6"), rt.make_int(wxSTC_LUA_WORD6)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_WORD5"), rt.make_int(wxSTC_LUA_WORD5)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_WORD4"), rt.make_int(wxSTC_LUA_WORD4)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_WORD3"), rt.make_int(wxSTC_LUA_WORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_WORD2"), rt.make_int(wxSTC_LUA_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_STRINGEOL"), rt.make_int(wxSTC_LUA_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_IDENTIFIER"), rt.make_int(wxSTC_LUA_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_OPERATOR"), rt.make_int(wxSTC_LUA_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_PREPROCESSOR"), rt.make_int(wxSTC_LUA_PREPROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_LITERALSTRING"), rt.make_int(wxSTC_LUA_LITERALSTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_CHARACTER"), rt.make_int(wxSTC_LUA_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_STRING"), rt.make_int(wxSTC_LUA_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_WORD"), rt.make_int(wxSTC_LUA_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_NUMBER"), rt.make_int(wxSTC_LUA_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_COMMENTDOC"), rt.make_int(wxSTC_LUA_COMMENTDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_COMMENTLINE"), rt.make_int(wxSTC_LUA_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_COMMENT"), rt.make_int(wxSTC_LUA_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LUA_DEFAULT"), rt.make_int(wxSTC_LUA_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_L_ERROR"), rt.make_int(wxSTC_L_ERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_L_CMDOPT"), rt.make_int(wxSTC_L_CMDOPT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_L_SPECIAL"), rt.make_int(wxSTC_L_SPECIAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_L_SHORTCMD"), rt.make_int(wxSTC_L_SHORTCMD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_L_VERBATIM"), rt.make_int(wxSTC_L_VERBATIM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_L_COMMENT2"), rt.make_int(wxSTC_L_COMMENT2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_L_MATH2"), rt.make_int(wxSTC_L_MATH2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_L_TAG2"), rt.make_int(wxSTC_L_TAG2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_L_COMMENT"), rt.make_int(wxSTC_L_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_L_MATH"), rt.make_int(wxSTC_L_MATH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_L_TAG"), rt.make_int(wxSTC_L_TAG)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_L_COMMAND"), rt.make_int(wxSTC_L_COMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_L_DEFAULT"), rt.make_int(wxSTC_L_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PROPS_KEY"), rt.make_int(wxSTC_PROPS_KEY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PROPS_DEFVAL"), rt.make_int(wxSTC_PROPS_DEFVAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PROPS_ASSIGNMENT"), rt.make_int(wxSTC_PROPS_ASSIGNMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PROPS_SECTION"), rt.make_int(wxSTC_PROPS_SECTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PROPS_COMMENT"), rt.make_int(wxSTC_PROPS_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PROPS_DEFAULT"), rt.make_int(wxSTC_PROPS_DEFAULT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_DOCKEYWORD"), rt.make_int(wxSTC_B_DOCKEYWORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_DOCKEYWORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_DOCBLOCK"), rt.make_int(wxSTC_B_DOCBLOCK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_DOCBLOCK"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_DOCLINE"), rt.make_int(wxSTC_B_DOCLINE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_DOCLINE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_COMMENTBLOCK"), rt.make_int(wxSTC_B_COMMENTBLOCK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_COMMENTBLOCK"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_BINNUMBER"), rt.make_int(wxSTC_B_BINNUMBER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_BINNUMBER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_HEXNUMBER"), rt.make_int(wxSTC_B_HEXNUMBER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_HEXNUMBER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_ERROR"), rt.make_int(wxSTC_B_ERROR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_ERROR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_LABEL"), rt.make_int(wxSTC_B_LABEL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_LABEL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_ASM"), rt.make_int(wxSTC_B_ASM)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_ASM"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_CONSTANT"), rt.make_int(wxSTC_B_CONSTANT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_CONSTANT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_KEYWORD4"), rt.make_int(wxSTC_B_KEYWORD4)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_KEYWORD4"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_KEYWORD3"), rt.make_int(wxSTC_B_KEYWORD3)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_KEYWORD3"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_KEYWORD2"), rt.make_int(wxSTC_B_KEYWORD2)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_KEYWORD2"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_STRINGEOL"), rt.make_int(wxSTC_B_STRINGEOL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_STRINGEOL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_DATE"), rt.make_int(wxSTC_B_DATE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_DATE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_IDENTIFIER"), rt.make_int(wxSTC_B_IDENTIFIER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_IDENTIFIER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_OPERATOR"), rt.make_int(wxSTC_B_OPERATOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_OPERATOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_PREPROCESSOR"), rt.make_int(wxSTC_B_PREPROCESSOR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_PREPROCESSOR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_STRING"), rt.make_int(wxSTC_B_STRING)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_STRING"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_KEYWORD"), rt.make_int(wxSTC_B_KEYWORD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_KEYWORD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_NUMBER"), rt.make_int(wxSTC_B_NUMBER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_NUMBER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_COMMENT"), rt.make_int(wxSTC_B_COMMENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_COMMENT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_DEFAULT"), rt.make_int(wxSTC_B_DEFAULT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_B_DEFAULT"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_UPPER_BOUND"), rt.make_int(wxSTC_RB_UPPER_BOUND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_STDERR"), rt.make_int(wxSTC_RB_STDERR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_STDOUT"), rt.make_int(wxSTC_RB_STDOUT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_STDIN"), rt.make_int(wxSTC_RB_STDIN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_WORD_DEMOTED"), rt.make_int(wxSTC_RB_WORD_DEMOTED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_STRING_QW"), rt.make_int(wxSTC_RB_STRING_QW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_STRING_QR"), rt.make_int(wxSTC_RB_STRING_QR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_STRING_QX"), rt.make_int(wxSTC_RB_STRING_QX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_STRING_QQ"), rt.make_int(wxSTC_RB_STRING_QQ)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_STRING_Q"), rt.make_int(wxSTC_RB_STRING_Q)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_HERE_QX"), rt.make_int(wxSTC_RB_HERE_QX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_HERE_QQ"), rt.make_int(wxSTC_RB_HERE_QQ)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_HERE_Q"), rt.make_int(wxSTC_RB_HERE_Q)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_HERE_DELIM"), rt.make_int(wxSTC_RB_HERE_DELIM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_DATASECTION"), rt.make_int(wxSTC_RB_DATASECTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_BACKTICKS"), rt.make_int(wxSTC_RB_BACKTICKS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_CLASS_VAR"), rt.make_int(wxSTC_RB_CLASS_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_INSTANCE_VAR"), rt.make_int(wxSTC_RB_INSTANCE_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_MODULE_NAME"), rt.make_int(wxSTC_RB_MODULE_NAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_SYMBOL"), rt.make_int(wxSTC_RB_SYMBOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_GLOBAL"), rt.make_int(wxSTC_RB_GLOBAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_REGEX"), rt.make_int(wxSTC_RB_REGEX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_IDENTIFIER"), rt.make_int(wxSTC_RB_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_OPERATOR"), rt.make_int(wxSTC_RB_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_DEFNAME"), rt.make_int(wxSTC_RB_DEFNAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_CLASSNAME"), rt.make_int(wxSTC_RB_CLASSNAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_CHARACTER"), rt.make_int(wxSTC_RB_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_STRING"), rt.make_int(wxSTC_RB_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_WORD"), rt.make_int(wxSTC_RB_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_NUMBER"), rt.make_int(wxSTC_RB_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_POD"), rt.make_int(wxSTC_RB_POD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_COMMENTLINE"), rt.make_int(wxSTC_RB_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_ERROR"), rt.make_int(wxSTC_RB_ERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_RB_DEFAULT"), rt.make_int(wxSTC_RB_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_STRING_QR_VAR"), rt.make_int(wxSTC_PL_STRING_QR_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_STRING_QX_VAR"), rt.make_int(wxSTC_PL_STRING_QX_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_STRING_QQ_VAR"), rt.make_int(wxSTC_PL_STRING_QQ_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_HERE_QX_VAR"), rt.make_int(wxSTC_PL_HERE_QX_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_HERE_QQ_VAR"), rt.make_int(wxSTC_PL_HERE_QQ_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_BACKTICKS_VAR"), rt.make_int(wxSTC_PL_BACKTICKS_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_REGSUBST_VAR"), rt.make_int(wxSTC_PL_REGSUBST_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_REGEX_VAR"), rt.make_int(wxSTC_PL_REGEX_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_XLAT"), rt.make_int(wxSTC_PL_XLAT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_STRING_VAR"), rt.make_int(wxSTC_PL_STRING_VAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_FORMAT"), rt.make_int(wxSTC_PL_FORMAT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_FORMAT_IDENT"), rt.make_int(wxSTC_PL_FORMAT_IDENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_SUB_PROTOTYPE"), rt.make_int(wxSTC_PL_SUB_PROTOTYPE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_POD_VERB"), rt.make_int(wxSTC_PL_POD_VERB)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_STRING_QW"), rt.make_int(wxSTC_PL_STRING_QW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_STRING_QR"), rt.make_int(wxSTC_PL_STRING_QR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_STRING_QX"), rt.make_int(wxSTC_PL_STRING_QX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_STRING_QQ"), rt.make_int(wxSTC_PL_STRING_QQ)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_STRING_Q"), rt.make_int(wxSTC_PL_STRING_Q)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_HERE_QX"), rt.make_int(wxSTC_PL_HERE_QX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_HERE_QQ"), rt.make_int(wxSTC_PL_HERE_QQ)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_HERE_Q"), rt.make_int(wxSTC_PL_HERE_Q)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_HERE_DELIM"), rt.make_int(wxSTC_PL_HERE_DELIM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_DATASECTION"), rt.make_int(wxSTC_PL_DATASECTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_BACKTICKS"), rt.make_int(wxSTC_PL_BACKTICKS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_LONGQUOTE"), rt.make_int(wxSTC_PL_LONGQUOTE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_REGSUBST"), rt.make_int(wxSTC_PL_REGSUBST)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_REGEX"), rt.make_int(wxSTC_PL_REGEX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_VARIABLE_INDEXER"), rt.make_int(wxSTC_PL_VARIABLE_INDEXER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_SYMBOLTABLE"), rt.make_int(wxSTC_PL_SYMBOLTABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_HASH"), rt.make_int(wxSTC_PL_HASH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_ARRAY"), rt.make_int(wxSTC_PL_ARRAY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_SCALAR"), rt.make_int(wxSTC_PL_SCALAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_IDENTIFIER"), rt.make_int(wxSTC_PL_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_OPERATOR"), rt.make_int(wxSTC_PL_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_PREPROCESSOR"), rt.make_int(wxSTC_PL_PREPROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_PUNCTUATION"), rt.make_int(wxSTC_PL_PUNCTUATION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_CHARACTER"), rt.make_int(wxSTC_PL_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_STRING"), rt.make_int(wxSTC_PL_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_WORD"), rt.make_int(wxSTC_PL_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_NUMBER"), rt.make_int(wxSTC_PL_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_POD"), rt.make_int(wxSTC_PL_POD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_COMMENTLINE"), rt.make_int(wxSTC_PL_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_ERROR"), rt.make_int(wxSTC_PL_ERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PL_DEFAULT"), rt.make_int(wxSTC_PL_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPHP_OPERATOR"), rt.make_int(wxSTC_HPHP_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPHP_HSTRING_VARIABLE"), rt.make_int(wxSTC_HPHP_HSTRING_VARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPHP_COMMENTLINE"), rt.make_int(wxSTC_HPHP_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPHP_COMMENT"), rt.make_int(wxSTC_HPHP_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPHP_VARIABLE"), rt.make_int(wxSTC_HPHP_VARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPHP_NUMBER"), rt.make_int(wxSTC_HPHP_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPHP_WORD"), rt.make_int(wxSTC_HPHP_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPHP_SIMPLESTRING"), rt.make_int(wxSTC_HPHP_SIMPLESTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPHP_HSTRING"), rt.make_int(wxSTC_HPHP_HSTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPHP_DEFAULT"), rt.make_int(wxSTC_HPHP_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPA_IDENTIFIER"), rt.make_int(wxSTC_HPA_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPA_OPERATOR"), rt.make_int(wxSTC_HPA_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPA_DEFNAME"), rt.make_int(wxSTC_HPA_DEFNAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPA_CLASSNAME"), rt.make_int(wxSTC_HPA_CLASSNAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPA_TRIPLEDOUBLE"), rt.make_int(wxSTC_HPA_TRIPLEDOUBLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPA_TRIPLE"), rt.make_int(wxSTC_HPA_TRIPLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPA_WORD"), rt.make_int(wxSTC_HPA_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPA_CHARACTER"), rt.make_int(wxSTC_HPA_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPA_STRING"), rt.make_int(wxSTC_HPA_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPA_NUMBER"), rt.make_int(wxSTC_HPA_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPA_COMMENTLINE"), rt.make_int(wxSTC_HPA_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPA_DEFAULT"), rt.make_int(wxSTC_HPA_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPA_START"), rt.make_int(wxSTC_HPA_START)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HPHP_COMPLEX_VARIABLE"), rt.make_int(wxSTC_HPHP_COMPLEX_VARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HP_IDENTIFIER"), rt.make_int(wxSTC_HP_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HP_OPERATOR"), rt.make_int(wxSTC_HP_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HP_DEFNAME"), rt.make_int(wxSTC_HP_DEFNAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HP_CLASSNAME"), rt.make_int(wxSTC_HP_CLASSNAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HP_TRIPLEDOUBLE"), rt.make_int(wxSTC_HP_TRIPLEDOUBLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HP_TRIPLE"), rt.make_int(wxSTC_HP_TRIPLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HP_WORD"), rt.make_int(wxSTC_HP_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HP_CHARACTER"), rt.make_int(wxSTC_HP_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HP_STRING"), rt.make_int(wxSTC_HP_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HP_NUMBER"), rt.make_int(wxSTC_HP_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HP_COMMENTLINE"), rt.make_int(wxSTC_HP_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HP_DEFAULT"), rt.make_int(wxSTC_HP_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HP_START"), rt.make_int(wxSTC_HP_START)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HBA_STRINGEOL"), rt.make_int(wxSTC_HBA_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HBA_IDENTIFIER"), rt.make_int(wxSTC_HBA_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HBA_STRING"), rt.make_int(wxSTC_HBA_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HBA_WORD"), rt.make_int(wxSTC_HBA_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HBA_NUMBER"), rt.make_int(wxSTC_HBA_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HBA_COMMENTLINE"), rt.make_int(wxSTC_HBA_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HBA_DEFAULT"), rt.make_int(wxSTC_HBA_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HBA_START"), rt.make_int(wxSTC_HBA_START)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HB_STRINGEOL"), rt.make_int(wxSTC_HB_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HB_IDENTIFIER"), rt.make_int(wxSTC_HB_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HB_STRING"), rt.make_int(wxSTC_HB_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HB_WORD"), rt.make_int(wxSTC_HB_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HB_NUMBER"), rt.make_int(wxSTC_HB_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HB_COMMENTLINE"), rt.make_int(wxSTC_HB_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HB_DEFAULT"), rt.make_int(wxSTC_HB_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HB_START"), rt.make_int(wxSTC_HB_START)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJA_REGEX"), rt.make_int(wxSTC_HJA_REGEX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJA_STRINGEOL"), rt.make_int(wxSTC_HJA_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJA_SYMBOLS"), rt.make_int(wxSTC_HJA_SYMBOLS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJA_SINGLESTRING"), rt.make_int(wxSTC_HJA_SINGLESTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJA_DOUBLESTRING"), rt.make_int(wxSTC_HJA_DOUBLESTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJA_KEYWORD"), rt.make_int(wxSTC_HJA_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJA_WORD"), rt.make_int(wxSTC_HJA_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJA_NUMBER"), rt.make_int(wxSTC_HJA_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJA_COMMENTDOC"), rt.make_int(wxSTC_HJA_COMMENTDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJA_COMMENTLINE"), rt.make_int(wxSTC_HJA_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJA_COMMENT"), rt.make_int(wxSTC_HJA_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJA_DEFAULT"), rt.make_int(wxSTC_HJA_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJA_START"), rt.make_int(wxSTC_HJA_START)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJ_REGEX"), rt.make_int(wxSTC_HJ_REGEX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJ_STRINGEOL"), rt.make_int(wxSTC_HJ_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJ_SYMBOLS"), rt.make_int(wxSTC_HJ_SYMBOLS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJ_SINGLESTRING"), rt.make_int(wxSTC_HJ_SINGLESTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJ_DOUBLESTRING"), rt.make_int(wxSTC_HJ_DOUBLESTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJ_KEYWORD"), rt.make_int(wxSTC_HJ_KEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJ_WORD"), rt.make_int(wxSTC_HJ_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJ_NUMBER"), rt.make_int(wxSTC_HJ_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJ_COMMENTDOC"), rt.make_int(wxSTC_HJ_COMMENTDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJ_COMMENTLINE"), rt.make_int(wxSTC_HJ_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJ_COMMENT"), rt.make_int(wxSTC_HJ_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJ_DEFAULT"), rt.make_int(wxSTC_HJ_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_HJ_START"), rt.make_int(wxSTC_HJ_START)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_SGML_BLOCK_DEFAULT"), rt.make_int(wxSTC_H_SGML_BLOCK_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_SGML_1ST_PARAM_COMMENT"), rt.make_int(wxSTC_H_SGML_1ST_PARAM_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_SGML_COMMENT"), rt.make_int(wxSTC_H_SGML_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_SGML_ENTITY"), rt.make_int(wxSTC_H_SGML_ENTITY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_SGML_SPECIAL"), rt.make_int(wxSTC_H_SGML_SPECIAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_SGML_ERROR"), rt.make_int(wxSTC_H_SGML_ERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_SGML_SIMPLESTRING"), rt.make_int(wxSTC_H_SGML_SIMPLESTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_SGML_DOUBLESTRING"), rt.make_int(wxSTC_H_SGML_DOUBLESTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_SGML_1ST_PARAM"), rt.make_int(wxSTC_H_SGML_1ST_PARAM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_SGML_COMMAND"), rt.make_int(wxSTC_H_SGML_COMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_SGML_DEFAULT"), rt.make_int(wxSTC_H_SGML_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_XCCOMMENT"), rt.make_int(wxSTC_H_XCCOMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_VALUE"), rt.make_int(wxSTC_H_VALUE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_QUESTION"), rt.make_int(wxSTC_H_QUESTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_CDATA"), rt.make_int(wxSTC_H_CDATA)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_ASPAT"), rt.make_int(wxSTC_H_ASPAT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_ASP"), rt.make_int(wxSTC_H_ASP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_SCRIPT"), rt.make_int(wxSTC_H_SCRIPT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_XMLEND"), rt.make_int(wxSTC_H_XMLEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_XMLSTART"), rt.make_int(wxSTC_H_XMLSTART)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_TAGEND"), rt.make_int(wxSTC_H_TAGEND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_ENTITY"), rt.make_int(wxSTC_H_ENTITY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_COMMENT"), rt.make_int(wxSTC_H_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_OTHER"), rt.make_int(wxSTC_H_OTHER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_SINGLESTRING"), rt.make_int(wxSTC_H_SINGLESTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_DOUBLESTRING"), rt.make_int(wxSTC_H_DOUBLESTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_NUMBER"), rt.make_int(wxSTC_H_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_ATTRIBUTEUNKNOWN"), rt.make_int(wxSTC_H_ATTRIBUTEUNKNOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_ATTRIBUTE"), rt.make_int(wxSTC_H_ATTRIBUTE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_TAGUNKNOWN"), rt.make_int(wxSTC_H_TAGUNKNOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_TAG"), rt.make_int(wxSTC_H_TAG)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_H_DEFAULT"), rt.make_int(wxSTC_H_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_BLOCK_COMMENT"), rt.make_int(wxSTC_TCL_BLOCK_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_COMMENT_BOX"), rt.make_int(wxSTC_TCL_COMMENT_BOX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_WORD8"), rt.make_int(wxSTC_TCL_WORD8)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_WORD7"), rt.make_int(wxSTC_TCL_WORD7)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_WORD6"), rt.make_int(wxSTC_TCL_WORD6)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_WORD5"), rt.make_int(wxSTC_TCL_WORD5)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_WORD4"), rt.make_int(wxSTC_TCL_WORD4)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_WORD3"), rt.make_int(wxSTC_TCL_WORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_WORD2"), rt.make_int(wxSTC_TCL_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_WORD"), rt.make_int(wxSTC_TCL_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_EXPAND"), rt.make_int(wxSTC_TCL_EXPAND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_MODIFIER"), rt.make_int(wxSTC_TCL_MODIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_SUB_BRACE"), rt.make_int(wxSTC_TCL_SUB_BRACE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_SUBSTITUTION"), rt.make_int(wxSTC_TCL_SUBSTITUTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_IDENTIFIER"), rt.make_int(wxSTC_TCL_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_OPERATOR"), rt.make_int(wxSTC_TCL_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_IN_QUOTE"), rt.make_int(wxSTC_TCL_IN_QUOTE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_WORD_IN_QUOTE"), rt.make_int(wxSTC_TCL_WORD_IN_QUOTE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_NUMBER"), rt.make_int(wxSTC_TCL_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_COMMENTLINE"), rt.make_int(wxSTC_TCL_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_COMMENT"), rt.make_int(wxSTC_TCL_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TCL_DEFAULT"), rt.make_int(wxSTC_TCL_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_WORD7"), rt.make_int(wxSTC_D_WORD7)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_WORD6"), rt.make_int(wxSTC_D_WORD6)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_WORD5"), rt.make_int(wxSTC_D_WORD5)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_STRINGR"), rt.make_int(wxSTC_D_STRINGR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_STRINGB"), rt.make_int(wxSTC_D_STRINGB)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_COMMENTDOCKEYWORDERROR"), rt.make_int(wxSTC_D_COMMENTDOCKEYWORDERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_COMMENTDOCKEYWORD"), rt.make_int(wxSTC_D_COMMENTDOCKEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_COMMENTLINEDOC"), rt.make_int(wxSTC_D_COMMENTLINEDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_IDENTIFIER"), rt.make_int(wxSTC_D_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_OPERATOR"), rt.make_int(wxSTC_D_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_CHARACTER"), rt.make_int(wxSTC_D_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_STRINGEOL"), rt.make_int(wxSTC_D_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_STRING"), rt.make_int(wxSTC_D_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_TYPEDEF"), rt.make_int(wxSTC_D_TYPEDEF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_WORD3"), rt.make_int(wxSTC_D_WORD3)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_WORD2"), rt.make_int(wxSTC_D_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_WORD"), rt.make_int(wxSTC_D_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_NUMBER"), rt.make_int(wxSTC_D_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_COMMENTNESTED"), rt.make_int(wxSTC_D_COMMENTNESTED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_COMMENTDOC"), rt.make_int(wxSTC_D_COMMENTDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_COMMENTLINE"), rt.make_int(wxSTC_D_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_COMMENT"), rt.make_int(wxSTC_D_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_D_DEFAULT"), rt.make_int(wxSTC_D_DEFAULT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_ESCAPESEQUENCE"), rt.make_int(wxSTC_C_ESCAPESEQUENCE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_ESCAPESEQUENCE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_TASKMARKER"), rt.make_int(wxSTC_C_TASKMARKER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_TASKMARKER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_USERLITERAL"), rt.make_int(wxSTC_C_USERLITERAL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_USERLITERAL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_PREPROCESSORCOMMENTDOC"), rt.make_int(wxSTC_C_PREPROCESSORCOMMENTDOC)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_PREPROCESSORCOMMENTDOC"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_PREPROCESSORCOMMENT"), rt.make_int(wxSTC_C_PREPROCESSORCOMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_HASHQUOTEDSTRING"), rt.make_int(wxSTC_C_HASHQUOTEDSTRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_TRIPLEVERBATIM"), rt.make_int(wxSTC_C_TRIPLEVERBATIM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_STRINGRAW"), rt.make_int(wxSTC_C_STRINGRAW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_GLOBALCLASS"), rt.make_int(wxSTC_C_GLOBALCLASS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_COMMENTDOCKEYWORDERROR"), rt.make_int(wxSTC_C_COMMENTDOCKEYWORDERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_COMMENTDOCKEYWORD"), rt.make_int(wxSTC_C_COMMENTDOCKEYWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_WORD2"), rt.make_int(wxSTC_C_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_COMMENTLINEDOC"), rt.make_int(wxSTC_C_COMMENTLINEDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_REGEX"), rt.make_int(wxSTC_C_REGEX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_VERBATIM"), rt.make_int(wxSTC_C_VERBATIM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_STRINGEOL"), rt.make_int(wxSTC_C_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_IDENTIFIER"), rt.make_int(wxSTC_C_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_OPERATOR"), rt.make_int(wxSTC_C_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_PREPROCESSOR"), rt.make_int(wxSTC_C_PREPROCESSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_UUID"), rt.make_int(wxSTC_C_UUID)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_CHARACTER"), rt.make_int(wxSTC_C_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_STRING"), rt.make_int(wxSTC_C_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_WORD"), rt.make_int(wxSTC_C_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_NUMBER"), rt.make_int(wxSTC_C_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_COMMENTDOC"), rt.make_int(wxSTC_C_COMMENTDOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_COMMENTLINE"), rt.make_int(wxSTC_C_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_COMMENT"), rt.make_int(wxSTC_C_COMMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_C_DEFAULT"), rt.make_int(wxSTC_C_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_DECORATOR"), rt.make_int(wxSTC_P_DECORATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_WORD2"), rt.make_int(wxSTC_P_WORD2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_STRINGEOL"), rt.make_int(wxSTC_P_STRINGEOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_COMMENTBLOCK"), rt.make_int(wxSTC_P_COMMENTBLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_IDENTIFIER"), rt.make_int(wxSTC_P_IDENTIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_OPERATOR"), rt.make_int(wxSTC_P_OPERATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_DEFNAME"), rt.make_int(wxSTC_P_DEFNAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_CLASSNAME"), rt.make_int(wxSTC_P_CLASSNAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_TRIPLEDOUBLE"), rt.make_int(wxSTC_P_TRIPLEDOUBLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_TRIPLE"), rt.make_int(wxSTC_P_TRIPLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_WORD"), rt.make_int(wxSTC_P_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_CHARACTER"), rt.make_int(wxSTC_P_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_STRING"), rt.make_int(wxSTC_P_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_NUMBER"), rt.make_int(wxSTC_P_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_COMMENTLINE"), rt.make_int(wxSTC_P_COMMENTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_P_DEFAULT"), rt.make_int(wxSTC_P_DEFAULT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_AUTOMATIC"), rt.make_int(wxSTC_LEX_AUTOMATIC)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_AUTOMATIC"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_EDIFACT"), rt.make_int(wxSTC_LEX_EDIFACT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_EDIFACT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_JSON"), rt.make_int(wxSTC_LEX_JSON)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_JSON"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TEHEX"), rt.make_int(wxSTC_LEX_TEHEX)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TEHEX"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_IHEX"), rt.make_int(wxSTC_LEX_IHEX)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_IHEX"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SREC"), rt.make_int(wxSTC_LEX_SREC)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SREC"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_BIBTEX"), rt.make_int(wxSTC_LEX_BIBTEX)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_BIBTEX"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_REGISTRY"), rt.make_int(wxSTC_LEX_REGISTRY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_REGISTRY"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_DMIS"), rt.make_int(wxSTC_LEX_DMIS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_DMIS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_AS"), rt.make_int(wxSTC_LEX_AS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_AS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_DMAP"), rt.make_int(wxSTC_LEX_DMAP)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_DMAP"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_RUST"), rt.make_int(wxSTC_LEX_RUST)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_RUST"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_KVIRC"), rt.make_int(wxSTC_LEX_KVIRC)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_KVIRC"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_STTXT"), rt.make_int(wxSTC_LEX_STTXT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_STTXT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_LITERATEHASKELL"), rt.make_int(wxSTC_LEX_LITERATEHASKELL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_LITERATEHASKELL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_VISUALPROLOG"), rt.make_int(wxSTC_LEX_VISUALPROLOG)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_VISUALPROLOG"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_OSCRIPT"), rt.make_int(wxSTC_LEX_OSCRIPT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_OSCRIPT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ECL"), rt.make_int(wxSTC_LEX_ECL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ECL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_AVS"), rt.make_int(wxSTC_LEX_AVS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_AVS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TCMD"), rt.make_int(wxSTC_LEX_TCMD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TCMD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_COFFEESCRIPT"), rt.make_int(wxSTC_LEX_COFFEESCRIPT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_COFFEESCRIPT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MODULA"), rt.make_int(wxSTC_LEX_MODULA)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MODULA"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_A68K"), rt.make_int(wxSTC_LEX_A68K)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_A68K"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TXT2TAGS"), rt.make_int(wxSTC_LEX_TXT2TAGS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TXT2TAGS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MARKDOWN"), rt.make_int(wxSTC_LEX_MARKDOWN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MARKDOWN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SML"), rt.make_int(wxSTC_LEX_SML)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SML"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_NIMROD"), rt.make_int(wxSTC_LEX_NIMROD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_NIMROD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_POWERPRO"), rt.make_int(wxSTC_LEX_POWERPRO)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_POWERPRO"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SORCUS"), rt.make_int(wxSTC_LEX_SORCUS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SORCUS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TACL"), rt.make_int(wxSTC_LEX_TACL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TACL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_COBOL"), rt.make_int(wxSTC_LEX_COBOL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_COBOL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TAL"), rt.make_int(wxSTC_LEX_TAL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TAL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PO"), rt.make_int(wxSTC_LEX_PO)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PO"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MYSQL"), rt.make_int(wxSTC_LEX_MYSQL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MYSQL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_POWERSHELL"), rt.make_int(wxSTC_LEX_POWERSHELL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_POWERSHELL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MAGIK"), rt.make_int(wxSTC_LEX_MAGIK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MAGIK"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_R"), rt.make_int(wxSTC_LEX_R)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_R"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ASYMPTOTE"), rt.make_int(wxSTC_LEX_ASYMPTOTE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ASYMPTOTE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ABAQUS"), rt.make_int(wxSTC_LEX_ABAQUS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ABAQUS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PROGRESS"), rt.make_int(wxSTC_LEX_PROGRESS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PROGRESS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PLM"), rt.make_int(wxSTC_LEX_PLM)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PLM"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_GAP"), rt.make_int(wxSTC_LEX_GAP)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_GAP"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CMAKE"), rt.make_int(wxSTC_LEX_CMAKE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CMAKE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_D"), rt.make_int(wxSTC_LEX_D)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_D"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SPICE"), rt.make_int(wxSTC_LEX_SPICE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SPICE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_OPAL"), rt.make_int(wxSTC_LEX_OPAL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_OPAL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_INNOSETUP"), rt.make_int(wxSTC_LEX_INNOSETUP)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_INNOSETUP"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_FREEBASIC"), rt.make_int(wxSTC_LEX_FREEBASIC)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_FREEBASIC"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CSOUND"), rt.make_int(wxSTC_LEX_CSOUND)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CSOUND"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_FLAGSHIP"), rt.make_int(wxSTC_LEX_FLAGSHIP)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_FLAGSHIP"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SMALLTALK"), rt.make_int(wxSTC_LEX_SMALLTALK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SMALLTALK"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_REBOL"), rt.make_int(wxSTC_LEX_REBOL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_REBOL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TADS3"), rt.make_int(wxSTC_LEX_TADS3)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TADS3"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PHPSCRIPT"), rt.make_int(wxSTC_LEX_PHPSCRIPT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PHPSCRIPT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_HASKELL"), rt.make_int(wxSTC_LEX_HASKELL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_HASKELL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PUREBASIC"), rt.make_int(wxSTC_LEX_PUREBASIC)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PUREBASIC"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_BLITZBASIC"), rt.make_int(wxSTC_LEX_BLITZBASIC)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_BLITZBASIC"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CAML"), rt.make_int(wxSTC_LEX_CAML)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CAML"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_VHDL"), rt.make_int(wxSTC_LEX_VHDL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_VHDL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ASN1"), rt.make_int(wxSTC_LEX_ASN1)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ASN1"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_BASH"), rt.make_int(wxSTC_LEX_BASH)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_BASH"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_APDL"), rt.make_int(wxSTC_LEX_APDL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_APDL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_AU3"), rt.make_int(wxSTC_LEX_AU3)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_AU3"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SPECMAN"), rt.make_int(wxSTC_LEX_SPECMAN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SPECMAN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_GUI4CLI"), rt.make_int(wxSTC_LEX_GUI4CLI)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_GUI4CLI"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_KIX"), rt.make_int(wxSTC_LEX_KIX)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_KIX"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_VERILOG"), rt.make_int(wxSTC_LEX_VERILOG)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_VERILOG"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MSSQL"), rt.make_int(wxSTC_LEX_MSSQL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MSSQL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_OCTAVE"), rt.make_int(wxSTC_LEX_OCTAVE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_OCTAVE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ERLANG"), rt.make_int(wxSTC_LEX_ERLANG)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ERLANG"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_FORTH"), rt.make_int(wxSTC_LEX_FORTH)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_FORTH"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_POWERBASIC"), rt.make_int(wxSTC_LEX_POWERBASIC)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_POWERBASIC"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_METAPOST"), rt.make_int(wxSTC_LEX_METAPOST)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_METAPOST"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TEX"), rt.make_int(wxSTC_LEX_TEX)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TEX"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_YAML"), rt.make_int(wxSTC_LEX_YAML)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_YAML"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_LOT"), rt.make_int(wxSTC_LEX_LOT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_LOT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CLWNOCASE"), rt.make_int(wxSTC_LEX_CLWNOCASE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CLWNOCASE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CLW"), rt.make_int(wxSTC_LEX_CLW)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CLW"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MMIXAL"), rt.make_int(wxSTC_LEX_MMIXAL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MMIXAL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_NSIS"), rt.make_int(wxSTC_LEX_NSIS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_NSIS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PS"), rt.make_int(wxSTC_LEX_PS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ESCRIPT"), rt.make_int(wxSTC_LEX_ESCRIPT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ESCRIPT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_LOUT"), rt.make_int(wxSTC_LEX_LOUT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_LOUT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_POV"), rt.make_int(wxSTC_LEX_POV)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_POV"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CSS"), rt.make_int(wxSTC_LEX_CSS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CSS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_F77"), rt.make_int(wxSTC_LEX_F77)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_F77"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_FORTRAN"), rt.make_int(wxSTC_LEX_FORTRAN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_FORTRAN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CPPNOCASE"), rt.make_int(wxSTC_LEX_CPPNOCASE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CPPNOCASE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ASM"), rt.make_int(wxSTC_LEX_ASM)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ASM"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SCRIPTOL"), rt.make_int(wxSTC_LEX_SCRIPTOL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SCRIPTOL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MATLAB"), rt.make_int(wxSTC_LEX_MATLAB)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MATLAB"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_BAAN"), rt.make_int(wxSTC_LEX_BAAN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_BAAN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_VBSCRIPT"), rt.make_int(wxSTC_LEX_VBSCRIPT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_VBSCRIPT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_BULLANT"), rt.make_int(wxSTC_LEX_BULLANT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_BULLANT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_NNCRONTAB"), rt.make_int(wxSTC_LEX_NNCRONTAB)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_NNCRONTAB"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TCL"), rt.make_int(wxSTC_LEX_TCL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_TCL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_EIFFELKW"), rt.make_int(wxSTC_LEX_EIFFELKW)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_EIFFELKW"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_EIFFEL"), rt.make_int(wxSTC_LEX_EIFFEL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_EIFFEL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_RUBY"), rt.make_int(wxSTC_LEX_RUBY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_RUBY"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_LISP"), rt.make_int(wxSTC_LEX_LISP)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_LISP"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ADA"), rt.make_int(wxSTC_LEX_ADA)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ADA"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_AVE"), rt.make_int(wxSTC_LEX_AVE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_AVE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PASCAL"), rt.make_int(wxSTC_LEX_PASCAL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PASCAL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CONF"), rt.make_int(wxSTC_LEX_CONF)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CONF"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_DIFF"), rt.make_int(wxSTC_LEX_DIFF)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_DIFF"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_LUA"), rt.make_int(wxSTC_LEX_LUA)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_LUA"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_LATEX"), rt.make_int(wxSTC_LEX_LATEX)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_LATEX"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_XCODE"), rt.make_int(wxSTC_LEX_XCODE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_XCODE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_BATCH"), rt.make_int(wxSTC_LEX_BATCH)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_BATCH"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MAKEFILE"), rt.make_int(wxSTC_LEX_MAKEFILE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_MAKEFILE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ERRORLIST"), rt.make_int(wxSTC_LEX_ERRORLIST)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_ERRORLIST"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PROPERTIES"), rt.make_int(wxSTC_LEX_PROPERTIES)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PROPERTIES"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_VB"), rt.make_int(wxSTC_LEX_VB)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_VB"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SQL"), rt.make_int(wxSTC_LEX_SQL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_SQL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PERL"), rt.make_int(wxSTC_LEX_PERL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PERL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_XML"), rt.make_int(wxSTC_LEX_XML)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_XML"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_HTML"), rt.make_int(wxSTC_LEX_HTML)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_HTML"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CPP"), rt.make_int(wxSTC_LEX_CPP)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CPP"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PYTHON"), rt.make_int(wxSTC_LEX_PYTHON)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_PYTHON"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_NULL"), rt.make_int(wxSTC_LEX_NULL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_NULL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CONTAINER"), rt.make_int(wxSTC_LEX_CONTAINER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEX_CONTAINER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AC_COMMAND"), rt.make_int(wxSTC_AC_COMMAND)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AC_COMMAND"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AC_NEWLINE"), rt.make_int(wxSTC_AC_NEWLINE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AC_NEWLINE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AC_TAB"), rt.make_int(wxSTC_AC_TAB)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AC_TAB"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AC_DOUBLECLICK"), rt.make_int(wxSTC_AC_DOUBLECLICK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AC_DOUBLECLICK"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AC_FILLUP"), rt.make_int(wxSTC_AC_FILLUP)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AC_FILLUP"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEYMOD_META"), rt.make_int(wxSTC_KEYMOD_META)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEYMOD_META"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEYMOD_SUPER"), rt.make_int(wxSTC_KEYMOD_SUPER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEYMOD_SUPER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEYMOD_ALT"), rt.make_int(wxSTC_KEYMOD_ALT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEYMOD_ALT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEYMOD_CTRL"), rt.make_int(wxSTC_KEYMOD_CTRL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEYMOD_CTRL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEYMOD_SHIFT"), rt.make_int(wxSTC_KEYMOD_SHIFT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEYMOD_SHIFT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEYMOD_NORM"), rt.make_int(wxSTC_KEYMOD_NORM)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEYMOD_NORM"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_MENU"), rt.make_int(wxSTC_KEY_MENU)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_RWIN"), rt.make_int(wxSTC_KEY_RWIN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_WIN"), rt.make_int(wxSTC_KEY_WIN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_DIVIDE"), rt.make_int(wxSTC_KEY_DIVIDE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_SUBTRACT"), rt.make_int(wxSTC_KEY_SUBTRACT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_ADD"), rt.make_int(wxSTC_KEY_ADD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_RETURN"), rt.make_int(wxSTC_KEY_RETURN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_TAB"), rt.make_int(wxSTC_KEY_TAB)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_BACK"), rt.make_int(wxSTC_KEY_BACK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_ESCAPE"), rt.make_int(wxSTC_KEY_ESCAPE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_INSERT"), rt.make_int(wxSTC_KEY_INSERT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_DELETE"), rt.make_int(wxSTC_KEY_DELETE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_NEXT"), rt.make_int(wxSTC_KEY_NEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_PRIOR"), rt.make_int(wxSTC_KEY_PRIOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_END"), rt.make_int(wxSTC_KEY_END)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_HOME"), rt.make_int(wxSTC_KEY_HOME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_RIGHT"), rt.make_int(wxSTC_KEY_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_LEFT"), rt.make_int(wxSTC_KEY_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_UP"), rt.make_int(wxSTC_KEY_UP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEY_DOWN"), rt.make_int(wxSTC_KEY_DOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_UPDATE_H_SCROLL"), rt.make_int(wxSTC_UPDATE_H_SCROLL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_UPDATE_V_SCROLL"), rt.make_int(wxSTC_UPDATE_V_SCROLL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_UPDATE_SELECTION"), rt.make_int(wxSTC_UPDATE_SELECTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_UPDATE_CONTENT"), rt.make_int(wxSTC_UPDATE_CONTENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MODEVENTMASKALL"), rt.make_int(wxSTC_MODEVENTMASKALL)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_CHANGETABSTOPS"), rt.make_int(wxSTC_MOD_CHANGETABSTOPS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_CHANGETABSTOPS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_INSERTCHECK"), rt.make_int(wxSTC_MOD_INSERTCHECK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_INSERTCHECK"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_LEXERSTATE"), rt.make_int(wxSTC_MOD_LEXERSTATE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_CONTAINER"), rt.make_int(wxSTC_MOD_CONTAINER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_CHANGEANNOTATION"), rt.make_int(wxSTC_MOD_CHANGEANNOTATION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_CHANGEMARGIN"), rt.make_int(wxSTC_MOD_CHANGEMARGIN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_CHANGELINESTATE"), rt.make_int(wxSTC_MOD_CHANGELINESTATE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_CHANGEINDICATOR"), rt.make_int(wxSTC_MOD_CHANGEINDICATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STARTACTION"), rt.make_int(wxSTC_STARTACTION)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MULTILINEUNDOREDO"), rt.make_int(wxSTC_MULTILINEUNDOREDO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_BEFOREDELETE"), rt.make_int(wxSTC_MOD_BEFOREDELETE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_BEFOREINSERT"), rt.make_int(wxSTC_MOD_BEFOREINSERT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_CHANGEMARKER"), rt.make_int(wxSTC_MOD_CHANGEMARKER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LASTSTEPINUNDOREDO"), rt.make_int(wxSTC_LASTSTEPINUNDOREDO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MULTISTEPUNDOREDO"), rt.make_int(wxSTC_MULTISTEPUNDOREDO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PERFORMED_REDO"), rt.make_int(wxSTC_PERFORMED_REDO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PERFORMED_UNDO"), rt.make_int(wxSTC_PERFORMED_UNDO)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PERFORMED_USER"), rt.make_int(wxSTC_PERFORMED_USER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_CHANGEFOLD"), rt.make_int(wxSTC_MOD_CHANGEFOLD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_CHANGESTYLE"), rt.make_int(wxSTC_MOD_CHANGESTYLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_DELETETEXT"), rt.make_int(wxSTC_MOD_DELETETEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MOD_INSERTTEXT"), rt.make_int(wxSTC_MOD_INSERTTEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TYPE_STRING"), rt.make_int(wxSTC_TYPE_STRING)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TYPE_INTEGER"), rt.make_int(wxSTC_TYPE_INTEGER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TYPE_BOOLEAN"), rt.make_int(wxSTC_TYPE_BOOLEAN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_KEYWORDSET_MAX"), rt.make_int(wxSTC_KEYWORDSET_MAX)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LINE_END_TYPE_UNICODE"), rt.make_int(wxSTC_LINE_END_TYPE_UNICODE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LINE_END_TYPE_UNICODE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LINE_END_TYPE_DEFAULT"), rt.make_int(wxSTC_LINE_END_TYPE_DEFAULT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LINE_END_TYPE_DEFAULT"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TECHNOLOGY_DIRECTWRITE"), rt.make_int(wxSTC_TECHNOLOGY_DIRECTWRITE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TECHNOLOGY_DEFAULT"), rt.make_int(wxSTC_TECHNOLOGY_DEFAULT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VS_NOWRAPLINESTART"), rt.make_int(wxSTC_VS_NOWRAPLINESTART)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VS_NOWRAPLINESTART"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VS_USERACCESSIBLE"), rt.make_int(wxSTC_VS_USERACCESSIBLE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VS_USERACCESSIBLE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VS_RECTANGULARSELECTION"), rt.make_int(wxSTC_VS_RECTANGULARSELECTION)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VS_RECTANGULARSELECTION"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VS_NONE"), rt.make_int(wxSTC_VS_NONE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VS_NONE"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_UNDO_MAY_COALESCE"), rt.make_int(wxSTC_UNDO_MAY_COALESCE)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ANNOTATION_INDENTED"), rt.make_int(wxSTC_ANNOTATION_INDENTED)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ANNOTATION_INDENTED"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ANNOTATION_BOXED"), rt.make_int(wxSTC_ANNOTATION_BOXED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ANNOTATION_STANDARD"), rt.make_int(wxSTC_ANNOTATION_STANDARD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ANNOTATION_HIDDEN"), rt.make_int(wxSTC_ANNOTATION_HIDDEN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARGINOPTION_SUBLINESELECT"), rt.make_int(wxSTC_MARGINOPTION_SUBLINESELECT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARGINOPTION_NONE"), rt.make_int(wxSTC_MARGINOPTION_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CARETSTYLE_BLOCK"), rt.make_int(wxSTC_CARETSTYLE_BLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CARETSTYLE_LINE"), rt.make_int(wxSTC_CARETSTYLE_LINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CARETSTYLE_INVISIBLE"), rt.make_int(wxSTC_CARETSTYLE_INVISIBLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ALPHA_NOALPHA"), rt.make_int(wxSTC_ALPHA_NOALPHA)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ALPHA_OPAQUE"), rt.make_int(wxSTC_ALPHA_OPAQUE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ALPHA_TRANSPARENT"), rt.make_int(wxSTC_ALPHA_TRANSPARENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CARETSTICKY_WHITESPACE"), rt.make_int(wxSTC_CARETSTICKY_WHITESPACE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CARETSTICKY_ON"), rt.make_int(wxSTC_CARETSTICKY_ON)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CARETSTICKY_OFF"), rt.make_int(wxSTC_CARETSTICKY_OFF)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ORDER_CUSTOM"), rt.make_int(wxSTC_ORDER_CUSTOM)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ORDER_CUSTOM"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ORDER_PERFORMSORT"), rt.make_int(wxSTC_ORDER_PERFORMSORT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ORDER_PERFORMSORT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ORDER_PRESORTED"), rt.make_int(wxSTC_ORDER_PRESORTED)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_ORDER_PRESORTED"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MULTIAUTOC_EACH"), rt.make_int(wxSTC_MULTIAUTOC_EACH)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MULTIAUTOC_EACH"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MULTIAUTOC_ONCE"), rt.make_int(wxSTC_MULTIAUTOC_ONCE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MULTIAUTOC_ONCE"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CASEINSENSITIVEBEHAVIOUR_IGNORECASE"), rt.make_int(wxSTC_CASEINSENSITIVEBEHAVIOUR_IGNORECASE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CASEINSENSITIVEBEHAVIOUR_RESPECTCASE"), rt.make_int(wxSTC_CASEINSENSITIVEBEHAVIOUR_RESPECTCASE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SEL_THIN"), rt.make_int(wxSTC_SEL_THIN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SEL_LINES"), rt.make_int(wxSTC_SEL_LINES)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SEL_RECTANGLE"), rt.make_int(wxSTC_SEL_RECTANGLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_SEL_STREAM"), rt.make_int(wxSTC_SEL_STREAM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CARET_EVEN"), rt.make_int(wxSTC_CARET_EVEN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CARET_JUMPS"), rt.make_int(wxSTC_CARET_JUMPS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CARET_STRICT"), rt.make_int(wxSTC_CARET_STRICT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CARET_SLOP"), rt.make_int(wxSTC_CARET_SLOP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISIBLE_STRICT"), rt.make_int(wxSTC_VISIBLE_STRICT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_VISIBLE_SLOP"), rt.make_int(wxSTC_VISIBLE_SLOP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CURSORREVERSEARROW"), rt.make_int(wxSTC_CURSORREVERSEARROW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CURSORWAIT"), rt.make_int(wxSTC_CURSORWAIT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CURSORARROW"), rt.make_int(wxSTC_CURSORARROW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CURSORNORMAL"), rt.make_int(wxSTC_CURSORNORMAL)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STATUS_WARN_REGEX"), rt.make_int(wxSTC_STATUS_WARN_REGEX)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STATUS_WARN_REGEX"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STATUS_WARN_START"), rt.make_int(wxSTC_STATUS_WARN_START)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STATUS_WARN_START"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STATUS_BADALLOC"), rt.make_int(wxSTC_STATUS_BADALLOC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STATUS_FAILURE"), rt.make_int(wxSTC_STATUS_FAILURE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STATUS_OK"), rt.make_int(wxSTC_STATUS_OK)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POPUP_TEXT"), rt.make_int(wxSTC_POPUP_TEXT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POPUP_TEXT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POPUP_ALL"), rt.make_int(wxSTC_POPUP_ALL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POPUP_ALL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POPUP_NEVER"), rt.make_int(wxSTC_POPUP_NEVER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_POPUP_NEVER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDGE_MULTILINE"), rt.make_int(wxSTC_EDGE_MULTILINE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDGE_MULTILINE"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDGE_BACKGROUND"), rt.make_int(wxSTC_EDGE_BACKGROUND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDGE_LINE"), rt.make_int(wxSTC_EDGE_LINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EDGE_NONE"), rt.make_int(wxSTC_EDGE_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MULTIPASTE_EACH"), rt.make_int(wxSTC_MULTIPASTE_EACH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MULTIPASTE_ONCE"), rt.make_int(wxSTC_MULTIPASTE_ONCE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EFF_QUALITY_LCD_OPTIMIZED"), rt.make_int(wxSTC_EFF_QUALITY_LCD_OPTIMIZED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EFF_QUALITY_ANTIALIASED"), rt.make_int(wxSTC_EFF_QUALITY_ANTIALIASED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EFF_QUALITY_NON_ANTIALIASED"), rt.make_int(wxSTC_EFF_QUALITY_NON_ANTIALIASED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EFF_QUALITY_DEFAULT"), rt.make_int(wxSTC_EFF_QUALITY_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EFF_QUALITY_MASK"), rt.make_int(wxSTC_EFF_QUALITY_MASK)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PHASES_MULTIPLE"), rt.make_int(wxSTC_PHASES_MULTIPLE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PHASES_MULTIPLE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PHASES_TWO"), rt.make_int(wxSTC_PHASES_TWO)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PHASES_TWO"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PHASES_ONE"), rt.make_int(wxSTC_PHASES_ONE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PHASES_ONE"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CACHE_DOCUMENT"), rt.make_int(wxSTC_CACHE_DOCUMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CACHE_PAGE"), rt.make_int(wxSTC_CACHE_PAGE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CACHE_CARET"), rt.make_int(wxSTC_CACHE_CARET)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CACHE_NONE"), rt.make_int(wxSTC_CACHE_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WRAPINDENT_INDENT"), rt.make_int(wxSTC_WRAPINDENT_INDENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WRAPINDENT_SAME"), rt.make_int(wxSTC_WRAPINDENT_SAME)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WRAPINDENT_FIXED"), rt.make_int(wxSTC_WRAPINDENT_FIXED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WRAPVISUALFLAGLOC_START_BY_TEXT"), rt.make_int(wxSTC_WRAPVISUALFLAGLOC_START_BY_TEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WRAPVISUALFLAGLOC_END_BY_TEXT"), rt.make_int(wxSTC_WRAPVISUALFLAGLOC_END_BY_TEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WRAPVISUALFLAGLOC_DEFAULT"), rt.make_int(wxSTC_WRAPVISUALFLAGLOC_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WRAPVISUALFLAG_MARGIN"), rt.make_int(wxSTC_WRAPVISUALFLAG_MARGIN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WRAPVISUALFLAG_START"), rt.make_int(wxSTC_WRAPVISUALFLAG_START)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WRAPVISUALFLAG_END"), rt.make_int(wxSTC_WRAPVISUALFLAG_END)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WRAPVISUALFLAG_NONE"), rt.make_int(wxSTC_WRAPVISUALFLAG_NONE)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WRAP_WHITESPACE"), rt.make_int(wxSTC_WRAP_WHITESPACE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WRAP_WHITESPACE"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WRAP_CHAR"), rt.make_int(wxSTC_WRAP_CHAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WRAP_WORD"), rt.make_int(wxSTC_WRAP_WORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WRAP_NONE"), rt.make_int(wxSTC_WRAP_NONE)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IDLESTYLING_ALL"), rt.make_int(wxSTC_IDLESTYLING_ALL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IDLESTYLING_ALL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IDLESTYLING_AFTERVISIBLE"), rt.make_int(wxSTC_IDLESTYLING_AFTERVISIBLE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IDLESTYLING_AFTERVISIBLE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IDLESTYLING_TOVISIBLE"), rt.make_int(wxSTC_IDLESTYLING_TOVISIBLE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IDLESTYLING_TOVISIBLE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IDLESTYLING_NONE"), rt.make_int(wxSTC_IDLESTYLING_NONE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IDLESTYLING_NONE"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TIME_FOREVER"), rt.make_int(wxSTC_TIME_FOREVER)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDFLAG_LINESTATE"), rt.make_int(wxSTC_FOLDFLAG_LINESTATE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDFLAG_LINESTATE"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDFLAG_LEVELNUMBERS"), rt.make_int(wxSTC_FOLDFLAG_LEVELNUMBERS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDFLAG_LINEAFTER_CONTRACTED"), rt.make_int(wxSTC_FOLDFLAG_LINEAFTER_CONTRACTED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDFLAG_LINEAFTER_EXPANDED"), rt.make_int(wxSTC_FOLDFLAG_LINEAFTER_EXPANDED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDFLAG_LINEBEFORE_CONTRACTED"), rt.make_int(wxSTC_FOLDFLAG_LINEBEFORE_CONTRACTED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDFLAG_LINEBEFORE_EXPANDED"), rt.make_int(wxSTC_FOLDFLAG_LINEBEFORE_EXPANDED)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AUTOMATICFOLD_CHANGE"), rt.make_int(wxSTC_AUTOMATICFOLD_CHANGE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AUTOMATICFOLD_CHANGE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AUTOMATICFOLD_CLICK"), rt.make_int(wxSTC_AUTOMATICFOLD_CLICK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AUTOMATICFOLD_CLICK"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AUTOMATICFOLD_SHOW"), rt.make_int(wxSTC_AUTOMATICFOLD_SHOW)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_AUTOMATICFOLD_SHOW"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDACTION_TOGGLE"), rt.make_int(wxSTC_FOLDACTION_TOGGLE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDACTION_TOGGLE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDACTION_EXPAND"), rt.make_int(wxSTC_FOLDACTION_EXPAND)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDACTION_EXPAND"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDACTION_CONTRACT"), rt.make_int(wxSTC_FOLDACTION_CONTRACT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDACTION_CONTRACT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDDISPLAYTEXT_BOXED"), rt.make_int(wxSTC_FOLDDISPLAYTEXT_BOXED)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDDISPLAYTEXT_BOXED"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDDISPLAYTEXT_STANDARD"), rt.make_int(wxSTC_FOLDDISPLAYTEXT_STANDARD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDDISPLAYTEXT_STANDARD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDDISPLAYTEXT_HIDDEN"), rt.make_int(wxSTC_FOLDDISPLAYTEXT_HIDDEN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDDISPLAYTEXT_HIDDEN"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDLEVELNUMBERMASK"), rt.make_int(wxSTC_FOLDLEVELNUMBERMASK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDLEVELHEADERFLAG"), rt.make_int(wxSTC_FOLDLEVELHEADERFLAG)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDLEVELWHITEFLAG"), rt.make_int(wxSTC_FOLDLEVELWHITEFLAG)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FOLDLEVELBASE"), rt.make_int(wxSTC_FOLDLEVELBASE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FIND_POSIX"), rt.make_int(wxSTC_FIND_POSIX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FIND_REGEXP"), rt.make_int(wxSTC_FIND_REGEXP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FIND_WORDSTART"), rt.make_int(wxSTC_FIND_WORDSTART)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FIND_MATCHCASE"), rt.make_int(wxSTC_FIND_MATCHCASE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FIND_WHOLEWORD"), rt.make_int(wxSTC_FIND_WHOLEWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PRINT_COLOURONWHITEDEFAULTBG"), rt.make_int(wxSTC_PRINT_COLOURONWHITEDEFAULTBG)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PRINT_COLOURONWHITE"), rt.make_int(wxSTC_PRINT_COLOURONWHITE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PRINT_BLACKONWHITE"), rt.make_int(wxSTC_PRINT_BLACKONWHITE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PRINT_INVERTLIGHT"), rt.make_int(wxSTC_PRINT_INVERTLIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_PRINT_NORMAL"), rt.make_int(wxSTC_PRINT_NORMAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IV_LOOKBOTH"), rt.make_int(wxSTC_IV_LOOKBOTH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IV_LOOKFORWARD"), rt.make_int(wxSTC_IV_LOOKFORWARD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IV_REAL"), rt.make_int(wxSTC_IV_REAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IV_NONE"), rt.make_int(wxSTC_IV_NONE)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDICFLAG_VALUEFORE"), rt.make_int(wxSTC_INDICFLAG_VALUEFORE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDICFLAG_VALUEFORE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDICVALUEMASK"), rt.make_int(wxSTC_INDICVALUEMASK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDICVALUEMASK"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDICVALUEBIT"), rt.make_int(wxSTC_INDICVALUEBIT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDICVALUEBIT"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_CONTAINER"), rt.make_int(wxSTC_INDIC_CONTAINER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_MAX"), rt.make_int(wxSTC_INDIC_MAX)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_IME_MAX"), rt.make_int(wxSTC_INDIC_IME_MAX)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_IME_MAX"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_IME"), rt.make_int(wxSTC_INDIC_IME)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_IME"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_POINTCHARACTER"), rt.make_int(wxSTC_INDIC_POINTCHARACTER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_POINTCHARACTER"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_POINT"), rt.make_int(wxSTC_INDIC_POINT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_POINT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_TEXTFORE"), rt.make_int(wxSTC_INDIC_TEXTFORE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_TEXTFORE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_FULLBOX"), rt.make_int(wxSTC_INDIC_FULLBOX)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_FULLBOX"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_COMPOSITIONTHIN"), rt.make_int(wxSTC_INDIC_COMPOSITIONTHIN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_COMPOSITIONTHIN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_COMPOSITIONTHICK"), rt.make_int(wxSTC_INDIC_COMPOSITIONTHICK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_COMPOSITIONTHICK"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_SQUIGGLEPIXMAP"), rt.make_int(wxSTC_INDIC_SQUIGGLEPIXMAP)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_SQUIGGLEPIXMAP"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_DOTBOX"), rt.make_int(wxSTC_INDIC_DOTBOX)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_SQUIGGLELOW"), rt.make_int(wxSTC_INDIC_SQUIGGLELOW)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_SQUIGGLELOW"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_DOTS"), rt.make_int(wxSTC_INDIC_DOTS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_DASH"), rt.make_int(wxSTC_INDIC_DASH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_STRAIGHTBOX"), rt.make_int(wxSTC_INDIC_STRAIGHTBOX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_ROUNDBOX"), rt.make_int(wxSTC_INDIC_ROUNDBOX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_BOX"), rt.make_int(wxSTC_INDIC_BOX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_HIDDEN"), rt.make_int(wxSTC_INDIC_HIDDEN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_STRIKE"), rt.make_int(wxSTC_INDIC_STRIKE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_DIAGONAL"), rt.make_int(wxSTC_INDIC_DIAGONAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_TT"), rt.make_int(wxSTC_INDIC_TT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_SQUIGGLE"), rt.make_int(wxSTC_INDIC_SQUIGGLE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_SQUIGGLE"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INDIC_PLAIN"), rt.make_int(wxSTC_INDIC_PLAIN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WEIGHT_BOLD"), rt.make_int(wxSTC_WEIGHT_BOLD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WEIGHT_SEMIBOLD"), rt.make_int(wxSTC_WEIGHT_SEMIBOLD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WEIGHT_NORMAL"), rt.make_int(wxSTC_WEIGHT_NORMAL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_FONT_SIZE_MULTIPLIER"), rt.make_int(wxSTC_FONT_SIZE_MULTIPLIER)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CASE_CAMEL"), rt.make_int(wxSTC_CASE_CAMEL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CASE_CAMEL"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CASE_LOWER"), rt.make_int(wxSTC_CASE_LOWER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CASE_UPPER"), rt.make_int(wxSTC_CASE_UPPER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CASE_MIXED"), rt.make_int(wxSTC_CASE_MIXED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_8859_15"), rt.make_int(wxSTC_CHARSET_8859_15)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_THAI"), rt.make_int(wxSTC_CHARSET_THAI)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_VIETNAMESE"), rt.make_int(wxSTC_CHARSET_VIETNAMESE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_ARABIC"), rt.make_int(wxSTC_CHARSET_ARABIC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_HEBREW"), rt.make_int(wxSTC_CHARSET_HEBREW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_JOHAB"), rt.make_int(wxSTC_CHARSET_JOHAB)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_TURKISH"), rt.make_int(wxSTC_CHARSET_TURKISH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_SYMBOL"), rt.make_int(wxSTC_CHARSET_SYMBOL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_SHIFTJIS"), rt.make_int(wxSTC_CHARSET_SHIFTJIS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_CYRILLIC"), rt.make_int(wxSTC_CHARSET_CYRILLIC)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_OEM866"), rt.make_int(wxSTC_CHARSET_OEM866)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_OEM866"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_RUSSIAN"), rt.make_int(wxSTC_CHARSET_RUSSIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_OEM"), rt.make_int(wxSTC_CHARSET_OEM)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_MAC"), rt.make_int(wxSTC_CHARSET_MAC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_HANGUL"), rt.make_int(wxSTC_CHARSET_HANGUL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_GREEK"), rt.make_int(wxSTC_CHARSET_GREEK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_GB2312"), rt.make_int(wxSTC_CHARSET_GB2312)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_EASTEUROPE"), rt.make_int(wxSTC_CHARSET_EASTEUROPE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_CHINESEBIG5"), rt.make_int(wxSTC_CHARSET_CHINESEBIG5)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_BALTIC"), rt.make_int(wxSTC_CHARSET_BALTIC)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_DEFAULT"), rt.make_int(wxSTC_CHARSET_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CHARSET_ANSI"), rt.make_int(wxSTC_CHARSET_ANSI)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STYLE_MAX"), rt.make_int(wxSTC_STYLE_MAX)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STYLE_LASTPREDEFINED"), rt.make_int(wxSTC_STYLE_LASTPREDEFINED)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STYLE_FOLDDISPLAYTEXT"), rt.make_int(wxSTC_STYLE_FOLDDISPLAYTEXT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STYLE_FOLDDISPLAYTEXT"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STYLE_CALLTIP"), rt.make_int(wxSTC_STYLE_CALLTIP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STYLE_INDENTGUIDE"), rt.make_int(wxSTC_STYLE_INDENTGUIDE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STYLE_CONTROLCHAR"), rt.make_int(wxSTC_STYLE_CONTROLCHAR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STYLE_BRACEBAD"), rt.make_int(wxSTC_STYLE_BRACEBAD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STYLE_BRACELIGHT"), rt.make_int(wxSTC_STYLE_BRACELIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STYLE_LINENUMBER"), rt.make_int(wxSTC_STYLE_LINENUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_STYLE_DEFAULT"), rt.make_int(wxSTC_STYLE_DEFAULT)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARGIN_COLOUR"), rt.make_int(wxSTC_MARGIN_COLOUR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARGIN_COLOUR"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARGIN_RTEXT"), rt.make_int(wxSTC_MARGIN_RTEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARGIN_TEXT"), rt.make_int(wxSTC_MARGIN_TEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARGIN_FORE"), rt.make_int(wxSTC_MARGIN_FORE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARGIN_BACK"), rt.make_int(wxSTC_MARGIN_BACK)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARGIN_NUMBER"), rt.make_int(wxSTC_MARGIN_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARGIN_SYMBOL"), rt.make_int(wxSTC_MARGIN_SYMBOL)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAX_MARGIN"), rt.make_int(wxSTC_MAX_MARGIN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MAX_MARGIN"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MASK_FOLDERS"), rt.make_int(wxSTC_MASK_FOLDERS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKNUM_FOLDEROPEN"), rt.make_int(wxSTC_MARKNUM_FOLDEROPEN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKNUM_FOLDER"), rt.make_int(wxSTC_MARKNUM_FOLDER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKNUM_FOLDERSUB"), rt.make_int(wxSTC_MARKNUM_FOLDERSUB)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKNUM_FOLDERTAIL"), rt.make_int(wxSTC_MARKNUM_FOLDERTAIL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKNUM_FOLDERMIDTAIL"), rt.make_int(wxSTC_MARKNUM_FOLDERMIDTAIL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKNUM_FOLDEROPENMID"), rt.make_int(wxSTC_MARKNUM_FOLDEROPENMID)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKNUM_FOLDEREND"), rt.make_int(wxSTC_MARKNUM_FOLDEREND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_CHARACTER"), rt.make_int(wxSTC_MARK_CHARACTER)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_BOOKMARK"), rt.make_int(wxSTC_MARK_BOOKMARK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_BOOKMARK"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_RGBAIMAGE"), rt.make_int(wxSTC_MARK_RGBAIMAGE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_UNDERLINE"), rt.make_int(wxSTC_MARK_UNDERLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_AVAILABLE"), rt.make_int(wxSTC_MARK_AVAILABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_LEFTRECT"), rt.make_int(wxSTC_MARK_LEFTRECT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_FULLRECT"), rt.make_int(wxSTC_MARK_FULLRECT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_PIXMAP"), rt.make_int(wxSTC_MARK_PIXMAP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_ARROWS"), rt.make_int(wxSTC_MARK_ARROWS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_DOTDOTDOT"), rt.make_int(wxSTC_MARK_DOTDOTDOT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_BACKGROUND"), rt.make_int(wxSTC_MARK_BACKGROUND)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_CIRCLEMINUSCONNECTED"), rt.make_int(wxSTC_MARK_CIRCLEMINUSCONNECTED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_CIRCLEMINUS"), rt.make_int(wxSTC_MARK_CIRCLEMINUS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_CIRCLEPLUSCONNECTED"), rt.make_int(wxSTC_MARK_CIRCLEPLUSCONNECTED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_CIRCLEPLUS"), rt.make_int(wxSTC_MARK_CIRCLEPLUS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_TCORNERCURVE"), rt.make_int(wxSTC_MARK_TCORNERCURVE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_LCORNERCURVE"), rt.make_int(wxSTC_MARK_LCORNERCURVE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_BOXMINUSCONNECTED"), rt.make_int(wxSTC_MARK_BOXMINUSCONNECTED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_BOXMINUS"), rt.make_int(wxSTC_MARK_BOXMINUS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_BOXPLUSCONNECTED"), rt.make_int(wxSTC_MARK_BOXPLUSCONNECTED)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_BOXPLUS"), rt.make_int(wxSTC_MARK_BOXPLUS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_TCORNER"), rt.make_int(wxSTC_MARK_TCORNER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_LCORNER"), rt.make_int(wxSTC_MARK_LCORNER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_VLINE"), rt.make_int(wxSTC_MARK_VLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_PLUS"), rt.make_int(wxSTC_MARK_PLUS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_MINUS"), rt.make_int(wxSTC_MARK_MINUS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_ARROWDOWN"), rt.make_int(wxSTC_MARK_ARROWDOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_EMPTY"), rt.make_int(wxSTC_MARK_EMPTY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_SHORTARROW"), rt.make_int(wxSTC_MARK_SHORTARROW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_SMALLRECT"), rt.make_int(wxSTC_MARK_SMALLRECT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_ARROW"), rt.make_int(wxSTC_MARK_ARROW)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_ROUNDRECT"), rt.make_int(wxSTC_MARK_ROUNDRECT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARK_CIRCLE"), rt.make_int(wxSTC_MARK_CIRCLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_MARKER_MAX"), rt.make_int(wxSTC_MARKER_MAX)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IME_INLINE"), rt.make_int(wxSTC_IME_INLINE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IME_INLINE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IME_WINDOWED"), rt.make_int(wxSTC_IME_WINDOWED)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_IME_WINDOWED"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_CP_UTF8"), rt.make_int(wxSTC_CP_UTF8)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EOL_LF"), rt.make_int(wxSTC_EOL_LF)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EOL_CR"), rt.make_int(wxSTC_EOL_CR)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_EOL_CRLF"), rt.make_int(wxSTC_EOL_CRLF)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TD_STRIKEOUT"), rt.make_int(wxSTC_TD_STRIKEOUT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TD_STRIKEOUT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TD_LONGARROW"), rt.make_int(wxSTC_TD_LONGARROW)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_TD_LONGARROW"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WS_VISIBLEONLYININDENT"), rt.make_int(wxSTC_WS_VISIBLEONLYININDENT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WS_VISIBLEONLYININDENT"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WS_VISIBLEAFTERINDENT"), rt.make_int(wxSTC_WS_VISIBLEAFTERINDENT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WS_VISIBLEALWAYS"), rt.make_int(wxSTC_WS_VISIBLEALWAYS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_WS_INVISIBLE"), rt.make_int(wxSTC_WS_INVISIBLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_LEXER_START"), rt.make_int(wxSTC_LEXER_START)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_OPTIONAL_START"), rt.make_int(wxSTC_OPTIONAL_START)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_START"), rt.make_int(wxSTC_START)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxSTC_INVALID_POSITION"), rt.make_int(wxSTC_INVALID_POSITION)),
//  From "textctrl.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTEXT_TYPE_ANY"), rt.make_int(wxTEXT_TYPE_ANY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_RICH2"), rt.make_int(wxTE_RICH2)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_BESTWRAP"), rt.make_int(wxTE_BESTWRAP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_WORDWRAP"), rt.make_int(wxTE_WORDWRAP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_CHARWRAP"), rt.make_int(wxTE_CHARWRAP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_DONTWRAP"), rt.make_int(wxTE_DONTWRAP)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_NOHIDESEL"), rt.make_int(wxTE_NOHIDESEL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_AUTO_URL"), rt.make_int(wxTE_AUTO_URL)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_PASSWORD"), rt.make_int(wxTE_PASSWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_PROCESS_ENTER"), rt.make_int(wxTE_PROCESS_ENTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_RICH"), rt.make_int(wxTE_RICH)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_CENTRE"), rt.make_int(wxTE_CENTRE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_RIGHT"), rt.make_int(wxTE_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_CENTER"), rt.make_int(wxTE_CENTER)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_LEFT"), rt.make_int(wxTE_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_PROCESS_TAB"), rt.make_int(wxTE_PROCESS_TAB)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_MULTILINE"), rt.make_int(wxTE_MULTILINE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_READONLY"), rt.make_int(wxTE_READONLY)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTE_NO_VSCROLL"), rt.make_int(wxTE_NO_VSCROLL)),
//  From "textdlg.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTextEntryDialogStyle"), rt.make_int(wxTextEntryDialogStyle)),
//  From "toolbook.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTBK_HORZ_LAYOUT"), rt.make_int(wxTBK_HORZ_LAYOUT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTBK_BUTTONBAR"), rt.make_int(wxTBK_BUTTONBAR)),
//  From "toplevel.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxDEFAULT_FRAME_STYLE"), rt.make_int(wxDEFAULT_FRAME_STYLE)),
//  From "treebase.h"
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTR_DEFAULT_STYLE"), rt.make_int(wxTR_DEFAULT_STYLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTR_FULL_ROW_HIGHLIGHT"), rt.make_int(wxTR_FULL_ROW_HIGHLIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTR_HIDE_ROOT"), rt.make_int(wxTR_HIDE_ROOT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTR_ROW_LINES"), rt.make_int(wxTR_ROW_LINES)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTR_EDIT_LABELS"), rt.make_int(wxTR_EDIT_LABELS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTR_HAS_VARIABLE_ROW_HEIGHT"), rt.make_int(wxTR_HAS_VARIABLE_ROW_HEIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTR_MULTIPLE"), rt.make_int(wxTR_MULTIPLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTR_SINGLE"), rt.make_int(wxTR_SINGLE)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTR_TWIST_BUTTONS"), rt.make_int(wxTR_TWIST_BUTTONS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTR_LINES_AT_ROOT"), rt.make_int(wxTR_LINES_AT_ROOT)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTR_NO_LINES"), rt.make_int(wxTR_NO_LINES)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTR_HAS_BUTTONS"), rt.make_int(wxTR_HAS_BUTTONS)),
    enif_make_tuple3(rt.env, rt.make_atom("define"), rt.make_atom("wxTR_NO_BUTTONS"), rt.make_int(wxTR_NO_BUTTONS)),
//  From class wxActivateEvent::Reason
    enif_make_tuple3(rt.env, rt.make_atom("Reason"), rt.make_atom("wxActivateEvent_Reason_Mouse"), rt.make_int(wxActivateEvent::Reason_Mouse)),
    enif_make_tuple3(rt.env, rt.make_atom("Reason"), rt.make_atom("wxActivateEvent_Reason_Unknown"), rt.make_int(wxActivateEvent::Reason_Unknown)),
//  From class wxAuiNotebook
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebook"), rt.make_atom("wxAuiNotebook_NO_IMAGE"), rt.make_int(wxAuiNotebook::NO_IMAGE)),
//  From class wxBookCtrlBase
    enif_make_tuple3(rt.env, rt.make_atom("wxBookCtrlBase"), rt.make_atom("wxBookCtrlBase_NO_IMAGE"), rt.make_int(wxBookCtrlBase::NO_IMAGE)),
//  From class wxChoicebook
    enif_make_tuple3(rt.env, rt.make_atom("wxChoicebook"), rt.make_atom("wxChoicebook_NO_IMAGE"), rt.make_int(wxChoicebook::NO_IMAGE)),
//  From class wxChoicebook
    enif_make_tuple3(rt.env, rt.make_atom("wxChoicebook"), rt.make_atom("wxChoicebook_NO_IMAGE"), rt.make_int(wxChoicebook::NO_IMAGE)),
//  From class wxColourData
    enif_make_tuple3(rt.env, rt.make_atom("wxColourData"), rt.make_atom("wxColourData_NUM_CUSTOM"), rt.make_int(wxColourData::NUM_CUSTOM)),
//  From class wxDataObject::Direction
    enif_make_tuple3(rt.env, rt.make_atom("Direction"), rt.make_atom("wxDataObject_Get"), rt.make_int(wxDataObject::Get)),
    enif_make_tuple3(rt.env, rt.make_atom("Direction"), rt.make_atom("wxDataObject_Set"), rt.make_int(wxDataObject::Set)),
    enif_make_tuple3(rt.env, rt.make_atom("Direction"), rt.make_atom("wxDataObject_Both"), rt.make_int(wxDataObject::Both)),
//  From class wxDateTime::Calendar
    enif_make_tuple3(rt.env, rt.make_atom("Calendar"), rt.make_atom("wxDateTime_Gregorian"), rt.make_int(wxDateTime::Gregorian)),
    enif_make_tuple3(rt.env, rt.make_atom("Calendar"), rt.make_atom("wxDateTime_Julian"), rt.make_int(wxDateTime::Julian)),
//  From class wxDateTime::Country
    enif_make_tuple3(rt.env, rt.make_atom("Country"), rt.make_atom("wxDateTime_Country_Unknown"), rt.make_int(wxDateTime::Country_Unknown)),
    enif_make_tuple3(rt.env, rt.make_atom("Country"), rt.make_atom("wxDateTime_Country_Default"), rt.make_int(wxDateTime::Country_Default)),
    enif_make_tuple3(rt.env, rt.make_atom("Country"), rt.make_atom("wxDateTime_Country_WesternEurope_Start"), rt.make_int(wxDateTime::Country_WesternEurope_Start)),
    enif_make_tuple3(rt.env, rt.make_atom("Country"), rt.make_atom("wxDateTime_Country_EEC"), rt.make_int(wxDateTime::Country_EEC)),
    enif_make_tuple3(rt.env, rt.make_atom("Country"), rt.make_atom("wxDateTime_France"), rt.make_int(wxDateTime::France)),
    enif_make_tuple3(rt.env, rt.make_atom("Country"), rt.make_atom("wxDateTime_Germany"), rt.make_int(wxDateTime::Germany)),
    enif_make_tuple3(rt.env, rt.make_atom("Country"), rt.make_atom("wxDateTime_UK"), rt.make_int(wxDateTime::UK)),
    enif_make_tuple3(rt.env, rt.make_atom("Country"), rt.make_atom("wxDateTime_Country_WesternEurope_End"), rt.make_int(wxDateTime::Country_WesternEurope_End)),
    enif_make_tuple3(rt.env, rt.make_atom("Country"), rt.make_atom("wxDateTime_Russia"), rt.make_int(wxDateTime::Russia)),
    enif_make_tuple3(rt.env, rt.make_atom("Country"), rt.make_atom("wxDateTime_USA"), rt.make_int(wxDateTime::USA)),
//  From class wxDateTime::Month
    enif_make_tuple3(rt.env, rt.make_atom("Month"), rt.make_atom("wxDateTime_Jan"), rt.make_int(wxDateTime::Jan)),
    enif_make_tuple3(rt.env, rt.make_atom("Month"), rt.make_atom("wxDateTime_Feb"), rt.make_int(wxDateTime::Feb)),
    enif_make_tuple3(rt.env, rt.make_atom("Month"), rt.make_atom("wxDateTime_Mar"), rt.make_int(wxDateTime::Mar)),
    enif_make_tuple3(rt.env, rt.make_atom("Month"), rt.make_atom("wxDateTime_Apr"), rt.make_int(wxDateTime::Apr)),
    enif_make_tuple3(rt.env, rt.make_atom("Month"), rt.make_atom("wxDateTime_May"), rt.make_int(wxDateTime::May)),
    enif_make_tuple3(rt.env, rt.make_atom("Month"), rt.make_atom("wxDateTime_Jun"), rt.make_int(wxDateTime::Jun)),
    enif_make_tuple3(rt.env, rt.make_atom("Month"), rt.make_atom("wxDateTime_Jul"), rt.make_int(wxDateTime::Jul)),
    enif_make_tuple3(rt.env, rt.make_atom("Month"), rt.make_atom("wxDateTime_Aug"), rt.make_int(wxDateTime::Aug)),
    enif_make_tuple3(rt.env, rt.make_atom("Month"), rt.make_atom("wxDateTime_Sep"), rt.make_int(wxDateTime::Sep)),
    enif_make_tuple3(rt.env, rt.make_atom("Month"), rt.make_atom("wxDateTime_Oct"), rt.make_int(wxDateTime::Oct)),
    enif_make_tuple3(rt.env, rt.make_atom("Month"), rt.make_atom("wxDateTime_Nov"), rt.make_int(wxDateTime::Nov)),
    enif_make_tuple3(rt.env, rt.make_atom("Month"), rt.make_atom("wxDateTime_Dec"), rt.make_int(wxDateTime::Dec)),
    enif_make_tuple3(rt.env, rt.make_atom("Month"), rt.make_atom("wxDateTime_Inv_Month"), rt.make_int(wxDateTime::Inv_Month)),
//  From class wxDateTime::NameFlags
    enif_make_tuple3(rt.env, rt.make_atom("NameFlags"), rt.make_atom("wxDateTime_Name_Full"), rt.make_int(wxDateTime::Name_Full)),
    enif_make_tuple3(rt.env, rt.make_atom("NameFlags"), rt.make_atom("wxDateTime_Name_Abbr"), rt.make_int(wxDateTime::Name_Abbr)),
//  From class wxDateTime::TZ
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_Local"), rt.make_int(wxDateTime::Local)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT_12"), rt.make_int(wxDateTime::GMT_12)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT_11"), rt.make_int(wxDateTime::GMT_11)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT_10"), rt.make_int(wxDateTime::GMT_10)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT_9"), rt.make_int(wxDateTime::GMT_9)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT_8"), rt.make_int(wxDateTime::GMT_8)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT_7"), rt.make_int(wxDateTime::GMT_7)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT_6"), rt.make_int(wxDateTime::GMT_6)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT_5"), rt.make_int(wxDateTime::GMT_5)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT_4"), rt.make_int(wxDateTime::GMT_4)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT_3"), rt.make_int(wxDateTime::GMT_3)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT_2"), rt.make_int(wxDateTime::GMT_2)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT_1"), rt.make_int(wxDateTime::GMT_1)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT0"), rt.make_int(wxDateTime::GMT0)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT1"), rt.make_int(wxDateTime::GMT1)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT2"), rt.make_int(wxDateTime::GMT2)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT3"), rt.make_int(wxDateTime::GMT3)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT4"), rt.make_int(wxDateTime::GMT4)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT5"), rt.make_int(wxDateTime::GMT5)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT6"), rt.make_int(wxDateTime::GMT6)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT7"), rt.make_int(wxDateTime::GMT7)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT8"), rt.make_int(wxDateTime::GMT8)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT9"), rt.make_int(wxDateTime::GMT9)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT10"), rt.make_int(wxDateTime::GMT10)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT11"), rt.make_int(wxDateTime::GMT11)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT12"), rt.make_int(wxDateTime::GMT12)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_GMT13"), rt.make_int(wxDateTime::GMT13)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_WET"), rt.make_int(wxDateTime::WET)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_WEST"), rt.make_int(wxDateTime::WEST)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_CET"), rt.make_int(wxDateTime::CET)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_CEST"), rt.make_int(wxDateTime::CEST)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_EET"), rt.make_int(wxDateTime::EET)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_EEST"), rt.make_int(wxDateTime::EEST)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_MSK"), rt.make_int(wxDateTime::MSK)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_MSD"), rt.make_int(wxDateTime::MSD)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_AST"), rt.make_int(wxDateTime::AST)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_ADT"), rt.make_int(wxDateTime::ADT)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_EST"), rt.make_int(wxDateTime::EST)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_EDT"), rt.make_int(wxDateTime::EDT)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_CST"), rt.make_int(wxDateTime::CST)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_CDT"), rt.make_int(wxDateTime::CDT)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_MST"), rt.make_int(wxDateTime::MST)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_MDT"), rt.make_int(wxDateTime::MDT)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_PST"), rt.make_int(wxDateTime::PST)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_PDT"), rt.make_int(wxDateTime::PDT)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_HST"), rt.make_int(wxDateTime::HST)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_AKST"), rt.make_int(wxDateTime::AKST)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_AKDT"), rt.make_int(wxDateTime::AKDT)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_A_WST"), rt.make_int(wxDateTime::A_WST)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_A_CST"), rt.make_int(wxDateTime::A_CST)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_A_EST"), rt.make_int(wxDateTime::A_EST)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_A_ESST"), rt.make_int(wxDateTime::A_ESST)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_NZST"), rt.make_int(wxDateTime::NZST)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_NZDT"), rt.make_int(wxDateTime::NZDT)),
    enif_make_tuple3(rt.env, rt.make_atom("TZ"), rt.make_atom("wxDateTime_UTC"), rt.make_int(wxDateTime::UTC)),
//  From class wxDateTime::WeekDay
    enif_make_tuple3(rt.env, rt.make_atom("WeekDay"), rt.make_atom("wxDateTime_Sun"), rt.make_int(wxDateTime::Sun)),
    enif_make_tuple3(rt.env, rt.make_atom("WeekDay"), rt.make_atom("wxDateTime_Mon"), rt.make_int(wxDateTime::Mon)),
    enif_make_tuple3(rt.env, rt.make_atom("WeekDay"), rt.make_atom("wxDateTime_Tue"), rt.make_int(wxDateTime::Tue)),
    enif_make_tuple3(rt.env, rt.make_atom("WeekDay"), rt.make_atom("wxDateTime_Wed"), rt.make_int(wxDateTime::Wed)),
    enif_make_tuple3(rt.env, rt.make_atom("WeekDay"), rt.make_atom("wxDateTime_Thu"), rt.make_int(wxDateTime::Thu)),
    enif_make_tuple3(rt.env, rt.make_atom("WeekDay"), rt.make_atom("wxDateTime_Fri"), rt.make_int(wxDateTime::Fri)),
    enif_make_tuple3(rt.env, rt.make_atom("WeekDay"), rt.make_atom("wxDateTime_Sat"), rt.make_int(wxDateTime::Sat)),
    enif_make_tuple3(rt.env, rt.make_atom("WeekDay"), rt.make_atom("wxDateTime_Inv_WeekDay"), rt.make_int(wxDateTime::Inv_WeekDay)),
//  From class wxDateTime::WeekFlags
    enif_make_tuple3(rt.env, rt.make_atom("WeekFlags"), rt.make_atom("wxDateTime_Default_First"), rt.make_int(wxDateTime::Default_First)),
    enif_make_tuple3(rt.env, rt.make_atom("WeekFlags"), rt.make_atom("wxDateTime_Monday_First"), rt.make_int(wxDateTime::Monday_First)),
    enif_make_tuple3(rt.env, rt.make_atom("WeekFlags"), rt.make_atom("wxDateTime_Sunday_First"), rt.make_int(wxDateTime::Sunday_First)),
//  From class wxDateTime::Year
    enif_make_tuple3(rt.env, rt.make_atom("Year"), rt.make_atom("wxDateTime_Inv_Year"), rt.make_int(wxDateTime::Inv_Year)),
//  From class wxGrid::CellSpan
    enif_make_tuple3(rt.env, rt.make_atom("CellSpan"), rt.make_atom("wxGrid_CellSpan_Inside"), rt.make_int(wxGrid::CellSpan_Inside)),
    enif_make_tuple3(rt.env, rt.make_atom("CellSpan"), rt.make_atom("wxGrid_CellSpan_None"), rt.make_int(wxGrid::CellSpan_None)),
    enif_make_tuple3(rt.env, rt.make_atom("CellSpan"), rt.make_atom("wxGrid_CellSpan_Main"), rt.make_int(wxGrid::CellSpan_Main)),
//  From class wxGrid::TabBehaviour
    enif_make_tuple3(rt.env, rt.make_atom("TabBehaviour"), rt.make_atom("wxGrid_Tab_Stop"), rt.make_int(wxGrid::Tab_Stop)),
    enif_make_tuple3(rt.env, rt.make_atom("TabBehaviour"), rt.make_atom("wxGrid_Tab_Wrap"), rt.make_int(wxGrid::Tab_Wrap)),
    enif_make_tuple3(rt.env, rt.make_atom("TabBehaviour"), rt.make_atom("wxGrid_Tab_Leave"), rt.make_int(wxGrid::Tab_Leave)),
//  From class wxGrid::wxGridSelectionModes
    enif_make_tuple3(rt.env, rt.make_atom("wxGridSelectionModes"), rt.make_atom("wxGrid_wxGridSelectCells"), rt.make_int(wxGrid::wxGridSelectCells)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridSelectionModes"), rt.make_atom("wxGrid_wxGridSelectRows"), rt.make_int(wxGrid::wxGridSelectRows)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridSelectionModes"), rt.make_atom("wxGrid_wxGridSelectColumns"), rt.make_int(wxGrid::wxGridSelectColumns)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridSelectionModes"), rt.make_atom("wxGrid_wxGridSelectRowsOrColumns"), rt.make_int(wxGrid::wxGridSelectRowsOrColumns)),
//  From class wxGridCellAttr::wxAttrKind
    enif_make_tuple3(rt.env, rt.make_atom("wxAttrKind"), rt.make_atom("wxGridCellAttr_Any"), rt.make_int(wxGridCellAttr::Any)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAttrKind"), rt.make_atom("wxGridCellAttr_Default"), rt.make_int(wxGridCellAttr::Default)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAttrKind"), rt.make_atom("wxGridCellAttr_Cell"), rt.make_int(wxGridCellAttr::Cell)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAttrKind"), rt.make_atom("wxGridCellAttr_Row"), rt.make_int(wxGridCellAttr::Row)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAttrKind"), rt.make_atom("wxGridCellAttr_Col"), rt.make_int(wxGridCellAttr::Col)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAttrKind"), rt.make_atom("wxGridCellAttr_Merged"), rt.make_int(wxGridCellAttr::Merged)),
//  From class wxHelpEvent::Origin
    enif_make_tuple3(rt.env, rt.make_atom("Origin"), rt.make_atom("wxHelpEvent_Origin_Unknown"), rt.make_int(wxHelpEvent::Origin_Unknown)),
    enif_make_tuple3(rt.env, rt.make_atom("Origin"), rt.make_atom("wxHelpEvent_Origin_Keyboard"), rt.make_int(wxHelpEvent::Origin_Keyboard)),
    enif_make_tuple3(rt.env, rt.make_atom("Origin"), rt.make_atom("wxHelpEvent_Origin_HelpButton"), rt.make_int(wxHelpEvent::Origin_HelpButton)),
//  From class wxHtmlEasyPrinting::PromptMode
#if wxCHECK_VERSION(3,1,2)
    enif_make_tuple3(rt.env, rt.make_atom("PromptMode"), rt.make_atom("wxHtmlEasyPrinting_Prompt_Never"), rt.make_int(wxHtmlEasyPrinting::Prompt_Never)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("PromptMode"), rt.make_atom("wxHtmlEasyPrinting_Prompt_Never"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,2)
    enif_make_tuple3(rt.env, rt.make_atom("PromptMode"), rt.make_atom("wxHtmlEasyPrinting_Prompt_Once"), rt.make_int(wxHtmlEasyPrinting::Prompt_Once)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("PromptMode"), rt.make_atom("wxHtmlEasyPrinting_Prompt_Once"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,2)
    enif_make_tuple3(rt.env, rt.make_atom("PromptMode"), rt.make_atom("wxHtmlEasyPrinting_Prompt_Always"), rt.make_int(wxHtmlEasyPrinting::Prompt_Always)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("PromptMode"), rt.make_atom("wxHtmlEasyPrinting_Prompt_Always"), WXE_ATOM_undefined),
#endif
//  From class wxIconBundle
    enif_make_tuple3(rt.env, rt.make_atom("wxIconBundle"), rt.make_atom("wxIconBundle_FALLBACK_NONE"), rt.make_int(wxIconBundle::FALLBACK_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxIconBundle"), rt.make_atom("wxIconBundle_FALLBACK_SYSTEM"), rt.make_int(wxIconBundle::FALLBACK_SYSTEM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxIconBundle"), rt.make_atom("wxIconBundle_FALLBACK_NEAREST_LARGER"), rt.make_int(wxIconBundle::FALLBACK_NEAREST_LARGER)),
//  From class wxListbook
    enif_make_tuple3(rt.env, rt.make_atom("wxListbook"), rt.make_atom("wxListbook_NO_IMAGE"), rt.make_int(wxListbook::NO_IMAGE)),
//  From class wxListbook
    enif_make_tuple3(rt.env, rt.make_atom("wxListbook"), rt.make_atom("wxListbook_NO_IMAGE"), rt.make_int(wxListbook::NO_IMAGE)),
//  From class wxNavigationKeyEvent::wxNavigationKeyEventFlags
    enif_make_tuple3(rt.env, rt.make_atom("wxNavigationKeyEventFlags"), rt.make_atom("wxNavigationKeyEvent_IsBackward"), rt.make_int(wxNavigationKeyEvent::IsBackward)),
    enif_make_tuple3(rt.env, rt.make_atom("wxNavigationKeyEventFlags"), rt.make_atom("wxNavigationKeyEvent_IsForward"), rt.make_int(wxNavigationKeyEvent::IsForward)),
    enif_make_tuple3(rt.env, rt.make_atom("wxNavigationKeyEventFlags"), rt.make_atom("wxNavigationKeyEvent_WinChange"), rt.make_int(wxNavigationKeyEvent::WinChange)),
    enif_make_tuple3(rt.env, rt.make_atom("wxNavigationKeyEventFlags"), rt.make_atom("wxNavigationKeyEvent_FromTab"), rt.make_int(wxNavigationKeyEvent::FromTab)),
//  From class wxNotebook
    enif_make_tuple3(rt.env, rt.make_atom("wxNotebook"), rt.make_atom("wxNotebook_NO_IMAGE"), rt.make_int(wxNotebook::NO_IMAGE)),
//  From class wxNotebook
    enif_make_tuple3(rt.env, rt.make_atom("wxNotebook"), rt.make_atom("wxNotebook_NO_IMAGE"), rt.make_int(wxNotebook::NO_IMAGE)),
//  From class wxStaticBitmap::ScaleMode
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("ScaleMode"), rt.make_atom("wxStaticBitmap_Scale_None"), rt.make_int(wxStaticBitmap::Scale_None)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("ScaleMode"), rt.make_atom("wxStaticBitmap_Scale_None"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("ScaleMode"), rt.make_atom("wxStaticBitmap_Scale_Fill"), rt.make_int(wxStaticBitmap::Scale_Fill)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("ScaleMode"), rt.make_atom("wxStaticBitmap_Scale_Fill"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("ScaleMode"), rt.make_atom("wxStaticBitmap_Scale_AspectFit"), rt.make_int(wxStaticBitmap::Scale_AspectFit)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("ScaleMode"), rt.make_atom("wxStaticBitmap_Scale_AspectFit"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("ScaleMode"), rt.make_atom("wxStaticBitmap_Scale_AspectFill"), rt.make_int(wxStaticBitmap::Scale_AspectFill)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("ScaleMode"), rt.make_atom("wxStaticBitmap_Scale_AspectFill"), WXE_ATOM_undefined),
#endif
//  From class wxToolbook
    enif_make_tuple3(rt.env, rt.make_atom("wxToolbook"), rt.make_atom("wxToolbook_NO_IMAGE"), rt.make_int(wxToolbook::NO_IMAGE)),
//  From class wxToolbook
    enif_make_tuple3(rt.env, rt.make_atom("wxToolbook"), rt.make_atom("wxToolbook_NO_IMAGE"), rt.make_int(wxToolbook::NO_IMAGE)),
//  From class wxTreebook
    enif_make_tuple3(rt.env, rt.make_atom("wxTreebook"), rt.make_atom("wxTreebook_NO_IMAGE"), rt.make_int(wxTreebook::NO_IMAGE)),
//  From class wxTreebook
    enif_make_tuple3(rt.env, rt.make_atom("wxTreebook"), rt.make_atom("wxTreebook_NO_IMAGE"), rt.make_int(wxTreebook::NO_IMAGE)),
//  From "datectrl.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxDP"), rt.make_atom("wxDP_DEFAULT"), rt.make_int(wxDP_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDP"), rt.make_atom("wxDP_SPIN"), rt.make_int(wxDP_SPIN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDP"), rt.make_atom("wxDP_DROPDOWN"), rt.make_int(wxDP_DROPDOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDP"), rt.make_atom("wxDP_SHOWCENTURY"), rt.make_int(wxDP_SHOWCENTURY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDP"), rt.make_atom("wxDP_ALLOWNONE"), rt.make_int(wxDP_ALLOWNONE)),
//  From "dirctrl.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxDIRCTRL"), rt.make_atom("wxDIRCTRL_DIR_ONLY"), rt.make_int(wxDIRCTRL_DIR_ONLY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDIRCTRL"), rt.make_atom("wxDIRCTRL_SELECT_FIRST"), rt.make_int(wxDIRCTRL_SELECT_FIRST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDIRCTRL"), rt.make_atom("wxDIRCTRL_SHOW_FILTERS"), rt.make_int(wxDIRCTRL_SHOW_FILTERS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDIRCTRL"), rt.make_atom("wxDIRCTRL_3D_INTERNAL"), rt.make_int(wxDIRCTRL_3D_INTERNAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDIRCTRL"), rt.make_atom("wxDIRCTRL_EDIT_LABELS"), rt.make_int(wxDIRCTRL_EDIT_LABELS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDIRCTRL"), rt.make_atom("wxDIRCTRL_MULTIPLE"), rt.make_int(wxDIRCTRL_MULTIPLE)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("wxDIRCTRL"), rt.make_atom("wxDIRCTRL_DEFAULT_STYLE"), rt.make_int(wxDIRCTRL_DEFAULT_STYLE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxDIRCTRL"), rt.make_atom("wxDIRCTRL_DEFAULT_STYLE"), WXE_ATOM_undefined),
#endif
//  From "dnd.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxDrag"), rt.make_atom("wxDrag_CopyOnly"), rt.make_int(wxDrag_CopyOnly)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDrag"), rt.make_atom("wxDrag_AllowMove"), rt.make_int(wxDrag_AllowMove)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDrag"), rt.make_atom("wxDrag_DefaultMove"), rt.make_int(wxDrag_DefaultMove)),
//  From "event.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxJOYSTICK"), rt.make_atom("wxJOYSTICK1"), rt.make_int(wxJOYSTICK1)),
    enif_make_tuple3(rt.env, rt.make_atom("wxJOYSTICK"), rt.make_atom("wxJOYSTICK2"), rt.make_int(wxJOYSTICK2)),
//  From "event.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxJOY"), rt.make_atom("wxJOY_BUTTON_ANY"), rt.make_int(wxJOY_BUTTON_ANY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxJOY"), rt.make_atom("wxJOY_BUTTON1"), rt.make_int(wxJOY_BUTTON1)),
    enif_make_tuple3(rt.env, rt.make_atom("wxJOY"), rt.make_atom("wxJOY_BUTTON2"), rt.make_int(wxJOY_BUTTON2)),
    enif_make_tuple3(rt.env, rt.make_atom("wxJOY"), rt.make_atom("wxJOY_BUTTON3"), rt.make_int(wxJOY_BUTTON3)),
    enif_make_tuple3(rt.env, rt.make_atom("wxJOY"), rt.make_atom("wxJOY_BUTTON4"), rt.make_int(wxJOY_BUTTON4)),
//  From "filedlg.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxFD"), rt.make_atom("wxFD_OPEN"), rt.make_int(wxFD_OPEN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFD"), rt.make_atom("wxFD_SAVE"), rt.make_int(wxFD_SAVE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFD"), rt.make_atom("wxFD_OVERWRITE_PROMPT"), rt.make_int(wxFD_OVERWRITE_PROMPT)),
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxFD"), rt.make_atom("wxFD_NO_FOLLOW"), rt.make_int(wxFD_NO_FOLLOW)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxFD"), rt.make_atom("wxFD_NO_FOLLOW"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("wxFD"), rt.make_atom("wxFD_FILE_MUST_EXIST"), rt.make_int(wxFD_FILE_MUST_EXIST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFD"), rt.make_atom("wxFD_CHANGE_DIR"), rt.make_int(wxFD_CHANGE_DIR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFD"), rt.make_atom("wxFD_PREVIEW"), rt.make_int(wxFD_PREVIEW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFD"), rt.make_atom("wxFD_MULTIPLE"), rt.make_int(wxFD_MULTIPLE)),
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxFD"), rt.make_atom("wxFD_SHOW_HIDDEN"), rt.make_int(wxFD_SHOW_HIDDEN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxFD"), rt.make_atom("wxFD_SHOW_HIDDEN"), WXE_ATOM_undefined),
#endif
//  From "htmprint.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxPAGE"), rt.make_atom("wxPAGE_ODD"), rt.make_int(wxPAGE_ODD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPAGE"), rt.make_atom("wxPAGE_EVEN"), rt.make_int(wxPAGE_EVEN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPAGE"), rt.make_atom("wxPAGE_ALL"), rt.make_int(wxPAGE_ALL)),
//  From "bookctrl.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxBK"), rt.make_atom("wxBK_HITTEST_NOWHERE"), rt.make_int(wxBK_HITTEST_NOWHERE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBK"), rt.make_atom("wxBK_HITTEST_ONICON"), rt.make_int(wxBK_HITTEST_ONICON)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBK"), rt.make_atom("wxBK_HITTEST_ONLABEL"), rt.make_int(wxBK_HITTEST_ONLABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBK"), rt.make_atom("wxBK_HITTEST_ONITEM"), rt.make_int(wxBK_HITTEST_ONITEM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBK"), rt.make_atom("wxBK_HITTEST_ONPAGE"), rt.make_int(wxBK_HITTEST_ONPAGE)),
//  From "image.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxBMP"), rt.make_atom("wxBMP_24BPP"), rt.make_int(wxBMP_24BPP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBMP"), rt.make_atom("wxBMP_8BPP"), rt.make_int(wxBMP_8BPP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBMP"), rt.make_atom("wxBMP_8BPP_GREY"), rt.make_int(wxBMP_8BPP_GREY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBMP"), rt.make_atom("wxBMP_8BPP_GRAY"), rt.make_int(wxBMP_8BPP_GRAY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBMP"), rt.make_atom("wxBMP_8BPP_RED"), rt.make_int(wxBMP_8BPP_RED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBMP"), rt.make_atom("wxBMP_8BPP_PALETTE"), rt.make_int(wxBMP_8BPP_PALETTE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBMP"), rt.make_atom("wxBMP_4BPP"), rt.make_int(wxBMP_4BPP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBMP"), rt.make_atom("wxBMP_1BPP"), rt.make_int(wxBMP_1BPP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBMP"), rt.make_atom("wxBMP_1BPP_BW"), rt.make_int(wxBMP_1BPP_BW)),
//  From "notebook.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxNB"), rt.make_atom("wxNB_HITTEST_NOWHERE"), rt.make_int(wxNB_HITTEST_NOWHERE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxNB"), rt.make_atom("wxNB_HITTEST_ONICON"), rt.make_int(wxNB_HITTEST_ONICON)),
    enif_make_tuple3(rt.env, rt.make_atom("wxNB"), rt.make_atom("wxNB_HITTEST_ONLABEL"), rt.make_int(wxNB_HITTEST_ONLABEL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxNB"), rt.make_atom("wxNB_HITTEST_ONITEM"), rt.make_int(wxNB_HITTEST_ONITEM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxNB"), rt.make_atom("wxNB_HITTEST_ONPAGE"), rt.make_int(wxNB_HITTEST_ONPAGE)),
//  From "splitter.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxSPLIT"), rt.make_atom("wxSPLIT_DRAG_NONE"), rt.make_int(wxSPLIT_DRAG_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSPLIT"), rt.make_atom("wxSPLIT_DRAG_DRAGGING"), rt.make_int(wxSPLIT_DRAG_DRAGGING)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSPLIT"), rt.make_atom("wxSPLIT_DRAG_LEFT_DOWN"), rt.make_int(wxSPLIT_DRAG_LEFT_DOWN)),
//  From "toolbar.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_HORIZONTAL"), rt.make_int(wxTB_HORIZONTAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_TOP"), rt.make_int(wxTB_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_VERTICAL"), rt.make_int(wxTB_VERTICAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_LEFT"), rt.make_int(wxTB_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_FLAT"), rt.make_int(wxTB_FLAT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_DOCKABLE"), rt.make_int(wxTB_DOCKABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_NOICONS"), rt.make_int(wxTB_NOICONS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_TEXT"), rt.make_int(wxTB_TEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_NODIVIDER"), rt.make_int(wxTB_NODIVIDER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_NOALIGN"), rt.make_int(wxTB_NOALIGN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_HORZ_LAYOUT"), rt.make_int(wxTB_HORZ_LAYOUT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_HORZ_TEXT"), rt.make_int(wxTB_HORZ_TEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_NO_TOOLTIPS"), rt.make_int(wxTB_NO_TOOLTIPS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_BOTTOM"), rt.make_int(wxTB_BOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_RIGHT"), rt.make_int(wxTB_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTB"), rt.make_atom("wxTB_DEFAULT_STYLE"), rt.make_int(wxTB_DEFAULT_STYLE)),
//  From "toplevel.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxUSER"), rt.make_atom("wxUSER_ATTENTION_INFO"), rt.make_int(wxUSER_ATTENTION_INFO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxUSER"), rt.make_atom("wxUSER_ATTENTION_ERROR"), rt.make_int(wxUSER_ATTENTION_ERROR)),
//  From "toplevel.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxFULLSCREEN"), rt.make_atom("wxFULLSCREEN_NOMENUBAR"), rt.make_int(wxFULLSCREEN_NOMENUBAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFULLSCREEN"), rt.make_atom("wxFULLSCREEN_NOTOOLBAR"), rt.make_int(wxFULLSCREEN_NOTOOLBAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFULLSCREEN"), rt.make_atom("wxFULLSCREEN_NOSTATUSBAR"), rt.make_int(wxFULLSCREEN_NOSTATUSBAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFULLSCREEN"), rt.make_atom("wxFULLSCREEN_NOBORDER"), rt.make_int(wxFULLSCREEN_NOBORDER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFULLSCREEN"), rt.make_atom("wxFULLSCREEN_NOCAPTION"), rt.make_int(wxFULLSCREEN_NOCAPTION)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFULLSCREEN"), rt.make_atom("wxFULLSCREEN_ALL"), rt.make_int(wxFULLSCREEN_ALL)),
//  From "utils.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxStrip"), rt.make_atom("wxStrip_Mnemonics"), rt.make_int(wxStrip_Mnemonics)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStrip"), rt.make_atom("wxStrip_Accel"), rt.make_int(wxStrip_Accel)),
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxStrip"), rt.make_atom("wxStrip_CJKMnemonics"), rt.make_int(wxStrip_CJKMnemonics)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxStrip"), rt.make_atom("wxStrip_CJKMnemonics"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("wxStrip"), rt.make_atom("wxStrip_All"), rt.make_int(wxStrip_All)),
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxStrip"), rt.make_atom("wxStrip_Menu"), rt.make_int(wxStrip_Menu)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxStrip"), rt.make_atom("wxStrip_Menu"), WXE_ATOM_undefined),
#endif
//  From "utils.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxEXEC"), rt.make_atom("wxEXEC_ASYNC"), rt.make_int(wxEXEC_ASYNC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEXEC"), rt.make_atom("wxEXEC_SYNC"), rt.make_int(wxEXEC_SYNC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEXEC"), rt.make_atom("wxEXEC_SHOW_CONSOLE"), rt.make_int(wxEXEC_SHOW_CONSOLE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEXEC"), rt.make_atom("wxEXEC_MAKE_GROUP_LEADER"), rt.make_int(wxEXEC_MAKE_GROUP_LEADER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEXEC"), rt.make_atom("wxEXEC_NODISABLE"), rt.make_int(wxEXEC_NODISABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEXEC"), rt.make_atom("wxEXEC_NOEVENTS"), rt.make_int(wxEXEC_NOEVENTS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEXEC"), rt.make_atom("wxEXEC_HIDE_CONSOLE"), rt.make_int(wxEXEC_HIDE_CONSOLE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEXEC"), rt.make_atom("wxEXEC_BLOCK"), rt.make_int(wxEXEC_BLOCK)),
//  From "calctrl.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxCAL"), rt.make_atom("wxCAL_SUNDAY_FIRST"), rt.make_int(wxCAL_SUNDAY_FIRST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCAL"), rt.make_atom("wxCAL_MONDAY_FIRST"), rt.make_int(wxCAL_MONDAY_FIRST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCAL"), rt.make_atom("wxCAL_SHOW_HOLIDAYS"), rt.make_int(wxCAL_SHOW_HOLIDAYS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCAL"), rt.make_atom("wxCAL_NO_YEAR_CHANGE"), rt.make_int(wxCAL_NO_YEAR_CHANGE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCAL"), rt.make_atom("wxCAL_NO_MONTH_CHANGE"), rt.make_int(wxCAL_NO_MONTH_CHANGE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCAL"), rt.make_atom("wxCAL_SEQUENTIAL_MONTH_SELECTION"), rt.make_int(wxCAL_SEQUENTIAL_MONTH_SELECTION)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCAL"), rt.make_atom("wxCAL_SHOW_SURROUNDING_WEEKS"), rt.make_int(wxCAL_SHOW_SURROUNDING_WEEKS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCAL"), rt.make_atom("wxCAL_SHOW_WEEK_NUMBERS"), rt.make_int(wxCAL_SHOW_WEEK_NUMBERS)),
//  From "window.h"
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_NONE"), rt.make_int(wxTOUCH_NONE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_NONE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_VERTICAL_PAN_GESTURE"), rt.make_int(wxTOUCH_VERTICAL_PAN_GESTURE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_VERTICAL_PAN_GESTURE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_HORIZONTAL_PAN_GESTURE"), rt.make_int(wxTOUCH_HORIZONTAL_PAN_GESTURE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_HORIZONTAL_PAN_GESTURE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_PAN_GESTURES"), rt.make_int(wxTOUCH_PAN_GESTURES)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_PAN_GESTURES"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_ZOOM_GESTURE"), rt.make_int(wxTOUCH_ZOOM_GESTURE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_ZOOM_GESTURE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_ROTATE_GESTURE"), rt.make_int(wxTOUCH_ROTATE_GESTURE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_ROTATE_GESTURE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_PRESS_GESTURES"), rt.make_int(wxTOUCH_PRESS_GESTURES)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_PRESS_GESTURES"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_ALL_GESTURES"), rt.make_int(wxTOUCH_ALL_GESTURES)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTOUCH"), rt.make_atom("wxTOUCH_ALL_GESTURES"), WXE_ATOM_undefined),
#endif
//  From "window.h"
    enif_make_tuple3(rt.env, rt.make_atom("wxSEND"), rt.make_atom("wxSEND_EVENT_POST"), rt.make_int(wxSEND_EVENT_POST)),
//  From "accel.h": wxAcceleratorEntryFlags
    enif_make_tuple3(rt.env, rt.make_atom("wxAcceleratorEntryFlags"), rt.make_atom("wxACCEL_NORMAL"), rt.make_int(wxACCEL_NORMAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAcceleratorEntryFlags"), rt.make_atom("wxACCEL_ALT"), rt.make_int(wxACCEL_ALT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAcceleratorEntryFlags"), rt.make_atom("wxACCEL_CTRL"), rt.make_int(wxACCEL_CTRL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAcceleratorEntryFlags"), rt.make_atom("wxACCEL_SHIFT"), rt.make_int(wxACCEL_SHIFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAcceleratorEntryFlags"), rt.make_atom("wxACCEL_RAW_CTRL"), rt.make_int(wxACCEL_RAW_CTRL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAcceleratorEntryFlags"), rt.make_atom("wxACCEL_CMD"), rt.make_int(wxACCEL_CMD)),
//  From "defs.h": wxAlignment
    enif_make_tuple3(rt.env, rt.make_atom("wxAlignment"), rt.make_atom("wxALIGN_INVALID"), rt.make_int(wxALIGN_INVALID)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAlignment"), rt.make_atom("wxALIGN_NOT"), rt.make_int(wxALIGN_NOT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAlignment"), rt.make_atom("wxALIGN_CENTER_HORIZONTAL"), rt.make_int(wxALIGN_CENTER_HORIZONTAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAlignment"), rt.make_atom("wxALIGN_CENTRE_HORIZONTAL"), rt.make_int(wxALIGN_CENTRE_HORIZONTAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAlignment"), rt.make_atom("wxALIGN_LEFT"), rt.make_int(wxALIGN_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAlignment"), rt.make_atom("wxALIGN_TOP"), rt.make_int(wxALIGN_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAlignment"), rt.make_atom("wxALIGN_RIGHT"), rt.make_int(wxALIGN_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAlignment"), rt.make_atom("wxALIGN_BOTTOM"), rt.make_int(wxALIGN_BOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAlignment"), rt.make_atom("wxALIGN_CENTER_VERTICAL"), rt.make_int(wxALIGN_CENTER_VERTICAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAlignment"), rt.make_atom("wxALIGN_CENTRE_VERTICAL"), rt.make_int(wxALIGN_CENTRE_VERTICAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAlignment"), rt.make_atom("wxALIGN_CENTER"), rt.make_int(wxALIGN_CENTER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAlignment"), rt.make_atom("wxALIGN_CENTRE"), rt.make_int(wxALIGN_CENTRE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAlignment"), rt.make_atom("wxALIGN_MASK"), rt.make_int(wxALIGN_MASK)),
//  From "graphics.h": wxAntialiasMode
    enif_make_tuple3(rt.env, rt.make_atom("wxAntialiasMode"), rt.make_atom("wxANTIALIAS_NONE"), rt.make_int(wxANTIALIAS_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAntialiasMode"), rt.make_atom("wxANTIALIAS_DEFAULT"), rt.make_int(wxANTIALIAS_DEFAULT)),
//  From "dockart.h": wxAuiButtonId
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiButtonId"), rt.make_atom("wxAUI_BUTTON_CLOSE"), rt.make_int(wxAUI_BUTTON_CLOSE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiButtonId"), rt.make_atom("wxAUI_BUTTON_MAXIMIZE_RESTORE"), rt.make_int(wxAUI_BUTTON_MAXIMIZE_RESTORE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiButtonId"), rt.make_atom("wxAUI_BUTTON_MINIMIZE"), rt.make_int(wxAUI_BUTTON_MINIMIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiButtonId"), rt.make_atom("wxAUI_BUTTON_PIN"), rt.make_int(wxAUI_BUTTON_PIN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiButtonId"), rt.make_atom("wxAUI_BUTTON_OPTIONS"), rt.make_int(wxAUI_BUTTON_OPTIONS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiButtonId"), rt.make_atom("wxAUI_BUTTON_WINDOWLIST"), rt.make_int(wxAUI_BUTTON_WINDOWLIST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiButtonId"), rt.make_atom("wxAUI_BUTTON_LEFT"), rt.make_int(wxAUI_BUTTON_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiButtonId"), rt.make_atom("wxAUI_BUTTON_RIGHT"), rt.make_int(wxAUI_BUTTON_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiButtonId"), rt.make_atom("wxAUI_BUTTON_UP"), rt.make_int(wxAUI_BUTTON_UP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiButtonId"), rt.make_atom("wxAUI_BUTTON_DOWN"), rt.make_int(wxAUI_BUTTON_DOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiButtonId"), rt.make_atom("wxAUI_BUTTON_CUSTOM1"), rt.make_int(wxAUI_BUTTON_CUSTOM1)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiButtonId"), rt.make_atom("wxAUI_BUTTON_CUSTOM2"), rt.make_int(wxAUI_BUTTON_CUSTOM2)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiButtonId"), rt.make_atom("wxAUI_BUTTON_CUSTOM3"), rt.make_int(wxAUI_BUTTON_CUSTOM3)),
//  From "framemanager.h": wxAuiInsertLevel
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiInsertLevel"), rt.make_atom("wxAUI_INSERT_PANE"), rt.make_int(wxAUI_INSERT_PANE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiInsertLevel"), rt.make_atom("wxAUI_INSERT_ROW"), rt.make_int(wxAUI_INSERT_ROW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiInsertLevel"), rt.make_atom("wxAUI_INSERT_DOCK"), rt.make_int(wxAUI_INSERT_DOCK)),
//  From "framemanager.h": wxAuiManagerDock
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerDock"), rt.make_atom("wxAUI_DOCK_NONE"), rt.make_int(wxAUI_DOCK_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerDock"), rt.make_atom("wxAUI_DOCK_TOP"), rt.make_int(wxAUI_DOCK_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerDock"), rt.make_atom("wxAUI_DOCK_RIGHT"), rt.make_int(wxAUI_DOCK_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerDock"), rt.make_atom("wxAUI_DOCK_BOTTOM"), rt.make_int(wxAUI_DOCK_BOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerDock"), rt.make_atom("wxAUI_DOCK_LEFT"), rt.make_int(wxAUI_DOCK_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerDock"), rt.make_atom("wxAUI_DOCK_CENTER"), rt.make_int(wxAUI_DOCK_CENTER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerDock"), rt.make_atom("wxAUI_DOCK_CENTRE"), rt.make_int(wxAUI_DOCK_CENTRE)),
//  From "framemanager.h": wxAuiManagerOption
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerOption"), rt.make_atom("wxAUI_MGR_ALLOW_FLOATING"), rt.make_int(wxAUI_MGR_ALLOW_FLOATING)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerOption"), rt.make_atom("wxAUI_MGR_ALLOW_ACTIVE_PANE"), rt.make_int(wxAUI_MGR_ALLOW_ACTIVE_PANE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerOption"), rt.make_atom("wxAUI_MGR_TRANSPARENT_DRAG"), rt.make_int(wxAUI_MGR_TRANSPARENT_DRAG)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerOption"), rt.make_atom("wxAUI_MGR_TRANSPARENT_HINT"), rt.make_int(wxAUI_MGR_TRANSPARENT_HINT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerOption"), rt.make_atom("wxAUI_MGR_VENETIAN_BLINDS_HINT"), rt.make_int(wxAUI_MGR_VENETIAN_BLINDS_HINT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerOption"), rt.make_atom("wxAUI_MGR_RECTANGLE_HINT"), rt.make_int(wxAUI_MGR_RECTANGLE_HINT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerOption"), rt.make_atom("wxAUI_MGR_HINT_FADE"), rt.make_int(wxAUI_MGR_HINT_FADE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerOption"), rt.make_atom("wxAUI_MGR_NO_VENETIAN_BLINDS_FADE"), rt.make_int(wxAUI_MGR_NO_VENETIAN_BLINDS_FADE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerOption"), rt.make_atom("wxAUI_MGR_LIVE_RESIZE"), rt.make_int(wxAUI_MGR_LIVE_RESIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiManagerOption"), rt.make_atom("wxAUI_MGR_DEFAULT"), rt.make_int(wxAUI_MGR_DEFAULT)),
//  From "auibook.h": wxAuiNotebookOption
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebookOption"), rt.make_atom("wxAUI_NB_TOP"), rt.make_int(wxAUI_NB_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebookOption"), rt.make_atom("wxAUI_NB_LEFT"), rt.make_int(wxAUI_NB_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebookOption"), rt.make_atom("wxAUI_NB_RIGHT"), rt.make_int(wxAUI_NB_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebookOption"), rt.make_atom("wxAUI_NB_BOTTOM"), rt.make_int(wxAUI_NB_BOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebookOption"), rt.make_atom("wxAUI_NB_TAB_SPLIT"), rt.make_int(wxAUI_NB_TAB_SPLIT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebookOption"), rt.make_atom("wxAUI_NB_TAB_MOVE"), rt.make_int(wxAUI_NB_TAB_MOVE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebookOption"), rt.make_atom("wxAUI_NB_TAB_EXTERNAL_MOVE"), rt.make_int(wxAUI_NB_TAB_EXTERNAL_MOVE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebookOption"), rt.make_atom("wxAUI_NB_TAB_FIXED_WIDTH"), rt.make_int(wxAUI_NB_TAB_FIXED_WIDTH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebookOption"), rt.make_atom("wxAUI_NB_SCROLL_BUTTONS"), rt.make_int(wxAUI_NB_SCROLL_BUTTONS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebookOption"), rt.make_atom("wxAUI_NB_WINDOWLIST_BUTTON"), rt.make_int(wxAUI_NB_WINDOWLIST_BUTTON)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebookOption"), rt.make_atom("wxAUI_NB_CLOSE_BUTTON"), rt.make_int(wxAUI_NB_CLOSE_BUTTON)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebookOption"), rt.make_atom("wxAUI_NB_CLOSE_ON_ACTIVE_TAB"), rt.make_int(wxAUI_NB_CLOSE_ON_ACTIVE_TAB)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebookOption"), rt.make_atom("wxAUI_NB_CLOSE_ON_ALL_TABS"), rt.make_int(wxAUI_NB_CLOSE_ON_ALL_TABS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebookOption"), rt.make_atom("wxAUI_NB_MIDDLE_CLICK_CLOSE"), rt.make_int(wxAUI_NB_MIDDLE_CLICK_CLOSE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiNotebookOption"), rt.make_atom("wxAUI_NB_DEFAULT_STYLE"), rt.make_int(wxAUI_NB_DEFAULT_STYLE)),
//  From "dockart.h": wxAuiPaneButtonState
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneButtonState"), rt.make_atom("wxAUI_BUTTON_STATE_NORMAL"), rt.make_int(wxAUI_BUTTON_STATE_NORMAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneButtonState"), rt.make_atom("wxAUI_BUTTON_STATE_HOVER"), rt.make_int(wxAUI_BUTTON_STATE_HOVER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneButtonState"), rt.make_atom("wxAUI_BUTTON_STATE_PRESSED"), rt.make_int(wxAUI_BUTTON_STATE_PRESSED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneButtonState"), rt.make_atom("wxAUI_BUTTON_STATE_DISABLED"), rt.make_int(wxAUI_BUTTON_STATE_DISABLED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneButtonState"), rt.make_atom("wxAUI_BUTTON_STATE_HIDDEN"), rt.make_int(wxAUI_BUTTON_STATE_HIDDEN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneButtonState"), rt.make_atom("wxAUI_BUTTON_STATE_CHECKED"), rt.make_int(wxAUI_BUTTON_STATE_CHECKED)),
//  From "dockart.h": wxAuiPaneDockArtGradients
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtGradients"), rt.make_atom("wxAUI_GRADIENT_NONE"), rt.make_int(wxAUI_GRADIENT_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtGradients"), rt.make_atom("wxAUI_GRADIENT_VERTICAL"), rt.make_int(wxAUI_GRADIENT_VERTICAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtGradients"), rt.make_atom("wxAUI_GRADIENT_HORIZONTAL"), rt.make_int(wxAUI_GRADIENT_HORIZONTAL)),
//  From "dockart.h": wxAuiPaneDockArtSetting
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_SASH_SIZE"), rt.make_int(wxAUI_DOCKART_SASH_SIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_CAPTION_SIZE"), rt.make_int(wxAUI_DOCKART_CAPTION_SIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_GRIPPER_SIZE"), rt.make_int(wxAUI_DOCKART_GRIPPER_SIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_PANE_BORDER_SIZE"), rt.make_int(wxAUI_DOCKART_PANE_BORDER_SIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_PANE_BUTTON_SIZE"), rt.make_int(wxAUI_DOCKART_PANE_BUTTON_SIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_BACKGROUND_COLOUR"), rt.make_int(wxAUI_DOCKART_BACKGROUND_COLOUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_SASH_COLOUR"), rt.make_int(wxAUI_DOCKART_SASH_COLOUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_ACTIVE_CAPTION_COLOUR"), rt.make_int(wxAUI_DOCKART_ACTIVE_CAPTION_COLOUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_ACTIVE_CAPTION_GRADIENT_COLOUR"), rt.make_int(wxAUI_DOCKART_ACTIVE_CAPTION_GRADIENT_COLOUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_INACTIVE_CAPTION_COLOUR"), rt.make_int(wxAUI_DOCKART_INACTIVE_CAPTION_COLOUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_INACTIVE_CAPTION_GRADIENT_COLOUR"), rt.make_int(wxAUI_DOCKART_INACTIVE_CAPTION_GRADIENT_COLOUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_ACTIVE_CAPTION_TEXT_COLOUR"), rt.make_int(wxAUI_DOCKART_ACTIVE_CAPTION_TEXT_COLOUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_INACTIVE_CAPTION_TEXT_COLOUR"), rt.make_int(wxAUI_DOCKART_INACTIVE_CAPTION_TEXT_COLOUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_BORDER_COLOUR"), rt.make_int(wxAUI_DOCKART_BORDER_COLOUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_GRIPPER_COLOUR"), rt.make_int(wxAUI_DOCKART_GRIPPER_COLOUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_CAPTION_FONT"), rt.make_int(wxAUI_DOCKART_CAPTION_FONT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxAuiPaneDockArtSetting"), rt.make_atom("wxAUI_DOCKART_GRADIENT_TYPE"), rt.make_int(wxAUI_DOCKART_GRADIENT_TYPE)),
//  From "defs.h": wxBackgroundStyle
    enif_make_tuple3(rt.env, rt.make_atom("wxBackgroundStyle"), rt.make_atom("wxBG_STYLE_ERASE"), rt.make_int(wxBG_STYLE_ERASE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBackgroundStyle"), rt.make_atom("wxBG_STYLE_SYSTEM"), rt.make_int(wxBG_STYLE_SYSTEM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBackgroundStyle"), rt.make_atom("wxBG_STYLE_PAINT"), rt.make_int(wxBG_STYLE_PAINT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBackgroundStyle"), rt.make_atom("wxBG_STYLE_COLOUR"), rt.make_int(wxBG_STYLE_COLOUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBackgroundStyle"), rt.make_atom("wxBG_STYLE_TRANSPARENT"), rt.make_int(wxBG_STYLE_TRANSPARENT)),
//  From "gdicmn.h": wxBitmapType
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_INVALID"), rt.make_int(wxBITMAP_TYPE_INVALID)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_BMP"), rt.make_int(wxBITMAP_TYPE_BMP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_BMP_RESOURCE"), rt.make_int(wxBITMAP_TYPE_BMP_RESOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_RESOURCE"), rt.make_int(wxBITMAP_TYPE_RESOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_ICO"), rt.make_int(wxBITMAP_TYPE_ICO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_ICO_RESOURCE"), rt.make_int(wxBITMAP_TYPE_ICO_RESOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_CUR"), rt.make_int(wxBITMAP_TYPE_CUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_CUR_RESOURCE"), rt.make_int(wxBITMAP_TYPE_CUR_RESOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_XBM"), rt.make_int(wxBITMAP_TYPE_XBM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_XBM_DATA"), rt.make_int(wxBITMAP_TYPE_XBM_DATA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_XPM"), rt.make_int(wxBITMAP_TYPE_XPM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_XPM_DATA"), rt.make_int(wxBITMAP_TYPE_XPM_DATA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_TIFF"), rt.make_int(wxBITMAP_TYPE_TIFF)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_TIF"), rt.make_int(wxBITMAP_TYPE_TIF)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_TIFF_RESOURCE"), rt.make_int(wxBITMAP_TYPE_TIFF_RESOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_TIF_RESOURCE"), rt.make_int(wxBITMAP_TYPE_TIF_RESOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_GIF"), rt.make_int(wxBITMAP_TYPE_GIF)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_GIF_RESOURCE"), rt.make_int(wxBITMAP_TYPE_GIF_RESOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_PNG"), rt.make_int(wxBITMAP_TYPE_PNG)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_PNG_RESOURCE"), rt.make_int(wxBITMAP_TYPE_PNG_RESOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_JPEG"), rt.make_int(wxBITMAP_TYPE_JPEG)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_JPEG_RESOURCE"), rt.make_int(wxBITMAP_TYPE_JPEG_RESOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_PNM"), rt.make_int(wxBITMAP_TYPE_PNM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_PNM_RESOURCE"), rt.make_int(wxBITMAP_TYPE_PNM_RESOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_PCX"), rt.make_int(wxBITMAP_TYPE_PCX)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_PCX_RESOURCE"), rt.make_int(wxBITMAP_TYPE_PCX_RESOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_PICT"), rt.make_int(wxBITMAP_TYPE_PICT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_PICT_RESOURCE"), rt.make_int(wxBITMAP_TYPE_PICT_RESOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_ICON"), rt.make_int(wxBITMAP_TYPE_ICON)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_ICON_RESOURCE"), rt.make_int(wxBITMAP_TYPE_ICON_RESOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_ANI"), rt.make_int(wxBITMAP_TYPE_ANI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_IFF"), rt.make_int(wxBITMAP_TYPE_IFF)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_TGA"), rt.make_int(wxBITMAP_TYPE_TGA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_MACCURSOR"), rt.make_int(wxBITMAP_TYPE_MACCURSOR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_MACCURSOR_RESOURCE"), rt.make_int(wxBITMAP_TYPE_MACCURSOR_RESOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBitmapType"), rt.make_atom("wxBITMAP_TYPE_ANY"), rt.make_int(wxBITMAP_TYPE_ANY)),
//  From "defs.h": wxBorder
    enif_make_tuple3(rt.env, rt.make_atom("wxBorder"), rt.make_atom("wxBORDER_DEFAULT"), rt.make_int(wxBORDER_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBorder"), rt.make_atom("wxBORDER_NONE"), rt.make_int(wxBORDER_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBorder"), rt.make_atom("wxBORDER_STATIC"), rt.make_int(wxBORDER_STATIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBorder"), rt.make_atom("wxBORDER_SIMPLE"), rt.make_int(wxBORDER_SIMPLE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBorder"), rt.make_atom("wxBORDER_RAISED"), rt.make_int(wxBORDER_RAISED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBorder"), rt.make_atom("wxBORDER_SUNKEN"), rt.make_int(wxBORDER_SUNKEN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBorder"), rt.make_atom("wxBORDER_DOUBLE"), rt.make_int(wxBORDER_DOUBLE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBorder"), rt.make_atom("wxBORDER_THEME"), rt.make_int(wxBORDER_THEME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBorder"), rt.make_atom("wxBORDER_MASK"), rt.make_int(wxBORDER_MASK)),
//  From "brush.h": wxBrushStyle
    enif_make_tuple3(rt.env, rt.make_atom("wxBrushStyle"), rt.make_atom("wxBRUSHSTYLE_INVALID"), rt.make_int(wxBRUSHSTYLE_INVALID)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBrushStyle"), rt.make_atom("wxBRUSHSTYLE_SOLID"), rt.make_int(wxBRUSHSTYLE_SOLID)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBrushStyle"), rt.make_atom("wxBRUSHSTYLE_TRANSPARENT"), rt.make_int(wxBRUSHSTYLE_TRANSPARENT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBrushStyle"), rt.make_atom("wxBRUSHSTYLE_STIPPLE_MASK_OPAQUE"), rt.make_int(wxBRUSHSTYLE_STIPPLE_MASK_OPAQUE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBrushStyle"), rt.make_atom("wxBRUSHSTYLE_STIPPLE_MASK"), rt.make_int(wxBRUSHSTYLE_STIPPLE_MASK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBrushStyle"), rt.make_atom("wxBRUSHSTYLE_STIPPLE"), rt.make_int(wxBRUSHSTYLE_STIPPLE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBrushStyle"), rt.make_atom("wxBRUSHSTYLE_BDIAGONAL_HATCH"), rt.make_int(wxBRUSHSTYLE_BDIAGONAL_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBrushStyle"), rt.make_atom("wxBRUSHSTYLE_CROSSDIAG_HATCH"), rt.make_int(wxBRUSHSTYLE_CROSSDIAG_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBrushStyle"), rt.make_atom("wxBRUSHSTYLE_FDIAGONAL_HATCH"), rt.make_int(wxBRUSHSTYLE_FDIAGONAL_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBrushStyle"), rt.make_atom("wxBRUSHSTYLE_CROSS_HATCH"), rt.make_int(wxBRUSHSTYLE_CROSS_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBrushStyle"), rt.make_atom("wxBRUSHSTYLE_HORIZONTAL_HATCH"), rt.make_int(wxBRUSHSTYLE_HORIZONTAL_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBrushStyle"), rt.make_atom("wxBRUSHSTYLE_VERTICAL_HATCH"), rt.make_int(wxBRUSHSTYLE_VERTICAL_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBrushStyle"), rt.make_atom("wxBRUSHSTYLE_FIRST_HATCH"), rt.make_int(wxBRUSHSTYLE_FIRST_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxBrushStyle"), rt.make_atom("wxBRUSHSTYLE_LAST_HATCH"), rt.make_int(wxBRUSHSTYLE_LAST_HATCH)),
//  From "calctrl.h": wxCalendarDateBorder
    enif_make_tuple3(rt.env, rt.make_atom("wxCalendarDateBorder"), rt.make_atom("wxCAL_BORDER_NONE"), rt.make_int(wxCAL_BORDER_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCalendarDateBorder"), rt.make_atom("wxCAL_BORDER_SQUARE"), rt.make_int(wxCAL_BORDER_SQUARE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCalendarDateBorder"), rt.make_atom("wxCAL_BORDER_ROUND"), rt.make_int(wxCAL_BORDER_ROUND)),
//  From "calctrl.h": wxCalendarHitTestResult
    enif_make_tuple3(rt.env, rt.make_atom("wxCalendarHitTestResult"), rt.make_atom("wxCAL_HITTEST_NOWHERE"), rt.make_int(wxCAL_HITTEST_NOWHERE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCalendarHitTestResult"), rt.make_atom("wxCAL_HITTEST_HEADER"), rt.make_int(wxCAL_HITTEST_HEADER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCalendarHitTestResult"), rt.make_atom("wxCAL_HITTEST_DAY"), rt.make_int(wxCAL_HITTEST_DAY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCalendarHitTestResult"), rt.make_atom("wxCAL_HITTEST_INCMONTH"), rt.make_int(wxCAL_HITTEST_INCMONTH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCalendarHitTestResult"), rt.make_atom("wxCAL_HITTEST_DECMONTH"), rt.make_int(wxCAL_HITTEST_DECMONTH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCalendarHitTestResult"), rt.make_atom("wxCAL_HITTEST_SURROUNDING_WEEK"), rt.make_int(wxCAL_HITTEST_SURROUNDING_WEEK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCalendarHitTestResult"), rt.make_atom("wxCAL_HITTEST_WEEK"), rt.make_int(wxCAL_HITTEST_WEEK)),
//  From "checkbox.h": wxCheckBoxState
    enif_make_tuple3(rt.env, rt.make_atom("wxCheckBoxState"), rt.make_atom("wxCHK_UNCHECKED"), rt.make_int(wxCHK_UNCHECKED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCheckBoxState"), rt.make_atom("wxCHK_CHECKED"), rt.make_int(wxCHK_CHECKED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCheckBoxState"), rt.make_atom("wxCHK_UNDETERMINED"), rt.make_int(wxCHK_UNDETERMINED)),
//  From "graphics.h": wxCompositionMode
    enif_make_tuple3(rt.env, rt.make_atom("wxCompositionMode"), rt.make_atom("wxCOMPOSITION_INVALID"), rt.make_int(wxCOMPOSITION_INVALID)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCompositionMode"), rt.make_atom("wxCOMPOSITION_CLEAR"), rt.make_int(wxCOMPOSITION_CLEAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCompositionMode"), rt.make_atom("wxCOMPOSITION_SOURCE"), rt.make_int(wxCOMPOSITION_SOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCompositionMode"), rt.make_atom("wxCOMPOSITION_OVER"), rt.make_int(wxCOMPOSITION_OVER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCompositionMode"), rt.make_atom("wxCOMPOSITION_IN"), rt.make_int(wxCOMPOSITION_IN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCompositionMode"), rt.make_atom("wxCOMPOSITION_OUT"), rt.make_int(wxCOMPOSITION_OUT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCompositionMode"), rt.make_atom("wxCOMPOSITION_ATOP"), rt.make_int(wxCOMPOSITION_ATOP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCompositionMode"), rt.make_atom("wxCOMPOSITION_DEST"), rt.make_int(wxCOMPOSITION_DEST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCompositionMode"), rt.make_atom("wxCOMPOSITION_DEST_OVER"), rt.make_int(wxCOMPOSITION_DEST_OVER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCompositionMode"), rt.make_atom("wxCOMPOSITION_DEST_IN"), rt.make_int(wxCOMPOSITION_DEST_IN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCompositionMode"), rt.make_atom("wxCOMPOSITION_DEST_OUT"), rt.make_int(wxCOMPOSITION_DEST_OUT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCompositionMode"), rt.make_atom("wxCOMPOSITION_DEST_ATOP"), rt.make_int(wxCOMPOSITION_DEST_ATOP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCompositionMode"), rt.make_atom("wxCOMPOSITION_XOR"), rt.make_int(wxCOMPOSITION_XOR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxCompositionMode"), rt.make_atom("wxCOMPOSITION_ADD"), rt.make_int(wxCOMPOSITION_ADD)),
//  From "defs.h": wxDataFormatId
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_INVALID"), rt.make_int(wxDF_INVALID)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_TEXT"), rt.make_int(wxDF_TEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_BITMAP"), rt.make_int(wxDF_BITMAP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_METAFILE"), rt.make_int(wxDF_METAFILE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_SYLK"), rt.make_int(wxDF_SYLK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_DIF"), rt.make_int(wxDF_DIF)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_TIFF"), rt.make_int(wxDF_TIFF)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_OEMTEXT"), rt.make_int(wxDF_OEMTEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_DIB"), rt.make_int(wxDF_DIB)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_PALETTE"), rt.make_int(wxDF_PALETTE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_PENDATA"), rt.make_int(wxDF_PENDATA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_RIFF"), rt.make_int(wxDF_RIFF)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_WAVE"), rt.make_int(wxDF_WAVE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_UNICODETEXT"), rt.make_int(wxDF_UNICODETEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_ENHMETAFILE"), rt.make_int(wxDF_ENHMETAFILE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_FILENAME"), rt.make_int(wxDF_FILENAME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_LOCALE"), rt.make_int(wxDF_LOCALE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_PRIVATE"), rt.make_int(wxDF_PRIVATE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_HTML"), rt.make_int(wxDF_HTML)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDataFormatId"), rt.make_atom("wxDF_MAX"), rt.make_int(wxDF_MAX)),
//  From "defs.h": wxDeprecatedGUIConstants
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxDEFAULT"), rt.make_int(wxDEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxDECORATIVE"), rt.make_int(wxDECORATIVE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxROMAN"), rt.make_int(wxROMAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxSCRIPT"), rt.make_int(wxSCRIPT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxSWISS"), rt.make_int(wxSWISS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxMODERN"), rt.make_int(wxMODERN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxTELETYPE"), rt.make_int(wxTELETYPE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxVARIABLE"), rt.make_int(wxVARIABLE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxFIXED"), rt.make_int(wxFIXED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxNORMAL"), rt.make_int(wxNORMAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxLIGHT"), rt.make_int(wxLIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxBOLD"), rt.make_int(wxBOLD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxITALIC"), rt.make_int(wxITALIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxSLANT"), rt.make_int(wxSLANT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxSOLID"), rt.make_int(wxSOLID)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxDOT"), rt.make_int(wxDOT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxLONG_DASH"), rt.make_int(wxLONG_DASH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxSHORT_DASH"), rt.make_int(wxSHORT_DASH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxDOT_DASH"), rt.make_int(wxDOT_DASH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxUSER_DASH"), rt.make_int(wxUSER_DASH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxTRANSPARENT"), rt.make_int(wxTRANSPARENT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxSTIPPLE_MASK_OPAQUE"), rt.make_int(wxSTIPPLE_MASK_OPAQUE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxSTIPPLE_MASK"), rt.make_int(wxSTIPPLE_MASK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxSTIPPLE"), rt.make_int(wxSTIPPLE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxBDIAGONAL_HATCH"), rt.make_int(wxBDIAGONAL_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxCROSSDIAG_HATCH"), rt.make_int(wxCROSSDIAG_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxFDIAGONAL_HATCH"), rt.make_int(wxFDIAGONAL_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxCROSS_HATCH"), rt.make_int(wxCROSS_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxHORIZONTAL_HATCH"), rt.make_int(wxHORIZONTAL_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxVERTICAL_HATCH"), rt.make_int(wxVERTICAL_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxFIRST_HATCH"), rt.make_int(wxFIRST_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDeprecatedGUIConstants"), rt.make_atom("wxLAST_HATCH"), rt.make_int(wxLAST_HATCH)),
//  From "dialog.h": wxDialogLayoutAdaptationMode
    enif_make_tuple3(rt.env, rt.make_atom("wxDialogLayoutAdaptationMode"), rt.make_atom("wxDIALOG_ADAPTATION_MODE_DEFAULT"), rt.make_int(wxDIALOG_ADAPTATION_MODE_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDialogLayoutAdaptationMode"), rt.make_atom("wxDIALOG_ADAPTATION_MODE_ENABLED"), rt.make_int(wxDIALOG_ADAPTATION_MODE_ENABLED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDialogLayoutAdaptationMode"), rt.make_atom("wxDIALOG_ADAPTATION_MODE_DISABLED"), rt.make_int(wxDIALOG_ADAPTATION_MODE_DISABLED)),
//  From "defs.h": wxDirection
    enif_make_tuple3(rt.env, rt.make_atom("wxDirection"), rt.make_atom("wxLEFT"), rt.make_int(wxLEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDirection"), rt.make_atom("wxRIGHT"), rt.make_int(wxRIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDirection"), rt.make_atom("wxUP"), rt.make_int(wxUP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDirection"), rt.make_atom("wxDOWN"), rt.make_int(wxDOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDirection"), rt.make_atom("wxTOP"), rt.make_int(wxTOP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDirection"), rt.make_atom("wxBOTTOM"), rt.make_int(wxBOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDirection"), rt.make_atom("wxNORTH"), rt.make_int(wxNORTH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDirection"), rt.make_atom("wxSOUTH"), rt.make_int(wxSOUTH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDirection"), rt.make_atom("wxWEST"), rt.make_int(wxWEST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDirection"), rt.make_atom("wxEAST"), rt.make_int(wxEAST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDirection"), rt.make_atom("wxALL"), rt.make_int(wxALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDirection"), rt.make_atom("wxDIRECTION_MASK"), rt.make_int(wxDIRECTION_MASK)),
//  From "dnd.h": wxDragResult
    enif_make_tuple3(rt.env, rt.make_atom("wxDragResult"), rt.make_atom("wxDragError"), rt.make_int(wxDragError)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDragResult"), rt.make_atom("wxDragNone"), rt.make_int(wxDragNone)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDragResult"), rt.make_atom("wxDragCopy"), rt.make_int(wxDragCopy)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDragResult"), rt.make_atom("wxDragMove"), rt.make_int(wxDragMove)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDragResult"), rt.make_atom("wxDragLink"), rt.make_int(wxDragLink)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDragResult"), rt.make_atom("wxDragCancel"), rt.make_int(wxDragCancel)),
//  From "defs.h": wxDuplexMode
    enif_make_tuple3(rt.env, rt.make_atom("wxDuplexMode"), rt.make_atom("wxDUPLEX_SIMPLEX"), rt.make_int(wxDUPLEX_SIMPLEX)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDuplexMode"), rt.make_atom("wxDUPLEX_HORIZONTAL"), rt.make_int(wxDUPLEX_HORIZONTAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxDuplexMode"), rt.make_atom("wxDUPLEX_VERTICAL"), rt.make_int(wxDUPLEX_VERTICAL)),
//  From "layout.h": wxEdge
    enif_make_tuple3(rt.env, rt.make_atom("wxEdge"), rt.make_atom("wxLeft"), rt.make_int(wxLeft)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEdge"), rt.make_atom("wxTop"), rt.make_int(wxTop)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEdge"), rt.make_atom("wxRight"), rt.make_int(wxRight)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEdge"), rt.make_atom("wxBottom"), rt.make_int(wxBottom)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEdge"), rt.make_atom("wxWidth"), rt.make_int(wxWidth)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEdge"), rt.make_atom("wxHeight"), rt.make_int(wxHeight)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEdge"), rt.make_atom("wxCentre"), rt.make_int(wxCentre)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEdge"), rt.make_atom("wxCenter"), rt.make_int(wxCenter)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEdge"), rt.make_atom("wxCentreX"), rt.make_int(wxCentreX)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEdge"), rt.make_atom("wxCentreY"), rt.make_int(wxCentreY)),
//  From "gdicmn.h": wxEllipsizeFlags
    enif_make_tuple3(rt.env, rt.make_atom("wxEllipsizeFlags"), rt.make_atom("wxELLIPSIZE_FLAGS_NONE"), rt.make_int(wxELLIPSIZE_FLAGS_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEllipsizeFlags"), rt.make_atom("wxELLIPSIZE_FLAGS_PROCESS_MNEMONICS"), rt.make_int(wxELLIPSIZE_FLAGS_PROCESS_MNEMONICS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEllipsizeFlags"), rt.make_atom("wxELLIPSIZE_FLAGS_EXPAND_TABS"), rt.make_int(wxELLIPSIZE_FLAGS_EXPAND_TABS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEllipsizeFlags"), rt.make_atom("wxELLIPSIZE_FLAGS_DEFAULT"), rt.make_int(wxELLIPSIZE_FLAGS_DEFAULT)),
//  From "gdicmn.h": wxEllipsizeMode
    enif_make_tuple3(rt.env, rt.make_atom("wxEllipsizeMode"), rt.make_atom("wxELLIPSIZE_NONE"), rt.make_int(wxELLIPSIZE_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEllipsizeMode"), rt.make_atom("wxELLIPSIZE_START"), rt.make_int(wxELLIPSIZE_START)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEllipsizeMode"), rt.make_atom("wxELLIPSIZE_MIDDLE"), rt.make_int(wxELLIPSIZE_MIDDLE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEllipsizeMode"), rt.make_atom("wxELLIPSIZE_END"), rt.make_int(wxELLIPSIZE_END)),
//  From "event.h": wxEventCategory
    enif_make_tuple3(rt.env, rt.make_atom("wxEventCategory"), rt.make_atom("wxEVT_CATEGORY_UI"), rt.make_int(wxEVT_CATEGORY_UI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEventCategory"), rt.make_atom("wxEVT_CATEGORY_USER_INPUT"), rt.make_int(wxEVT_CATEGORY_USER_INPUT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEventCategory"), rt.make_atom("wxEVT_CATEGORY_SOCKET"), rt.make_int(wxEVT_CATEGORY_SOCKET)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEventCategory"), rt.make_atom("wxEVT_CATEGORY_TIMER"), rt.make_int(wxEVT_CATEGORY_TIMER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEventCategory"), rt.make_atom("wxEVT_CATEGORY_THREAD"), rt.make_int(wxEVT_CATEGORY_THREAD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEventCategory"), rt.make_atom("wxEVT_CATEGORY_ALL"), rt.make_int(wxEVT_CATEGORY_ALL)),
//  From "event.h": wxEventPropagation
    enif_make_tuple3(rt.env, rt.make_atom("wxEventPropagation"), rt.make_atom("wxEVENT_PROPAGATE_NONE"), rt.make_int(wxEVENT_PROPAGATE_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxEventPropagation"), rt.make_atom("wxEVENT_PROPAGATE_MAX"), rt.make_int(wxEVENT_PROPAGATE_MAX)),
//  From "fdrepdlg.h": wxFindReplaceDialogStyles
    enif_make_tuple3(rt.env, rt.make_atom("wxFindReplaceDialogStyles"), rt.make_atom("wxFR_REPLACEDIALOG"), rt.make_int(wxFR_REPLACEDIALOG)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFindReplaceDialogStyles"), rt.make_atom("wxFR_NOUPDOWN"), rt.make_int(wxFR_NOUPDOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFindReplaceDialogStyles"), rt.make_atom("wxFR_NOMATCHCASE"), rt.make_int(wxFR_NOMATCHCASE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFindReplaceDialogStyles"), rt.make_atom("wxFR_NOWHOLEWORD"), rt.make_int(wxFR_NOWHOLEWORD)),
//  From "fdrepdlg.h": wxFindReplaceFlags
    enif_make_tuple3(rt.env, rt.make_atom("wxFindReplaceFlags"), rt.make_atom("wxFR_DOWN"), rt.make_int(wxFR_DOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFindReplaceFlags"), rt.make_atom("wxFR_WHOLEWORD"), rt.make_int(wxFR_WHOLEWORD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFindReplaceFlags"), rt.make_atom("wxFR_MATCHCASE"), rt.make_int(wxFR_MATCHCASE)),
//  From "sizer.h": wxFlexSizerGrowMode
    enif_make_tuple3(rt.env, rt.make_atom("wxFlexSizerGrowMode"), rt.make_atom("wxFLEX_GROWMODE_NONE"), rt.make_int(wxFLEX_GROWMODE_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFlexSizerGrowMode"), rt.make_atom("wxFLEX_GROWMODE_SPECIFIED"), rt.make_int(wxFLEX_GROWMODE_SPECIFIED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFlexSizerGrowMode"), rt.make_atom("wxFLEX_GROWMODE_ALL"), rt.make_int(wxFLEX_GROWMODE_ALL)),
//  From "dc.h": wxFloodFillStyle
    enif_make_tuple3(rt.env, rt.make_atom("wxFloodFillStyle"), rt.make_atom("wxFLOOD_SURFACE"), rt.make_int(wxFLOOD_SURFACE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFloodFillStyle"), rt.make_atom("wxFLOOD_BORDER"), rt.make_int(wxFLOOD_BORDER)),
//  From "font.h": wxFontEncoding
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_SYSTEM"), rt.make_int(wxFONTENCODING_SYSTEM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_DEFAULT"), rt.make_int(wxFONTENCODING_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_1"), rt.make_int(wxFONTENCODING_ISO8859_1)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_2"), rt.make_int(wxFONTENCODING_ISO8859_2)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_3"), rt.make_int(wxFONTENCODING_ISO8859_3)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_4"), rt.make_int(wxFONTENCODING_ISO8859_4)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_5"), rt.make_int(wxFONTENCODING_ISO8859_5)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_6"), rt.make_int(wxFONTENCODING_ISO8859_6)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_7"), rt.make_int(wxFONTENCODING_ISO8859_7)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_8"), rt.make_int(wxFONTENCODING_ISO8859_8)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_9"), rt.make_int(wxFONTENCODING_ISO8859_9)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_10"), rt.make_int(wxFONTENCODING_ISO8859_10)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_11"), rt.make_int(wxFONTENCODING_ISO8859_11)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_12"), rt.make_int(wxFONTENCODING_ISO8859_12)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_13"), rt.make_int(wxFONTENCODING_ISO8859_13)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_14"), rt.make_int(wxFONTENCODING_ISO8859_14)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_15"), rt.make_int(wxFONTENCODING_ISO8859_15)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO8859_MAX"), rt.make_int(wxFONTENCODING_ISO8859_MAX)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_KOI8"), rt.make_int(wxFONTENCODING_KOI8)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_KOI8_U"), rt.make_int(wxFONTENCODING_KOI8_U)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ALTERNATIVE"), rt.make_int(wxFONTENCODING_ALTERNATIVE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_BULGARIAN"), rt.make_int(wxFONTENCODING_BULGARIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP437"), rt.make_int(wxFONTENCODING_CP437)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP850"), rt.make_int(wxFONTENCODING_CP850)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP852"), rt.make_int(wxFONTENCODING_CP852)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP855"), rt.make_int(wxFONTENCODING_CP855)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP866"), rt.make_int(wxFONTENCODING_CP866)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP874"), rt.make_int(wxFONTENCODING_CP874)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP932"), rt.make_int(wxFONTENCODING_CP932)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP936"), rt.make_int(wxFONTENCODING_CP936)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP949"), rt.make_int(wxFONTENCODING_CP949)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP950"), rt.make_int(wxFONTENCODING_CP950)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP1250"), rt.make_int(wxFONTENCODING_CP1250)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP1251"), rt.make_int(wxFONTENCODING_CP1251)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP1252"), rt.make_int(wxFONTENCODING_CP1252)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP1253"), rt.make_int(wxFONTENCODING_CP1253)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP1254"), rt.make_int(wxFONTENCODING_CP1254)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP1255"), rt.make_int(wxFONTENCODING_CP1255)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP1256"), rt.make_int(wxFONTENCODING_CP1256)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP1257"), rt.make_int(wxFONTENCODING_CP1257)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP1258"), rt.make_int(wxFONTENCODING_CP1258)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP1361"), rt.make_int(wxFONTENCODING_CP1361)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_CP12_MAX"), rt.make_int(wxFONTENCODING_CP12_MAX)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_UTF7"), rt.make_int(wxFONTENCODING_UTF7)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_UTF8"), rt.make_int(wxFONTENCODING_UTF8)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_EUC_JP"), rt.make_int(wxFONTENCODING_EUC_JP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_UTF16BE"), rt.make_int(wxFONTENCODING_UTF16BE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_UTF16LE"), rt.make_int(wxFONTENCODING_UTF16LE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_UTF32BE"), rt.make_int(wxFONTENCODING_UTF32BE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_UTF32LE"), rt.make_int(wxFONTENCODING_UTF32LE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACROMAN"), rt.make_int(wxFONTENCODING_MACROMAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACJAPANESE"), rt.make_int(wxFONTENCODING_MACJAPANESE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACCHINESETRAD"), rt.make_int(wxFONTENCODING_MACCHINESETRAD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACKOREAN"), rt.make_int(wxFONTENCODING_MACKOREAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACARABIC"), rt.make_int(wxFONTENCODING_MACARABIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACHEBREW"), rt.make_int(wxFONTENCODING_MACHEBREW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACGREEK"), rt.make_int(wxFONTENCODING_MACGREEK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACCYRILLIC"), rt.make_int(wxFONTENCODING_MACCYRILLIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACDEVANAGARI"), rt.make_int(wxFONTENCODING_MACDEVANAGARI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACGURMUKHI"), rt.make_int(wxFONTENCODING_MACGURMUKHI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACGUJARATI"), rt.make_int(wxFONTENCODING_MACGUJARATI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACORIYA"), rt.make_int(wxFONTENCODING_MACORIYA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACBENGALI"), rt.make_int(wxFONTENCODING_MACBENGALI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACTAMIL"), rt.make_int(wxFONTENCODING_MACTAMIL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACTELUGU"), rt.make_int(wxFONTENCODING_MACTELUGU)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACKANNADA"), rt.make_int(wxFONTENCODING_MACKANNADA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACMALAJALAM"), rt.make_int(wxFONTENCODING_MACMALAJALAM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACSINHALESE"), rt.make_int(wxFONTENCODING_MACSINHALESE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACBURMESE"), rt.make_int(wxFONTENCODING_MACBURMESE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACKHMER"), rt.make_int(wxFONTENCODING_MACKHMER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACTHAI"), rt.make_int(wxFONTENCODING_MACTHAI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACLAOTIAN"), rt.make_int(wxFONTENCODING_MACLAOTIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACGEORGIAN"), rt.make_int(wxFONTENCODING_MACGEORGIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACARMENIAN"), rt.make_int(wxFONTENCODING_MACARMENIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACCHINESESIMP"), rt.make_int(wxFONTENCODING_MACCHINESESIMP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACTIBETAN"), rt.make_int(wxFONTENCODING_MACTIBETAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACMONGOLIAN"), rt.make_int(wxFONTENCODING_MACMONGOLIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACETHIOPIC"), rt.make_int(wxFONTENCODING_MACETHIOPIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACCENTRALEUR"), rt.make_int(wxFONTENCODING_MACCENTRALEUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACVIATNAMESE"), rt.make_int(wxFONTENCODING_MACVIATNAMESE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACARABICEXT"), rt.make_int(wxFONTENCODING_MACARABICEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACSYMBOL"), rt.make_int(wxFONTENCODING_MACSYMBOL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACDINGBATS"), rt.make_int(wxFONTENCODING_MACDINGBATS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACTURKISH"), rt.make_int(wxFONTENCODING_MACTURKISH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACCROATIAN"), rt.make_int(wxFONTENCODING_MACCROATIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACICELANDIC"), rt.make_int(wxFONTENCODING_MACICELANDIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACROMANIAN"), rt.make_int(wxFONTENCODING_MACROMANIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACCELTIC"), rt.make_int(wxFONTENCODING_MACCELTIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACGAELIC"), rt.make_int(wxFONTENCODING_MACGAELIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACKEYBOARD"), rt.make_int(wxFONTENCODING_MACKEYBOARD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_ISO2022_JP"), rt.make_int(wxFONTENCODING_ISO2022_JP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MAX"), rt.make_int(wxFONTENCODING_MAX)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACMIN"), rt.make_int(wxFONTENCODING_MACMIN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_MACMAX"), rt.make_int(wxFONTENCODING_MACMAX)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_UTF16"), rt.make_int(wxFONTENCODING_UTF16)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_UTF32"), rt.make_int(wxFONTENCODING_UTF32)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_UNICODE"), rt.make_int(wxFONTENCODING_UNICODE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_GB2312"), rt.make_int(wxFONTENCODING_GB2312)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_BIG5"), rt.make_int(wxFONTENCODING_BIG5)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_SHIFT_JIS"), rt.make_int(wxFONTENCODING_SHIFT_JIS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_EUC_KR"), rt.make_int(wxFONTENCODING_EUC_KR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_JOHAB"), rt.make_int(wxFONTENCODING_JOHAB)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontEncoding"), rt.make_atom("wxFONTENCODING_VIETNAMESE"), rt.make_int(wxFONTENCODING_VIETNAMESE)),
//  From "font.h": wxFontFamily
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFamily"), rt.make_atom("wxFONTFAMILY_DEFAULT"), rt.make_int(wxFONTFAMILY_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFamily"), rt.make_atom("wxFONTFAMILY_DECORATIVE"), rt.make_int(wxFONTFAMILY_DECORATIVE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFamily"), rt.make_atom("wxFONTFAMILY_ROMAN"), rt.make_int(wxFONTFAMILY_ROMAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFamily"), rt.make_atom("wxFONTFAMILY_SCRIPT"), rt.make_int(wxFONTFAMILY_SCRIPT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFamily"), rt.make_atom("wxFONTFAMILY_SWISS"), rt.make_int(wxFONTFAMILY_SWISS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFamily"), rt.make_atom("wxFONTFAMILY_MODERN"), rt.make_int(wxFONTFAMILY_MODERN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFamily"), rt.make_atom("wxFONTFAMILY_TELETYPE"), rt.make_int(wxFONTFAMILY_TELETYPE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFamily"), rt.make_atom("wxFONTFAMILY_MAX"), rt.make_int(wxFONTFAMILY_MAX)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFamily"), rt.make_atom("wxFONTFAMILY_UNKNOWN"), rt.make_int(wxFONTFAMILY_UNKNOWN)),
//  From "font.h": wxFontFlag
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFlag"), rt.make_atom("wxFONTFLAG_DEFAULT"), rt.make_int(wxFONTFLAG_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFlag"), rt.make_atom("wxFONTFLAG_ITALIC"), rt.make_int(wxFONTFLAG_ITALIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFlag"), rt.make_atom("wxFONTFLAG_SLANT"), rt.make_int(wxFONTFLAG_SLANT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFlag"), rt.make_atom("wxFONTFLAG_LIGHT"), rt.make_int(wxFONTFLAG_LIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFlag"), rt.make_atom("wxFONTFLAG_BOLD"), rt.make_int(wxFONTFLAG_BOLD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFlag"), rt.make_atom("wxFONTFLAG_ANTIALIASED"), rt.make_int(wxFONTFLAG_ANTIALIASED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFlag"), rt.make_atom("wxFONTFLAG_NOT_ANTIALIASED"), rt.make_int(wxFONTFLAG_NOT_ANTIALIASED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFlag"), rt.make_atom("wxFONTFLAG_UNDERLINED"), rt.make_int(wxFONTFLAG_UNDERLINED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFlag"), rt.make_atom("wxFONTFLAG_STRIKETHROUGH"), rt.make_int(wxFONTFLAG_STRIKETHROUGH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontFlag"), rt.make_atom("wxFONTFLAG_MASK"), rt.make_int(wxFONTFLAG_MASK)),
//  From "font.h": wxFontStyle
    enif_make_tuple3(rt.env, rt.make_atom("wxFontStyle"), rt.make_atom("wxFONTSTYLE_NORMAL"), rt.make_int(wxFONTSTYLE_NORMAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontStyle"), rt.make_atom("wxFONTSTYLE_ITALIC"), rt.make_int(wxFONTSTYLE_ITALIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontStyle"), rt.make_atom("wxFONTSTYLE_SLANT"), rt.make_int(wxFONTSTYLE_SLANT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontStyle"), rt.make_atom("wxFONTSTYLE_MAX"), rt.make_int(wxFONTSTYLE_MAX)),
//  From "font.h": wxFontSymbolicSize
    enif_make_tuple3(rt.env, rt.make_atom("wxFontSymbolicSize"), rt.make_atom("wxFONTSIZE_XX_SMALL"), rt.make_int(wxFONTSIZE_XX_SMALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontSymbolicSize"), rt.make_atom("wxFONTSIZE_X_SMALL"), rt.make_int(wxFONTSIZE_X_SMALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontSymbolicSize"), rt.make_atom("wxFONTSIZE_SMALL"), rt.make_int(wxFONTSIZE_SMALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontSymbolicSize"), rt.make_atom("wxFONTSIZE_MEDIUM"), rt.make_int(wxFONTSIZE_MEDIUM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontSymbolicSize"), rt.make_atom("wxFONTSIZE_LARGE"), rt.make_int(wxFONTSIZE_LARGE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontSymbolicSize"), rt.make_atom("wxFONTSIZE_X_LARGE"), rt.make_int(wxFONTSIZE_X_LARGE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontSymbolicSize"), rt.make_atom("wxFONTSIZE_XX_LARGE"), rt.make_int(wxFONTSIZE_XX_LARGE)),
//  From "font.h": wxFontWeight
#if wxCHECK_VERSION(3,1,2)
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_INVALID"), rt.make_int(wxFONTWEIGHT_INVALID)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_INVALID"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,2)
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_THIN"), rt.make_int(wxFONTWEIGHT_THIN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_THIN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,2)
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_EXTRALIGHT"), rt.make_int(wxFONTWEIGHT_EXTRALIGHT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_EXTRALIGHT"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_LIGHT"), rt.make_int(wxFONTWEIGHT_LIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_NORMAL"), rt.make_int(wxFONTWEIGHT_NORMAL)),
#if wxCHECK_VERSION(3,1,2)
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_MEDIUM"), rt.make_int(wxFONTWEIGHT_MEDIUM)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_MEDIUM"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,2)
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_SEMIBOLD"), rt.make_int(wxFONTWEIGHT_SEMIBOLD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_SEMIBOLD"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_BOLD"), rt.make_int(wxFONTWEIGHT_BOLD)),
#if wxCHECK_VERSION(3,1,2)
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_EXTRABOLD"), rt.make_int(wxFONTWEIGHT_EXTRABOLD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_EXTRABOLD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,2)
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_HEAVY"), rt.make_int(wxFONTWEIGHT_HEAVY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_HEAVY"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,2)
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_EXTRAHEAVY"), rt.make_int(wxFONTWEIGHT_EXTRAHEAVY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_EXTRAHEAVY"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("wxFontWeight"), rt.make_atom("wxFONTWEIGHT_MAX"), rt.make_int(wxFONTWEIGHT_MAX)),
//  From "glcanvas.h": wxGL_FLAGS
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_RGBA"), rt.make_int(WX_GL_RGBA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_BUFFER_SIZE"), rt.make_int(WX_GL_BUFFER_SIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_LEVEL"), rt.make_int(WX_GL_LEVEL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_DOUBLEBUFFER"), rt.make_int(WX_GL_DOUBLEBUFFER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_STEREO"), rt.make_int(WX_GL_STEREO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_AUX_BUFFERS"), rt.make_int(WX_GL_AUX_BUFFERS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_MIN_RED"), rt.make_int(WX_GL_MIN_RED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_MIN_GREEN"), rt.make_int(WX_GL_MIN_GREEN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_MIN_BLUE"), rt.make_int(WX_GL_MIN_BLUE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_MIN_ALPHA"), rt.make_int(WX_GL_MIN_ALPHA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_DEPTH_SIZE"), rt.make_int(WX_GL_DEPTH_SIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_STENCIL_SIZE"), rt.make_int(WX_GL_STENCIL_SIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_MIN_ACCUM_RED"), rt.make_int(WX_GL_MIN_ACCUM_RED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_MIN_ACCUM_GREEN"), rt.make_int(WX_GL_MIN_ACCUM_GREEN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_MIN_ACCUM_BLUE"), rt.make_int(WX_GL_MIN_ACCUM_BLUE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_MIN_ACCUM_ALPHA"), rt.make_int(WX_GL_MIN_ACCUM_ALPHA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_SAMPLE_BUFFERS"), rt.make_int(WX_GL_SAMPLE_BUFFERS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_SAMPLES"), rt.make_int(WX_GL_SAMPLES)),
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_FRAMEBUFFER_SRGB"), rt.make_int(WX_GL_FRAMEBUFFER_SRGB)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_FRAMEBUFFER_SRGB"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,0,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_MAJOR_VERSION"), rt.make_int(WX_GL_MAJOR_VERSION)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_MAJOR_VERSION"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,0,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_MINOR_VERSION"), rt.make_int(WX_GL_MINOR_VERSION)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_MINOR_VERSION"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,0,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_CORE_PROFILE"), rt.make_int(WX_GL_CORE_PROFILE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_CORE_PROFILE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_COMPAT_PROFILE"), rt.make_int(wx_GL_COMPAT_PROFILE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_COMPAT_PROFILE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_FORWARD_COMPAT"), rt.make_int(WX_GL_FORWARD_COMPAT)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_FORWARD_COMPAT"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_ES2"), rt.make_int(WX_GL_ES2)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_ES2"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_DEBUG"), rt.make_int(WX_GL_DEBUG)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_DEBUG"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_ROBUST_ACCESS"), rt.make_int(WX_GL_ROBUST_ACCESS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_ROBUST_ACCESS"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_NO_RESET_NOTIFY"), rt.make_int(WX_GL_NO_RESET_NOTIFY)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_NO_RESET_NOTIFY"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_LOSE_ON_RESET"), rt.make_int(WX_GL_LOSE_ON_RESET)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_LOSE_ON_RESET"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_RESET_ISOLATION"), rt.make_int(WX_GL_RESET_ISOLATION)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_RESET_ISOLATION"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_RELEASE_FLUSH"), rt.make_int(WX_GL_RELEASE_FLUSH)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_RELEASE_FLUSH"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_RELEASE_NONE"), rt.make_int(WX_GL_RELEASE_NONE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGL_FLAGS"), rt.make_atom("wx_GL_RELEASE_NONE"), WXE_ATOM_undefined),
#endif
//  From "defs.h": wxGeometryCentre
    enif_make_tuple3(rt.env, rt.make_atom("wxGeometryCentre"), rt.make_atom("wxCENTRE"), rt.make_int(wxCENTRE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGeometryCentre"), rt.make_atom("wxCENTER"), rt.make_int(wxCENTER)),
//  From "graphics.h": wxGradientType
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxGradientType"), rt.make_atom("wxGRADIENT_NONE"), rt.make_int(wxGRADIENT_NONE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGradientType"), rt.make_atom("wxGRADIENT_NONE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxGradientType"), rt.make_atom("wxGRADIENT_LINEAR"), rt.make_int(wxGRADIENT_LINEAR)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGradientType"), rt.make_atom("wxGRADIENT_LINEAR"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxGradientType"), rt.make_atom("wxGRADIENT_RADIAL"), rt.make_int(wxGRADIENT_RADIAL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxGradientType"), rt.make_atom("wxGRADIENT_RADIAL"), WXE_ATOM_undefined),
#endif
//  From "grid.h": wxGridCellFloatFormat
    enif_make_tuple3(rt.env, rt.make_atom("wxGridCellFloatFormat"), rt.make_atom("wxGRID_FLOAT_FORMAT_FIXED"), rt.make_int(wxGRID_FLOAT_FORMAT_FIXED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridCellFloatFormat"), rt.make_atom("wxGRID_FLOAT_FORMAT_SCIENTIFIC"), rt.make_int(wxGRID_FLOAT_FORMAT_SCIENTIFIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridCellFloatFormat"), rt.make_atom("wxGRID_FLOAT_FORMAT_COMPACT"), rt.make_int(wxGRID_FLOAT_FORMAT_COMPACT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridCellFloatFormat"), rt.make_atom("wxGRID_FLOAT_FORMAT_UPPER"), rt.make_int(wxGRID_FLOAT_FORMAT_UPPER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridCellFloatFormat"), rt.make_atom("wxGRID_FLOAT_FORMAT_DEFAULT"), rt.make_int(wxGRID_FLOAT_FORMAT_DEFAULT)),
//  From "grid.h": wxGridRenderStyle
    enif_make_tuple3(rt.env, rt.make_atom("wxGridRenderStyle"), rt.make_atom("wxGRID_DRAW_ROWS_HEADER"), rt.make_int(wxGRID_DRAW_ROWS_HEADER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridRenderStyle"), rt.make_atom("wxGRID_DRAW_COLS_HEADER"), rt.make_int(wxGRID_DRAW_COLS_HEADER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridRenderStyle"), rt.make_atom("wxGRID_DRAW_CELL_LINES"), rt.make_int(wxGRID_DRAW_CELL_LINES)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridRenderStyle"), rt.make_atom("wxGRID_DRAW_BOX_RECT"), rt.make_int(wxGRID_DRAW_BOX_RECT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridRenderStyle"), rt.make_atom("wxGRID_DRAW_SELECTION"), rt.make_int(wxGRID_DRAW_SELECTION)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridRenderStyle"), rt.make_atom("wxGRID_DRAW_DEFAULT"), rt.make_int(wxGRID_DRAW_DEFAULT)),
//  From "grid.h": wxGridTableRequest
    enif_make_tuple3(rt.env, rt.make_atom("wxGridTableRequest"), rt.make_atom("wxGRIDTABLE_NOTIFY_ROWS_INSERTED"), rt.make_int(wxGRIDTABLE_NOTIFY_ROWS_INSERTED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridTableRequest"), rt.make_atom("wxGRIDTABLE_NOTIFY_ROWS_APPENDED"), rt.make_int(wxGRIDTABLE_NOTIFY_ROWS_APPENDED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridTableRequest"), rt.make_atom("wxGRIDTABLE_NOTIFY_ROWS_DELETED"), rt.make_int(wxGRIDTABLE_NOTIFY_ROWS_DELETED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridTableRequest"), rt.make_atom("wxGRIDTABLE_NOTIFY_COLS_INSERTED"), rt.make_int(wxGRIDTABLE_NOTIFY_COLS_INSERTED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridTableRequest"), rt.make_atom("wxGRIDTABLE_NOTIFY_COLS_APPENDED"), rt.make_int(wxGRIDTABLE_NOTIFY_COLS_APPENDED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxGridTableRequest"), rt.make_atom("wxGRIDTABLE_NOTIFY_COLS_DELETED"), rt.make_int(wxGRIDTABLE_NOTIFY_COLS_DELETED)),
//  From "defs.h": wxHitTest
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_NOWHERE"), rt.make_int(wxHT_NOWHERE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_SCROLLBAR_FIRST"), rt.make_int(wxHT_SCROLLBAR_FIRST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_SCROLLBAR_ARROW_LINE_1"), rt.make_int(wxHT_SCROLLBAR_ARROW_LINE_1)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_SCROLLBAR_ARROW_LINE_2"), rt.make_int(wxHT_SCROLLBAR_ARROW_LINE_2)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_SCROLLBAR_ARROW_PAGE_1"), rt.make_int(wxHT_SCROLLBAR_ARROW_PAGE_1)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_SCROLLBAR_ARROW_PAGE_2"), rt.make_int(wxHT_SCROLLBAR_ARROW_PAGE_2)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_SCROLLBAR_THUMB"), rt.make_int(wxHT_SCROLLBAR_THUMB)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_SCROLLBAR_BAR_1"), rt.make_int(wxHT_SCROLLBAR_BAR_1)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_SCROLLBAR_BAR_2"), rt.make_int(wxHT_SCROLLBAR_BAR_2)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_SCROLLBAR_LAST"), rt.make_int(wxHT_SCROLLBAR_LAST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_WINDOW_OUTSIDE"), rt.make_int(wxHT_WINDOW_OUTSIDE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_WINDOW_INSIDE"), rt.make_int(wxHT_WINDOW_INSIDE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_WINDOW_VERT_SCROLLBAR"), rt.make_int(wxHT_WINDOW_VERT_SCROLLBAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_WINDOW_HORZ_SCROLLBAR"), rt.make_int(wxHT_WINDOW_HORZ_SCROLLBAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_WINDOW_CORNER"), rt.make_int(wxHT_WINDOW_CORNER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHitTest"), rt.make_atom("wxHT_MAX"), rt.make_int(wxHT_MAX)),
//  From "htmlwin.h": wxHtmlOpeningStatus
    enif_make_tuple3(rt.env, rt.make_atom("wxHtmlOpeningStatus"), rt.make_atom("wxHTML_OPEN"), rt.make_int(wxHTML_OPEN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHtmlOpeningStatus"), rt.make_atom("wxHTML_BLOCK"), rt.make_int(wxHTML_BLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxHtmlOpeningStatus"), rt.make_atom("wxHTML_REDIRECT"), rt.make_int(wxHTML_REDIRECT)),
//  From "event.h": wxIdleMode
    enif_make_tuple3(rt.env, rt.make_atom("wxIdleMode"), rt.make_atom("wxIDLE_PROCESS_ALL"), rt.make_int(wxIDLE_PROCESS_ALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxIdleMode"), rt.make_atom("wxIDLE_PROCESS_SPECIFIED"), rt.make_int(wxIDLE_PROCESS_SPECIFIED)),
//  From "imaglist.h": wxImageListFlags
    enif_make_tuple3(rt.env, rt.make_atom("wxImageListFlags"), rt.make_atom("wxIMAGE_LIST_NORMAL"), rt.make_int(wxIMAGE_LIST_NORMAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxImageListFlags"), rt.make_atom("wxIMAGE_LIST_SMALL"), rt.make_int(wxIMAGE_LIST_SMALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxImageListFlags"), rt.make_atom("wxIMAGE_LIST_STATE"), rt.make_int(wxIMAGE_LIST_STATE)),
//  From "image.h": wxImagePNGType
    enif_make_tuple3(rt.env, rt.make_atom("wxImagePNGType"), rt.make_atom("wxPNG_TYPE_COLOUR"), rt.make_int(wxPNG_TYPE_COLOUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxImagePNGType"), rt.make_atom("wxPNG_TYPE_GREY"), rt.make_int(wxPNG_TYPE_GREY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxImagePNGType"), rt.make_atom("wxPNG_TYPE_GREY_RED"), rt.make_int(wxPNG_TYPE_GREY_RED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxImagePNGType"), rt.make_atom("wxPNG_TYPE_PALETTE"), rt.make_int(wxPNG_TYPE_PALETTE)),
//  From "image.h": wxImageResizeQuality
    enif_make_tuple3(rt.env, rt.make_atom("wxImageResizeQuality"), rt.make_atom("wxIMAGE_QUALITY_NEAREST"), rt.make_int(wxIMAGE_QUALITY_NEAREST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxImageResizeQuality"), rt.make_atom("wxIMAGE_QUALITY_BILINEAR"), rt.make_int(wxIMAGE_QUALITY_BILINEAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxImageResizeQuality"), rt.make_atom("wxIMAGE_QUALITY_BICUBIC"), rt.make_int(wxIMAGE_QUALITY_BICUBIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxImageResizeQuality"), rt.make_atom("wxIMAGE_QUALITY_BOX_AVERAGE"), rt.make_int(wxIMAGE_QUALITY_BOX_AVERAGE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxImageResizeQuality"), rt.make_atom("wxIMAGE_QUALITY_NORMAL"), rt.make_int(wxIMAGE_QUALITY_NORMAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxImageResizeQuality"), rt.make_atom("wxIMAGE_QUALITY_HIGH"), rt.make_int(wxIMAGE_QUALITY_HIGH)),
//  From "image.h": wxImageResolution
    enif_make_tuple3(rt.env, rt.make_atom("wxImageResolution"), rt.make_atom("wxIMAGE_RESOLUTION_NONE"), rt.make_int(wxIMAGE_RESOLUTION_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxImageResolution"), rt.make_atom("wxIMAGE_RESOLUTION_INCHES"), rt.make_int(wxIMAGE_RESOLUTION_INCHES)),
    enif_make_tuple3(rt.env, rt.make_atom("wxImageResolution"), rt.make_atom("wxIMAGE_RESOLUTION_CM"), rt.make_int(wxIMAGE_RESOLUTION_CM)),
//  From "graphics.h": wxInterpolationQuality
    enif_make_tuple3(rt.env, rt.make_atom("wxInterpolationQuality"), rt.make_atom("wxINTERPOLATION_DEFAULT"), rt.make_int(wxINTERPOLATION_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxInterpolationQuality"), rt.make_atom("wxINTERPOLATION_NONE"), rt.make_int(wxINTERPOLATION_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxInterpolationQuality"), rt.make_atom("wxINTERPOLATION_FAST"), rt.make_int(wxINTERPOLATION_FAST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxInterpolationQuality"), rt.make_atom("wxINTERPOLATION_GOOD"), rt.make_int(wxINTERPOLATION_GOOD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxInterpolationQuality"), rt.make_atom("wxINTERPOLATION_BEST"), rt.make_int(wxINTERPOLATION_BEST)),
//  From "defs.h": wxItemKind
    enif_make_tuple3(rt.env, rt.make_atom("wxItemKind"), rt.make_atom("wxITEM_SEPARATOR"), rt.make_int(wxITEM_SEPARATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxItemKind"), rt.make_atom("wxITEM_NORMAL"), rt.make_int(wxITEM_NORMAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxItemKind"), rt.make_atom("wxITEM_CHECK"), rt.make_int(wxITEM_CHECK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxItemKind"), rt.make_atom("wxITEM_RADIO"), rt.make_int(wxITEM_RADIO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxItemKind"), rt.make_atom("wxITEM_DROPDOWN"), rt.make_int(wxITEM_DROPDOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxItemKind"), rt.make_atom("wxITEM_MAX"), rt.make_int(wxITEM_MAX)),
//  From "event.h": wxKeyCategoryFlags
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCategoryFlags"), rt.make_atom("wxk_CATEGORY_ARROW"), rt.make_int(WXK_CATEGORY_ARROW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCategoryFlags"), rt.make_atom("wxk_CATEGORY_PAGING"), rt.make_int(WXK_CATEGORY_PAGING)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCategoryFlags"), rt.make_atom("wxk_CATEGORY_JUMP"), rt.make_int(WXK_CATEGORY_JUMP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCategoryFlags"), rt.make_atom("wxk_CATEGORY_TAB"), rt.make_int(WXK_CATEGORY_TAB)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCategoryFlags"), rt.make_atom("wxk_CATEGORY_CUT"), rt.make_int(WXK_CATEGORY_CUT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCategoryFlags"), rt.make_atom("wxk_CATEGORY_NAVIGATION"), rt.make_int(WXK_CATEGORY_NAVIGATION)),
//  From "defs.h": wxKeyCode
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NONE"), rt.make_int(WXK_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_A"), rt.make_int(WXK_CONTROL_A)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_B"), rt.make_int(WXK_CONTROL_B)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_C"), rt.make_int(WXK_CONTROL_C)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_D"), rt.make_int(WXK_CONTROL_D)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_E"), rt.make_int(WXK_CONTROL_E)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_F"), rt.make_int(WXK_CONTROL_F)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_G"), rt.make_int(WXK_CONTROL_G)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_H"), rt.make_int(WXK_CONTROL_H)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_I"), rt.make_int(WXK_CONTROL_I)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_J"), rt.make_int(WXK_CONTROL_J)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_K"), rt.make_int(WXK_CONTROL_K)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_L"), rt.make_int(WXK_CONTROL_L)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_M"), rt.make_int(WXK_CONTROL_M)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_N"), rt.make_int(WXK_CONTROL_N)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_O"), rt.make_int(WXK_CONTROL_O)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_P"), rt.make_int(WXK_CONTROL_P)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_Q"), rt.make_int(WXK_CONTROL_Q)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_R"), rt.make_int(WXK_CONTROL_R)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_S"), rt.make_int(WXK_CONTROL_S)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_T"), rt.make_int(WXK_CONTROL_T)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_U"), rt.make_int(WXK_CONTROL_U)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_V"), rt.make_int(WXK_CONTROL_V)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_W"), rt.make_int(WXK_CONTROL_W)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_X"), rt.make_int(WXK_CONTROL_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_Y"), rt.make_int(WXK_CONTROL_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL_Z"), rt.make_int(WXK_CONTROL_Z)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_BACK"), rt.make_int(WXK_BACK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_TAB"), rt.make_int(WXK_TAB)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_RETURN"), rt.make_int(WXK_RETURN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_ESCAPE"), rt.make_int(WXK_ESCAPE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPACE"), rt.make_int(WXK_SPACE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_DELETE"), rt.make_int(WXK_DELETE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_START"), rt.make_int(WXK_START)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_LBUTTON"), rt.make_int(WXK_LBUTTON)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_RBUTTON"), rt.make_int(WXK_RBUTTON)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CANCEL"), rt.make_int(WXK_CANCEL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_MBUTTON"), rt.make_int(WXK_MBUTTON)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CLEAR"), rt.make_int(WXK_CLEAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SHIFT"), rt.make_int(WXK_SHIFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_ALT"), rt.make_int(WXK_ALT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CONTROL"), rt.make_int(WXK_CONTROL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_MENU"), rt.make_int(WXK_MENU)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_PAUSE"), rt.make_int(WXK_PAUSE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_CAPITAL"), rt.make_int(WXK_CAPITAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_END"), rt.make_int(WXK_END)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_HOME"), rt.make_int(WXK_HOME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_LEFT"), rt.make_int(WXK_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_UP"), rt.make_int(WXK_UP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_RIGHT"), rt.make_int(WXK_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_DOWN"), rt.make_int(WXK_DOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SELECT"), rt.make_int(WXK_SELECT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_PRINT"), rt.make_int(WXK_PRINT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_EXECUTE"), rt.make_int(WXK_EXECUTE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SNAPSHOT"), rt.make_int(WXK_SNAPSHOT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_INSERT"), rt.make_int(WXK_INSERT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_HELP"), rt.make_int(WXK_HELP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD0"), rt.make_int(WXK_NUMPAD0)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD1"), rt.make_int(WXK_NUMPAD1)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD2"), rt.make_int(WXK_NUMPAD2)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD3"), rt.make_int(WXK_NUMPAD3)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD4"), rt.make_int(WXK_NUMPAD4)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD5"), rt.make_int(WXK_NUMPAD5)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD6"), rt.make_int(WXK_NUMPAD6)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD7"), rt.make_int(WXK_NUMPAD7)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD8"), rt.make_int(WXK_NUMPAD8)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD9"), rt.make_int(WXK_NUMPAD9)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_MULTIPLY"), rt.make_int(WXK_MULTIPLY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_ADD"), rt.make_int(WXK_ADD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SEPARATOR"), rt.make_int(WXK_SEPARATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SUBTRACT"), rt.make_int(WXK_SUBTRACT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_DECIMAL"), rt.make_int(WXK_DECIMAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_DIVIDE"), rt.make_int(WXK_DIVIDE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F1"), rt.make_int(WXK_F1)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F2"), rt.make_int(WXK_F2)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F3"), rt.make_int(WXK_F3)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F4"), rt.make_int(WXK_F4)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F5"), rt.make_int(WXK_F5)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F6"), rt.make_int(WXK_F6)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F7"), rt.make_int(WXK_F7)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F8"), rt.make_int(WXK_F8)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F9"), rt.make_int(WXK_F9)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F10"), rt.make_int(WXK_F10)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F11"), rt.make_int(WXK_F11)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F12"), rt.make_int(WXK_F12)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F13"), rt.make_int(WXK_F13)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F14"), rt.make_int(WXK_F14)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F15"), rt.make_int(WXK_F15)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F16"), rt.make_int(WXK_F16)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F17"), rt.make_int(WXK_F17)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F18"), rt.make_int(WXK_F18)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F19"), rt.make_int(WXK_F19)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F20"), rt.make_int(WXK_F20)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F21"), rt.make_int(WXK_F21)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F22"), rt.make_int(WXK_F22)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F23"), rt.make_int(WXK_F23)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_F24"), rt.make_int(WXK_F24)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMLOCK"), rt.make_int(WXK_NUMLOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SCROLL"), rt.make_int(WXK_SCROLL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_PAGEUP"), rt.make_int(WXK_PAGEUP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_PAGEDOWN"), rt.make_int(WXK_PAGEDOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_SPACE"), rt.make_int(WXK_NUMPAD_SPACE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_TAB"), rt.make_int(WXK_NUMPAD_TAB)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_ENTER"), rt.make_int(WXK_NUMPAD_ENTER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_F1"), rt.make_int(WXK_NUMPAD_F1)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_F2"), rt.make_int(WXK_NUMPAD_F2)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_F3"), rt.make_int(WXK_NUMPAD_F3)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_F4"), rt.make_int(WXK_NUMPAD_F4)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_HOME"), rt.make_int(WXK_NUMPAD_HOME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_LEFT"), rt.make_int(WXK_NUMPAD_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_UP"), rt.make_int(WXK_NUMPAD_UP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_RIGHT"), rt.make_int(WXK_NUMPAD_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_DOWN"), rt.make_int(WXK_NUMPAD_DOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_PAGEUP"), rt.make_int(WXK_NUMPAD_PAGEUP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_PAGEDOWN"), rt.make_int(WXK_NUMPAD_PAGEDOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_END"), rt.make_int(WXK_NUMPAD_END)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_BEGIN"), rt.make_int(WXK_NUMPAD_BEGIN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_INSERT"), rt.make_int(WXK_NUMPAD_INSERT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_DELETE"), rt.make_int(WXK_NUMPAD_DELETE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_EQUAL"), rt.make_int(WXK_NUMPAD_EQUAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_MULTIPLY"), rt.make_int(WXK_NUMPAD_MULTIPLY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_ADD"), rt.make_int(WXK_NUMPAD_ADD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_SEPARATOR"), rt.make_int(WXK_NUMPAD_SEPARATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_SUBTRACT"), rt.make_int(WXK_NUMPAD_SUBTRACT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_DECIMAL"), rt.make_int(WXK_NUMPAD_DECIMAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_NUMPAD_DIVIDE"), rt.make_int(WXK_NUMPAD_DIVIDE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_WINDOWS_LEFT"), rt.make_int(WXK_WINDOWS_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_WINDOWS_RIGHT"), rt.make_int(WXK_WINDOWS_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_WINDOWS_MENU"), rt.make_int(WXK_WINDOWS_MENU)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_RAW_CONTROL"), rt.make_int(WXK_RAW_CONTROL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_COMMAND"), rt.make_int(WXK_COMMAND)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL1"), rt.make_int(WXK_SPECIAL1)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL2"), rt.make_int(WXK_SPECIAL2)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL3"), rt.make_int(WXK_SPECIAL3)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL4"), rt.make_int(WXK_SPECIAL4)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL5"), rt.make_int(WXK_SPECIAL5)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL6"), rt.make_int(WXK_SPECIAL6)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL7"), rt.make_int(WXK_SPECIAL7)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL8"), rt.make_int(WXK_SPECIAL8)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL9"), rt.make_int(WXK_SPECIAL9)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL10"), rt.make_int(WXK_SPECIAL10)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL11"), rt.make_int(WXK_SPECIAL11)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL12"), rt.make_int(WXK_SPECIAL12)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL13"), rt.make_int(WXK_SPECIAL13)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL14"), rt.make_int(WXK_SPECIAL14)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL15"), rt.make_int(WXK_SPECIAL15)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL16"), rt.make_int(WXK_SPECIAL16)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL17"), rt.make_int(WXK_SPECIAL17)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL18"), rt.make_int(WXK_SPECIAL18)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL19"), rt.make_int(WXK_SPECIAL19)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_SPECIAL20"), rt.make_int(WXK_SPECIAL20)),
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_BROWSER_BACK"), rt.make_int(WXK_BROWSER_BACK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_BROWSER_BACK"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_BROWSER_FORWARD"), rt.make_int(WXK_BROWSER_FORWARD)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_BROWSER_FORWARD"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_BROWSER_REFRESH"), rt.make_int(WXK_BROWSER_REFRESH)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_BROWSER_REFRESH"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_BROWSER_STOP"), rt.make_int(WXK_BROWSER_STOP)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_BROWSER_STOP"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_BROWSER_SEARCH"), rt.make_int(WXK_BROWSER_SEARCH)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_BROWSER_SEARCH"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_BROWSER_FAVORITES"), rt.make_int(WXK_BROWSER_FAVORITES)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_BROWSER_FAVORITES"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_BROWSER_HOME"), rt.make_int(WXK_BROWSER_HOME)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_BROWSER_HOME"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_VOLUME_MUTE"), rt.make_int(WXK_VOLUME_MUTE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_VOLUME_MUTE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_VOLUME_DOWN"), rt.make_int(WXK_VOLUME_DOWN)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_VOLUME_DOWN"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_VOLUME_UP"), rt.make_int(WXK_VOLUME_UP)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_VOLUME_UP"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_MEDIA_NEXT_TRACK"), rt.make_int(WXK_MEDIA_NEXT_TRACK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_MEDIA_NEXT_TRACK"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_MEDIA_PREV_TRACK"), rt.make_int(WXK_MEDIA_PREV_TRACK)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_MEDIA_PREV_TRACK"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_MEDIA_STOP"), rt.make_int(WXK_MEDIA_STOP)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_MEDIA_STOP"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_MEDIA_PLAY_PAUSE"), rt.make_int(WXK_MEDIA_PLAY_PAUSE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_MEDIA_PLAY_PAUSE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_LAUNCH_MAIL"), rt.make_int(WXK_LAUNCH_MAIL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_LAUNCH_MAIL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_LAUNCH_APP1"), rt.make_int(WXK_LAUNCH_APP1)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_LAUNCH_APP1"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,0)
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_LAUNCH_APP2"), rt.make_int(WXK_LAUNCH_APP2)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyCode"), rt.make_atom("wxk_LAUNCH_APP2"), WXE_ATOM_undefined),
#endif
//  From "defs.h": wxKeyModifier
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyModifier"), rt.make_atom("wxMOD_NONE"), rt.make_int(wxMOD_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyModifier"), rt.make_atom("wxMOD_ALT"), rt.make_int(wxMOD_ALT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyModifier"), rt.make_atom("wxMOD_CONTROL"), rt.make_int(wxMOD_CONTROL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyModifier"), rt.make_atom("wxMOD_ALTGR"), rt.make_int(wxMOD_ALTGR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyModifier"), rt.make_atom("wxMOD_SHIFT"), rt.make_int(wxMOD_SHIFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyModifier"), rt.make_atom("wxMOD_META"), rt.make_int(wxMOD_META)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyModifier"), rt.make_atom("wxMOD_WIN"), rt.make_int(wxMOD_WIN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyModifier"), rt.make_atom("wxMOD_RAW_CONTROL"), rt.make_int(wxMOD_RAW_CONTROL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyModifier"), rt.make_atom("wxMOD_CMD"), rt.make_int(wxMOD_CMD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKeyModifier"), rt.make_atom("wxMOD_ALL"), rt.make_int(wxMOD_ALL)),
//  From "utils.h": wxKillError
    enif_make_tuple3(rt.env, rt.make_atom("wxKillError"), rt.make_atom("wxKILL_OK"), rt.make_int(wxKILL_OK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKillError"), rt.make_atom("wxKILL_BAD_SIGNAL"), rt.make_int(wxKILL_BAD_SIGNAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKillError"), rt.make_atom("wxKILL_ACCESS_DENIED"), rt.make_int(wxKILL_ACCESS_DENIED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKillError"), rt.make_atom("wxKILL_NO_PROCESS"), rt.make_int(wxKILL_NO_PROCESS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKillError"), rt.make_atom("wxKILL_ERROR"), rt.make_int(wxKILL_ERROR)),
//  From "utils.h": wxKillFlags
    enif_make_tuple3(rt.env, rt.make_atom("wxKillFlags"), rt.make_atom("wxKILL_NOCHILDREN"), rt.make_int(wxKILL_NOCHILDREN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxKillFlags"), rt.make_atom("wxKILL_CHILDREN"), rt.make_int(wxKILL_CHILDREN)),
//  From "language.h": wxLanguage
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_DEFAULT"), rt.make_int(wxLANGUAGE_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_UNKNOWN"), rt.make_int(wxLANGUAGE_UNKNOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ABKHAZIAN"), rt.make_int(wxLANGUAGE_ABKHAZIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_AFAR"), rt.make_int(wxLANGUAGE_AFAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_AFRIKAANS"), rt.make_int(wxLANGUAGE_AFRIKAANS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ALBANIAN"), rt.make_int(wxLANGUAGE_ALBANIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_AMHARIC"), rt.make_int(wxLANGUAGE_AMHARIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC"), rt.make_int(wxLANGUAGE_ARABIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_ALGERIA"), rt.make_int(wxLANGUAGE_ARABIC_ALGERIA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_BAHRAIN"), rt.make_int(wxLANGUAGE_ARABIC_BAHRAIN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_EGYPT"), rt.make_int(wxLANGUAGE_ARABIC_EGYPT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_IRAQ"), rt.make_int(wxLANGUAGE_ARABIC_IRAQ)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_JORDAN"), rt.make_int(wxLANGUAGE_ARABIC_JORDAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_KUWAIT"), rt.make_int(wxLANGUAGE_ARABIC_KUWAIT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_LEBANON"), rt.make_int(wxLANGUAGE_ARABIC_LEBANON)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_LIBYA"), rt.make_int(wxLANGUAGE_ARABIC_LIBYA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_MOROCCO"), rt.make_int(wxLANGUAGE_ARABIC_MOROCCO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_OMAN"), rt.make_int(wxLANGUAGE_ARABIC_OMAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_QATAR"), rt.make_int(wxLANGUAGE_ARABIC_QATAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_SAUDI_ARABIA"), rt.make_int(wxLANGUAGE_ARABIC_SAUDI_ARABIA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_SUDAN"), rt.make_int(wxLANGUAGE_ARABIC_SUDAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_SYRIA"), rt.make_int(wxLANGUAGE_ARABIC_SYRIA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_TUNISIA"), rt.make_int(wxLANGUAGE_ARABIC_TUNISIA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_UAE"), rt.make_int(wxLANGUAGE_ARABIC_UAE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARABIC_YEMEN"), rt.make_int(wxLANGUAGE_ARABIC_YEMEN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ARMENIAN"), rt.make_int(wxLANGUAGE_ARMENIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ASSAMESE"), rt.make_int(wxLANGUAGE_ASSAMESE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ASTURIAN"), rt.make_int(wxLANGUAGE_ASTURIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_AYMARA"), rt.make_int(wxLANGUAGE_AYMARA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_AZERI"), rt.make_int(wxLANGUAGE_AZERI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_AZERI_CYRILLIC"), rt.make_int(wxLANGUAGE_AZERI_CYRILLIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_AZERI_LATIN"), rt.make_int(wxLANGUAGE_AZERI_LATIN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_BASHKIR"), rt.make_int(wxLANGUAGE_BASHKIR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_BASQUE"), rt.make_int(wxLANGUAGE_BASQUE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_BELARUSIAN"), rt.make_int(wxLANGUAGE_BELARUSIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_BENGALI"), rt.make_int(wxLANGUAGE_BENGALI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_BHUTANI"), rt.make_int(wxLANGUAGE_BHUTANI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_BIHARI"), rt.make_int(wxLANGUAGE_BIHARI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_BISLAMA"), rt.make_int(wxLANGUAGE_BISLAMA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_BOSNIAN"), rt.make_int(wxLANGUAGE_BOSNIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_BRETON"), rt.make_int(wxLANGUAGE_BRETON)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_BULGARIAN"), rt.make_int(wxLANGUAGE_BULGARIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_BURMESE"), rt.make_int(wxLANGUAGE_BURMESE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_CATALAN"), rt.make_int(wxLANGUAGE_CATALAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_CHINESE"), rt.make_int(wxLANGUAGE_CHINESE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_CHINESE_SIMPLIFIED"), rt.make_int(wxLANGUAGE_CHINESE_SIMPLIFIED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_CHINESE_TRADITIONAL"), rt.make_int(wxLANGUAGE_CHINESE_TRADITIONAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_CHINESE_HONGKONG"), rt.make_int(wxLANGUAGE_CHINESE_HONGKONG)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_CHINESE_MACAU"), rt.make_int(wxLANGUAGE_CHINESE_MACAU)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_CHINESE_SINGAPORE"), rt.make_int(wxLANGUAGE_CHINESE_SINGAPORE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_CHINESE_TAIWAN"), rt.make_int(wxLANGUAGE_CHINESE_TAIWAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_CORSICAN"), rt.make_int(wxLANGUAGE_CORSICAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_CROATIAN"), rt.make_int(wxLANGUAGE_CROATIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_CZECH"), rt.make_int(wxLANGUAGE_CZECH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_DANISH"), rt.make_int(wxLANGUAGE_DANISH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_DUTCH"), rt.make_int(wxLANGUAGE_DUTCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_DUTCH_BELGIAN"), rt.make_int(wxLANGUAGE_DUTCH_BELGIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH"), rt.make_int(wxLANGUAGE_ENGLISH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH_UK"), rt.make_int(wxLANGUAGE_ENGLISH_UK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH_US"), rt.make_int(wxLANGUAGE_ENGLISH_US)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH_AUSTRALIA"), rt.make_int(wxLANGUAGE_ENGLISH_AUSTRALIA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH_BELIZE"), rt.make_int(wxLANGUAGE_ENGLISH_BELIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH_BOTSWANA"), rt.make_int(wxLANGUAGE_ENGLISH_BOTSWANA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH_CANADA"), rt.make_int(wxLANGUAGE_ENGLISH_CANADA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH_CARIBBEAN"), rt.make_int(wxLANGUAGE_ENGLISH_CARIBBEAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH_DENMARK"), rt.make_int(wxLANGUAGE_ENGLISH_DENMARK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH_EIRE"), rt.make_int(wxLANGUAGE_ENGLISH_EIRE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH_JAMAICA"), rt.make_int(wxLANGUAGE_ENGLISH_JAMAICA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH_NEW_ZEALAND"), rt.make_int(wxLANGUAGE_ENGLISH_NEW_ZEALAND)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH_PHILIPPINES"), rt.make_int(wxLANGUAGE_ENGLISH_PHILIPPINES)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH_SOUTH_AFRICA"), rt.make_int(wxLANGUAGE_ENGLISH_SOUTH_AFRICA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH_TRINIDAD"), rt.make_int(wxLANGUAGE_ENGLISH_TRINIDAD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ENGLISH_ZIMBABWE"), rt.make_int(wxLANGUAGE_ENGLISH_ZIMBABWE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ESPERANTO"), rt.make_int(wxLANGUAGE_ESPERANTO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ESTONIAN"), rt.make_int(wxLANGUAGE_ESTONIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_FAEROESE"), rt.make_int(wxLANGUAGE_FAEROESE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_FARSI"), rt.make_int(wxLANGUAGE_FARSI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_FIJI"), rt.make_int(wxLANGUAGE_FIJI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_FINNISH"), rt.make_int(wxLANGUAGE_FINNISH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_FRENCH"), rt.make_int(wxLANGUAGE_FRENCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_FRENCH_BELGIAN"), rt.make_int(wxLANGUAGE_FRENCH_BELGIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_FRENCH_CANADIAN"), rt.make_int(wxLANGUAGE_FRENCH_CANADIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_FRENCH_LUXEMBOURG"), rt.make_int(wxLANGUAGE_FRENCH_LUXEMBOURG)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_FRENCH_MONACO"), rt.make_int(wxLANGUAGE_FRENCH_MONACO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_FRENCH_SWISS"), rt.make_int(wxLANGUAGE_FRENCH_SWISS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_FRISIAN"), rt.make_int(wxLANGUAGE_FRISIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_GALICIAN"), rt.make_int(wxLANGUAGE_GALICIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_GEORGIAN"), rt.make_int(wxLANGUAGE_GEORGIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_GERMAN"), rt.make_int(wxLANGUAGE_GERMAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_GERMAN_AUSTRIAN"), rt.make_int(wxLANGUAGE_GERMAN_AUSTRIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_GERMAN_BELGIUM"), rt.make_int(wxLANGUAGE_GERMAN_BELGIUM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_GERMAN_LIECHTENSTEIN"), rt.make_int(wxLANGUAGE_GERMAN_LIECHTENSTEIN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_GERMAN_LUXEMBOURG"), rt.make_int(wxLANGUAGE_GERMAN_LUXEMBOURG)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_GERMAN_SWISS"), rt.make_int(wxLANGUAGE_GERMAN_SWISS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_GREEK"), rt.make_int(wxLANGUAGE_GREEK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_GREENLANDIC"), rt.make_int(wxLANGUAGE_GREENLANDIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_GUARANI"), rt.make_int(wxLANGUAGE_GUARANI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_GUJARATI"), rt.make_int(wxLANGUAGE_GUJARATI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_HAUSA"), rt.make_int(wxLANGUAGE_HAUSA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_HEBREW"), rt.make_int(wxLANGUAGE_HEBREW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_HINDI"), rt.make_int(wxLANGUAGE_HINDI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_HUNGARIAN"), rt.make_int(wxLANGUAGE_HUNGARIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ICELANDIC"), rt.make_int(wxLANGUAGE_ICELANDIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_INDONESIAN"), rt.make_int(wxLANGUAGE_INDONESIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_INTERLINGUA"), rt.make_int(wxLANGUAGE_INTERLINGUA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_INTERLINGUE"), rt.make_int(wxLANGUAGE_INTERLINGUE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_INUKTITUT"), rt.make_int(wxLANGUAGE_INUKTITUT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_INUPIAK"), rt.make_int(wxLANGUAGE_INUPIAK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_IRISH"), rt.make_int(wxLANGUAGE_IRISH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ITALIAN"), rt.make_int(wxLANGUAGE_ITALIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ITALIAN_SWISS"), rt.make_int(wxLANGUAGE_ITALIAN_SWISS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_JAPANESE"), rt.make_int(wxLANGUAGE_JAPANESE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_JAVANESE"), rt.make_int(wxLANGUAGE_JAVANESE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_KABYLE"), rt.make_int(wxLANGUAGE_KABYLE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_KANNADA"), rt.make_int(wxLANGUAGE_KANNADA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_KASHMIRI"), rt.make_int(wxLANGUAGE_KASHMIRI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_KASHMIRI_INDIA"), rt.make_int(wxLANGUAGE_KASHMIRI_INDIA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_KAZAKH"), rt.make_int(wxLANGUAGE_KAZAKH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_KERNEWEK"), rt.make_int(wxLANGUAGE_KERNEWEK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_KINYARWANDA"), rt.make_int(wxLANGUAGE_KINYARWANDA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_KIRGHIZ"), rt.make_int(wxLANGUAGE_KIRGHIZ)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_KIRUNDI"), rt.make_int(wxLANGUAGE_KIRUNDI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_KONKANI"), rt.make_int(wxLANGUAGE_KONKANI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_KOREAN"), rt.make_int(wxLANGUAGE_KOREAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_KURDISH"), rt.make_int(wxLANGUAGE_KURDISH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_LAOTHIAN"), rt.make_int(wxLANGUAGE_LAOTHIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_LATIN"), rt.make_int(wxLANGUAGE_LATIN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_LATVIAN"), rt.make_int(wxLANGUAGE_LATVIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_LINGALA"), rt.make_int(wxLANGUAGE_LINGALA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_LITHUANIAN"), rt.make_int(wxLANGUAGE_LITHUANIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_MACEDONIAN"), rt.make_int(wxLANGUAGE_MACEDONIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_MALAGASY"), rt.make_int(wxLANGUAGE_MALAGASY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_MALAY"), rt.make_int(wxLANGUAGE_MALAY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_MALAYALAM"), rt.make_int(wxLANGUAGE_MALAYALAM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_MALAY_BRUNEI_DARUSSALAM"), rt.make_int(wxLANGUAGE_MALAY_BRUNEI_DARUSSALAM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_MALAY_MALAYSIA"), rt.make_int(wxLANGUAGE_MALAY_MALAYSIA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_MALTESE"), rt.make_int(wxLANGUAGE_MALTESE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_MANIPURI"), rt.make_int(wxLANGUAGE_MANIPURI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_MAORI"), rt.make_int(wxLANGUAGE_MAORI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_MARATHI"), rt.make_int(wxLANGUAGE_MARATHI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_MOLDAVIAN"), rt.make_int(wxLANGUAGE_MOLDAVIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_MONGOLIAN"), rt.make_int(wxLANGUAGE_MONGOLIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_NAURU"), rt.make_int(wxLANGUAGE_NAURU)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_NEPALI"), rt.make_int(wxLANGUAGE_NEPALI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_NEPALI_INDIA"), rt.make_int(wxLANGUAGE_NEPALI_INDIA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_NORWEGIAN_BOKMAL"), rt.make_int(wxLANGUAGE_NORWEGIAN_BOKMAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_NORWEGIAN_NYNORSK"), rt.make_int(wxLANGUAGE_NORWEGIAN_NYNORSK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_OCCITAN"), rt.make_int(wxLANGUAGE_OCCITAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ORIYA"), rt.make_int(wxLANGUAGE_ORIYA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_OROMO"), rt.make_int(wxLANGUAGE_OROMO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_PASHTO"), rt.make_int(wxLANGUAGE_PASHTO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_POLISH"), rt.make_int(wxLANGUAGE_POLISH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_PORTUGUESE"), rt.make_int(wxLANGUAGE_PORTUGUESE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_PORTUGUESE_BRAZILIAN"), rt.make_int(wxLANGUAGE_PORTUGUESE_BRAZILIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_PUNJABI"), rt.make_int(wxLANGUAGE_PUNJABI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_QUECHUA"), rt.make_int(wxLANGUAGE_QUECHUA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_RHAETO_ROMANCE"), rt.make_int(wxLANGUAGE_RHAETO_ROMANCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ROMANIAN"), rt.make_int(wxLANGUAGE_ROMANIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_RUSSIAN"), rt.make_int(wxLANGUAGE_RUSSIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_RUSSIAN_UKRAINE"), rt.make_int(wxLANGUAGE_RUSSIAN_UKRAINE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SAMI"), rt.make_int(wxLANGUAGE_SAMI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SAMOAN"), rt.make_int(wxLANGUAGE_SAMOAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SANGHO"), rt.make_int(wxLANGUAGE_SANGHO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SANSKRIT"), rt.make_int(wxLANGUAGE_SANSKRIT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SCOTS_GAELIC"), rt.make_int(wxLANGUAGE_SCOTS_GAELIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SERBIAN"), rt.make_int(wxLANGUAGE_SERBIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SERBIAN_CYRILLIC"), rt.make_int(wxLANGUAGE_SERBIAN_CYRILLIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SERBIAN_LATIN"), rt.make_int(wxLANGUAGE_SERBIAN_LATIN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SERBO_CROATIAN"), rt.make_int(wxLANGUAGE_SERBO_CROATIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SESOTHO"), rt.make_int(wxLANGUAGE_SESOTHO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SETSWANA"), rt.make_int(wxLANGUAGE_SETSWANA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SHONA"), rt.make_int(wxLANGUAGE_SHONA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SINDHI"), rt.make_int(wxLANGUAGE_SINDHI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SINHALESE"), rt.make_int(wxLANGUAGE_SINHALESE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SISWATI"), rt.make_int(wxLANGUAGE_SISWATI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SLOVAK"), rt.make_int(wxLANGUAGE_SLOVAK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SLOVENIAN"), rt.make_int(wxLANGUAGE_SLOVENIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SOMALI"), rt.make_int(wxLANGUAGE_SOMALI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH"), rt.make_int(wxLANGUAGE_SPANISH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_ARGENTINA"), rt.make_int(wxLANGUAGE_SPANISH_ARGENTINA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_BOLIVIA"), rt.make_int(wxLANGUAGE_SPANISH_BOLIVIA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_CHILE"), rt.make_int(wxLANGUAGE_SPANISH_CHILE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_COLOMBIA"), rt.make_int(wxLANGUAGE_SPANISH_COLOMBIA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_COSTA_RICA"), rt.make_int(wxLANGUAGE_SPANISH_COSTA_RICA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_DOMINICAN_REPUBLIC"), rt.make_int(wxLANGUAGE_SPANISH_DOMINICAN_REPUBLIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_ECUADOR"), rt.make_int(wxLANGUAGE_SPANISH_ECUADOR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_EL_SALVADOR"), rt.make_int(wxLANGUAGE_SPANISH_EL_SALVADOR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_GUATEMALA"), rt.make_int(wxLANGUAGE_SPANISH_GUATEMALA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_HONDURAS"), rt.make_int(wxLANGUAGE_SPANISH_HONDURAS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_MEXICAN"), rt.make_int(wxLANGUAGE_SPANISH_MEXICAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_MODERN"), rt.make_int(wxLANGUAGE_SPANISH_MODERN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_NICARAGUA"), rt.make_int(wxLANGUAGE_SPANISH_NICARAGUA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_PANAMA"), rt.make_int(wxLANGUAGE_SPANISH_PANAMA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_PARAGUAY"), rt.make_int(wxLANGUAGE_SPANISH_PARAGUAY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_PERU"), rt.make_int(wxLANGUAGE_SPANISH_PERU)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_PUERTO_RICO"), rt.make_int(wxLANGUAGE_SPANISH_PUERTO_RICO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_URUGUAY"), rt.make_int(wxLANGUAGE_SPANISH_URUGUAY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_US"), rt.make_int(wxLANGUAGE_SPANISH_US)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SPANISH_VENEZUELA"), rt.make_int(wxLANGUAGE_SPANISH_VENEZUELA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SUNDANESE"), rt.make_int(wxLANGUAGE_SUNDANESE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SWAHILI"), rt.make_int(wxLANGUAGE_SWAHILI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SWEDISH"), rt.make_int(wxLANGUAGE_SWEDISH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_SWEDISH_FINLAND"), rt.make_int(wxLANGUAGE_SWEDISH_FINLAND)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_TAGALOG"), rt.make_int(wxLANGUAGE_TAGALOG)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_TAJIK"), rt.make_int(wxLANGUAGE_TAJIK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_TAMIL"), rt.make_int(wxLANGUAGE_TAMIL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_TATAR"), rt.make_int(wxLANGUAGE_TATAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_TELUGU"), rt.make_int(wxLANGUAGE_TELUGU)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_THAI"), rt.make_int(wxLANGUAGE_THAI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_TIBETAN"), rt.make_int(wxLANGUAGE_TIBETAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_TIGRINYA"), rt.make_int(wxLANGUAGE_TIGRINYA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_TONGA"), rt.make_int(wxLANGUAGE_TONGA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_TSONGA"), rt.make_int(wxLANGUAGE_TSONGA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_TURKISH"), rt.make_int(wxLANGUAGE_TURKISH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_TURKMEN"), rt.make_int(wxLANGUAGE_TURKMEN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_TWI"), rt.make_int(wxLANGUAGE_TWI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_UIGHUR"), rt.make_int(wxLANGUAGE_UIGHUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_UKRAINIAN"), rt.make_int(wxLANGUAGE_UKRAINIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_URDU"), rt.make_int(wxLANGUAGE_URDU)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_URDU_INDIA"), rt.make_int(wxLANGUAGE_URDU_INDIA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_URDU_PAKISTAN"), rt.make_int(wxLANGUAGE_URDU_PAKISTAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_UZBEK"), rt.make_int(wxLANGUAGE_UZBEK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_UZBEK_CYRILLIC"), rt.make_int(wxLANGUAGE_UZBEK_CYRILLIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_UZBEK_LATIN"), rt.make_int(wxLANGUAGE_UZBEK_LATIN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_VALENCIAN"), rt.make_int(wxLANGUAGE_VALENCIAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_VIETNAMESE"), rt.make_int(wxLANGUAGE_VIETNAMESE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_VOLAPUK"), rt.make_int(wxLANGUAGE_VOLAPUK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_WELSH"), rt.make_int(wxLANGUAGE_WELSH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_WOLOF"), rt.make_int(wxLANGUAGE_WOLOF)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_XHOSA"), rt.make_int(wxLANGUAGE_XHOSA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_YIDDISH"), rt.make_int(wxLANGUAGE_YIDDISH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_YORUBA"), rt.make_int(wxLANGUAGE_YORUBA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ZHUANG"), rt.make_int(wxLANGUAGE_ZHUANG)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_ZULU"), rt.make_int(wxLANGUAGE_ZULU)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_USER_DEFINED"), rt.make_int(wxLANGUAGE_USER_DEFINED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLanguage"), rt.make_atom("wxLANGUAGE_CAMBODIAN"), rt.make_int(wxLANGUAGE_CAMBODIAN)),
//  From "laywin.h": wxLayoutAlignment
    enif_make_tuple3(rt.env, rt.make_atom("wxLayoutAlignment"), rt.make_atom("wxLAYOUT_NONE"), rt.make_int(wxLAYOUT_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLayoutAlignment"), rt.make_atom("wxLAYOUT_TOP"), rt.make_int(wxLAYOUT_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLayoutAlignment"), rt.make_atom("wxLAYOUT_LEFT"), rt.make_int(wxLAYOUT_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLayoutAlignment"), rt.make_atom("wxLAYOUT_RIGHT"), rt.make_int(wxLAYOUT_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLayoutAlignment"), rt.make_atom("wxLAYOUT_BOTTOM"), rt.make_int(wxLAYOUT_BOTTOM)),
//  From "intl.h": wxLayoutDirection
    enif_make_tuple3(rt.env, rt.make_atom("wxLayoutDirection"), rt.make_atom("wxLayout_Default"), rt.make_int(wxLayout_Default)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLayoutDirection"), rt.make_atom("wxLayout_LeftToRight"), rt.make_int(wxLayout_LeftToRight)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLayoutDirection"), rt.make_atom("wxLayout_RightToLeft"), rt.make_int(wxLayout_RightToLeft)),
//  From "laywin.h": wxLayoutOrientation
    enif_make_tuple3(rt.env, rt.make_atom("wxLayoutOrientation"), rt.make_atom("wxLAYOUT_HORIZONTAL"), rt.make_int(wxLAYOUT_HORIZONTAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLayoutOrientation"), rt.make_atom("wxLAYOUT_VERTICAL"), rt.make_int(wxLAYOUT_VERTICAL)),
//  From "listctrl.h": wxListAlignFlags
    enif_make_tuple3(rt.env, rt.make_atom("wxListAlignFlags"), rt.make_atom("wxLIST_ALIGN_DEFAULT"), rt.make_int(wxLIST_ALIGN_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListAlignFlags"), rt.make_atom("wxLIST_ALIGN_LEFT"), rt.make_int(wxLIST_ALIGN_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListAlignFlags"), rt.make_atom("wxLIST_ALIGN_TOP"), rt.make_int(wxLIST_ALIGN_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListAlignFlags"), rt.make_atom("wxLIST_ALIGN_SNAP_TO_GRID"), rt.make_int(wxLIST_ALIGN_SNAP_TO_GRID)),
//  From "listctrl.h": wxListAutoSize
    enif_make_tuple3(rt.env, rt.make_atom("wxListAutoSize"), rt.make_atom("wxLIST_AUTOSIZE"), rt.make_int(wxLIST_AUTOSIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListAutoSize"), rt.make_atom("wxLIST_AUTOSIZE_USEHEADER"), rt.make_int(wxLIST_AUTOSIZE_USEHEADER)),
//  From "listctrl.h": wxListColumnFormat
    enif_make_tuple3(rt.env, rt.make_atom("wxListColumnFormat"), rt.make_atom("wxLIST_FORMAT_LEFT"), rt.make_int(wxLIST_FORMAT_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListColumnFormat"), rt.make_atom("wxLIST_FORMAT_RIGHT"), rt.make_int(wxLIST_FORMAT_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListColumnFormat"), rt.make_atom("wxLIST_FORMAT_CENTRE"), rt.make_int(wxLIST_FORMAT_CENTRE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListColumnFormat"), rt.make_atom("wxLIST_FORMAT_CENTER"), rt.make_int(wxLIST_FORMAT_CENTER)),
//  From "listctrl.h": wxListFindFlags
    enif_make_tuple3(rt.env, rt.make_atom("wxListFindFlags"), rt.make_atom("wxLIST_FIND_UP"), rt.make_int(wxLIST_FIND_UP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListFindFlags"), rt.make_atom("wxLIST_FIND_DOWN"), rt.make_int(wxLIST_FIND_DOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListFindFlags"), rt.make_atom("wxLIST_FIND_LEFT"), rt.make_int(wxLIST_FIND_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListFindFlags"), rt.make_atom("wxLIST_FIND_RIGHT"), rt.make_int(wxLIST_FIND_RIGHT)),
//  From "listctrl.h": wxListNextFlags
    enif_make_tuple3(rt.env, rt.make_atom("wxListNextFlags"), rt.make_atom("wxLIST_NEXT_ABOVE"), rt.make_int(wxLIST_NEXT_ABOVE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListNextFlags"), rt.make_atom("wxLIST_NEXT_ALL"), rt.make_int(wxLIST_NEXT_ALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListNextFlags"), rt.make_atom("wxLIST_NEXT_BELOW"), rt.make_int(wxLIST_NEXT_BELOW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListNextFlags"), rt.make_atom("wxLIST_NEXT_LEFT"), rt.make_int(wxLIST_NEXT_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListNextFlags"), rt.make_atom("wxLIST_NEXT_RIGHT"), rt.make_int(wxLIST_NEXT_RIGHT)),
//  From "listctrl.h": wxListRectFlags
    enif_make_tuple3(rt.env, rt.make_atom("wxListRectFlags"), rt.make_atom("wxLIST_RECT_BOUNDS"), rt.make_int(wxLIST_RECT_BOUNDS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListRectFlags"), rt.make_atom("wxLIST_RECT_ICON"), rt.make_int(wxLIST_RECT_ICON)),
    enif_make_tuple3(rt.env, rt.make_atom("wxListRectFlags"), rt.make_atom("wxLIST_RECT_LABEL"), rt.make_int(wxLIST_RECT_LABEL)),
//  From "intl.h": wxLocaleCategory
    enif_make_tuple3(rt.env, rt.make_atom("wxLocaleCategory"), rt.make_atom("wxLOCALE_CAT_NUMBER"), rt.make_int(wxLOCALE_CAT_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLocaleCategory"), rt.make_atom("wxLOCALE_CAT_DATE"), rt.make_int(wxLOCALE_CAT_DATE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLocaleCategory"), rt.make_atom("wxLOCALE_CAT_MONEY"), rt.make_int(wxLOCALE_CAT_MONEY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLocaleCategory"), rt.make_atom("wxLOCALE_CAT_DEFAULT"), rt.make_int(wxLOCALE_CAT_DEFAULT)),
//  From "intl.h": wxLocaleInfo
    enif_make_tuple3(rt.env, rt.make_atom("wxLocaleInfo"), rt.make_atom("wxLOCALE_THOUSANDS_SEP"), rt.make_int(wxLOCALE_THOUSANDS_SEP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLocaleInfo"), rt.make_atom("wxLOCALE_DECIMAL_POINT"), rt.make_int(wxLOCALE_DECIMAL_POINT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLocaleInfo"), rt.make_atom("wxLOCALE_SHORT_DATE_FMT"), rt.make_int(wxLOCALE_SHORT_DATE_FMT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLocaleInfo"), rt.make_atom("wxLOCALE_LONG_DATE_FMT"), rt.make_int(wxLOCALE_LONG_DATE_FMT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLocaleInfo"), rt.make_atom("wxLOCALE_DATE_TIME_FMT"), rt.make_int(wxLOCALE_DATE_TIME_FMT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLocaleInfo"), rt.make_atom("wxLOCALE_TIME_FMT"), rt.make_int(wxLOCALE_TIME_FMT)),
//  From "intl.h": wxLocaleInitFlags
    enif_make_tuple3(rt.env, rt.make_atom("wxLocaleInitFlags"), rt.make_atom("wxLOCALE_DONT_LOAD_DEFAULT"), rt.make_int(wxLOCALE_DONT_LOAD_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLocaleInitFlags"), rt.make_atom("wxLOCALE_LOAD_DEFAULT"), rt.make_int(wxLOCALE_LOAD_DEFAULT)),
//  From "log.h": wxLogLevelValues
    enif_make_tuple3(rt.env, rt.make_atom("wxLogLevelValues"), rt.make_atom("wxLOG_FatalError"), rt.make_int(wxLOG_FatalError)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLogLevelValues"), rt.make_atom("wxLOG_Error"), rt.make_int(wxLOG_Error)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLogLevelValues"), rt.make_atom("wxLOG_Warning"), rt.make_int(wxLOG_Warning)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLogLevelValues"), rt.make_atom("wxLOG_Message"), rt.make_int(wxLOG_Message)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLogLevelValues"), rt.make_atom("wxLOG_Status"), rt.make_int(wxLOG_Status)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLogLevelValues"), rt.make_atom("wxLOG_Info"), rt.make_int(wxLOG_Info)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLogLevelValues"), rt.make_atom("wxLOG_Debug"), rt.make_int(wxLOG_Debug)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLogLevelValues"), rt.make_atom("wxLOG_Trace"), rt.make_int(wxLOG_Trace)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLogLevelValues"), rt.make_atom("wxLOG_Progress"), rt.make_int(wxLOG_Progress)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLogLevelValues"), rt.make_atom("wxLOG_User"), rt.make_int(wxLOG_User)),
    enif_make_tuple3(rt.env, rt.make_atom("wxLogLevelValues"), rt.make_atom("wxLOG_Max"), rt.make_int(wxLOG_Max)),
//  From "dc.h": wxMappingMode
    enif_make_tuple3(rt.env, rt.make_atom("wxMappingMode"), rt.make_atom("wxMM_TEXT"), rt.make_int(wxMM_TEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxMappingMode"), rt.make_atom("wxMM_METRIC"), rt.make_int(wxMM_METRIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxMappingMode"), rt.make_atom("wxMM_LOMETRIC"), rt.make_int(wxMM_LOMETRIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxMappingMode"), rt.make_atom("wxMM_TWIPS"), rt.make_int(wxMM_TWIPS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxMappingMode"), rt.make_atom("wxMM_POINTS"), rt.make_int(wxMM_POINTS)),
//  From "mousestate.h": wxMouseButton
    enif_make_tuple3(rt.env, rt.make_atom("wxMouseButton"), rt.make_atom("wxMOUSE_BTN_ANY"), rt.make_int(wxMOUSE_BTN_ANY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxMouseButton"), rt.make_atom("wxMOUSE_BTN_NONE"), rt.make_int(wxMOUSE_BTN_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxMouseButton"), rt.make_atom("wxMOUSE_BTN_LEFT"), rt.make_int(wxMOUSE_BTN_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxMouseButton"), rt.make_atom("wxMOUSE_BTN_MIDDLE"), rt.make_int(wxMOUSE_BTN_MIDDLE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxMouseButton"), rt.make_atom("wxMOUSE_BTN_RIGHT"), rt.make_int(wxMOUSE_BTN_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxMouseButton"), rt.make_atom("wxMOUSE_BTN_AUX1"), rt.make_int(wxMOUSE_BTN_AUX1)),
    enif_make_tuple3(rt.env, rt.make_atom("wxMouseButton"), rt.make_atom("wxMOUSE_BTN_AUX2"), rt.make_int(wxMOUSE_BTN_AUX2)),
    enif_make_tuple3(rt.env, rt.make_atom("wxMouseButton"), rt.make_atom("wxMOUSE_BTN_MAX"), rt.make_int(wxMOUSE_BTN_MAX)),
//  From "event.h": wxMouseWheelAxis
    enif_make_tuple3(rt.env, rt.make_atom("wxMouseWheelAxis"), rt.make_atom("wxMOUSE_WHEEL_VERTICAL"), rt.make_int(wxMOUSE_WHEEL_VERTICAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxMouseWheelAxis"), rt.make_atom("wxMOUSE_WHEEL_HORIZONTAL"), rt.make_int(wxMOUSE_WHEEL_HORIZONTAL)),
//  From "defs.h": wxOrientation
    enif_make_tuple3(rt.env, rt.make_atom("wxOrientation"), rt.make_atom("wxHORIZONTAL"), rt.make_int(wxHORIZONTAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxOrientation"), rt.make_atom("wxVERTICAL"), rt.make_int(wxVERTICAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxOrientation"), rt.make_atom("wxBOTH"), rt.make_int(wxBOTH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxOrientation"), rt.make_atom("wxORIENTATION_MASK"), rt.make_int(wxORIENTATION_MASK)),
//  From "defs.h": wxPaperSize
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_NONE"), rt.make_int(wxPAPER_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_LETTER"), rt.make_int(wxPAPER_LETTER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_LEGAL"), rt.make_int(wxPAPER_LEGAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A4"), rt.make_int(wxPAPER_A4)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_CSHEET"), rt.make_int(wxPAPER_CSHEET)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_DSHEET"), rt.make_int(wxPAPER_DSHEET)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ESHEET"), rt.make_int(wxPAPER_ESHEET)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_LETTERSMALL"), rt.make_int(wxPAPER_LETTERSMALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_TABLOID"), rt.make_int(wxPAPER_TABLOID)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_LEDGER"), rt.make_int(wxPAPER_LEDGER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_STATEMENT"), rt.make_int(wxPAPER_STATEMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_EXECUTIVE"), rt.make_int(wxPAPER_EXECUTIVE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A3"), rt.make_int(wxPAPER_A3)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A4SMALL"), rt.make_int(wxPAPER_A4SMALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A5"), rt.make_int(wxPAPER_A5)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_B4"), rt.make_int(wxPAPER_B4)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_B5"), rt.make_int(wxPAPER_B5)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_FOLIO"), rt.make_int(wxPAPER_FOLIO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_QUARTO"), rt.make_int(wxPAPER_QUARTO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_10X14"), rt.make_int(wxPAPER_10X14)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_11X17"), rt.make_int(wxPAPER_11X17)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_NOTE"), rt.make_int(wxPAPER_NOTE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_9"), rt.make_int(wxPAPER_ENV_9)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_10"), rt.make_int(wxPAPER_ENV_10)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_11"), rt.make_int(wxPAPER_ENV_11)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_12"), rt.make_int(wxPAPER_ENV_12)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_14"), rt.make_int(wxPAPER_ENV_14)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_DL"), rt.make_int(wxPAPER_ENV_DL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_C5"), rt.make_int(wxPAPER_ENV_C5)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_C3"), rt.make_int(wxPAPER_ENV_C3)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_C4"), rt.make_int(wxPAPER_ENV_C4)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_C6"), rt.make_int(wxPAPER_ENV_C6)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_C65"), rt.make_int(wxPAPER_ENV_C65)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_B4"), rt.make_int(wxPAPER_ENV_B4)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_B5"), rt.make_int(wxPAPER_ENV_B5)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_B6"), rt.make_int(wxPAPER_ENV_B6)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_ITALY"), rt.make_int(wxPAPER_ENV_ITALY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_MONARCH"), rt.make_int(wxPAPER_ENV_MONARCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_PERSONAL"), rt.make_int(wxPAPER_ENV_PERSONAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_FANFOLD_US"), rt.make_int(wxPAPER_FANFOLD_US)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_FANFOLD_STD_GERMAN"), rt.make_int(wxPAPER_FANFOLD_STD_GERMAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_FANFOLD_LGL_GERMAN"), rt.make_int(wxPAPER_FANFOLD_LGL_GERMAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ISO_B4"), rt.make_int(wxPAPER_ISO_B4)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_JAPANESE_POSTCARD"), rt.make_int(wxPAPER_JAPANESE_POSTCARD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_9X11"), rt.make_int(wxPAPER_9X11)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_10X11"), rt.make_int(wxPAPER_10X11)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_15X11"), rt.make_int(wxPAPER_15X11)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_ENV_INVITE"), rt.make_int(wxPAPER_ENV_INVITE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_LETTER_EXTRA"), rt.make_int(wxPAPER_LETTER_EXTRA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_LEGAL_EXTRA"), rt.make_int(wxPAPER_LEGAL_EXTRA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_TABLOID_EXTRA"), rt.make_int(wxPAPER_TABLOID_EXTRA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A4_EXTRA"), rt.make_int(wxPAPER_A4_EXTRA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_LETTER_TRANSVERSE"), rt.make_int(wxPAPER_LETTER_TRANSVERSE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A4_TRANSVERSE"), rt.make_int(wxPAPER_A4_TRANSVERSE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_LETTER_EXTRA_TRANSVERSE"), rt.make_int(wxPAPER_LETTER_EXTRA_TRANSVERSE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A_PLUS"), rt.make_int(wxPAPER_A_PLUS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_B_PLUS"), rt.make_int(wxPAPER_B_PLUS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_LETTER_PLUS"), rt.make_int(wxPAPER_LETTER_PLUS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A4_PLUS"), rt.make_int(wxPAPER_A4_PLUS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A5_TRANSVERSE"), rt.make_int(wxPAPER_A5_TRANSVERSE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_B5_TRANSVERSE"), rt.make_int(wxPAPER_B5_TRANSVERSE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A3_EXTRA"), rt.make_int(wxPAPER_A3_EXTRA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A5_EXTRA"), rt.make_int(wxPAPER_A5_EXTRA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_B5_EXTRA"), rt.make_int(wxPAPER_B5_EXTRA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A2"), rt.make_int(wxPAPER_A2)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A3_TRANSVERSE"), rt.make_int(wxPAPER_A3_TRANSVERSE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A3_EXTRA_TRANSVERSE"), rt.make_int(wxPAPER_A3_EXTRA_TRANSVERSE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_DBL_JAPANESE_POSTCARD"), rt.make_int(wxPAPER_DBL_JAPANESE_POSTCARD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A6"), rt.make_int(wxPAPER_A6)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_JENV_KAKU2"), rt.make_int(wxPAPER_JENV_KAKU2)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_JENV_KAKU3"), rt.make_int(wxPAPER_JENV_KAKU3)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_JENV_CHOU3"), rt.make_int(wxPAPER_JENV_CHOU3)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_JENV_CHOU4"), rt.make_int(wxPAPER_JENV_CHOU4)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_LETTER_ROTATED"), rt.make_int(wxPAPER_LETTER_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A3_ROTATED"), rt.make_int(wxPAPER_A3_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A4_ROTATED"), rt.make_int(wxPAPER_A4_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A5_ROTATED"), rt.make_int(wxPAPER_A5_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_B4_JIS_ROTATED"), rt.make_int(wxPAPER_B4_JIS_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_B5_JIS_ROTATED"), rt.make_int(wxPAPER_B5_JIS_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_JAPANESE_POSTCARD_ROTATED"), rt.make_int(wxPAPER_JAPANESE_POSTCARD_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_DBL_JAPANESE_POSTCARD_ROTATED"), rt.make_int(wxPAPER_DBL_JAPANESE_POSTCARD_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A6_ROTATED"), rt.make_int(wxPAPER_A6_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_JENV_KAKU2_ROTATED"), rt.make_int(wxPAPER_JENV_KAKU2_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_JENV_KAKU3_ROTATED"), rt.make_int(wxPAPER_JENV_KAKU3_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_JENV_CHOU3_ROTATED"), rt.make_int(wxPAPER_JENV_CHOU3_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_JENV_CHOU4_ROTATED"), rt.make_int(wxPAPER_JENV_CHOU4_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_B6_JIS"), rt.make_int(wxPAPER_B6_JIS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_B6_JIS_ROTATED"), rt.make_int(wxPAPER_B6_JIS_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_12X11"), rt.make_int(wxPAPER_12X11)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_JENV_YOU4"), rt.make_int(wxPAPER_JENV_YOU4)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_JENV_YOU4_ROTATED"), rt.make_int(wxPAPER_JENV_YOU4_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_P16K"), rt.make_int(wxPAPER_P16K)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_P32K"), rt.make_int(wxPAPER_P32K)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_P32KBIG"), rt.make_int(wxPAPER_P32KBIG)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_1"), rt.make_int(wxPAPER_PENV_1)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_2"), rt.make_int(wxPAPER_PENV_2)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_3"), rt.make_int(wxPAPER_PENV_3)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_4"), rt.make_int(wxPAPER_PENV_4)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_5"), rt.make_int(wxPAPER_PENV_5)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_6"), rt.make_int(wxPAPER_PENV_6)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_7"), rt.make_int(wxPAPER_PENV_7)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_8"), rt.make_int(wxPAPER_PENV_8)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_9"), rt.make_int(wxPAPER_PENV_9)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_10"), rt.make_int(wxPAPER_PENV_10)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_P16K_ROTATED"), rt.make_int(wxPAPER_P16K_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_P32K_ROTATED"), rt.make_int(wxPAPER_P32K_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_P32KBIG_ROTATED"), rt.make_int(wxPAPER_P32KBIG_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_1_ROTATED"), rt.make_int(wxPAPER_PENV_1_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_2_ROTATED"), rt.make_int(wxPAPER_PENV_2_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_3_ROTATED"), rt.make_int(wxPAPER_PENV_3_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_4_ROTATED"), rt.make_int(wxPAPER_PENV_4_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_5_ROTATED"), rt.make_int(wxPAPER_PENV_5_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_6_ROTATED"), rt.make_int(wxPAPER_PENV_6_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_7_ROTATED"), rt.make_int(wxPAPER_PENV_7_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_8_ROTATED"), rt.make_int(wxPAPER_PENV_8_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_9_ROTATED"), rt.make_int(wxPAPER_PENV_9_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_PENV_10_ROTATED"), rt.make_int(wxPAPER_PENV_10_ROTATED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A0"), rt.make_int(wxPAPER_A0)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPaperSize"), rt.make_atom("wxPAPER_A1"), rt.make_int(wxPAPER_A1)),
//  From "pen.h": wxPenCap
    enif_make_tuple3(rt.env, rt.make_atom("wxPenCap"), rt.make_atom("wxCAP_INVALID"), rt.make_int(wxCAP_INVALID)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenCap"), rt.make_atom("wxCAP_ROUND"), rt.make_int(wxCAP_ROUND)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenCap"), rt.make_atom("wxCAP_PROJECTING"), rt.make_int(wxCAP_PROJECTING)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenCap"), rt.make_atom("wxCAP_BUTT"), rt.make_int(wxCAP_BUTT)),
//  From "pen.h": wxPenJoin
    enif_make_tuple3(rt.env, rt.make_atom("wxPenJoin"), rt.make_atom("wxJOIN_INVALID"), rt.make_int(wxJOIN_INVALID)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenJoin"), rt.make_atom("wxJOIN_BEVEL"), rt.make_int(wxJOIN_BEVEL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenJoin"), rt.make_atom("wxJOIN_MITER"), rt.make_int(wxJOIN_MITER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenJoin"), rt.make_atom("wxJOIN_ROUND"), rt.make_int(wxJOIN_ROUND)),
//  From "pen.h": wxPenStyle
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_INVALID"), rt.make_int(wxPENSTYLE_INVALID)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_SOLID"), rt.make_int(wxPENSTYLE_SOLID)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_DOT"), rt.make_int(wxPENSTYLE_DOT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_LONG_DASH"), rt.make_int(wxPENSTYLE_LONG_DASH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_SHORT_DASH"), rt.make_int(wxPENSTYLE_SHORT_DASH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_DOT_DASH"), rt.make_int(wxPENSTYLE_DOT_DASH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_USER_DASH"), rt.make_int(wxPENSTYLE_USER_DASH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_TRANSPARENT"), rt.make_int(wxPENSTYLE_TRANSPARENT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_STIPPLE_MASK_OPAQUE"), rt.make_int(wxPENSTYLE_STIPPLE_MASK_OPAQUE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_STIPPLE_MASK"), rt.make_int(wxPENSTYLE_STIPPLE_MASK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_STIPPLE"), rt.make_int(wxPENSTYLE_STIPPLE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_BDIAGONAL_HATCH"), rt.make_int(wxPENSTYLE_BDIAGONAL_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_CROSSDIAG_HATCH"), rt.make_int(wxPENSTYLE_CROSSDIAG_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_FDIAGONAL_HATCH"), rt.make_int(wxPENSTYLE_FDIAGONAL_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_CROSS_HATCH"), rt.make_int(wxPENSTYLE_CROSS_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_HORIZONTAL_HATCH"), rt.make_int(wxPENSTYLE_HORIZONTAL_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_VERTICAL_HATCH"), rt.make_int(wxPENSTYLE_VERTICAL_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_FIRST_HATCH"), rt.make_int(wxPENSTYLE_FIRST_HATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPenStyle"), rt.make_atom("wxPENSTYLE_LAST_HATCH"), rt.make_int(wxPENSTYLE_LAST_HATCH)),
//  From "gdicmn.h": wxPolygonFillMode
    enif_make_tuple3(rt.env, rt.make_atom("wxPolygonFillMode"), rt.make_atom("wxODDEVEN_RULE"), rt.make_int(wxODDEVEN_RULE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPolygonFillMode"), rt.make_atom("wxWINDING_RULE"), rt.make_int(wxWINDING_RULE)),
//  From "print.h": wxPreviewFrameModalityKind
    enif_make_tuple3(rt.env, rt.make_atom("wxPreviewFrameModalityKind"), rt.make_atom("wxPreviewFrame_AppModal"), rt.make_int(wxPreviewFrame_AppModal)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPreviewFrameModalityKind"), rt.make_atom("wxPreviewFrame_WindowModal"), rt.make_int(wxPreviewFrame_WindowModal)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPreviewFrameModalityKind"), rt.make_atom("wxPreviewFrame_NonModal"), rt.make_int(wxPreviewFrame_NonModal)),
//  From "cmndata.h": wxPrintBin
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintBin"), rt.make_atom("wxPRINTBIN_DEFAULT"), rt.make_int(wxPRINTBIN_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintBin"), rt.make_atom("wxPRINTBIN_ONLYONE"), rt.make_int(wxPRINTBIN_ONLYONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintBin"), rt.make_atom("wxPRINTBIN_LOWER"), rt.make_int(wxPRINTBIN_LOWER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintBin"), rt.make_atom("wxPRINTBIN_MIDDLE"), rt.make_int(wxPRINTBIN_MIDDLE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintBin"), rt.make_atom("wxPRINTBIN_MANUAL"), rt.make_int(wxPRINTBIN_MANUAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintBin"), rt.make_atom("wxPRINTBIN_ENVELOPE"), rt.make_int(wxPRINTBIN_ENVELOPE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintBin"), rt.make_atom("wxPRINTBIN_ENVMANUAL"), rt.make_int(wxPRINTBIN_ENVMANUAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintBin"), rt.make_atom("wxPRINTBIN_AUTO"), rt.make_int(wxPRINTBIN_AUTO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintBin"), rt.make_atom("wxPRINTBIN_TRACTOR"), rt.make_int(wxPRINTBIN_TRACTOR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintBin"), rt.make_atom("wxPRINTBIN_SMALLFMT"), rt.make_int(wxPRINTBIN_SMALLFMT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintBin"), rt.make_atom("wxPRINTBIN_LARGEFMT"), rt.make_int(wxPRINTBIN_LARGEFMT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintBin"), rt.make_atom("wxPRINTBIN_LARGECAPACITY"), rt.make_int(wxPRINTBIN_LARGECAPACITY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintBin"), rt.make_atom("wxPRINTBIN_CASSETTE"), rt.make_int(wxPRINTBIN_CASSETTE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintBin"), rt.make_atom("wxPRINTBIN_FORMSOURCE"), rt.make_int(wxPRINTBIN_FORMSOURCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintBin"), rt.make_atom("wxPRINTBIN_USER"), rt.make_int(wxPRINTBIN_USER)),
//  From "defs.h": wxPrintMode
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintMode"), rt.make_atom("wxPRINT_MODE_NONE"), rt.make_int(wxPRINT_MODE_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintMode"), rt.make_atom("wxPRINT_MODE_PREVIEW"), rt.make_int(wxPRINT_MODE_PREVIEW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintMode"), rt.make_atom("wxPRINT_MODE_FILE"), rt.make_int(wxPRINT_MODE_FILE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintMode"), rt.make_atom("wxPRINT_MODE_PRINTER"), rt.make_int(wxPRINT_MODE_PRINTER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintMode"), rt.make_atom("wxPRINT_MODE_STREAM"), rt.make_int(wxPRINT_MODE_STREAM)),
//  From "defs.h": wxPrintOrientation
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintOrientation"), rt.make_atom("wxPORTRAIT"), rt.make_int(wxPORTRAIT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrintOrientation"), rt.make_atom("wxLANDSCAPE"), rt.make_int(wxLANDSCAPE)),
//  From "print.h": wxPrinterError
    enif_make_tuple3(rt.env, rt.make_atom("wxPrinterError"), rt.make_atom("wxPRINTER_NO_ERROR"), rt.make_int(wxPRINTER_NO_ERROR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrinterError"), rt.make_atom("wxPRINTER_CANCELLED"), rt.make_int(wxPRINTER_CANCELLED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxPrinterError"), rt.make_atom("wxPRINTER_ERROR"), rt.make_int(wxPRINTER_ERROR)),
//  From "dc.h": wxRasterOperationMode
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxCLEAR"), rt.make_int(wxCLEAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxXOR"), rt.make_int(wxXOR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxINVERT"), rt.make_int(wxINVERT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxOR_REVERSE"), rt.make_int(wxOR_REVERSE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxAND_REVERSE"), rt.make_int(wxAND_REVERSE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxCOPY"), rt.make_int(wxCOPY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxAND"), rt.make_int(wxAND)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxAND_INVERT"), rt.make_int(wxAND_INVERT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxNO_OP"), rt.make_int(wxNO_OP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxNOR"), rt.make_int(wxNOR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxEQUIV"), rt.make_int(wxEQUIV)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxSRC_INVERT"), rt.make_int(wxSRC_INVERT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxOR_INVERT"), rt.make_int(wxOR_INVERT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxNAND"), rt.make_int(wxNAND)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxOR"), rt.make_int(wxOR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRasterOperationMode"), rt.make_atom("wxSET"), rt.make_int(wxSET)),
//  From "region.h": wxRegionContain
    enif_make_tuple3(rt.env, rt.make_atom("wxRegionContain"), rt.make_atom("wxOutRegion"), rt.make_int(wxOutRegion)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRegionContain"), rt.make_atom("wxPartRegion"), rt.make_int(wxPartRegion)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRegionContain"), rt.make_atom("wxInRegion"), rt.make_int(wxInRegion)),
//  From "layout.h": wxRelationship
    enif_make_tuple3(rt.env, rt.make_atom("wxRelationship"), rt.make_atom("wxUnconstrained"), rt.make_int(wxUnconstrained)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRelationship"), rt.make_atom("wxAsIs"), rt.make_int(wxAsIs)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRelationship"), rt.make_atom("wxPercentOf"), rt.make_int(wxPercentOf)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRelationship"), rt.make_atom("wxAbove"), rt.make_int(wxAbove)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRelationship"), rt.make_atom("wxBelow"), rt.make_int(wxBelow)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRelationship"), rt.make_atom("wxLeftOf"), rt.make_int(wxLeftOf)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRelationship"), rt.make_atom("wxRightOf"), rt.make_int(wxRightOf)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRelationship"), rt.make_atom("wxSameAs"), rt.make_int(wxSameAs)),
    enif_make_tuple3(rt.env, rt.make_atom("wxRelationship"), rt.make_atom("wxAbsolute"), rt.make_int(wxAbsolute)),
//  From "sashwin.h": wxSashDragStatus
    enif_make_tuple3(rt.env, rt.make_atom("wxSashDragStatus"), rt.make_atom("wxSASH_STATUS_OK"), rt.make_int(wxSASH_STATUS_OK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSashDragStatus"), rt.make_atom("wxSASH_STATUS_OUT_OF_RANGE"), rt.make_int(wxSASH_STATUS_OUT_OF_RANGE)),
//  From "sashwin.h": wxSashEdgePosition
    enif_make_tuple3(rt.env, rt.make_atom("wxSashEdgePosition"), rt.make_atom("wxSASH_TOP"), rt.make_int(wxSASH_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSashEdgePosition"), rt.make_atom("wxSASH_RIGHT"), rt.make_int(wxSASH_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSashEdgePosition"), rt.make_atom("wxSASH_BOTTOM"), rt.make_int(wxSASH_BOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSashEdgePosition"), rt.make_atom("wxSASH_LEFT"), rt.make_int(wxSASH_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSashEdgePosition"), rt.make_atom("wxSASH_NONE"), rt.make_int(wxSASH_NONE)),
//  From "scrolwin.h": wxScrollbarVisibility
    enif_make_tuple3(rt.env, rt.make_atom("wxScrollbarVisibility"), rt.make_atom("wxSHOW_SB_NEVER"), rt.make_int(wxSHOW_SB_NEVER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxScrollbarVisibility"), rt.make_atom("wxSHOW_SB_DEFAULT"), rt.make_int(wxSHOW_SB_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxScrollbarVisibility"), rt.make_atom("wxSHOW_SB_ALWAYS"), rt.make_int(wxSHOW_SB_ALWAYS)),
//  From "window.h": wxShowEffect
    enif_make_tuple3(rt.env, rt.make_atom("wxShowEffect"), rt.make_atom("wxSHOW_EFFECT_NONE"), rt.make_int(wxSHOW_EFFECT_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxShowEffect"), rt.make_atom("wxSHOW_EFFECT_ROLL_TO_LEFT"), rt.make_int(wxSHOW_EFFECT_ROLL_TO_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxShowEffect"), rt.make_atom("wxSHOW_EFFECT_ROLL_TO_RIGHT"), rt.make_int(wxSHOW_EFFECT_ROLL_TO_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxShowEffect"), rt.make_atom("wxSHOW_EFFECT_ROLL_TO_TOP"), rt.make_int(wxSHOW_EFFECT_ROLL_TO_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxShowEffect"), rt.make_atom("wxSHOW_EFFECT_ROLL_TO_BOTTOM"), rt.make_int(wxSHOW_EFFECT_ROLL_TO_BOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxShowEffect"), rt.make_atom("wxSHOW_EFFECT_SLIDE_TO_LEFT"), rt.make_int(wxSHOW_EFFECT_SLIDE_TO_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxShowEffect"), rt.make_atom("wxSHOW_EFFECT_SLIDE_TO_RIGHT"), rt.make_int(wxSHOW_EFFECT_SLIDE_TO_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxShowEffect"), rt.make_atom("wxSHOW_EFFECT_SLIDE_TO_TOP"), rt.make_int(wxSHOW_EFFECT_SLIDE_TO_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxShowEffect"), rt.make_atom("wxSHOW_EFFECT_SLIDE_TO_BOTTOM"), rt.make_int(wxSHOW_EFFECT_SLIDE_TO_BOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxShowEffect"), rt.make_atom("wxSHOW_EFFECT_BLEND"), rt.make_int(wxSHOW_EFFECT_BLEND)),
    enif_make_tuple3(rt.env, rt.make_atom("wxShowEffect"), rt.make_atom("wxSHOW_EFFECT_EXPAND"), rt.make_int(wxSHOW_EFFECT_EXPAND)),
    enif_make_tuple3(rt.env, rt.make_atom("wxShowEffect"), rt.make_atom("wxSHOW_EFFECT_MAX"), rt.make_int(wxSHOW_EFFECT_MAX)),
//  From "utils.h": wxShutdownFlags
    enif_make_tuple3(rt.env, rt.make_atom("wxShutdownFlags"), rt.make_atom("wxSHUTDOWN_FORCE"), rt.make_int(wxSHUTDOWN_FORCE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxShutdownFlags"), rt.make_atom("wxSHUTDOWN_POWEROFF"), rt.make_int(wxSHUTDOWN_POWEROFF)),
    enif_make_tuple3(rt.env, rt.make_atom("wxShutdownFlags"), rt.make_atom("wxSHUTDOWN_REBOOT"), rt.make_int(wxSHUTDOWN_REBOOT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxShutdownFlags"), rt.make_atom("wxSHUTDOWN_LOGOFF"), rt.make_int(wxSHUTDOWN_LOGOFF)),
//  From "utils.h": wxSignal
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGNONE"), rt.make_int(wxSIGNONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGHUP"), rt.make_int(wxSIGHUP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGINT"), rt.make_int(wxSIGINT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGQUIT"), rt.make_int(wxSIGQUIT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGILL"), rt.make_int(wxSIGILL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGTRAP"), rt.make_int(wxSIGTRAP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGABRT"), rt.make_int(wxSIGABRT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGEMT"), rt.make_int(wxSIGEMT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGFPE"), rt.make_int(wxSIGFPE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGKILL"), rt.make_int(wxSIGKILL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGBUS"), rt.make_int(wxSIGBUS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGSEGV"), rt.make_int(wxSIGSEGV)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGSYS"), rt.make_int(wxSIGSYS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGPIPE"), rt.make_int(wxSIGPIPE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGALRM"), rt.make_int(wxSIGALRM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSignal"), rt.make_atom("wxSIGTERM"), rt.make_int(wxSIGTERM)),
//  From "defs.h": wxSizerFlagBits
    enif_make_tuple3(rt.env, rt.make_atom("wxSizerFlagBits"), rt.make_atom("wxFIXED_MINSIZE"), rt.make_int(wxFIXED_MINSIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSizerFlagBits"), rt.make_atom("wxRESERVE_SPACE_EVEN_IF_HIDDEN"), rt.make_int(wxRESERVE_SPACE_EVEN_IF_HIDDEN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSizerFlagBits"), rt.make_atom("wxSIZER_FLAG_BITS_MASK"), rt.make_int(wxSIZER_FLAG_BITS_MASK)),
//  From "splitter.h": wxSplitMode
    enif_make_tuple3(rt.env, rt.make_atom("wxSplitMode"), rt.make_atom("wxSPLIT_HORIZONTAL"), rt.make_int(wxSPLIT_HORIZONTAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSplitMode"), rt.make_atom("wxSPLIT_VERTICAL"), rt.make_int(wxSPLIT_VERTICAL)),
//  From "defs.h": wxStandardID
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_AUTO_LOWEST"), rt.make_int(wxID_AUTO_LOWEST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_AUTO_HIGHEST"), rt.make_int(wxID_AUTO_HIGHEST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_NONE"), rt.make_int(wxID_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_SEPARATOR"), rt.make_int(wxID_SEPARATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_ANY"), rt.make_int(wxID_ANY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_LOWEST"), rt.make_int(wxID_LOWEST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_OPEN"), rt.make_int(wxID_OPEN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_CLOSE"), rt.make_int(wxID_CLOSE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_NEW"), rt.make_int(wxID_NEW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_SAVE"), rt.make_int(wxID_SAVE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_SAVEAS"), rt.make_int(wxID_SAVEAS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_REVERT"), rt.make_int(wxID_REVERT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_EXIT"), rt.make_int(wxID_EXIT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_UNDO"), rt.make_int(wxID_UNDO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_REDO"), rt.make_int(wxID_REDO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_HELP"), rt.make_int(wxID_HELP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_PRINT"), rt.make_int(wxID_PRINT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_PRINT_SETUP"), rt.make_int(wxID_PRINT_SETUP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_PAGE_SETUP"), rt.make_int(wxID_PAGE_SETUP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_PREVIEW"), rt.make_int(wxID_PREVIEW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_ABOUT"), rt.make_int(wxID_ABOUT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_HELP_CONTENTS"), rt.make_int(wxID_HELP_CONTENTS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_HELP_INDEX"), rt.make_int(wxID_HELP_INDEX)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_HELP_SEARCH"), rt.make_int(wxID_HELP_SEARCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_HELP_COMMANDS"), rt.make_int(wxID_HELP_COMMANDS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_HELP_PROCEDURES"), rt.make_int(wxID_HELP_PROCEDURES)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_HELP_CONTEXT"), rt.make_int(wxID_HELP_CONTEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_CLOSE_ALL"), rt.make_int(wxID_CLOSE_ALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_PREFERENCES"), rt.make_int(wxID_PREFERENCES)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_EDIT"), rt.make_int(wxID_EDIT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_CUT"), rt.make_int(wxID_CUT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_COPY"), rt.make_int(wxID_COPY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_PASTE"), rt.make_int(wxID_PASTE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_CLEAR"), rt.make_int(wxID_CLEAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FIND"), rt.make_int(wxID_FIND)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_DUPLICATE"), rt.make_int(wxID_DUPLICATE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_SELECTALL"), rt.make_int(wxID_SELECTALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_DELETE"), rt.make_int(wxID_DELETE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_REPLACE"), rt.make_int(wxID_REPLACE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_REPLACE_ALL"), rt.make_int(wxID_REPLACE_ALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_PROPERTIES"), rt.make_int(wxID_PROPERTIES)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_VIEW_DETAILS"), rt.make_int(wxID_VIEW_DETAILS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_VIEW_LARGEICONS"), rt.make_int(wxID_VIEW_LARGEICONS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_VIEW_SMALLICONS"), rt.make_int(wxID_VIEW_SMALLICONS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_VIEW_LIST"), rt.make_int(wxID_VIEW_LIST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_VIEW_SORTDATE"), rt.make_int(wxID_VIEW_SORTDATE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_VIEW_SORTNAME"), rt.make_int(wxID_VIEW_SORTNAME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_VIEW_SORTSIZE"), rt.make_int(wxID_VIEW_SORTSIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_VIEW_SORTTYPE"), rt.make_int(wxID_VIEW_SORTTYPE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FILE"), rt.make_int(wxID_FILE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FILE1"), rt.make_int(wxID_FILE1)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FILE2"), rt.make_int(wxID_FILE2)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FILE3"), rt.make_int(wxID_FILE3)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FILE4"), rt.make_int(wxID_FILE4)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FILE5"), rt.make_int(wxID_FILE5)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FILE6"), rt.make_int(wxID_FILE6)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FILE7"), rt.make_int(wxID_FILE7)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FILE8"), rt.make_int(wxID_FILE8)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FILE9"), rt.make_int(wxID_FILE9)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_OK"), rt.make_int(wxID_OK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_CANCEL"), rt.make_int(wxID_CANCEL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_APPLY"), rt.make_int(wxID_APPLY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_YES"), rt.make_int(wxID_YES)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_NO"), rt.make_int(wxID_NO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_STATIC"), rt.make_int(wxID_STATIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FORWARD"), rt.make_int(wxID_FORWARD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_BACKWARD"), rt.make_int(wxID_BACKWARD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_DEFAULT"), rt.make_int(wxID_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_MORE"), rt.make_int(wxID_MORE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_SETUP"), rt.make_int(wxID_SETUP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_RESET"), rt.make_int(wxID_RESET)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_CONTEXT_HELP"), rt.make_int(wxID_CONTEXT_HELP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_YESTOALL"), rt.make_int(wxID_YESTOALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_NOTOALL"), rt.make_int(wxID_NOTOALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_ABORT"), rt.make_int(wxID_ABORT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_RETRY"), rt.make_int(wxID_RETRY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_IGNORE"), rt.make_int(wxID_IGNORE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_ADD"), rt.make_int(wxID_ADD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_REMOVE"), rt.make_int(wxID_REMOVE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_UP"), rt.make_int(wxID_UP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_DOWN"), rt.make_int(wxID_DOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_HOME"), rt.make_int(wxID_HOME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_REFRESH"), rt.make_int(wxID_REFRESH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_STOP"), rt.make_int(wxID_STOP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_INDEX"), rt.make_int(wxID_INDEX)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_BOLD"), rt.make_int(wxID_BOLD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_ITALIC"), rt.make_int(wxID_ITALIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_JUSTIFY_CENTER"), rt.make_int(wxID_JUSTIFY_CENTER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_JUSTIFY_FILL"), rt.make_int(wxID_JUSTIFY_FILL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_JUSTIFY_RIGHT"), rt.make_int(wxID_JUSTIFY_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_JUSTIFY_LEFT"), rt.make_int(wxID_JUSTIFY_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_UNDERLINE"), rt.make_int(wxID_UNDERLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_INDENT"), rt.make_int(wxID_INDENT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_UNINDENT"), rt.make_int(wxID_UNINDENT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_ZOOM_100"), rt.make_int(wxID_ZOOM_100)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_ZOOM_FIT"), rt.make_int(wxID_ZOOM_FIT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_ZOOM_IN"), rt.make_int(wxID_ZOOM_IN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_ZOOM_OUT"), rt.make_int(wxID_ZOOM_OUT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_UNDELETE"), rt.make_int(wxID_UNDELETE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_REVERT_TO_SAVED"), rt.make_int(wxID_REVERT_TO_SAVED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_CDROM"), rt.make_int(wxID_CDROM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_CONVERT"), rt.make_int(wxID_CONVERT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_EXECUTE"), rt.make_int(wxID_EXECUTE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FLOPPY"), rt.make_int(wxID_FLOPPY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_HARDDISK"), rt.make_int(wxID_HARDDISK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_BOTTOM"), rt.make_int(wxID_BOTTOM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FIRST"), rt.make_int(wxID_FIRST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_LAST"), rt.make_int(wxID_LAST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_TOP"), rt.make_int(wxID_TOP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_INFO"), rt.make_int(wxID_INFO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_JUMP_TO"), rt.make_int(wxID_JUMP_TO)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_NETWORK"), rt.make_int(wxID_NETWORK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_SELECT_COLOR"), rt.make_int(wxID_SELECT_COLOR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_SELECT_FONT"), rt.make_int(wxID_SELECT_FONT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_SORT_ASCENDING"), rt.make_int(wxID_SORT_ASCENDING)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_SORT_DESCENDING"), rt.make_int(wxID_SORT_DESCENDING)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_SPELL_CHECK"), rt.make_int(wxID_SPELL_CHECK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_STRIKETHROUGH"), rt.make_int(wxID_STRIKETHROUGH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_SYSTEM_MENU"), rt.make_int(wxID_SYSTEM_MENU)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_CLOSE_FRAME"), rt.make_int(wxID_CLOSE_FRAME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_MOVE_FRAME"), rt.make_int(wxID_MOVE_FRAME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_RESIZE_FRAME"), rt.make_int(wxID_RESIZE_FRAME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_MAXIMIZE_FRAME"), rt.make_int(wxID_MAXIMIZE_FRAME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_ICONIZE_FRAME"), rt.make_int(wxID_ICONIZE_FRAME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_RESTORE_FRAME"), rt.make_int(wxID_RESTORE_FRAME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_MDI_WINDOW_FIRST"), rt.make_int(wxID_MDI_WINDOW_FIRST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_MDI_WINDOW_CASCADE"), rt.make_int(wxID_MDI_WINDOW_CASCADE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_MDI_WINDOW_TILE_HORZ"), rt.make_int(wxID_MDI_WINDOW_TILE_HORZ)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_MDI_WINDOW_TILE_VERT"), rt.make_int(wxID_MDI_WINDOW_TILE_VERT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_MDI_WINDOW_ARRANGE_ICONS"), rt.make_int(wxID_MDI_WINDOW_ARRANGE_ICONS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_MDI_WINDOW_PREV"), rt.make_int(wxID_MDI_WINDOW_PREV)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_MDI_WINDOW_NEXT"), rt.make_int(wxID_MDI_WINDOW_NEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_MDI_WINDOW_LAST"), rt.make_int(wxID_MDI_WINDOW_LAST)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FILEDLGG"), rt.make_int(wxID_FILEDLGG)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_FILECTRL"), rt.make_int(wxID_FILECTRL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStandardID"), rt.make_atom("wxID_HIGHEST"), rt.make_int(wxID_HIGHEST)),
//  From "gdicmn.h": wxStockCursor
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_NONE"), rt.make_int(wxCURSOR_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_ARROW"), rt.make_int(wxCURSOR_ARROW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_RIGHT_ARROW"), rt.make_int(wxCURSOR_RIGHT_ARROW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_BULLSEYE"), rt.make_int(wxCURSOR_BULLSEYE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_CHAR"), rt.make_int(wxCURSOR_CHAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_CROSS"), rt.make_int(wxCURSOR_CROSS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_HAND"), rt.make_int(wxCURSOR_HAND)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_IBEAM"), rt.make_int(wxCURSOR_IBEAM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_LEFT_BUTTON"), rt.make_int(wxCURSOR_LEFT_BUTTON)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_MAGNIFIER"), rt.make_int(wxCURSOR_MAGNIFIER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_MIDDLE_BUTTON"), rt.make_int(wxCURSOR_MIDDLE_BUTTON)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_NO_ENTRY"), rt.make_int(wxCURSOR_NO_ENTRY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_PAINT_BRUSH"), rt.make_int(wxCURSOR_PAINT_BRUSH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_PENCIL"), rt.make_int(wxCURSOR_PENCIL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_POINT_LEFT"), rt.make_int(wxCURSOR_POINT_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_POINT_RIGHT"), rt.make_int(wxCURSOR_POINT_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_QUESTION_ARROW"), rt.make_int(wxCURSOR_QUESTION_ARROW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_RIGHT_BUTTON"), rt.make_int(wxCURSOR_RIGHT_BUTTON)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_SIZENESW"), rt.make_int(wxCURSOR_SIZENESW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_SIZENS"), rt.make_int(wxCURSOR_SIZENS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_SIZENWSE"), rt.make_int(wxCURSOR_SIZENWSE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_SIZEWE"), rt.make_int(wxCURSOR_SIZEWE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_SIZING"), rt.make_int(wxCURSOR_SIZING)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_SPRAYCAN"), rt.make_int(wxCURSOR_SPRAYCAN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_WAIT"), rt.make_int(wxCURSOR_WAIT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_WATCH"), rt.make_int(wxCURSOR_WATCH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_BLANK"), rt.make_int(wxCURSOR_BLANK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_DEFAULT"), rt.make_int(wxCURSOR_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_ARROWWAIT"), rt.make_int(wxCURSOR_ARROWWAIT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStockCursor"), rt.make_atom("wxCURSOR_MAX"), rt.make_int(wxCURSOR_MAX)),
//  From "defs.h": wxStretch
    enif_make_tuple3(rt.env, rt.make_atom("wxStretch"), rt.make_atom("wxSTRETCH_NOT"), rt.make_int(wxSTRETCH_NOT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStretch"), rt.make_atom("wxSHRINK"), rt.make_int(wxSHRINK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStretch"), rt.make_atom("wxGROW"), rt.make_int(wxGROW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStretch"), rt.make_atom("wxEXPAND"), rt.make_int(wxEXPAND)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStretch"), rt.make_atom("wxSHAPED"), rt.make_int(wxSHAPED)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStretch"), rt.make_atom("wxTILE"), rt.make_int(wxTILE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxStretch"), rt.make_atom("wxSTRETCH_MASK"), rt.make_int(wxSTRETCH_MASK)),
//  From "settings.h": wxSystemColour
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_SCROLLBAR"), rt.make_int(wxSYS_COLOUR_SCROLLBAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_DESKTOP"), rt.make_int(wxSYS_COLOUR_DESKTOP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_ACTIVECAPTION"), rt.make_int(wxSYS_COLOUR_ACTIVECAPTION)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_INACTIVECAPTION"), rt.make_int(wxSYS_COLOUR_INACTIVECAPTION)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_MENU"), rt.make_int(wxSYS_COLOUR_MENU)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_WINDOW"), rt.make_int(wxSYS_COLOUR_WINDOW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_WINDOWFRAME"), rt.make_int(wxSYS_COLOUR_WINDOWFRAME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_MENUTEXT"), rt.make_int(wxSYS_COLOUR_MENUTEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_WINDOWTEXT"), rt.make_int(wxSYS_COLOUR_WINDOWTEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_CAPTIONTEXT"), rt.make_int(wxSYS_COLOUR_CAPTIONTEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_ACTIVEBORDER"), rt.make_int(wxSYS_COLOUR_ACTIVEBORDER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_INACTIVEBORDER"), rt.make_int(wxSYS_COLOUR_INACTIVEBORDER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_APPWORKSPACE"), rt.make_int(wxSYS_COLOUR_APPWORKSPACE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_HIGHLIGHT"), rt.make_int(wxSYS_COLOUR_HIGHLIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_HIGHLIGHTTEXT"), rt.make_int(wxSYS_COLOUR_HIGHLIGHTTEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_BTNFACE"), rt.make_int(wxSYS_COLOUR_BTNFACE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_BTNSHADOW"), rt.make_int(wxSYS_COLOUR_BTNSHADOW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_GRAYTEXT"), rt.make_int(wxSYS_COLOUR_GRAYTEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_BTNTEXT"), rt.make_int(wxSYS_COLOUR_BTNTEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_INACTIVECAPTIONTEXT"), rt.make_int(wxSYS_COLOUR_INACTIVECAPTIONTEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_BTNHIGHLIGHT"), rt.make_int(wxSYS_COLOUR_BTNHIGHLIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_3DDKSHADOW"), rt.make_int(wxSYS_COLOUR_3DDKSHADOW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_3DLIGHT"), rt.make_int(wxSYS_COLOUR_3DLIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_INFOTEXT"), rt.make_int(wxSYS_COLOUR_INFOTEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_INFOBK"), rt.make_int(wxSYS_COLOUR_INFOBK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_LISTBOX"), rt.make_int(wxSYS_COLOUR_LISTBOX)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_HOTLIGHT"), rt.make_int(wxSYS_COLOUR_HOTLIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_GRADIENTACTIVECAPTION"), rt.make_int(wxSYS_COLOUR_GRADIENTACTIVECAPTION)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_GRADIENTINACTIVECAPTION"), rt.make_int(wxSYS_COLOUR_GRADIENTINACTIVECAPTION)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_MENUHILIGHT"), rt.make_int(wxSYS_COLOUR_MENUHILIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_MENUBAR"), rt.make_int(wxSYS_COLOUR_MENUBAR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_LISTBOXTEXT"), rt.make_int(wxSYS_COLOUR_LISTBOXTEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_LISTBOXHIGHLIGHTTEXT"), rt.make_int(wxSYS_COLOUR_LISTBOXHIGHLIGHTTEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_BACKGROUND"), rt.make_int(wxSYS_COLOUR_BACKGROUND)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_3DFACE"), rt.make_int(wxSYS_COLOUR_3DFACE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_3DSHADOW"), rt.make_int(wxSYS_COLOUR_3DSHADOW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_BTNHILIGHT"), rt.make_int(wxSYS_COLOUR_BTNHILIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_3DHIGHLIGHT"), rt.make_int(wxSYS_COLOUR_3DHIGHLIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_3DHILIGHT"), rt.make_int(wxSYS_COLOUR_3DHILIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemColour"), rt.make_atom("wxSYS_COLOUR_FRAMEBK"), rt.make_int(wxSYS_COLOUR_FRAMEBK)),
//  From "settings.h": wxSystemFeature
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemFeature"), rt.make_atom("wxSYS_CAN_DRAW_FRAME_DECORATIONS"), rt.make_int(wxSYS_CAN_DRAW_FRAME_DECORATIONS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemFeature"), rt.make_atom("wxSYS_CAN_ICONIZE_FRAME"), rt.make_int(wxSYS_CAN_ICONIZE_FRAME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemFeature"), rt.make_atom("wxSYS_TABLET_PRESENT"), rt.make_int(wxSYS_TABLET_PRESENT)),
//  From "settings.h": wxSystemFont
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemFont"), rt.make_atom("wxSYS_OEM_FIXED_FONT"), rt.make_int(wxSYS_OEM_FIXED_FONT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemFont"), rt.make_atom("wxSYS_ANSI_FIXED_FONT"), rt.make_int(wxSYS_ANSI_FIXED_FONT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemFont"), rt.make_atom("wxSYS_ANSI_VAR_FONT"), rt.make_int(wxSYS_ANSI_VAR_FONT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemFont"), rt.make_atom("wxSYS_SYSTEM_FONT"), rt.make_int(wxSYS_SYSTEM_FONT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemFont"), rt.make_atom("wxSYS_DEVICE_DEFAULT_FONT"), rt.make_int(wxSYS_DEVICE_DEFAULT_FONT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemFont"), rt.make_atom("wxSYS_DEFAULT_GUI_FONT"), rt.make_int(wxSYS_DEFAULT_GUI_FONT)),
//  From "settings.h": wxSystemMetric
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_MOUSE_BUTTONS"), rt.make_int(wxSYS_MOUSE_BUTTONS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_BORDER_X"), rt.make_int(wxSYS_BORDER_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_BORDER_Y"), rt.make_int(wxSYS_BORDER_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_CURSOR_X"), rt.make_int(wxSYS_CURSOR_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_CURSOR_Y"), rt.make_int(wxSYS_CURSOR_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_DCLICK_X"), rt.make_int(wxSYS_DCLICK_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_DCLICK_Y"), rt.make_int(wxSYS_DCLICK_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_DRAG_X"), rt.make_int(wxSYS_DRAG_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_DRAG_Y"), rt.make_int(wxSYS_DRAG_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_EDGE_X"), rt.make_int(wxSYS_EDGE_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_EDGE_Y"), rt.make_int(wxSYS_EDGE_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_HSCROLL_ARROW_X"), rt.make_int(wxSYS_HSCROLL_ARROW_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_HSCROLL_ARROW_Y"), rt.make_int(wxSYS_HSCROLL_ARROW_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_HTHUMB_X"), rt.make_int(wxSYS_HTHUMB_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_ICON_X"), rt.make_int(wxSYS_ICON_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_ICON_Y"), rt.make_int(wxSYS_ICON_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_ICONSPACING_X"), rt.make_int(wxSYS_ICONSPACING_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_ICONSPACING_Y"), rt.make_int(wxSYS_ICONSPACING_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_WINDOWMIN_X"), rt.make_int(wxSYS_WINDOWMIN_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_WINDOWMIN_Y"), rt.make_int(wxSYS_WINDOWMIN_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_SCREEN_X"), rt.make_int(wxSYS_SCREEN_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_SCREEN_Y"), rt.make_int(wxSYS_SCREEN_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_FRAMESIZE_X"), rt.make_int(wxSYS_FRAMESIZE_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_FRAMESIZE_Y"), rt.make_int(wxSYS_FRAMESIZE_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_SMALLICON_X"), rt.make_int(wxSYS_SMALLICON_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_SMALLICON_Y"), rt.make_int(wxSYS_SMALLICON_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_HSCROLL_Y"), rt.make_int(wxSYS_HSCROLL_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_VSCROLL_X"), rt.make_int(wxSYS_VSCROLL_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_VSCROLL_ARROW_X"), rt.make_int(wxSYS_VSCROLL_ARROW_X)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_VSCROLL_ARROW_Y"), rt.make_int(wxSYS_VSCROLL_ARROW_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_VTHUMB_Y"), rt.make_int(wxSYS_VTHUMB_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_CAPTION_Y"), rt.make_int(wxSYS_CAPTION_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_MENU_Y"), rt.make_int(wxSYS_MENU_Y)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_NETWORK_PRESENT"), rt.make_int(wxSYS_NETWORK_PRESENT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_PENWINDOWS_PRESENT"), rt.make_int(wxSYS_PENWINDOWS_PRESENT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_SHOW_SOUNDS"), rt.make_int(wxSYS_SHOW_SOUNDS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_SWAP_BUTTONS"), rt.make_int(wxSYS_SWAP_BUTTONS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_DCLICK_MSEC"), rt.make_int(wxSYS_DCLICK_MSEC)),
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_CARET_ON_MSEC"), rt.make_int(wxSYS_CARET_ON_MSEC)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_CARET_ON_MSEC"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_CARET_OFF_MSEC"), rt.make_int(wxSYS_CARET_OFF_MSEC)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_CARET_OFF_MSEC"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,1)
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_CARET_TIMEOUT_MSEC"), rt.make_int(wxSYS_CARET_TIMEOUT_MSEC)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemMetric"), rt.make_atom("wxSYS_CARET_TIMEOUT_MSEC"), WXE_ATOM_undefined),
#endif
//  From "settings.h": wxSystemScreenType
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemScreenType"), rt.make_atom("wxSYS_SCREEN_NONE"), rt.make_int(wxSYS_SCREEN_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemScreenType"), rt.make_atom("wxSYS_SCREEN_TINY"), rt.make_int(wxSYS_SCREEN_TINY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemScreenType"), rt.make_atom("wxSYS_SCREEN_PDA"), rt.make_int(wxSYS_SCREEN_PDA)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemScreenType"), rt.make_atom("wxSYS_SCREEN_SMALL"), rt.make_int(wxSYS_SCREEN_SMALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxSystemScreenType"), rt.make_atom("wxSYS_SCREEN_DESKTOP"), rt.make_int(wxSYS_SCREEN_DESKTOP)),
//  From "taskbar.h": wxTaskBarIconType
    enif_make_tuple3(rt.env, rt.make_atom("wxTaskBarIconType"), rt.make_atom("wxTBI_DOCK"), rt.make_int(wxTBI_DOCK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTaskBarIconType"), rt.make_atom("wxTBI_CUSTOM_STATUSITEM"), rt.make_int(wxTBI_CUSTOM_STATUSITEM)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTaskBarIconType"), rt.make_atom("wxTBI_DEFAULT_TYPE"), rt.make_int(wxTBI_DEFAULT_TYPE)),
//  From "textctrl.h": wxTextAttrAlignment
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrAlignment"), rt.make_atom("wxTEXT_ALIGNMENT_DEFAULT"), rt.make_int(wxTEXT_ALIGNMENT_DEFAULT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrAlignment"), rt.make_atom("wxTEXT_ALIGNMENT_LEFT"), rt.make_int(wxTEXT_ALIGNMENT_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrAlignment"), rt.make_atom("wxTEXT_ALIGNMENT_CENTRE"), rt.make_int(wxTEXT_ALIGNMENT_CENTRE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrAlignment"), rt.make_atom("wxTEXT_ALIGNMENT_CENTER"), rt.make_int(wxTEXT_ALIGNMENT_CENTER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrAlignment"), rt.make_atom("wxTEXT_ALIGNMENT_RIGHT"), rt.make_int(wxTEXT_ALIGNMENT_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrAlignment"), rt.make_atom("wxTEXT_ALIGNMENT_JUSTIFIED"), rt.make_int(wxTEXT_ALIGNMENT_JUSTIFIED)),
//  From "textctrl.h": wxTextAttrBulletStyle
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_NONE"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_ARABIC"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_ARABIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_LETTERS_UPPER"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_LETTERS_UPPER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_LETTERS_LOWER"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_LETTERS_LOWER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_ROMAN_UPPER"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_ROMAN_UPPER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_ROMAN_LOWER"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_ROMAN_LOWER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_SYMBOL"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_SYMBOL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_BITMAP"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_BITMAP)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_PARENTHESES"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_PARENTHESES)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_PERIOD"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_PERIOD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_STANDARD"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_STANDARD)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_RIGHT_PARENTHESIS"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_RIGHT_PARENTHESIS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_OUTLINE"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_OUTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_ALIGN_LEFT"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_ALIGN_LEFT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_ALIGN_RIGHT"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_ALIGN_RIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_ALIGN_CENTRE"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_ALIGN_CENTRE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrBulletStyle"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE_CONTINUATION"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE_CONTINUATION)),
//  From "textctrl.h": wxTextAttrEffects
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrEffects"), rt.make_atom("wxTEXT_ATTR_EFFECT_NONE"), rt.make_int(wxTEXT_ATTR_EFFECT_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrEffects"), rt.make_atom("wxTEXT_ATTR_EFFECT_CAPITALS"), rt.make_int(wxTEXT_ATTR_EFFECT_CAPITALS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrEffects"), rt.make_atom("wxTEXT_ATTR_EFFECT_SMALL_CAPITALS"), rt.make_int(wxTEXT_ATTR_EFFECT_SMALL_CAPITALS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrEffects"), rt.make_atom("wxTEXT_ATTR_EFFECT_STRIKETHROUGH"), rt.make_int(wxTEXT_ATTR_EFFECT_STRIKETHROUGH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrEffects"), rt.make_atom("wxTEXT_ATTR_EFFECT_DOUBLE_STRIKETHROUGH"), rt.make_int(wxTEXT_ATTR_EFFECT_DOUBLE_STRIKETHROUGH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrEffects"), rt.make_atom("wxTEXT_ATTR_EFFECT_SHADOW"), rt.make_int(wxTEXT_ATTR_EFFECT_SHADOW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrEffects"), rt.make_atom("wxTEXT_ATTR_EFFECT_EMBOSS"), rt.make_int(wxTEXT_ATTR_EFFECT_EMBOSS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrEffects"), rt.make_atom("wxTEXT_ATTR_EFFECT_OUTLINE"), rt.make_int(wxTEXT_ATTR_EFFECT_OUTLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrEffects"), rt.make_atom("wxTEXT_ATTR_EFFECT_ENGRAVE"), rt.make_int(wxTEXT_ATTR_EFFECT_ENGRAVE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrEffects"), rt.make_atom("wxTEXT_ATTR_EFFECT_SUPERSCRIPT"), rt.make_int(wxTEXT_ATTR_EFFECT_SUPERSCRIPT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrEffects"), rt.make_atom("wxTEXT_ATTR_EFFECT_SUBSCRIPT"), rt.make_int(wxTEXT_ATTR_EFFECT_SUBSCRIPT)),
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrEffects"), rt.make_atom("wxTEXT_ATTR_EFFECT_RTL"), rt.make_int(wxTEXT_ATTR_EFFECT_RTL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrEffects"), rt.make_atom("wxTEXT_ATTR_EFFECT_RTL"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrEffects"), rt.make_atom("wxTEXT_ATTR_EFFECT_SUPPRESS_HYPHENATION"), rt.make_int(wxTEXT_ATTR_EFFECT_SUPPRESS_HYPHENATION)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrEffects"), rt.make_atom("wxTEXT_ATTR_EFFECT_SUPPRESS_HYPHENATION"), WXE_ATOM_undefined),
#endif
//  From "textctrl.h": wxTextAttrFlags
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_TEXT_COLOUR"), rt.make_int(wxTEXT_ATTR_TEXT_COLOUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_BACKGROUND_COLOUR"), rt.make_int(wxTEXT_ATTR_BACKGROUND_COLOUR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_FONT_FACE"), rt.make_int(wxTEXT_ATTR_FONT_FACE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_FONT_POINT_SIZE"), rt.make_int(wxTEXT_ATTR_FONT_POINT_SIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_FONT_PIXEL_SIZE"), rt.make_int(wxTEXT_ATTR_FONT_PIXEL_SIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_FONT_WEIGHT"), rt.make_int(wxTEXT_ATTR_FONT_WEIGHT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_FONT_ITALIC"), rt.make_int(wxTEXT_ATTR_FONT_ITALIC)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_FONT_UNDERLINE"), rt.make_int(wxTEXT_ATTR_FONT_UNDERLINE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_FONT_STRIKETHROUGH"), rt.make_int(wxTEXT_ATTR_FONT_STRIKETHROUGH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_FONT_ENCODING"), rt.make_int(wxTEXT_ATTR_FONT_ENCODING)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_FONT_FAMILY"), rt.make_int(wxTEXT_ATTR_FONT_FAMILY)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_FONT_SIZE"), rt.make_int(wxTEXT_ATTR_FONT_SIZE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_FONT"), rt.make_int(wxTEXT_ATTR_FONT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_ALIGNMENT"), rt.make_int(wxTEXT_ATTR_ALIGNMENT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_LEFT_INDENT"), rt.make_int(wxTEXT_ATTR_LEFT_INDENT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_RIGHT_INDENT"), rt.make_int(wxTEXT_ATTR_RIGHT_INDENT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_TABS"), rt.make_int(wxTEXT_ATTR_TABS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_PARA_SPACING_AFTER"), rt.make_int(wxTEXT_ATTR_PARA_SPACING_AFTER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_PARA_SPACING_BEFORE"), rt.make_int(wxTEXT_ATTR_PARA_SPACING_BEFORE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_LINE_SPACING"), rt.make_int(wxTEXT_ATTR_LINE_SPACING)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_CHARACTER_STYLE_NAME"), rt.make_int(wxTEXT_ATTR_CHARACTER_STYLE_NAME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_PARAGRAPH_STYLE_NAME"), rt.make_int(wxTEXT_ATTR_PARAGRAPH_STYLE_NAME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_LIST_STYLE_NAME"), rt.make_int(wxTEXT_ATTR_LIST_STYLE_NAME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_BULLET_STYLE"), rt.make_int(wxTEXT_ATTR_BULLET_STYLE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_BULLET_NUMBER"), rt.make_int(wxTEXT_ATTR_BULLET_NUMBER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_BULLET_TEXT"), rt.make_int(wxTEXT_ATTR_BULLET_TEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_BULLET_NAME"), rt.make_int(wxTEXT_ATTR_BULLET_NAME)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_BULLET"), rt.make_int(wxTEXT_ATTR_BULLET)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_URL"), rt.make_int(wxTEXT_ATTR_URL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_PAGE_BREAK"), rt.make_int(wxTEXT_ATTR_PAGE_BREAK)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_EFFECTS"), rt.make_int(wxTEXT_ATTR_EFFECTS)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_OUTLINE_LEVEL"), rt.make_int(wxTEXT_ATTR_OUTLINE_LEVEL)),
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_AVOID_PAGE_BREAK_BEFORE"), rt.make_int(wxTEXT_ATTR_AVOID_PAGE_BREAK_BEFORE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_AVOID_PAGE_BREAK_BEFORE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_AVOID_PAGE_BREAK_AFTER"), rt.make_int(wxTEXT_ATTR_AVOID_PAGE_BREAK_AFTER)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_AVOID_PAGE_BREAK_AFTER"), WXE_ATOM_undefined),
#endif
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_CHARACTER"), rt.make_int(wxTEXT_ATTR_CHARACTER)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_PARAGRAPH"), rt.make_int(wxTEXT_ATTR_PARAGRAPH)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrFlags"), rt.make_atom("wxTEXT_ATTR_ALL"), rt.make_int(wxTEXT_ATTR_ALL)),
//  From "textctrl.h": wxTextAttrLineSpacing
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrLineSpacing"), rt.make_atom("wxTEXT_ATTR_LINE_SPACING_NORMAL"), rt.make_int(wxTEXT_ATTR_LINE_SPACING_NORMAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrLineSpacing"), rt.make_atom("wxTEXT_ATTR_LINE_SPACING_HALF"), rt.make_int(wxTEXT_ATTR_LINE_SPACING_HALF)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrLineSpacing"), rt.make_atom("wxTEXT_ATTR_LINE_SPACING_TWICE"), rt.make_int(wxTEXT_ATTR_LINE_SPACING_TWICE)),
//  From "textctrl.h": wxTextAttrUnderlineType
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrUnderlineType"), rt.make_atom("wxTEXT_ATTR_UNDERLINE_NONE"), rt.make_int(wxTEXT_ATTR_UNDERLINE_NONE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrUnderlineType"), rt.make_atom("wxTEXT_ATTR_UNDERLINE_NONE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrUnderlineType"), rt.make_atom("wxTEXT_ATTR_UNDERLINE_SOLID"), rt.make_int(wxTEXT_ATTR_UNDERLINE_SOLID)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrUnderlineType"), rt.make_atom("wxTEXT_ATTR_UNDERLINE_SOLID"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrUnderlineType"), rt.make_atom("wxTEXT_ATTR_UNDERLINE_DOUBLE"), rt.make_int(wxTEXT_ATTR_UNDERLINE_DOUBLE)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrUnderlineType"), rt.make_atom("wxTEXT_ATTR_UNDERLINE_DOUBLE"), WXE_ATOM_undefined),
#endif
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrUnderlineType"), rt.make_atom("wxTEXT_ATTR_UNDERLINE_SPECIAL"), rt.make_int(wxTEXT_ATTR_UNDERLINE_SPECIAL)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxTextAttrUnderlineType"), rt.make_atom("wxTEXT_ATTR_UNDERLINE_SPECIAL"), WXE_ATOM_undefined),
#endif
//  From "textctrl.h": wxTextCtrlHitTestResult
    enif_make_tuple3(rt.env, rt.make_atom("wxTextCtrlHitTestResult"), rt.make_atom("wxTE_HT_UNKNOWN"), rt.make_int(wxTE_HT_UNKNOWN)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextCtrlHitTestResult"), rt.make_atom("wxTE_HT_BEFORE"), rt.make_int(wxTE_HT_BEFORE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextCtrlHitTestResult"), rt.make_atom("wxTE_HT_ON_TEXT"), rt.make_int(wxTE_HT_ON_TEXT)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextCtrlHitTestResult"), rt.make_atom("wxTE_HT_BELOW"), rt.make_int(wxTE_HT_BELOW)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTextCtrlHitTestResult"), rt.make_atom("wxTE_HT_BEYOND"), rt.make_int(wxTE_HT_BEYOND)),
//  From "toolbar.h": wxToolBarToolStyle
    enif_make_tuple3(rt.env, rt.make_atom("wxToolBarToolStyle"), rt.make_atom("wxTOOL_STYLE_BUTTON"), rt.make_int(wxTOOL_STYLE_BUTTON)),
    enif_make_tuple3(rt.env, rt.make_atom("wxToolBarToolStyle"), rt.make_atom("wxTOOL_STYLE_SEPARATOR"), rt.make_int(wxTOOL_STYLE_SEPARATOR)),
    enif_make_tuple3(rt.env, rt.make_atom("wxToolBarToolStyle"), rt.make_atom("wxTOOL_STYLE_CONTROL"), rt.make_int(wxTOOL_STYLE_CONTROL)),
//  From "treebase.h": wxTreeItemIcon
    enif_make_tuple3(rt.env, rt.make_atom("wxTreeItemIcon"), rt.make_atom("wxTreeItemIcon_Normal"), rt.make_int(wxTreeItemIcon_Normal)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTreeItemIcon"), rt.make_atom("wxTreeItemIcon_Selected"), rt.make_int(wxTreeItemIcon_Selected)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTreeItemIcon"), rt.make_atom("wxTreeItemIcon_Expanded"), rt.make_int(wxTreeItemIcon_Expanded)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTreeItemIcon"), rt.make_atom("wxTreeItemIcon_SelectedExpanded"), rt.make_int(wxTreeItemIcon_SelectedExpanded)),
    enif_make_tuple3(rt.env, rt.make_atom("wxTreeItemIcon"), rt.make_atom("wxTreeItemIcon_Max"), rt.make_int(wxTreeItemIcon_Max)),
//  From "defs.h": wxUpdateUI
    enif_make_tuple3(rt.env, rt.make_atom("wxUpdateUI"), rt.make_atom("wxUPDATE_UI_NONE"), rt.make_int(wxUPDATE_UI_NONE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxUpdateUI"), rt.make_atom("wxUPDATE_UI_RECURSE"), rt.make_int(wxUPDATE_UI_RECURSE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxUpdateUI"), rt.make_atom("wxUPDATE_UI_FROMIDLE"), rt.make_int(wxUPDATE_UI_FROMIDLE)),
//  From "event.h": wxUpdateUIMode
    enif_make_tuple3(rt.env, rt.make_atom("wxUpdateUIMode"), rt.make_atom("wxUPDATE_UI_PROCESS_ALL"), rt.make_int(wxUPDATE_UI_PROCESS_ALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxUpdateUIMode"), rt.make_atom("wxUPDATE_UI_PROCESS_SPECIFIED"), rt.make_int(wxUPDATE_UI_PROCESS_SPECIFIED)),
//  From "window.h": wxWindowVariant
    enif_make_tuple3(rt.env, rt.make_atom("wxWindowVariant"), rt.make_atom("wxWINDOW_VARIANT_NORMAL"), rt.make_int(wxWINDOW_VARIANT_NORMAL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxWindowVariant"), rt.make_atom("wxWINDOW_VARIANT_SMALL"), rt.make_int(wxWINDOW_VARIANT_SMALL)),
    enif_make_tuple3(rt.env, rt.make_atom("wxWindowVariant"), rt.make_atom("wxWINDOW_VARIANT_MINI"), rt.make_int(wxWINDOW_VARIANT_MINI)),
    enif_make_tuple3(rt.env, rt.make_atom("wxWindowVariant"), rt.make_atom("wxWINDOW_VARIANT_LARGE"), rt.make_int(wxWINDOW_VARIANT_LARGE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxWindowVariant"), rt.make_atom("wxWINDOW_VARIANT_MAX"), rt.make_int(wxWINDOW_VARIANT_MAX)),
//  From "xmlres.h": wxXmlResourceFlags
    enif_make_tuple3(rt.env, rt.make_atom("wxXmlResourceFlags"), rt.make_atom("wxXRC_USE_LOCALE"), rt.make_int(wxXRC_USE_LOCALE)),
    enif_make_tuple3(rt.env, rt.make_atom("wxXmlResourceFlags"), rt.make_atom("wxXRC_NO_SUBCLASSING"), rt.make_int(wxXRC_NO_SUBCLASSING)),
    enif_make_tuple3(rt.env, rt.make_atom("wxXmlResourceFlags"), rt.make_atom("wxXRC_NO_RELOADING"), rt.make_int(wxXRC_NO_RELOADING)),
#if wxCHECK_VERSION(3,1,3)
    enif_make_tuple3(rt.env, rt.make_atom("wxXmlResourceFlags"), rt.make_atom("wxXRC_USE_ENVVARS"), rt.make_int(wxXRC_USE_ENVVARS)),
#else
    enif_make_tuple3(rt.env, rt.make_atom("wxXmlResourceFlags"), rt.make_atom("wxXRC_USE_ENVVARS"), WXE_ATOM_undefined),
#endif
  };
  rt.send(enif_make_list_from_array(rt.env, consts, sizeof(consts) / sizeof(consts[0])));
}
