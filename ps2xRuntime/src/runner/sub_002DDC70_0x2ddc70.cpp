#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DDC70
// Address: 0x2ddc70 - 0x2de6e0
void sub_002DDC70_0x2ddc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDC70_0x2ddc70");
#endif

    switch (ctx->pc) {
        case 0x2ddc70u: goto label_2ddc70;
        case 0x2ddc74u: goto label_2ddc74;
        case 0x2ddc78u: goto label_2ddc78;
        case 0x2ddc7cu: goto label_2ddc7c;
        case 0x2ddc80u: goto label_2ddc80;
        case 0x2ddc84u: goto label_2ddc84;
        case 0x2ddc88u: goto label_2ddc88;
        case 0x2ddc8cu: goto label_2ddc8c;
        case 0x2ddc90u: goto label_2ddc90;
        case 0x2ddc94u: goto label_2ddc94;
        case 0x2ddc98u: goto label_2ddc98;
        case 0x2ddc9cu: goto label_2ddc9c;
        case 0x2ddca0u: goto label_2ddca0;
        case 0x2ddca4u: goto label_2ddca4;
        case 0x2ddca8u: goto label_2ddca8;
        case 0x2ddcacu: goto label_2ddcac;
        case 0x2ddcb0u: goto label_2ddcb0;
        case 0x2ddcb4u: goto label_2ddcb4;
        case 0x2ddcb8u: goto label_2ddcb8;
        case 0x2ddcbcu: goto label_2ddcbc;
        case 0x2ddcc0u: goto label_2ddcc0;
        case 0x2ddcc4u: goto label_2ddcc4;
        case 0x2ddcc8u: goto label_2ddcc8;
        case 0x2ddcccu: goto label_2ddccc;
        case 0x2ddcd0u: goto label_2ddcd0;
        case 0x2ddcd4u: goto label_2ddcd4;
        case 0x2ddcd8u: goto label_2ddcd8;
        case 0x2ddcdcu: goto label_2ddcdc;
        case 0x2ddce0u: goto label_2ddce0;
        case 0x2ddce4u: goto label_2ddce4;
        case 0x2ddce8u: goto label_2ddce8;
        case 0x2ddcecu: goto label_2ddcec;
        case 0x2ddcf0u: goto label_2ddcf0;
        case 0x2ddcf4u: goto label_2ddcf4;
        case 0x2ddcf8u: goto label_2ddcf8;
        case 0x2ddcfcu: goto label_2ddcfc;
        case 0x2ddd00u: goto label_2ddd00;
        case 0x2ddd04u: goto label_2ddd04;
        case 0x2ddd08u: goto label_2ddd08;
        case 0x2ddd0cu: goto label_2ddd0c;
        case 0x2ddd10u: goto label_2ddd10;
        case 0x2ddd14u: goto label_2ddd14;
        case 0x2ddd18u: goto label_2ddd18;
        case 0x2ddd1cu: goto label_2ddd1c;
        case 0x2ddd20u: goto label_2ddd20;
        case 0x2ddd24u: goto label_2ddd24;
        case 0x2ddd28u: goto label_2ddd28;
        case 0x2ddd2cu: goto label_2ddd2c;
        case 0x2ddd30u: goto label_2ddd30;
        case 0x2ddd34u: goto label_2ddd34;
        case 0x2ddd38u: goto label_2ddd38;
        case 0x2ddd3cu: goto label_2ddd3c;
        case 0x2ddd40u: goto label_2ddd40;
        case 0x2ddd44u: goto label_2ddd44;
        case 0x2ddd48u: goto label_2ddd48;
        case 0x2ddd4cu: goto label_2ddd4c;
        case 0x2ddd50u: goto label_2ddd50;
        case 0x2ddd54u: goto label_2ddd54;
        case 0x2ddd58u: goto label_2ddd58;
        case 0x2ddd5cu: goto label_2ddd5c;
        case 0x2ddd60u: goto label_2ddd60;
        case 0x2ddd64u: goto label_2ddd64;
        case 0x2ddd68u: goto label_2ddd68;
        case 0x2ddd6cu: goto label_2ddd6c;
        case 0x2ddd70u: goto label_2ddd70;
        case 0x2ddd74u: goto label_2ddd74;
        case 0x2ddd78u: goto label_2ddd78;
        case 0x2ddd7cu: goto label_2ddd7c;
        case 0x2ddd80u: goto label_2ddd80;
        case 0x2ddd84u: goto label_2ddd84;
        case 0x2ddd88u: goto label_2ddd88;
        case 0x2ddd8cu: goto label_2ddd8c;
        case 0x2ddd90u: goto label_2ddd90;
        case 0x2ddd94u: goto label_2ddd94;
        case 0x2ddd98u: goto label_2ddd98;
        case 0x2ddd9cu: goto label_2ddd9c;
        case 0x2ddda0u: goto label_2ddda0;
        case 0x2ddda4u: goto label_2ddda4;
        case 0x2ddda8u: goto label_2ddda8;
        case 0x2dddacu: goto label_2dddac;
        case 0x2dddb0u: goto label_2dddb0;
        case 0x2dddb4u: goto label_2dddb4;
        case 0x2dddb8u: goto label_2dddb8;
        case 0x2dddbcu: goto label_2dddbc;
        case 0x2dddc0u: goto label_2dddc0;
        case 0x2dddc4u: goto label_2dddc4;
        case 0x2dddc8u: goto label_2dddc8;
        case 0x2dddccu: goto label_2dddcc;
        case 0x2dddd0u: goto label_2dddd0;
        case 0x2dddd4u: goto label_2dddd4;
        case 0x2dddd8u: goto label_2dddd8;
        case 0x2ddddcu: goto label_2ddddc;
        case 0x2ddde0u: goto label_2ddde0;
        case 0x2ddde4u: goto label_2ddde4;
        case 0x2ddde8u: goto label_2ddde8;
        case 0x2dddecu: goto label_2dddec;
        case 0x2dddf0u: goto label_2dddf0;
        case 0x2dddf4u: goto label_2dddf4;
        case 0x2dddf8u: goto label_2dddf8;
        case 0x2dddfcu: goto label_2dddfc;
        case 0x2dde00u: goto label_2dde00;
        case 0x2dde04u: goto label_2dde04;
        case 0x2dde08u: goto label_2dde08;
        case 0x2dde0cu: goto label_2dde0c;
        case 0x2dde10u: goto label_2dde10;
        case 0x2dde14u: goto label_2dde14;
        case 0x2dde18u: goto label_2dde18;
        case 0x2dde1cu: goto label_2dde1c;
        case 0x2dde20u: goto label_2dde20;
        case 0x2dde24u: goto label_2dde24;
        case 0x2dde28u: goto label_2dde28;
        case 0x2dde2cu: goto label_2dde2c;
        case 0x2dde30u: goto label_2dde30;
        case 0x2dde34u: goto label_2dde34;
        case 0x2dde38u: goto label_2dde38;
        case 0x2dde3cu: goto label_2dde3c;
        case 0x2dde40u: goto label_2dde40;
        case 0x2dde44u: goto label_2dde44;
        case 0x2dde48u: goto label_2dde48;
        case 0x2dde4cu: goto label_2dde4c;
        case 0x2dde50u: goto label_2dde50;
        case 0x2dde54u: goto label_2dde54;
        case 0x2dde58u: goto label_2dde58;
        case 0x2dde5cu: goto label_2dde5c;
        case 0x2dde60u: goto label_2dde60;
        case 0x2dde64u: goto label_2dde64;
        case 0x2dde68u: goto label_2dde68;
        case 0x2dde6cu: goto label_2dde6c;
        case 0x2dde70u: goto label_2dde70;
        case 0x2dde74u: goto label_2dde74;
        case 0x2dde78u: goto label_2dde78;
        case 0x2dde7cu: goto label_2dde7c;
        case 0x2dde80u: goto label_2dde80;
        case 0x2dde84u: goto label_2dde84;
        case 0x2dde88u: goto label_2dde88;
        case 0x2dde8cu: goto label_2dde8c;
        case 0x2dde90u: goto label_2dde90;
        case 0x2dde94u: goto label_2dde94;
        case 0x2dde98u: goto label_2dde98;
        case 0x2dde9cu: goto label_2dde9c;
        case 0x2ddea0u: goto label_2ddea0;
        case 0x2ddea4u: goto label_2ddea4;
        case 0x2ddea8u: goto label_2ddea8;
        case 0x2ddeacu: goto label_2ddeac;
        case 0x2ddeb0u: goto label_2ddeb0;
        case 0x2ddeb4u: goto label_2ddeb4;
        case 0x2ddeb8u: goto label_2ddeb8;
        case 0x2ddebcu: goto label_2ddebc;
        case 0x2ddec0u: goto label_2ddec0;
        case 0x2ddec4u: goto label_2ddec4;
        case 0x2ddec8u: goto label_2ddec8;
        case 0x2ddeccu: goto label_2ddecc;
        case 0x2dded0u: goto label_2dded0;
        case 0x2dded4u: goto label_2dded4;
        case 0x2dded8u: goto label_2dded8;
        case 0x2ddedcu: goto label_2ddedc;
        case 0x2ddee0u: goto label_2ddee0;
        case 0x2ddee4u: goto label_2ddee4;
        case 0x2ddee8u: goto label_2ddee8;
        case 0x2ddeecu: goto label_2ddeec;
        case 0x2ddef0u: goto label_2ddef0;
        case 0x2ddef4u: goto label_2ddef4;
        case 0x2ddef8u: goto label_2ddef8;
        case 0x2ddefcu: goto label_2ddefc;
        case 0x2ddf00u: goto label_2ddf00;
        case 0x2ddf04u: goto label_2ddf04;
        case 0x2ddf08u: goto label_2ddf08;
        case 0x2ddf0cu: goto label_2ddf0c;
        case 0x2ddf10u: goto label_2ddf10;
        case 0x2ddf14u: goto label_2ddf14;
        case 0x2ddf18u: goto label_2ddf18;
        case 0x2ddf1cu: goto label_2ddf1c;
        case 0x2ddf20u: goto label_2ddf20;
        case 0x2ddf24u: goto label_2ddf24;
        case 0x2ddf28u: goto label_2ddf28;
        case 0x2ddf2cu: goto label_2ddf2c;
        case 0x2ddf30u: goto label_2ddf30;
        case 0x2ddf34u: goto label_2ddf34;
        case 0x2ddf38u: goto label_2ddf38;
        case 0x2ddf3cu: goto label_2ddf3c;
        case 0x2ddf40u: goto label_2ddf40;
        case 0x2ddf44u: goto label_2ddf44;
        case 0x2ddf48u: goto label_2ddf48;
        case 0x2ddf4cu: goto label_2ddf4c;
        case 0x2ddf50u: goto label_2ddf50;
        case 0x2ddf54u: goto label_2ddf54;
        case 0x2ddf58u: goto label_2ddf58;
        case 0x2ddf5cu: goto label_2ddf5c;
        case 0x2ddf60u: goto label_2ddf60;
        case 0x2ddf64u: goto label_2ddf64;
        case 0x2ddf68u: goto label_2ddf68;
        case 0x2ddf6cu: goto label_2ddf6c;
        case 0x2ddf70u: goto label_2ddf70;
        case 0x2ddf74u: goto label_2ddf74;
        case 0x2ddf78u: goto label_2ddf78;
        case 0x2ddf7cu: goto label_2ddf7c;
        case 0x2ddf80u: goto label_2ddf80;
        case 0x2ddf84u: goto label_2ddf84;
        case 0x2ddf88u: goto label_2ddf88;
        case 0x2ddf8cu: goto label_2ddf8c;
        case 0x2ddf90u: goto label_2ddf90;
        case 0x2ddf94u: goto label_2ddf94;
        case 0x2ddf98u: goto label_2ddf98;
        case 0x2ddf9cu: goto label_2ddf9c;
        case 0x2ddfa0u: goto label_2ddfa0;
        case 0x2ddfa4u: goto label_2ddfa4;
        case 0x2ddfa8u: goto label_2ddfa8;
        case 0x2ddfacu: goto label_2ddfac;
        case 0x2ddfb0u: goto label_2ddfb0;
        case 0x2ddfb4u: goto label_2ddfb4;
        case 0x2ddfb8u: goto label_2ddfb8;
        case 0x2ddfbcu: goto label_2ddfbc;
        case 0x2ddfc0u: goto label_2ddfc0;
        case 0x2ddfc4u: goto label_2ddfc4;
        case 0x2ddfc8u: goto label_2ddfc8;
        case 0x2ddfccu: goto label_2ddfcc;
        case 0x2ddfd0u: goto label_2ddfd0;
        case 0x2ddfd4u: goto label_2ddfd4;
        case 0x2ddfd8u: goto label_2ddfd8;
        case 0x2ddfdcu: goto label_2ddfdc;
        case 0x2ddfe0u: goto label_2ddfe0;
        case 0x2ddfe4u: goto label_2ddfe4;
        case 0x2ddfe8u: goto label_2ddfe8;
        case 0x2ddfecu: goto label_2ddfec;
        case 0x2ddff0u: goto label_2ddff0;
        case 0x2ddff4u: goto label_2ddff4;
        case 0x2ddff8u: goto label_2ddff8;
        case 0x2ddffcu: goto label_2ddffc;
        case 0x2de000u: goto label_2de000;
        case 0x2de004u: goto label_2de004;
        case 0x2de008u: goto label_2de008;
        case 0x2de00cu: goto label_2de00c;
        case 0x2de010u: goto label_2de010;
        case 0x2de014u: goto label_2de014;
        case 0x2de018u: goto label_2de018;
        case 0x2de01cu: goto label_2de01c;
        case 0x2de020u: goto label_2de020;
        case 0x2de024u: goto label_2de024;
        case 0x2de028u: goto label_2de028;
        case 0x2de02cu: goto label_2de02c;
        case 0x2de030u: goto label_2de030;
        case 0x2de034u: goto label_2de034;
        case 0x2de038u: goto label_2de038;
        case 0x2de03cu: goto label_2de03c;
        case 0x2de040u: goto label_2de040;
        case 0x2de044u: goto label_2de044;
        case 0x2de048u: goto label_2de048;
        case 0x2de04cu: goto label_2de04c;
        case 0x2de050u: goto label_2de050;
        case 0x2de054u: goto label_2de054;
        case 0x2de058u: goto label_2de058;
        case 0x2de05cu: goto label_2de05c;
        case 0x2de060u: goto label_2de060;
        case 0x2de064u: goto label_2de064;
        case 0x2de068u: goto label_2de068;
        case 0x2de06cu: goto label_2de06c;
        case 0x2de070u: goto label_2de070;
        case 0x2de074u: goto label_2de074;
        case 0x2de078u: goto label_2de078;
        case 0x2de07cu: goto label_2de07c;
        case 0x2de080u: goto label_2de080;
        case 0x2de084u: goto label_2de084;
        case 0x2de088u: goto label_2de088;
        case 0x2de08cu: goto label_2de08c;
        case 0x2de090u: goto label_2de090;
        case 0x2de094u: goto label_2de094;
        case 0x2de098u: goto label_2de098;
        case 0x2de09cu: goto label_2de09c;
        case 0x2de0a0u: goto label_2de0a0;
        case 0x2de0a4u: goto label_2de0a4;
        case 0x2de0a8u: goto label_2de0a8;
        case 0x2de0acu: goto label_2de0ac;
        case 0x2de0b0u: goto label_2de0b0;
        case 0x2de0b4u: goto label_2de0b4;
        case 0x2de0b8u: goto label_2de0b8;
        case 0x2de0bcu: goto label_2de0bc;
        case 0x2de0c0u: goto label_2de0c0;
        case 0x2de0c4u: goto label_2de0c4;
        case 0x2de0c8u: goto label_2de0c8;
        case 0x2de0ccu: goto label_2de0cc;
        case 0x2de0d0u: goto label_2de0d0;
        case 0x2de0d4u: goto label_2de0d4;
        case 0x2de0d8u: goto label_2de0d8;
        case 0x2de0dcu: goto label_2de0dc;
        case 0x2de0e0u: goto label_2de0e0;
        case 0x2de0e4u: goto label_2de0e4;
        case 0x2de0e8u: goto label_2de0e8;
        case 0x2de0ecu: goto label_2de0ec;
        case 0x2de0f0u: goto label_2de0f0;
        case 0x2de0f4u: goto label_2de0f4;
        case 0x2de0f8u: goto label_2de0f8;
        case 0x2de0fcu: goto label_2de0fc;
        case 0x2de100u: goto label_2de100;
        case 0x2de104u: goto label_2de104;
        case 0x2de108u: goto label_2de108;
        case 0x2de10cu: goto label_2de10c;
        case 0x2de110u: goto label_2de110;
        case 0x2de114u: goto label_2de114;
        case 0x2de118u: goto label_2de118;
        case 0x2de11cu: goto label_2de11c;
        case 0x2de120u: goto label_2de120;
        case 0x2de124u: goto label_2de124;
        case 0x2de128u: goto label_2de128;
        case 0x2de12cu: goto label_2de12c;
        case 0x2de130u: goto label_2de130;
        case 0x2de134u: goto label_2de134;
        case 0x2de138u: goto label_2de138;
        case 0x2de13cu: goto label_2de13c;
        case 0x2de140u: goto label_2de140;
        case 0x2de144u: goto label_2de144;
        case 0x2de148u: goto label_2de148;
        case 0x2de14cu: goto label_2de14c;
        case 0x2de150u: goto label_2de150;
        case 0x2de154u: goto label_2de154;
        case 0x2de158u: goto label_2de158;
        case 0x2de15cu: goto label_2de15c;
        case 0x2de160u: goto label_2de160;
        case 0x2de164u: goto label_2de164;
        case 0x2de168u: goto label_2de168;
        case 0x2de16cu: goto label_2de16c;
        case 0x2de170u: goto label_2de170;
        case 0x2de174u: goto label_2de174;
        case 0x2de178u: goto label_2de178;
        case 0x2de17cu: goto label_2de17c;
        case 0x2de180u: goto label_2de180;
        case 0x2de184u: goto label_2de184;
        case 0x2de188u: goto label_2de188;
        case 0x2de18cu: goto label_2de18c;
        case 0x2de190u: goto label_2de190;
        case 0x2de194u: goto label_2de194;
        case 0x2de198u: goto label_2de198;
        case 0x2de19cu: goto label_2de19c;
        case 0x2de1a0u: goto label_2de1a0;
        case 0x2de1a4u: goto label_2de1a4;
        case 0x2de1a8u: goto label_2de1a8;
        case 0x2de1acu: goto label_2de1ac;
        case 0x2de1b0u: goto label_2de1b0;
        case 0x2de1b4u: goto label_2de1b4;
        case 0x2de1b8u: goto label_2de1b8;
        case 0x2de1bcu: goto label_2de1bc;
        case 0x2de1c0u: goto label_2de1c0;
        case 0x2de1c4u: goto label_2de1c4;
        case 0x2de1c8u: goto label_2de1c8;
        case 0x2de1ccu: goto label_2de1cc;
        case 0x2de1d0u: goto label_2de1d0;
        case 0x2de1d4u: goto label_2de1d4;
        case 0x2de1d8u: goto label_2de1d8;
        case 0x2de1dcu: goto label_2de1dc;
        case 0x2de1e0u: goto label_2de1e0;
        case 0x2de1e4u: goto label_2de1e4;
        case 0x2de1e8u: goto label_2de1e8;
        case 0x2de1ecu: goto label_2de1ec;
        case 0x2de1f0u: goto label_2de1f0;
        case 0x2de1f4u: goto label_2de1f4;
        case 0x2de1f8u: goto label_2de1f8;
        case 0x2de1fcu: goto label_2de1fc;
        case 0x2de200u: goto label_2de200;
        case 0x2de204u: goto label_2de204;
        case 0x2de208u: goto label_2de208;
        case 0x2de20cu: goto label_2de20c;
        case 0x2de210u: goto label_2de210;
        case 0x2de214u: goto label_2de214;
        case 0x2de218u: goto label_2de218;
        case 0x2de21cu: goto label_2de21c;
        case 0x2de220u: goto label_2de220;
        case 0x2de224u: goto label_2de224;
        case 0x2de228u: goto label_2de228;
        case 0x2de22cu: goto label_2de22c;
        case 0x2de230u: goto label_2de230;
        case 0x2de234u: goto label_2de234;
        case 0x2de238u: goto label_2de238;
        case 0x2de23cu: goto label_2de23c;
        case 0x2de240u: goto label_2de240;
        case 0x2de244u: goto label_2de244;
        case 0x2de248u: goto label_2de248;
        case 0x2de24cu: goto label_2de24c;
        case 0x2de250u: goto label_2de250;
        case 0x2de254u: goto label_2de254;
        case 0x2de258u: goto label_2de258;
        case 0x2de25cu: goto label_2de25c;
        case 0x2de260u: goto label_2de260;
        case 0x2de264u: goto label_2de264;
        case 0x2de268u: goto label_2de268;
        case 0x2de26cu: goto label_2de26c;
        case 0x2de270u: goto label_2de270;
        case 0x2de274u: goto label_2de274;
        case 0x2de278u: goto label_2de278;
        case 0x2de27cu: goto label_2de27c;
        case 0x2de280u: goto label_2de280;
        case 0x2de284u: goto label_2de284;
        case 0x2de288u: goto label_2de288;
        case 0x2de28cu: goto label_2de28c;
        case 0x2de290u: goto label_2de290;
        case 0x2de294u: goto label_2de294;
        case 0x2de298u: goto label_2de298;
        case 0x2de29cu: goto label_2de29c;
        case 0x2de2a0u: goto label_2de2a0;
        case 0x2de2a4u: goto label_2de2a4;
        case 0x2de2a8u: goto label_2de2a8;
        case 0x2de2acu: goto label_2de2ac;
        case 0x2de2b0u: goto label_2de2b0;
        case 0x2de2b4u: goto label_2de2b4;
        case 0x2de2b8u: goto label_2de2b8;
        case 0x2de2bcu: goto label_2de2bc;
        case 0x2de2c0u: goto label_2de2c0;
        case 0x2de2c4u: goto label_2de2c4;
        case 0x2de2c8u: goto label_2de2c8;
        case 0x2de2ccu: goto label_2de2cc;
        case 0x2de2d0u: goto label_2de2d0;
        case 0x2de2d4u: goto label_2de2d4;
        case 0x2de2d8u: goto label_2de2d8;
        case 0x2de2dcu: goto label_2de2dc;
        case 0x2de2e0u: goto label_2de2e0;
        case 0x2de2e4u: goto label_2de2e4;
        case 0x2de2e8u: goto label_2de2e8;
        case 0x2de2ecu: goto label_2de2ec;
        case 0x2de2f0u: goto label_2de2f0;
        case 0x2de2f4u: goto label_2de2f4;
        case 0x2de2f8u: goto label_2de2f8;
        case 0x2de2fcu: goto label_2de2fc;
        case 0x2de300u: goto label_2de300;
        case 0x2de304u: goto label_2de304;
        case 0x2de308u: goto label_2de308;
        case 0x2de30cu: goto label_2de30c;
        case 0x2de310u: goto label_2de310;
        case 0x2de314u: goto label_2de314;
        case 0x2de318u: goto label_2de318;
        case 0x2de31cu: goto label_2de31c;
        case 0x2de320u: goto label_2de320;
        case 0x2de324u: goto label_2de324;
        case 0x2de328u: goto label_2de328;
        case 0x2de32cu: goto label_2de32c;
        case 0x2de330u: goto label_2de330;
        case 0x2de334u: goto label_2de334;
        case 0x2de338u: goto label_2de338;
        case 0x2de33cu: goto label_2de33c;
        case 0x2de340u: goto label_2de340;
        case 0x2de344u: goto label_2de344;
        case 0x2de348u: goto label_2de348;
        case 0x2de34cu: goto label_2de34c;
        case 0x2de350u: goto label_2de350;
        case 0x2de354u: goto label_2de354;
        case 0x2de358u: goto label_2de358;
        case 0x2de35cu: goto label_2de35c;
        case 0x2de360u: goto label_2de360;
        case 0x2de364u: goto label_2de364;
        case 0x2de368u: goto label_2de368;
        case 0x2de36cu: goto label_2de36c;
        case 0x2de370u: goto label_2de370;
        case 0x2de374u: goto label_2de374;
        case 0x2de378u: goto label_2de378;
        case 0x2de37cu: goto label_2de37c;
        case 0x2de380u: goto label_2de380;
        case 0x2de384u: goto label_2de384;
        case 0x2de388u: goto label_2de388;
        case 0x2de38cu: goto label_2de38c;
        case 0x2de390u: goto label_2de390;
        case 0x2de394u: goto label_2de394;
        case 0x2de398u: goto label_2de398;
        case 0x2de39cu: goto label_2de39c;
        case 0x2de3a0u: goto label_2de3a0;
        case 0x2de3a4u: goto label_2de3a4;
        case 0x2de3a8u: goto label_2de3a8;
        case 0x2de3acu: goto label_2de3ac;
        case 0x2de3b0u: goto label_2de3b0;
        case 0x2de3b4u: goto label_2de3b4;
        case 0x2de3b8u: goto label_2de3b8;
        case 0x2de3bcu: goto label_2de3bc;
        case 0x2de3c0u: goto label_2de3c0;
        case 0x2de3c4u: goto label_2de3c4;
        case 0x2de3c8u: goto label_2de3c8;
        case 0x2de3ccu: goto label_2de3cc;
        case 0x2de3d0u: goto label_2de3d0;
        case 0x2de3d4u: goto label_2de3d4;
        case 0x2de3d8u: goto label_2de3d8;
        case 0x2de3dcu: goto label_2de3dc;
        case 0x2de3e0u: goto label_2de3e0;
        case 0x2de3e4u: goto label_2de3e4;
        case 0x2de3e8u: goto label_2de3e8;
        case 0x2de3ecu: goto label_2de3ec;
        case 0x2de3f0u: goto label_2de3f0;
        case 0x2de3f4u: goto label_2de3f4;
        case 0x2de3f8u: goto label_2de3f8;
        case 0x2de3fcu: goto label_2de3fc;
        case 0x2de400u: goto label_2de400;
        case 0x2de404u: goto label_2de404;
        case 0x2de408u: goto label_2de408;
        case 0x2de40cu: goto label_2de40c;
        case 0x2de410u: goto label_2de410;
        case 0x2de414u: goto label_2de414;
        case 0x2de418u: goto label_2de418;
        case 0x2de41cu: goto label_2de41c;
        case 0x2de420u: goto label_2de420;
        case 0x2de424u: goto label_2de424;
        case 0x2de428u: goto label_2de428;
        case 0x2de42cu: goto label_2de42c;
        case 0x2de430u: goto label_2de430;
        case 0x2de434u: goto label_2de434;
        case 0x2de438u: goto label_2de438;
        case 0x2de43cu: goto label_2de43c;
        case 0x2de440u: goto label_2de440;
        case 0x2de444u: goto label_2de444;
        case 0x2de448u: goto label_2de448;
        case 0x2de44cu: goto label_2de44c;
        case 0x2de450u: goto label_2de450;
        case 0x2de454u: goto label_2de454;
        case 0x2de458u: goto label_2de458;
        case 0x2de45cu: goto label_2de45c;
        case 0x2de460u: goto label_2de460;
        case 0x2de464u: goto label_2de464;
        case 0x2de468u: goto label_2de468;
        case 0x2de46cu: goto label_2de46c;
        case 0x2de470u: goto label_2de470;
        case 0x2de474u: goto label_2de474;
        case 0x2de478u: goto label_2de478;
        case 0x2de47cu: goto label_2de47c;
        case 0x2de480u: goto label_2de480;
        case 0x2de484u: goto label_2de484;
        case 0x2de488u: goto label_2de488;
        case 0x2de48cu: goto label_2de48c;
        case 0x2de490u: goto label_2de490;
        case 0x2de494u: goto label_2de494;
        case 0x2de498u: goto label_2de498;
        case 0x2de49cu: goto label_2de49c;
        case 0x2de4a0u: goto label_2de4a0;
        case 0x2de4a4u: goto label_2de4a4;
        case 0x2de4a8u: goto label_2de4a8;
        case 0x2de4acu: goto label_2de4ac;
        case 0x2de4b0u: goto label_2de4b0;
        case 0x2de4b4u: goto label_2de4b4;
        case 0x2de4b8u: goto label_2de4b8;
        case 0x2de4bcu: goto label_2de4bc;
        case 0x2de4c0u: goto label_2de4c0;
        case 0x2de4c4u: goto label_2de4c4;
        case 0x2de4c8u: goto label_2de4c8;
        case 0x2de4ccu: goto label_2de4cc;
        case 0x2de4d0u: goto label_2de4d0;
        case 0x2de4d4u: goto label_2de4d4;
        case 0x2de4d8u: goto label_2de4d8;
        case 0x2de4dcu: goto label_2de4dc;
        case 0x2de4e0u: goto label_2de4e0;
        case 0x2de4e4u: goto label_2de4e4;
        case 0x2de4e8u: goto label_2de4e8;
        case 0x2de4ecu: goto label_2de4ec;
        case 0x2de4f0u: goto label_2de4f0;
        case 0x2de4f4u: goto label_2de4f4;
        case 0x2de4f8u: goto label_2de4f8;
        case 0x2de4fcu: goto label_2de4fc;
        case 0x2de500u: goto label_2de500;
        case 0x2de504u: goto label_2de504;
        case 0x2de508u: goto label_2de508;
        case 0x2de50cu: goto label_2de50c;
        case 0x2de510u: goto label_2de510;
        case 0x2de514u: goto label_2de514;
        case 0x2de518u: goto label_2de518;
        case 0x2de51cu: goto label_2de51c;
        case 0x2de520u: goto label_2de520;
        case 0x2de524u: goto label_2de524;
        case 0x2de528u: goto label_2de528;
        case 0x2de52cu: goto label_2de52c;
        case 0x2de530u: goto label_2de530;
        case 0x2de534u: goto label_2de534;
        case 0x2de538u: goto label_2de538;
        case 0x2de53cu: goto label_2de53c;
        case 0x2de540u: goto label_2de540;
        case 0x2de544u: goto label_2de544;
        case 0x2de548u: goto label_2de548;
        case 0x2de54cu: goto label_2de54c;
        case 0x2de550u: goto label_2de550;
        case 0x2de554u: goto label_2de554;
        case 0x2de558u: goto label_2de558;
        case 0x2de55cu: goto label_2de55c;
        case 0x2de560u: goto label_2de560;
        case 0x2de564u: goto label_2de564;
        case 0x2de568u: goto label_2de568;
        case 0x2de56cu: goto label_2de56c;
        case 0x2de570u: goto label_2de570;
        case 0x2de574u: goto label_2de574;
        case 0x2de578u: goto label_2de578;
        case 0x2de57cu: goto label_2de57c;
        case 0x2de580u: goto label_2de580;
        case 0x2de584u: goto label_2de584;
        case 0x2de588u: goto label_2de588;
        case 0x2de58cu: goto label_2de58c;
        case 0x2de590u: goto label_2de590;
        case 0x2de594u: goto label_2de594;
        case 0x2de598u: goto label_2de598;
        case 0x2de59cu: goto label_2de59c;
        case 0x2de5a0u: goto label_2de5a0;
        case 0x2de5a4u: goto label_2de5a4;
        case 0x2de5a8u: goto label_2de5a8;
        case 0x2de5acu: goto label_2de5ac;
        case 0x2de5b0u: goto label_2de5b0;
        case 0x2de5b4u: goto label_2de5b4;
        case 0x2de5b8u: goto label_2de5b8;
        case 0x2de5bcu: goto label_2de5bc;
        case 0x2de5c0u: goto label_2de5c0;
        case 0x2de5c4u: goto label_2de5c4;
        case 0x2de5c8u: goto label_2de5c8;
        case 0x2de5ccu: goto label_2de5cc;
        case 0x2de5d0u: goto label_2de5d0;
        case 0x2de5d4u: goto label_2de5d4;
        case 0x2de5d8u: goto label_2de5d8;
        case 0x2de5dcu: goto label_2de5dc;
        case 0x2de5e0u: goto label_2de5e0;
        case 0x2de5e4u: goto label_2de5e4;
        case 0x2de5e8u: goto label_2de5e8;
        case 0x2de5ecu: goto label_2de5ec;
        case 0x2de5f0u: goto label_2de5f0;
        case 0x2de5f4u: goto label_2de5f4;
        case 0x2de5f8u: goto label_2de5f8;
        case 0x2de5fcu: goto label_2de5fc;
        case 0x2de600u: goto label_2de600;
        case 0x2de604u: goto label_2de604;
        case 0x2de608u: goto label_2de608;
        case 0x2de60cu: goto label_2de60c;
        case 0x2de610u: goto label_2de610;
        case 0x2de614u: goto label_2de614;
        case 0x2de618u: goto label_2de618;
        case 0x2de61cu: goto label_2de61c;
        case 0x2de620u: goto label_2de620;
        case 0x2de624u: goto label_2de624;
        case 0x2de628u: goto label_2de628;
        case 0x2de62cu: goto label_2de62c;
        case 0x2de630u: goto label_2de630;
        case 0x2de634u: goto label_2de634;
        case 0x2de638u: goto label_2de638;
        case 0x2de63cu: goto label_2de63c;
        case 0x2de640u: goto label_2de640;
        case 0x2de644u: goto label_2de644;
        case 0x2de648u: goto label_2de648;
        case 0x2de64cu: goto label_2de64c;
        case 0x2de650u: goto label_2de650;
        case 0x2de654u: goto label_2de654;
        case 0x2de658u: goto label_2de658;
        case 0x2de65cu: goto label_2de65c;
        case 0x2de660u: goto label_2de660;
        case 0x2de664u: goto label_2de664;
        case 0x2de668u: goto label_2de668;
        case 0x2de66cu: goto label_2de66c;
        case 0x2de670u: goto label_2de670;
        case 0x2de674u: goto label_2de674;
        case 0x2de678u: goto label_2de678;
        case 0x2de67cu: goto label_2de67c;
        case 0x2de680u: goto label_2de680;
        case 0x2de684u: goto label_2de684;
        case 0x2de688u: goto label_2de688;
        case 0x2de68cu: goto label_2de68c;
        case 0x2de690u: goto label_2de690;
        case 0x2de694u: goto label_2de694;
        case 0x2de698u: goto label_2de698;
        case 0x2de69cu: goto label_2de69c;
        case 0x2de6a0u: goto label_2de6a0;
        case 0x2de6a4u: goto label_2de6a4;
        case 0x2de6a8u: goto label_2de6a8;
        case 0x2de6acu: goto label_2de6ac;
        case 0x2de6b0u: goto label_2de6b0;
        case 0x2de6b4u: goto label_2de6b4;
        case 0x2de6b8u: goto label_2de6b8;
        case 0x2de6bcu: goto label_2de6bc;
        case 0x2de6c0u: goto label_2de6c0;
        case 0x2de6c4u: goto label_2de6c4;
        case 0x2de6c8u: goto label_2de6c8;
        case 0x2de6ccu: goto label_2de6cc;
        case 0x2de6d0u: goto label_2de6d0;
        case 0x2de6d4u: goto label_2de6d4;
        case 0x2de6d8u: goto label_2de6d8;
        case 0x2de6dcu: goto label_2de6dc;
        default: break;
    }

    ctx->pc = 0x2ddc70u;

label_2ddc70:
    // 0x2ddc70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ddc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ddc74:
    // 0x2ddc74: 0xa08305a9  sb          $v1, 0x5A9($a0)
    ctx->pc = 0x2ddc74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1449), (uint8_t)GPR_U32(ctx, 3));
label_2ddc78:
    // 0x2ddc78: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2ddc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ddc7c:
    // 0x2ddc7c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2ddc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ddc80:
    // 0x2ddc80: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2ddc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ddc84:
    // 0x2ddc84: 0xe4820668  swc1        $f2, 0x668($a0)
    ctx->pc = 0x2ddc84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1640), bits); }
label_2ddc88:
    // 0x2ddc88: 0xe481066c  swc1        $f1, 0x66C($a0)
    ctx->pc = 0x2ddc88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1644), bits); }
label_2ddc8c:
    // 0x2ddc8c: 0xe4800670  swc1        $f0, 0x670($a0)
    ctx->pc = 0x2ddc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1648), bits); }
label_2ddc90:
    // 0x2ddc90: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x2ddc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ddc94:
    // 0x2ddc94: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2ddc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ddc98:
    // 0x2ddc98: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2ddc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ddc9c:
    // 0x2ddc9c: 0xe4820674  swc1        $f2, 0x674($a0)
    ctx->pc = 0x2ddc9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1652), bits); }
label_2ddca0:
    // 0x2ddca0: 0xe4810678  swc1        $f1, 0x678($a0)
    ctx->pc = 0x2ddca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1656), bits); }
label_2ddca4:
    // 0x2ddca4: 0xe480067c  swc1        $f0, 0x67C($a0)
    ctx->pc = 0x2ddca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1660), bits); }
label_2ddca8:
    // 0x2ddca8: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2ddca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ddcac:
    // 0x2ddcac: 0xe4800680  swc1        $f0, 0x680($a0)
    ctx->pc = 0x2ddcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1664), bits); }
label_2ddcb0:
    // 0x2ddcb0: 0x80a3001c  lb          $v1, 0x1C($a1)
    ctx->pc = 0x2ddcb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
label_2ddcb4:
    // 0x2ddcb4: 0xa0830684  sb          $v1, 0x684($a0)
    ctx->pc = 0x2ddcb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1668), (uint8_t)GPR_U32(ctx, 3));
label_2ddcb8:
    // 0x2ddcb8: 0x80a3001d  lb          $v1, 0x1D($a1)
    ctx->pc = 0x2ddcb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 29)));
label_2ddcbc:
    // 0x2ddcbc: 0xa0830685  sb          $v1, 0x685($a0)
    ctx->pc = 0x2ddcbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1669), (uint8_t)GPR_U32(ctx, 3));
label_2ddcc0:
    // 0x2ddcc0: 0x80a3001e  lb          $v1, 0x1E($a1)
    ctx->pc = 0x2ddcc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
label_2ddcc4:
    // 0x2ddcc4: 0xa0830686  sb          $v1, 0x686($a0)
    ctx->pc = 0x2ddcc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1670), (uint8_t)GPR_U32(ctx, 3));
label_2ddcc8:
    // 0x2ddcc8: 0x80a3001f  lb          $v1, 0x1F($a1)
    ctx->pc = 0x2ddcc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 31)));
label_2ddccc:
    // 0x2ddccc: 0xa0830687  sb          $v1, 0x687($a0)
    ctx->pc = 0x2ddcccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1671), (uint8_t)GPR_U32(ctx, 3));
label_2ddcd0:
    // 0x2ddcd0: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x2ddcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_2ddcd4:
    // 0x2ddcd4: 0xac830688  sw          $v1, 0x688($a0)
    ctx->pc = 0x2ddcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1672), GPR_U32(ctx, 3));
label_2ddcd8:
    // 0x2ddcd8: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2ddcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ddcdc:
    // 0x2ddcdc: 0xe480068c  swc1        $f0, 0x68C($a0)
    ctx->pc = 0x2ddcdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1676), bits); }
label_2ddce0:
    // 0x2ddce0: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2ddce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ddce4:
    // 0x2ddce4: 0xe4800690  swc1        $f0, 0x690($a0)
    ctx->pc = 0x2ddce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1680), bits); }
label_2ddce8:
    // 0x2ddce8: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x2ddce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ddcec:
    // 0x2ddcec: 0xe4800694  swc1        $f0, 0x694($a0)
    ctx->pc = 0x2ddcecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1684), bits); }
label_2ddcf0:
    // 0x2ddcf0: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2ddcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ddcf4:
    // 0x2ddcf4: 0xe4800698  swc1        $f0, 0x698($a0)
    ctx->pc = 0x2ddcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1688), bits); }
label_2ddcf8:
    // 0x2ddcf8: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x2ddcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2ddcfc:
    // 0x2ddcfc: 0xac83069c  sw          $v1, 0x69C($a0)
    ctx->pc = 0x2ddcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1692), GPR_U32(ctx, 3));
label_2ddd00:
    // 0x2ddd00: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x2ddd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_2ddd04:
    // 0x2ddd04: 0x3e00008  jr          $ra
label_2ddd08:
    if (ctx->pc == 0x2DDD08u) {
        ctx->pc = 0x2DDD08u;
            // 0x2ddd08: 0xac8306a0  sw          $v1, 0x6A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1696), GPR_U32(ctx, 3));
        ctx->pc = 0x2DDD0Cu;
        goto label_2ddd0c;
    }
    ctx->pc = 0x2DDD04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDD04u;
            // 0x2ddd08: 0xac8306a0  sw          $v1, 0x6A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1696), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DDD0Cu;
label_2ddd0c:
    // 0x2ddd0c: 0x0  nop
    ctx->pc = 0x2ddd0cu;
    // NOP
label_2ddd10:
    // 0x2ddd10: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x2ddd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_2ddd14:
    // 0x2ddd14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ddd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2ddd18:
    // 0x2ddd18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2ddd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2ddd1c:
    // 0x2ddd1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ddd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2ddd20:
    // 0x2ddd20: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2ddd20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ddd24:
    // 0x2ddd24: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ddd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2ddd28:
    // 0x2ddd28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ddd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2ddd2c:
    // 0x2ddd2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ddd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ddd30:
    // 0x2ddd30: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ddd30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ddd34:
    // 0x2ddd34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ddd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ddd38:
    // 0x2ddd38: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ddd38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ddd3c:
    // 0x2ddd3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ddd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ddd40:
    // 0x2ddd40: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x2ddd40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_2ddd44:
    // 0x2ddd44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ddd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ddd48:
    // 0x2ddd48: 0x24a50e84  addiu       $a1, $a1, 0xE84
    ctx->pc = 0x2ddd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3716));
label_2ddd4c:
    // 0x2ddd4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ddd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ddd50:
    // 0x2ddd50: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2ddd50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2ddd54:
    // 0x2ddd54: 0x90830565  lbu         $v1, 0x565($a0)
    ctx->pc = 0x2ddd54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1381)));
label_2ddd58:
    // 0x2ddd58: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x2ddd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2ddd5c:
    // 0x2ddd5c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ddd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ddd60:
    // 0x2ddd60: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2ddd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2ddd64:
    // 0x2ddd64: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_2ddd68:
    if (ctx->pc == 0x2DDD68u) {
        ctx->pc = 0x2DDD68u;
            // 0x2ddd68: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x2DDD6Cu;
        goto label_2ddd6c;
    }
    ctx->pc = 0x2DDD64u;
    {
        const bool branch_taken_0x2ddd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDD64u;
            // 0x2ddd68: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd64) {
            ctx->pc = 0x2DDDB0u;
            goto label_2dddb0;
        }
    }
    ctx->pc = 0x2DDD6Cu;
label_2ddd6c:
    // 0x2ddd6c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2ddd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_2ddd70:
    // 0x2ddd70: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x2ddd70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_2ddd74:
    // 0x2ddd74: 0x24633730  addiu       $v1, $v1, 0x3730
    ctx->pc = 0x2ddd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14128));
label_2ddd78:
    // 0x2ddd78: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ddd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ddd7c:
    // 0x2ddd7c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2ddd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ddd80:
    // 0x2ddd80: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2ddd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2ddd84:
    // 0x2ddd84: 0x54830231  bnel        $a0, $v1, . + 4 + (0x231 << 2)
label_2ddd88:
    if (ctx->pc == 0x2DDD88u) {
        ctx->pc = 0x2DDD88u;
            // 0x2ddd88: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2DDD8Cu;
        goto label_2ddd8c;
    }
    ctx->pc = 0x2DDD84u;
    {
        const bool branch_taken_0x2ddd84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ddd84) {
            ctx->pc = 0x2DDD88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDD84u;
            // 0x2ddd88: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE64Cu;
            goto label_2de64c;
        }
    }
    ctx->pc = 0x2DDD8Cu;
label_2ddd8c:
    // 0x2ddd8c: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x2ddd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_2ddd90:
    // 0x2ddd90: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ddd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ddd94:
    // 0x2ddd94: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
label_2ddd98:
    if (ctx->pc == 0x2DDD98u) {
        ctx->pc = 0x2DDD98u;
            // 0x2ddd98: 0xa2a00565  sb          $zero, 0x565($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1381), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2DDD9Cu;
        goto label_2ddd9c;
    }
    ctx->pc = 0x2DDD94u;
    {
        const bool branch_taken_0x2ddd94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ddd94) {
            ctx->pc = 0x2DDD98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDD94u;
            // 0x2ddd98: 0xa2a00565  sb          $zero, 0x565($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1381), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DDDB0u;
            goto label_2dddb0;
        }
    }
    ctx->pc = 0x2DDD9Cu;
label_2ddd9c:
    // 0x2ddd9c: 0x8e041220  lw          $a0, 0x1220($s0)
    ctx->pc = 0x2ddd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4640)));
label_2ddda0:
    // 0x2ddda0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ddda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ddda4:
    // 0x2ddda4: 0x14830228  bne         $a0, $v1, . + 4 + (0x228 << 2)
label_2ddda8:
    if (ctx->pc == 0x2DDDA8u) {
        ctx->pc = 0x2DDDACu;
        goto label_2dddac;
    }
    ctx->pc = 0x2DDDA4u;
    {
        const bool branch_taken_0x2ddda4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ddda4) {
            ctx->pc = 0x2DE648u;
            goto label_2de648;
        }
    }
    ctx->pc = 0x2DDDACu;
label_2dddac:
    // 0x2dddac: 0xa2a00565  sb          $zero, 0x565($s5)
    ctx->pc = 0x2dddacu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1381), (uint8_t)GPR_U32(ctx, 0));
label_2dddb0:
    // 0x2dddb0: 0x30f700ff  andi        $s7, $a3, 0xFF
    ctx->pc = 0x2dddb0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2dddb4:
    // 0x2dddb4: 0x56e00095  bnel        $s7, $zero, . + 4 + (0x95 << 2)
label_2dddb8:
    if (ctx->pc == 0x2DDDB8u) {
        ctx->pc = 0x2DDDB8u;
            // 0x2dddb8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DDDBCu;
        goto label_2dddbc;
    }
    ctx->pc = 0x2DDDB4u;
    {
        const bool branch_taken_0x2dddb4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dddb4) {
            ctx->pc = 0x2DDDB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDDB4u;
            // 0x2dddb8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE00Cu;
            goto label_2de00c;
        }
    }
    ctx->pc = 0x2DDDBCu;
label_2dddbc:
    // 0x2dddbc: 0x92b30566  lbu         $s3, 0x566($s5)
    ctx->pc = 0x2dddbcu;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1382)));
label_2dddc0:
    // 0x2dddc0: 0x1260001e  beqz        $s3, . + 4 + (0x1E << 2)
label_2dddc4:
    if (ctx->pc == 0x2DDDC4u) {
        ctx->pc = 0x2DDDC8u;
        goto label_2dddc8;
    }
    ctx->pc = 0x2DDDC0u;
    {
        const bool branch_taken_0x2dddc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dddc0) {
            ctx->pc = 0x2DDE3Cu;
            goto label_2dde3c;
        }
    }
    ctx->pc = 0x2DDDC8u;
label_2dddc8:
    // 0x2dddc8: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x2dddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_2dddcc:
    // 0x2dddcc: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x2dddccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2dddd0:
    // 0x2dddd0: 0x8c830568  lw          $v1, 0x568($a0)
    ctx->pc = 0x2dddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1384)));
label_2dddd4:
    // 0x2dddd4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_2dddd8:
    if (ctx->pc == 0x2DDDD8u) {
        ctx->pc = 0x2DDDDCu;
        goto label_2ddddc;
    }
    ctx->pc = 0x2DDDD4u;
    {
        const bool branch_taken_0x2dddd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dddd4) {
            ctx->pc = 0x2DDE3Cu;
            goto label_2dde3c;
        }
    }
    ctx->pc = 0x2DDDDCu;
label_2ddddc:
    // 0x2ddddc: 0x8c83056c  lw          $v1, 0x56C($a0)
    ctx->pc = 0x2ddddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1388)));
label_2ddde0:
    // 0x2ddde0: 0x14740016  bne         $v1, $s4, . + 4 + (0x16 << 2)
label_2ddde4:
    if (ctx->pc == 0x2DDDE4u) {
        ctx->pc = 0x2DDDE8u;
        goto label_2ddde8;
    }
    ctx->pc = 0x2DDDE0u;
    {
        const bool branch_taken_0x2ddde0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x2ddde0) {
            ctx->pc = 0x2DDE3Cu;
            goto label_2dde3c;
        }
    }
    ctx->pc = 0x2DDDE8u;
label_2ddde8:
    // 0x2ddde8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2ddde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_2dddec:
    // 0x2dddec: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x2dddecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_2dddf0:
    // 0x2dddf0: 0x24633730  addiu       $v1, $v1, 0x3730
    ctx->pc = 0x2dddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14128));
label_2dddf4:
    // 0x2dddf4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2dddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2dddf8:
    // 0x2dddf8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2dddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dddfc:
    // 0x2dddfc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2dddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2dde00:
    // 0x2dde00: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_2dde04:
    if (ctx->pc == 0x2DDE04u) {
        ctx->pc = 0x2DDE08u;
        goto label_2dde08;
    }
    ctx->pc = 0x2DDE00u;
    {
        const bool branch_taken_0x2dde00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dde00) {
            ctx->pc = 0x2DDE3Cu;
            goto label_2dde3c;
        }
    }
    ctx->pc = 0x2DDE08u;
label_2dde08:
    // 0x2dde08: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2dde08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2dde0c:
    // 0x2dde0c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_2dde10:
    if (ctx->pc == 0x2DDE10u) {
        ctx->pc = 0x2DDE14u;
        goto label_2dde14;
    }
    ctx->pc = 0x2DDE0Cu;
    {
        const bool branch_taken_0x2dde0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dde0c) {
            ctx->pc = 0x2DDE3Cu;
            goto label_2dde3c;
        }
    }
    ctx->pc = 0x2DDE14u;
label_2dde14:
    // 0x2dde14: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2dde14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2dde18:
    // 0x2dde18: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_2dde1c:
    if (ctx->pc == 0x2DDE1Cu) {
        ctx->pc = 0x2DDE20u;
        goto label_2dde20;
    }
    ctx->pc = 0x2DDE18u;
    {
        const bool branch_taken_0x2dde18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dde18) {
            ctx->pc = 0x2DDE3Cu;
            goto label_2dde3c;
        }
    }
    ctx->pc = 0x2DDE20u;
label_2dde20:
    // 0x2dde20: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x2dde20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_2dde24:
    // 0x2dde24: 0x12830005  beq         $s4, $v1, . + 4 + (0x5 << 2)
label_2dde28:
    if (ctx->pc == 0x2DDE28u) {
        ctx->pc = 0x2DDE2Cu;
        goto label_2dde2c;
    }
    ctx->pc = 0x2DDE24u;
    {
        const bool branch_taken_0x2dde24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dde24) {
            ctx->pc = 0x2DDE3Cu;
            goto label_2dde3c;
        }
    }
    ctx->pc = 0x2DDE2Cu;
label_2dde2c:
    // 0x2dde2c: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x2dde2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_2dde30:
    // 0x2dde30: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2dde30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2dde34:
    // 0x2dde34: 0x14830204  bne         $a0, $v1, . + 4 + (0x204 << 2)
label_2dde38:
    if (ctx->pc == 0x2DDE38u) {
        ctx->pc = 0x2DDE3Cu;
        goto label_2dde3c;
    }
    ctx->pc = 0x2DDE34u;
    {
        const bool branch_taken_0x2dde34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dde34) {
            ctx->pc = 0x2DE648u;
            goto label_2de648;
        }
    }
    ctx->pc = 0x2DDE3Cu;
label_2dde3c:
    // 0x2dde3c: 0x52600025  beql        $s3, $zero, . + 4 + (0x25 << 2)
label_2dde40:
    if (ctx->pc == 0x2DDE40u) {
        ctx->pc = 0x2DDE40u;
            // 0x2dde40: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2DDE44u;
        goto label_2dde44;
    }
    ctx->pc = 0x2DDE3Cu;
    {
        const bool branch_taken_0x2dde3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dde3c) {
            ctx->pc = 0x2DDE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDE3Cu;
            // 0x2dde40: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DDED4u;
            goto label_2dded4;
        }
    }
    ctx->pc = 0x2DDE44u;
label_2dde44:
    // 0x2dde44: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x2dde44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2dde48:
    // 0x2dde48: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_2dde4c:
    if (ctx->pc == 0x2DDE4Cu) {
        ctx->pc = 0x2DDE50u;
        goto label_2dde50;
    }
    ctx->pc = 0x2DDE48u;
    {
        const bool branch_taken_0x2dde48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dde48) {
            ctx->pc = 0x2DDED0u;
            goto label_2dded0;
        }
    }
    ctx->pc = 0x2DDE50u;
label_2dde50:
    // 0x2dde50: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2dde50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2dde54:
    // 0x2dde54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dde54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dde58:
    // 0x2dde58: 0x149100  sll         $s2, $s4, 4
    ctx->pc = 0x2dde58u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_2dde5c:
    // 0x2dde5c: 0x24423730  addiu       $v0, $v0, 0x3730
    ctx->pc = 0x2dde5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14128));
label_2dde60:
    // 0x2dde60: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2dde60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2dde64:
    // 0x2dde64: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2dde64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2dde68:
    // 0x2dde68: 0x320f809  jalr        $t9
label_2dde6c:
    if (ctx->pc == 0x2DDE6Cu) {
        ctx->pc = 0x2DDE6Cu;
            // 0x2dde6c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2DDE70u;
        goto label_2dde70;
    }
    ctx->pc = 0x2DDE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DDE70u);
        ctx->pc = 0x2DDE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDE68u;
            // 0x2dde6c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DDE70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DDE70u; }
            if (ctx->pc != 0x2DDE70u) { return; }
        }
        }
    }
    ctx->pc = 0x2DDE70u;
label_2dde70:
    // 0x2dde70: 0x16220017  bne         $s1, $v0, . + 4 + (0x17 << 2)
label_2dde74:
    if (ctx->pc == 0x2DDE74u) {
        ctx->pc = 0x2DDE78u;
        goto label_2dde78;
    }
    ctx->pc = 0x2DDE70u;
    {
        const bool branch_taken_0x2dde70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dde70) {
            ctx->pc = 0x2DDED0u;
            goto label_2dded0;
        }
    }
    ctx->pc = 0x2DDE78u;
label_2dde78:
    // 0x2dde78: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2dde78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_2dde7c:
    // 0x2dde7c: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x2dde7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_2dde80:
    // 0x2dde80: 0x24633734  addiu       $v1, $v1, 0x3734
    ctx->pc = 0x2dde80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14132));
label_2dde84:
    // 0x2dde84: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2dde84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_2dde88:
    // 0x2dde88: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2dde88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2dde8c:
    // 0x2dde8c: 0x8c840564  lw          $a0, 0x564($a0)
    ctx->pc = 0x2dde8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
label_2dde90:
    // 0x2dde90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2dde90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dde94:
    // 0x2dde94: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_2dde98:
    if (ctx->pc == 0x2DDE98u) {
        ctx->pc = 0x2DDE9Cu;
        goto label_2dde9c;
    }
    ctx->pc = 0x2DDE94u;
    {
        const bool branch_taken_0x2dde94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dde94) {
            ctx->pc = 0x2DDED0u;
            goto label_2dded0;
        }
    }
    ctx->pc = 0x2DDE9Cu;
label_2dde9c:
    // 0x2dde9c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2dde9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2ddea0:
    // 0x2ddea0: 0x1223000b  beq         $s1, $v1, . + 4 + (0xB << 2)
label_2ddea4:
    if (ctx->pc == 0x2DDEA4u) {
        ctx->pc = 0x2DDEA8u;
        goto label_2ddea8;
    }
    ctx->pc = 0x2DDEA0u;
    {
        const bool branch_taken_0x2ddea0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ddea0) {
            ctx->pc = 0x2DDED0u;
            goto label_2dded0;
        }
    }
    ctx->pc = 0x2DDEA8u;
label_2ddea8:
    // 0x2ddea8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2ddea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ddeac:
    // 0x2ddeac: 0x12230008  beq         $s1, $v1, . + 4 + (0x8 << 2)
label_2ddeb0:
    if (ctx->pc == 0x2DDEB0u) {
        ctx->pc = 0x2DDEB4u;
        goto label_2ddeb4;
    }
    ctx->pc = 0x2DDEACu;
    {
        const bool branch_taken_0x2ddeac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ddeac) {
            ctx->pc = 0x2DDED0u;
            goto label_2dded0;
        }
    }
    ctx->pc = 0x2DDEB4u;
label_2ddeb4:
    // 0x2ddeb4: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x2ddeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_2ddeb8:
    // 0x2ddeb8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ddeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ddebc:
    // 0x2ddebc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_2ddec0:
    if (ctx->pc == 0x2DDEC0u) {
        ctx->pc = 0x2DDEC4u;
        goto label_2ddec4;
    }
    ctx->pc = 0x2DDEBCu;
    {
        const bool branch_taken_0x2ddebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ddebc) {
            ctx->pc = 0x2DDED0u;
            goto label_2dded0;
        }
    }
    ctx->pc = 0x2DDEC4u;
label_2ddec4:
    // 0x2ddec4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ddec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ddec8:
    // 0x2ddec8: 0x166301df  bne         $s3, $v1, . + 4 + (0x1DF << 2)
label_2ddecc:
    if (ctx->pc == 0x2DDECCu) {
        ctx->pc = 0x2DDED0u;
        goto label_2dded0;
    }
    ctx->pc = 0x2DDEC8u;
    {
        const bool branch_taken_0x2ddec8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ddec8) {
            ctx->pc = 0x2DE648u;
            goto label_2de648;
        }
    }
    ctx->pc = 0x2DDED0u;
label_2dded0:
    // 0x2dded0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dded0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dded4:
    // 0x2dded4: 0x56630040  bnel        $s3, $v1, . + 4 + (0x40 << 2)
label_2dded8:
    if (ctx->pc == 0x2DDED8u) {
        ctx->pc = 0x2DDED8u;
            // 0x2dded8: 0x8ea30014  lw          $v1, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->pc = 0x2DDEDCu;
        goto label_2ddedc;
    }
    ctx->pc = 0x2DDED4u;
    {
        const bool branch_taken_0x2dded4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dded4) {
            ctx->pc = 0x2DDED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDED4u;
            // 0x2dded8: 0x8ea30014  lw          $v1, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DDFD8u;
            goto label_2ddfd8;
        }
    }
    ctx->pc = 0x2DDEDCu;
label_2ddedc:
    // 0x2ddedc: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x2ddedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_2ddee0:
    // 0x2ddee0: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_2ddee4:
    if (ctx->pc == 0x2DDEE4u) {
        ctx->pc = 0x2DDEE4u;
            // 0x2ddee4: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->pc = 0x2DDEE8u;
        goto label_2ddee8;
    }
    ctx->pc = 0x2DDEE0u;
    {
        const bool branch_taken_0x2ddee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddee0) {
            ctx->pc = 0x2DDEE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDEE0u;
            // 0x2ddee4: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DDF10u;
            goto label_2ddf10;
        }
    }
    ctx->pc = 0x2DDEE8u;
label_2ddee8:
    // 0x2ddee8: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x2ddee8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_2ddeec:
    // 0x2ddeec: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x2ddeecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_2ddef0:
    // 0x2ddef0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2ddef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_2ddef4:
    // 0x2ddef4: 0x24633738  addiu       $v1, $v1, 0x3738
    ctx->pc = 0x2ddef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14136));
label_2ddef8:
    // 0x2ddef8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ddef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ddefc:
    // 0x2ddefc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2ddefcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2ddf00:
    // 0x2ddf00: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2ddf00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2ddf04:
    // 0x2ddf04: 0x146001d0  bnez        $v1, . + 4 + (0x1D0 << 2)
label_2ddf08:
    if (ctx->pc == 0x2DDF08u) {
        ctx->pc = 0x2DDF0Cu;
        goto label_2ddf0c;
    }
    ctx->pc = 0x2DDF04u;
    {
        const bool branch_taken_0x2ddf04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ddf04) {
            ctx->pc = 0x2DE648u;
            goto label_2de648;
        }
    }
    ctx->pc = 0x2DDF0Cu;
label_2ddf0c:
    // 0x2ddf0c: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x2ddf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2ddf10:
    // 0x2ddf10: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2ddf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ddf14:
    // 0x2ddf14: 0x9484000c  lhu         $a0, 0xC($a0)
    ctx->pc = 0x2ddf14u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_2ddf18:
    // 0x2ddf18: 0x108301cb  beq         $a0, $v1, . + 4 + (0x1CB << 2)
label_2ddf1c:
    if (ctx->pc == 0x2DDF1Cu) {
        ctx->pc = 0x2DDF20u;
        goto label_2ddf20;
    }
    ctx->pc = 0x2DDF18u;
    {
        const bool branch_taken_0x2ddf18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ddf18) {
            ctx->pc = 0x2DE648u;
            goto label_2de648;
        }
    }
    ctx->pc = 0x2DDF20u;
label_2ddf20:
    // 0x2ddf20: 0x8ea30568  lw          $v1, 0x568($s5)
    ctx->pc = 0x2ddf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1384)));
label_2ddf24:
    // 0x2ddf24: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
label_2ddf28:
    if (ctx->pc == 0x2DDF28u) {
        ctx->pc = 0x2DDF28u;
            // 0x2ddf28: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2DDF2Cu;
        goto label_2ddf2c;
    }
    ctx->pc = 0x2DDF24u;
    {
        const bool branch_taken_0x2ddf24 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2ddf24) {
            ctx->pc = 0x2DDF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDF24u;
            // 0x2ddf28: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DDF3Cu;
            goto label_2ddf3c;
        }
    }
    ctx->pc = 0x2DDF2Cu;
label_2ddf2c:
    // 0x2ddf2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ddf2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ddf30:
    // 0x2ddf30: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ddf34:
    if (ctx->pc == 0x2DDF34u) {
        ctx->pc = 0x2DDF34u;
            // 0x2ddf34: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2DDF38u;
        goto label_2ddf38;
    }
    ctx->pc = 0x2DDF30u;
    {
        const bool branch_taken_0x2ddf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDF30u;
            // 0x2ddf34: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf30) {
            ctx->pc = 0x2DDF54u;
            goto label_2ddf54;
        }
    }
    ctx->pc = 0x2DDF38u;
label_2ddf38:
    // 0x2ddf38: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2ddf38u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_2ddf3c:
    // 0x2ddf3c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ddf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2ddf40:
    // 0x2ddf40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2ddf40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2ddf44:
    // 0x2ddf44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ddf44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ddf48:
    // 0x2ddf48: 0x0  nop
    ctx->pc = 0x2ddf48u;
    // NOP
label_2ddf4c:
    // 0x2ddf4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2ddf4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2ddf50:
    // 0x2ddf50: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2ddf50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2ddf54:
    // 0x2ddf54: 0x8ea3056c  lw          $v1, 0x56C($s5)
    ctx->pc = 0x2ddf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1388)));
label_2ddf58:
    // 0x2ddf58: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
label_2ddf5c:
    if (ctx->pc == 0x2DDF5Cu) {
        ctx->pc = 0x2DDF5Cu;
            // 0x2ddf5c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2DDF60u;
        goto label_2ddf60;
    }
    ctx->pc = 0x2DDF58u;
    {
        const bool branch_taken_0x2ddf58 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2ddf58) {
            ctx->pc = 0x2DDF5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDF58u;
            // 0x2ddf5c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DDF70u;
            goto label_2ddf70;
        }
    }
    ctx->pc = 0x2DDF60u;
label_2ddf60:
    // 0x2ddf60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ddf60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ddf64:
    // 0x2ddf64: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ddf68:
    if (ctx->pc == 0x2DDF68u) {
        ctx->pc = 0x2DDF68u;
            // 0x2ddf68: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2DDF6Cu;
        goto label_2ddf6c;
    }
    ctx->pc = 0x2DDF64u;
    {
        const bool branch_taken_0x2ddf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDF64u;
            // 0x2ddf68: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf64) {
            ctx->pc = 0x2DDF88u;
            goto label_2ddf88;
        }
    }
    ctx->pc = 0x2DDF6Cu;
label_2ddf6c:
    // 0x2ddf6c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2ddf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_2ddf70:
    // 0x2ddf70: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ddf70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2ddf74:
    // 0x2ddf74: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2ddf74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2ddf78:
    // 0x2ddf78: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ddf78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ddf7c:
    // 0x2ddf7c: 0x0  nop
    ctx->pc = 0x2ddf7cu;
    // NOP
label_2ddf80:
    // 0x2ddf80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ddf80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ddf84:
    // 0x2ddf84: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ddf84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ddf88:
    // 0x2ddf88: 0x0  nop
    ctx->pc = 0x2ddf88u;
    // NOP
label_2ddf8c:
    // 0x2ddf8c: 0x0  nop
    ctx->pc = 0x2ddf8cu;
    // NOP
label_2ddf90:
    // 0x2ddf90: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2ddf90u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_2ddf94:
    // 0x2ddf94: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2ddf94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_2ddf98:
    // 0x2ddf98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ddf98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ddf9c:
    // 0x2ddf9c: 0x0  nop
    ctx->pc = 0x2ddf9cu;
    // NOP
label_2ddfa0:
    // 0x2ddfa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ddfa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ddfa4:
    // 0x2ddfa4: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_2ddfa8:
    if (ctx->pc == 0x2DDFA8u) {
        ctx->pc = 0x2DDFA8u;
            // 0x2ddfa8: 0x92a30566  lbu         $v1, 0x566($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1382)));
        ctx->pc = 0x2DDFACu;
        goto label_2ddfac;
    }
    ctx->pc = 0x2DDFA4u;
    {
        const bool branch_taken_0x2ddfa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ddfa4) {
            ctx->pc = 0x2DDFA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDFA4u;
            // 0x2ddfa8: 0x92a30566  lbu         $v1, 0x566($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1382)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DDFC8u;
            goto label_2ddfc8;
        }
    }
    ctx->pc = 0x2DDFACu;
label_2ddfac:
    // 0x2ddfac: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2ddfacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2ddfb0:
    // 0x2ddfb0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ddfb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ddfb4:
    // 0x2ddfb4: 0x320f809  jalr        $t9
label_2ddfb8:
    if (ctx->pc == 0x2DDFB8u) {
        ctx->pc = 0x2DDFB8u;
            // 0x2ddfb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DDFBCu;
        goto label_2ddfbc;
    }
    ctx->pc = 0x2DDFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DDFBCu);
        ctx->pc = 0x2DDFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDFB4u;
            // 0x2ddfb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DDFBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DDFBCu; }
            if (ctx->pc != 0x2DDFBCu) { return; }
        }
        }
    }
    ctx->pc = 0x2DDFBCu;
label_2ddfbc:
    // 0x2ddfbc: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ddfc0:
    if (ctx->pc == 0x2DDFC0u) {
        ctx->pc = 0x2DDFC0u;
            // 0x2ddfc0: 0x92b30566  lbu         $s3, 0x566($s5) (Delay Slot)
        SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1382)));
        ctx->pc = 0x2DDFC4u;
        goto label_2ddfc4;
    }
    ctx->pc = 0x2DDFBCu;
    {
        const bool branch_taken_0x2ddfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDFBCu;
            // 0x2ddfc0: 0x92b30566  lbu         $s3, 0x566($s5) (Delay Slot)
        SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1382)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfbc) {
            ctx->pc = 0x2DDFD4u;
            goto label_2ddfd4;
        }
    }
    ctx->pc = 0x2DDFC4u;
label_2ddfc4:
    // 0x2ddfc4: 0x92a30566  lbu         $v1, 0x566($s5)
    ctx->pc = 0x2ddfc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1382)));
label_2ddfc8:
    // 0x2ddfc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ddfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2ddfcc:
    // 0x2ddfcc: 0xa2a30566  sb          $v1, 0x566($s5)
    ctx->pc = 0x2ddfccu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1382), (uint8_t)GPR_U32(ctx, 3));
label_2ddfd0:
    // 0x2ddfd0: 0x92b30566  lbu         $s3, 0x566($s5)
    ctx->pc = 0x2ddfd0u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1382)));
label_2ddfd4:
    // 0x2ddfd4: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x2ddfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2ddfd8:
    // 0x2ddfd8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2ddfdc:
    if (ctx->pc == 0x2DDFDCu) {
        ctx->pc = 0x2DDFE0u;
        goto label_2ddfe0;
    }
    ctx->pc = 0x2DDFD8u;
    {
        const bool branch_taken_0x2ddfd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddfd8) {
            ctx->pc = 0x2DE00Cu;
            goto label_2de00c;
        }
    }
    ctx->pc = 0x2DDFE0u;
label_2ddfe0:
    // 0x2ddfe0: 0x9464000c  lhu         $a0, 0xC($v1)
    ctx->pc = 0x2ddfe0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_2ddfe4:
    // 0x2ddfe4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2ddfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ddfe8:
    // 0x2ddfe8: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_2ddfec:
    if (ctx->pc == 0x2DDFECu) {
        ctx->pc = 0x2DDFF0u;
        goto label_2ddff0;
    }
    ctx->pc = 0x2DDFE8u;
    {
        const bool branch_taken_0x2ddfe8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ddfe8) {
            ctx->pc = 0x2DE00Cu;
            goto label_2de00c;
        }
    }
    ctx->pc = 0x2DDFF0u;
label_2ddff0:
    // 0x2ddff0: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x2ddff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_2ddff4:
    // 0x2ddff4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ddff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ddff8:
    // 0x2ddff8: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_2ddffc:
    if (ctx->pc == 0x2DDFFCu) {
        ctx->pc = 0x2DE000u;
        goto label_2de000;
    }
    ctx->pc = 0x2DDFF8u;
    {
        const bool branch_taken_0x2ddff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ddff8) {
            ctx->pc = 0x2DE00Cu;
            goto label_2de00c;
        }
    }
    ctx->pc = 0x2DE000u;
label_2de000:
    // 0x2de000: 0x10000191  b           . + 4 + (0x191 << 2)
label_2de004:
    if (ctx->pc == 0x2DE004u) {
        ctx->pc = 0x2DE008u;
        goto label_2de008;
    }
    ctx->pc = 0x2DE000u;
    {
        const bool branch_taken_0x2de000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de000) {
            ctx->pc = 0x2DE648u;
            goto label_2de648;
        }
    }
    ctx->pc = 0x2DE008u;
label_2de008:
    // 0x2de008: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2de008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de00c:
    // 0x2de00c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2de00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_2de010:
    // 0x2de010: 0x14b100  sll         $s6, $s4, 4
    ctx->pc = 0x2de010u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_2de014:
    // 0x2de014: 0x24633730  addiu       $v1, $v1, 0x3730
    ctx->pc = 0x2de014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14128));
label_2de018:
    // 0x2de018: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x2de018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_2de01c:
    // 0x2de01c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2de01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_2de020:
    // 0x2de020: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x2de020u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2de024:
    // 0x2de024: 0x24633734  addiu       $v1, $v1, 0x3734
    ctx->pc = 0x2de024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14132));
label_2de028:
    // 0x2de028: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2de028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_2de02c:
    // 0x2de02c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2de02cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2de030:
    // 0x2de030: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2de030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_2de034:
    // 0x2de034: 0x2463373c  addiu       $v1, $v1, 0x373C
    ctx->pc = 0x2de034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14140));
label_2de038:
    // 0x2de038: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x2de038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_2de03c:
    // 0x2de03c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2de03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2de040:
    // 0x2de040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2de040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de044:
    // 0x2de044: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_2de048:
    if (ctx->pc == 0x2DE048u) {
        ctx->pc = 0x2DE04Cu;
        goto label_2de04c;
    }
    ctx->pc = 0x2DE044u;
    {
        const bool branch_taken_0x2de044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2de044) {
            ctx->pc = 0x2DE05Cu;
            goto label_2de05c;
        }
    }
    ctx->pc = 0x2DE04Cu;
label_2de04c:
    // 0x2de04c: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_2de050:
    if (ctx->pc == 0x2DE050u) {
        ctx->pc = 0x2DE050u;
            // 0x2de050: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x2DE054u;
        goto label_2de054;
    }
    ctx->pc = 0x2DE04Cu;
    {
        const bool branch_taken_0x2de04c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de04c) {
            ctx->pc = 0x2DE050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE04Cu;
            // 0x2de050: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE07Cu;
            goto label_2de07c;
        }
    }
    ctx->pc = 0x2DE054u;
label_2de054:
    // 0x2de054: 0x10000008  b           . + 4 + (0x8 << 2)
label_2de058:
    if (ctx->pc == 0x2DE058u) {
        ctx->pc = 0x2DE05Cu;
        goto label_2de05c;
    }
    ctx->pc = 0x2DE054u;
    {
        const bool branch_taken_0x2de054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de054) {
            ctx->pc = 0x2DE078u;
            goto label_2de078;
        }
    }
    ctx->pc = 0x2DE05Cu;
label_2de05c:
    // 0x2de05c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2de05cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_2de060:
    // 0x2de060: 0x24841d20  addiu       $a0, $a0, 0x1D20
    ctx->pc = 0x2de060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7456));
label_2de064:
    // 0x2de064: 0xaea40560  sw          $a0, 0x560($s5)
    ctx->pc = 0x2de064u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1376), GPR_U32(ctx, 4));
label_2de068:
    // 0x2de068: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2de068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2de06c:
    // 0x2de06c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2de06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2de070:
    // 0x2de070: 0x320f809  jalr        $t9
label_2de074:
    if (ctx->pc == 0x2DE074u) {
        ctx->pc = 0x2DE078u;
        goto label_2de078;
    }
    ctx->pc = 0x2DE070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DE078u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DE078u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DE078u; }
            if (ctx->pc != 0x2DE078u) { return; }
        }
        }
    }
    ctx->pc = 0x2DE078u;
label_2de078:
    // 0x2de078: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x2de078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2de07c:
    // 0x2de07c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2de07cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_2de080:
    // 0x2de080: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x2de080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_2de084:
    // 0x2de084: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2de084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2de088:
    // 0x2de088: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2de088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2de08c:
    // 0x2de08c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2de08cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2de090:
    // 0x2de090: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2de090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2de094:
    // 0x2de094: 0x12430135  beq         $s2, $v1, . + 4 + (0x135 << 2)
label_2de098:
    if (ctx->pc == 0x2DE098u) {
        ctx->pc = 0x2DE098u;
            // 0x2de098: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x2DE09Cu;
        goto label_2de09c;
    }
    ctx->pc = 0x2DE094u;
    {
        const bool branch_taken_0x2de094 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DE098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE094u;
            // 0x2de098: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de094) {
            ctx->pc = 0x2DE56Cu;
            goto label_2de56c;
        }
    }
    ctx->pc = 0x2DE09Cu;
label_2de09c:
    // 0x2de09c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2de09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2de0a0:
    // 0x2de0a0: 0x52430107  beql        $s2, $v1, . + 4 + (0x107 << 2)
label_2de0a4:
    if (ctx->pc == 0x2DE0A4u) {
        ctx->pc = 0x2DE0A4u;
            // 0x2de0a4: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->pc = 0x2DE0A8u;
        goto label_2de0a8;
    }
    ctx->pc = 0x2DE0A0u;
    {
        const bool branch_taken_0x2de0a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2de0a0) {
            ctx->pc = 0x2DE0A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE0A0u;
            // 0x2de0a4: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE4C0u;
            goto label_2de4c0;
        }
    }
    ctx->pc = 0x2DE0A8u;
label_2de0a8:
    // 0x2de0a8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2de0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2de0ac:
    // 0x2de0ac: 0x524300d8  beql        $s2, $v1, . + 4 + (0xD8 << 2)
label_2de0b0:
    if (ctx->pc == 0x2DE0B0u) {
        ctx->pc = 0x2DE0B0u;
            // 0x2de0b0: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->pc = 0x2DE0B4u;
        goto label_2de0b4;
    }
    ctx->pc = 0x2DE0ACu;
    {
        const bool branch_taken_0x2de0ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2de0ac) {
            ctx->pc = 0x2DE0B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE0ACu;
            // 0x2de0b0: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE410u;
            goto label_2de410;
        }
    }
    ctx->pc = 0x2DE0B4u;
label_2de0b4:
    // 0x2de0b4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2de0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2de0b8:
    // 0x2de0b8: 0x5243005b  beql        $s2, $v1, . + 4 + (0x5B << 2)
label_2de0bc:
    if (ctx->pc == 0x2DE0BCu) {
        ctx->pc = 0x2DE0BCu;
            // 0x2de0bc: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x2DE0C0u;
        goto label_2de0c0;
    }
    ctx->pc = 0x2DE0B8u;
    {
        const bool branch_taken_0x2de0b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2de0b8) {
            ctx->pc = 0x2DE0BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE0B8u;
            // 0x2de0bc: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE228u;
            goto label_2de228;
        }
    }
    ctx->pc = 0x2DE0C0u;
label_2de0c0:
    // 0x2de0c0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2de0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2de0c4:
    // 0x2de0c4: 0x52430004  beql        $s2, $v1, . + 4 + (0x4 << 2)
label_2de0c8:
    if (ctx->pc == 0x2DE0C8u) {
        ctx->pc = 0x2DE0C8u;
            // 0x2de0c8: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->pc = 0x2DE0CCu;
        goto label_2de0cc;
    }
    ctx->pc = 0x2DE0C4u;
    {
        const bool branch_taken_0x2de0c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2de0c4) {
            ctx->pc = 0x2DE0C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE0C4u;
            // 0x2de0c8: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE0D8u;
            goto label_2de0d8;
        }
    }
    ctx->pc = 0x2DE0CCu;
label_2de0cc:
    // 0x2de0cc: 0x1000015e  b           . + 4 + (0x15E << 2)
label_2de0d0:
    if (ctx->pc == 0x2DE0D0u) {
        ctx->pc = 0x2DE0D4u;
        goto label_2de0d4;
    }
    ctx->pc = 0x2DE0CCu;
    {
        const bool branch_taken_0x2de0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de0cc) {
            ctx->pc = 0x2DE648u;
            goto label_2de648;
        }
    }
    ctx->pc = 0x2DE0D4u;
label_2de0d4:
    // 0x2de0d4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2de0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_2de0d8:
    // 0x2de0d8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2de0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2de0dc:
    // 0x2de0dc: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x2de0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2de0e0:
    // 0x2de0e0: 0x24420a70  addiu       $v0, $v0, 0xA70
    ctx->pc = 0x2de0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2672));
label_2de0e4:
    // 0x2de0e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2de0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2de0e8:
    // 0x2de0e8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2de0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2de0ec:
    // 0x2de0ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2de0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2de0f0:
    // 0x2de0f0: 0x24060074  addiu       $a2, $zero, 0x74
    ctx->pc = 0x2de0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_2de0f4:
    // 0x2de0f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2de0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2de0f8:
    // 0x2de0f8: 0xc04a508  jal         func_129420
label_2de0fc:
    if (ctx->pc == 0x2DE0FCu) {
        ctx->pc = 0x2DE0FCu;
            // 0x2de0fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2DE100u;
        goto label_2de100;
    }
    ctx->pc = 0x2DE0F8u;
    SET_GPR_U32(ctx, 31, 0x2DE100u);
    ctx->pc = 0x2DE0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE0F8u;
            // 0x2de0fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE100u; }
        if (ctx->pc != 0x2DE100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE100u; }
        if (ctx->pc != 0x2DE100u) { return; }
    }
    ctx->pc = 0x2DE100u;
label_2de100:
    // 0x2de100: 0x260202c0  addiu       $v0, $s0, 0x2C0
    ctx->pc = 0x2de100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_2de104:
    // 0x2de104: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x2de104u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
label_2de108:
    // 0x2de108: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x2de108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
label_2de10c:
    // 0x2de10c: 0x260a0de4  addiu       $t2, $s0, 0xDE4
    ctx->pc = 0x2de10cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 3556));
label_2de110:
    // 0x2de110: 0x26020930  addiu       $v0, $s0, 0x930
    ctx->pc = 0x2de110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2352));
label_2de114:
    // 0x2de114: 0x26090de0  addiu       $t1, $s0, 0xDE0
    ctx->pc = 0x2de114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 3552));
label_2de118:
    // 0x2de118: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x2de118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
label_2de11c:
    // 0x2de11c: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x2de11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de120:
    // 0x2de120: 0x26020910  addiu       $v0, $s0, 0x910
    ctx->pc = 0x2de120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2320));
label_2de124:
    // 0x2de124: 0x25080a70  addiu       $t0, $t0, 0xA70
    ctx->pc = 0x2de124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2672));
label_2de128:
    // 0x2de128: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x2de128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_2de12c:
    // 0x2de12c: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x2de12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de130:
    // 0x2de130: 0x26020dc0  addiu       $v0, $s0, 0xDC0
    ctx->pc = 0x2de130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3520));
label_2de134:
    // 0x2de134: 0x260705d0  addiu       $a3, $s0, 0x5D0
    ctx->pc = 0x2de134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
label_2de138:
    // 0x2de138: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x2de138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_2de13c:
    // 0x2de13c: 0x260602e0  addiu       $a2, $s0, 0x2E0
    ctx->pc = 0x2de13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
label_2de140:
    // 0x2de140: 0x8e0c0d74  lw          $t4, 0xD74($s0)
    ctx->pc = 0x2de140u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_2de144:
    // 0x2de144: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2de144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2de148:
    // 0x2de148: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2de148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2de14c:
    // 0x2de14c: 0x260303b0  addiu       $v1, $s0, 0x3B0
    ctx->pc = 0x2de14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
label_2de150:
    // 0x2de150: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2de150u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2de154:
    // 0x2de154: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2de154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2de158:
    // 0x2de158: 0x918b02c5  lbu         $t3, 0x2C5($t4)
    ctx->pc = 0x2de158u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 709)));
label_2de15c:
    // 0x2de15c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2de15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2de160:
    // 0x2de160: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x2de160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_2de164:
    // 0x2de164: 0xafaa0228  sw          $t2, 0x228($sp)
    ctx->pc = 0x2de164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 10));
label_2de168:
    // 0x2de168: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x2de168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_2de16c:
    // 0x2de16c: 0xafa9022c  sw          $t1, 0x22C($sp)
    ctx->pc = 0x2de16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 9));
label_2de170:
    // 0x2de170: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x2de170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_2de174:
    // 0x2de174: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x2de174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
label_2de178:
    // 0x2de178: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2de178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2de17c:
    // 0x2de17c: 0x8ea90590  lw          $t1, 0x590($s5)
    ctx->pc = 0x2de17cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1424)));
label_2de180:
    // 0x2de180: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x2de180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2de184:
    // 0x2de184: 0xafa70234  sw          $a3, 0x234($sp)
    ctx->pc = 0x2de184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 7));
label_2de188:
    // 0x2de188: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x2de188u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2de18c:
    // 0x2de18c: 0xafa6023c  sw          $a2, 0x23C($sp)
    ctx->pc = 0x2de18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 6));
label_2de190:
    // 0x2de190: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2de190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2de194:
    // 0x2de194: 0xafa30240  sw          $v1, 0x240($sp)
    ctx->pc = 0x2de194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 3));
label_2de198:
    // 0x2de198: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2de198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2de19c:
    // 0x2de19c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2de19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2de1a0:
    // 0x2de1a0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2de1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_2de1a4:
    // 0x2de1a4: 0xe7a101f0  swc1        $f1, 0x1F0($sp)
    ctx->pc = 0x2de1a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_2de1a8:
    // 0x2de1a8: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x2de1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
label_2de1ac:
    // 0x2de1ac: 0xc0a9308  jal         func_2A4C20
label_2de1b0:
    if (ctx->pc == 0x2DE1B0u) {
        ctx->pc = 0x2DE1B0u;
            // 0x2de1b0: 0xe7a001fc  swc1        $f0, 0x1FC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
        ctx->pc = 0x2DE1B4u;
        goto label_2de1b4;
    }
    ctx->pc = 0x2DE1ACu;
    SET_GPR_U32(ctx, 31, 0x2DE1B4u);
    ctx->pc = 0x2DE1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE1ACu;
            // 0x2de1b0: 0xe7a001fc  swc1        $f0, 0x1FC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4C20u;
    if (runtime->hasFunction(0x2A4C20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE1B4u; }
        if (ctx->pc != 0x2DE1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4C20_0x2a4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE1B4u; }
        if (ctx->pc != 0x2DE1B4u) { return; }
    }
    ctx->pc = 0x2DE1B4u;
label_2de1b4:
    // 0x2de1b4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2de1b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2de1b8:
    // 0x2de1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de1bc:
    // 0x2de1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de1c0:
    // 0x2de1c0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2de1c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2de1c4:
    // 0x2de1c4: 0x320f809  jalr        $t9
label_2de1c8:
    if (ctx->pc == 0x2DE1C8u) {
        ctx->pc = 0x2DE1C8u;
            // 0x2de1c8: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x2DE1CCu;
        goto label_2de1cc;
    }
    ctx->pc = 0x2DE1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DE1CCu);
        ctx->pc = 0x2DE1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE1C4u;
            // 0x2de1c8: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DE1CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DE1CCu; }
            if (ctx->pc != 0x2DE1CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2DE1CCu;
label_2de1cc:
    // 0x2de1cc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2de1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_2de1d0:
    // 0x2de1d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de1d4:
    // 0x2de1d4: 0x24633738  addiu       $v1, $v1, 0x3738
    ctx->pc = 0x2de1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14136));
label_2de1d8:
    // 0x2de1d8: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2de1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_2de1dc:
    // 0x2de1dc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2de1dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2de1e0:
    // 0x2de1e0: 0x12e20005  beq         $s7, $v0, . + 4 + (0x5 << 2)
label_2de1e4:
    if (ctx->pc == 0x2DE1E4u) {
        ctx->pc = 0x2DE1E4u;
            // 0x2de1e4: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2DE1E8u;
        goto label_2de1e8;
    }
    ctx->pc = 0x2DE1E0u;
    {
        const bool branch_taken_0x2de1e0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE1E0u;
            // 0x2de1e4: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de1e0) {
            ctx->pc = 0x2DE1F8u;
            goto label_2de1f8;
        }
    }
    ctx->pc = 0x2DE1E8u;
label_2de1e8:
    // 0x2de1e8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2de1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_2de1ec:
    // 0x2de1ec: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2de1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2de1f0:
    // 0x2de1f0: 0xac540570  sw          $s4, 0x570($v0)
    ctx->pc = 0x2de1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1392), GPR_U32(ctx, 20));
label_2de1f4:
    // 0x2de1f4: 0xac5e0578  sw          $fp, 0x578($v0)
    ctx->pc = 0x2de1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1400), GPR_U32(ctx, 30));
label_2de1f8:
    // 0x2de1f8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2de1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_2de1fc:
    // 0x2de1fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de200:
    // 0x2de200: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2de200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2de204:
    // 0x2de204: 0xac510574  sw          $s1, 0x574($v0)
    ctx->pc = 0x2de204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1396), GPR_U32(ctx, 17));
label_2de208:
    // 0x2de208: 0xac54057c  sw          $s4, 0x57C($v0)
    ctx->pc = 0x2de208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1404), GPR_U32(ctx, 20));
label_2de20c:
    // 0x2de20c: 0x93a60210  lbu         $a2, 0x210($sp)
    ctx->pc = 0x2de20cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 528)));
label_2de210:
    // 0x2de210: 0x8fa70214  lw          $a3, 0x214($sp)
    ctx->pc = 0x2de210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_2de214:
    // 0x2de214: 0xc0a92c8  jal         func_2A4B20
label_2de218:
    if (ctx->pc == 0x2DE218u) {
        ctx->pc = 0x2DE218u;
            // 0x2de218: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DE21Cu;
        goto label_2de21c;
    }
    ctx->pc = 0x2DE214u;
    SET_GPR_U32(ctx, 31, 0x2DE21Cu);
    ctx->pc = 0x2DE218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE214u;
            // 0x2de218: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B20u;
    if (runtime->hasFunction(0x2A4B20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE21Cu; }
        if (ctx->pc != 0x2DE21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4B20_0x2a4b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE21Cu; }
        if (ctx->pc != 0x2DE21Cu) { return; }
    }
    ctx->pc = 0x2DE21Cu;
label_2de21c:
    // 0x2de21c: 0x1000010a  b           . + 4 + (0x10A << 2)
label_2de220:
    if (ctx->pc == 0x2DE220u) {
        ctx->pc = 0x2DE224u;
        goto label_2de224;
    }
    ctx->pc = 0x2DE21Cu;
    {
        const bool branch_taken_0x2de21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de21c) {
            ctx->pc = 0x2DE648u;
            goto label_2de648;
        }
    }
    ctx->pc = 0x2DE224u;
label_2de224:
    // 0x2de224: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2de224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2de228:
    // 0x2de228: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2de228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2de22c:
    // 0x2de22c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2de22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2de230:
    // 0x2de230: 0x244234a0  addiu       $v0, $v0, 0x34A0
    ctx->pc = 0x2de230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13472));
label_2de234:
    // 0x2de234: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2de234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2de238:
    // 0x2de238: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2de238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2de23c:
    // 0x2de23c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2de23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2de240:
    // 0x2de240: 0xc04a508  jal         func_129420
label_2de244:
    if (ctx->pc == 0x2DE244u) {
        ctx->pc = 0x2DE244u;
            // 0x2de244: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2DE248u;
        goto label_2de248;
    }
    ctx->pc = 0x2DE240u;
    SET_GPR_U32(ctx, 31, 0x2DE248u);
    ctx->pc = 0x2DE244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE240u;
            // 0x2de244: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE248u; }
        if (ctx->pc != 0x2DE248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE248u; }
        if (ctx->pc != 0x2DE248u) { return; }
    }
    ctx->pc = 0x2DE248u;
label_2de248:
    // 0x2de248: 0x260202c0  addiu       $v0, $s0, 0x2C0
    ctx->pc = 0x2de248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_2de24c:
    // 0x2de24c: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x2de24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_2de250:
    // 0x2de250: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x2de250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_2de254:
    // 0x2de254: 0xc7a1019c  lwc1        $f1, 0x19C($sp)
    ctx->pc = 0x2de254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de258:
    // 0x2de258: 0x8e030a68  lw          $v1, 0xA68($s0)
    ctx->pc = 0x2de258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
label_2de25c:
    // 0x2de25c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2de25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2de260:
    // 0x2de260: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2de260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2de264:
    // 0x2de264: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x2de264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de268:
    // 0x2de268: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2de268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2de26c:
    // 0x2de26c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2de26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2de270:
    // 0x2de270: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2de270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2de274:
    // 0x2de274: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2de274u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2de278:
    // 0x2de278: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x2de278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2de27c:
    // 0x2de27c: 0x2483006c  addiu       $v1, $a0, 0x6C
    ctx->pc = 0x2de27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
label_2de280:
    // 0x2de280: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2de280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2de284:
    // 0x2de284: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x2de284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_2de288:
    // 0x2de288: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x2de288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_2de28c:
    // 0x2de28c: 0xafa3018c  sw          $v1, 0x18C($sp)
    ctx->pc = 0x2de28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
label_2de290:
    // 0x2de290: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x2de290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
label_2de294:
    // 0x2de294: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x2de294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_2de298:
    // 0x2de298: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x2de298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
label_2de29c:
    // 0x2de29c: 0xe7a1019c  swc1        $f1, 0x19C($sp)
    ctx->pc = 0x2de29cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_2de2a0:
    // 0x2de2a0: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x2de2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_2de2a4:
    // 0x2de2a4: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2de2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2de2a8:
    // 0x2de2a8: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
label_2de2ac:
    if (ctx->pc == 0x2DE2ACu) {
        ctx->pc = 0x2DE2ACu;
            // 0x2de2ac: 0xafa001c0  sw          $zero, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
        ctx->pc = 0x2DE2B0u;
        goto label_2de2b0;
    }
    ctx->pc = 0x2DE2A8u;
    {
        const bool branch_taken_0x2de2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de2a8) {
            ctx->pc = 0x2DE2ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE2A8u;
            // 0x2de2ac: 0xafa001c0  sw          $zero, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE388u;
            goto label_2de388;
        }
    }
    ctx->pc = 0x2DE2B0u;
label_2de2b0:
    // 0x2de2b0: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2de2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2de2b4:
    // 0x2de2b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2de2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2de2b8:
    // 0x2de2b8: 0x8c42e400  lw          $v0, -0x1C00($v0)
    ctx->pc = 0x2de2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_2de2bc:
    // 0x2de2bc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2de2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2de2c0:
    // 0x2de2c0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2de2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2de2c4:
    // 0x2de2c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2de2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2de2c8:
    // 0x2de2c8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2de2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2de2cc:
    // 0x2de2cc: 0x641026  xor         $v0, $v1, $a0
    ctx->pc = 0x2de2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_2de2d0:
    // 0x2de2d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2de2d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2de2d4:
    // 0x2de2d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2de2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2de2d8:
    // 0x2de2d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2de2dc:
    if (ctx->pc == 0x2DE2DCu) {
        ctx->pc = 0x2DE2E0u;
        goto label_2de2e0;
    }
    ctx->pc = 0x2DE2D8u;
    {
        const bool branch_taken_0x2de2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de2d8) {
            ctx->pc = 0x2DE318u;
            goto label_2de318;
        }
    }
    ctx->pc = 0x2DE2E0u;
label_2de2e0:
    // 0x2de2e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2de2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2de2e4:
    // 0x2de2e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2de2e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2de2e8:
    // 0x2de2e8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2de2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2de2ec:
    // 0x2de2ec: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x2de2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_2de2f0:
    // 0x2de2f0: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
label_2de2f4:
    if (ctx->pc == 0x2DE2F4u) {
        ctx->pc = 0x2DE2F4u;
            // 0x2de2f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2DE2F8u;
        goto label_2de2f8;
    }
    ctx->pc = 0x2DE2F0u;
    {
        const bool branch_taken_0x2de2f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2de2f0) {
            ctx->pc = 0x2DE2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE2F0u;
            // 0x2de2f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE304u;
            goto label_2de304;
        }
    }
    ctx->pc = 0x2DE2F8u;
label_2de2f8:
    // 0x2de2f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2de2fc:
    if (ctx->pc == 0x2DE2FCu) {
        ctx->pc = 0x2DE300u;
        goto label_2de300;
    }
    ctx->pc = 0x2DE2F8u;
    {
        const bool branch_taken_0x2de2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de2f8) {
            ctx->pc = 0x2DE31Cu;
            goto label_2de31c;
        }
    }
    ctx->pc = 0x2DE300u;
label_2de300:
    // 0x2de300: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2de300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2de304:
    // 0x2de304: 0x641026  xor         $v0, $v1, $a0
    ctx->pc = 0x2de304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_2de308:
    // 0x2de308: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2de308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2de30c:
    // 0x2de30c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2de30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2de310:
    // 0x2de310: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_2de314:
    if (ctx->pc == 0x2DE314u) {
        ctx->pc = 0x2DE314u;
            // 0x2de314: 0x3183c  dsll32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x2DE318u;
        goto label_2de318;
    }
    ctx->pc = 0x2DE310u;
    {
        const bool branch_taken_0x2de310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de310) {
            ctx->pc = 0x2DE314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE310u;
            // 0x2de314: 0x3183c  dsll32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE2E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2de2e4;
        }
    }
    ctx->pc = 0x2DE318u;
label_2de318:
    // 0x2de318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2de318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de31c:
    // 0x2de31c: 0x50c00016  beql        $a2, $zero, . + 4 + (0x16 << 2)
label_2de320:
    if (ctx->pc == 0x2DE320u) {
        ctx->pc = 0x2DE320u;
            // 0x2de320: 0x27a20180  addiu       $v0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x2DE324u;
        goto label_2de324;
    }
    ctx->pc = 0x2DE31Cu;
    {
        const bool branch_taken_0x2de31c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de31c) {
            ctx->pc = 0x2DE320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE31Cu;
            // 0x2de320: 0x27a20180  addiu       $v0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE378u;
            goto label_2de378;
        }
    }
    ctx->pc = 0x2DE324u;
label_2de324:
    // 0x2de324: 0xc4c0009c  lwc1        $f0, 0x9C($a2)
    ctx->pc = 0x2de324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de328:
    // 0x2de328: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x2de328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2de32c:
    // 0x2de32c: 0x26a40594  addiu       $a0, $s5, 0x594
    ctx->pc = 0x2de32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1428));
label_2de330:
    // 0x2de330: 0x26a30598  addiu       $v1, $s5, 0x598
    ctx->pc = 0x2de330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1432));
label_2de334:
    // 0x2de334: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2de334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_2de338:
    // 0x2de338: 0xc4c00098  lwc1        $f0, 0x98($a2)
    ctx->pc = 0x2de338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de33c:
    // 0x2de33c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2de33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_2de340:
    // 0x2de340: 0xc6000930  lwc1        $f0, 0x930($s0)
    ctx->pc = 0x2de340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de344:
    // 0x2de344: 0xe6a00594  swc1        $f0, 0x594($s5)
    ctx->pc = 0x2de344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1428), bits); }
label_2de348:
    // 0x2de348: 0xc6000910  lwc1        $f0, 0x910($s0)
    ctx->pc = 0x2de348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de34c:
    // 0x2de34c: 0xe6a00598  swc1        $f0, 0x598($s5)
    ctx->pc = 0x2de34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1432), bits); }
label_2de350:
    // 0x2de350: 0xc6000914  lwc1        $f0, 0x914($s0)
    ctx->pc = 0x2de350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de354:
    // 0x2de354: 0xe6a0059c  swc1        $f0, 0x59C($s5)
    ctx->pc = 0x2de354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1436), bits); }
label_2de358:
    // 0x2de358: 0xc6000918  lwc1        $f0, 0x918($s0)
    ctx->pc = 0x2de358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de35c:
    // 0x2de35c: 0xe6a005a0  swc1        $f0, 0x5A0($s5)
    ctx->pc = 0x2de35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1440), bits); }
label_2de360:
    // 0x2de360: 0xc600091c  lwc1        $f0, 0x91C($s0)
    ctx->pc = 0x2de360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de364:
    // 0x2de364: 0xe6a005a4  swc1        $f0, 0x5A4($s5)
    ctx->pc = 0x2de364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1444), bits); }
label_2de368:
    // 0x2de368: 0xacc40024  sw          $a0, 0x24($a2)
    ctx->pc = 0x2de368u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 4));
label_2de36c:
    // 0x2de36c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2de370:
    if (ctx->pc == 0x2DE370u) {
        ctx->pc = 0x2DE370u;
            // 0x2de370: 0xacc30020  sw          $v1, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x2DE374u;
        goto label_2de374;
    }
    ctx->pc = 0x2DE36Cu;
    {
        const bool branch_taken_0x2de36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE36Cu;
            // 0x2de370: 0xacc30020  sw          $v1, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de36c) {
            ctx->pc = 0x2DE38Cu;
            goto label_2de38c;
        }
    }
    ctx->pc = 0x2DE374u;
label_2de374:
    // 0x2de374: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x2de374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2de378:
    // 0x2de378: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x2de378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_2de37c:
    // 0x2de37c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2de380:
    if (ctx->pc == 0x2DE380u) {
        ctx->pc = 0x2DE380u;
            // 0x2de380: 0xac400044  sw          $zero, 0x44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x2DE384u;
        goto label_2de384;
    }
    ctx->pc = 0x2DE37Cu;
    {
        const bool branch_taken_0x2de37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE37Cu;
            // 0x2de380: 0xac400044  sw          $zero, 0x44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de37c) {
            ctx->pc = 0x2DE38Cu;
            goto label_2de38c;
        }
    }
    ctx->pc = 0x2DE384u;
label_2de384:
    // 0x2de384: 0xafa001c0  sw          $zero, 0x1C0($sp)
    ctx->pc = 0x2de384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
label_2de388:
    // 0x2de388: 0xafa001c4  sw          $zero, 0x1C4($sp)
    ctx->pc = 0x2de388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 0));
label_2de38c:
    // 0x2de38c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2de38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2de390:
    // 0x2de390: 0xc0a9308  jal         func_2A4C20
label_2de394:
    if (ctx->pc == 0x2DE394u) {
        ctx->pc = 0x2DE394u;
            // 0x2de394: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DE398u;
        goto label_2de398;
    }
    ctx->pc = 0x2DE390u;
    SET_GPR_U32(ctx, 31, 0x2DE398u);
    ctx->pc = 0x2DE394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE390u;
            // 0x2de394: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4C20u;
    if (runtime->hasFunction(0x2A4C20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE398u; }
        if (ctx->pc != 0x2DE398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4C20_0x2a4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE398u; }
        if (ctx->pc != 0x2DE398u) { return; }
    }
    ctx->pc = 0x2DE398u;
label_2de398:
    // 0x2de398: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2de398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2de39c:
    // 0x2de39c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de3a0:
    // 0x2de3a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de3a4:
    // 0x2de3a4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2de3a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2de3a8:
    // 0x2de3a8: 0x320f809  jalr        $t9
label_2de3ac:
    if (ctx->pc == 0x2DE3ACu) {
        ctx->pc = 0x2DE3ACu;
            // 0x2de3ac: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x2DE3B0u;
        goto label_2de3b0;
    }
    ctx->pc = 0x2DE3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DE3B0u);
        ctx->pc = 0x2DE3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE3A8u;
            // 0x2de3ac: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DE3B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DE3B0u; }
            if (ctx->pc != 0x2DE3B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2DE3B0u;
label_2de3b0:
    // 0x2de3b0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2de3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_2de3b4:
    // 0x2de3b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de3b8:
    // 0x2de3b8: 0x24633738  addiu       $v1, $v1, 0x3738
    ctx->pc = 0x2de3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14136));
label_2de3bc:
    // 0x2de3bc: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2de3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_2de3c0:
    // 0x2de3c0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2de3c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2de3c4:
    // 0x2de3c4: 0x12e20005  beq         $s7, $v0, . + 4 + (0x5 << 2)
label_2de3c8:
    if (ctx->pc == 0x2DE3C8u) {
        ctx->pc = 0x2DE3C8u;
            // 0x2de3c8: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2DE3CCu;
        goto label_2de3cc;
    }
    ctx->pc = 0x2DE3C4u;
    {
        const bool branch_taken_0x2de3c4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE3C4u;
            // 0x2de3c8: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3c4) {
            ctx->pc = 0x2DE3DCu;
            goto label_2de3dc;
        }
    }
    ctx->pc = 0x2DE3CCu;
label_2de3cc:
    // 0x2de3cc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2de3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_2de3d0:
    // 0x2de3d0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2de3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2de3d4:
    // 0x2de3d4: 0xac540570  sw          $s4, 0x570($v0)
    ctx->pc = 0x2de3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1392), GPR_U32(ctx, 20));
label_2de3d8:
    // 0x2de3d8: 0xac5e0578  sw          $fp, 0x578($v0)
    ctx->pc = 0x2de3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1400), GPR_U32(ctx, 30));
label_2de3dc:
    // 0x2de3dc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2de3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_2de3e0:
    // 0x2de3e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de3e4:
    // 0x2de3e4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2de3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2de3e8:
    // 0x2de3e8: 0xac510574  sw          $s1, 0x574($v0)
    ctx->pc = 0x2de3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1396), GPR_U32(ctx, 17));
label_2de3ec:
    // 0x2de3ec: 0xac54057c  sw          $s4, 0x57C($v0)
    ctx->pc = 0x2de3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1404), GPR_U32(ctx, 20));
label_2de3f0:
    // 0x2de3f0: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x2de3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2de3f4:
    // 0x2de3f4: 0x90460034  lbu         $a2, 0x34($v0)
    ctx->pc = 0x2de3f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
label_2de3f8:
    // 0x2de3f8: 0x8c470038  lw          $a3, 0x38($v0)
    ctx->pc = 0x2de3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2de3fc:
    // 0x2de3fc: 0xc0a92c8  jal         func_2A4B20
label_2de400:
    if (ctx->pc == 0x2DE400u) {
        ctx->pc = 0x2DE400u;
            // 0x2de400: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DE404u;
        goto label_2de404;
    }
    ctx->pc = 0x2DE3FCu;
    SET_GPR_U32(ctx, 31, 0x2DE404u);
    ctx->pc = 0x2DE400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE3FCu;
            // 0x2de400: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B20u;
    if (runtime->hasFunction(0x2A4B20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE404u; }
        if (ctx->pc != 0x2DE404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4B20_0x2a4b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE404u; }
        if (ctx->pc != 0x2DE404u) { return; }
    }
    ctx->pc = 0x2DE404u;
label_2de404:
    // 0x2de404: 0x10000090  b           . + 4 + (0x90 << 2)
label_2de408:
    if (ctx->pc == 0x2DE408u) {
        ctx->pc = 0x2DE40Cu;
        goto label_2de40c;
    }
    ctx->pc = 0x2DE404u;
    {
        const bool branch_taken_0x2de404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de404) {
            ctx->pc = 0x2DE648u;
            goto label_2de648;
        }
    }
    ctx->pc = 0x2DE40Cu;
label_2de40c:
    // 0x2de40c: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2de40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_2de410:
    // 0x2de410: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2de410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2de414:
    // 0x2de414: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x2de414u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2de418:
    // 0x2de418: 0x24423540  addiu       $v0, $v0, 0x3540
    ctx->pc = 0x2de418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13632));
label_2de41c:
    // 0x2de41c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2de41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2de420:
    // 0x2de420: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2de420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2de424:
    // 0x2de424: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x2de424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_2de428:
    // 0x2de428: 0xc04a508  jal         func_129420
label_2de42c:
    if (ctx->pc == 0x2DE42Cu) {
        ctx->pc = 0x2DE42Cu;
            // 0x2de42c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2DE430u;
        goto label_2de430;
    }
    ctx->pc = 0x2DE428u;
    SET_GPR_U32(ctx, 31, 0x2DE430u);
    ctx->pc = 0x2DE42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE428u;
            // 0x2de42c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE430u; }
        if (ctx->pc != 0x2DE430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE430u; }
        if (ctx->pc != 0x2DE430u) { return; }
    }
    ctx->pc = 0x2DE430u;
label_2de430:
    // 0x2de430: 0x260202c0  addiu       $v0, $s0, 0x2C0
    ctx->pc = 0x2de430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_2de434:
    // 0x2de434: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2de434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2de438:
    // 0x2de438: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x2de438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_2de43c:
    // 0x2de43c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2de43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2de440:
    // 0x2de440: 0x26020890  addiu       $v0, $s0, 0x890
    ctx->pc = 0x2de440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_2de444:
    // 0x2de444: 0xc0a9308  jal         func_2A4C20
label_2de448:
    if (ctx->pc == 0x2DE448u) {
        ctx->pc = 0x2DE448u;
            // 0x2de448: 0xafa2014c  sw          $v0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
        ctx->pc = 0x2DE44Cu;
        goto label_2de44c;
    }
    ctx->pc = 0x2DE444u;
    SET_GPR_U32(ctx, 31, 0x2DE44Cu);
    ctx->pc = 0x2DE448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE444u;
            // 0x2de448: 0xafa2014c  sw          $v0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4C20u;
    if (runtime->hasFunction(0x2A4C20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE44Cu; }
        if (ctx->pc != 0x2DE44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4C20_0x2a4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE44Cu; }
        if (ctx->pc != 0x2DE44Cu) { return; }
    }
    ctx->pc = 0x2DE44Cu;
label_2de44c:
    // 0x2de44c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2de44cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2de450:
    // 0x2de450: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de454:
    // 0x2de454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de458:
    // 0x2de458: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2de458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2de45c:
    // 0x2de45c: 0x320f809  jalr        $t9
label_2de460:
    if (ctx->pc == 0x2DE460u) {
        ctx->pc = 0x2DE460u;
            // 0x2de460: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x2DE464u;
        goto label_2de464;
    }
    ctx->pc = 0x2DE45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DE464u);
        ctx->pc = 0x2DE460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE45Cu;
            // 0x2de460: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DE464u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DE464u; }
            if (ctx->pc != 0x2DE464u) { return; }
        }
        }
    }
    ctx->pc = 0x2DE464u;
label_2de464:
    // 0x2de464: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2de464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_2de468:
    // 0x2de468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de46c:
    // 0x2de46c: 0x24633738  addiu       $v1, $v1, 0x3738
    ctx->pc = 0x2de46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14136));
label_2de470:
    // 0x2de470: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2de470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_2de474:
    // 0x2de474: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2de474u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2de478:
    // 0x2de478: 0x12e20005  beq         $s7, $v0, . + 4 + (0x5 << 2)
label_2de47c:
    if (ctx->pc == 0x2DE47Cu) {
        ctx->pc = 0x2DE47Cu;
            // 0x2de47c: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2DE480u;
        goto label_2de480;
    }
    ctx->pc = 0x2DE478u;
    {
        const bool branch_taken_0x2de478 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE478u;
            // 0x2de47c: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de478) {
            ctx->pc = 0x2DE490u;
            goto label_2de490;
        }
    }
    ctx->pc = 0x2DE480u;
label_2de480:
    // 0x2de480: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2de480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_2de484:
    // 0x2de484: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2de484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2de488:
    // 0x2de488: 0xac540570  sw          $s4, 0x570($v0)
    ctx->pc = 0x2de488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1392), GPR_U32(ctx, 20));
label_2de48c:
    // 0x2de48c: 0xac5e0578  sw          $fp, 0x578($v0)
    ctx->pc = 0x2de48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1400), GPR_U32(ctx, 30));
label_2de490:
    // 0x2de490: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2de490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_2de494:
    // 0x2de494: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de498:
    // 0x2de498: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2de498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2de49c:
    // 0x2de49c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2de49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2de4a0:
    // 0x2de4a0: 0xac510574  sw          $s1, 0x574($v0)
    ctx->pc = 0x2de4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1396), GPR_U32(ctx, 17));
label_2de4a4:
    // 0x2de4a4: 0xac54057c  sw          $s4, 0x57C($v0)
    ctx->pc = 0x2de4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1404), GPR_U32(ctx, 20));
label_2de4a8:
    // 0x2de4a8: 0x8fa70160  lw          $a3, 0x160($sp)
    ctx->pc = 0x2de4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2de4ac:
    // 0x2de4ac: 0xc0a92c8  jal         func_2A4B20
label_2de4b0:
    if (ctx->pc == 0x2DE4B0u) {
        ctx->pc = 0x2DE4B0u;
            // 0x2de4b0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2DE4B4u;
        goto label_2de4b4;
    }
    ctx->pc = 0x2DE4ACu;
    SET_GPR_U32(ctx, 31, 0x2DE4B4u);
    ctx->pc = 0x2DE4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE4ACu;
            // 0x2de4b0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B20u;
    if (runtime->hasFunction(0x2A4B20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE4B4u; }
        if (ctx->pc != 0x2DE4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4B20_0x2a4b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE4B4u; }
        if (ctx->pc != 0x2DE4B4u) { return; }
    }
    ctx->pc = 0x2DE4B4u;
label_2de4b4:
    // 0x2de4b4: 0x10000064  b           . + 4 + (0x64 << 2)
label_2de4b8:
    if (ctx->pc == 0x2DE4B8u) {
        ctx->pc = 0x2DE4BCu;
        goto label_2de4bc;
    }
    ctx->pc = 0x2DE4B4u;
    {
        const bool branch_taken_0x2de4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de4b4) {
            ctx->pc = 0x2DE648u;
            goto label_2de648;
        }
    }
    ctx->pc = 0x2DE4BCu;
label_2de4bc:
    // 0x2de4bc: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2de4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_2de4c0:
    // 0x2de4c0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2de4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2de4c4:
    // 0x2de4c4: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x2de4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2de4c8:
    // 0x2de4c8: 0x244236c0  addiu       $v0, $v0, 0x36C0
    ctx->pc = 0x2de4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14016));
label_2de4cc:
    // 0x2de4cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2de4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2de4d0:
    // 0x2de4d0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2de4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2de4d4:
    // 0x2de4d4: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x2de4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_2de4d8:
    // 0x2de4d8: 0xc04a508  jal         func_129420
label_2de4dc:
    if (ctx->pc == 0x2DE4DCu) {
        ctx->pc = 0x2DE4DCu;
            // 0x2de4dc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2DE4E0u;
        goto label_2de4e0;
    }
    ctx->pc = 0x2DE4D8u;
    SET_GPR_U32(ctx, 31, 0x2DE4E0u);
    ctx->pc = 0x2DE4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE4D8u;
            // 0x2de4dc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE4E0u; }
        if (ctx->pc != 0x2DE4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE4E0u; }
        if (ctx->pc != 0x2DE4E0u) { return; }
    }
    ctx->pc = 0x2DE4E0u;
label_2de4e0:
    // 0x2de4e0: 0x260202c0  addiu       $v0, $s0, 0x2C0
    ctx->pc = 0x2de4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_2de4e4:
    // 0x2de4e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2de4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2de4e8:
    // 0x2de4e8: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x2de4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_2de4ec:
    // 0x2de4ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2de4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2de4f0:
    // 0x2de4f0: 0x26020890  addiu       $v0, $s0, 0x890
    ctx->pc = 0x2de4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_2de4f4:
    // 0x2de4f4: 0xc0a9308  jal         func_2A4C20
label_2de4f8:
    if (ctx->pc == 0x2DE4F8u) {
        ctx->pc = 0x2DE4F8u;
            // 0x2de4f8: 0xafa20138  sw          $v0, 0x138($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
        ctx->pc = 0x2DE4FCu;
        goto label_2de4fc;
    }
    ctx->pc = 0x2DE4F4u;
    SET_GPR_U32(ctx, 31, 0x2DE4FCu);
    ctx->pc = 0x2DE4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE4F4u;
            // 0x2de4f8: 0xafa20138  sw          $v0, 0x138($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4C20u;
    if (runtime->hasFunction(0x2A4C20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE4FCu; }
        if (ctx->pc != 0x2DE4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4C20_0x2a4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE4FCu; }
        if (ctx->pc != 0x2DE4FCu) { return; }
    }
    ctx->pc = 0x2DE4FCu;
label_2de4fc:
    // 0x2de4fc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2de4fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2de500:
    // 0x2de500: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de504:
    // 0x2de504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de508:
    // 0x2de508: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2de508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2de50c:
    // 0x2de50c: 0x320f809  jalr        $t9
label_2de510:
    if (ctx->pc == 0x2DE510u) {
        ctx->pc = 0x2DE510u;
            // 0x2de510: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2DE514u;
        goto label_2de514;
    }
    ctx->pc = 0x2DE50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DE514u);
        ctx->pc = 0x2DE510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE50Cu;
            // 0x2de510: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DE514u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DE514u; }
            if (ctx->pc != 0x2DE514u) { return; }
        }
        }
    }
    ctx->pc = 0x2DE514u;
label_2de514:
    // 0x2de514: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2de514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_2de518:
    // 0x2de518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de51c:
    // 0x2de51c: 0x24633738  addiu       $v1, $v1, 0x3738
    ctx->pc = 0x2de51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14136));
label_2de520:
    // 0x2de520: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2de520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_2de524:
    // 0x2de524: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2de524u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2de528:
    // 0x2de528: 0x12e20005  beq         $s7, $v0, . + 4 + (0x5 << 2)
label_2de52c:
    if (ctx->pc == 0x2DE52Cu) {
        ctx->pc = 0x2DE52Cu;
            // 0x2de52c: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2DE530u;
        goto label_2de530;
    }
    ctx->pc = 0x2DE528u;
    {
        const bool branch_taken_0x2de528 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE528u;
            // 0x2de52c: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de528) {
            ctx->pc = 0x2DE540u;
            goto label_2de540;
        }
    }
    ctx->pc = 0x2DE530u;
label_2de530:
    // 0x2de530: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2de530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_2de534:
    // 0x2de534: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2de534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2de538:
    // 0x2de538: 0xac540570  sw          $s4, 0x570($v0)
    ctx->pc = 0x2de538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1392), GPR_U32(ctx, 20));
label_2de53c:
    // 0x2de53c: 0xac5e0578  sw          $fp, 0x578($v0)
    ctx->pc = 0x2de53cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1400), GPR_U32(ctx, 30));
label_2de540:
    // 0x2de540: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2de540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_2de544:
    // 0x2de544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de548:
    // 0x2de548: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2de548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2de54c:
    // 0x2de54c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2de54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2de550:
    // 0x2de550: 0xac510574  sw          $s1, 0x574($v0)
    ctx->pc = 0x2de550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1396), GPR_U32(ctx, 17));
label_2de554:
    // 0x2de554: 0xac54057c  sw          $s4, 0x57C($v0)
    ctx->pc = 0x2de554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1404), GPR_U32(ctx, 20));
label_2de558:
    // 0x2de558: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x2de558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_2de55c:
    // 0x2de55c: 0xc0a92c8  jal         func_2A4B20
label_2de560:
    if (ctx->pc == 0x2DE560u) {
        ctx->pc = 0x2DE560u;
            // 0x2de560: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2DE564u;
        goto label_2de564;
    }
    ctx->pc = 0x2DE55Cu;
    SET_GPR_U32(ctx, 31, 0x2DE564u);
    ctx->pc = 0x2DE560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE55Cu;
            // 0x2de560: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B20u;
    if (runtime->hasFunction(0x2A4B20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE564u; }
        if (ctx->pc != 0x2DE564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4B20_0x2a4b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE564u; }
        if (ctx->pc != 0x2DE564u) { return; }
    }
    ctx->pc = 0x2DE564u;
label_2de564:
    // 0x2de564: 0x10000038  b           . + 4 + (0x38 << 2)
label_2de568:
    if (ctx->pc == 0x2DE568u) {
        ctx->pc = 0x2DE56Cu;
        goto label_2de56c;
    }
    ctx->pc = 0x2DE564u;
    {
        const bool branch_taken_0x2de564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de564) {
            ctx->pc = 0x2DE648u;
            goto label_2de648;
        }
    }
    ctx->pc = 0x2DE56Cu;
label_2de56c:
    // 0x2de56c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2de56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2de570:
    // 0x2de570: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2de570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2de574:
    // 0x2de574: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2de574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2de578:
    // 0x2de578: 0x24423620  addiu       $v0, $v0, 0x3620
    ctx->pc = 0x2de578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
label_2de57c:
    // 0x2de57c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2de57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2de580:
    // 0x2de580: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2de580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2de584:
    // 0x2de584: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2de584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2de588:
    // 0x2de588: 0xc04a508  jal         func_129420
label_2de58c:
    if (ctx->pc == 0x2DE58Cu) {
        ctx->pc = 0x2DE58Cu;
            // 0x2de58c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2DE590u;
        goto label_2de590;
    }
    ctx->pc = 0x2DE588u;
    SET_GPR_U32(ctx, 31, 0x2DE590u);
    ctx->pc = 0x2DE58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE588u;
            // 0x2de58c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE590u; }
        if (ctx->pc != 0x2DE590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE590u; }
        if (ctx->pc != 0x2DE590u) { return; }
    }
    ctx->pc = 0x2DE590u;
label_2de590:
    // 0x2de590: 0x26020db0  addiu       $v0, $s0, 0xDB0
    ctx->pc = 0x2de590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3504));
label_2de594:
    // 0x2de594: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2de594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2de598:
    // 0x2de598: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2de598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_2de59c:
    // 0x2de59c: 0xc0a9308  jal         func_2A4C20
label_2de5a0:
    if (ctx->pc == 0x2DE5A0u) {
        ctx->pc = 0x2DE5A0u;
            // 0x2de5a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DE5A4u;
        goto label_2de5a4;
    }
    ctx->pc = 0x2DE59Cu;
    SET_GPR_U32(ctx, 31, 0x2DE5A4u);
    ctx->pc = 0x2DE5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE59Cu;
            // 0x2de5a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4C20u;
    if (runtime->hasFunction(0x2A4C20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE5A4u; }
        if (ctx->pc != 0x2DE5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4C20_0x2a4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE5A4u; }
        if (ctx->pc != 0x2DE5A4u) { return; }
    }
    ctx->pc = 0x2DE5A4u;
label_2de5a4:
    // 0x2de5a4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2de5a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2de5a8:
    // 0x2de5a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de5a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de5ac:
    // 0x2de5ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de5b0:
    // 0x2de5b0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2de5b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2de5b4:
    // 0x2de5b4: 0x320f809  jalr        $t9
label_2de5b8:
    if (ctx->pc == 0x2DE5B8u) {
        ctx->pc = 0x2DE5B8u;
            // 0x2de5b8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2DE5BCu;
        goto label_2de5bc;
    }
    ctx->pc = 0x2DE5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DE5BCu);
        ctx->pc = 0x2DE5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE5B4u;
            // 0x2de5b8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DE5BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DE5BCu; }
            if (ctx->pc != 0x2DE5BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2DE5BCu;
label_2de5bc:
    // 0x2de5bc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2de5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_2de5c0:
    // 0x2de5c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de5c4:
    // 0x2de5c4: 0x24633738  addiu       $v1, $v1, 0x3738
    ctx->pc = 0x2de5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14136));
label_2de5c8:
    // 0x2de5c8: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2de5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_2de5cc:
    // 0x2de5cc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2de5ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2de5d0:
    // 0x2de5d0: 0x12e20005  beq         $s7, $v0, . + 4 + (0x5 << 2)
label_2de5d4:
    if (ctx->pc == 0x2DE5D4u) {
        ctx->pc = 0x2DE5D4u;
            // 0x2de5d4: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2DE5D8u;
        goto label_2de5d8;
    }
    ctx->pc = 0x2DE5D0u;
    {
        const bool branch_taken_0x2de5d0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE5D0u;
            // 0x2de5d4: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5d0) {
            ctx->pc = 0x2DE5E8u;
            goto label_2de5e8;
        }
    }
    ctx->pc = 0x2DE5D8u;
label_2de5d8:
    // 0x2de5d8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2de5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_2de5dc:
    // 0x2de5dc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2de5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2de5e0:
    // 0x2de5e0: 0xac540570  sw          $s4, 0x570($v0)
    ctx->pc = 0x2de5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1392), GPR_U32(ctx, 20));
label_2de5e4:
    // 0x2de5e4: 0xac5e0578  sw          $fp, 0x578($v0)
    ctx->pc = 0x2de5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1400), GPR_U32(ctx, 30));
label_2de5e8:
    // 0x2de5e8: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x2de5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_2de5ec:
    // 0x2de5ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2de5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2de5f0:
    // 0x2de5f0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2de5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2de5f4:
    // 0x2de5f4: 0xac710574  sw          $s1, 0x574($v1)
    ctx->pc = 0x2de5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1396), GPR_U32(ctx, 17));
label_2de5f8:
    // 0x2de5f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2de5f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de5fc:
    // 0x2de5fc: 0xac74057c  sw          $s4, 0x57C($v1)
    ctx->pc = 0x2de5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1404), GPR_U32(ctx, 20));
label_2de600:
    // 0x2de600: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x2de600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de604:
    // 0x2de604: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2de604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de608:
    // 0x2de608: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_2de60c:
    if (ctx->pc == 0x2DE60Cu) {
        ctx->pc = 0x2DE60Cu;
            // 0x2de60c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2DE610u;
        goto label_2de610;
    }
    ctx->pc = 0x2DE608u;
    {
        const bool branch_taken_0x2de608 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de608) {
            ctx->pc = 0x2DE60Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE608u;
            // 0x2de60c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE624u;
            goto label_2de624;
        }
    }
    ctx->pc = 0x2DE610u;
label_2de610:
    // 0x2de610: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2de610u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2de614:
    // 0x2de614: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2de614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_2de618:
    // 0x2de618: 0x10000008  b           . + 4 + (0x8 << 2)
label_2de61c:
    if (ctx->pc == 0x2DE61Cu) {
        ctx->pc = 0x2DE61Cu;
            // 0x2de61c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DE620u;
        goto label_2de620;
    }
    ctx->pc = 0x2DE618u;
    {
        const bool branch_taken_0x2de618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE618u;
            // 0x2de61c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de618) {
            ctx->pc = 0x2DE63Cu;
            goto label_2de63c;
        }
    }
    ctx->pc = 0x2DE620u;
label_2de620:
    // 0x2de620: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2de620u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2de624:
    // 0x2de624: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2de624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2de628:
    // 0x2de628: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2de628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2de62c:
    // 0x2de62c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2de62cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_2de630:
    // 0x2de630: 0x0  nop
    ctx->pc = 0x2de630u;
    // NOP
label_2de634:
    // 0x2de634: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2de634u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_2de638:
    // 0x2de638: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2de638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2de63c:
    // 0x2de63c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de640:
    // 0x2de640: 0xc0a92c8  jal         func_2A4B20
label_2de644:
    if (ctx->pc == 0x2DE644u) {
        ctx->pc = 0x2DE644u;
            // 0x2de644: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2DE648u;
        goto label_2de648;
    }
    ctx->pc = 0x2DE640u;
    SET_GPR_U32(ctx, 31, 0x2DE648u);
    ctx->pc = 0x2DE644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE640u;
            // 0x2de644: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B20u;
    if (runtime->hasFunction(0x2A4B20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE648u; }
        if (ctx->pc != 0x2DE648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4B20_0x2a4b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE648u; }
        if (ctx->pc != 0x2DE648u) { return; }
    }
    ctx->pc = 0x2DE648u;
label_2de648:
    // 0x2de648: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2de648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2de64c:
    // 0x2de64c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2de64cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2de650:
    // 0x2de650: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2de650u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2de654:
    // 0x2de654: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2de654u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2de658:
    // 0x2de658: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2de658u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2de65c:
    // 0x2de65c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2de65cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2de660:
    // 0x2de660: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2de660u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2de664:
    // 0x2de664: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2de664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2de668:
    // 0x2de668: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2de668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2de66c:
    // 0x2de66c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2de670:
    // 0x2de670: 0x3e00008  jr          $ra
label_2de674:
    if (ctx->pc == 0x2DE674u) {
        ctx->pc = 0x2DE674u;
            // 0x2de674: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x2DE678u;
        goto label_2de678;
    }
    ctx->pc = 0x2DE670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE670u;
            // 0x2de674: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE678u;
label_2de678:
    // 0x2de678: 0x0  nop
    ctx->pc = 0x2de678u;
    // NOP
label_2de67c:
    // 0x2de67c: 0x0  nop
    ctx->pc = 0x2de67cu;
    // NOP
label_2de680:
    // 0x2de680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2de684:
    // 0x2de684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2de688:
    // 0x2de688: 0x90830565  lbu         $v1, 0x565($a0)
    ctx->pc = 0x2de688u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1381)));
label_2de68c:
    // 0x2de68c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_2de690:
    if (ctx->pc == 0x2DE690u) {
        ctx->pc = 0x2DE690u;
            // 0x2de690: 0x8c85057c  lw          $a1, 0x57C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1404)));
        ctx->pc = 0x2DE694u;
        goto label_2de694;
    }
    ctx->pc = 0x2DE68Cu;
    {
        const bool branch_taken_0x2de68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de68c) {
            ctx->pc = 0x2DE690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE68Cu;
            // 0x2de690: 0x8c85057c  lw          $a1, 0x57C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1404)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE69Cu;
            goto label_2de69c;
        }
    }
    ctx->pc = 0x2DE694u;
label_2de694:
    // 0x2de694: 0xa0800565  sb          $zero, 0x565($a0)
    ctx->pc = 0x2de694u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1381), (uint8_t)GPR_U32(ctx, 0));
label_2de698:
    // 0x2de698: 0x8c85057c  lw          $a1, 0x57C($a0)
    ctx->pc = 0x2de698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1404)));
label_2de69c:
    // 0x2de69c: 0x8c830570  lw          $v1, 0x570($a0)
    ctx->pc = 0x2de69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1392)));
label_2de6a0:
    // 0x2de6a0: 0x8c860578  lw          $a2, 0x578($a0)
    ctx->pc = 0x2de6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1400)));
label_2de6a4:
    // 0x2de6a4: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x2de6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2de6a8:
    // 0x2de6a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2de6ac:
    // 0x2de6ac: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x2de6acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2de6b0:
    // 0x2de6b0: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_2de6b4:
    if (ctx->pc == 0x2DE6B4u) {
        ctx->pc = 0x2DE6B4u;
            // 0x2de6b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2DE6B8u;
        goto label_2de6b8;
    }
    ctx->pc = 0x2DE6B0u;
    {
        const bool branch_taken_0x2de6b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de6b0) {
            ctx->pc = 0x2DE6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE6B0u;
            // 0x2de6b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE6D4u;
            goto label_2de6d4;
        }
    }
    ctx->pc = 0x2DE6B8u;
label_2de6b8:
    // 0x2de6b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2de6b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2de6bc:
    // 0x2de6bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2de6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2de6c0:
    // 0x2de6c0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2de6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2de6c4:
    // 0x2de6c4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2de6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2de6c8:
    // 0x2de6c8: 0x320f809  jalr        $t9
label_2de6cc:
    if (ctx->pc == 0x2DE6CCu) {
        ctx->pc = 0x2DE6CCu;
            // 0x2de6cc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DE6D0u;
        goto label_2de6d0;
    }
    ctx->pc = 0x2DE6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DE6D0u);
        ctx->pc = 0x2DE6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE6C8u;
            // 0x2de6cc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DE6D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DE6D0u; }
            if (ctx->pc != 0x2DE6D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2DE6D0u;
label_2de6d0:
    // 0x2de6d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2de6d4:
    // 0x2de6d4: 0x3e00008  jr          $ra
label_2de6d8:
    if (ctx->pc == 0x2DE6D8u) {
        ctx->pc = 0x2DE6D8u;
            // 0x2de6d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2DE6DCu;
        goto label_2de6dc;
    }
    ctx->pc = 0x2DE6D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE6D4u;
            // 0x2de6d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE6DCu;
label_2de6dc:
    // 0x2de6dc: 0x0  nop
    ctx->pc = 0x2de6dcu;
    // NOP
}
