#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CD7D0
// Address: 0x4cd7d0 - 0x4cdf10
void sub_004CD7D0_0x4cd7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD7D0_0x4cd7d0");
#endif

    switch (ctx->pc) {
        case 0x4cd7d0u: goto label_4cd7d0;
        case 0x4cd7d4u: goto label_4cd7d4;
        case 0x4cd7d8u: goto label_4cd7d8;
        case 0x4cd7dcu: goto label_4cd7dc;
        case 0x4cd7e0u: goto label_4cd7e0;
        case 0x4cd7e4u: goto label_4cd7e4;
        case 0x4cd7e8u: goto label_4cd7e8;
        case 0x4cd7ecu: goto label_4cd7ec;
        case 0x4cd7f0u: goto label_4cd7f0;
        case 0x4cd7f4u: goto label_4cd7f4;
        case 0x4cd7f8u: goto label_4cd7f8;
        case 0x4cd7fcu: goto label_4cd7fc;
        case 0x4cd800u: goto label_4cd800;
        case 0x4cd804u: goto label_4cd804;
        case 0x4cd808u: goto label_4cd808;
        case 0x4cd80cu: goto label_4cd80c;
        case 0x4cd810u: goto label_4cd810;
        case 0x4cd814u: goto label_4cd814;
        case 0x4cd818u: goto label_4cd818;
        case 0x4cd81cu: goto label_4cd81c;
        case 0x4cd820u: goto label_4cd820;
        case 0x4cd824u: goto label_4cd824;
        case 0x4cd828u: goto label_4cd828;
        case 0x4cd82cu: goto label_4cd82c;
        case 0x4cd830u: goto label_4cd830;
        case 0x4cd834u: goto label_4cd834;
        case 0x4cd838u: goto label_4cd838;
        case 0x4cd83cu: goto label_4cd83c;
        case 0x4cd840u: goto label_4cd840;
        case 0x4cd844u: goto label_4cd844;
        case 0x4cd848u: goto label_4cd848;
        case 0x4cd84cu: goto label_4cd84c;
        case 0x4cd850u: goto label_4cd850;
        case 0x4cd854u: goto label_4cd854;
        case 0x4cd858u: goto label_4cd858;
        case 0x4cd85cu: goto label_4cd85c;
        case 0x4cd860u: goto label_4cd860;
        case 0x4cd864u: goto label_4cd864;
        case 0x4cd868u: goto label_4cd868;
        case 0x4cd86cu: goto label_4cd86c;
        case 0x4cd870u: goto label_4cd870;
        case 0x4cd874u: goto label_4cd874;
        case 0x4cd878u: goto label_4cd878;
        case 0x4cd87cu: goto label_4cd87c;
        case 0x4cd880u: goto label_4cd880;
        case 0x4cd884u: goto label_4cd884;
        case 0x4cd888u: goto label_4cd888;
        case 0x4cd88cu: goto label_4cd88c;
        case 0x4cd890u: goto label_4cd890;
        case 0x4cd894u: goto label_4cd894;
        case 0x4cd898u: goto label_4cd898;
        case 0x4cd89cu: goto label_4cd89c;
        case 0x4cd8a0u: goto label_4cd8a0;
        case 0x4cd8a4u: goto label_4cd8a4;
        case 0x4cd8a8u: goto label_4cd8a8;
        case 0x4cd8acu: goto label_4cd8ac;
        case 0x4cd8b0u: goto label_4cd8b0;
        case 0x4cd8b4u: goto label_4cd8b4;
        case 0x4cd8b8u: goto label_4cd8b8;
        case 0x4cd8bcu: goto label_4cd8bc;
        case 0x4cd8c0u: goto label_4cd8c0;
        case 0x4cd8c4u: goto label_4cd8c4;
        case 0x4cd8c8u: goto label_4cd8c8;
        case 0x4cd8ccu: goto label_4cd8cc;
        case 0x4cd8d0u: goto label_4cd8d0;
        case 0x4cd8d4u: goto label_4cd8d4;
        case 0x4cd8d8u: goto label_4cd8d8;
        case 0x4cd8dcu: goto label_4cd8dc;
        case 0x4cd8e0u: goto label_4cd8e0;
        case 0x4cd8e4u: goto label_4cd8e4;
        case 0x4cd8e8u: goto label_4cd8e8;
        case 0x4cd8ecu: goto label_4cd8ec;
        case 0x4cd8f0u: goto label_4cd8f0;
        case 0x4cd8f4u: goto label_4cd8f4;
        case 0x4cd8f8u: goto label_4cd8f8;
        case 0x4cd8fcu: goto label_4cd8fc;
        case 0x4cd900u: goto label_4cd900;
        case 0x4cd904u: goto label_4cd904;
        case 0x4cd908u: goto label_4cd908;
        case 0x4cd90cu: goto label_4cd90c;
        case 0x4cd910u: goto label_4cd910;
        case 0x4cd914u: goto label_4cd914;
        case 0x4cd918u: goto label_4cd918;
        case 0x4cd91cu: goto label_4cd91c;
        case 0x4cd920u: goto label_4cd920;
        case 0x4cd924u: goto label_4cd924;
        case 0x4cd928u: goto label_4cd928;
        case 0x4cd92cu: goto label_4cd92c;
        case 0x4cd930u: goto label_4cd930;
        case 0x4cd934u: goto label_4cd934;
        case 0x4cd938u: goto label_4cd938;
        case 0x4cd93cu: goto label_4cd93c;
        case 0x4cd940u: goto label_4cd940;
        case 0x4cd944u: goto label_4cd944;
        case 0x4cd948u: goto label_4cd948;
        case 0x4cd94cu: goto label_4cd94c;
        case 0x4cd950u: goto label_4cd950;
        case 0x4cd954u: goto label_4cd954;
        case 0x4cd958u: goto label_4cd958;
        case 0x4cd95cu: goto label_4cd95c;
        case 0x4cd960u: goto label_4cd960;
        case 0x4cd964u: goto label_4cd964;
        case 0x4cd968u: goto label_4cd968;
        case 0x4cd96cu: goto label_4cd96c;
        case 0x4cd970u: goto label_4cd970;
        case 0x4cd974u: goto label_4cd974;
        case 0x4cd978u: goto label_4cd978;
        case 0x4cd97cu: goto label_4cd97c;
        case 0x4cd980u: goto label_4cd980;
        case 0x4cd984u: goto label_4cd984;
        case 0x4cd988u: goto label_4cd988;
        case 0x4cd98cu: goto label_4cd98c;
        case 0x4cd990u: goto label_4cd990;
        case 0x4cd994u: goto label_4cd994;
        case 0x4cd998u: goto label_4cd998;
        case 0x4cd99cu: goto label_4cd99c;
        case 0x4cd9a0u: goto label_4cd9a0;
        case 0x4cd9a4u: goto label_4cd9a4;
        case 0x4cd9a8u: goto label_4cd9a8;
        case 0x4cd9acu: goto label_4cd9ac;
        case 0x4cd9b0u: goto label_4cd9b0;
        case 0x4cd9b4u: goto label_4cd9b4;
        case 0x4cd9b8u: goto label_4cd9b8;
        case 0x4cd9bcu: goto label_4cd9bc;
        case 0x4cd9c0u: goto label_4cd9c0;
        case 0x4cd9c4u: goto label_4cd9c4;
        case 0x4cd9c8u: goto label_4cd9c8;
        case 0x4cd9ccu: goto label_4cd9cc;
        case 0x4cd9d0u: goto label_4cd9d0;
        case 0x4cd9d4u: goto label_4cd9d4;
        case 0x4cd9d8u: goto label_4cd9d8;
        case 0x4cd9dcu: goto label_4cd9dc;
        case 0x4cd9e0u: goto label_4cd9e0;
        case 0x4cd9e4u: goto label_4cd9e4;
        case 0x4cd9e8u: goto label_4cd9e8;
        case 0x4cd9ecu: goto label_4cd9ec;
        case 0x4cd9f0u: goto label_4cd9f0;
        case 0x4cd9f4u: goto label_4cd9f4;
        case 0x4cd9f8u: goto label_4cd9f8;
        case 0x4cd9fcu: goto label_4cd9fc;
        case 0x4cda00u: goto label_4cda00;
        case 0x4cda04u: goto label_4cda04;
        case 0x4cda08u: goto label_4cda08;
        case 0x4cda0cu: goto label_4cda0c;
        case 0x4cda10u: goto label_4cda10;
        case 0x4cda14u: goto label_4cda14;
        case 0x4cda18u: goto label_4cda18;
        case 0x4cda1cu: goto label_4cda1c;
        case 0x4cda20u: goto label_4cda20;
        case 0x4cda24u: goto label_4cda24;
        case 0x4cda28u: goto label_4cda28;
        case 0x4cda2cu: goto label_4cda2c;
        case 0x4cda30u: goto label_4cda30;
        case 0x4cda34u: goto label_4cda34;
        case 0x4cda38u: goto label_4cda38;
        case 0x4cda3cu: goto label_4cda3c;
        case 0x4cda40u: goto label_4cda40;
        case 0x4cda44u: goto label_4cda44;
        case 0x4cda48u: goto label_4cda48;
        case 0x4cda4cu: goto label_4cda4c;
        case 0x4cda50u: goto label_4cda50;
        case 0x4cda54u: goto label_4cda54;
        case 0x4cda58u: goto label_4cda58;
        case 0x4cda5cu: goto label_4cda5c;
        case 0x4cda60u: goto label_4cda60;
        case 0x4cda64u: goto label_4cda64;
        case 0x4cda68u: goto label_4cda68;
        case 0x4cda6cu: goto label_4cda6c;
        case 0x4cda70u: goto label_4cda70;
        case 0x4cda74u: goto label_4cda74;
        case 0x4cda78u: goto label_4cda78;
        case 0x4cda7cu: goto label_4cda7c;
        case 0x4cda80u: goto label_4cda80;
        case 0x4cda84u: goto label_4cda84;
        case 0x4cda88u: goto label_4cda88;
        case 0x4cda8cu: goto label_4cda8c;
        case 0x4cda90u: goto label_4cda90;
        case 0x4cda94u: goto label_4cda94;
        case 0x4cda98u: goto label_4cda98;
        case 0x4cda9cu: goto label_4cda9c;
        case 0x4cdaa0u: goto label_4cdaa0;
        case 0x4cdaa4u: goto label_4cdaa4;
        case 0x4cdaa8u: goto label_4cdaa8;
        case 0x4cdaacu: goto label_4cdaac;
        case 0x4cdab0u: goto label_4cdab0;
        case 0x4cdab4u: goto label_4cdab4;
        case 0x4cdab8u: goto label_4cdab8;
        case 0x4cdabcu: goto label_4cdabc;
        case 0x4cdac0u: goto label_4cdac0;
        case 0x4cdac4u: goto label_4cdac4;
        case 0x4cdac8u: goto label_4cdac8;
        case 0x4cdaccu: goto label_4cdacc;
        case 0x4cdad0u: goto label_4cdad0;
        case 0x4cdad4u: goto label_4cdad4;
        case 0x4cdad8u: goto label_4cdad8;
        case 0x4cdadcu: goto label_4cdadc;
        case 0x4cdae0u: goto label_4cdae0;
        case 0x4cdae4u: goto label_4cdae4;
        case 0x4cdae8u: goto label_4cdae8;
        case 0x4cdaecu: goto label_4cdaec;
        case 0x4cdaf0u: goto label_4cdaf0;
        case 0x4cdaf4u: goto label_4cdaf4;
        case 0x4cdaf8u: goto label_4cdaf8;
        case 0x4cdafcu: goto label_4cdafc;
        case 0x4cdb00u: goto label_4cdb00;
        case 0x4cdb04u: goto label_4cdb04;
        case 0x4cdb08u: goto label_4cdb08;
        case 0x4cdb0cu: goto label_4cdb0c;
        case 0x4cdb10u: goto label_4cdb10;
        case 0x4cdb14u: goto label_4cdb14;
        case 0x4cdb18u: goto label_4cdb18;
        case 0x4cdb1cu: goto label_4cdb1c;
        case 0x4cdb20u: goto label_4cdb20;
        case 0x4cdb24u: goto label_4cdb24;
        case 0x4cdb28u: goto label_4cdb28;
        case 0x4cdb2cu: goto label_4cdb2c;
        case 0x4cdb30u: goto label_4cdb30;
        case 0x4cdb34u: goto label_4cdb34;
        case 0x4cdb38u: goto label_4cdb38;
        case 0x4cdb3cu: goto label_4cdb3c;
        case 0x4cdb40u: goto label_4cdb40;
        case 0x4cdb44u: goto label_4cdb44;
        case 0x4cdb48u: goto label_4cdb48;
        case 0x4cdb4cu: goto label_4cdb4c;
        case 0x4cdb50u: goto label_4cdb50;
        case 0x4cdb54u: goto label_4cdb54;
        case 0x4cdb58u: goto label_4cdb58;
        case 0x4cdb5cu: goto label_4cdb5c;
        case 0x4cdb60u: goto label_4cdb60;
        case 0x4cdb64u: goto label_4cdb64;
        case 0x4cdb68u: goto label_4cdb68;
        case 0x4cdb6cu: goto label_4cdb6c;
        case 0x4cdb70u: goto label_4cdb70;
        case 0x4cdb74u: goto label_4cdb74;
        case 0x4cdb78u: goto label_4cdb78;
        case 0x4cdb7cu: goto label_4cdb7c;
        case 0x4cdb80u: goto label_4cdb80;
        case 0x4cdb84u: goto label_4cdb84;
        case 0x4cdb88u: goto label_4cdb88;
        case 0x4cdb8cu: goto label_4cdb8c;
        case 0x4cdb90u: goto label_4cdb90;
        case 0x4cdb94u: goto label_4cdb94;
        case 0x4cdb98u: goto label_4cdb98;
        case 0x4cdb9cu: goto label_4cdb9c;
        case 0x4cdba0u: goto label_4cdba0;
        case 0x4cdba4u: goto label_4cdba4;
        case 0x4cdba8u: goto label_4cdba8;
        case 0x4cdbacu: goto label_4cdbac;
        case 0x4cdbb0u: goto label_4cdbb0;
        case 0x4cdbb4u: goto label_4cdbb4;
        case 0x4cdbb8u: goto label_4cdbb8;
        case 0x4cdbbcu: goto label_4cdbbc;
        case 0x4cdbc0u: goto label_4cdbc0;
        case 0x4cdbc4u: goto label_4cdbc4;
        case 0x4cdbc8u: goto label_4cdbc8;
        case 0x4cdbccu: goto label_4cdbcc;
        case 0x4cdbd0u: goto label_4cdbd0;
        case 0x4cdbd4u: goto label_4cdbd4;
        case 0x4cdbd8u: goto label_4cdbd8;
        case 0x4cdbdcu: goto label_4cdbdc;
        case 0x4cdbe0u: goto label_4cdbe0;
        case 0x4cdbe4u: goto label_4cdbe4;
        case 0x4cdbe8u: goto label_4cdbe8;
        case 0x4cdbecu: goto label_4cdbec;
        case 0x4cdbf0u: goto label_4cdbf0;
        case 0x4cdbf4u: goto label_4cdbf4;
        case 0x4cdbf8u: goto label_4cdbf8;
        case 0x4cdbfcu: goto label_4cdbfc;
        case 0x4cdc00u: goto label_4cdc00;
        case 0x4cdc04u: goto label_4cdc04;
        case 0x4cdc08u: goto label_4cdc08;
        case 0x4cdc0cu: goto label_4cdc0c;
        case 0x4cdc10u: goto label_4cdc10;
        case 0x4cdc14u: goto label_4cdc14;
        case 0x4cdc18u: goto label_4cdc18;
        case 0x4cdc1cu: goto label_4cdc1c;
        case 0x4cdc20u: goto label_4cdc20;
        case 0x4cdc24u: goto label_4cdc24;
        case 0x4cdc28u: goto label_4cdc28;
        case 0x4cdc2cu: goto label_4cdc2c;
        case 0x4cdc30u: goto label_4cdc30;
        case 0x4cdc34u: goto label_4cdc34;
        case 0x4cdc38u: goto label_4cdc38;
        case 0x4cdc3cu: goto label_4cdc3c;
        case 0x4cdc40u: goto label_4cdc40;
        case 0x4cdc44u: goto label_4cdc44;
        case 0x4cdc48u: goto label_4cdc48;
        case 0x4cdc4cu: goto label_4cdc4c;
        case 0x4cdc50u: goto label_4cdc50;
        case 0x4cdc54u: goto label_4cdc54;
        case 0x4cdc58u: goto label_4cdc58;
        case 0x4cdc5cu: goto label_4cdc5c;
        case 0x4cdc60u: goto label_4cdc60;
        case 0x4cdc64u: goto label_4cdc64;
        case 0x4cdc68u: goto label_4cdc68;
        case 0x4cdc6cu: goto label_4cdc6c;
        case 0x4cdc70u: goto label_4cdc70;
        case 0x4cdc74u: goto label_4cdc74;
        case 0x4cdc78u: goto label_4cdc78;
        case 0x4cdc7cu: goto label_4cdc7c;
        case 0x4cdc80u: goto label_4cdc80;
        case 0x4cdc84u: goto label_4cdc84;
        case 0x4cdc88u: goto label_4cdc88;
        case 0x4cdc8cu: goto label_4cdc8c;
        case 0x4cdc90u: goto label_4cdc90;
        case 0x4cdc94u: goto label_4cdc94;
        case 0x4cdc98u: goto label_4cdc98;
        case 0x4cdc9cu: goto label_4cdc9c;
        case 0x4cdca0u: goto label_4cdca0;
        case 0x4cdca4u: goto label_4cdca4;
        case 0x4cdca8u: goto label_4cdca8;
        case 0x4cdcacu: goto label_4cdcac;
        case 0x4cdcb0u: goto label_4cdcb0;
        case 0x4cdcb4u: goto label_4cdcb4;
        case 0x4cdcb8u: goto label_4cdcb8;
        case 0x4cdcbcu: goto label_4cdcbc;
        case 0x4cdcc0u: goto label_4cdcc0;
        case 0x4cdcc4u: goto label_4cdcc4;
        case 0x4cdcc8u: goto label_4cdcc8;
        case 0x4cdcccu: goto label_4cdccc;
        case 0x4cdcd0u: goto label_4cdcd0;
        case 0x4cdcd4u: goto label_4cdcd4;
        case 0x4cdcd8u: goto label_4cdcd8;
        case 0x4cdcdcu: goto label_4cdcdc;
        case 0x4cdce0u: goto label_4cdce0;
        case 0x4cdce4u: goto label_4cdce4;
        case 0x4cdce8u: goto label_4cdce8;
        case 0x4cdcecu: goto label_4cdcec;
        case 0x4cdcf0u: goto label_4cdcf0;
        case 0x4cdcf4u: goto label_4cdcf4;
        case 0x4cdcf8u: goto label_4cdcf8;
        case 0x4cdcfcu: goto label_4cdcfc;
        case 0x4cdd00u: goto label_4cdd00;
        case 0x4cdd04u: goto label_4cdd04;
        case 0x4cdd08u: goto label_4cdd08;
        case 0x4cdd0cu: goto label_4cdd0c;
        case 0x4cdd10u: goto label_4cdd10;
        case 0x4cdd14u: goto label_4cdd14;
        case 0x4cdd18u: goto label_4cdd18;
        case 0x4cdd1cu: goto label_4cdd1c;
        case 0x4cdd20u: goto label_4cdd20;
        case 0x4cdd24u: goto label_4cdd24;
        case 0x4cdd28u: goto label_4cdd28;
        case 0x4cdd2cu: goto label_4cdd2c;
        case 0x4cdd30u: goto label_4cdd30;
        case 0x4cdd34u: goto label_4cdd34;
        case 0x4cdd38u: goto label_4cdd38;
        case 0x4cdd3cu: goto label_4cdd3c;
        case 0x4cdd40u: goto label_4cdd40;
        case 0x4cdd44u: goto label_4cdd44;
        case 0x4cdd48u: goto label_4cdd48;
        case 0x4cdd4cu: goto label_4cdd4c;
        case 0x4cdd50u: goto label_4cdd50;
        case 0x4cdd54u: goto label_4cdd54;
        case 0x4cdd58u: goto label_4cdd58;
        case 0x4cdd5cu: goto label_4cdd5c;
        case 0x4cdd60u: goto label_4cdd60;
        case 0x4cdd64u: goto label_4cdd64;
        case 0x4cdd68u: goto label_4cdd68;
        case 0x4cdd6cu: goto label_4cdd6c;
        case 0x4cdd70u: goto label_4cdd70;
        case 0x4cdd74u: goto label_4cdd74;
        case 0x4cdd78u: goto label_4cdd78;
        case 0x4cdd7cu: goto label_4cdd7c;
        case 0x4cdd80u: goto label_4cdd80;
        case 0x4cdd84u: goto label_4cdd84;
        case 0x4cdd88u: goto label_4cdd88;
        case 0x4cdd8cu: goto label_4cdd8c;
        case 0x4cdd90u: goto label_4cdd90;
        case 0x4cdd94u: goto label_4cdd94;
        case 0x4cdd98u: goto label_4cdd98;
        case 0x4cdd9cu: goto label_4cdd9c;
        case 0x4cdda0u: goto label_4cdda0;
        case 0x4cdda4u: goto label_4cdda4;
        case 0x4cdda8u: goto label_4cdda8;
        case 0x4cddacu: goto label_4cddac;
        case 0x4cddb0u: goto label_4cddb0;
        case 0x4cddb4u: goto label_4cddb4;
        case 0x4cddb8u: goto label_4cddb8;
        case 0x4cddbcu: goto label_4cddbc;
        case 0x4cddc0u: goto label_4cddc0;
        case 0x4cddc4u: goto label_4cddc4;
        case 0x4cddc8u: goto label_4cddc8;
        case 0x4cddccu: goto label_4cddcc;
        case 0x4cddd0u: goto label_4cddd0;
        case 0x4cddd4u: goto label_4cddd4;
        case 0x4cddd8u: goto label_4cddd8;
        case 0x4cdddcu: goto label_4cdddc;
        case 0x4cdde0u: goto label_4cdde0;
        case 0x4cdde4u: goto label_4cdde4;
        case 0x4cdde8u: goto label_4cdde8;
        case 0x4cddecu: goto label_4cddec;
        case 0x4cddf0u: goto label_4cddf0;
        case 0x4cddf4u: goto label_4cddf4;
        case 0x4cddf8u: goto label_4cddf8;
        case 0x4cddfcu: goto label_4cddfc;
        case 0x4cde00u: goto label_4cde00;
        case 0x4cde04u: goto label_4cde04;
        case 0x4cde08u: goto label_4cde08;
        case 0x4cde0cu: goto label_4cde0c;
        case 0x4cde10u: goto label_4cde10;
        case 0x4cde14u: goto label_4cde14;
        case 0x4cde18u: goto label_4cde18;
        case 0x4cde1cu: goto label_4cde1c;
        case 0x4cde20u: goto label_4cde20;
        case 0x4cde24u: goto label_4cde24;
        case 0x4cde28u: goto label_4cde28;
        case 0x4cde2cu: goto label_4cde2c;
        case 0x4cde30u: goto label_4cde30;
        case 0x4cde34u: goto label_4cde34;
        case 0x4cde38u: goto label_4cde38;
        case 0x4cde3cu: goto label_4cde3c;
        case 0x4cde40u: goto label_4cde40;
        case 0x4cde44u: goto label_4cde44;
        case 0x4cde48u: goto label_4cde48;
        case 0x4cde4cu: goto label_4cde4c;
        case 0x4cde50u: goto label_4cde50;
        case 0x4cde54u: goto label_4cde54;
        case 0x4cde58u: goto label_4cde58;
        case 0x4cde5cu: goto label_4cde5c;
        case 0x4cde60u: goto label_4cde60;
        case 0x4cde64u: goto label_4cde64;
        case 0x4cde68u: goto label_4cde68;
        case 0x4cde6cu: goto label_4cde6c;
        case 0x4cde70u: goto label_4cde70;
        case 0x4cde74u: goto label_4cde74;
        case 0x4cde78u: goto label_4cde78;
        case 0x4cde7cu: goto label_4cde7c;
        case 0x4cde80u: goto label_4cde80;
        case 0x4cde84u: goto label_4cde84;
        case 0x4cde88u: goto label_4cde88;
        case 0x4cde8cu: goto label_4cde8c;
        case 0x4cde90u: goto label_4cde90;
        case 0x4cde94u: goto label_4cde94;
        case 0x4cde98u: goto label_4cde98;
        case 0x4cde9cu: goto label_4cde9c;
        case 0x4cdea0u: goto label_4cdea0;
        case 0x4cdea4u: goto label_4cdea4;
        case 0x4cdea8u: goto label_4cdea8;
        case 0x4cdeacu: goto label_4cdeac;
        case 0x4cdeb0u: goto label_4cdeb0;
        case 0x4cdeb4u: goto label_4cdeb4;
        case 0x4cdeb8u: goto label_4cdeb8;
        case 0x4cdebcu: goto label_4cdebc;
        case 0x4cdec0u: goto label_4cdec0;
        case 0x4cdec4u: goto label_4cdec4;
        case 0x4cdec8u: goto label_4cdec8;
        case 0x4cdeccu: goto label_4cdecc;
        case 0x4cded0u: goto label_4cded0;
        case 0x4cded4u: goto label_4cded4;
        case 0x4cded8u: goto label_4cded8;
        case 0x4cdedcu: goto label_4cdedc;
        case 0x4cdee0u: goto label_4cdee0;
        case 0x4cdee4u: goto label_4cdee4;
        case 0x4cdee8u: goto label_4cdee8;
        case 0x4cdeecu: goto label_4cdeec;
        case 0x4cdef0u: goto label_4cdef0;
        case 0x4cdef4u: goto label_4cdef4;
        case 0x4cdef8u: goto label_4cdef8;
        case 0x4cdefcu: goto label_4cdefc;
        case 0x4cdf00u: goto label_4cdf00;
        case 0x4cdf04u: goto label_4cdf04;
        case 0x4cdf08u: goto label_4cdf08;
        case 0x4cdf0cu: goto label_4cdf0c;
        default: break;
    }

    ctx->pc = 0x4cd7d0u;

label_4cd7d0:
    // 0x4cd7d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4cd7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4cd7d4:
    // 0x4cd7d4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4cd7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4cd7d8:
    // 0x4cd7d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4cd7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4cd7dc:
    // 0x4cd7dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4cd7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4cd7e0:
    // 0x4cd7e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4cd7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4cd7e4:
    // 0x4cd7e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4cd7e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cd7e8:
    // 0x4cd7e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4cd7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4cd7ec:
    // 0x4cd7ec: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4cd7ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4cd7f0:
    // 0x4cd7f0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4cd7f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4cd7f4:
    // 0x4cd7f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4cd7f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4cd7f8:
    // 0x4cd7f8: 0x8c630cd0  lw          $v1, 0xCD0($v1)
    ctx->pc = 0x4cd7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3280)));
label_4cd7fc:
    // 0x4cd7fc: 0x8c650128  lw          $a1, 0x128($v1)
    ctx->pc = 0x4cd7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 296)));
label_4cd800:
    // 0x4cd800: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x4cd800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_4cd804:
    // 0x4cd804: 0xc4b40008  lwc1        $f20, 0x8($a1)
    ctx->pc = 0x4cd804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4cd808:
    // 0x4cd808: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4cd808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cd80c:
    // 0x4cd80c: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x4cd80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_4cd810:
    // 0x4cd810: 0xc4620184  lwc1        $f2, 0x184($v1)
    ctx->pc = 0x4cd810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4cd814:
    // 0x4cd814: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x4cd814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cd818:
    // 0x4cd818: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x4cd818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cd81c:
    // 0x4cd81c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x4cd81cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_4cd820:
    // 0x4cd820: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x4cd820u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_4cd824:
    // 0x4cd824: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x4cd824u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_4cd828:
    // 0x4cd828: 0xc460018c  lwc1        $f0, 0x18C($v1)
    ctx->pc = 0x4cd828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cd82c:
    // 0x4cd82c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x4cd82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_4cd830:
    // 0x4cd830: 0x46000044  c1          0x44
    ctx->pc = 0x4cd830u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_4cd834:
    // 0x4cd834: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x4cd834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
label_4cd838:
    // 0x4cd838: 0x3c033eed  lui         $v1, 0x3EED
    ctx->pc = 0x4cd838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
label_4cd83c:
    // 0x4cd83c: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x4cd83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_4cd840:
    // 0x4cd840: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4cd840u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cd844:
    // 0x4cd844: 0x0  nop
    ctx->pc = 0x4cd844u;
    // NOP
label_4cd848:
    // 0x4cd848: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x4cd848u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_4cd84c:
    // 0x4cd84c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4cd84cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cd850:
    // 0x4cd850: 0x0  nop
    ctx->pc = 0x4cd850u;
    // NOP
label_4cd854:
    // 0x4cd854: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4cd854u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cd858:
    // 0x4cd858: 0x4501004f  bc1t        . + 4 + (0x4F << 2)
label_4cd85c:
    if (ctx->pc == 0x4CD85Cu) {
        ctx->pc = 0x4CD85Cu;
            // 0x4cd85c: 0xe4810230  swc1        $f1, 0x230($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 560), bits); }
        ctx->pc = 0x4CD860u;
        goto label_4cd860;
    }
    ctx->pc = 0x4CD858u;
    {
        const bool branch_taken_0x4cd858 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4CD85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD858u;
            // 0x4cd85c: 0xe4810230  swc1        $f1, 0x230($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd858) {
            ctx->pc = 0x4CD998u;
            goto label_4cd998;
        }
    }
    ctx->pc = 0x4CD860u;
label_4cd860:
    // 0x4cd860: 0x3c033f6d  lui         $v1, 0x3F6D
    ctx->pc = 0x4cd860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16237 << 16));
label_4cd864:
    // 0x4cd864: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x4cd864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_4cd868:
    // 0x4cd868: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4cd868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cd86c:
    // 0x4cd86c: 0x0  nop
    ctx->pc = 0x4cd86cu;
    // NOP
label_4cd870:
    // 0x4cd870: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4cd870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cd874:
    // 0x4cd874: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_4cd878:
    if (ctx->pc == 0x4CD878u) {
        ctx->pc = 0x4CD878u;
            // 0x4cd878: 0x8e430228  lw          $v1, 0x228($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
        ctx->pc = 0x4CD87Cu;
        goto label_4cd87c;
    }
    ctx->pc = 0x4CD874u;
    {
        const bool branch_taken_0x4cd874 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cd874) {
            ctx->pc = 0x4CD878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD874u;
            // 0x4cd878: 0x8e430228  lw          $v1, 0x228($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CD884u;
            goto label_4cd884;
        }
    }
    ctx->pc = 0x4CD87Cu;
label_4cd87c:
    // 0x4cd87c: 0xe6400230  swc1        $f0, 0x230($s2)
    ctx->pc = 0x4cd87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 560), bits); }
label_4cd880:
    // 0x4cd880: 0x8e430228  lw          $v1, 0x228($s2)
    ctx->pc = 0x4cd880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
label_4cd884:
    // 0x4cd884: 0x5460003f  bnel        $v1, $zero, . + 4 + (0x3F << 2)
label_4cd888:
    if (ctx->pc == 0x4CD888u) {
        ctx->pc = 0x4CD888u;
            // 0x4cd888: 0x8e430228  lw          $v1, 0x228($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
        ctx->pc = 0x4CD88Cu;
        goto label_4cd88c;
    }
    ctx->pc = 0x4CD884u;
    {
        const bool branch_taken_0x4cd884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cd884) {
            ctx->pc = 0x4CD888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD884u;
            // 0x4cd888: 0x8e430228  lw          $v1, 0x228($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CD984u;
            goto label_4cd984;
        }
    }
    ctx->pc = 0x4CD88Cu;
label_4cd88c:
    // 0x4cd88c: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x4cd88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_4cd890:
    // 0x4cd890: 0x3443097b  ori         $v1, $v0, 0x97B
    ctx->pc = 0x4cd890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_4cd894:
    // 0x4cd894: 0xc6400230  lwc1        $f0, 0x230($s2)
    ctx->pc = 0x4cd894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cd898:
    // 0x4cd898: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4cd898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4cd89c:
    // 0x4cd89c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4cd89cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4cd8a0:
    // 0x4cd8a0: 0x0  nop
    ctx->pc = 0x4cd8a0u;
    // NOP
label_4cd8a4:
    // 0x4cd8a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4cd8a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4cd8a8:
    // 0x4cd8a8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x4cd8a8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_4cd8ac:
    // 0x4cd8ac: 0x0  nop
    ctx->pc = 0x4cd8acu;
    // NOP
label_4cd8b0:
    // 0x4cd8b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4cd8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cd8b4:
    // 0x4cd8b4: 0x0  nop
    ctx->pc = 0x4cd8b4u;
    // NOP
label_4cd8b8:
    // 0x4cd8b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4cd8b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cd8bc:
    // 0x4cd8bc: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_4cd8c0:
    if (ctx->pc == 0x4CD8C0u) {
        ctx->pc = 0x4CD8C0u;
            // 0x4cd8c0: 0x3c023e00  lui         $v0, 0x3E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
        ctx->pc = 0x4CD8C4u;
        goto label_4cd8c4;
    }
    ctx->pc = 0x4CD8BCu;
    {
        const bool branch_taken_0x4cd8bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cd8bc) {
            ctx->pc = 0x4CD8C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD8BCu;
            // 0x4cd8c0: 0x3c023e00  lui         $v0, 0x3E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CD8CCu;
            goto label_4cd8cc;
        }
    }
    ctx->pc = 0x4CD8C4u;
label_4cd8c4:
    // 0x4cd8c4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x4cd8c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_4cd8c8:
    // 0x4cd8c8: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x4cd8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
label_4cd8cc:
    // 0x4cd8cc: 0x8e500224  lw          $s0, 0x224($s2)
    ctx->pc = 0x4cd8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_4cd8d0:
    // 0x4cd8d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4cd8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cd8d4:
    // 0x4cd8d4: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x4cd8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_4cd8d8:
    // 0x4cd8d8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4cd8d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4cd8dc:
    // 0x4cd8dc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4cd8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4cd8e0:
    // 0x4cd8e0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x4cd8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_4cd8e4:
    // 0x4cd8e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4cd8e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cd8e8:
    // 0x4cd8e8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4cd8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4cd8ec:
    // 0x4cd8ec: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x4cd8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_4cd8f0:
    // 0x4cd8f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4cd8f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4cd8f4:
    // 0x4cd8f4: 0xc640022c  lwc1        $f0, 0x22C($s2)
    ctx->pc = 0x4cd8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cd8f8:
    // 0x4cd8f8: 0x4601a541  sub.s       $f21, $f20, $f1
    ctx->pc = 0x4cd8f8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_4cd8fc:
    // 0x4cd8fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4cd8fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4cd900:
    // 0x4cd900: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x4cd900u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[0];
label_4cd904:
    // 0x4cd904: 0x0  nop
    ctx->pc = 0x4cd904u;
    // NOP
label_4cd908:
    // 0x4cd908: 0x0  nop
    ctx->pc = 0x4cd908u;
    // NOP
label_4cd90c:
    // 0x4cd90c: 0xc04a508  jal         func_129420
label_4cd910:
    if (ctx->pc == 0x4CD910u) {
        ctx->pc = 0x4CD914u;
        goto label_4cd914;
    }
    ctx->pc = 0x4CD90Cu;
    SET_GPR_U32(ctx, 31, 0x4CD914u);
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD914u; }
        if (ctx->pc != 0x4CD914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD914u; }
        if (ctx->pc != 0x4CD914u) { return; }
    }
    ctx->pc = 0x4CD914u;
label_4cd914:
    // 0x4cd914: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4cd914u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4cd918:
    // 0x4cd918: 0x8e42022c  lw          $v0, 0x22C($s2)
    ctx->pc = 0x4cd918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
label_4cd91c:
    // 0x4cd91c: 0x264401b0  addiu       $a0, $s2, 0x1B0
    ctx->pc = 0x4cd91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
label_4cd920:
    // 0x4cd920: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4cd920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4cd924:
    // 0x4cd924: 0xc04a576  jal         func_1295D8
label_4cd928:
    if (ctx->pc == 0x4CD928u) {
        ctx->pc = 0x4CD928u;
            // 0x4cd928: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x4CD92Cu;
        goto label_4cd92c;
    }
    ctx->pc = 0x4CD924u;
    SET_GPR_U32(ctx, 31, 0x4CD92Cu);
    ctx->pc = 0x4CD928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD924u;
            // 0x4cd928: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD92Cu; }
        if (ctx->pc != 0x4CD92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD92Cu; }
        if (ctx->pc != 0x4CD92Cu) { return; }
    }
    ctx->pc = 0x4CD92Cu;
label_4cd92c:
    // 0x4cd92c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x4cd92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4cd930:
    // 0x4cd930: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x4cd930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_4cd934:
    // 0x4cd934: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4cd934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4cd938:
    // 0x4cd938: 0xe47501b0  swc1        $f21, 0x1B0($v1)
    ctx->pc = 0x4cd938u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 432), bits); }
label_4cd93c:
    // 0x4cd93c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_4cd940:
    if (ctx->pc == 0x4CD940u) {
        ctx->pc = 0x4CD940u;
            // 0x4cd940: 0x4616ad40  add.s       $f21, $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
        ctx->pc = 0x4CD944u;
        goto label_4cd944;
    }
    ctx->pc = 0x4CD93Cu;
    {
        const bool branch_taken_0x4cd93c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x4CD940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD93Cu;
            // 0x4cd940: 0x4616ad40  add.s       $f21, $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd93c) {
            ctx->pc = 0x4CD950u;
            goto label_4cd950;
        }
    }
    ctx->pc = 0x4CD944u;
label_4cd944:
    // 0x4cd944: 0x8e43022c  lw          $v1, 0x22C($s2)
    ctx->pc = 0x4cd944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
label_4cd948:
    // 0x4cd948: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x4cd948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4cd94c:
    // 0x4cd94c: 0x0  nop
    ctx->pc = 0x4cd94cu;
    // NOP
label_4cd950:
    // 0x4cd950: 0x8e43022c  lw          $v1, 0x22C($s2)
    ctx->pc = 0x4cd950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
label_4cd954:
    // 0x4cd954: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4cd954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4cd958:
    // 0x4cd958: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x4cd958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4cd95c:
    // 0x4cd95c: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
label_4cd960:
    if (ctx->pc == 0x4CD960u) {
        ctx->pc = 0x4CD960u;
            // 0x4cd960: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x4CD964u;
        goto label_4cd964;
    }
    ctx->pc = 0x4CD95Cu;
    {
        const bool branch_taken_0x4cd95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cd95c) {
            ctx->pc = 0x4CD960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD95Cu;
            // 0x4cd960: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CD930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cd930;
        }
    }
    ctx->pc = 0x4CD964u;
label_4cd964:
    // 0x4cd964: 0x8e430224  lw          $v1, 0x224($s2)
    ctx->pc = 0x4cd964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_4cd968:
    // 0x4cd968: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x4cd968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4cd96c:
    // 0x4cd96c: 0xae440224  sw          $a0, 0x224($s2)
    ctx->pc = 0x4cd96cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 548), GPR_U32(ctx, 4));
label_4cd970:
    // 0x4cd970: 0x8e43022c  lw          $v1, 0x22C($s2)
    ctx->pc = 0x4cd970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
label_4cd974:
    // 0x4cd974: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x4cd974u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4cd978:
    // 0x4cd978: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x4cd978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4cd97c:
    // 0x4cd97c: 0xae430224  sw          $v1, 0x224($s2)
    ctx->pc = 0x4cd97cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 548), GPR_U32(ctx, 3));
label_4cd980:
    // 0x4cd980: 0x8e430228  lw          $v1, 0x228($s2)
    ctx->pc = 0x4cd980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
label_4cd984:
    // 0x4cd984: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x4cd984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4cd988:
    // 0x4cd988: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x4cd988u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
label_4cd98c:
    // 0x4cd98c: 0xae440228  sw          $a0, 0x228($s2)
    ctx->pc = 0x4cd98cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 4));
label_4cd990:
    // 0x4cd990: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x4cd990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4cd994:
    // 0x4cd994: 0xae430228  sw          $v1, 0x228($s2)
    ctx->pc = 0x4cd994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 3));
label_4cd998:
    // 0x4cd998: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4cd998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4cd99c:
    // 0x4cd99c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4cd99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4cd9a0:
    // 0x4cd9a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4cd9a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4cd9a4:
    // 0x4cd9a4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4cd9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4cd9a8:
    // 0x4cd9a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4cd9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4cd9ac:
    // 0x4cd9ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4cd9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4cd9b0:
    // 0x4cd9b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4cd9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cd9b4:
    // 0x4cd9b4: 0x3e00008  jr          $ra
label_4cd9b8:
    if (ctx->pc == 0x4CD9B8u) {
        ctx->pc = 0x4CD9B8u;
            // 0x4cd9b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4CD9BCu;
        goto label_4cd9bc;
    }
    ctx->pc = 0x4CD9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CD9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD9B4u;
            // 0x4cd9b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CD9BCu;
label_4cd9bc:
    // 0x4cd9bc: 0x0  nop
    ctx->pc = 0x4cd9bcu;
    // NOP
label_4cd9c0:
    // 0x4cd9c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4cd9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4cd9c4:
    // 0x4cd9c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4cd9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4cd9c8:
    // 0x4cd9c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4cd9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4cd9cc:
    // 0x4cd9cc: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x4cd9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_4cd9d0:
    // 0x4cd9d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4cd9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4cd9d4:
    // 0x4cd9d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4cd9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cd9d8:
    // 0x4cd9d8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4cd9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4cd9dc:
    // 0x4cd9dc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4cd9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4cd9e0:
    // 0x4cd9e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4cd9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4cd9e4:
    // 0x4cd9e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4cd9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4cd9e8:
    // 0x4cd9e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4cd9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4cd9ec:
    // 0x4cd9ec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4cd9ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4cd9f0:
    // 0x4cd9f0: 0x8c6a0e80  lw          $t2, 0xE80($v1)
    ctx->pc = 0x4cd9f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4cd9f4:
    // 0x4cd9f4: 0x8ca90cd0  lw          $t1, 0xCD0($a1)
    ctx->pc = 0x4cd9f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3280)));
label_4cd9f8:
    // 0x4cd9f8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4cd9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4cd9fc:
    // 0x4cd9fc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4cd9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4cda00:
    // 0x4cda00: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4cda00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4cda04:
    // 0x4cda04: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4cda04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cda08:
    // 0x4cda08: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4cda08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4cda0c:
    // 0x4cda0c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x4cda0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_4cda10:
    // 0x4cda10: 0x10a70130  beq         $a1, $a3, . + 4 + (0x130 << 2)
label_4cda14:
    if (ctx->pc == 0x4CDA14u) {
        ctx->pc = 0x4CDA14u;
            // 0x4cda14: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CDA18u;
        goto label_4cda18;
    }
    ctx->pc = 0x4CDA10u;
    {
        const bool branch_taken_0x4cda10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x4CDA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDA10u;
            // 0x4cda14: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cda10) {
            ctx->pc = 0x4CDED4u;
            goto label_4cded4;
        }
    }
    ctx->pc = 0x4CDA18u;
label_4cda18:
    // 0x4cda18: 0x50a00129  beql        $a1, $zero, . + 4 + (0x129 << 2)
label_4cda1c:
    if (ctx->pc == 0x4CDA1Cu) {
        ctx->pc = 0x4CDA1Cu;
            // 0x4cda1c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4CDA20u;
        goto label_4cda20;
    }
    ctx->pc = 0x4CDA18u;
    {
        const bool branch_taken_0x4cda18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cda18) {
            ctx->pc = 0x4CDA1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDA18u;
            // 0x4cda1c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CDEC0u;
            goto label_4cdec0;
        }
    }
    ctx->pc = 0x4CDA20u;
label_4cda20:
    // 0x4cda20: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4cda20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cda24:
    // 0x4cda24: 0x50a60028  beql        $a1, $a2, . + 4 + (0x28 << 2)
label_4cda28:
    if (ctx->pc == 0x4CDA28u) {
        ctx->pc = 0x4CDA28u;
            // 0x4cda28: 0x8ea50058  lw          $a1, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->pc = 0x4CDA2Cu;
        goto label_4cda2c;
    }
    ctx->pc = 0x4CDA24u;
    {
        const bool branch_taken_0x4cda24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x4cda24) {
            ctx->pc = 0x4CDA28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDA24u;
            // 0x4cda28: 0x8ea50058  lw          $a1, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CDAC8u;
            goto label_4cdac8;
        }
    }
    ctx->pc = 0x4CDA2Cu;
label_4cda2c:
    // 0x4cda2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4cda2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cda30:
    // 0x4cda30: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4cda34:
    if (ctx->pc == 0x4CDA34u) {
        ctx->pc = 0x4CDA34u;
            // 0x4cda34: 0x8d430cb4  lw          $v1, 0xCB4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3252)));
        ctx->pc = 0x4CDA38u;
        goto label_4cda38;
    }
    ctx->pc = 0x4CDA30u;
    {
        const bool branch_taken_0x4cda30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cda30) {
            ctx->pc = 0x4CDA34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDA30u;
            // 0x4cda34: 0x8d430cb4  lw          $v1, 0xCB4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CDA40u;
            goto label_4cda40;
        }
    }
    ctx->pc = 0x4CDA38u;
label_4cda38:
    // 0x4cda38: 0x1000012c  b           . + 4 + (0x12C << 2)
label_4cda3c:
    if (ctx->pc == 0x4CDA3Cu) {
        ctx->pc = 0x4CDA3Cu;
            // 0x4cda3c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x4CDA40u;
        goto label_4cda40;
    }
    ctx->pc = 0x4CDA38u;
    {
        const bool branch_taken_0x4cda38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDA38u;
            // 0x4cda3c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cda38) {
            ctx->pc = 0x4CDEECu;
            goto label_4cdeec;
        }
    }
    ctx->pc = 0x4CDA40u;
label_4cda40:
    // 0x4cda40: 0x10670129  beq         $v1, $a3, . + 4 + (0x129 << 2)
label_4cda44:
    if (ctx->pc == 0x4CDA44u) {
        ctx->pc = 0x4CDA48u;
        goto label_4cda48;
    }
    ctx->pc = 0x4CDA40u;
    {
        const bool branch_taken_0x4cda40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x4cda40) {
            ctx->pc = 0x4CDEE8u;
            goto label_4cdee8;
        }
    }
    ctx->pc = 0x4CDA48u;
label_4cda48:
    // 0x4cda48: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x4cda48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_4cda4c:
    // 0x4cda4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4cda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4cda50:
    // 0x4cda50: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
label_4cda54:
    if (ctx->pc == 0x4CDA54u) {
        ctx->pc = 0x4CDA54u;
            // 0x4cda54: 0x8d220168  lw          $v0, 0x168($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 360)));
        ctx->pc = 0x4CDA58u;
        goto label_4cda58;
    }
    ctx->pc = 0x4CDA50u;
    {
        const bool branch_taken_0x4cda50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4cda50) {
            ctx->pc = 0x4CDA54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDA50u;
            // 0x4cda54: 0x8d220168  lw          $v0, 0x168($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 360)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CDA98u;
            goto label_4cda98;
        }
    }
    ctx->pc = 0x4CDA58u;
label_4cda58:
    // 0x4cda58: 0x50660003  beql        $v1, $a2, . + 4 + (0x3 << 2)
label_4cda5c:
    if (ctx->pc == 0x4CDA5Cu) {
        ctx->pc = 0x4CDA5Cu;
            // 0x4cda5c: 0x8d240168  lw          $a0, 0x168($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 360)));
        ctx->pc = 0x4CDA60u;
        goto label_4cda60;
    }
    ctx->pc = 0x4CDA58u;
    {
        const bool branch_taken_0x4cda58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x4cda58) {
            ctx->pc = 0x4CDA5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDA58u;
            // 0x4cda5c: 0x8d240168  lw          $a0, 0x168($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 360)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CDA68u;
            goto label_4cda68;
        }
    }
    ctx->pc = 0x4CDA60u;
label_4cda60:
    // 0x4cda60: 0x10000014  b           . + 4 + (0x14 << 2)
label_4cda64:
    if (ctx->pc == 0x4CDA64u) {
        ctx->pc = 0x4CDA64u;
            // 0x4cda64: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x4CDA68u;
        goto label_4cda68;
    }
    ctx->pc = 0x4CDA60u;
    {
        const bool branch_taken_0x4cda60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDA60u;
            // 0x4cda64: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cda60) {
            ctx->pc = 0x4CDAB4u;
            goto label_4cdab4;
        }
    }
    ctx->pc = 0x4CDA68u;
label_4cda68:
    // 0x4cda68: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x4cda68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_4cda6c:
    // 0x4cda6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4cda6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4cda70:
    // 0x4cda70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4cda70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4cda74:
    // 0x4cda74: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x4cda74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_4cda78:
    // 0x4cda78: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x4cda78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cda7c:
    // 0x4cda7c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x4cda7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_4cda80:
    // 0x4cda80: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4cda80u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_4cda84:
    // 0x4cda84: 0xe6a00218  swc1        $f0, 0x218($s5)
    ctx->pc = 0x4cda84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 536), bits); }
label_4cda88:
    // 0x4cda88: 0xaea00214  sw          $zero, 0x214($s5)
    ctx->pc = 0x4cda88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 532), GPR_U32(ctx, 0));
label_4cda8c:
    // 0x4cda8c: 0xaea3020c  sw          $v1, 0x20C($s5)
    ctx->pc = 0x4cda8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 524), GPR_U32(ctx, 3));
label_4cda90:
    // 0x4cda90: 0x10000007  b           . + 4 + (0x7 << 2)
label_4cda94:
    if (ctx->pc == 0x4CDA94u) {
        ctx->pc = 0x4CDA94u;
            // 0x4cda94: 0xaea20210  sw          $v0, 0x210($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 528), GPR_U32(ctx, 2));
        ctx->pc = 0x4CDA98u;
        goto label_4cda98;
    }
    ctx->pc = 0x4CDA90u;
    {
        const bool branch_taken_0x4cda90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDA90u;
            // 0x4cda94: 0xaea20210  sw          $v0, 0x210($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cda90) {
            ctx->pc = 0x4CDAB0u;
            goto label_4cdab0;
        }
    }
    ctx->pc = 0x4CDA98u;
label_4cda98:
    // 0x4cda98: 0x26a401b0  addiu       $a0, $s5, 0x1B0
    ctx->pc = 0x4cda98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 432));
label_4cda9c:
    // 0x4cda9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4cda9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cdaa0:
    // 0x4cdaa0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4cdaa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4cdaa4:
    // 0x4cdaa4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4cdaa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4cdaa8:
    // 0x4cdaa8: 0xc04a576  jal         func_1295D8
label_4cdaac:
    if (ctx->pc == 0x4CDAACu) {
        ctx->pc = 0x4CDAACu;
            // 0x4cdaac: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x4CDAB0u;
        goto label_4cdab0;
    }
    ctx->pc = 0x4CDAA8u;
    SET_GPR_U32(ctx, 31, 0x4CDAB0u);
    ctx->pc = 0x4CDAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDAA8u;
            // 0x4cdaac: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CDAB0u; }
        if (ctx->pc != 0x4CDAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CDAB0u; }
        if (ctx->pc != 0x4CDAB0u) { return; }
    }
    ctx->pc = 0x4CDAB0u;
label_4cdab0:
    // 0x4cdab0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4cdab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4cdab4:
    // 0x4cdab4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4cdab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4cdab8:
    // 0x4cdab8: 0x320f809  jalr        $t9
label_4cdabc:
    if (ctx->pc == 0x4CDABCu) {
        ctx->pc = 0x4CDABCu;
            // 0x4cdabc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CDAC0u;
        goto label_4cdac0;
    }
    ctx->pc = 0x4CDAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CDAC0u);
        ctx->pc = 0x4CDABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDAB8u;
            // 0x4cdabc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CDAC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CDAC0u; }
            if (ctx->pc != 0x4CDAC0u) { return; }
        }
        }
    }
    ctx->pc = 0x4CDAC0u;
label_4cdac0:
    // 0x4cdac0: 0x10000109  b           . + 4 + (0x109 << 2)
label_4cdac4:
    if (ctx->pc == 0x4CDAC4u) {
        ctx->pc = 0x4CDAC8u;
        goto label_4cdac8;
    }
    ctx->pc = 0x4CDAC0u;
    {
        const bool branch_taken_0x4cdac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cdac0) {
            ctx->pc = 0x4CDEE8u;
            goto label_4cdee8;
        }
    }
    ctx->pc = 0x4CDAC8u;
label_4cdac8:
    // 0x4cdac8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4cdac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4cdacc:
    // 0x4cdacc: 0x10a300ee  beq         $a1, $v1, . + 4 + (0xEE << 2)
label_4cdad0:
    if (ctx->pc == 0x4CDAD0u) {
        ctx->pc = 0x4CDAD4u;
        goto label_4cdad4;
    }
    ctx->pc = 0x4CDACCu;
    {
        const bool branch_taken_0x4cdacc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cdacc) {
            ctx->pc = 0x4CDE88u;
            goto label_4cde88;
        }
    }
    ctx->pc = 0x4CDAD4u;
label_4cdad4:
    // 0x4cdad4: 0x50a6004e  beql        $a1, $a2, . + 4 + (0x4E << 2)
label_4cdad8:
    if (ctx->pc == 0x4CDAD8u) {
        ctx->pc = 0x4CDAD8u;
            // 0x4cdad8: 0x8ea30054  lw          $v1, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->pc = 0x4CDADCu;
        goto label_4cdadc;
    }
    ctx->pc = 0x4CDAD4u;
    {
        const bool branch_taken_0x4cdad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x4cdad4) {
            ctx->pc = 0x4CDAD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDAD4u;
            // 0x4cdad8: 0x8ea30054  lw          $v1, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CDC10u;
            goto label_4cdc10;
        }
    }
    ctx->pc = 0x4CDADCu;
label_4cdadc:
    // 0x4cdadc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4cdadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cdae0:
    // 0x4cdae0: 0x50a30033  beql        $a1, $v1, . + 4 + (0x33 << 2)
label_4cdae4:
    if (ctx->pc == 0x4CDAE4u) {
        ctx->pc = 0x4CDAE4u;
            // 0x4cdae4: 0xc6a00214  lwc1        $f0, 0x214($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4CDAE8u;
        goto label_4cdae8;
    }
    ctx->pc = 0x4CDAE0u;
    {
        const bool branch_taken_0x4cdae0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cdae0) {
            ctx->pc = 0x4CDAE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDAE0u;
            // 0x4cdae4: 0xc6a00214  lwc1        $f0, 0x214($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CDBB0u;
            goto label_4cdbb0;
        }
    }
    ctx->pc = 0x4CDAE8u;
label_4cdae8:
    // 0x4cdae8: 0x10a70023  beq         $a1, $a3, . + 4 + (0x23 << 2)
label_4cdaec:
    if (ctx->pc == 0x4CDAECu) {
        ctx->pc = 0x4CDAF0u;
        goto label_4cdaf0;
    }
    ctx->pc = 0x4CDAE8u;
    {
        const bool branch_taken_0x4cdae8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x4cdae8) {
            ctx->pc = 0x4CDB78u;
            goto label_4cdb78;
        }
    }
    ctx->pc = 0x4CDAF0u;
label_4cdaf0:
    // 0x4cdaf0: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_4cdaf4:
    if (ctx->pc == 0x4CDAF4u) {
        ctx->pc = 0x4CDAF4u;
            // 0x4cdaf4: 0x8ea30054  lw          $v1, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->pc = 0x4CDAF8u;
        goto label_4cdaf8;
    }
    ctx->pc = 0x4CDAF0u;
    {
        const bool branch_taken_0x4cdaf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cdaf0) {
            ctx->pc = 0x4CDAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDAF0u;
            // 0x4cdaf4: 0x8ea30054  lw          $v1, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CDB00u;
            goto label_4cdb00;
        }
    }
    ctx->pc = 0x4CDAF8u;
label_4cdaf8:
    // 0x4cdaf8: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_4cdafc:
    if (ctx->pc == 0x4CDAFCu) {
        ctx->pc = 0x4CDAFCu;
            // 0x4cdafc: 0x8ea40054  lw          $a0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->pc = 0x4CDB00u;
        goto label_4cdb00;
    }
    ctx->pc = 0x4CDAF8u;
    {
        const bool branch_taken_0x4cdaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDAF8u;
            // 0x4cdafc: 0x8ea40054  lw          $a0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdaf8) {
            ctx->pc = 0x4CDE94u;
            goto label_4cde94;
        }
    }
    ctx->pc = 0x4CDB00u;
label_4cdb00:
    // 0x4cdb00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4cdb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cdb04:
    // 0x4cdb04: 0x546000e2  bnel        $v1, $zero, . + 4 + (0xE2 << 2)
label_4cdb08:
    if (ctx->pc == 0x4CDB08u) {
        ctx->pc = 0x4CDB08u;
            // 0x4cdb08: 0xaea00214  sw          $zero, 0x214($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 532), GPR_U32(ctx, 0));
        ctx->pc = 0x4CDB0Cu;
        goto label_4cdb0c;
    }
    ctx->pc = 0x4CDB04u;
    {
        const bool branch_taken_0x4cdb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cdb04) {
            ctx->pc = 0x4CDB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDB04u;
            // 0x4cdb08: 0xaea00214  sw          $zero, 0x214($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CDE90u;
            goto label_4cde90;
        }
    }
    ctx->pc = 0x4CDB0Cu;
label_4cdb0c:
    // 0x4cdb0c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4cdb0cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cdb10:
    // 0x4cdb10: 0x0  nop
    ctx->pc = 0x4cdb10u;
    // NOP
label_4cdb14:
    // 0x4cdb14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4cdb14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4cdb18:
    // 0x4cdb18: 0xc6a10214  lwc1        $f1, 0x214($s5)
    ctx->pc = 0x4cdb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cdb1c:
    // 0x4cdb1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4cdb1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4cdb20:
    // 0x4cdb20: 0xe6a00214  swc1        $f0, 0x214($s5)
    ctx->pc = 0x4cdb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 532), bits); }
label_4cdb24:
    // 0x4cdb24: 0x8d2300ac  lw          $v1, 0xAC($t1)
    ctx->pc = 0x4cdb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 172)));
label_4cdb28:
    // 0x4cdb28: 0xc6a00214  lwc1        $f0, 0x214($s5)
    ctx->pc = 0x4cdb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cdb2c:
    // 0x4cdb2c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4cdb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cdb30:
    // 0x4cdb30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4cdb30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cdb34:
    // 0x4cdb34: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4cdb38:
    if (ctx->pc == 0x4CDB38u) {
        ctx->pc = 0x4CDB38u;
            // 0x4cdb38: 0x252400a4  addiu       $a0, $t1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 164));
        ctx->pc = 0x4CDB3Cu;
        goto label_4cdb3c;
    }
    ctx->pc = 0x4CDB34u;
    {
        const bool branch_taken_0x4cdb34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4CDB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDB34u;
            // 0x4cdb38: 0x252400a4  addiu       $a0, $t1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdb34) {
            ctx->pc = 0x4CDB40u;
            goto label_4cdb40;
        }
    }
    ctx->pc = 0x4CDB3Cu;
label_4cdb3c:
    // 0x4cdb3c: 0xe6a10214  swc1        $f1, 0x214($s5)
    ctx->pc = 0x4cdb3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 532), bits); }
label_4cdb40:
    // 0x4cdb40: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4cdb40u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cdb44:
    // 0x4cdb44: 0x0  nop
    ctx->pc = 0x4cdb44u;
    // NOP
label_4cdb48:
    // 0x4cdb48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4cdb48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4cdb4c:
    // 0x4cdb4c: 0xc6a1021c  lwc1        $f1, 0x21C($s5)
    ctx->pc = 0x4cdb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cdb50:
    // 0x4cdb50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4cdb50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4cdb54:
    // 0x4cdb54: 0xe6a0021c  swc1        $f0, 0x21C($s5)
    ctx->pc = 0x4cdb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 540), bits); }
label_4cdb58:
    // 0x4cdb58: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4cdb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4cdb5c:
    // 0x4cdb5c: 0xc6a0021c  lwc1        $f0, 0x21C($s5)
    ctx->pc = 0x4cdb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cdb60:
    // 0x4cdb60: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4cdb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cdb64:
    // 0x4cdb64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4cdb64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cdb68:
    // 0x4cdb68: 0x450100c9  bc1t        . + 4 + (0xC9 << 2)
label_4cdb6c:
    if (ctx->pc == 0x4CDB6Cu) {
        ctx->pc = 0x4CDB70u;
        goto label_4cdb70;
    }
    ctx->pc = 0x4CDB68u;
    {
        const bool branch_taken_0x4cdb68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cdb68) {
            ctx->pc = 0x4CDE90u;
            goto label_4cde90;
        }
    }
    ctx->pc = 0x4CDB70u;
label_4cdb70:
    // 0x4cdb70: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_4cdb74:
    if (ctx->pc == 0x4CDB74u) {
        ctx->pc = 0x4CDB74u;
            // 0x4cdb74: 0xe6a1021c  swc1        $f1, 0x21C($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 540), bits); }
        ctx->pc = 0x4CDB78u;
        goto label_4cdb78;
    }
    ctx->pc = 0x4CDB70u;
    {
        const bool branch_taken_0x4cdb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDB70u;
            // 0x4cdb74: 0xe6a1021c  swc1        $f1, 0x21C($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdb70) {
            ctx->pc = 0x4CDE90u;
            goto label_4cde90;
        }
    }
    ctx->pc = 0x4CDB78u;
label_4cdb78:
    // 0x4cdb78: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4cdb78u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cdb7c:
    // 0x4cdb7c: 0x0  nop
    ctx->pc = 0x4cdb7cu;
    // NOP
label_4cdb80:
    // 0x4cdb80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4cdb80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4cdb84:
    // 0x4cdb84: 0xc6a10214  lwc1        $f1, 0x214($s5)
    ctx->pc = 0x4cdb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cdb88:
    // 0x4cdb88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4cdb88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4cdb8c:
    // 0x4cdb8c: 0xe6a00214  swc1        $f0, 0x214($s5)
    ctx->pc = 0x4cdb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 532), bits); }
label_4cdb90:
    // 0x4cdb90: 0x8d2300cc  lw          $v1, 0xCC($t1)
    ctx->pc = 0x4cdb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 204)));
label_4cdb94:
    // 0x4cdb94: 0xc6a00214  lwc1        $f0, 0x214($s5)
    ctx->pc = 0x4cdb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cdb98:
    // 0x4cdb98: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4cdb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cdb9c:
    // 0x4cdb9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4cdb9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cdba0:
    // 0x4cdba0: 0x450100bb  bc1t        . + 4 + (0xBB << 2)
label_4cdba4:
    if (ctx->pc == 0x4CDBA4u) {
        ctx->pc = 0x4CDBA8u;
        goto label_4cdba8;
    }
    ctx->pc = 0x4CDBA0u;
    {
        const bool branch_taken_0x4cdba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cdba0) {
            ctx->pc = 0x4CDE90u;
            goto label_4cde90;
        }
    }
    ctx->pc = 0x4CDBA8u;
label_4cdba8:
    // 0x4cdba8: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_4cdbac:
    if (ctx->pc == 0x4CDBACu) {
        ctx->pc = 0x4CDBACu;
            // 0x4cdbac: 0xe6a10214  swc1        $f1, 0x214($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 532), bits); }
        ctx->pc = 0x4CDBB0u;
        goto label_4cdbb0;
    }
    ctx->pc = 0x4CDBA8u;
    {
        const bool branch_taken_0x4cdba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDBA8u;
            // 0x4cdbac: 0xe6a10214  swc1        $f1, 0x214($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 532), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdba8) {
            ctx->pc = 0x4CDE90u;
            goto label_4cde90;
        }
    }
    ctx->pc = 0x4CDBB0u;
label_4cdbb0:
    // 0x4cdbb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4cdbb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4cdbb4:
    // 0x4cdbb4: 0xe6a00214  swc1        $f0, 0x214($s5)
    ctx->pc = 0x4cdbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 532), bits); }
label_4cdbb8:
    // 0x4cdbb8: 0x8d230148  lw          $v1, 0x148($t1)
    ctx->pc = 0x4cdbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 328)));
label_4cdbbc:
    // 0x4cdbbc: 0xc6a00214  lwc1        $f0, 0x214($s5)
    ctx->pc = 0x4cdbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cdbc0:
    // 0x4cdbc0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4cdbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cdbc4:
    // 0x4cdbc4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4cdbc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cdbc8:
    // 0x4cdbc8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4cdbcc:
    if (ctx->pc == 0x4CDBCCu) {
        ctx->pc = 0x4CDBD0u;
        goto label_4cdbd0;
    }
    ctx->pc = 0x4CDBC8u;
    {
        const bool branch_taken_0x4cdbc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cdbc8) {
            ctx->pc = 0x4CDBD4u;
            goto label_4cdbd4;
        }
    }
    ctx->pc = 0x4CDBD0u;
label_4cdbd0:
    // 0x4cdbd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4cdbd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cdbd4:
    // 0x4cdbd4: 0x4e20004  bltzl       $a3, . + 4 + (0x4 << 2)
label_4cdbd8:
    if (ctx->pc == 0x4CDBD8u) {
        ctx->pc = 0x4CDBD8u;
            // 0x4cdbd8: 0x72042  srl         $a0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x4CDBDCu;
        goto label_4cdbdc;
    }
    ctx->pc = 0x4CDBD4u;
    {
        const bool branch_taken_0x4cdbd4 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x4cdbd4) {
            ctx->pc = 0x4CDBD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDBD4u;
            // 0x4cdbd8: 0x72042  srl         $a0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CDBE8u;
            goto label_4cdbe8;
        }
    }
    ctx->pc = 0x4CDBDCu;
label_4cdbdc:
    // 0x4cdbdc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x4cdbdcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cdbe0:
    // 0x4cdbe0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4cdbe4:
    if (ctx->pc == 0x4CDBE4u) {
        ctx->pc = 0x4CDBE4u;
            // 0x4cdbe4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4CDBE8u;
        goto label_4cdbe8;
    }
    ctx->pc = 0x4CDBE0u;
    {
        const bool branch_taken_0x4cdbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDBE0u;
            // 0x4cdbe4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdbe0) {
            ctx->pc = 0x4CDC00u;
            goto label_4cdc00;
        }
    }
    ctx->pc = 0x4CDBE8u;
label_4cdbe8:
    // 0x4cdbe8: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x4cdbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_4cdbec:
    // 0x4cdbec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4cdbecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4cdbf0:
    // 0x4cdbf0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4cdbf0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cdbf4:
    // 0x4cdbf4: 0x0  nop
    ctx->pc = 0x4cdbf4u;
    // NOP
label_4cdbf8:
    // 0x4cdbf8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4cdbf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4cdbfc:
    // 0x4cdbfc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4cdbfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4cdc00:
    // 0x4cdc00: 0xc6a00214  lwc1        $f0, 0x214($s5)
    ctx->pc = 0x4cdc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cdc04:
    // 0x4cdc04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4cdc04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4cdc08:
    // 0x4cdc08: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_4cdc0c:
    if (ctx->pc == 0x4CDC0Cu) {
        ctx->pc = 0x4CDC0Cu;
            // 0x4cdc0c: 0xe6a00214  swc1        $f0, 0x214($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 532), bits); }
        ctx->pc = 0x4CDC10u;
        goto label_4cdc10;
    }
    ctx->pc = 0x4CDC08u;
    {
        const bool branch_taken_0x4cdc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDC08u;
            // 0x4cdc0c: 0xe6a00214  swc1        $f0, 0x214($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 532), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdc08) {
            ctx->pc = 0x4CDE90u;
            goto label_4cde90;
        }
    }
    ctx->pc = 0x4CDC10u;
label_4cdc10:
    // 0x4cdc10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4cdc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cdc14:
    // 0x4cdc14: 0x5460008e  bnel        $v1, $zero, . + 4 + (0x8E << 2)
label_4cdc18:
    if (ctx->pc == 0x4CDC18u) {
        ctx->pc = 0x4CDC18u;
            // 0x4cdc18: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x4CDC1Cu;
        goto label_4cdc1c;
    }
    ctx->pc = 0x4CDC14u;
    {
        const bool branch_taken_0x4cdc14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cdc14) {
            ctx->pc = 0x4CDC18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDC14u;
            // 0x4cdc18: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CDE50u;
            goto label_4cde50;
        }
    }
    ctx->pc = 0x4CDC1Cu;
label_4cdc1c:
    // 0x4cdc1c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4cdc1cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cdc20:
    // 0x4cdc20: 0x0  nop
    ctx->pc = 0x4cdc20u;
    // NOP
label_4cdc24:
    // 0x4cdc24: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4cdc24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4cdc28:
    // 0x4cdc28: 0xc6a0020c  lwc1        $f0, 0x20C($s5)
    ctx->pc = 0x4cdc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cdc2c:
    // 0x4cdc2c: 0xc6a10210  lwc1        $f1, 0x210($s5)
    ctx->pc = 0x4cdc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cdc30:
    // 0x4cdc30: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4cdc30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4cdc34:
    // 0x4cdc34: 0x0  nop
    ctx->pc = 0x4cdc34u;
    // NOP
label_4cdc38:
    // 0x4cdc38: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x4cdc38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_4cdc3c:
    // 0x4cdc3c: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x4cdc3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_4cdc40:
    // 0x4cdc40: 0xe6a0020c  swc1        $f0, 0x20C($s5)
    ctx->pc = 0x4cdc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 524), bits); }
label_4cdc44:
    // 0x4cdc44: 0xc6a00214  lwc1        $f0, 0x214($s5)
    ctx->pc = 0x4cdc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cdc48:
    // 0x4cdc48: 0xc6a10218  lwc1        $f1, 0x218($s5)
    ctx->pc = 0x4cdc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cdc4c:
    // 0x4cdc4c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x4cdc4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_4cdc50:
    // 0x4cdc50: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x4cdc50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_4cdc54:
    // 0x4cdc54: 0xe6a00214  swc1        $f0, 0x214($s5)
    ctx->pc = 0x4cdc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 532), bits); }
label_4cdc58:
    // 0x4cdc58: 0x8ea30224  lw          $v1, 0x224($s5)
    ctx->pc = 0x4cdc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 548)));
label_4cdc5c:
    // 0x4cdc5c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4cdc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4cdc60:
    // 0x4cdc60: 0x2861012c  slti        $at, $v1, 0x12C
    ctx->pc = 0x4cdc60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
label_4cdc64:
    // 0x4cdc64: 0x10200076  beqz        $at, . + 4 + (0x76 << 2)
label_4cdc68:
    if (ctx->pc == 0x4CDC68u) {
        ctx->pc = 0x4CDC68u;
            // 0x4cdc68: 0xaea30224  sw          $v1, 0x224($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 548), GPR_U32(ctx, 3));
        ctx->pc = 0x4CDC6Cu;
        goto label_4cdc6c;
    }
    ctx->pc = 0x4CDC64u;
    {
        const bool branch_taken_0x4cdc64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDC64u;
            // 0x4cdc68: 0xaea30224  sw          $v1, 0x224($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 548), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdc64) {
            ctx->pc = 0x4CDE40u;
            goto label_4cde40;
        }
    }
    ctx->pc = 0x4CDC6Cu;
label_4cdc6c:
    // 0x4cdc6c: 0xc6a1020c  lwc1        $f1, 0x20C($s5)
    ctx->pc = 0x4cdc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cdc70:
    // 0x4cdc70: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x4cdc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
label_4cdc74:
    // 0x4cdc74: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4cdc74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4cdc78:
    // 0x4cdc78: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x4cdc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_4cdc7c:
    // 0x4cdc7c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4cdc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4cdc80:
    // 0x4cdc80: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x4cdc80u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_4cdc84:
    // 0x4cdc84: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4cdc84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4cdc88:
    // 0x4cdc88: 0x8d51077c  lw          $s1, 0x77C($t2)
    ctx->pc = 0x4cdc88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1916)));
label_4cdc8c:
    // 0x4cdc8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4cdc8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cdc90:
    // 0x4cdc90: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x4cdc90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_4cdc94:
    // 0x4cdc94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4cdc94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cdc98:
    // 0x4cdc98: 0x0  nop
    ctx->pc = 0x4cdc98u;
    // NOP
label_4cdc9c:
    // 0x4cdc9c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x4cdc9cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4cdca0:
    // 0x4cdca0: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x4cdca0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4cdca4:
    // 0x4cdca4: 0x26a50070  addiu       $a1, $s5, 0x70
    ctx->pc = 0x4cdca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_4cdca8:
    // 0x4cdca8: 0xc04cc1c  jal         func_133070
label_4cdcac:
    if (ctx->pc == 0x4CDCACu) {
        ctx->pc = 0x4CDCACu;
            // 0x4cdcac: 0x266402c0  addiu       $a0, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->pc = 0x4CDCB0u;
        goto label_4cdcb0;
    }
    ctx->pc = 0x4CDCA8u;
    SET_GPR_U32(ctx, 31, 0x4CDCB0u);
    ctx->pc = 0x4CDCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDCA8u;
            // 0x4cdcac: 0x266402c0  addiu       $a0, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CDCB0u; }
        if (ctx->pc != 0x4CDCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CDCB0u; }
        if (ctx->pc != 0x4CDCB0u) { return; }
    }
    ctx->pc = 0x4CDCB0u;
label_4cdcb0:
    // 0x4cdcb0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4cdcb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cdcb4:
    // 0x4cdcb4: 0x4501005c  bc1t        . + 4 + (0x5C << 2)
label_4cdcb8:
    if (ctx->pc == 0x4CDCB8u) {
        ctx->pc = 0x4CDCBCu;
        goto label_4cdcbc;
    }
    ctx->pc = 0x4CDCB4u;
    {
        const bool branch_taken_0x4cdcb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cdcb4) {
            ctx->pc = 0x4CDE28u;
            goto label_4cde28;
        }
    }
    ctx->pc = 0x4CDCBCu;
label_4cdcbc:
    // 0x4cdcbc: 0x8ea30208  lw          $v1, 0x208($s5)
    ctx->pc = 0x4cdcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 520)));
label_4cdcc0:
    // 0x4cdcc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4cdcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cdcc4:
    // 0x4cdcc4: 0x2848004  sllv        $s0, $a0, $s4
    ctx->pc = 0x4cdcc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
label_4cdcc8:
    // 0x4cdcc8: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4cdcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_4cdccc:
    // 0x4cdccc: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
label_4cdcd0:
    if (ctx->pc == 0x4CDCD0u) {
        ctx->pc = 0x4CDCD4u;
        goto label_4cdcd4;
    }
    ctx->pc = 0x4CDCCCu;
    {
        const bool branch_taken_0x4cdccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cdccc) {
            ctx->pc = 0x4CDE28u;
            goto label_4cde28;
        }
    }
    ctx->pc = 0x4CDCD4u;
label_4cdcd4:
    // 0x4cdcd4: 0x8e640db0  lw          $a0, 0xDB0($s3)
    ctx->pc = 0x4cdcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3504)));
label_4cdcd8:
    // 0x4cdcd8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x4cdcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4cdcdc:
    // 0x4cdcdc: 0x10830052  beq         $a0, $v1, . + 4 + (0x52 << 2)
label_4cdce0:
    if (ctx->pc == 0x4CDCE0u) {
        ctx->pc = 0x4CDCE4u;
        goto label_4cdce4;
    }
    ctx->pc = 0x4CDCDCu;
    {
        const bool branch_taken_0x4cdcdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cdcdc) {
            ctx->pc = 0x4CDE28u;
            goto label_4cde28;
        }
    }
    ctx->pc = 0x4CDCE4u;
label_4cdce4:
    // 0x4cdce4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x4cdce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_4cdce8:
    // 0x4cdce8: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
label_4cdcec:
    if (ctx->pc == 0x4CDCECu) {
        ctx->pc = 0x4CDCF0u;
        goto label_4cdcf0;
    }
    ctx->pc = 0x4CDCE8u;
    {
        const bool branch_taken_0x4cdce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cdce8) {
            ctx->pc = 0x4CDE28u;
            goto label_4cde28;
        }
    }
    ctx->pc = 0x4CDCF0u;
label_4cdcf0:
    // 0x4cdcf0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4cdcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4cdcf4:
    // 0x4cdcf4: 0x1083004c  beq         $a0, $v1, . + 4 + (0x4C << 2)
label_4cdcf8:
    if (ctx->pc == 0x4CDCF8u) {
        ctx->pc = 0x4CDCFCu;
        goto label_4cdcfc;
    }
    ctx->pc = 0x4CDCF4u;
    {
        const bool branch_taken_0x4cdcf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cdcf4) {
            ctx->pc = 0x4CDE28u;
            goto label_4cde28;
        }
    }
    ctx->pc = 0x4CDCFCu;
label_4cdcfc:
    // 0x4cdcfc: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x4cdcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4cdd00:
    // 0x4cdd00: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
label_4cdd04:
    if (ctx->pc == 0x4CDD04u) {
        ctx->pc = 0x4CDD08u;
        goto label_4cdd08;
    }
    ctx->pc = 0x4CDD00u;
    {
        const bool branch_taken_0x4cdd00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cdd00) {
            ctx->pc = 0x4CDE28u;
            goto label_4cde28;
        }
    }
    ctx->pc = 0x4CDD08u;
label_4cdd08:
    // 0x4cdd08: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x4cdd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_4cdd0c:
    // 0x4cdd0c: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
label_4cdd10:
    if (ctx->pc == 0x4CDD10u) {
        ctx->pc = 0x4CDD14u;
        goto label_4cdd14;
    }
    ctx->pc = 0x4CDD0Cu;
    {
        const bool branch_taken_0x4cdd0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cdd0c) {
            ctx->pc = 0x4CDE28u;
            goto label_4cde28;
        }
    }
    ctx->pc = 0x4CDD14u;
label_4cdd14:
    // 0x4cdd14: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x4cdd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4cdd18:
    // 0x4cdd18: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
label_4cdd1c:
    if (ctx->pc == 0x4CDD1Cu) {
        ctx->pc = 0x4CDD20u;
        goto label_4cdd20;
    }
    ctx->pc = 0x4CDD18u;
    {
        const bool branch_taken_0x4cdd18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cdd18) {
            ctx->pc = 0x4CDE28u;
            goto label_4cde28;
        }
    }
    ctx->pc = 0x4CDD20u;
label_4cdd20:
    // 0x4cdd20: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x4cdd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_4cdd24:
    // 0x4cdd24: 0x10830040  beq         $a0, $v1, . + 4 + (0x40 << 2)
label_4cdd28:
    if (ctx->pc == 0x4CDD28u) {
        ctx->pc = 0x4CDD2Cu;
        goto label_4cdd2c;
    }
    ctx->pc = 0x4CDD24u;
    {
        const bool branch_taken_0x4cdd24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cdd24) {
            ctx->pc = 0x4CDE28u;
            goto label_4cde28;
        }
    }
    ctx->pc = 0x4CDD2Cu;
label_4cdd2c:
    // 0x4cdd2c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x4cdd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_4cdd30:
    // 0x4cdd30: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
label_4cdd34:
    if (ctx->pc == 0x4CDD34u) {
        ctx->pc = 0x4CDD38u;
        goto label_4cdd38;
    }
    ctx->pc = 0x4CDD30u;
    {
        const bool branch_taken_0x4cdd30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cdd30) {
            ctx->pc = 0x4CDE28u;
            goto label_4cde28;
        }
    }
    ctx->pc = 0x4CDD38u;
label_4cdd38:
    // 0x4cdd38: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x4cdd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_4cdd3c:
    // 0x4cdd3c: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
label_4cdd40:
    if (ctx->pc == 0x4CDD40u) {
        ctx->pc = 0x4CDD44u;
        goto label_4cdd44;
    }
    ctx->pc = 0x4CDD3Cu;
    {
        const bool branch_taken_0x4cdd3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cdd3c) {
            ctx->pc = 0x4CDE28u;
            goto label_4cde28;
        }
    }
    ctx->pc = 0x4CDD44u;
label_4cdd44:
    // 0x4cdd44: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4cdd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4cdd48:
    // 0x4cdd48: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
label_4cdd4c:
    if (ctx->pc == 0x4CDD4Cu) {
        ctx->pc = 0x4CDD50u;
        goto label_4cdd50;
    }
    ctx->pc = 0x4CDD48u;
    {
        const bool branch_taken_0x4cdd48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cdd48) {
            ctx->pc = 0x4CDE28u;
            goto label_4cde28;
        }
    }
    ctx->pc = 0x4CDD50u;
label_4cdd50:
    // 0x4cdd50: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x4cdd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_4cdd54:
    // 0x4cdd54: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
label_4cdd58:
    if (ctx->pc == 0x4CDD58u) {
        ctx->pc = 0x4CDD5Cu;
        goto label_4cdd5c;
    }
    ctx->pc = 0x4CDD54u;
    {
        const bool branch_taken_0x4cdd54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cdd54) {
            ctx->pc = 0x4CDE28u;
            goto label_4cde28;
        }
    }
    ctx->pc = 0x4CDD5Cu;
label_4cdd5c:
    // 0x4cdd5c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4cdd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4cdd60:
    // 0x4cdd60: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
label_4cdd64:
    if (ctx->pc == 0x4CDD64u) {
        ctx->pc = 0x4CDD68u;
        goto label_4cdd68;
    }
    ctx->pc = 0x4CDD60u;
    {
        const bool branch_taken_0x4cdd60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cdd60) {
            ctx->pc = 0x4CDE28u;
            goto label_4cde28;
        }
    }
    ctx->pc = 0x4CDD68u;
label_4cdd68:
    // 0x4cdd68: 0x28820017  slti        $v0, $a0, 0x17
    ctx->pc = 0x4cdd68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
label_4cdd6c:
    // 0x4cdd6c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_4cdd70:
    if (ctx->pc == 0x4CDD70u) {
        ctx->pc = 0x4CDD74u;
        goto label_4cdd74;
    }
    ctx->pc = 0x4CDD6Cu;
    {
        const bool branch_taken_0x4cdd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cdd6c) {
            ctx->pc = 0x4CDDA8u;
            goto label_4cdda8;
        }
    }
    ctx->pc = 0x4CDD74u;
label_4cdd74:
    // 0x4cdd74: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x4cdd74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_4cdd78:
    // 0x4cdd78: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_4cdd7c:
    if (ctx->pc == 0x4CDD7Cu) {
        ctx->pc = 0x4CDD80u;
        goto label_4cdd80;
    }
    ctx->pc = 0x4CDD78u;
    {
        const bool branch_taken_0x4cdd78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cdd78) {
            ctx->pc = 0x4CDDA8u;
            goto label_4cdda8;
        }
    }
    ctx->pc = 0x4CDD80u;
label_4cdd80:
    // 0x4cdd80: 0x8e620a68  lw          $v0, 0xA68($s3)
    ctx->pc = 0x4cdd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2664)));
label_4cdd84:
    // 0x4cdd84: 0x26630a50  addiu       $v1, $s3, 0xA50
    ctx->pc = 0x4cdd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2640));
label_4cdd88:
    // 0x4cdd88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cdd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4cdd8c:
    // 0x4cdd8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4cdd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4cdd90:
    // 0x4cdd90: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4cdd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4cdd94:
    // 0x4cdd94: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x4cdd94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4cdd98:
    // 0x4cdd98: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4cdd98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4cdd9c:
    // 0x4cdd9c: 0x320f809  jalr        $t9
label_4cdda0:
    if (ctx->pc == 0x4CDDA0u) {
        ctx->pc = 0x4CDDA4u;
        goto label_4cdda4;
    }
    ctx->pc = 0x4CDD9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CDDA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CDDA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CDDA4u; }
            if (ctx->pc != 0x4CDDA4u) { return; }
        }
        }
    }
    ctx->pc = 0x4CDDA4u;
label_4cdda4:
    // 0x4cdda4: 0x0  nop
    ctx->pc = 0x4cdda4u;
    // NOP
label_4cdda8:
    // 0x4cdda8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4cdda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4cddac:
    // 0x4cddac: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x4cddacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4cddb0:
    // 0x4cddb0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x4cddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_4cddb4:
    // 0x4cddb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4cddb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4cddb8:
    // 0x4cddb8: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x4cddb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4cddbc:
    // 0x4cddbc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x4cddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_4cddc0:
    // 0x4cddc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4cddc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cddc4:
    // 0x4cddc4: 0x0  nop
    ctx->pc = 0x4cddc4u;
    // NOP
label_4cddc8:
    // 0x4cddc8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x4cddc8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_4cddcc:
    // 0x4cddcc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x4cddccu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_4cddd0:
    // 0x4cddd0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4cddd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4cddd4:
    // 0x4cddd4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4cddd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4cddd8:
    // 0x4cddd8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x4cddd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4cdddc:
    // 0x4cdddc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4cdddcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4cdde0:
    // 0x4cdde0: 0xc07631c  jal         func_1D8C70
label_4cdde4:
    if (ctx->pc == 0x4CDDE4u) {
        ctx->pc = 0x4CDDE4u;
            // 0x4cdde4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CDDE8u;
        goto label_4cdde8;
    }
    ctx->pc = 0x4CDDE0u;
    SET_GPR_U32(ctx, 31, 0x4CDDE8u);
    ctx->pc = 0x4CDDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDDE0u;
            // 0x4cdde4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C70u;
    if (runtime->hasFunction(0x1D8C70u)) {
        auto targetFn = runtime->lookupFunction(0x1D8C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CDDE8u; }
        if (ctx->pc != 0x4CDDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8C70_0x1d8c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CDDE8u; }
        if (ctx->pc != 0x4CDDE8u) { return; }
    }
    ctx->pc = 0x4CDDE8u;
label_4cdde8:
    // 0x4cdde8: 0x8ea20208  lw          $v0, 0x208($s5)
    ctx->pc = 0x4cdde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 520)));
label_4cddec:
    // 0x4cddec: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4cddecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4cddf0:
    // 0x4cddf0: 0xaea20208  sw          $v0, 0x208($s5)
    ctx->pc = 0x4cddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 520), GPR_U32(ctx, 2));
label_4cddf4:
    // 0x4cddf4: 0xc10c9d8  jal         func_432760
label_4cddf8:
    if (ctx->pc == 0x4CDDF8u) {
        ctx->pc = 0x4CDDF8u;
            // 0x4cddf8: 0x8ea40200  lw          $a0, 0x200($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 512)));
        ctx->pc = 0x4CDDFCu;
        goto label_4cddfc;
    }
    ctx->pc = 0x4CDDF4u;
    SET_GPR_U32(ctx, 31, 0x4CDDFCu);
    ctx->pc = 0x4CDDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDDF4u;
            // 0x4cddf8: 0x8ea40200  lw          $a0, 0x200($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CDDFCu; }
        if (ctx->pc != 0x4CDDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CDDFCu; }
        if (ctx->pc != 0x4CDDFCu) { return; }
    }
    ctx->pc = 0x4CDDFCu;
label_4cddfc:
    // 0x4cddfc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4cddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4cde00:
    // 0x4cde00: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x4cde00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
label_4cde04:
    // 0x4cde04: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4cde04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4cde08:
    // 0x4cde08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4cde08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cde0c:
    // 0x4cde0c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4cde0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cde10:
    // 0x4cde10: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4cde10u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_4cde14:
    // 0x4cde14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4cde14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4cde18:
    // 0x4cde18: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4cde18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4cde1c:
    // 0x4cde1c: 0x0  nop
    ctx->pc = 0x4cde1cu;
    // NOP
label_4cde20:
    // 0x4cde20: 0xaea30204  sw          $v1, 0x204($s5)
    ctx->pc = 0x4cde20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 516), GPR_U32(ctx, 3));
label_4cde24:
    // 0x4cde24: 0x0  nop
    ctx->pc = 0x4cde24u;
    // NOP
label_4cde28:
    // 0x4cde28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4cde28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4cde2c:
    // 0x4cde2c: 0x291182a  slt         $v1, $s4, $s1
    ctx->pc = 0x4cde2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_4cde30:
    // 0x4cde30: 0x1460ff9b  bnez        $v1, . + 4 + (-0x65 << 2)
label_4cde34:
    if (ctx->pc == 0x4CDE34u) {
        ctx->pc = 0x4CDE34u;
            // 0x4cde34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4CDE38u;
        goto label_4cde38;
    }
    ctx->pc = 0x4CDE30u;
    {
        const bool branch_taken_0x4cde30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CDE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDE30u;
            // 0x4cde34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cde30) {
            ctx->pc = 0x4CDCA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cdca0;
        }
    }
    ctx->pc = 0x4CDE38u;
label_4cde38:
    // 0x4cde38: 0x1000000a  b           . + 4 + (0xA << 2)
label_4cde3c:
    if (ctx->pc == 0x4CDE3Cu) {
        ctx->pc = 0x4CDE3Cu;
            // 0x4cde3c: 0x8ea30204  lw          $v1, 0x204($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 516)));
        ctx->pc = 0x4CDE40u;
        goto label_4cde40;
    }
    ctx->pc = 0x4CDE38u;
    {
        const bool branch_taken_0x4cde38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDE38u;
            // 0x4cde3c: 0x8ea30204  lw          $v1, 0x204($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cde38) {
            ctx->pc = 0x4CDE64u;
            goto label_4cde64;
        }
    }
    ctx->pc = 0x4CDE40u;
label_4cde40:
    // 0x4cde40: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x4cde40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4cde44:
    // 0x4cde44: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4cde44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cde48:
    // 0x4cde48: 0x10000005  b           . + 4 + (0x5 << 2)
label_4cde4c:
    if (ctx->pc == 0x4CDE4Cu) {
        ctx->pc = 0x4CDE4Cu;
            // 0x4cde4c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x4CDE50u;
        goto label_4cde50;
    }
    ctx->pc = 0x4CDE48u;
    {
        const bool branch_taken_0x4cde48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDE48u;
            // 0x4cde4c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cde48) {
            ctx->pc = 0x4CDE60u;
            goto label_4cde60;
        }
    }
    ctx->pc = 0x4CDE50u;
label_4cde50:
    // 0x4cde50: 0xaea3020c  sw          $v1, 0x20C($s5)
    ctx->pc = 0x4cde50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 524), GPR_U32(ctx, 3));
label_4cde54:
    // 0x4cde54: 0xaea00214  sw          $zero, 0x214($s5)
    ctx->pc = 0x4cde54u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 532), GPR_U32(ctx, 0));
label_4cde58:
    // 0x4cde58: 0xaea00224  sw          $zero, 0x224($s5)
    ctx->pc = 0x4cde58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 548), GPR_U32(ctx, 0));
label_4cde5c:
    // 0x4cde5c: 0xaea00208  sw          $zero, 0x208($s5)
    ctx->pc = 0x4cde5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 520), GPR_U32(ctx, 0));
label_4cde60:
    // 0x4cde60: 0x8ea30204  lw          $v1, 0x204($s5)
    ctx->pc = 0x4cde60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 516)));
label_4cde64:
    // 0x4cde64: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
label_4cde68:
    if (ctx->pc == 0x4CDE68u) {
        ctx->pc = 0x4CDE6Cu;
        goto label_4cde6c;
    }
    ctx->pc = 0x4CDE64u;
    {
        const bool branch_taken_0x4cde64 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4cde64) {
            ctx->pc = 0x4CDE90u;
            goto label_4cde90;
        }
    }
    ctx->pc = 0x4CDE6Cu;
label_4cde6c:
    // 0x4cde6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4cde6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4cde70:
    // 0x4cde70: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
label_4cde74:
    if (ctx->pc == 0x4CDE74u) {
        ctx->pc = 0x4CDE74u;
            // 0x4cde74: 0xaea30204  sw          $v1, 0x204($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 516), GPR_U32(ctx, 3));
        ctx->pc = 0x4CDE78u;
        goto label_4cde78;
    }
    ctx->pc = 0x4CDE70u;
    {
        const bool branch_taken_0x4cde70 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x4CDE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDE70u;
            // 0x4cde74: 0xaea30204  sw          $v1, 0x204($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 516), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cde70) {
            ctx->pc = 0x4CDE90u;
            goto label_4cde90;
        }
    }
    ctx->pc = 0x4CDE78u;
label_4cde78:
    // 0x4cde78: 0xc10c9b4  jal         func_4326D0
label_4cde7c:
    if (ctx->pc == 0x4CDE7Cu) {
        ctx->pc = 0x4CDE7Cu;
            // 0x4cde7c: 0x8ea40200  lw          $a0, 0x200($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 512)));
        ctx->pc = 0x4CDE80u;
        goto label_4cde80;
    }
    ctx->pc = 0x4CDE78u;
    SET_GPR_U32(ctx, 31, 0x4CDE80u);
    ctx->pc = 0x4CDE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDE78u;
            // 0x4cde7c: 0x8ea40200  lw          $a0, 0x200($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CDE80u; }
        if (ctx->pc != 0x4CDE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CDE80u; }
        if (ctx->pc != 0x4CDE80u) { return; }
    }
    ctx->pc = 0x4CDE80u;
label_4cde80:
    // 0x4cde80: 0x10000003  b           . + 4 + (0x3 << 2)
label_4cde84:
    if (ctx->pc == 0x4CDE84u) {
        ctx->pc = 0x4CDE84u;
            // 0x4cde84: 0xaea00204  sw          $zero, 0x204($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 516), GPR_U32(ctx, 0));
        ctx->pc = 0x4CDE88u;
        goto label_4cde88;
    }
    ctx->pc = 0x4CDE80u;
    {
        const bool branch_taken_0x4cde80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDE80u;
            // 0x4cde84: 0xaea00204  sw          $zero, 0x204($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cde80) {
            ctx->pc = 0x4CDE90u;
            goto label_4cde90;
        }
    }
    ctx->pc = 0x4CDE88u;
label_4cde88:
    // 0x4cde88: 0xc1335f4  jal         func_4CD7D0
label_4cde8c:
    if (ctx->pc == 0x4CDE8Cu) {
        ctx->pc = 0x4CDE90u;
        goto label_4cde90;
    }
    ctx->pc = 0x4CDE88u;
    SET_GPR_U32(ctx, 31, 0x4CDE90u);
    ctx->pc = 0x4CD7D0u;
    goto label_4cd7d0;
    ctx->pc = 0x4CDE90u;
label_4cde90:
    // 0x4cde90: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x4cde90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4cde94:
    // 0x4cde94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4cde94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cde98:
    // 0x4cde98: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4cde98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cde9c:
    // 0x4cde9c: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_4cdea0:
    if (ctx->pc == 0x4CDEA0u) {
        ctx->pc = 0x4CDEA4u;
        goto label_4cdea4;
    }
    ctx->pc = 0x4CDE9Cu;
    {
        const bool branch_taken_0x4cde9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4cde9c) {
            ctx->pc = 0x4CDEE8u;
            goto label_4cdee8;
        }
    }
    ctx->pc = 0x4CDEA4u;
label_4cdea4:
    // 0x4cdea4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4cdea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4cdea8:
    // 0x4cdea8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4cdea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4cdeac:
    // 0x4cdeac: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4cdeacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4cdeb0:
    // 0x4cdeb0: 0x320f809  jalr        $t9
label_4cdeb4:
    if (ctx->pc == 0x4CDEB4u) {
        ctx->pc = 0x4CDEB4u;
            // 0x4cdeb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CDEB8u;
        goto label_4cdeb8;
    }
    ctx->pc = 0x4CDEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CDEB8u);
        ctx->pc = 0x4CDEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDEB0u;
            // 0x4cdeb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CDEB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CDEB8u; }
            if (ctx->pc != 0x4CDEB8u) { return; }
        }
        }
    }
    ctx->pc = 0x4CDEB8u;
label_4cdeb8:
    // 0x4cdeb8: 0x1000000b  b           . + 4 + (0xB << 2)
label_4cdebc:
    if (ctx->pc == 0x4CDEBCu) {
        ctx->pc = 0x4CDEC0u;
        goto label_4cdec0;
    }
    ctx->pc = 0x4CDEB8u;
    {
        const bool branch_taken_0x4cdeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cdeb8) {
            ctx->pc = 0x4CDEE8u;
            goto label_4cdee8;
        }
    }
    ctx->pc = 0x4CDEC0u;
label_4cdec0:
    // 0x4cdec0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4cdec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4cdec4:
    // 0x4cdec4: 0x320f809  jalr        $t9
label_4cdec8:
    if (ctx->pc == 0x4CDEC8u) {
        ctx->pc = 0x4CDECCu;
        goto label_4cdecc;
    }
    ctx->pc = 0x4CDEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CDECCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CDECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CDECCu; }
            if (ctx->pc != 0x4CDECCu) { return; }
        }
        }
    }
    ctx->pc = 0x4CDECCu;
label_4cdecc:
    // 0x4cdecc: 0x10000006  b           . + 4 + (0x6 << 2)
label_4cded0:
    if (ctx->pc == 0x4CDED0u) {
        ctx->pc = 0x4CDED4u;
        goto label_4cded4;
    }
    ctx->pc = 0x4CDECCu;
    {
        const bool branch_taken_0x4cdecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cdecc) {
            ctx->pc = 0x4CDEE8u;
            goto label_4cdee8;
        }
    }
    ctx->pc = 0x4CDED4u;
label_4cded4:
    // 0x4cded4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4cded4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4cded8:
    // 0x4cded8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4cded8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4cdedc:
    // 0x4cdedc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4cdedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4cdee0:
    // 0x4cdee0: 0xc057b7c  jal         func_15EDF0
label_4cdee4:
    if (ctx->pc == 0x4CDEE4u) {
        ctx->pc = 0x4CDEE4u;
            // 0x4cdee4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4CDEE8u;
        goto label_4cdee8;
    }
    ctx->pc = 0x4CDEE0u;
    SET_GPR_U32(ctx, 31, 0x4CDEE8u);
    ctx->pc = 0x4CDEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDEE0u;
            // 0x4cdee4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CDEE8u; }
        if (ctx->pc != 0x4CDEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CDEE8u; }
        if (ctx->pc != 0x4CDEE8u) { return; }
    }
    ctx->pc = 0x4CDEE8u;
label_4cdee8:
    // 0x4cdee8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4cdee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4cdeec:
    // 0x4cdeec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4cdeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4cdef0:
    // 0x4cdef0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4cdef0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4cdef4:
    // 0x4cdef4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4cdef4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4cdef8:
    // 0x4cdef8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4cdef8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4cdefc:
    // 0x4cdefc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4cdefcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4cdf00:
    // 0x4cdf00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4cdf00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4cdf04:
    // 0x4cdf04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4cdf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cdf08:
    // 0x4cdf08: 0x3e00008  jr          $ra
label_4cdf0c:
    if (ctx->pc == 0x4CDF0Cu) {
        ctx->pc = 0x4CDF0Cu;
            // 0x4cdf0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4CDF10u;
        goto label_fallthrough_0x4cdf08;
    }
    ctx->pc = 0x4CDF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CDF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDF08u;
            // 0x4cdf0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4cdf08:
    ctx->pc = 0x4CDF10u;
}
