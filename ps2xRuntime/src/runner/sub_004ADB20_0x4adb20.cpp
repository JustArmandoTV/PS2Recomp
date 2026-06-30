#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ADB20
// Address: 0x4adb20 - 0x4afff0
void sub_004ADB20_0x4adb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADB20_0x4adb20");
#endif

    switch (ctx->pc) {
        case 0x4adb20u: goto label_4adb20;
        case 0x4adb24u: goto label_4adb24;
        case 0x4adb28u: goto label_4adb28;
        case 0x4adb2cu: goto label_4adb2c;
        case 0x4adb30u: goto label_4adb30;
        case 0x4adb34u: goto label_4adb34;
        case 0x4adb38u: goto label_4adb38;
        case 0x4adb3cu: goto label_4adb3c;
        case 0x4adb40u: goto label_4adb40;
        case 0x4adb44u: goto label_4adb44;
        case 0x4adb48u: goto label_4adb48;
        case 0x4adb4cu: goto label_4adb4c;
        case 0x4adb50u: goto label_4adb50;
        case 0x4adb54u: goto label_4adb54;
        case 0x4adb58u: goto label_4adb58;
        case 0x4adb5cu: goto label_4adb5c;
        case 0x4adb60u: goto label_4adb60;
        case 0x4adb64u: goto label_4adb64;
        case 0x4adb68u: goto label_4adb68;
        case 0x4adb6cu: goto label_4adb6c;
        case 0x4adb70u: goto label_4adb70;
        case 0x4adb74u: goto label_4adb74;
        case 0x4adb78u: goto label_4adb78;
        case 0x4adb7cu: goto label_4adb7c;
        case 0x4adb80u: goto label_4adb80;
        case 0x4adb84u: goto label_4adb84;
        case 0x4adb88u: goto label_4adb88;
        case 0x4adb8cu: goto label_4adb8c;
        case 0x4adb90u: goto label_4adb90;
        case 0x4adb94u: goto label_4adb94;
        case 0x4adb98u: goto label_4adb98;
        case 0x4adb9cu: goto label_4adb9c;
        case 0x4adba0u: goto label_4adba0;
        case 0x4adba4u: goto label_4adba4;
        case 0x4adba8u: goto label_4adba8;
        case 0x4adbacu: goto label_4adbac;
        case 0x4adbb0u: goto label_4adbb0;
        case 0x4adbb4u: goto label_4adbb4;
        case 0x4adbb8u: goto label_4adbb8;
        case 0x4adbbcu: goto label_4adbbc;
        case 0x4adbc0u: goto label_4adbc0;
        case 0x4adbc4u: goto label_4adbc4;
        case 0x4adbc8u: goto label_4adbc8;
        case 0x4adbccu: goto label_4adbcc;
        case 0x4adbd0u: goto label_4adbd0;
        case 0x4adbd4u: goto label_4adbd4;
        case 0x4adbd8u: goto label_4adbd8;
        case 0x4adbdcu: goto label_4adbdc;
        case 0x4adbe0u: goto label_4adbe0;
        case 0x4adbe4u: goto label_4adbe4;
        case 0x4adbe8u: goto label_4adbe8;
        case 0x4adbecu: goto label_4adbec;
        case 0x4adbf0u: goto label_4adbf0;
        case 0x4adbf4u: goto label_4adbf4;
        case 0x4adbf8u: goto label_4adbf8;
        case 0x4adbfcu: goto label_4adbfc;
        case 0x4adc00u: goto label_4adc00;
        case 0x4adc04u: goto label_4adc04;
        case 0x4adc08u: goto label_4adc08;
        case 0x4adc0cu: goto label_4adc0c;
        case 0x4adc10u: goto label_4adc10;
        case 0x4adc14u: goto label_4adc14;
        case 0x4adc18u: goto label_4adc18;
        case 0x4adc1cu: goto label_4adc1c;
        case 0x4adc20u: goto label_4adc20;
        case 0x4adc24u: goto label_4adc24;
        case 0x4adc28u: goto label_4adc28;
        case 0x4adc2cu: goto label_4adc2c;
        case 0x4adc30u: goto label_4adc30;
        case 0x4adc34u: goto label_4adc34;
        case 0x4adc38u: goto label_4adc38;
        case 0x4adc3cu: goto label_4adc3c;
        case 0x4adc40u: goto label_4adc40;
        case 0x4adc44u: goto label_4adc44;
        case 0x4adc48u: goto label_4adc48;
        case 0x4adc4cu: goto label_4adc4c;
        case 0x4adc50u: goto label_4adc50;
        case 0x4adc54u: goto label_4adc54;
        case 0x4adc58u: goto label_4adc58;
        case 0x4adc5cu: goto label_4adc5c;
        case 0x4adc60u: goto label_4adc60;
        case 0x4adc64u: goto label_4adc64;
        case 0x4adc68u: goto label_4adc68;
        case 0x4adc6cu: goto label_4adc6c;
        case 0x4adc70u: goto label_4adc70;
        case 0x4adc74u: goto label_4adc74;
        case 0x4adc78u: goto label_4adc78;
        case 0x4adc7cu: goto label_4adc7c;
        case 0x4adc80u: goto label_4adc80;
        case 0x4adc84u: goto label_4adc84;
        case 0x4adc88u: goto label_4adc88;
        case 0x4adc8cu: goto label_4adc8c;
        case 0x4adc90u: goto label_4adc90;
        case 0x4adc94u: goto label_4adc94;
        case 0x4adc98u: goto label_4adc98;
        case 0x4adc9cu: goto label_4adc9c;
        case 0x4adca0u: goto label_4adca0;
        case 0x4adca4u: goto label_4adca4;
        case 0x4adca8u: goto label_4adca8;
        case 0x4adcacu: goto label_4adcac;
        case 0x4adcb0u: goto label_4adcb0;
        case 0x4adcb4u: goto label_4adcb4;
        case 0x4adcb8u: goto label_4adcb8;
        case 0x4adcbcu: goto label_4adcbc;
        case 0x4adcc0u: goto label_4adcc0;
        case 0x4adcc4u: goto label_4adcc4;
        case 0x4adcc8u: goto label_4adcc8;
        case 0x4adcccu: goto label_4adccc;
        case 0x4adcd0u: goto label_4adcd0;
        case 0x4adcd4u: goto label_4adcd4;
        case 0x4adcd8u: goto label_4adcd8;
        case 0x4adcdcu: goto label_4adcdc;
        case 0x4adce0u: goto label_4adce0;
        case 0x4adce4u: goto label_4adce4;
        case 0x4adce8u: goto label_4adce8;
        case 0x4adcecu: goto label_4adcec;
        case 0x4adcf0u: goto label_4adcf0;
        case 0x4adcf4u: goto label_4adcf4;
        case 0x4adcf8u: goto label_4adcf8;
        case 0x4adcfcu: goto label_4adcfc;
        case 0x4add00u: goto label_4add00;
        case 0x4add04u: goto label_4add04;
        case 0x4add08u: goto label_4add08;
        case 0x4add0cu: goto label_4add0c;
        case 0x4add10u: goto label_4add10;
        case 0x4add14u: goto label_4add14;
        case 0x4add18u: goto label_4add18;
        case 0x4add1cu: goto label_4add1c;
        case 0x4add20u: goto label_4add20;
        case 0x4add24u: goto label_4add24;
        case 0x4add28u: goto label_4add28;
        case 0x4add2cu: goto label_4add2c;
        case 0x4add30u: goto label_4add30;
        case 0x4add34u: goto label_4add34;
        case 0x4add38u: goto label_4add38;
        case 0x4add3cu: goto label_4add3c;
        case 0x4add40u: goto label_4add40;
        case 0x4add44u: goto label_4add44;
        case 0x4add48u: goto label_4add48;
        case 0x4add4cu: goto label_4add4c;
        case 0x4add50u: goto label_4add50;
        case 0x4add54u: goto label_4add54;
        case 0x4add58u: goto label_4add58;
        case 0x4add5cu: goto label_4add5c;
        case 0x4add60u: goto label_4add60;
        case 0x4add64u: goto label_4add64;
        case 0x4add68u: goto label_4add68;
        case 0x4add6cu: goto label_4add6c;
        case 0x4add70u: goto label_4add70;
        case 0x4add74u: goto label_4add74;
        case 0x4add78u: goto label_4add78;
        case 0x4add7cu: goto label_4add7c;
        case 0x4add80u: goto label_4add80;
        case 0x4add84u: goto label_4add84;
        case 0x4add88u: goto label_4add88;
        case 0x4add8cu: goto label_4add8c;
        case 0x4add90u: goto label_4add90;
        case 0x4add94u: goto label_4add94;
        case 0x4add98u: goto label_4add98;
        case 0x4add9cu: goto label_4add9c;
        case 0x4adda0u: goto label_4adda0;
        case 0x4adda4u: goto label_4adda4;
        case 0x4adda8u: goto label_4adda8;
        case 0x4addacu: goto label_4addac;
        case 0x4addb0u: goto label_4addb0;
        case 0x4addb4u: goto label_4addb4;
        case 0x4addb8u: goto label_4addb8;
        case 0x4addbcu: goto label_4addbc;
        case 0x4addc0u: goto label_4addc0;
        case 0x4addc4u: goto label_4addc4;
        case 0x4addc8u: goto label_4addc8;
        case 0x4addccu: goto label_4addcc;
        case 0x4addd0u: goto label_4addd0;
        case 0x4addd4u: goto label_4addd4;
        case 0x4addd8u: goto label_4addd8;
        case 0x4adddcu: goto label_4adddc;
        case 0x4adde0u: goto label_4adde0;
        case 0x4adde4u: goto label_4adde4;
        case 0x4adde8u: goto label_4adde8;
        case 0x4addecu: goto label_4addec;
        case 0x4addf0u: goto label_4addf0;
        case 0x4addf4u: goto label_4addf4;
        case 0x4addf8u: goto label_4addf8;
        case 0x4addfcu: goto label_4addfc;
        case 0x4ade00u: goto label_4ade00;
        case 0x4ade04u: goto label_4ade04;
        case 0x4ade08u: goto label_4ade08;
        case 0x4ade0cu: goto label_4ade0c;
        case 0x4ade10u: goto label_4ade10;
        case 0x4ade14u: goto label_4ade14;
        case 0x4ade18u: goto label_4ade18;
        case 0x4ade1cu: goto label_4ade1c;
        case 0x4ade20u: goto label_4ade20;
        case 0x4ade24u: goto label_4ade24;
        case 0x4ade28u: goto label_4ade28;
        case 0x4ade2cu: goto label_4ade2c;
        case 0x4ade30u: goto label_4ade30;
        case 0x4ade34u: goto label_4ade34;
        case 0x4ade38u: goto label_4ade38;
        case 0x4ade3cu: goto label_4ade3c;
        case 0x4ade40u: goto label_4ade40;
        case 0x4ade44u: goto label_4ade44;
        case 0x4ade48u: goto label_4ade48;
        case 0x4ade4cu: goto label_4ade4c;
        case 0x4ade50u: goto label_4ade50;
        case 0x4ade54u: goto label_4ade54;
        case 0x4ade58u: goto label_4ade58;
        case 0x4ade5cu: goto label_4ade5c;
        case 0x4ade60u: goto label_4ade60;
        case 0x4ade64u: goto label_4ade64;
        case 0x4ade68u: goto label_4ade68;
        case 0x4ade6cu: goto label_4ade6c;
        case 0x4ade70u: goto label_4ade70;
        case 0x4ade74u: goto label_4ade74;
        case 0x4ade78u: goto label_4ade78;
        case 0x4ade7cu: goto label_4ade7c;
        case 0x4ade80u: goto label_4ade80;
        case 0x4ade84u: goto label_4ade84;
        case 0x4ade88u: goto label_4ade88;
        case 0x4ade8cu: goto label_4ade8c;
        case 0x4ade90u: goto label_4ade90;
        case 0x4ade94u: goto label_4ade94;
        case 0x4ade98u: goto label_4ade98;
        case 0x4ade9cu: goto label_4ade9c;
        case 0x4adea0u: goto label_4adea0;
        case 0x4adea4u: goto label_4adea4;
        case 0x4adea8u: goto label_4adea8;
        case 0x4adeacu: goto label_4adeac;
        case 0x4adeb0u: goto label_4adeb0;
        case 0x4adeb4u: goto label_4adeb4;
        case 0x4adeb8u: goto label_4adeb8;
        case 0x4adebcu: goto label_4adebc;
        case 0x4adec0u: goto label_4adec0;
        case 0x4adec4u: goto label_4adec4;
        case 0x4adec8u: goto label_4adec8;
        case 0x4adeccu: goto label_4adecc;
        case 0x4aded0u: goto label_4aded0;
        case 0x4aded4u: goto label_4aded4;
        case 0x4aded8u: goto label_4aded8;
        case 0x4adedcu: goto label_4adedc;
        case 0x4adee0u: goto label_4adee0;
        case 0x4adee4u: goto label_4adee4;
        case 0x4adee8u: goto label_4adee8;
        case 0x4adeecu: goto label_4adeec;
        case 0x4adef0u: goto label_4adef0;
        case 0x4adef4u: goto label_4adef4;
        case 0x4adef8u: goto label_4adef8;
        case 0x4adefcu: goto label_4adefc;
        case 0x4adf00u: goto label_4adf00;
        case 0x4adf04u: goto label_4adf04;
        case 0x4adf08u: goto label_4adf08;
        case 0x4adf0cu: goto label_4adf0c;
        case 0x4adf10u: goto label_4adf10;
        case 0x4adf14u: goto label_4adf14;
        case 0x4adf18u: goto label_4adf18;
        case 0x4adf1cu: goto label_4adf1c;
        case 0x4adf20u: goto label_4adf20;
        case 0x4adf24u: goto label_4adf24;
        case 0x4adf28u: goto label_4adf28;
        case 0x4adf2cu: goto label_4adf2c;
        case 0x4adf30u: goto label_4adf30;
        case 0x4adf34u: goto label_4adf34;
        case 0x4adf38u: goto label_4adf38;
        case 0x4adf3cu: goto label_4adf3c;
        case 0x4adf40u: goto label_4adf40;
        case 0x4adf44u: goto label_4adf44;
        case 0x4adf48u: goto label_4adf48;
        case 0x4adf4cu: goto label_4adf4c;
        case 0x4adf50u: goto label_4adf50;
        case 0x4adf54u: goto label_4adf54;
        case 0x4adf58u: goto label_4adf58;
        case 0x4adf5cu: goto label_4adf5c;
        case 0x4adf60u: goto label_4adf60;
        case 0x4adf64u: goto label_4adf64;
        case 0x4adf68u: goto label_4adf68;
        case 0x4adf6cu: goto label_4adf6c;
        case 0x4adf70u: goto label_4adf70;
        case 0x4adf74u: goto label_4adf74;
        case 0x4adf78u: goto label_4adf78;
        case 0x4adf7cu: goto label_4adf7c;
        case 0x4adf80u: goto label_4adf80;
        case 0x4adf84u: goto label_4adf84;
        case 0x4adf88u: goto label_4adf88;
        case 0x4adf8cu: goto label_4adf8c;
        case 0x4adf90u: goto label_4adf90;
        case 0x4adf94u: goto label_4adf94;
        case 0x4adf98u: goto label_4adf98;
        case 0x4adf9cu: goto label_4adf9c;
        case 0x4adfa0u: goto label_4adfa0;
        case 0x4adfa4u: goto label_4adfa4;
        case 0x4adfa8u: goto label_4adfa8;
        case 0x4adfacu: goto label_4adfac;
        case 0x4adfb0u: goto label_4adfb0;
        case 0x4adfb4u: goto label_4adfb4;
        case 0x4adfb8u: goto label_4adfb8;
        case 0x4adfbcu: goto label_4adfbc;
        case 0x4adfc0u: goto label_4adfc0;
        case 0x4adfc4u: goto label_4adfc4;
        case 0x4adfc8u: goto label_4adfc8;
        case 0x4adfccu: goto label_4adfcc;
        case 0x4adfd0u: goto label_4adfd0;
        case 0x4adfd4u: goto label_4adfd4;
        case 0x4adfd8u: goto label_4adfd8;
        case 0x4adfdcu: goto label_4adfdc;
        case 0x4adfe0u: goto label_4adfe0;
        case 0x4adfe4u: goto label_4adfe4;
        case 0x4adfe8u: goto label_4adfe8;
        case 0x4adfecu: goto label_4adfec;
        case 0x4adff0u: goto label_4adff0;
        case 0x4adff4u: goto label_4adff4;
        case 0x4adff8u: goto label_4adff8;
        case 0x4adffcu: goto label_4adffc;
        case 0x4ae000u: goto label_4ae000;
        case 0x4ae004u: goto label_4ae004;
        case 0x4ae008u: goto label_4ae008;
        case 0x4ae00cu: goto label_4ae00c;
        case 0x4ae010u: goto label_4ae010;
        case 0x4ae014u: goto label_4ae014;
        case 0x4ae018u: goto label_4ae018;
        case 0x4ae01cu: goto label_4ae01c;
        case 0x4ae020u: goto label_4ae020;
        case 0x4ae024u: goto label_4ae024;
        case 0x4ae028u: goto label_4ae028;
        case 0x4ae02cu: goto label_4ae02c;
        case 0x4ae030u: goto label_4ae030;
        case 0x4ae034u: goto label_4ae034;
        case 0x4ae038u: goto label_4ae038;
        case 0x4ae03cu: goto label_4ae03c;
        case 0x4ae040u: goto label_4ae040;
        case 0x4ae044u: goto label_4ae044;
        case 0x4ae048u: goto label_4ae048;
        case 0x4ae04cu: goto label_4ae04c;
        case 0x4ae050u: goto label_4ae050;
        case 0x4ae054u: goto label_4ae054;
        case 0x4ae058u: goto label_4ae058;
        case 0x4ae05cu: goto label_4ae05c;
        case 0x4ae060u: goto label_4ae060;
        case 0x4ae064u: goto label_4ae064;
        case 0x4ae068u: goto label_4ae068;
        case 0x4ae06cu: goto label_4ae06c;
        case 0x4ae070u: goto label_4ae070;
        case 0x4ae074u: goto label_4ae074;
        case 0x4ae078u: goto label_4ae078;
        case 0x4ae07cu: goto label_4ae07c;
        case 0x4ae080u: goto label_4ae080;
        case 0x4ae084u: goto label_4ae084;
        case 0x4ae088u: goto label_4ae088;
        case 0x4ae08cu: goto label_4ae08c;
        case 0x4ae090u: goto label_4ae090;
        case 0x4ae094u: goto label_4ae094;
        case 0x4ae098u: goto label_4ae098;
        case 0x4ae09cu: goto label_4ae09c;
        case 0x4ae0a0u: goto label_4ae0a0;
        case 0x4ae0a4u: goto label_4ae0a4;
        case 0x4ae0a8u: goto label_4ae0a8;
        case 0x4ae0acu: goto label_4ae0ac;
        case 0x4ae0b0u: goto label_4ae0b0;
        case 0x4ae0b4u: goto label_4ae0b4;
        case 0x4ae0b8u: goto label_4ae0b8;
        case 0x4ae0bcu: goto label_4ae0bc;
        case 0x4ae0c0u: goto label_4ae0c0;
        case 0x4ae0c4u: goto label_4ae0c4;
        case 0x4ae0c8u: goto label_4ae0c8;
        case 0x4ae0ccu: goto label_4ae0cc;
        case 0x4ae0d0u: goto label_4ae0d0;
        case 0x4ae0d4u: goto label_4ae0d4;
        case 0x4ae0d8u: goto label_4ae0d8;
        case 0x4ae0dcu: goto label_4ae0dc;
        case 0x4ae0e0u: goto label_4ae0e0;
        case 0x4ae0e4u: goto label_4ae0e4;
        case 0x4ae0e8u: goto label_4ae0e8;
        case 0x4ae0ecu: goto label_4ae0ec;
        case 0x4ae0f0u: goto label_4ae0f0;
        case 0x4ae0f4u: goto label_4ae0f4;
        case 0x4ae0f8u: goto label_4ae0f8;
        case 0x4ae0fcu: goto label_4ae0fc;
        case 0x4ae100u: goto label_4ae100;
        case 0x4ae104u: goto label_4ae104;
        case 0x4ae108u: goto label_4ae108;
        case 0x4ae10cu: goto label_4ae10c;
        case 0x4ae110u: goto label_4ae110;
        case 0x4ae114u: goto label_4ae114;
        case 0x4ae118u: goto label_4ae118;
        case 0x4ae11cu: goto label_4ae11c;
        case 0x4ae120u: goto label_4ae120;
        case 0x4ae124u: goto label_4ae124;
        case 0x4ae128u: goto label_4ae128;
        case 0x4ae12cu: goto label_4ae12c;
        case 0x4ae130u: goto label_4ae130;
        case 0x4ae134u: goto label_4ae134;
        case 0x4ae138u: goto label_4ae138;
        case 0x4ae13cu: goto label_4ae13c;
        case 0x4ae140u: goto label_4ae140;
        case 0x4ae144u: goto label_4ae144;
        case 0x4ae148u: goto label_4ae148;
        case 0x4ae14cu: goto label_4ae14c;
        case 0x4ae150u: goto label_4ae150;
        case 0x4ae154u: goto label_4ae154;
        case 0x4ae158u: goto label_4ae158;
        case 0x4ae15cu: goto label_4ae15c;
        case 0x4ae160u: goto label_4ae160;
        case 0x4ae164u: goto label_4ae164;
        case 0x4ae168u: goto label_4ae168;
        case 0x4ae16cu: goto label_4ae16c;
        case 0x4ae170u: goto label_4ae170;
        case 0x4ae174u: goto label_4ae174;
        case 0x4ae178u: goto label_4ae178;
        case 0x4ae17cu: goto label_4ae17c;
        case 0x4ae180u: goto label_4ae180;
        case 0x4ae184u: goto label_4ae184;
        case 0x4ae188u: goto label_4ae188;
        case 0x4ae18cu: goto label_4ae18c;
        case 0x4ae190u: goto label_4ae190;
        case 0x4ae194u: goto label_4ae194;
        case 0x4ae198u: goto label_4ae198;
        case 0x4ae19cu: goto label_4ae19c;
        case 0x4ae1a0u: goto label_4ae1a0;
        case 0x4ae1a4u: goto label_4ae1a4;
        case 0x4ae1a8u: goto label_4ae1a8;
        case 0x4ae1acu: goto label_4ae1ac;
        case 0x4ae1b0u: goto label_4ae1b0;
        case 0x4ae1b4u: goto label_4ae1b4;
        case 0x4ae1b8u: goto label_4ae1b8;
        case 0x4ae1bcu: goto label_4ae1bc;
        case 0x4ae1c0u: goto label_4ae1c0;
        case 0x4ae1c4u: goto label_4ae1c4;
        case 0x4ae1c8u: goto label_4ae1c8;
        case 0x4ae1ccu: goto label_4ae1cc;
        case 0x4ae1d0u: goto label_4ae1d0;
        case 0x4ae1d4u: goto label_4ae1d4;
        case 0x4ae1d8u: goto label_4ae1d8;
        case 0x4ae1dcu: goto label_4ae1dc;
        case 0x4ae1e0u: goto label_4ae1e0;
        case 0x4ae1e4u: goto label_4ae1e4;
        case 0x4ae1e8u: goto label_4ae1e8;
        case 0x4ae1ecu: goto label_4ae1ec;
        case 0x4ae1f0u: goto label_4ae1f0;
        case 0x4ae1f4u: goto label_4ae1f4;
        case 0x4ae1f8u: goto label_4ae1f8;
        case 0x4ae1fcu: goto label_4ae1fc;
        case 0x4ae200u: goto label_4ae200;
        case 0x4ae204u: goto label_4ae204;
        case 0x4ae208u: goto label_4ae208;
        case 0x4ae20cu: goto label_4ae20c;
        case 0x4ae210u: goto label_4ae210;
        case 0x4ae214u: goto label_4ae214;
        case 0x4ae218u: goto label_4ae218;
        case 0x4ae21cu: goto label_4ae21c;
        case 0x4ae220u: goto label_4ae220;
        case 0x4ae224u: goto label_4ae224;
        case 0x4ae228u: goto label_4ae228;
        case 0x4ae22cu: goto label_4ae22c;
        case 0x4ae230u: goto label_4ae230;
        case 0x4ae234u: goto label_4ae234;
        case 0x4ae238u: goto label_4ae238;
        case 0x4ae23cu: goto label_4ae23c;
        case 0x4ae240u: goto label_4ae240;
        case 0x4ae244u: goto label_4ae244;
        case 0x4ae248u: goto label_4ae248;
        case 0x4ae24cu: goto label_4ae24c;
        case 0x4ae250u: goto label_4ae250;
        case 0x4ae254u: goto label_4ae254;
        case 0x4ae258u: goto label_4ae258;
        case 0x4ae25cu: goto label_4ae25c;
        case 0x4ae260u: goto label_4ae260;
        case 0x4ae264u: goto label_4ae264;
        case 0x4ae268u: goto label_4ae268;
        case 0x4ae26cu: goto label_4ae26c;
        case 0x4ae270u: goto label_4ae270;
        case 0x4ae274u: goto label_4ae274;
        case 0x4ae278u: goto label_4ae278;
        case 0x4ae27cu: goto label_4ae27c;
        case 0x4ae280u: goto label_4ae280;
        case 0x4ae284u: goto label_4ae284;
        case 0x4ae288u: goto label_4ae288;
        case 0x4ae28cu: goto label_4ae28c;
        case 0x4ae290u: goto label_4ae290;
        case 0x4ae294u: goto label_4ae294;
        case 0x4ae298u: goto label_4ae298;
        case 0x4ae29cu: goto label_4ae29c;
        case 0x4ae2a0u: goto label_4ae2a0;
        case 0x4ae2a4u: goto label_4ae2a4;
        case 0x4ae2a8u: goto label_4ae2a8;
        case 0x4ae2acu: goto label_4ae2ac;
        case 0x4ae2b0u: goto label_4ae2b0;
        case 0x4ae2b4u: goto label_4ae2b4;
        case 0x4ae2b8u: goto label_4ae2b8;
        case 0x4ae2bcu: goto label_4ae2bc;
        case 0x4ae2c0u: goto label_4ae2c0;
        case 0x4ae2c4u: goto label_4ae2c4;
        case 0x4ae2c8u: goto label_4ae2c8;
        case 0x4ae2ccu: goto label_4ae2cc;
        case 0x4ae2d0u: goto label_4ae2d0;
        case 0x4ae2d4u: goto label_4ae2d4;
        case 0x4ae2d8u: goto label_4ae2d8;
        case 0x4ae2dcu: goto label_4ae2dc;
        case 0x4ae2e0u: goto label_4ae2e0;
        case 0x4ae2e4u: goto label_4ae2e4;
        case 0x4ae2e8u: goto label_4ae2e8;
        case 0x4ae2ecu: goto label_4ae2ec;
        case 0x4ae2f0u: goto label_4ae2f0;
        case 0x4ae2f4u: goto label_4ae2f4;
        case 0x4ae2f8u: goto label_4ae2f8;
        case 0x4ae2fcu: goto label_4ae2fc;
        case 0x4ae300u: goto label_4ae300;
        case 0x4ae304u: goto label_4ae304;
        case 0x4ae308u: goto label_4ae308;
        case 0x4ae30cu: goto label_4ae30c;
        case 0x4ae310u: goto label_4ae310;
        case 0x4ae314u: goto label_4ae314;
        case 0x4ae318u: goto label_4ae318;
        case 0x4ae31cu: goto label_4ae31c;
        case 0x4ae320u: goto label_4ae320;
        case 0x4ae324u: goto label_4ae324;
        case 0x4ae328u: goto label_4ae328;
        case 0x4ae32cu: goto label_4ae32c;
        case 0x4ae330u: goto label_4ae330;
        case 0x4ae334u: goto label_4ae334;
        case 0x4ae338u: goto label_4ae338;
        case 0x4ae33cu: goto label_4ae33c;
        case 0x4ae340u: goto label_4ae340;
        case 0x4ae344u: goto label_4ae344;
        case 0x4ae348u: goto label_4ae348;
        case 0x4ae34cu: goto label_4ae34c;
        case 0x4ae350u: goto label_4ae350;
        case 0x4ae354u: goto label_4ae354;
        case 0x4ae358u: goto label_4ae358;
        case 0x4ae35cu: goto label_4ae35c;
        case 0x4ae360u: goto label_4ae360;
        case 0x4ae364u: goto label_4ae364;
        case 0x4ae368u: goto label_4ae368;
        case 0x4ae36cu: goto label_4ae36c;
        case 0x4ae370u: goto label_4ae370;
        case 0x4ae374u: goto label_4ae374;
        case 0x4ae378u: goto label_4ae378;
        case 0x4ae37cu: goto label_4ae37c;
        case 0x4ae380u: goto label_4ae380;
        case 0x4ae384u: goto label_4ae384;
        case 0x4ae388u: goto label_4ae388;
        case 0x4ae38cu: goto label_4ae38c;
        case 0x4ae390u: goto label_4ae390;
        case 0x4ae394u: goto label_4ae394;
        case 0x4ae398u: goto label_4ae398;
        case 0x4ae39cu: goto label_4ae39c;
        case 0x4ae3a0u: goto label_4ae3a0;
        case 0x4ae3a4u: goto label_4ae3a4;
        case 0x4ae3a8u: goto label_4ae3a8;
        case 0x4ae3acu: goto label_4ae3ac;
        case 0x4ae3b0u: goto label_4ae3b0;
        case 0x4ae3b4u: goto label_4ae3b4;
        case 0x4ae3b8u: goto label_4ae3b8;
        case 0x4ae3bcu: goto label_4ae3bc;
        case 0x4ae3c0u: goto label_4ae3c0;
        case 0x4ae3c4u: goto label_4ae3c4;
        case 0x4ae3c8u: goto label_4ae3c8;
        case 0x4ae3ccu: goto label_4ae3cc;
        case 0x4ae3d0u: goto label_4ae3d0;
        case 0x4ae3d4u: goto label_4ae3d4;
        case 0x4ae3d8u: goto label_4ae3d8;
        case 0x4ae3dcu: goto label_4ae3dc;
        case 0x4ae3e0u: goto label_4ae3e0;
        case 0x4ae3e4u: goto label_4ae3e4;
        case 0x4ae3e8u: goto label_4ae3e8;
        case 0x4ae3ecu: goto label_4ae3ec;
        case 0x4ae3f0u: goto label_4ae3f0;
        case 0x4ae3f4u: goto label_4ae3f4;
        case 0x4ae3f8u: goto label_4ae3f8;
        case 0x4ae3fcu: goto label_4ae3fc;
        case 0x4ae400u: goto label_4ae400;
        case 0x4ae404u: goto label_4ae404;
        case 0x4ae408u: goto label_4ae408;
        case 0x4ae40cu: goto label_4ae40c;
        case 0x4ae410u: goto label_4ae410;
        case 0x4ae414u: goto label_4ae414;
        case 0x4ae418u: goto label_4ae418;
        case 0x4ae41cu: goto label_4ae41c;
        case 0x4ae420u: goto label_4ae420;
        case 0x4ae424u: goto label_4ae424;
        case 0x4ae428u: goto label_4ae428;
        case 0x4ae42cu: goto label_4ae42c;
        case 0x4ae430u: goto label_4ae430;
        case 0x4ae434u: goto label_4ae434;
        case 0x4ae438u: goto label_4ae438;
        case 0x4ae43cu: goto label_4ae43c;
        case 0x4ae440u: goto label_4ae440;
        case 0x4ae444u: goto label_4ae444;
        case 0x4ae448u: goto label_4ae448;
        case 0x4ae44cu: goto label_4ae44c;
        case 0x4ae450u: goto label_4ae450;
        case 0x4ae454u: goto label_4ae454;
        case 0x4ae458u: goto label_4ae458;
        case 0x4ae45cu: goto label_4ae45c;
        case 0x4ae460u: goto label_4ae460;
        case 0x4ae464u: goto label_4ae464;
        case 0x4ae468u: goto label_4ae468;
        case 0x4ae46cu: goto label_4ae46c;
        case 0x4ae470u: goto label_4ae470;
        case 0x4ae474u: goto label_4ae474;
        case 0x4ae478u: goto label_4ae478;
        case 0x4ae47cu: goto label_4ae47c;
        case 0x4ae480u: goto label_4ae480;
        case 0x4ae484u: goto label_4ae484;
        case 0x4ae488u: goto label_4ae488;
        case 0x4ae48cu: goto label_4ae48c;
        case 0x4ae490u: goto label_4ae490;
        case 0x4ae494u: goto label_4ae494;
        case 0x4ae498u: goto label_4ae498;
        case 0x4ae49cu: goto label_4ae49c;
        case 0x4ae4a0u: goto label_4ae4a0;
        case 0x4ae4a4u: goto label_4ae4a4;
        case 0x4ae4a8u: goto label_4ae4a8;
        case 0x4ae4acu: goto label_4ae4ac;
        case 0x4ae4b0u: goto label_4ae4b0;
        case 0x4ae4b4u: goto label_4ae4b4;
        case 0x4ae4b8u: goto label_4ae4b8;
        case 0x4ae4bcu: goto label_4ae4bc;
        case 0x4ae4c0u: goto label_4ae4c0;
        case 0x4ae4c4u: goto label_4ae4c4;
        case 0x4ae4c8u: goto label_4ae4c8;
        case 0x4ae4ccu: goto label_4ae4cc;
        case 0x4ae4d0u: goto label_4ae4d0;
        case 0x4ae4d4u: goto label_4ae4d4;
        case 0x4ae4d8u: goto label_4ae4d8;
        case 0x4ae4dcu: goto label_4ae4dc;
        case 0x4ae4e0u: goto label_4ae4e0;
        case 0x4ae4e4u: goto label_4ae4e4;
        case 0x4ae4e8u: goto label_4ae4e8;
        case 0x4ae4ecu: goto label_4ae4ec;
        case 0x4ae4f0u: goto label_4ae4f0;
        case 0x4ae4f4u: goto label_4ae4f4;
        case 0x4ae4f8u: goto label_4ae4f8;
        case 0x4ae4fcu: goto label_4ae4fc;
        case 0x4ae500u: goto label_4ae500;
        case 0x4ae504u: goto label_4ae504;
        case 0x4ae508u: goto label_4ae508;
        case 0x4ae50cu: goto label_4ae50c;
        case 0x4ae510u: goto label_4ae510;
        case 0x4ae514u: goto label_4ae514;
        case 0x4ae518u: goto label_4ae518;
        case 0x4ae51cu: goto label_4ae51c;
        case 0x4ae520u: goto label_4ae520;
        case 0x4ae524u: goto label_4ae524;
        case 0x4ae528u: goto label_4ae528;
        case 0x4ae52cu: goto label_4ae52c;
        case 0x4ae530u: goto label_4ae530;
        case 0x4ae534u: goto label_4ae534;
        case 0x4ae538u: goto label_4ae538;
        case 0x4ae53cu: goto label_4ae53c;
        case 0x4ae540u: goto label_4ae540;
        case 0x4ae544u: goto label_4ae544;
        case 0x4ae548u: goto label_4ae548;
        case 0x4ae54cu: goto label_4ae54c;
        case 0x4ae550u: goto label_4ae550;
        case 0x4ae554u: goto label_4ae554;
        case 0x4ae558u: goto label_4ae558;
        case 0x4ae55cu: goto label_4ae55c;
        case 0x4ae560u: goto label_4ae560;
        case 0x4ae564u: goto label_4ae564;
        case 0x4ae568u: goto label_4ae568;
        case 0x4ae56cu: goto label_4ae56c;
        case 0x4ae570u: goto label_4ae570;
        case 0x4ae574u: goto label_4ae574;
        case 0x4ae578u: goto label_4ae578;
        case 0x4ae57cu: goto label_4ae57c;
        case 0x4ae580u: goto label_4ae580;
        case 0x4ae584u: goto label_4ae584;
        case 0x4ae588u: goto label_4ae588;
        case 0x4ae58cu: goto label_4ae58c;
        case 0x4ae590u: goto label_4ae590;
        case 0x4ae594u: goto label_4ae594;
        case 0x4ae598u: goto label_4ae598;
        case 0x4ae59cu: goto label_4ae59c;
        case 0x4ae5a0u: goto label_4ae5a0;
        case 0x4ae5a4u: goto label_4ae5a4;
        case 0x4ae5a8u: goto label_4ae5a8;
        case 0x4ae5acu: goto label_4ae5ac;
        case 0x4ae5b0u: goto label_4ae5b0;
        case 0x4ae5b4u: goto label_4ae5b4;
        case 0x4ae5b8u: goto label_4ae5b8;
        case 0x4ae5bcu: goto label_4ae5bc;
        case 0x4ae5c0u: goto label_4ae5c0;
        case 0x4ae5c4u: goto label_4ae5c4;
        case 0x4ae5c8u: goto label_4ae5c8;
        case 0x4ae5ccu: goto label_4ae5cc;
        case 0x4ae5d0u: goto label_4ae5d0;
        case 0x4ae5d4u: goto label_4ae5d4;
        case 0x4ae5d8u: goto label_4ae5d8;
        case 0x4ae5dcu: goto label_4ae5dc;
        case 0x4ae5e0u: goto label_4ae5e0;
        case 0x4ae5e4u: goto label_4ae5e4;
        case 0x4ae5e8u: goto label_4ae5e8;
        case 0x4ae5ecu: goto label_4ae5ec;
        case 0x4ae5f0u: goto label_4ae5f0;
        case 0x4ae5f4u: goto label_4ae5f4;
        case 0x4ae5f8u: goto label_4ae5f8;
        case 0x4ae5fcu: goto label_4ae5fc;
        case 0x4ae600u: goto label_4ae600;
        case 0x4ae604u: goto label_4ae604;
        case 0x4ae608u: goto label_4ae608;
        case 0x4ae60cu: goto label_4ae60c;
        case 0x4ae610u: goto label_4ae610;
        case 0x4ae614u: goto label_4ae614;
        case 0x4ae618u: goto label_4ae618;
        case 0x4ae61cu: goto label_4ae61c;
        case 0x4ae620u: goto label_4ae620;
        case 0x4ae624u: goto label_4ae624;
        case 0x4ae628u: goto label_4ae628;
        case 0x4ae62cu: goto label_4ae62c;
        case 0x4ae630u: goto label_4ae630;
        case 0x4ae634u: goto label_4ae634;
        case 0x4ae638u: goto label_4ae638;
        case 0x4ae63cu: goto label_4ae63c;
        case 0x4ae640u: goto label_4ae640;
        case 0x4ae644u: goto label_4ae644;
        case 0x4ae648u: goto label_4ae648;
        case 0x4ae64cu: goto label_4ae64c;
        case 0x4ae650u: goto label_4ae650;
        case 0x4ae654u: goto label_4ae654;
        case 0x4ae658u: goto label_4ae658;
        case 0x4ae65cu: goto label_4ae65c;
        case 0x4ae660u: goto label_4ae660;
        case 0x4ae664u: goto label_4ae664;
        case 0x4ae668u: goto label_4ae668;
        case 0x4ae66cu: goto label_4ae66c;
        case 0x4ae670u: goto label_4ae670;
        case 0x4ae674u: goto label_4ae674;
        case 0x4ae678u: goto label_4ae678;
        case 0x4ae67cu: goto label_4ae67c;
        case 0x4ae680u: goto label_4ae680;
        case 0x4ae684u: goto label_4ae684;
        case 0x4ae688u: goto label_4ae688;
        case 0x4ae68cu: goto label_4ae68c;
        case 0x4ae690u: goto label_4ae690;
        case 0x4ae694u: goto label_4ae694;
        case 0x4ae698u: goto label_4ae698;
        case 0x4ae69cu: goto label_4ae69c;
        case 0x4ae6a0u: goto label_4ae6a0;
        case 0x4ae6a4u: goto label_4ae6a4;
        case 0x4ae6a8u: goto label_4ae6a8;
        case 0x4ae6acu: goto label_4ae6ac;
        case 0x4ae6b0u: goto label_4ae6b0;
        case 0x4ae6b4u: goto label_4ae6b4;
        case 0x4ae6b8u: goto label_4ae6b8;
        case 0x4ae6bcu: goto label_4ae6bc;
        case 0x4ae6c0u: goto label_4ae6c0;
        case 0x4ae6c4u: goto label_4ae6c4;
        case 0x4ae6c8u: goto label_4ae6c8;
        case 0x4ae6ccu: goto label_4ae6cc;
        case 0x4ae6d0u: goto label_4ae6d0;
        case 0x4ae6d4u: goto label_4ae6d4;
        case 0x4ae6d8u: goto label_4ae6d8;
        case 0x4ae6dcu: goto label_4ae6dc;
        case 0x4ae6e0u: goto label_4ae6e0;
        case 0x4ae6e4u: goto label_4ae6e4;
        case 0x4ae6e8u: goto label_4ae6e8;
        case 0x4ae6ecu: goto label_4ae6ec;
        case 0x4ae6f0u: goto label_4ae6f0;
        case 0x4ae6f4u: goto label_4ae6f4;
        case 0x4ae6f8u: goto label_4ae6f8;
        case 0x4ae6fcu: goto label_4ae6fc;
        case 0x4ae700u: goto label_4ae700;
        case 0x4ae704u: goto label_4ae704;
        case 0x4ae708u: goto label_4ae708;
        case 0x4ae70cu: goto label_4ae70c;
        case 0x4ae710u: goto label_4ae710;
        case 0x4ae714u: goto label_4ae714;
        case 0x4ae718u: goto label_4ae718;
        case 0x4ae71cu: goto label_4ae71c;
        case 0x4ae720u: goto label_4ae720;
        case 0x4ae724u: goto label_4ae724;
        case 0x4ae728u: goto label_4ae728;
        case 0x4ae72cu: goto label_4ae72c;
        case 0x4ae730u: goto label_4ae730;
        case 0x4ae734u: goto label_4ae734;
        case 0x4ae738u: goto label_4ae738;
        case 0x4ae73cu: goto label_4ae73c;
        case 0x4ae740u: goto label_4ae740;
        case 0x4ae744u: goto label_4ae744;
        case 0x4ae748u: goto label_4ae748;
        case 0x4ae74cu: goto label_4ae74c;
        case 0x4ae750u: goto label_4ae750;
        case 0x4ae754u: goto label_4ae754;
        case 0x4ae758u: goto label_4ae758;
        case 0x4ae75cu: goto label_4ae75c;
        case 0x4ae760u: goto label_4ae760;
        case 0x4ae764u: goto label_4ae764;
        case 0x4ae768u: goto label_4ae768;
        case 0x4ae76cu: goto label_4ae76c;
        case 0x4ae770u: goto label_4ae770;
        case 0x4ae774u: goto label_4ae774;
        case 0x4ae778u: goto label_4ae778;
        case 0x4ae77cu: goto label_4ae77c;
        case 0x4ae780u: goto label_4ae780;
        case 0x4ae784u: goto label_4ae784;
        case 0x4ae788u: goto label_4ae788;
        case 0x4ae78cu: goto label_4ae78c;
        case 0x4ae790u: goto label_4ae790;
        case 0x4ae794u: goto label_4ae794;
        case 0x4ae798u: goto label_4ae798;
        case 0x4ae79cu: goto label_4ae79c;
        case 0x4ae7a0u: goto label_4ae7a0;
        case 0x4ae7a4u: goto label_4ae7a4;
        case 0x4ae7a8u: goto label_4ae7a8;
        case 0x4ae7acu: goto label_4ae7ac;
        case 0x4ae7b0u: goto label_4ae7b0;
        case 0x4ae7b4u: goto label_4ae7b4;
        case 0x4ae7b8u: goto label_4ae7b8;
        case 0x4ae7bcu: goto label_4ae7bc;
        case 0x4ae7c0u: goto label_4ae7c0;
        case 0x4ae7c4u: goto label_4ae7c4;
        case 0x4ae7c8u: goto label_4ae7c8;
        case 0x4ae7ccu: goto label_4ae7cc;
        case 0x4ae7d0u: goto label_4ae7d0;
        case 0x4ae7d4u: goto label_4ae7d4;
        case 0x4ae7d8u: goto label_4ae7d8;
        case 0x4ae7dcu: goto label_4ae7dc;
        case 0x4ae7e0u: goto label_4ae7e0;
        case 0x4ae7e4u: goto label_4ae7e4;
        case 0x4ae7e8u: goto label_4ae7e8;
        case 0x4ae7ecu: goto label_4ae7ec;
        case 0x4ae7f0u: goto label_4ae7f0;
        case 0x4ae7f4u: goto label_4ae7f4;
        case 0x4ae7f8u: goto label_4ae7f8;
        case 0x4ae7fcu: goto label_4ae7fc;
        case 0x4ae800u: goto label_4ae800;
        case 0x4ae804u: goto label_4ae804;
        case 0x4ae808u: goto label_4ae808;
        case 0x4ae80cu: goto label_4ae80c;
        case 0x4ae810u: goto label_4ae810;
        case 0x4ae814u: goto label_4ae814;
        case 0x4ae818u: goto label_4ae818;
        case 0x4ae81cu: goto label_4ae81c;
        case 0x4ae820u: goto label_4ae820;
        case 0x4ae824u: goto label_4ae824;
        case 0x4ae828u: goto label_4ae828;
        case 0x4ae82cu: goto label_4ae82c;
        case 0x4ae830u: goto label_4ae830;
        case 0x4ae834u: goto label_4ae834;
        case 0x4ae838u: goto label_4ae838;
        case 0x4ae83cu: goto label_4ae83c;
        case 0x4ae840u: goto label_4ae840;
        case 0x4ae844u: goto label_4ae844;
        case 0x4ae848u: goto label_4ae848;
        case 0x4ae84cu: goto label_4ae84c;
        case 0x4ae850u: goto label_4ae850;
        case 0x4ae854u: goto label_4ae854;
        case 0x4ae858u: goto label_4ae858;
        case 0x4ae85cu: goto label_4ae85c;
        case 0x4ae860u: goto label_4ae860;
        case 0x4ae864u: goto label_4ae864;
        case 0x4ae868u: goto label_4ae868;
        case 0x4ae86cu: goto label_4ae86c;
        case 0x4ae870u: goto label_4ae870;
        case 0x4ae874u: goto label_4ae874;
        case 0x4ae878u: goto label_4ae878;
        case 0x4ae87cu: goto label_4ae87c;
        case 0x4ae880u: goto label_4ae880;
        case 0x4ae884u: goto label_4ae884;
        case 0x4ae888u: goto label_4ae888;
        case 0x4ae88cu: goto label_4ae88c;
        case 0x4ae890u: goto label_4ae890;
        case 0x4ae894u: goto label_4ae894;
        case 0x4ae898u: goto label_4ae898;
        case 0x4ae89cu: goto label_4ae89c;
        case 0x4ae8a0u: goto label_4ae8a0;
        case 0x4ae8a4u: goto label_4ae8a4;
        case 0x4ae8a8u: goto label_4ae8a8;
        case 0x4ae8acu: goto label_4ae8ac;
        case 0x4ae8b0u: goto label_4ae8b0;
        case 0x4ae8b4u: goto label_4ae8b4;
        case 0x4ae8b8u: goto label_4ae8b8;
        case 0x4ae8bcu: goto label_4ae8bc;
        case 0x4ae8c0u: goto label_4ae8c0;
        case 0x4ae8c4u: goto label_4ae8c4;
        case 0x4ae8c8u: goto label_4ae8c8;
        case 0x4ae8ccu: goto label_4ae8cc;
        case 0x4ae8d0u: goto label_4ae8d0;
        case 0x4ae8d4u: goto label_4ae8d4;
        case 0x4ae8d8u: goto label_4ae8d8;
        case 0x4ae8dcu: goto label_4ae8dc;
        case 0x4ae8e0u: goto label_4ae8e0;
        case 0x4ae8e4u: goto label_4ae8e4;
        case 0x4ae8e8u: goto label_4ae8e8;
        case 0x4ae8ecu: goto label_4ae8ec;
        case 0x4ae8f0u: goto label_4ae8f0;
        case 0x4ae8f4u: goto label_4ae8f4;
        case 0x4ae8f8u: goto label_4ae8f8;
        case 0x4ae8fcu: goto label_4ae8fc;
        case 0x4ae900u: goto label_4ae900;
        case 0x4ae904u: goto label_4ae904;
        case 0x4ae908u: goto label_4ae908;
        case 0x4ae90cu: goto label_4ae90c;
        case 0x4ae910u: goto label_4ae910;
        case 0x4ae914u: goto label_4ae914;
        case 0x4ae918u: goto label_4ae918;
        case 0x4ae91cu: goto label_4ae91c;
        case 0x4ae920u: goto label_4ae920;
        case 0x4ae924u: goto label_4ae924;
        case 0x4ae928u: goto label_4ae928;
        case 0x4ae92cu: goto label_4ae92c;
        case 0x4ae930u: goto label_4ae930;
        case 0x4ae934u: goto label_4ae934;
        case 0x4ae938u: goto label_4ae938;
        case 0x4ae93cu: goto label_4ae93c;
        case 0x4ae940u: goto label_4ae940;
        case 0x4ae944u: goto label_4ae944;
        case 0x4ae948u: goto label_4ae948;
        case 0x4ae94cu: goto label_4ae94c;
        case 0x4ae950u: goto label_4ae950;
        case 0x4ae954u: goto label_4ae954;
        case 0x4ae958u: goto label_4ae958;
        case 0x4ae95cu: goto label_4ae95c;
        case 0x4ae960u: goto label_4ae960;
        case 0x4ae964u: goto label_4ae964;
        case 0x4ae968u: goto label_4ae968;
        case 0x4ae96cu: goto label_4ae96c;
        case 0x4ae970u: goto label_4ae970;
        case 0x4ae974u: goto label_4ae974;
        case 0x4ae978u: goto label_4ae978;
        case 0x4ae97cu: goto label_4ae97c;
        case 0x4ae980u: goto label_4ae980;
        case 0x4ae984u: goto label_4ae984;
        case 0x4ae988u: goto label_4ae988;
        case 0x4ae98cu: goto label_4ae98c;
        case 0x4ae990u: goto label_4ae990;
        case 0x4ae994u: goto label_4ae994;
        case 0x4ae998u: goto label_4ae998;
        case 0x4ae99cu: goto label_4ae99c;
        case 0x4ae9a0u: goto label_4ae9a0;
        case 0x4ae9a4u: goto label_4ae9a4;
        case 0x4ae9a8u: goto label_4ae9a8;
        case 0x4ae9acu: goto label_4ae9ac;
        case 0x4ae9b0u: goto label_4ae9b0;
        case 0x4ae9b4u: goto label_4ae9b4;
        case 0x4ae9b8u: goto label_4ae9b8;
        case 0x4ae9bcu: goto label_4ae9bc;
        case 0x4ae9c0u: goto label_4ae9c0;
        case 0x4ae9c4u: goto label_4ae9c4;
        case 0x4ae9c8u: goto label_4ae9c8;
        case 0x4ae9ccu: goto label_4ae9cc;
        case 0x4ae9d0u: goto label_4ae9d0;
        case 0x4ae9d4u: goto label_4ae9d4;
        case 0x4ae9d8u: goto label_4ae9d8;
        case 0x4ae9dcu: goto label_4ae9dc;
        case 0x4ae9e0u: goto label_4ae9e0;
        case 0x4ae9e4u: goto label_4ae9e4;
        case 0x4ae9e8u: goto label_4ae9e8;
        case 0x4ae9ecu: goto label_4ae9ec;
        case 0x4ae9f0u: goto label_4ae9f0;
        case 0x4ae9f4u: goto label_4ae9f4;
        case 0x4ae9f8u: goto label_4ae9f8;
        case 0x4ae9fcu: goto label_4ae9fc;
        case 0x4aea00u: goto label_4aea00;
        case 0x4aea04u: goto label_4aea04;
        case 0x4aea08u: goto label_4aea08;
        case 0x4aea0cu: goto label_4aea0c;
        case 0x4aea10u: goto label_4aea10;
        case 0x4aea14u: goto label_4aea14;
        case 0x4aea18u: goto label_4aea18;
        case 0x4aea1cu: goto label_4aea1c;
        case 0x4aea20u: goto label_4aea20;
        case 0x4aea24u: goto label_4aea24;
        case 0x4aea28u: goto label_4aea28;
        case 0x4aea2cu: goto label_4aea2c;
        case 0x4aea30u: goto label_4aea30;
        case 0x4aea34u: goto label_4aea34;
        case 0x4aea38u: goto label_4aea38;
        case 0x4aea3cu: goto label_4aea3c;
        case 0x4aea40u: goto label_4aea40;
        case 0x4aea44u: goto label_4aea44;
        case 0x4aea48u: goto label_4aea48;
        case 0x4aea4cu: goto label_4aea4c;
        case 0x4aea50u: goto label_4aea50;
        case 0x4aea54u: goto label_4aea54;
        case 0x4aea58u: goto label_4aea58;
        case 0x4aea5cu: goto label_4aea5c;
        case 0x4aea60u: goto label_4aea60;
        case 0x4aea64u: goto label_4aea64;
        case 0x4aea68u: goto label_4aea68;
        case 0x4aea6cu: goto label_4aea6c;
        case 0x4aea70u: goto label_4aea70;
        case 0x4aea74u: goto label_4aea74;
        case 0x4aea78u: goto label_4aea78;
        case 0x4aea7cu: goto label_4aea7c;
        case 0x4aea80u: goto label_4aea80;
        case 0x4aea84u: goto label_4aea84;
        case 0x4aea88u: goto label_4aea88;
        case 0x4aea8cu: goto label_4aea8c;
        case 0x4aea90u: goto label_4aea90;
        case 0x4aea94u: goto label_4aea94;
        case 0x4aea98u: goto label_4aea98;
        case 0x4aea9cu: goto label_4aea9c;
        case 0x4aeaa0u: goto label_4aeaa0;
        case 0x4aeaa4u: goto label_4aeaa4;
        case 0x4aeaa8u: goto label_4aeaa8;
        case 0x4aeaacu: goto label_4aeaac;
        case 0x4aeab0u: goto label_4aeab0;
        case 0x4aeab4u: goto label_4aeab4;
        case 0x4aeab8u: goto label_4aeab8;
        case 0x4aeabcu: goto label_4aeabc;
        case 0x4aeac0u: goto label_4aeac0;
        case 0x4aeac4u: goto label_4aeac4;
        case 0x4aeac8u: goto label_4aeac8;
        case 0x4aeaccu: goto label_4aeacc;
        case 0x4aead0u: goto label_4aead0;
        case 0x4aead4u: goto label_4aead4;
        case 0x4aead8u: goto label_4aead8;
        case 0x4aeadcu: goto label_4aeadc;
        case 0x4aeae0u: goto label_4aeae0;
        case 0x4aeae4u: goto label_4aeae4;
        case 0x4aeae8u: goto label_4aeae8;
        case 0x4aeaecu: goto label_4aeaec;
        case 0x4aeaf0u: goto label_4aeaf0;
        case 0x4aeaf4u: goto label_4aeaf4;
        case 0x4aeaf8u: goto label_4aeaf8;
        case 0x4aeafcu: goto label_4aeafc;
        case 0x4aeb00u: goto label_4aeb00;
        case 0x4aeb04u: goto label_4aeb04;
        case 0x4aeb08u: goto label_4aeb08;
        case 0x4aeb0cu: goto label_4aeb0c;
        case 0x4aeb10u: goto label_4aeb10;
        case 0x4aeb14u: goto label_4aeb14;
        case 0x4aeb18u: goto label_4aeb18;
        case 0x4aeb1cu: goto label_4aeb1c;
        case 0x4aeb20u: goto label_4aeb20;
        case 0x4aeb24u: goto label_4aeb24;
        case 0x4aeb28u: goto label_4aeb28;
        case 0x4aeb2cu: goto label_4aeb2c;
        case 0x4aeb30u: goto label_4aeb30;
        case 0x4aeb34u: goto label_4aeb34;
        case 0x4aeb38u: goto label_4aeb38;
        case 0x4aeb3cu: goto label_4aeb3c;
        case 0x4aeb40u: goto label_4aeb40;
        case 0x4aeb44u: goto label_4aeb44;
        case 0x4aeb48u: goto label_4aeb48;
        case 0x4aeb4cu: goto label_4aeb4c;
        case 0x4aeb50u: goto label_4aeb50;
        case 0x4aeb54u: goto label_4aeb54;
        case 0x4aeb58u: goto label_4aeb58;
        case 0x4aeb5cu: goto label_4aeb5c;
        case 0x4aeb60u: goto label_4aeb60;
        case 0x4aeb64u: goto label_4aeb64;
        case 0x4aeb68u: goto label_4aeb68;
        case 0x4aeb6cu: goto label_4aeb6c;
        case 0x4aeb70u: goto label_4aeb70;
        case 0x4aeb74u: goto label_4aeb74;
        case 0x4aeb78u: goto label_4aeb78;
        case 0x4aeb7cu: goto label_4aeb7c;
        case 0x4aeb80u: goto label_4aeb80;
        case 0x4aeb84u: goto label_4aeb84;
        case 0x4aeb88u: goto label_4aeb88;
        case 0x4aeb8cu: goto label_4aeb8c;
        case 0x4aeb90u: goto label_4aeb90;
        case 0x4aeb94u: goto label_4aeb94;
        case 0x4aeb98u: goto label_4aeb98;
        case 0x4aeb9cu: goto label_4aeb9c;
        case 0x4aeba0u: goto label_4aeba0;
        case 0x4aeba4u: goto label_4aeba4;
        case 0x4aeba8u: goto label_4aeba8;
        case 0x4aebacu: goto label_4aebac;
        case 0x4aebb0u: goto label_4aebb0;
        case 0x4aebb4u: goto label_4aebb4;
        case 0x4aebb8u: goto label_4aebb8;
        case 0x4aebbcu: goto label_4aebbc;
        case 0x4aebc0u: goto label_4aebc0;
        case 0x4aebc4u: goto label_4aebc4;
        case 0x4aebc8u: goto label_4aebc8;
        case 0x4aebccu: goto label_4aebcc;
        case 0x4aebd0u: goto label_4aebd0;
        case 0x4aebd4u: goto label_4aebd4;
        case 0x4aebd8u: goto label_4aebd8;
        case 0x4aebdcu: goto label_4aebdc;
        case 0x4aebe0u: goto label_4aebe0;
        case 0x4aebe4u: goto label_4aebe4;
        case 0x4aebe8u: goto label_4aebe8;
        case 0x4aebecu: goto label_4aebec;
        case 0x4aebf0u: goto label_4aebf0;
        case 0x4aebf4u: goto label_4aebf4;
        case 0x4aebf8u: goto label_4aebf8;
        case 0x4aebfcu: goto label_4aebfc;
        case 0x4aec00u: goto label_4aec00;
        case 0x4aec04u: goto label_4aec04;
        case 0x4aec08u: goto label_4aec08;
        case 0x4aec0cu: goto label_4aec0c;
        case 0x4aec10u: goto label_4aec10;
        case 0x4aec14u: goto label_4aec14;
        case 0x4aec18u: goto label_4aec18;
        case 0x4aec1cu: goto label_4aec1c;
        case 0x4aec20u: goto label_4aec20;
        case 0x4aec24u: goto label_4aec24;
        case 0x4aec28u: goto label_4aec28;
        case 0x4aec2cu: goto label_4aec2c;
        case 0x4aec30u: goto label_4aec30;
        case 0x4aec34u: goto label_4aec34;
        case 0x4aec38u: goto label_4aec38;
        case 0x4aec3cu: goto label_4aec3c;
        case 0x4aec40u: goto label_4aec40;
        case 0x4aec44u: goto label_4aec44;
        case 0x4aec48u: goto label_4aec48;
        case 0x4aec4cu: goto label_4aec4c;
        case 0x4aec50u: goto label_4aec50;
        case 0x4aec54u: goto label_4aec54;
        case 0x4aec58u: goto label_4aec58;
        case 0x4aec5cu: goto label_4aec5c;
        case 0x4aec60u: goto label_4aec60;
        case 0x4aec64u: goto label_4aec64;
        case 0x4aec68u: goto label_4aec68;
        case 0x4aec6cu: goto label_4aec6c;
        case 0x4aec70u: goto label_4aec70;
        case 0x4aec74u: goto label_4aec74;
        case 0x4aec78u: goto label_4aec78;
        case 0x4aec7cu: goto label_4aec7c;
        case 0x4aec80u: goto label_4aec80;
        case 0x4aec84u: goto label_4aec84;
        case 0x4aec88u: goto label_4aec88;
        case 0x4aec8cu: goto label_4aec8c;
        case 0x4aec90u: goto label_4aec90;
        case 0x4aec94u: goto label_4aec94;
        case 0x4aec98u: goto label_4aec98;
        case 0x4aec9cu: goto label_4aec9c;
        case 0x4aeca0u: goto label_4aeca0;
        case 0x4aeca4u: goto label_4aeca4;
        case 0x4aeca8u: goto label_4aeca8;
        case 0x4aecacu: goto label_4aecac;
        case 0x4aecb0u: goto label_4aecb0;
        case 0x4aecb4u: goto label_4aecb4;
        case 0x4aecb8u: goto label_4aecb8;
        case 0x4aecbcu: goto label_4aecbc;
        case 0x4aecc0u: goto label_4aecc0;
        case 0x4aecc4u: goto label_4aecc4;
        case 0x4aecc8u: goto label_4aecc8;
        case 0x4aecccu: goto label_4aeccc;
        case 0x4aecd0u: goto label_4aecd0;
        case 0x4aecd4u: goto label_4aecd4;
        case 0x4aecd8u: goto label_4aecd8;
        case 0x4aecdcu: goto label_4aecdc;
        case 0x4aece0u: goto label_4aece0;
        case 0x4aece4u: goto label_4aece4;
        case 0x4aece8u: goto label_4aece8;
        case 0x4aececu: goto label_4aecec;
        case 0x4aecf0u: goto label_4aecf0;
        case 0x4aecf4u: goto label_4aecf4;
        case 0x4aecf8u: goto label_4aecf8;
        case 0x4aecfcu: goto label_4aecfc;
        case 0x4aed00u: goto label_4aed00;
        case 0x4aed04u: goto label_4aed04;
        case 0x4aed08u: goto label_4aed08;
        case 0x4aed0cu: goto label_4aed0c;
        case 0x4aed10u: goto label_4aed10;
        case 0x4aed14u: goto label_4aed14;
        case 0x4aed18u: goto label_4aed18;
        case 0x4aed1cu: goto label_4aed1c;
        case 0x4aed20u: goto label_4aed20;
        case 0x4aed24u: goto label_4aed24;
        case 0x4aed28u: goto label_4aed28;
        case 0x4aed2cu: goto label_4aed2c;
        case 0x4aed30u: goto label_4aed30;
        case 0x4aed34u: goto label_4aed34;
        case 0x4aed38u: goto label_4aed38;
        case 0x4aed3cu: goto label_4aed3c;
        case 0x4aed40u: goto label_4aed40;
        case 0x4aed44u: goto label_4aed44;
        case 0x4aed48u: goto label_4aed48;
        case 0x4aed4cu: goto label_4aed4c;
        case 0x4aed50u: goto label_4aed50;
        case 0x4aed54u: goto label_4aed54;
        case 0x4aed58u: goto label_4aed58;
        case 0x4aed5cu: goto label_4aed5c;
        case 0x4aed60u: goto label_4aed60;
        case 0x4aed64u: goto label_4aed64;
        case 0x4aed68u: goto label_4aed68;
        case 0x4aed6cu: goto label_4aed6c;
        case 0x4aed70u: goto label_4aed70;
        case 0x4aed74u: goto label_4aed74;
        case 0x4aed78u: goto label_4aed78;
        case 0x4aed7cu: goto label_4aed7c;
        case 0x4aed80u: goto label_4aed80;
        case 0x4aed84u: goto label_4aed84;
        case 0x4aed88u: goto label_4aed88;
        case 0x4aed8cu: goto label_4aed8c;
        case 0x4aed90u: goto label_4aed90;
        case 0x4aed94u: goto label_4aed94;
        case 0x4aed98u: goto label_4aed98;
        case 0x4aed9cu: goto label_4aed9c;
        case 0x4aeda0u: goto label_4aeda0;
        case 0x4aeda4u: goto label_4aeda4;
        case 0x4aeda8u: goto label_4aeda8;
        case 0x4aedacu: goto label_4aedac;
        case 0x4aedb0u: goto label_4aedb0;
        case 0x4aedb4u: goto label_4aedb4;
        case 0x4aedb8u: goto label_4aedb8;
        case 0x4aedbcu: goto label_4aedbc;
        case 0x4aedc0u: goto label_4aedc0;
        case 0x4aedc4u: goto label_4aedc4;
        case 0x4aedc8u: goto label_4aedc8;
        case 0x4aedccu: goto label_4aedcc;
        case 0x4aedd0u: goto label_4aedd0;
        case 0x4aedd4u: goto label_4aedd4;
        case 0x4aedd8u: goto label_4aedd8;
        case 0x4aeddcu: goto label_4aeddc;
        case 0x4aede0u: goto label_4aede0;
        case 0x4aede4u: goto label_4aede4;
        case 0x4aede8u: goto label_4aede8;
        case 0x4aedecu: goto label_4aedec;
        case 0x4aedf0u: goto label_4aedf0;
        case 0x4aedf4u: goto label_4aedf4;
        case 0x4aedf8u: goto label_4aedf8;
        case 0x4aedfcu: goto label_4aedfc;
        case 0x4aee00u: goto label_4aee00;
        case 0x4aee04u: goto label_4aee04;
        case 0x4aee08u: goto label_4aee08;
        case 0x4aee0cu: goto label_4aee0c;
        case 0x4aee10u: goto label_4aee10;
        case 0x4aee14u: goto label_4aee14;
        case 0x4aee18u: goto label_4aee18;
        case 0x4aee1cu: goto label_4aee1c;
        case 0x4aee20u: goto label_4aee20;
        case 0x4aee24u: goto label_4aee24;
        case 0x4aee28u: goto label_4aee28;
        case 0x4aee2cu: goto label_4aee2c;
        case 0x4aee30u: goto label_4aee30;
        case 0x4aee34u: goto label_4aee34;
        case 0x4aee38u: goto label_4aee38;
        case 0x4aee3cu: goto label_4aee3c;
        case 0x4aee40u: goto label_4aee40;
        case 0x4aee44u: goto label_4aee44;
        case 0x4aee48u: goto label_4aee48;
        case 0x4aee4cu: goto label_4aee4c;
        case 0x4aee50u: goto label_4aee50;
        case 0x4aee54u: goto label_4aee54;
        case 0x4aee58u: goto label_4aee58;
        case 0x4aee5cu: goto label_4aee5c;
        case 0x4aee60u: goto label_4aee60;
        case 0x4aee64u: goto label_4aee64;
        case 0x4aee68u: goto label_4aee68;
        case 0x4aee6cu: goto label_4aee6c;
        case 0x4aee70u: goto label_4aee70;
        case 0x4aee74u: goto label_4aee74;
        case 0x4aee78u: goto label_4aee78;
        case 0x4aee7cu: goto label_4aee7c;
        case 0x4aee80u: goto label_4aee80;
        case 0x4aee84u: goto label_4aee84;
        case 0x4aee88u: goto label_4aee88;
        case 0x4aee8cu: goto label_4aee8c;
        case 0x4aee90u: goto label_4aee90;
        case 0x4aee94u: goto label_4aee94;
        case 0x4aee98u: goto label_4aee98;
        case 0x4aee9cu: goto label_4aee9c;
        case 0x4aeea0u: goto label_4aeea0;
        case 0x4aeea4u: goto label_4aeea4;
        case 0x4aeea8u: goto label_4aeea8;
        case 0x4aeeacu: goto label_4aeeac;
        case 0x4aeeb0u: goto label_4aeeb0;
        case 0x4aeeb4u: goto label_4aeeb4;
        case 0x4aeeb8u: goto label_4aeeb8;
        case 0x4aeebcu: goto label_4aeebc;
        case 0x4aeec0u: goto label_4aeec0;
        case 0x4aeec4u: goto label_4aeec4;
        case 0x4aeec8u: goto label_4aeec8;
        case 0x4aeeccu: goto label_4aeecc;
        case 0x4aeed0u: goto label_4aeed0;
        case 0x4aeed4u: goto label_4aeed4;
        case 0x4aeed8u: goto label_4aeed8;
        case 0x4aeedcu: goto label_4aeedc;
        case 0x4aeee0u: goto label_4aeee0;
        case 0x4aeee4u: goto label_4aeee4;
        case 0x4aeee8u: goto label_4aeee8;
        case 0x4aeeecu: goto label_4aeeec;
        case 0x4aeef0u: goto label_4aeef0;
        case 0x4aeef4u: goto label_4aeef4;
        case 0x4aeef8u: goto label_4aeef8;
        case 0x4aeefcu: goto label_4aeefc;
        case 0x4aef00u: goto label_4aef00;
        case 0x4aef04u: goto label_4aef04;
        case 0x4aef08u: goto label_4aef08;
        case 0x4aef0cu: goto label_4aef0c;
        case 0x4aef10u: goto label_4aef10;
        case 0x4aef14u: goto label_4aef14;
        case 0x4aef18u: goto label_4aef18;
        case 0x4aef1cu: goto label_4aef1c;
        case 0x4aef20u: goto label_4aef20;
        case 0x4aef24u: goto label_4aef24;
        case 0x4aef28u: goto label_4aef28;
        case 0x4aef2cu: goto label_4aef2c;
        case 0x4aef30u: goto label_4aef30;
        case 0x4aef34u: goto label_4aef34;
        case 0x4aef38u: goto label_4aef38;
        case 0x4aef3cu: goto label_4aef3c;
        case 0x4aef40u: goto label_4aef40;
        case 0x4aef44u: goto label_4aef44;
        case 0x4aef48u: goto label_4aef48;
        case 0x4aef4cu: goto label_4aef4c;
        case 0x4aef50u: goto label_4aef50;
        case 0x4aef54u: goto label_4aef54;
        case 0x4aef58u: goto label_4aef58;
        case 0x4aef5cu: goto label_4aef5c;
        case 0x4aef60u: goto label_4aef60;
        case 0x4aef64u: goto label_4aef64;
        case 0x4aef68u: goto label_4aef68;
        case 0x4aef6cu: goto label_4aef6c;
        case 0x4aef70u: goto label_4aef70;
        case 0x4aef74u: goto label_4aef74;
        case 0x4aef78u: goto label_4aef78;
        case 0x4aef7cu: goto label_4aef7c;
        case 0x4aef80u: goto label_4aef80;
        case 0x4aef84u: goto label_4aef84;
        case 0x4aef88u: goto label_4aef88;
        case 0x4aef8cu: goto label_4aef8c;
        case 0x4aef90u: goto label_4aef90;
        case 0x4aef94u: goto label_4aef94;
        case 0x4aef98u: goto label_4aef98;
        case 0x4aef9cu: goto label_4aef9c;
        case 0x4aefa0u: goto label_4aefa0;
        case 0x4aefa4u: goto label_4aefa4;
        case 0x4aefa8u: goto label_4aefa8;
        case 0x4aefacu: goto label_4aefac;
        case 0x4aefb0u: goto label_4aefb0;
        case 0x4aefb4u: goto label_4aefb4;
        case 0x4aefb8u: goto label_4aefb8;
        case 0x4aefbcu: goto label_4aefbc;
        case 0x4aefc0u: goto label_4aefc0;
        case 0x4aefc4u: goto label_4aefc4;
        case 0x4aefc8u: goto label_4aefc8;
        case 0x4aefccu: goto label_4aefcc;
        case 0x4aefd0u: goto label_4aefd0;
        case 0x4aefd4u: goto label_4aefd4;
        case 0x4aefd8u: goto label_4aefd8;
        case 0x4aefdcu: goto label_4aefdc;
        case 0x4aefe0u: goto label_4aefe0;
        case 0x4aefe4u: goto label_4aefe4;
        case 0x4aefe8u: goto label_4aefe8;
        case 0x4aefecu: goto label_4aefec;
        case 0x4aeff0u: goto label_4aeff0;
        case 0x4aeff4u: goto label_4aeff4;
        case 0x4aeff8u: goto label_4aeff8;
        case 0x4aeffcu: goto label_4aeffc;
        case 0x4af000u: goto label_4af000;
        case 0x4af004u: goto label_4af004;
        case 0x4af008u: goto label_4af008;
        case 0x4af00cu: goto label_4af00c;
        case 0x4af010u: goto label_4af010;
        case 0x4af014u: goto label_4af014;
        case 0x4af018u: goto label_4af018;
        case 0x4af01cu: goto label_4af01c;
        case 0x4af020u: goto label_4af020;
        case 0x4af024u: goto label_4af024;
        case 0x4af028u: goto label_4af028;
        case 0x4af02cu: goto label_4af02c;
        case 0x4af030u: goto label_4af030;
        case 0x4af034u: goto label_4af034;
        case 0x4af038u: goto label_4af038;
        case 0x4af03cu: goto label_4af03c;
        case 0x4af040u: goto label_4af040;
        case 0x4af044u: goto label_4af044;
        case 0x4af048u: goto label_4af048;
        case 0x4af04cu: goto label_4af04c;
        case 0x4af050u: goto label_4af050;
        case 0x4af054u: goto label_4af054;
        case 0x4af058u: goto label_4af058;
        case 0x4af05cu: goto label_4af05c;
        case 0x4af060u: goto label_4af060;
        case 0x4af064u: goto label_4af064;
        case 0x4af068u: goto label_4af068;
        case 0x4af06cu: goto label_4af06c;
        case 0x4af070u: goto label_4af070;
        case 0x4af074u: goto label_4af074;
        case 0x4af078u: goto label_4af078;
        case 0x4af07cu: goto label_4af07c;
        case 0x4af080u: goto label_4af080;
        case 0x4af084u: goto label_4af084;
        case 0x4af088u: goto label_4af088;
        case 0x4af08cu: goto label_4af08c;
        case 0x4af090u: goto label_4af090;
        case 0x4af094u: goto label_4af094;
        case 0x4af098u: goto label_4af098;
        case 0x4af09cu: goto label_4af09c;
        case 0x4af0a0u: goto label_4af0a0;
        case 0x4af0a4u: goto label_4af0a4;
        case 0x4af0a8u: goto label_4af0a8;
        case 0x4af0acu: goto label_4af0ac;
        case 0x4af0b0u: goto label_4af0b0;
        case 0x4af0b4u: goto label_4af0b4;
        case 0x4af0b8u: goto label_4af0b8;
        case 0x4af0bcu: goto label_4af0bc;
        case 0x4af0c0u: goto label_4af0c0;
        case 0x4af0c4u: goto label_4af0c4;
        case 0x4af0c8u: goto label_4af0c8;
        case 0x4af0ccu: goto label_4af0cc;
        case 0x4af0d0u: goto label_4af0d0;
        case 0x4af0d4u: goto label_4af0d4;
        case 0x4af0d8u: goto label_4af0d8;
        case 0x4af0dcu: goto label_4af0dc;
        case 0x4af0e0u: goto label_4af0e0;
        case 0x4af0e4u: goto label_4af0e4;
        case 0x4af0e8u: goto label_4af0e8;
        case 0x4af0ecu: goto label_4af0ec;
        case 0x4af0f0u: goto label_4af0f0;
        case 0x4af0f4u: goto label_4af0f4;
        case 0x4af0f8u: goto label_4af0f8;
        case 0x4af0fcu: goto label_4af0fc;
        case 0x4af100u: goto label_4af100;
        case 0x4af104u: goto label_4af104;
        case 0x4af108u: goto label_4af108;
        case 0x4af10cu: goto label_4af10c;
        case 0x4af110u: goto label_4af110;
        case 0x4af114u: goto label_4af114;
        case 0x4af118u: goto label_4af118;
        case 0x4af11cu: goto label_4af11c;
        case 0x4af120u: goto label_4af120;
        case 0x4af124u: goto label_4af124;
        case 0x4af128u: goto label_4af128;
        case 0x4af12cu: goto label_4af12c;
        case 0x4af130u: goto label_4af130;
        case 0x4af134u: goto label_4af134;
        case 0x4af138u: goto label_4af138;
        case 0x4af13cu: goto label_4af13c;
        case 0x4af140u: goto label_4af140;
        case 0x4af144u: goto label_4af144;
        case 0x4af148u: goto label_4af148;
        case 0x4af14cu: goto label_4af14c;
        case 0x4af150u: goto label_4af150;
        case 0x4af154u: goto label_4af154;
        case 0x4af158u: goto label_4af158;
        case 0x4af15cu: goto label_4af15c;
        case 0x4af160u: goto label_4af160;
        case 0x4af164u: goto label_4af164;
        case 0x4af168u: goto label_4af168;
        case 0x4af16cu: goto label_4af16c;
        case 0x4af170u: goto label_4af170;
        case 0x4af174u: goto label_4af174;
        case 0x4af178u: goto label_4af178;
        case 0x4af17cu: goto label_4af17c;
        case 0x4af180u: goto label_4af180;
        case 0x4af184u: goto label_4af184;
        case 0x4af188u: goto label_4af188;
        case 0x4af18cu: goto label_4af18c;
        case 0x4af190u: goto label_4af190;
        case 0x4af194u: goto label_4af194;
        case 0x4af198u: goto label_4af198;
        case 0x4af19cu: goto label_4af19c;
        case 0x4af1a0u: goto label_4af1a0;
        case 0x4af1a4u: goto label_4af1a4;
        case 0x4af1a8u: goto label_4af1a8;
        case 0x4af1acu: goto label_4af1ac;
        case 0x4af1b0u: goto label_4af1b0;
        case 0x4af1b4u: goto label_4af1b4;
        case 0x4af1b8u: goto label_4af1b8;
        case 0x4af1bcu: goto label_4af1bc;
        case 0x4af1c0u: goto label_4af1c0;
        case 0x4af1c4u: goto label_4af1c4;
        case 0x4af1c8u: goto label_4af1c8;
        case 0x4af1ccu: goto label_4af1cc;
        case 0x4af1d0u: goto label_4af1d0;
        case 0x4af1d4u: goto label_4af1d4;
        case 0x4af1d8u: goto label_4af1d8;
        case 0x4af1dcu: goto label_4af1dc;
        case 0x4af1e0u: goto label_4af1e0;
        case 0x4af1e4u: goto label_4af1e4;
        case 0x4af1e8u: goto label_4af1e8;
        case 0x4af1ecu: goto label_4af1ec;
        case 0x4af1f0u: goto label_4af1f0;
        case 0x4af1f4u: goto label_4af1f4;
        case 0x4af1f8u: goto label_4af1f8;
        case 0x4af1fcu: goto label_4af1fc;
        case 0x4af200u: goto label_4af200;
        case 0x4af204u: goto label_4af204;
        case 0x4af208u: goto label_4af208;
        case 0x4af20cu: goto label_4af20c;
        case 0x4af210u: goto label_4af210;
        case 0x4af214u: goto label_4af214;
        case 0x4af218u: goto label_4af218;
        case 0x4af21cu: goto label_4af21c;
        case 0x4af220u: goto label_4af220;
        case 0x4af224u: goto label_4af224;
        case 0x4af228u: goto label_4af228;
        case 0x4af22cu: goto label_4af22c;
        case 0x4af230u: goto label_4af230;
        case 0x4af234u: goto label_4af234;
        case 0x4af238u: goto label_4af238;
        case 0x4af23cu: goto label_4af23c;
        case 0x4af240u: goto label_4af240;
        case 0x4af244u: goto label_4af244;
        case 0x4af248u: goto label_4af248;
        case 0x4af24cu: goto label_4af24c;
        case 0x4af250u: goto label_4af250;
        case 0x4af254u: goto label_4af254;
        case 0x4af258u: goto label_4af258;
        case 0x4af25cu: goto label_4af25c;
        case 0x4af260u: goto label_4af260;
        case 0x4af264u: goto label_4af264;
        case 0x4af268u: goto label_4af268;
        case 0x4af26cu: goto label_4af26c;
        case 0x4af270u: goto label_4af270;
        case 0x4af274u: goto label_4af274;
        case 0x4af278u: goto label_4af278;
        case 0x4af27cu: goto label_4af27c;
        case 0x4af280u: goto label_4af280;
        case 0x4af284u: goto label_4af284;
        case 0x4af288u: goto label_4af288;
        case 0x4af28cu: goto label_4af28c;
        case 0x4af290u: goto label_4af290;
        case 0x4af294u: goto label_4af294;
        case 0x4af298u: goto label_4af298;
        case 0x4af29cu: goto label_4af29c;
        case 0x4af2a0u: goto label_4af2a0;
        case 0x4af2a4u: goto label_4af2a4;
        case 0x4af2a8u: goto label_4af2a8;
        case 0x4af2acu: goto label_4af2ac;
        case 0x4af2b0u: goto label_4af2b0;
        case 0x4af2b4u: goto label_4af2b4;
        case 0x4af2b8u: goto label_4af2b8;
        case 0x4af2bcu: goto label_4af2bc;
        case 0x4af2c0u: goto label_4af2c0;
        case 0x4af2c4u: goto label_4af2c4;
        case 0x4af2c8u: goto label_4af2c8;
        case 0x4af2ccu: goto label_4af2cc;
        case 0x4af2d0u: goto label_4af2d0;
        case 0x4af2d4u: goto label_4af2d4;
        case 0x4af2d8u: goto label_4af2d8;
        case 0x4af2dcu: goto label_4af2dc;
        case 0x4af2e0u: goto label_4af2e0;
        case 0x4af2e4u: goto label_4af2e4;
        case 0x4af2e8u: goto label_4af2e8;
        case 0x4af2ecu: goto label_4af2ec;
        case 0x4af2f0u: goto label_4af2f0;
        case 0x4af2f4u: goto label_4af2f4;
        case 0x4af2f8u: goto label_4af2f8;
        case 0x4af2fcu: goto label_4af2fc;
        case 0x4af300u: goto label_4af300;
        case 0x4af304u: goto label_4af304;
        case 0x4af308u: goto label_4af308;
        case 0x4af30cu: goto label_4af30c;
        case 0x4af310u: goto label_4af310;
        case 0x4af314u: goto label_4af314;
        case 0x4af318u: goto label_4af318;
        case 0x4af31cu: goto label_4af31c;
        case 0x4af320u: goto label_4af320;
        case 0x4af324u: goto label_4af324;
        case 0x4af328u: goto label_4af328;
        case 0x4af32cu: goto label_4af32c;
        case 0x4af330u: goto label_4af330;
        case 0x4af334u: goto label_4af334;
        case 0x4af338u: goto label_4af338;
        case 0x4af33cu: goto label_4af33c;
        case 0x4af340u: goto label_4af340;
        case 0x4af344u: goto label_4af344;
        case 0x4af348u: goto label_4af348;
        case 0x4af34cu: goto label_4af34c;
        case 0x4af350u: goto label_4af350;
        case 0x4af354u: goto label_4af354;
        case 0x4af358u: goto label_4af358;
        case 0x4af35cu: goto label_4af35c;
        case 0x4af360u: goto label_4af360;
        case 0x4af364u: goto label_4af364;
        case 0x4af368u: goto label_4af368;
        case 0x4af36cu: goto label_4af36c;
        case 0x4af370u: goto label_4af370;
        case 0x4af374u: goto label_4af374;
        case 0x4af378u: goto label_4af378;
        case 0x4af37cu: goto label_4af37c;
        case 0x4af380u: goto label_4af380;
        case 0x4af384u: goto label_4af384;
        case 0x4af388u: goto label_4af388;
        case 0x4af38cu: goto label_4af38c;
        case 0x4af390u: goto label_4af390;
        case 0x4af394u: goto label_4af394;
        case 0x4af398u: goto label_4af398;
        case 0x4af39cu: goto label_4af39c;
        case 0x4af3a0u: goto label_4af3a0;
        case 0x4af3a4u: goto label_4af3a4;
        case 0x4af3a8u: goto label_4af3a8;
        case 0x4af3acu: goto label_4af3ac;
        case 0x4af3b0u: goto label_4af3b0;
        case 0x4af3b4u: goto label_4af3b4;
        case 0x4af3b8u: goto label_4af3b8;
        case 0x4af3bcu: goto label_4af3bc;
        case 0x4af3c0u: goto label_4af3c0;
        case 0x4af3c4u: goto label_4af3c4;
        case 0x4af3c8u: goto label_4af3c8;
        case 0x4af3ccu: goto label_4af3cc;
        case 0x4af3d0u: goto label_4af3d0;
        case 0x4af3d4u: goto label_4af3d4;
        case 0x4af3d8u: goto label_4af3d8;
        case 0x4af3dcu: goto label_4af3dc;
        case 0x4af3e0u: goto label_4af3e0;
        case 0x4af3e4u: goto label_4af3e4;
        case 0x4af3e8u: goto label_4af3e8;
        case 0x4af3ecu: goto label_4af3ec;
        case 0x4af3f0u: goto label_4af3f0;
        case 0x4af3f4u: goto label_4af3f4;
        case 0x4af3f8u: goto label_4af3f8;
        case 0x4af3fcu: goto label_4af3fc;
        case 0x4af400u: goto label_4af400;
        case 0x4af404u: goto label_4af404;
        case 0x4af408u: goto label_4af408;
        case 0x4af40cu: goto label_4af40c;
        case 0x4af410u: goto label_4af410;
        case 0x4af414u: goto label_4af414;
        case 0x4af418u: goto label_4af418;
        case 0x4af41cu: goto label_4af41c;
        case 0x4af420u: goto label_4af420;
        case 0x4af424u: goto label_4af424;
        case 0x4af428u: goto label_4af428;
        case 0x4af42cu: goto label_4af42c;
        case 0x4af430u: goto label_4af430;
        case 0x4af434u: goto label_4af434;
        case 0x4af438u: goto label_4af438;
        case 0x4af43cu: goto label_4af43c;
        case 0x4af440u: goto label_4af440;
        case 0x4af444u: goto label_4af444;
        case 0x4af448u: goto label_4af448;
        case 0x4af44cu: goto label_4af44c;
        case 0x4af450u: goto label_4af450;
        case 0x4af454u: goto label_4af454;
        case 0x4af458u: goto label_4af458;
        case 0x4af45cu: goto label_4af45c;
        case 0x4af460u: goto label_4af460;
        case 0x4af464u: goto label_4af464;
        case 0x4af468u: goto label_4af468;
        case 0x4af46cu: goto label_4af46c;
        case 0x4af470u: goto label_4af470;
        case 0x4af474u: goto label_4af474;
        case 0x4af478u: goto label_4af478;
        case 0x4af47cu: goto label_4af47c;
        case 0x4af480u: goto label_4af480;
        case 0x4af484u: goto label_4af484;
        case 0x4af488u: goto label_4af488;
        case 0x4af48cu: goto label_4af48c;
        case 0x4af490u: goto label_4af490;
        case 0x4af494u: goto label_4af494;
        case 0x4af498u: goto label_4af498;
        case 0x4af49cu: goto label_4af49c;
        case 0x4af4a0u: goto label_4af4a0;
        case 0x4af4a4u: goto label_4af4a4;
        case 0x4af4a8u: goto label_4af4a8;
        case 0x4af4acu: goto label_4af4ac;
        case 0x4af4b0u: goto label_4af4b0;
        case 0x4af4b4u: goto label_4af4b4;
        case 0x4af4b8u: goto label_4af4b8;
        case 0x4af4bcu: goto label_4af4bc;
        case 0x4af4c0u: goto label_4af4c0;
        case 0x4af4c4u: goto label_4af4c4;
        case 0x4af4c8u: goto label_4af4c8;
        case 0x4af4ccu: goto label_4af4cc;
        case 0x4af4d0u: goto label_4af4d0;
        case 0x4af4d4u: goto label_4af4d4;
        case 0x4af4d8u: goto label_4af4d8;
        case 0x4af4dcu: goto label_4af4dc;
        case 0x4af4e0u: goto label_4af4e0;
        case 0x4af4e4u: goto label_4af4e4;
        case 0x4af4e8u: goto label_4af4e8;
        case 0x4af4ecu: goto label_4af4ec;
        case 0x4af4f0u: goto label_4af4f0;
        case 0x4af4f4u: goto label_4af4f4;
        case 0x4af4f8u: goto label_4af4f8;
        case 0x4af4fcu: goto label_4af4fc;
        case 0x4af500u: goto label_4af500;
        case 0x4af504u: goto label_4af504;
        case 0x4af508u: goto label_4af508;
        case 0x4af50cu: goto label_4af50c;
        case 0x4af510u: goto label_4af510;
        case 0x4af514u: goto label_4af514;
        case 0x4af518u: goto label_4af518;
        case 0x4af51cu: goto label_4af51c;
        case 0x4af520u: goto label_4af520;
        case 0x4af524u: goto label_4af524;
        case 0x4af528u: goto label_4af528;
        case 0x4af52cu: goto label_4af52c;
        case 0x4af530u: goto label_4af530;
        case 0x4af534u: goto label_4af534;
        case 0x4af538u: goto label_4af538;
        case 0x4af53cu: goto label_4af53c;
        case 0x4af540u: goto label_4af540;
        case 0x4af544u: goto label_4af544;
        case 0x4af548u: goto label_4af548;
        case 0x4af54cu: goto label_4af54c;
        case 0x4af550u: goto label_4af550;
        case 0x4af554u: goto label_4af554;
        case 0x4af558u: goto label_4af558;
        case 0x4af55cu: goto label_4af55c;
        case 0x4af560u: goto label_4af560;
        case 0x4af564u: goto label_4af564;
        case 0x4af568u: goto label_4af568;
        case 0x4af56cu: goto label_4af56c;
        case 0x4af570u: goto label_4af570;
        case 0x4af574u: goto label_4af574;
        case 0x4af578u: goto label_4af578;
        case 0x4af57cu: goto label_4af57c;
        case 0x4af580u: goto label_4af580;
        case 0x4af584u: goto label_4af584;
        case 0x4af588u: goto label_4af588;
        case 0x4af58cu: goto label_4af58c;
        case 0x4af590u: goto label_4af590;
        case 0x4af594u: goto label_4af594;
        case 0x4af598u: goto label_4af598;
        case 0x4af59cu: goto label_4af59c;
        case 0x4af5a0u: goto label_4af5a0;
        case 0x4af5a4u: goto label_4af5a4;
        case 0x4af5a8u: goto label_4af5a8;
        case 0x4af5acu: goto label_4af5ac;
        case 0x4af5b0u: goto label_4af5b0;
        case 0x4af5b4u: goto label_4af5b4;
        case 0x4af5b8u: goto label_4af5b8;
        case 0x4af5bcu: goto label_4af5bc;
        case 0x4af5c0u: goto label_4af5c0;
        case 0x4af5c4u: goto label_4af5c4;
        case 0x4af5c8u: goto label_4af5c8;
        case 0x4af5ccu: goto label_4af5cc;
        case 0x4af5d0u: goto label_4af5d0;
        case 0x4af5d4u: goto label_4af5d4;
        case 0x4af5d8u: goto label_4af5d8;
        case 0x4af5dcu: goto label_4af5dc;
        case 0x4af5e0u: goto label_4af5e0;
        case 0x4af5e4u: goto label_4af5e4;
        case 0x4af5e8u: goto label_4af5e8;
        case 0x4af5ecu: goto label_4af5ec;
        case 0x4af5f0u: goto label_4af5f0;
        case 0x4af5f4u: goto label_4af5f4;
        case 0x4af5f8u: goto label_4af5f8;
        case 0x4af5fcu: goto label_4af5fc;
        case 0x4af600u: goto label_4af600;
        case 0x4af604u: goto label_4af604;
        case 0x4af608u: goto label_4af608;
        case 0x4af60cu: goto label_4af60c;
        case 0x4af610u: goto label_4af610;
        case 0x4af614u: goto label_4af614;
        case 0x4af618u: goto label_4af618;
        case 0x4af61cu: goto label_4af61c;
        case 0x4af620u: goto label_4af620;
        case 0x4af624u: goto label_4af624;
        case 0x4af628u: goto label_4af628;
        case 0x4af62cu: goto label_4af62c;
        case 0x4af630u: goto label_4af630;
        case 0x4af634u: goto label_4af634;
        case 0x4af638u: goto label_4af638;
        case 0x4af63cu: goto label_4af63c;
        case 0x4af640u: goto label_4af640;
        case 0x4af644u: goto label_4af644;
        case 0x4af648u: goto label_4af648;
        case 0x4af64cu: goto label_4af64c;
        case 0x4af650u: goto label_4af650;
        case 0x4af654u: goto label_4af654;
        case 0x4af658u: goto label_4af658;
        case 0x4af65cu: goto label_4af65c;
        case 0x4af660u: goto label_4af660;
        case 0x4af664u: goto label_4af664;
        case 0x4af668u: goto label_4af668;
        case 0x4af66cu: goto label_4af66c;
        case 0x4af670u: goto label_4af670;
        case 0x4af674u: goto label_4af674;
        case 0x4af678u: goto label_4af678;
        case 0x4af67cu: goto label_4af67c;
        case 0x4af680u: goto label_4af680;
        case 0x4af684u: goto label_4af684;
        case 0x4af688u: goto label_4af688;
        case 0x4af68cu: goto label_4af68c;
        case 0x4af690u: goto label_4af690;
        case 0x4af694u: goto label_4af694;
        case 0x4af698u: goto label_4af698;
        case 0x4af69cu: goto label_4af69c;
        case 0x4af6a0u: goto label_4af6a0;
        case 0x4af6a4u: goto label_4af6a4;
        case 0x4af6a8u: goto label_4af6a8;
        case 0x4af6acu: goto label_4af6ac;
        case 0x4af6b0u: goto label_4af6b0;
        case 0x4af6b4u: goto label_4af6b4;
        case 0x4af6b8u: goto label_4af6b8;
        case 0x4af6bcu: goto label_4af6bc;
        case 0x4af6c0u: goto label_4af6c0;
        case 0x4af6c4u: goto label_4af6c4;
        case 0x4af6c8u: goto label_4af6c8;
        case 0x4af6ccu: goto label_4af6cc;
        case 0x4af6d0u: goto label_4af6d0;
        case 0x4af6d4u: goto label_4af6d4;
        case 0x4af6d8u: goto label_4af6d8;
        case 0x4af6dcu: goto label_4af6dc;
        case 0x4af6e0u: goto label_4af6e0;
        case 0x4af6e4u: goto label_4af6e4;
        case 0x4af6e8u: goto label_4af6e8;
        case 0x4af6ecu: goto label_4af6ec;
        case 0x4af6f0u: goto label_4af6f0;
        case 0x4af6f4u: goto label_4af6f4;
        case 0x4af6f8u: goto label_4af6f8;
        case 0x4af6fcu: goto label_4af6fc;
        case 0x4af700u: goto label_4af700;
        case 0x4af704u: goto label_4af704;
        case 0x4af708u: goto label_4af708;
        case 0x4af70cu: goto label_4af70c;
        case 0x4af710u: goto label_4af710;
        case 0x4af714u: goto label_4af714;
        case 0x4af718u: goto label_4af718;
        case 0x4af71cu: goto label_4af71c;
        case 0x4af720u: goto label_4af720;
        case 0x4af724u: goto label_4af724;
        case 0x4af728u: goto label_4af728;
        case 0x4af72cu: goto label_4af72c;
        case 0x4af730u: goto label_4af730;
        case 0x4af734u: goto label_4af734;
        case 0x4af738u: goto label_4af738;
        case 0x4af73cu: goto label_4af73c;
        case 0x4af740u: goto label_4af740;
        case 0x4af744u: goto label_4af744;
        case 0x4af748u: goto label_4af748;
        case 0x4af74cu: goto label_4af74c;
        case 0x4af750u: goto label_4af750;
        case 0x4af754u: goto label_4af754;
        case 0x4af758u: goto label_4af758;
        case 0x4af75cu: goto label_4af75c;
        case 0x4af760u: goto label_4af760;
        case 0x4af764u: goto label_4af764;
        case 0x4af768u: goto label_4af768;
        case 0x4af76cu: goto label_4af76c;
        case 0x4af770u: goto label_4af770;
        case 0x4af774u: goto label_4af774;
        case 0x4af778u: goto label_4af778;
        case 0x4af77cu: goto label_4af77c;
        case 0x4af780u: goto label_4af780;
        case 0x4af784u: goto label_4af784;
        case 0x4af788u: goto label_4af788;
        case 0x4af78cu: goto label_4af78c;
        case 0x4af790u: goto label_4af790;
        case 0x4af794u: goto label_4af794;
        case 0x4af798u: goto label_4af798;
        case 0x4af79cu: goto label_4af79c;
        case 0x4af7a0u: goto label_4af7a0;
        case 0x4af7a4u: goto label_4af7a4;
        case 0x4af7a8u: goto label_4af7a8;
        case 0x4af7acu: goto label_4af7ac;
        case 0x4af7b0u: goto label_4af7b0;
        case 0x4af7b4u: goto label_4af7b4;
        case 0x4af7b8u: goto label_4af7b8;
        case 0x4af7bcu: goto label_4af7bc;
        case 0x4af7c0u: goto label_4af7c0;
        case 0x4af7c4u: goto label_4af7c4;
        case 0x4af7c8u: goto label_4af7c8;
        case 0x4af7ccu: goto label_4af7cc;
        case 0x4af7d0u: goto label_4af7d0;
        case 0x4af7d4u: goto label_4af7d4;
        case 0x4af7d8u: goto label_4af7d8;
        case 0x4af7dcu: goto label_4af7dc;
        case 0x4af7e0u: goto label_4af7e0;
        case 0x4af7e4u: goto label_4af7e4;
        case 0x4af7e8u: goto label_4af7e8;
        case 0x4af7ecu: goto label_4af7ec;
        case 0x4af7f0u: goto label_4af7f0;
        case 0x4af7f4u: goto label_4af7f4;
        case 0x4af7f8u: goto label_4af7f8;
        case 0x4af7fcu: goto label_4af7fc;
        case 0x4af800u: goto label_4af800;
        case 0x4af804u: goto label_4af804;
        case 0x4af808u: goto label_4af808;
        case 0x4af80cu: goto label_4af80c;
        case 0x4af810u: goto label_4af810;
        case 0x4af814u: goto label_4af814;
        case 0x4af818u: goto label_4af818;
        case 0x4af81cu: goto label_4af81c;
        case 0x4af820u: goto label_4af820;
        case 0x4af824u: goto label_4af824;
        case 0x4af828u: goto label_4af828;
        case 0x4af82cu: goto label_4af82c;
        case 0x4af830u: goto label_4af830;
        case 0x4af834u: goto label_4af834;
        case 0x4af838u: goto label_4af838;
        case 0x4af83cu: goto label_4af83c;
        case 0x4af840u: goto label_4af840;
        case 0x4af844u: goto label_4af844;
        case 0x4af848u: goto label_4af848;
        case 0x4af84cu: goto label_4af84c;
        case 0x4af850u: goto label_4af850;
        case 0x4af854u: goto label_4af854;
        case 0x4af858u: goto label_4af858;
        case 0x4af85cu: goto label_4af85c;
        case 0x4af860u: goto label_4af860;
        case 0x4af864u: goto label_4af864;
        case 0x4af868u: goto label_4af868;
        case 0x4af86cu: goto label_4af86c;
        case 0x4af870u: goto label_4af870;
        case 0x4af874u: goto label_4af874;
        case 0x4af878u: goto label_4af878;
        case 0x4af87cu: goto label_4af87c;
        case 0x4af880u: goto label_4af880;
        case 0x4af884u: goto label_4af884;
        case 0x4af888u: goto label_4af888;
        case 0x4af88cu: goto label_4af88c;
        case 0x4af890u: goto label_4af890;
        case 0x4af894u: goto label_4af894;
        case 0x4af898u: goto label_4af898;
        case 0x4af89cu: goto label_4af89c;
        case 0x4af8a0u: goto label_4af8a0;
        case 0x4af8a4u: goto label_4af8a4;
        case 0x4af8a8u: goto label_4af8a8;
        case 0x4af8acu: goto label_4af8ac;
        case 0x4af8b0u: goto label_4af8b0;
        case 0x4af8b4u: goto label_4af8b4;
        case 0x4af8b8u: goto label_4af8b8;
        case 0x4af8bcu: goto label_4af8bc;
        case 0x4af8c0u: goto label_4af8c0;
        case 0x4af8c4u: goto label_4af8c4;
        case 0x4af8c8u: goto label_4af8c8;
        case 0x4af8ccu: goto label_4af8cc;
        case 0x4af8d0u: goto label_4af8d0;
        case 0x4af8d4u: goto label_4af8d4;
        case 0x4af8d8u: goto label_4af8d8;
        case 0x4af8dcu: goto label_4af8dc;
        case 0x4af8e0u: goto label_4af8e0;
        case 0x4af8e4u: goto label_4af8e4;
        case 0x4af8e8u: goto label_4af8e8;
        case 0x4af8ecu: goto label_4af8ec;
        case 0x4af8f0u: goto label_4af8f0;
        case 0x4af8f4u: goto label_4af8f4;
        case 0x4af8f8u: goto label_4af8f8;
        case 0x4af8fcu: goto label_4af8fc;
        case 0x4af900u: goto label_4af900;
        case 0x4af904u: goto label_4af904;
        case 0x4af908u: goto label_4af908;
        case 0x4af90cu: goto label_4af90c;
        case 0x4af910u: goto label_4af910;
        case 0x4af914u: goto label_4af914;
        case 0x4af918u: goto label_4af918;
        case 0x4af91cu: goto label_4af91c;
        case 0x4af920u: goto label_4af920;
        case 0x4af924u: goto label_4af924;
        case 0x4af928u: goto label_4af928;
        case 0x4af92cu: goto label_4af92c;
        case 0x4af930u: goto label_4af930;
        case 0x4af934u: goto label_4af934;
        case 0x4af938u: goto label_4af938;
        case 0x4af93cu: goto label_4af93c;
        case 0x4af940u: goto label_4af940;
        case 0x4af944u: goto label_4af944;
        case 0x4af948u: goto label_4af948;
        case 0x4af94cu: goto label_4af94c;
        case 0x4af950u: goto label_4af950;
        case 0x4af954u: goto label_4af954;
        case 0x4af958u: goto label_4af958;
        case 0x4af95cu: goto label_4af95c;
        case 0x4af960u: goto label_4af960;
        case 0x4af964u: goto label_4af964;
        case 0x4af968u: goto label_4af968;
        case 0x4af96cu: goto label_4af96c;
        case 0x4af970u: goto label_4af970;
        case 0x4af974u: goto label_4af974;
        case 0x4af978u: goto label_4af978;
        case 0x4af97cu: goto label_4af97c;
        case 0x4af980u: goto label_4af980;
        case 0x4af984u: goto label_4af984;
        case 0x4af988u: goto label_4af988;
        case 0x4af98cu: goto label_4af98c;
        case 0x4af990u: goto label_4af990;
        case 0x4af994u: goto label_4af994;
        case 0x4af998u: goto label_4af998;
        case 0x4af99cu: goto label_4af99c;
        case 0x4af9a0u: goto label_4af9a0;
        case 0x4af9a4u: goto label_4af9a4;
        case 0x4af9a8u: goto label_4af9a8;
        case 0x4af9acu: goto label_4af9ac;
        case 0x4af9b0u: goto label_4af9b0;
        case 0x4af9b4u: goto label_4af9b4;
        case 0x4af9b8u: goto label_4af9b8;
        case 0x4af9bcu: goto label_4af9bc;
        case 0x4af9c0u: goto label_4af9c0;
        case 0x4af9c4u: goto label_4af9c4;
        case 0x4af9c8u: goto label_4af9c8;
        case 0x4af9ccu: goto label_4af9cc;
        case 0x4af9d0u: goto label_4af9d0;
        case 0x4af9d4u: goto label_4af9d4;
        case 0x4af9d8u: goto label_4af9d8;
        case 0x4af9dcu: goto label_4af9dc;
        case 0x4af9e0u: goto label_4af9e0;
        case 0x4af9e4u: goto label_4af9e4;
        case 0x4af9e8u: goto label_4af9e8;
        case 0x4af9ecu: goto label_4af9ec;
        case 0x4af9f0u: goto label_4af9f0;
        case 0x4af9f4u: goto label_4af9f4;
        case 0x4af9f8u: goto label_4af9f8;
        case 0x4af9fcu: goto label_4af9fc;
        case 0x4afa00u: goto label_4afa00;
        case 0x4afa04u: goto label_4afa04;
        case 0x4afa08u: goto label_4afa08;
        case 0x4afa0cu: goto label_4afa0c;
        case 0x4afa10u: goto label_4afa10;
        case 0x4afa14u: goto label_4afa14;
        case 0x4afa18u: goto label_4afa18;
        case 0x4afa1cu: goto label_4afa1c;
        case 0x4afa20u: goto label_4afa20;
        case 0x4afa24u: goto label_4afa24;
        case 0x4afa28u: goto label_4afa28;
        case 0x4afa2cu: goto label_4afa2c;
        case 0x4afa30u: goto label_4afa30;
        case 0x4afa34u: goto label_4afa34;
        case 0x4afa38u: goto label_4afa38;
        case 0x4afa3cu: goto label_4afa3c;
        case 0x4afa40u: goto label_4afa40;
        case 0x4afa44u: goto label_4afa44;
        case 0x4afa48u: goto label_4afa48;
        case 0x4afa4cu: goto label_4afa4c;
        case 0x4afa50u: goto label_4afa50;
        case 0x4afa54u: goto label_4afa54;
        case 0x4afa58u: goto label_4afa58;
        case 0x4afa5cu: goto label_4afa5c;
        case 0x4afa60u: goto label_4afa60;
        case 0x4afa64u: goto label_4afa64;
        case 0x4afa68u: goto label_4afa68;
        case 0x4afa6cu: goto label_4afa6c;
        case 0x4afa70u: goto label_4afa70;
        case 0x4afa74u: goto label_4afa74;
        case 0x4afa78u: goto label_4afa78;
        case 0x4afa7cu: goto label_4afa7c;
        case 0x4afa80u: goto label_4afa80;
        case 0x4afa84u: goto label_4afa84;
        case 0x4afa88u: goto label_4afa88;
        case 0x4afa8cu: goto label_4afa8c;
        case 0x4afa90u: goto label_4afa90;
        case 0x4afa94u: goto label_4afa94;
        case 0x4afa98u: goto label_4afa98;
        case 0x4afa9cu: goto label_4afa9c;
        case 0x4afaa0u: goto label_4afaa0;
        case 0x4afaa4u: goto label_4afaa4;
        case 0x4afaa8u: goto label_4afaa8;
        case 0x4afaacu: goto label_4afaac;
        case 0x4afab0u: goto label_4afab0;
        case 0x4afab4u: goto label_4afab4;
        case 0x4afab8u: goto label_4afab8;
        case 0x4afabcu: goto label_4afabc;
        case 0x4afac0u: goto label_4afac0;
        case 0x4afac4u: goto label_4afac4;
        case 0x4afac8u: goto label_4afac8;
        case 0x4afaccu: goto label_4afacc;
        case 0x4afad0u: goto label_4afad0;
        case 0x4afad4u: goto label_4afad4;
        case 0x4afad8u: goto label_4afad8;
        case 0x4afadcu: goto label_4afadc;
        case 0x4afae0u: goto label_4afae0;
        case 0x4afae4u: goto label_4afae4;
        case 0x4afae8u: goto label_4afae8;
        case 0x4afaecu: goto label_4afaec;
        case 0x4afaf0u: goto label_4afaf0;
        case 0x4afaf4u: goto label_4afaf4;
        case 0x4afaf8u: goto label_4afaf8;
        case 0x4afafcu: goto label_4afafc;
        case 0x4afb00u: goto label_4afb00;
        case 0x4afb04u: goto label_4afb04;
        case 0x4afb08u: goto label_4afb08;
        case 0x4afb0cu: goto label_4afb0c;
        case 0x4afb10u: goto label_4afb10;
        case 0x4afb14u: goto label_4afb14;
        case 0x4afb18u: goto label_4afb18;
        case 0x4afb1cu: goto label_4afb1c;
        case 0x4afb20u: goto label_4afb20;
        case 0x4afb24u: goto label_4afb24;
        case 0x4afb28u: goto label_4afb28;
        case 0x4afb2cu: goto label_4afb2c;
        case 0x4afb30u: goto label_4afb30;
        case 0x4afb34u: goto label_4afb34;
        case 0x4afb38u: goto label_4afb38;
        case 0x4afb3cu: goto label_4afb3c;
        case 0x4afb40u: goto label_4afb40;
        case 0x4afb44u: goto label_4afb44;
        case 0x4afb48u: goto label_4afb48;
        case 0x4afb4cu: goto label_4afb4c;
        case 0x4afb50u: goto label_4afb50;
        case 0x4afb54u: goto label_4afb54;
        case 0x4afb58u: goto label_4afb58;
        case 0x4afb5cu: goto label_4afb5c;
        case 0x4afb60u: goto label_4afb60;
        case 0x4afb64u: goto label_4afb64;
        case 0x4afb68u: goto label_4afb68;
        case 0x4afb6cu: goto label_4afb6c;
        case 0x4afb70u: goto label_4afb70;
        case 0x4afb74u: goto label_4afb74;
        case 0x4afb78u: goto label_4afb78;
        case 0x4afb7cu: goto label_4afb7c;
        case 0x4afb80u: goto label_4afb80;
        case 0x4afb84u: goto label_4afb84;
        case 0x4afb88u: goto label_4afb88;
        case 0x4afb8cu: goto label_4afb8c;
        case 0x4afb90u: goto label_4afb90;
        case 0x4afb94u: goto label_4afb94;
        case 0x4afb98u: goto label_4afb98;
        case 0x4afb9cu: goto label_4afb9c;
        case 0x4afba0u: goto label_4afba0;
        case 0x4afba4u: goto label_4afba4;
        case 0x4afba8u: goto label_4afba8;
        case 0x4afbacu: goto label_4afbac;
        case 0x4afbb0u: goto label_4afbb0;
        case 0x4afbb4u: goto label_4afbb4;
        case 0x4afbb8u: goto label_4afbb8;
        case 0x4afbbcu: goto label_4afbbc;
        case 0x4afbc0u: goto label_4afbc0;
        case 0x4afbc4u: goto label_4afbc4;
        case 0x4afbc8u: goto label_4afbc8;
        case 0x4afbccu: goto label_4afbcc;
        case 0x4afbd0u: goto label_4afbd0;
        case 0x4afbd4u: goto label_4afbd4;
        case 0x4afbd8u: goto label_4afbd8;
        case 0x4afbdcu: goto label_4afbdc;
        case 0x4afbe0u: goto label_4afbe0;
        case 0x4afbe4u: goto label_4afbe4;
        case 0x4afbe8u: goto label_4afbe8;
        case 0x4afbecu: goto label_4afbec;
        case 0x4afbf0u: goto label_4afbf0;
        case 0x4afbf4u: goto label_4afbf4;
        case 0x4afbf8u: goto label_4afbf8;
        case 0x4afbfcu: goto label_4afbfc;
        case 0x4afc00u: goto label_4afc00;
        case 0x4afc04u: goto label_4afc04;
        case 0x4afc08u: goto label_4afc08;
        case 0x4afc0cu: goto label_4afc0c;
        case 0x4afc10u: goto label_4afc10;
        case 0x4afc14u: goto label_4afc14;
        case 0x4afc18u: goto label_4afc18;
        case 0x4afc1cu: goto label_4afc1c;
        case 0x4afc20u: goto label_4afc20;
        case 0x4afc24u: goto label_4afc24;
        case 0x4afc28u: goto label_4afc28;
        case 0x4afc2cu: goto label_4afc2c;
        case 0x4afc30u: goto label_4afc30;
        case 0x4afc34u: goto label_4afc34;
        case 0x4afc38u: goto label_4afc38;
        case 0x4afc3cu: goto label_4afc3c;
        case 0x4afc40u: goto label_4afc40;
        case 0x4afc44u: goto label_4afc44;
        case 0x4afc48u: goto label_4afc48;
        case 0x4afc4cu: goto label_4afc4c;
        case 0x4afc50u: goto label_4afc50;
        case 0x4afc54u: goto label_4afc54;
        case 0x4afc58u: goto label_4afc58;
        case 0x4afc5cu: goto label_4afc5c;
        case 0x4afc60u: goto label_4afc60;
        case 0x4afc64u: goto label_4afc64;
        case 0x4afc68u: goto label_4afc68;
        case 0x4afc6cu: goto label_4afc6c;
        case 0x4afc70u: goto label_4afc70;
        case 0x4afc74u: goto label_4afc74;
        case 0x4afc78u: goto label_4afc78;
        case 0x4afc7cu: goto label_4afc7c;
        case 0x4afc80u: goto label_4afc80;
        case 0x4afc84u: goto label_4afc84;
        case 0x4afc88u: goto label_4afc88;
        case 0x4afc8cu: goto label_4afc8c;
        case 0x4afc90u: goto label_4afc90;
        case 0x4afc94u: goto label_4afc94;
        case 0x4afc98u: goto label_4afc98;
        case 0x4afc9cu: goto label_4afc9c;
        case 0x4afca0u: goto label_4afca0;
        case 0x4afca4u: goto label_4afca4;
        case 0x4afca8u: goto label_4afca8;
        case 0x4afcacu: goto label_4afcac;
        case 0x4afcb0u: goto label_4afcb0;
        case 0x4afcb4u: goto label_4afcb4;
        case 0x4afcb8u: goto label_4afcb8;
        case 0x4afcbcu: goto label_4afcbc;
        case 0x4afcc0u: goto label_4afcc0;
        case 0x4afcc4u: goto label_4afcc4;
        case 0x4afcc8u: goto label_4afcc8;
        case 0x4afcccu: goto label_4afccc;
        case 0x4afcd0u: goto label_4afcd0;
        case 0x4afcd4u: goto label_4afcd4;
        case 0x4afcd8u: goto label_4afcd8;
        case 0x4afcdcu: goto label_4afcdc;
        case 0x4afce0u: goto label_4afce0;
        case 0x4afce4u: goto label_4afce4;
        case 0x4afce8u: goto label_4afce8;
        case 0x4afcecu: goto label_4afcec;
        case 0x4afcf0u: goto label_4afcf0;
        case 0x4afcf4u: goto label_4afcf4;
        case 0x4afcf8u: goto label_4afcf8;
        case 0x4afcfcu: goto label_4afcfc;
        case 0x4afd00u: goto label_4afd00;
        case 0x4afd04u: goto label_4afd04;
        case 0x4afd08u: goto label_4afd08;
        case 0x4afd0cu: goto label_4afd0c;
        case 0x4afd10u: goto label_4afd10;
        case 0x4afd14u: goto label_4afd14;
        case 0x4afd18u: goto label_4afd18;
        case 0x4afd1cu: goto label_4afd1c;
        case 0x4afd20u: goto label_4afd20;
        case 0x4afd24u: goto label_4afd24;
        case 0x4afd28u: goto label_4afd28;
        case 0x4afd2cu: goto label_4afd2c;
        case 0x4afd30u: goto label_4afd30;
        case 0x4afd34u: goto label_4afd34;
        case 0x4afd38u: goto label_4afd38;
        case 0x4afd3cu: goto label_4afd3c;
        case 0x4afd40u: goto label_4afd40;
        case 0x4afd44u: goto label_4afd44;
        case 0x4afd48u: goto label_4afd48;
        case 0x4afd4cu: goto label_4afd4c;
        case 0x4afd50u: goto label_4afd50;
        case 0x4afd54u: goto label_4afd54;
        case 0x4afd58u: goto label_4afd58;
        case 0x4afd5cu: goto label_4afd5c;
        case 0x4afd60u: goto label_4afd60;
        case 0x4afd64u: goto label_4afd64;
        case 0x4afd68u: goto label_4afd68;
        case 0x4afd6cu: goto label_4afd6c;
        case 0x4afd70u: goto label_4afd70;
        case 0x4afd74u: goto label_4afd74;
        case 0x4afd78u: goto label_4afd78;
        case 0x4afd7cu: goto label_4afd7c;
        case 0x4afd80u: goto label_4afd80;
        case 0x4afd84u: goto label_4afd84;
        case 0x4afd88u: goto label_4afd88;
        case 0x4afd8cu: goto label_4afd8c;
        case 0x4afd90u: goto label_4afd90;
        case 0x4afd94u: goto label_4afd94;
        case 0x4afd98u: goto label_4afd98;
        case 0x4afd9cu: goto label_4afd9c;
        case 0x4afda0u: goto label_4afda0;
        case 0x4afda4u: goto label_4afda4;
        case 0x4afda8u: goto label_4afda8;
        case 0x4afdacu: goto label_4afdac;
        case 0x4afdb0u: goto label_4afdb0;
        case 0x4afdb4u: goto label_4afdb4;
        case 0x4afdb8u: goto label_4afdb8;
        case 0x4afdbcu: goto label_4afdbc;
        case 0x4afdc0u: goto label_4afdc0;
        case 0x4afdc4u: goto label_4afdc4;
        case 0x4afdc8u: goto label_4afdc8;
        case 0x4afdccu: goto label_4afdcc;
        case 0x4afdd0u: goto label_4afdd0;
        case 0x4afdd4u: goto label_4afdd4;
        case 0x4afdd8u: goto label_4afdd8;
        case 0x4afddcu: goto label_4afddc;
        case 0x4afde0u: goto label_4afde0;
        case 0x4afde4u: goto label_4afde4;
        case 0x4afde8u: goto label_4afde8;
        case 0x4afdecu: goto label_4afdec;
        case 0x4afdf0u: goto label_4afdf0;
        case 0x4afdf4u: goto label_4afdf4;
        case 0x4afdf8u: goto label_4afdf8;
        case 0x4afdfcu: goto label_4afdfc;
        case 0x4afe00u: goto label_4afe00;
        case 0x4afe04u: goto label_4afe04;
        case 0x4afe08u: goto label_4afe08;
        case 0x4afe0cu: goto label_4afe0c;
        case 0x4afe10u: goto label_4afe10;
        case 0x4afe14u: goto label_4afe14;
        case 0x4afe18u: goto label_4afe18;
        case 0x4afe1cu: goto label_4afe1c;
        case 0x4afe20u: goto label_4afe20;
        case 0x4afe24u: goto label_4afe24;
        case 0x4afe28u: goto label_4afe28;
        case 0x4afe2cu: goto label_4afe2c;
        case 0x4afe30u: goto label_4afe30;
        case 0x4afe34u: goto label_4afe34;
        case 0x4afe38u: goto label_4afe38;
        case 0x4afe3cu: goto label_4afe3c;
        case 0x4afe40u: goto label_4afe40;
        case 0x4afe44u: goto label_4afe44;
        case 0x4afe48u: goto label_4afe48;
        case 0x4afe4cu: goto label_4afe4c;
        case 0x4afe50u: goto label_4afe50;
        case 0x4afe54u: goto label_4afe54;
        case 0x4afe58u: goto label_4afe58;
        case 0x4afe5cu: goto label_4afe5c;
        case 0x4afe60u: goto label_4afe60;
        case 0x4afe64u: goto label_4afe64;
        case 0x4afe68u: goto label_4afe68;
        case 0x4afe6cu: goto label_4afe6c;
        case 0x4afe70u: goto label_4afe70;
        case 0x4afe74u: goto label_4afe74;
        case 0x4afe78u: goto label_4afe78;
        case 0x4afe7cu: goto label_4afe7c;
        case 0x4afe80u: goto label_4afe80;
        case 0x4afe84u: goto label_4afe84;
        case 0x4afe88u: goto label_4afe88;
        case 0x4afe8cu: goto label_4afe8c;
        case 0x4afe90u: goto label_4afe90;
        case 0x4afe94u: goto label_4afe94;
        case 0x4afe98u: goto label_4afe98;
        case 0x4afe9cu: goto label_4afe9c;
        case 0x4afea0u: goto label_4afea0;
        case 0x4afea4u: goto label_4afea4;
        case 0x4afea8u: goto label_4afea8;
        case 0x4afeacu: goto label_4afeac;
        case 0x4afeb0u: goto label_4afeb0;
        case 0x4afeb4u: goto label_4afeb4;
        case 0x4afeb8u: goto label_4afeb8;
        case 0x4afebcu: goto label_4afebc;
        case 0x4afec0u: goto label_4afec0;
        case 0x4afec4u: goto label_4afec4;
        case 0x4afec8u: goto label_4afec8;
        case 0x4afeccu: goto label_4afecc;
        case 0x4afed0u: goto label_4afed0;
        case 0x4afed4u: goto label_4afed4;
        case 0x4afed8u: goto label_4afed8;
        case 0x4afedcu: goto label_4afedc;
        case 0x4afee0u: goto label_4afee0;
        case 0x4afee4u: goto label_4afee4;
        case 0x4afee8u: goto label_4afee8;
        case 0x4afeecu: goto label_4afeec;
        case 0x4afef0u: goto label_4afef0;
        case 0x4afef4u: goto label_4afef4;
        case 0x4afef8u: goto label_4afef8;
        case 0x4afefcu: goto label_4afefc;
        case 0x4aff00u: goto label_4aff00;
        case 0x4aff04u: goto label_4aff04;
        case 0x4aff08u: goto label_4aff08;
        case 0x4aff0cu: goto label_4aff0c;
        case 0x4aff10u: goto label_4aff10;
        case 0x4aff14u: goto label_4aff14;
        case 0x4aff18u: goto label_4aff18;
        case 0x4aff1cu: goto label_4aff1c;
        case 0x4aff20u: goto label_4aff20;
        case 0x4aff24u: goto label_4aff24;
        case 0x4aff28u: goto label_4aff28;
        case 0x4aff2cu: goto label_4aff2c;
        case 0x4aff30u: goto label_4aff30;
        case 0x4aff34u: goto label_4aff34;
        case 0x4aff38u: goto label_4aff38;
        case 0x4aff3cu: goto label_4aff3c;
        case 0x4aff40u: goto label_4aff40;
        case 0x4aff44u: goto label_4aff44;
        case 0x4aff48u: goto label_4aff48;
        case 0x4aff4cu: goto label_4aff4c;
        case 0x4aff50u: goto label_4aff50;
        case 0x4aff54u: goto label_4aff54;
        case 0x4aff58u: goto label_4aff58;
        case 0x4aff5cu: goto label_4aff5c;
        case 0x4aff60u: goto label_4aff60;
        case 0x4aff64u: goto label_4aff64;
        case 0x4aff68u: goto label_4aff68;
        case 0x4aff6cu: goto label_4aff6c;
        case 0x4aff70u: goto label_4aff70;
        case 0x4aff74u: goto label_4aff74;
        case 0x4aff78u: goto label_4aff78;
        case 0x4aff7cu: goto label_4aff7c;
        case 0x4aff80u: goto label_4aff80;
        case 0x4aff84u: goto label_4aff84;
        case 0x4aff88u: goto label_4aff88;
        case 0x4aff8cu: goto label_4aff8c;
        case 0x4aff90u: goto label_4aff90;
        case 0x4aff94u: goto label_4aff94;
        case 0x4aff98u: goto label_4aff98;
        case 0x4aff9cu: goto label_4aff9c;
        case 0x4affa0u: goto label_4affa0;
        case 0x4affa4u: goto label_4affa4;
        case 0x4affa8u: goto label_4affa8;
        case 0x4affacu: goto label_4affac;
        case 0x4affb0u: goto label_4affb0;
        case 0x4affb4u: goto label_4affb4;
        case 0x4affb8u: goto label_4affb8;
        case 0x4affbcu: goto label_4affbc;
        case 0x4affc0u: goto label_4affc0;
        case 0x4affc4u: goto label_4affc4;
        case 0x4affc8u: goto label_4affc8;
        case 0x4affccu: goto label_4affcc;
        case 0x4affd0u: goto label_4affd0;
        case 0x4affd4u: goto label_4affd4;
        case 0x4affd8u: goto label_4affd8;
        case 0x4affdcu: goto label_4affdc;
        case 0x4affe0u: goto label_4affe0;
        case 0x4affe4u: goto label_4affe4;
        case 0x4affe8u: goto label_4affe8;
        case 0x4affecu: goto label_4affec;
        default: break;
    }

    ctx->pc = 0x4adb20u;

label_4adb20:
    // 0x4adb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4adb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4adb24:
    // 0x4adb24: 0x3c02c0b3  lui         $v0, 0xC0B3
    ctx->pc = 0x4adb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49331 << 16));
label_4adb28:
    // 0x4adb28: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x4adb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_4adb2c:
    // 0x4adb2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4adb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4adb30:
    // 0x4adb30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4adb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4adb34:
    // 0x4adb34: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x4adb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_4adb38:
    // 0x4adb38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4adb38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4adb3c:
    // 0x4adb3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4adb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4adb40:
    // 0x4adb40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4adb40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4adb44:
    // 0x4adb44: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4adb44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4adb48:
    // 0x4adb48: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4adb48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4adb4c:
    // 0x4adb4c: 0xc04cbd8  jal         func_132F60
label_4adb50:
    if (ctx->pc == 0x4ADB50u) {
        ctx->pc = 0x4ADB50u;
            // 0x4adb50: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x4ADB54u;
        goto label_4adb54;
    }
    ctx->pc = 0x4ADB4Cu;
    SET_GPR_U32(ctx, 31, 0x4ADB54u);
    ctx->pc = 0x4ADB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADB4Cu;
            // 0x4adb50: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADB54u; }
        if (ctx->pc != 0x4ADB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADB54u; }
        if (ctx->pc != 0x4ADB54u) { return; }
    }
    ctx->pc = 0x4ADB54u;
label_4adb54:
    // 0x4adb54: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x4adb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4adb58:
    // 0x4adb58: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4adb58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4adb5c:
    // 0x4adb5c: 0x0  nop
    ctx->pc = 0x4adb5cu;
    // NOP
label_4adb60:
    // 0x4adb60: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x4adb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_4adb64:
    // 0x4adb64: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x4adb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4adb68:
    // 0x4adb68: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x4adb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_4adb6c:
    // 0x4adb6c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x4adb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4adb70:
    // 0x4adb70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4adb70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4adb74:
    // 0x4adb74: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4adb74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4adb78:
    // 0x4adb78: 0x0  nop
    ctx->pc = 0x4adb78u;
    // NOP
label_4adb7c:
    // 0x4adb7c: 0xae0400a0  sw          $a0, 0xA0($s0)
    ctx->pc = 0x4adb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 4));
label_4adb80:
    // 0x4adb80: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x4adb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_4adb84:
    // 0x4adb84: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x4adb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_4adb88:
    // 0x4adb88: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x4adb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_4adb8c:
    // 0x4adb8c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x4adb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4adb90:
    // 0x4adb90: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4adb90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4adb94:
    // 0x4adb94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4adb98:
    if (ctx->pc == 0x4ADB98u) {
        ctx->pc = 0x4ADB98u;
            // 0x4adb98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4ADB9Cu;
        goto label_4adb9c;
    }
    ctx->pc = 0x4ADB94u;
    {
        const bool branch_taken_0x4adb94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4ADB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADB94u;
            // 0x4adb98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adb94) {
            ctx->pc = 0x4ADBA0u;
            goto label_4adba0;
        }
    }
    ctx->pc = 0x4ADB9Cu;
label_4adb9c:
    // 0x4adb9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4adb9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4adba0:
    // 0x4adba0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4adba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4adba4:
    // 0x4adba4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4adba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4adba8:
    // 0x4adba8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x4adba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4adbac:
    // 0x4adbac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4adbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4adbb0:
    // 0x4adbb0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4adbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4adbb4:
    // 0x4adbb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4adbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4adbb8:
    // 0x4adbb8: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4adbbc:
    if (ctx->pc == 0x4ADBBCu) {
        ctx->pc = 0x4ADBBCu;
            // 0x4adbbc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4ADBC0u;
        goto label_4adbc0;
    }
    ctx->pc = 0x4ADBB8u;
    {
        const bool branch_taken_0x4adbb8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4adbb8) {
            ctx->pc = 0x4ADBBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADBB8u;
            // 0x4adbbc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ADBCCu;
            goto label_4adbcc;
        }
    }
    ctx->pc = 0x4ADBC0u;
label_4adbc0:
    // 0x4adbc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4adbc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4adbc4:
    // 0x4adbc4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4adbc8:
    if (ctx->pc == 0x4ADBC8u) {
        ctx->pc = 0x4ADBC8u;
            // 0x4adbc8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4ADBCCu;
        goto label_4adbcc;
    }
    ctx->pc = 0x4ADBC4u;
    {
        const bool branch_taken_0x4adbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADBC4u;
            // 0x4adbc8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adbc4) {
            ctx->pc = 0x4ADBE4u;
            goto label_4adbe4;
        }
    }
    ctx->pc = 0x4ADBCCu;
label_4adbcc:
    // 0x4adbcc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4adbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4adbd0:
    // 0x4adbd0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4adbd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4adbd4:
    // 0x4adbd4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4adbd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4adbd8:
    // 0x4adbd8: 0x0  nop
    ctx->pc = 0x4adbd8u;
    // NOP
label_4adbdc:
    // 0x4adbdc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4adbdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4adbe0:
    // 0x4adbe0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4adbe0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4adbe4:
    // 0x4adbe4: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x4adbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4adbe8:
    // 0x4adbe8: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x4adbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_4adbec:
    // 0x4adbec: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4adbecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4adbf0:
    // 0x4adbf0: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x4adbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_4adbf4:
    // 0x4adbf4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4adbf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4adbf8:
    // 0x4adbf8: 0x3464f000  ori         $a0, $v1, 0xF000
    ctx->pc = 0x4adbf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_4adbfc:
    // 0x4adbfc: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x4adbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_4adc00:
    // 0x4adc00: 0xc602009c  lwc1        $f2, 0x9C($s0)
    ctx->pc = 0x4adc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4adc04:
    // 0x4adc04: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4adc04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4adc08:
    // 0x4adc08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4adc08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4adc0c:
    // 0x4adc0c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4adc0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4adc10:
    // 0x4adc10: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x4adc10u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_4adc14:
    // 0x4adc14: 0xe601009c  swc1        $f1, 0x9C($s0)
    ctx->pc = 0x4adc14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_4adc18:
    // 0x4adc18: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x4adc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4adc1c:
    // 0x4adc1c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4adc1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4adc20:
    // 0x4adc20: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4adc24:
    if (ctx->pc == 0x4ADC24u) {
        ctx->pc = 0x4ADC24u;
            // 0x4adc24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4ADC28u;
        goto label_4adc28;
    }
    ctx->pc = 0x4ADC20u;
    {
        const bool branch_taken_0x4adc20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4ADC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADC20u;
            // 0x4adc24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adc20) {
            ctx->pc = 0x4ADC2Cu;
            goto label_4adc2c;
        }
    }
    ctx->pc = 0x4ADC28u;
label_4adc28:
    // 0x4adc28: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4adc28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4adc2c:
    // 0x4adc2c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4adc30:
    if (ctx->pc == 0x4ADC30u) {
        ctx->pc = 0x4ADC30u;
            // 0x4adc30: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4ADC34u;
        goto label_4adc34;
    }
    ctx->pc = 0x4ADC2Cu;
    {
        const bool branch_taken_0x4adc2c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4adc2c) {
            ctx->pc = 0x4ADC30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADC2Cu;
            // 0x4adc30: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ADC40u;
            goto label_4adc40;
        }
    }
    ctx->pc = 0x4ADC34u;
label_4adc34:
    // 0x4adc34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4adc34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4adc38:
    // 0x4adc38: 0x10000007  b           . + 4 + (0x7 << 2)
label_4adc3c:
    if (ctx->pc == 0x4ADC3Cu) {
        ctx->pc = 0x4ADC3Cu;
            // 0x4adc3c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4ADC40u;
        goto label_4adc40;
    }
    ctx->pc = 0x4ADC38u;
    {
        const bool branch_taken_0x4adc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADC38u;
            // 0x4adc3c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adc38) {
            ctx->pc = 0x4ADC58u;
            goto label_4adc58;
        }
    }
    ctx->pc = 0x4ADC40u;
label_4adc40:
    // 0x4adc40: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4adc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4adc44:
    // 0x4adc44: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4adc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4adc48:
    // 0x4adc48: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4adc48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4adc4c:
    // 0x4adc4c: 0x0  nop
    ctx->pc = 0x4adc4cu;
    // NOP
label_4adc50:
    // 0x4adc50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4adc50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4adc54:
    // 0x4adc54: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4adc54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4adc58:
    // 0x4adc58: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x4adc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4adc5c:
    // 0x4adc5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4adc5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4adc60:
    // 0x4adc60: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x4adc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_4adc64:
    // 0x4adc64: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x4adc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_4adc68:
    // 0x4adc68: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4adc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_4adc6c:
    // 0x4adc6c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4adc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_4adc70:
    // 0x4adc70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4adc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4adc74:
    // 0x4adc74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4adc74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4adc78:
    // 0x4adc78: 0x3e00008  jr          $ra
label_4adc7c:
    if (ctx->pc == 0x4ADC7Cu) {
        ctx->pc = 0x4ADC7Cu;
            // 0x4adc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4ADC80u;
        goto label_4adc80;
    }
    ctx->pc = 0x4ADC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADC78u;
            // 0x4adc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ADC80u;
label_4adc80:
    // 0x4adc80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4adc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4adc84:
    // 0x4adc84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4adc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4adc88:
    // 0x4adc88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4adc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4adc8c:
    // 0x4adc8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4adc8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4adc90:
    // 0x4adc90: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x4adc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4adc94:
    // 0x4adc94: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_4adc98:
    if (ctx->pc == 0x4ADC98u) {
        ctx->pc = 0x4ADC98u;
            // 0x4adc98: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->pc = 0x4ADC9Cu;
        goto label_4adc9c;
    }
    ctx->pc = 0x4ADC94u;
    {
        const bool branch_taken_0x4adc94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4adc94) {
            ctx->pc = 0x4ADC98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADC94u;
            // 0x4adc98: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ADCBCu;
            goto label_4adcbc;
        }
    }
    ctx->pc = 0x4ADC9Cu;
label_4adc9c:
    // 0x4adc9c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4adca0:
    if (ctx->pc == 0x4ADCA0u) {
        ctx->pc = 0x4ADCA0u;
            // 0x4adca0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4ADCA4u;
        goto label_4adca4;
    }
    ctx->pc = 0x4ADC9Cu;
    {
        const bool branch_taken_0x4adc9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4adc9c) {
            ctx->pc = 0x4ADCA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADC9Cu;
            // 0x4adca0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ADCB8u;
            goto label_4adcb8;
        }
    }
    ctx->pc = 0x4ADCA4u;
label_4adca4:
    // 0x4adca4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4adca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4adca8:
    // 0x4adca8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4adca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4adcac:
    // 0x4adcac: 0x320f809  jalr        $t9
label_4adcb0:
    if (ctx->pc == 0x4ADCB0u) {
        ctx->pc = 0x4ADCB0u;
            // 0x4adcb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4ADCB4u;
        goto label_4adcb4;
    }
    ctx->pc = 0x4ADCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4ADCB4u);
        ctx->pc = 0x4ADCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADCACu;
            // 0x4adcb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4ADCB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4ADCB4u; }
            if (ctx->pc != 0x4ADCB4u) { return; }
        }
        }
    }
    ctx->pc = 0x4ADCB4u;
label_4adcb4:
    // 0x4adcb4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4adcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4adcb8:
    // 0x4adcb8: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x4adcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_4adcbc:
    // 0x4adcbc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4adcc0:
    if (ctx->pc == 0x4ADCC0u) {
        ctx->pc = 0x4ADCC0u;
            // 0x4adcc0: 0xae0000b0  sw          $zero, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
        ctx->pc = 0x4ADCC4u;
        goto label_4adcc4;
    }
    ctx->pc = 0x4ADCBCu;
    {
        const bool branch_taken_0x4adcbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4adcbc) {
            ctx->pc = 0x4ADCC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADCBCu;
            // 0x4adcc0: 0xae0000b0  sw          $zero, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ADCD8u;
            goto label_4adcd8;
        }
    }
    ctx->pc = 0x4ADCC4u;
label_4adcc4:
    // 0x4adcc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4adcc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4adcc8:
    // 0x4adcc8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4adcc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4adccc:
    // 0x4adccc: 0x320f809  jalr        $t9
label_4adcd0:
    if (ctx->pc == 0x4ADCD0u) {
        ctx->pc = 0x4ADCD0u;
            // 0x4adcd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4ADCD4u;
        goto label_4adcd4;
    }
    ctx->pc = 0x4ADCCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4ADCD4u);
        ctx->pc = 0x4ADCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADCCCu;
            // 0x4adcd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4ADCD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4ADCD4u; }
            if (ctx->pc != 0x4ADCD4u) { return; }
        }
        }
    }
    ctx->pc = 0x4ADCD4u;
label_4adcd4:
    // 0x4adcd4: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x4adcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_4adcd8:
    // 0x4adcd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4adcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4adcdc:
    // 0x4adcdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4adcdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4adce0:
    // 0x4adce0: 0x3e00008  jr          $ra
label_4adce4:
    if (ctx->pc == 0x4ADCE4u) {
        ctx->pc = 0x4ADCE4u;
            // 0x4adce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4ADCE8u;
        goto label_4adce8;
    }
    ctx->pc = 0x4ADCE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADCE0u;
            // 0x4adce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ADCE8u;
label_4adce8:
    // 0x4adce8: 0x0  nop
    ctx->pc = 0x4adce8u;
    // NOP
label_4adcec:
    // 0x4adcec: 0x0  nop
    ctx->pc = 0x4adcecu;
    // NOP
label_4adcf0:
    // 0x4adcf0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4adcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4adcf4:
    // 0x4adcf4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x4adcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_4adcf8:
    // 0x4adcf8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4adcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4adcfc:
    // 0x4adcfc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4adcfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4add00:
    // 0x4add00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4add00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4add04:
    // 0x4add04: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x4add04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_4add08:
    // 0x4add08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4add08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4add0c:
    // 0x4add0c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4add0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_4add10:
    // 0x4add10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4add10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4add14:
    // 0x4add14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4add14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4add18:
    // 0x4add18: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4add18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4add1c:
    // 0x4add1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4add1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4add20:
    // 0x4add20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4add20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4add24:
    // 0x4add24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4add24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4add28:
    // 0x4add28: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x4add28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_4add2c:
    // 0x4add2c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4add2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4add30:
    // 0x4add30: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4add30u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4add34:
    // 0x4add34: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x4add34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
label_4add38:
    // 0x4add38: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x4add38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4add3c:
    // 0x4add3c: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x4add3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
label_4add40:
    // 0x4add40: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x4add40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4add44:
    // 0x4add44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4add44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4add48:
    // 0x4add48: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x4add48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_4add4c:
    // 0x4add4c: 0x0  nop
    ctx->pc = 0x4add4cu;
    // NOP
label_4add50:
    // 0x4add50: 0xac8700a0  sw          $a3, 0xA0($a0)
    ctx->pc = 0x4add50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 7));
label_4add54:
    // 0x4add54: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x4add54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_4add58:
    // 0x4add58: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4add58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4add5c:
    // 0x4add5c: 0xc0a7a88  jal         func_29EA20
label_4add60:
    if (ctx->pc == 0x4ADD60u) {
        ctx->pc = 0x4ADD60u;
            // 0x4add60: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x4ADD64u;
        goto label_4add64;
    }
    ctx->pc = 0x4ADD5Cu;
    SET_GPR_U32(ctx, 31, 0x4ADD64u);
    ctx->pc = 0x4ADD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADD5Cu;
            // 0x4add60: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADD64u; }
        if (ctx->pc != 0x4ADD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADD64u; }
        if (ctx->pc != 0x4ADD64u) { return; }
    }
    ctx->pc = 0x4ADD64u;
label_4add64:
    // 0x4add64: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x4add64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_4add68:
    // 0x4add68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4add68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4add6c:
    // 0x4add6c: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_4add70:
    if (ctx->pc == 0x4ADD70u) {
        ctx->pc = 0x4ADD70u;
            // 0x4add70: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4ADD74u;
        goto label_4add74;
    }
    ctx->pc = 0x4ADD6Cu;
    {
        const bool branch_taken_0x4add6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADD6Cu;
            // 0x4add70: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4add6c) {
            ctx->pc = 0x4ADDACu;
            goto label_4addac;
        }
    }
    ctx->pc = 0x4ADD74u;
label_4add74:
    // 0x4add74: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4add74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4add78:
    // 0x4add78: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x4add78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_4add7c:
    // 0x4add7c: 0x8c43a990  lw          $v1, -0x5670($v0)
    ctx->pc = 0x4add7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945168)));
label_4add80:
    // 0x4add80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4add80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4add84:
    // 0x4add84: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x4add84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_4add88:
    // 0x4add88: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x4add88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4add8c:
    // 0x4add8c: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4add8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4add90:
    // 0x4add90: 0xc08afe0  jal         func_22BF80
label_4add94:
    if (ctx->pc == 0x4ADD94u) {
        ctx->pc = 0x4ADD94u;
            // 0x4add94: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->pc = 0x4ADD98u;
        goto label_4add98;
    }
    ctx->pc = 0x4ADD90u;
    SET_GPR_U32(ctx, 31, 0x4ADD98u);
    ctx->pc = 0x4ADD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADD90u;
            // 0x4add94: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADD98u; }
        if (ctx->pc != 0x4ADD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADD98u; }
        if (ctx->pc != 0x4ADD98u) { return; }
    }
    ctx->pc = 0x4ADD98u;
label_4add98:
    // 0x4add98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4add98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4add9c:
    // 0x4add9c: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x4add9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_4adda0:
    // 0x4adda0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4adda0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4adda4:
    // 0x4adda4: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x4adda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_4adda8:
    // 0x4adda8: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x4adda8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_4addac:
    // 0x4addac: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x4addacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_4addb0:
    // 0x4addb0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4addb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4addb4:
    // 0x4addb4: 0xc08c798  jal         func_231E60
label_4addb8:
    if (ctx->pc == 0x4ADDB8u) {
        ctx->pc = 0x4ADDB8u;
            // 0x4addb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ADDBCu;
        goto label_4addbc;
    }
    ctx->pc = 0x4ADDB4u;
    SET_GPR_U32(ctx, 31, 0x4ADDBCu);
    ctx->pc = 0x4ADDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADDB4u;
            // 0x4addb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADDBCu; }
        if (ctx->pc != 0x4ADDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADDBCu; }
        if (ctx->pc != 0x4ADDBCu) { return; }
    }
    ctx->pc = 0x4ADDBCu;
label_4addbc:
    // 0x4addbc: 0x3c02c0b3  lui         $v0, 0xC0B3
    ctx->pc = 0x4addbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49331 << 16));
label_4addc0:
    // 0x4addc0: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x4addc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_4addc4:
    // 0x4addc4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x4addc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_4addc8:
    // 0x4addc8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4addc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4addcc:
    // 0x4addcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4addccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4addd0:
    // 0x4addd0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4addd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4addd4:
    // 0x4addd4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4addd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4addd8:
    // 0x4addd8: 0xc04cbd8  jal         func_132F60
label_4adddc:
    if (ctx->pc == 0x4ADDDCu) {
        ctx->pc = 0x4ADDDCu;
            // 0x4adddc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4ADDE0u;
        goto label_4adde0;
    }
    ctx->pc = 0x4ADDD8u;
    SET_GPR_U32(ctx, 31, 0x4ADDE0u);
    ctx->pc = 0x4ADDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADDD8u;
            // 0x4adddc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADDE0u; }
        if (ctx->pc != 0x4ADDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADDE0u; }
        if (ctx->pc != 0x4ADDE0u) { return; }
    }
    ctx->pc = 0x4ADDE0u;
label_4adde0:
    // 0x4adde0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4adde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4adde4:
    // 0x4adde4: 0xc04f278  jal         func_13C9E0
label_4adde8:
    if (ctx->pc == 0x4ADDE8u) {
        ctx->pc = 0x4ADDE8u;
            // 0x4adde8: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x4ADDECu;
        goto label_4addec;
    }
    ctx->pc = 0x4ADDE4u;
    SET_GPR_U32(ctx, 31, 0x4ADDECu);
    ctx->pc = 0x4ADDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADDE4u;
            // 0x4adde8: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADDECu; }
        if (ctx->pc != 0x4ADDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADDECu; }
        if (ctx->pc != 0x4ADDECu) { return; }
    }
    ctx->pc = 0x4ADDECu;
label_4addec:
    // 0x4addec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4addecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4addf0:
    // 0x4addf0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4addf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4addf4:
    // 0x4addf4: 0xc04cca0  jal         func_133280
label_4addf8:
    if (ctx->pc == 0x4ADDF8u) {
        ctx->pc = 0x4ADDF8u;
            // 0x4addf8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ADDFCu;
        goto label_4addfc;
    }
    ctx->pc = 0x4ADDF4u;
    SET_GPR_U32(ctx, 31, 0x4ADDFCu);
    ctx->pc = 0x4ADDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADDF4u;
            // 0x4addf8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADDFCu; }
        if (ctx->pc != 0x4ADDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADDFCu; }
        if (ctx->pc != 0x4ADDFCu) { return; }
    }
    ctx->pc = 0x4ADDFCu;
label_4addfc:
    // 0x4addfc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4addfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4ade00:
    // 0x4ade00: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x4ade00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_4ade04:
    // 0x4ade04: 0xc04cbe0  jal         func_132F80
label_4ade08:
    if (ctx->pc == 0x4ADE08u) {
        ctx->pc = 0x4ADE08u;
            // 0x4ade08: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ADE0Cu;
        goto label_4ade0c;
    }
    ctx->pc = 0x4ADE04u;
    SET_GPR_U32(ctx, 31, 0x4ADE0Cu);
    ctx->pc = 0x4ADE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADE04u;
            // 0x4ade08: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADE0Cu; }
        if (ctx->pc != 0x4ADE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADE0Cu; }
        if (ctx->pc != 0x4ADE0Cu) { return; }
    }
    ctx->pc = 0x4ADE0Cu;
label_4ade0c:
    // 0x4ade0c: 0xc646002c  lwc1        $f6, 0x2C($s2)
    ctx->pc = 0x4ade0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4ade10:
    // 0x4ade10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4ade10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4ade14:
    // 0x4ade14: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x4ade14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ade18:
    // 0x4ade18: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x4ade18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4ade1c:
    // 0x4ade1c: 0xc6450028  lwc1        $f5, 0x28($s2)
    ctx->pc = 0x4ade1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4ade20:
    // 0x4ade20: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x4ade20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ade24:
    // 0x4ade24: 0xc6440024  lwc1        $f4, 0x24($s2)
    ctx->pc = 0x4ade24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4ade28:
    // 0x4ade28: 0xc6430020  lwc1        $f3, 0x20($s2)
    ctx->pc = 0x4ade28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4ade2c:
    // 0x4ade2c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x4ade2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ade30:
    // 0x4ade30: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x4ade30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4ade34:
    // 0x4ade34: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x4ade34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_4ade38:
    // 0x4ade38: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x4ade38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4ade3c:
    // 0x4ade3c: 0xe7a50088  swc1        $f5, 0x88($sp)
    ctx->pc = 0x4ade3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_4ade40:
    // 0x4ade40: 0xe7a6008c  swc1        $f6, 0x8C($sp)
    ctx->pc = 0x4ade40u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_4ade44:
    // 0x4ade44: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x4ade44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_4ade48:
    // 0x4ade48: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x4ade48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_4ade4c:
    // 0x4ade4c: 0xc0a3830  jal         func_28E0C0
label_4ade50:
    if (ctx->pc == 0x4ADE50u) {
        ctx->pc = 0x4ADE50u;
            // 0x4ade50: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x4ADE54u;
        goto label_4ade54;
    }
    ctx->pc = 0x4ADE4Cu;
    SET_GPR_U32(ctx, 31, 0x4ADE54u);
    ctx->pc = 0x4ADE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADE4Cu;
            // 0x4ade50: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADE54u; }
        if (ctx->pc != 0x4ADE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADE54u; }
        if (ctx->pc != 0x4ADE54u) { return; }
    }
    ctx->pc = 0x4ADE54u;
label_4ade54:
    // 0x4ade54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ade54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ade58:
    // 0x4ade58: 0xc08af10  jal         func_22BC40
label_4ade5c:
    if (ctx->pc == 0x4ADE5Cu) {
        ctx->pc = 0x4ADE5Cu;
            // 0x4ade5c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4ADE60u;
        goto label_4ade60;
    }
    ctx->pc = 0x4ADE58u;
    SET_GPR_U32(ctx, 31, 0x4ADE60u);
    ctx->pc = 0x4ADE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADE58u;
            // 0x4ade5c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADE60u; }
        if (ctx->pc != 0x4ADE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADE60u; }
        if (ctx->pc != 0x4ADE60u) { return; }
    }
    ctx->pc = 0x4ADE60u;
label_4ade60:
    // 0x4ade60: 0xc040180  jal         func_100600
label_4ade64:
    if (ctx->pc == 0x4ADE64u) {
        ctx->pc = 0x4ADE64u;
            // 0x4ade64: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x4ADE68u;
        goto label_4ade68;
    }
    ctx->pc = 0x4ADE60u;
    SET_GPR_U32(ctx, 31, 0x4ADE68u);
    ctx->pc = 0x4ADE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADE60u;
            // 0x4ade64: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADE68u; }
        if (ctx->pc != 0x4ADE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADE68u; }
        if (ctx->pc != 0x4ADE68u) { return; }
    }
    ctx->pc = 0x4ADE68u;
label_4ade68:
    // 0x4ade68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ade68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ade6c:
    // 0x4ade6c: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4ade70:
    if (ctx->pc == 0x4ADE70u) {
        ctx->pc = 0x4ADE70u;
            // 0x4ade70: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->pc = 0x4ADE74u;
        goto label_4ade74;
    }
    ctx->pc = 0x4ADE6Cu;
    {
        const bool branch_taken_0x4ade6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ade6c) {
            ctx->pc = 0x4ADE70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADE6Cu;
            // 0x4ade70: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ADEACu;
            goto label_4adeac;
        }
    }
    ctx->pc = 0x4ADE74u;
label_4ade74:
    // 0x4ade74: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4ade74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4ade78:
    // 0x4ade78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ade78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ade7c:
    // 0x4ade7c: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4ade7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4ade80:
    // 0x4ade80: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4ade80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4ade84:
    // 0x4ade84: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ade84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4ade88:
    // 0x4ade88: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4ade88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4ade8c:
    // 0x4ade8c: 0xc040138  jal         func_1004E0
label_4ade90:
    if (ctx->pc == 0x4ADE90u) {
        ctx->pc = 0x4ADE90u;
            // 0x4ade90: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4ADE94u;
        goto label_4ade94;
    }
    ctx->pc = 0x4ADE8Cu;
    SET_GPR_U32(ctx, 31, 0x4ADE94u);
    ctx->pc = 0x4ADE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADE8Cu;
            // 0x4ade90: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADE94u; }
        if (ctx->pc != 0x4ADE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADE94u; }
        if (ctx->pc != 0x4ADE94u) { return; }
    }
    ctx->pc = 0x4ADE94u;
label_4ade94:
    // 0x4ade94: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4ade94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4ade98:
    // 0x4ade98: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4ade98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4ade9c:
    // 0x4ade9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ade9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4adea0:
    // 0x4adea0: 0xc04a576  jal         func_1295D8
label_4adea4:
    if (ctx->pc == 0x4ADEA4u) {
        ctx->pc = 0x4ADEA4u;
            // 0x4adea4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4ADEA8u;
        goto label_4adea8;
    }
    ctx->pc = 0x4ADEA0u;
    SET_GPR_U32(ctx, 31, 0x4ADEA8u);
    ctx->pc = 0x4ADEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADEA0u;
            // 0x4adea4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADEA8u; }
        if (ctx->pc != 0x4ADEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADEA8u; }
        if (ctx->pc != 0x4ADEA8u) { return; }
    }
    ctx->pc = 0x4ADEA8u;
label_4adea8:
    // 0x4adea8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x4adea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_4adeac:
    // 0x4adeac: 0x3c0347af  lui         $v1, 0x47AF
    ctx->pc = 0x4adeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18351 << 16));
label_4adeb0:
    // 0x4adeb0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x4adeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_4adeb4:
    // 0x4adeb4: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x4adeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_4adeb8:
    // 0x4adeb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4adeb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4adebc:
    // 0x4adebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4adebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4adec0:
    // 0x4adec0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x4adec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_4adec4:
    // 0x4adec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4adec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4adec8:
    // 0x4adec8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4adec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4adecc:
    // 0x4adecc: 0x344616ae  ori         $a2, $v0, 0x16AE
    ctx->pc = 0x4adeccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5806);
label_4aded0:
    // 0x4aded0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4aded0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aded4:
    // 0x4aded4: 0xc122cd8  jal         func_48B360
label_4aded8:
    if (ctx->pc == 0x4ADED8u) {
        ctx->pc = 0x4ADED8u;
            // 0x4aded8: 0xae5000b0  sw          $s0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 16));
        ctx->pc = 0x4ADEDCu;
        goto label_4adedc;
    }
    ctx->pc = 0x4ADED4u;
    SET_GPR_U32(ctx, 31, 0x4ADEDCu);
    ctx->pc = 0x4ADED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADED4u;
            // 0x4aded8: 0xae5000b0  sw          $s0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADEDCu; }
        if (ctx->pc != 0x4ADEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADEDCu; }
        if (ctx->pc != 0x4ADEDCu) { return; }
    }
    ctx->pc = 0x4ADEDCu;
label_4adedc:
    // 0x4adedc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4adedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4adee0:
    // 0x4adee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4adee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4adee4:
    // 0x4adee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4adee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4adee8:
    // 0x4adee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4adee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4adeec:
    // 0x4adeec: 0x3e00008  jr          $ra
label_4adef0:
    if (ctx->pc == 0x4ADEF0u) {
        ctx->pc = 0x4ADEF0u;
            // 0x4adef0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4ADEF4u;
        goto label_4adef4;
    }
    ctx->pc = 0x4ADEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADEECu;
            // 0x4adef0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ADEF4u;
label_4adef4:
    // 0x4adef4: 0x0  nop
    ctx->pc = 0x4adef4u;
    // NOP
label_4adef8:
    // 0x4adef8: 0x0  nop
    ctx->pc = 0x4adef8u;
    // NOP
label_4adefc:
    // 0x4adefc: 0x0  nop
    ctx->pc = 0x4adefcu;
    // NOP
label_4adf00:
    // 0x4adf00: 0x812b140  j           func_4AC500
label_4adf04:
    if (ctx->pc == 0x4ADF04u) {
        ctx->pc = 0x4ADF04u;
            // 0x4adf04: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x4ADF08u;
        goto label_4adf08;
    }
    ctx->pc = 0x4ADF00u;
    ctx->pc = 0x4ADF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADF00u;
            // 0x4adf04: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AC500u;
    {
        auto targetFn = runtime->lookupFunction(0x4AC500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4ADF08u;
label_4adf08:
    // 0x4adf08: 0x0  nop
    ctx->pc = 0x4adf08u;
    // NOP
label_4adf0c:
    // 0x4adf0c: 0x0  nop
    ctx->pc = 0x4adf0cu;
    // NOP
label_4adf10:
    // 0x4adf10: 0x3e00008  jr          $ra
label_4adf14:
    if (ctx->pc == 0x4ADF14u) {
        ctx->pc = 0x4ADF14u;
            // 0x4adf14: 0x240259ec  addiu       $v0, $zero, 0x59EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23020));
        ctx->pc = 0x4ADF18u;
        goto label_4adf18;
    }
    ctx->pc = 0x4ADF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADF10u;
            // 0x4adf14: 0x240259ec  addiu       $v0, $zero, 0x59EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ADF18u;
label_4adf18:
    // 0x4adf18: 0x0  nop
    ctx->pc = 0x4adf18u;
    // NOP
label_4adf1c:
    // 0x4adf1c: 0x0  nop
    ctx->pc = 0x4adf1cu;
    // NOP
label_4adf20:
    // 0x4adf20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4adf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4adf24:
    // 0x4adf24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4adf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4adf28:
    // 0x4adf28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4adf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4adf2c:
    // 0x4adf2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4adf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4adf30:
    // 0x4adf30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4adf30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4adf34:
    // 0x4adf34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4adf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4adf38:
    // 0x4adf38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4adf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4adf3c:
    // 0x4adf3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4adf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4adf40:
    // 0x4adf40: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4adf40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4adf44:
    // 0x4adf44: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4adf48:
    if (ctx->pc == 0x4ADF48u) {
        ctx->pc = 0x4ADF48u;
            // 0x4adf48: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ADF4Cu;
        goto label_4adf4c;
    }
    ctx->pc = 0x4ADF44u;
    {
        const bool branch_taken_0x4adf44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADF44u;
            // 0x4adf48: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adf44) {
            ctx->pc = 0x4ADF88u;
            goto label_4adf88;
        }
    }
    ctx->pc = 0x4ADF4Cu;
label_4adf4c:
    // 0x4adf4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4adf4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4adf50:
    // 0x4adf50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4adf50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4adf54:
    // 0x4adf54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4adf54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4adf58:
    // 0x4adf58: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4adf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4adf5c:
    // 0x4adf5c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4adf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4adf60:
    // 0x4adf60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4adf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4adf64:
    // 0x4adf64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4adf64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4adf68:
    // 0x4adf68: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4adf68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4adf6c:
    // 0x4adf6c: 0x320f809  jalr        $t9
label_4adf70:
    if (ctx->pc == 0x4ADF70u) {
        ctx->pc = 0x4ADF74u;
        goto label_4adf74;
    }
    ctx->pc = 0x4ADF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4ADF74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4ADF74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4ADF74u; }
            if (ctx->pc != 0x4ADF74u) { return; }
        }
        }
    }
    ctx->pc = 0x4ADF74u;
label_4adf74:
    // 0x4adf74: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4adf74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4adf78:
    // 0x4adf78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4adf78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4adf7c:
    // 0x4adf7c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4adf7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4adf80:
    // 0x4adf80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4adf84:
    if (ctx->pc == 0x4ADF84u) {
        ctx->pc = 0x4ADF84u;
            // 0x4adf84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4ADF88u;
        goto label_4adf88;
    }
    ctx->pc = 0x4ADF80u;
    {
        const bool branch_taken_0x4adf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ADF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADF80u;
            // 0x4adf84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adf80) {
            ctx->pc = 0x4ADF58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4adf58;
        }
    }
    ctx->pc = 0x4ADF88u;
label_4adf88:
    // 0x4adf88: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4adf88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4adf8c:
    // 0x4adf8c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4adf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4adf90:
    // 0x4adf90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4adf90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4adf94:
    // 0x4adf94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4adf94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4adf98:
    // 0x4adf98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4adf98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4adf9c:
    // 0x4adf9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4adf9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4adfa0:
    // 0x4adfa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4adfa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4adfa4:
    // 0x4adfa4: 0x3e00008  jr          $ra
label_4adfa8:
    if (ctx->pc == 0x4ADFA8u) {
        ctx->pc = 0x4ADFA8u;
            // 0x4adfa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4ADFACu;
        goto label_4adfac;
    }
    ctx->pc = 0x4ADFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADFA4u;
            // 0x4adfa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ADFACu;
label_4adfac:
    // 0x4adfac: 0x0  nop
    ctx->pc = 0x4adfacu;
    // NOP
label_4adfb0:
    // 0x4adfb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4adfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4adfb4:
    // 0x4adfb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4adfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4adfb8:
    // 0x4adfb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4adfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4adfbc:
    // 0x4adfbc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4adfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4adfc0:
    // 0x4adfc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4adfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4adfc4:
    // 0x4adfc4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4adfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4adfc8:
    // 0x4adfc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4adfc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4adfcc:
    // 0x4adfcc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4adfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4adfd0:
    // 0x4adfd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4adfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4adfd4:
    // 0x4adfd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4adfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4adfd8:
    // 0x4adfd8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4adfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4adfdc:
    // 0x4adfdc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4adfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4adfe0:
    // 0x4adfe0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4adfe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4adfe4:
    // 0x4adfe4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4adfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4adfe8:
    // 0x4adfe8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4adfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4adfec:
    // 0x4adfec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4adfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4adff0:
    // 0x4adff0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4adff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4adff4:
    // 0x4adff4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4adff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4adff8:
    // 0x4adff8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4adff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4adffc:
    // 0x4adffc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4adffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4ae000:
    // 0x4ae000: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4ae000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4ae004:
    // 0x4ae004: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ae004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4ae008:
    // 0x4ae008: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4ae008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ae00c:
    // 0x4ae00c: 0xc0a997c  jal         func_2A65F0
label_4ae010:
    if (ctx->pc == 0x4AE010u) {
        ctx->pc = 0x4AE010u;
            // 0x4ae010: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4AE014u;
        goto label_4ae014;
    }
    ctx->pc = 0x4AE00Cu;
    SET_GPR_U32(ctx, 31, 0x4AE014u);
    ctx->pc = 0x4AE010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE00Cu;
            // 0x4ae010: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE014u; }
        if (ctx->pc != 0x4AE014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE014u; }
        if (ctx->pc != 0x4AE014u) { return; }
    }
    ctx->pc = 0x4AE014u;
label_4ae014:
    // 0x4ae014: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4ae014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4ae018:
    // 0x4ae018: 0xc0d879c  jal         func_361E70
label_4ae01c:
    if (ctx->pc == 0x4AE01Cu) {
        ctx->pc = 0x4AE01Cu;
            // 0x4ae01c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AE020u;
        goto label_4ae020;
    }
    ctx->pc = 0x4AE018u;
    SET_GPR_U32(ctx, 31, 0x4AE020u);
    ctx->pc = 0x4AE01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE018u;
            // 0x4ae01c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE020u; }
        if (ctx->pc != 0x4AE020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE020u; }
        if (ctx->pc != 0x4AE020u) { return; }
    }
    ctx->pc = 0x4AE020u;
label_4ae020:
    // 0x4ae020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ae020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ae024:
    // 0x4ae024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ae024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ae028:
    // 0x4ae028: 0x3e00008  jr          $ra
label_4ae02c:
    if (ctx->pc == 0x4AE02Cu) {
        ctx->pc = 0x4AE02Cu;
            // 0x4ae02c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4AE030u;
        goto label_4ae030;
    }
    ctx->pc = 0x4AE028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE028u;
            // 0x4ae02c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AE030u;
label_4ae030:
    // 0x4ae030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ae030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ae034:
    // 0x4ae034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ae034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ae038:
    // 0x4ae038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ae038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ae03c:
    // 0x4ae03c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4ae03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4ae040:
    // 0x4ae040: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4ae044:
    if (ctx->pc == 0x4AE044u) {
        ctx->pc = 0x4AE044u;
            // 0x4ae044: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AE048u;
        goto label_4ae048;
    }
    ctx->pc = 0x4AE040u;
    {
        const bool branch_taken_0x4ae040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE040u;
            // 0x4ae044: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae040) {
            ctx->pc = 0x4AE160u;
            goto label_4ae160;
        }
    }
    ctx->pc = 0x4AE048u;
label_4ae048:
    // 0x4ae048: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ae048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4ae04c:
    // 0x4ae04c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4ae04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4ae050:
    // 0x4ae050: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4ae050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4ae054:
    // 0x4ae054: 0xc075128  jal         func_1D44A0
label_4ae058:
    if (ctx->pc == 0x4AE058u) {
        ctx->pc = 0x4AE058u;
            // 0x4ae058: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4AE05Cu;
        goto label_4ae05c;
    }
    ctx->pc = 0x4AE054u;
    SET_GPR_U32(ctx, 31, 0x4AE05Cu);
    ctx->pc = 0x4AE058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE054u;
            // 0x4ae058: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE05Cu; }
        if (ctx->pc != 0x4AE05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE05Cu; }
        if (ctx->pc != 0x4AE05Cu) { return; }
    }
    ctx->pc = 0x4AE05Cu;
label_4ae05c:
    // 0x4ae05c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4ae05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4ae060:
    // 0x4ae060: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ae060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ae064:
    // 0x4ae064: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4ae064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4ae068:
    // 0x4ae068: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4ae068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ae06c:
    // 0x4ae06c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4ae06cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ae070:
    // 0x4ae070: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4ae074:
    if (ctx->pc == 0x4AE074u) {
        ctx->pc = 0x4AE074u;
            // 0x4ae074: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4AE078u;
        goto label_4ae078;
    }
    ctx->pc = 0x4AE070u;
    {
        const bool branch_taken_0x4ae070 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE070u;
            // 0x4ae074: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae070) {
            ctx->pc = 0x4AE080u;
            goto label_4ae080;
        }
    }
    ctx->pc = 0x4AE078u;
label_4ae078:
    // 0x4ae078: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ae078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ae07c:
    // 0x4ae07c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4ae07cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4ae080:
    // 0x4ae080: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ae080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ae084:
    // 0x4ae084: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ae084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ae088:
    // 0x4ae088: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4ae088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4ae08c:
    // 0x4ae08c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4ae08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4ae090:
    // 0x4ae090: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4ae090u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ae094:
    // 0x4ae094: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ae098:
    if (ctx->pc == 0x4AE098u) {
        ctx->pc = 0x4AE098u;
            // 0x4ae098: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4AE09Cu;
        goto label_4ae09c;
    }
    ctx->pc = 0x4AE094u;
    {
        const bool branch_taken_0x4ae094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae094) {
            ctx->pc = 0x4AE098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE094u;
            // 0x4ae098: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE0A8u;
            goto label_4ae0a8;
        }
    }
    ctx->pc = 0x4AE09Cu;
label_4ae09c:
    // 0x4ae09c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ae09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ae0a0:
    // 0x4ae0a0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4ae0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4ae0a4:
    // 0x4ae0a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ae0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ae0a8:
    // 0x4ae0a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ae0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ae0ac:
    // 0x4ae0ac: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4ae0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4ae0b0:
    // 0x4ae0b0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4ae0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4ae0b4:
    // 0x4ae0b4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4ae0b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ae0b8:
    // 0x4ae0b8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ae0bc:
    if (ctx->pc == 0x4AE0BCu) {
        ctx->pc = 0x4AE0BCu;
            // 0x4ae0bc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4AE0C0u;
        goto label_4ae0c0;
    }
    ctx->pc = 0x4AE0B8u;
    {
        const bool branch_taken_0x4ae0b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae0b8) {
            ctx->pc = 0x4AE0BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE0B8u;
            // 0x4ae0bc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE0CCu;
            goto label_4ae0cc;
        }
    }
    ctx->pc = 0x4AE0C0u;
label_4ae0c0:
    // 0x4ae0c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ae0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ae0c4:
    // 0x4ae0c4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4ae0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4ae0c8:
    // 0x4ae0c8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4ae0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ae0cc:
    // 0x4ae0cc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4ae0ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4ae0d0:
    // 0x4ae0d0: 0x320f809  jalr        $t9
label_4ae0d4:
    if (ctx->pc == 0x4AE0D4u) {
        ctx->pc = 0x4AE0D4u;
            // 0x4ae0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AE0D8u;
        goto label_4ae0d8;
    }
    ctx->pc = 0x4AE0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AE0D8u);
        ctx->pc = 0x4AE0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE0D0u;
            // 0x4ae0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AE0D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AE0D8u; }
            if (ctx->pc != 0x4AE0D8u) { return; }
        }
        }
    }
    ctx->pc = 0x4AE0D8u;
label_4ae0d8:
    // 0x4ae0d8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4ae0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4ae0dc:
    // 0x4ae0dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ae0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ae0e0:
    // 0x4ae0e0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4ae0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4ae0e4:
    // 0x4ae0e4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4ae0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4ae0e8:
    // 0x4ae0e8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4ae0e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4ae0ec:
    // 0x4ae0ec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4ae0ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4ae0f0:
    // 0x4ae0f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ae0f4:
    if (ctx->pc == 0x4AE0F4u) {
        ctx->pc = 0x4AE0F4u;
            // 0x4ae0f4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4AE0F8u;
        goto label_4ae0f8;
    }
    ctx->pc = 0x4AE0F0u;
    {
        const bool branch_taken_0x4ae0f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae0f0) {
            ctx->pc = 0x4AE0F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE0F0u;
            // 0x4ae0f4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE104u;
            goto label_4ae104;
        }
    }
    ctx->pc = 0x4AE0F8u;
label_4ae0f8:
    // 0x4ae0f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ae0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ae0fc:
    // 0x4ae0fc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4ae0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4ae100:
    // 0x4ae100: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4ae100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4ae104:
    // 0x4ae104: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ae104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ae108:
    // 0x4ae108: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4ae108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4ae10c:
    // 0x4ae10c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4ae10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4ae110:
    // 0x4ae110: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4ae110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4ae114:
    // 0x4ae114: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4ae114u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4ae118:
    // 0x4ae118: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4ae11c:
    if (ctx->pc == 0x4AE11Cu) {
        ctx->pc = 0x4AE120u;
        goto label_4ae120;
    }
    ctx->pc = 0x4AE118u;
    {
        const bool branch_taken_0x4ae118 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae118) {
            ctx->pc = 0x4AE128u;
            goto label_4ae128;
        }
    }
    ctx->pc = 0x4AE120u;
label_4ae120:
    // 0x4ae120: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ae120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ae124:
    // 0x4ae124: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4ae124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4ae128:
    // 0x4ae128: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ae128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ae12c:
    // 0x4ae12c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4ae12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4ae130:
    // 0x4ae130: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4ae130u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ae134:
    // 0x4ae134: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4ae138:
    if (ctx->pc == 0x4AE138u) {
        ctx->pc = 0x4AE13Cu;
        goto label_4ae13c;
    }
    ctx->pc = 0x4AE134u;
    {
        const bool branch_taken_0x4ae134 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae134) {
            ctx->pc = 0x4AE144u;
            goto label_4ae144;
        }
    }
    ctx->pc = 0x4AE13Cu;
label_4ae13c:
    // 0x4ae13c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ae13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ae140:
    // 0x4ae140: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4ae140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4ae144:
    // 0x4ae144: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ae144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ae148:
    // 0x4ae148: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4ae148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4ae14c:
    // 0x4ae14c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4ae14cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ae150:
    // 0x4ae150: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ae154:
    if (ctx->pc == 0x4AE154u) {
        ctx->pc = 0x4AE154u;
            // 0x4ae154: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4AE158u;
        goto label_4ae158;
    }
    ctx->pc = 0x4AE150u;
    {
        const bool branch_taken_0x4ae150 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae150) {
            ctx->pc = 0x4AE154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE150u;
            // 0x4ae154: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE164u;
            goto label_4ae164;
        }
    }
    ctx->pc = 0x4AE158u;
label_4ae158:
    // 0x4ae158: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ae158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ae15c:
    // 0x4ae15c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4ae15cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4ae160:
    // 0x4ae160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ae160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ae164:
    // 0x4ae164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ae164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ae168:
    // 0x4ae168: 0x3e00008  jr          $ra
label_4ae16c:
    if (ctx->pc == 0x4AE16Cu) {
        ctx->pc = 0x4AE16Cu;
            // 0x4ae16c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4AE170u;
        goto label_4ae170;
    }
    ctx->pc = 0x4AE168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE168u;
            // 0x4ae16c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AE170u;
label_4ae170:
    // 0x4ae170: 0x812b100  j           func_4AC400
label_4ae174:
    if (ctx->pc == 0x4AE174u) {
        ctx->pc = 0x4AE174u;
            // 0x4ae174: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4AE178u;
        goto label_4ae178;
    }
    ctx->pc = 0x4AE170u;
    ctx->pc = 0x4AE174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE170u;
            // 0x4ae174: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AC400u;
    {
        auto targetFn = runtime->lookupFunction(0x4AC400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4AE178u;
label_4ae178:
    // 0x4ae178: 0x0  nop
    ctx->pc = 0x4ae178u;
    // NOP
label_4ae17c:
    // 0x4ae17c: 0x0  nop
    ctx->pc = 0x4ae17cu;
    // NOP
label_4ae180:
    // 0x4ae180: 0x812b54c  j           func_4AD530
label_4ae184:
    if (ctx->pc == 0x4AE184u) {
        ctx->pc = 0x4AE184u;
            // 0x4ae184: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4AE188u;
        goto label_4ae188;
    }
    ctx->pc = 0x4AE180u;
    ctx->pc = 0x4AE184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE180u;
            // 0x4ae184: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AD530u;
    {
        auto targetFn = runtime->lookupFunction(0x4AD530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4AE188u;
label_4ae188:
    // 0x4ae188: 0x0  nop
    ctx->pc = 0x4ae188u;
    // NOP
label_4ae18c:
    // 0x4ae18c: 0x0  nop
    ctx->pc = 0x4ae18cu;
    // NOP
label_4ae190:
    // 0x4ae190: 0x812b0a8  j           func_4AC2A0
label_4ae194:
    if (ctx->pc == 0x4AE194u) {
        ctx->pc = 0x4AE194u;
            // 0x4ae194: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4AE198u;
        goto label_4ae198;
    }
    ctx->pc = 0x4AE190u;
    ctx->pc = 0x4AE194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE190u;
            // 0x4ae194: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AC2A0u;
    if (runtime->hasFunction(0x4AC2A0u)) {
        auto targetFn = runtime->lookupFunction(0x4AC2A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004AC2A0_0x4ac2a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4AE198u;
label_4ae198:
    // 0x4ae198: 0x0  nop
    ctx->pc = 0x4ae198u;
    // NOP
label_4ae19c:
    // 0x4ae19c: 0x0  nop
    ctx->pc = 0x4ae19cu;
    // NOP
label_4ae1a0:
    // 0x4ae1a0: 0x812b070  j           func_4AC1C0
label_4ae1a4:
    if (ctx->pc == 0x4AE1A4u) {
        ctx->pc = 0x4AE1A4u;
            // 0x4ae1a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4AE1A8u;
        goto label_4ae1a8;
    }
    ctx->pc = 0x4AE1A0u;
    ctx->pc = 0x4AE1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE1A0u;
            // 0x4ae1a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AC1C0u;
    {
        auto targetFn = runtime->lookupFunction(0x4AC1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4AE1A8u;
label_4ae1a8:
    // 0x4ae1a8: 0x0  nop
    ctx->pc = 0x4ae1a8u;
    // NOP
label_4ae1ac:
    // 0x4ae1ac: 0x0  nop
    ctx->pc = 0x4ae1acu;
    // NOP
label_4ae1b0:
    // 0x4ae1b0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ae1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4ae1b4:
    // 0x4ae1b4: 0x24425690  addiu       $v0, $v0, 0x5690
    ctx->pc = 0x4ae1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22160));
label_4ae1b8:
    // 0x4ae1b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4ae1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4ae1bc:
    // 0x4ae1bc: 0x3e00008  jr          $ra
label_4ae1c0:
    if (ctx->pc == 0x4AE1C0u) {
        ctx->pc = 0x4AE1C0u;
            // 0x4ae1c0: 0x80420000  lb          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4AE1C4u;
        goto label_4ae1c4;
    }
    ctx->pc = 0x4AE1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE1BCu;
            // 0x4ae1c0: 0x80420000  lb          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AE1C4u;
label_4ae1c4:
    // 0x4ae1c4: 0x0  nop
    ctx->pc = 0x4ae1c4u;
    // NOP
label_4ae1c8:
    // 0x4ae1c8: 0x0  nop
    ctx->pc = 0x4ae1c8u;
    // NOP
label_4ae1cc:
    // 0x4ae1cc: 0x0  nop
    ctx->pc = 0x4ae1ccu;
    // NOP
label_4ae1d0:
    // 0x4ae1d0: 0x3e00008  jr          $ra
label_4ae1d4:
    if (ctx->pc == 0x4AE1D4u) {
        ctx->pc = 0x4AE1D8u;
        goto label_4ae1d8;
    }
    ctx->pc = 0x4AE1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AE1D8u;
label_4ae1d8:
    // 0x4ae1d8: 0x0  nop
    ctx->pc = 0x4ae1d8u;
    // NOP
label_4ae1dc:
    // 0x4ae1dc: 0x0  nop
    ctx->pc = 0x4ae1dcu;
    // NOP
label_4ae1e0:
    // 0x4ae1e0: 0x3e00008  jr          $ra
label_4ae1e4:
    if (ctx->pc == 0x4AE1E4u) {
        ctx->pc = 0x4AE1E8u;
        goto label_4ae1e8;
    }
    ctx->pc = 0x4AE1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AE1E8u;
label_4ae1e8:
    // 0x4ae1e8: 0x0  nop
    ctx->pc = 0x4ae1e8u;
    // NOP
label_4ae1ec:
    // 0x4ae1ec: 0x0  nop
    ctx->pc = 0x4ae1ecu;
    // NOP
label_4ae1f0:
    // 0x4ae1f0: 0x3e00008  jr          $ra
label_4ae1f4:
    if (ctx->pc == 0x4AE1F4u) {
        ctx->pc = 0x4AE1F8u;
        goto label_4ae1f8;
    }
    ctx->pc = 0x4AE1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AE1F8u;
label_4ae1f8:
    // 0x4ae1f8: 0x0  nop
    ctx->pc = 0x4ae1f8u;
    // NOP
label_4ae1fc:
    // 0x4ae1fc: 0x0  nop
    ctx->pc = 0x4ae1fcu;
    // NOP
label_4ae200:
    // 0x4ae200: 0x3e00008  jr          $ra
label_4ae204:
    if (ctx->pc == 0x4AE204u) {
        ctx->pc = 0x4AE208u;
        goto label_4ae208;
    }
    ctx->pc = 0x4AE200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AE208u;
label_4ae208:
    // 0x4ae208: 0x0  nop
    ctx->pc = 0x4ae208u;
    // NOP
label_4ae20c:
    // 0x4ae20c: 0x0  nop
    ctx->pc = 0x4ae20cu;
    // NOP
label_4ae210:
    // 0x4ae210: 0x3e00008  jr          $ra
label_4ae214:
    if (ctx->pc == 0x4AE214u) {
        ctx->pc = 0x4AE218u;
        goto label_4ae218;
    }
    ctx->pc = 0x4AE210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AE218u;
label_4ae218:
    // 0x4ae218: 0x0  nop
    ctx->pc = 0x4ae218u;
    // NOP
label_4ae21c:
    // 0x4ae21c: 0x0  nop
    ctx->pc = 0x4ae21cu;
    // NOP
label_4ae220:
    // 0x4ae220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ae220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ae224:
    // 0x4ae224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ae224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ae228:
    // 0x4ae228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ae228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ae22c:
    // 0x4ae22c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ae22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ae230:
    // 0x4ae230: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x4ae230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_4ae234:
    // 0x4ae234: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x4ae234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_4ae238:
    // 0x4ae238: 0x320f809  jalr        $t9
label_4ae23c:
    if (ctx->pc == 0x4AE23Cu) {
        ctx->pc = 0x4AE23Cu;
            // 0x4ae23c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AE240u;
        goto label_4ae240;
    }
    ctx->pc = 0x4AE238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AE240u);
        ctx->pc = 0x4AE23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE238u;
            // 0x4ae23c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AE240u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AE240u; }
            if (ctx->pc != 0x4AE240u) { return; }
        }
        }
    }
    ctx->pc = 0x4AE240u;
label_4ae240:
    // 0x4ae240: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4ae240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4ae244:
    // 0x4ae244: 0x8c830d70  lw          $v1, 0xD70($a0)
    ctx->pc = 0x4ae244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_4ae248:
    // 0x4ae248: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x4ae248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_4ae24c:
    // 0x4ae24c: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_4ae250:
    if (ctx->pc == 0x4AE250u) {
        ctx->pc = 0x4AE250u;
            // 0x4ae250: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x4AE254u;
        goto label_4ae254;
    }
    ctx->pc = 0x4AE24Cu;
    {
        const bool branch_taken_0x4ae24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae24c) {
            ctx->pc = 0x4AE250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE24Cu;
            // 0x4ae250: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE28Cu;
            goto label_4ae28c;
        }
    }
    ctx->pc = 0x4AE254u;
label_4ae254:
    // 0x4ae254: 0x8c830db0  lw          $v1, 0xDB0($a0)
    ctx->pc = 0x4ae254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
label_4ae258:
    // 0x4ae258: 0x8c840e30  lw          $a0, 0xE30($a0)
    ctx->pc = 0x4ae258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3632)));
label_4ae25c:
    // 0x4ae25c: 0x3863001c  xori        $v1, $v1, 0x1C
    ctx->pc = 0x4ae25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)28);
label_4ae260:
    // 0x4ae260: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x4ae260u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ae264:
    // 0x4ae264: 0x38840006  xori        $a0, $a0, 0x6
    ctx->pc = 0x4ae264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
label_4ae268:
    // 0x4ae268: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x4ae268u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4ae26c:
    // 0x4ae26c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4ae26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4ae270:
    // 0x4ae270: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4ae274:
    if (ctx->pc == 0x4AE274u) {
        ctx->pc = 0x4AE278u;
        goto label_4ae278;
    }
    ctx->pc = 0x4AE270u;
    {
        const bool branch_taken_0x4ae270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae270) {
            ctx->pc = 0x4AE288u;
            goto label_4ae288;
        }
    }
    ctx->pc = 0x4AE278u;
label_4ae278:
    // 0x4ae278: 0x8e190054  lw          $t9, 0x54($s0)
    ctx->pc = 0x4ae278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4ae27c:
    // 0x4ae27c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4ae27cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4ae280:
    // 0x4ae280: 0x320f809  jalr        $t9
label_4ae284:
    if (ctx->pc == 0x4AE284u) {
        ctx->pc = 0x4AE284u;
            // 0x4ae284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AE288u;
        goto label_4ae288;
    }
    ctx->pc = 0x4AE280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AE288u);
        ctx->pc = 0x4AE284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE280u;
            // 0x4ae284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AE288u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AE288u; }
            if (ctx->pc != 0x4AE288u) { return; }
        }
        }
    }
    ctx->pc = 0x4AE288u;
label_4ae288:
    // 0x4ae288: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4ae288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4ae28c:
    // 0x4ae28c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x4ae28cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4ae290:
    // 0x4ae290: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x4ae290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4ae294:
    // 0x4ae294: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4ae298:
    if (ctx->pc == 0x4AE298u) {
        ctx->pc = 0x4AE298u;
            // 0x4ae298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AE29Cu;
        goto label_4ae29c;
    }
    ctx->pc = 0x4AE294u;
    {
        const bool branch_taken_0x4ae294 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4AE298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE294u;
            // 0x4ae298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae294) {
            ctx->pc = 0x4AE2ACu;
            goto label_4ae2ac;
        }
    }
    ctx->pc = 0x4AE29Cu;
label_4ae29c:
    // 0x4ae29c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4ae29cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4ae2a0:
    // 0x4ae2a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4ae2a4:
    if (ctx->pc == 0x4AE2A4u) {
        ctx->pc = 0x4AE2A8u;
        goto label_4ae2a8;
    }
    ctx->pc = 0x4AE2A0u;
    {
        const bool branch_taken_0x4ae2a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae2a0) {
            ctx->pc = 0x4AE2ACu;
            goto label_4ae2ac;
        }
    }
    ctx->pc = 0x4AE2A8u;
label_4ae2a8:
    // 0x4ae2a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4ae2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ae2ac:
    // 0x4ae2ac: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_4ae2b0:
    if (ctx->pc == 0x4AE2B0u) {
        ctx->pc = 0x4AE2B4u;
        goto label_4ae2b4;
    }
    ctx->pc = 0x4AE2ACu;
    {
        const bool branch_taken_0x4ae2ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ae2ac) {
            ctx->pc = 0x4AE2C8u;
            goto label_4ae2c8;
        }
    }
    ctx->pc = 0x4AE2B4u;
label_4ae2b4:
    // 0x4ae2b4: 0xc075eb4  jal         func_1D7AD0
label_4ae2b8:
    if (ctx->pc == 0x4AE2B8u) {
        ctx->pc = 0x4AE2BCu;
        goto label_4ae2bc;
    }
    ctx->pc = 0x4AE2B4u;
    SET_GPR_U32(ctx, 31, 0x4AE2BCu);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE2BCu; }
        if (ctx->pc != 0x4AE2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE2BCu; }
        if (ctx->pc != 0x4AE2BCu) { return; }
    }
    ctx->pc = 0x4AE2BCu;
label_4ae2bc:
    // 0x4ae2bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4ae2c0:
    if (ctx->pc == 0x4AE2C0u) {
        ctx->pc = 0x4AE2C4u;
        goto label_4ae2c4;
    }
    ctx->pc = 0x4AE2BCu;
    {
        const bool branch_taken_0x4ae2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ae2bc) {
            ctx->pc = 0x4AE2C8u;
            goto label_4ae2c8;
        }
    }
    ctx->pc = 0x4AE2C4u;
label_4ae2c4:
    // 0x4ae2c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4ae2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ae2c8:
    // 0x4ae2c8: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
label_4ae2cc:
    if (ctx->pc == 0x4AE2CCu) {
        ctx->pc = 0x4AE2CCu;
            // 0x4ae2cc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x4AE2D0u;
        goto label_4ae2d0;
    }
    ctx->pc = 0x4AE2C8u;
    {
        const bool branch_taken_0x4ae2c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ae2c8) {
            ctx->pc = 0x4AE2CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE2C8u;
            // 0x4ae2cc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE2E8u;
            goto label_4ae2e8;
        }
    }
    ctx->pc = 0x4AE2D0u;
label_4ae2d0:
    // 0x4ae2d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4ae2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4ae2d4:
    // 0x4ae2d4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4ae2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4ae2d8:
    // 0x4ae2d8: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x4ae2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4ae2dc:
    // 0x4ae2dc: 0x5483000b  bnel        $a0, $v1, . + 4 + (0xB << 2)
label_4ae2e0:
    if (ctx->pc == 0x4AE2E0u) {
        ctx->pc = 0x4AE2E0u;
            // 0x4ae2e0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4AE2E4u;
        goto label_4ae2e4;
    }
    ctx->pc = 0x4AE2DCu;
    {
        const bool branch_taken_0x4ae2dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ae2dc) {
            ctx->pc = 0x4AE2E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE2DCu;
            // 0x4ae2e0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE30Cu;
            goto label_4ae30c;
        }
    }
    ctx->pc = 0x4AE2E4u;
label_4ae2e4:
    // 0x4ae2e4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4ae2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4ae2e8:
    // 0x4ae2e8: 0x8c630d70  lw          $v1, 0xD70($v1)
    ctx->pc = 0x4ae2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3440)));
label_4ae2ec:
    // 0x4ae2ec: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x4ae2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_4ae2f0:
    // 0x4ae2f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4ae2f4:
    if (ctx->pc == 0x4AE2F4u) {
        ctx->pc = 0x4AE2F8u;
        goto label_4ae2f8;
    }
    ctx->pc = 0x4AE2F0u;
    {
        const bool branch_taken_0x4ae2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae2f0) {
            ctx->pc = 0x4AE308u;
            goto label_4ae308;
        }
    }
    ctx->pc = 0x4AE2F8u;
label_4ae2f8:
    // 0x4ae2f8: 0x8e190054  lw          $t9, 0x54($s0)
    ctx->pc = 0x4ae2f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4ae2fc:
    // 0x4ae2fc: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4ae2fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4ae300:
    // 0x4ae300: 0x320f809  jalr        $t9
label_4ae304:
    if (ctx->pc == 0x4AE304u) {
        ctx->pc = 0x4AE304u;
            // 0x4ae304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AE308u;
        goto label_4ae308;
    }
    ctx->pc = 0x4AE300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AE308u);
        ctx->pc = 0x4AE304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE300u;
            // 0x4ae304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AE308u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AE308u; }
            if (ctx->pc != 0x4AE308u) { return; }
        }
        }
    }
    ctx->pc = 0x4AE308u;
label_4ae308:
    // 0x4ae308: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ae308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ae30c:
    // 0x4ae30c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ae30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ae310:
    // 0x4ae310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ae310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ae314:
    // 0x4ae314: 0x3e00008  jr          $ra
label_4ae318:
    if (ctx->pc == 0x4AE318u) {
        ctx->pc = 0x4AE318u;
            // 0x4ae318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4AE31Cu;
        goto label_4ae31c;
    }
    ctx->pc = 0x4AE314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE314u;
            // 0x4ae318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AE31Cu;
label_4ae31c:
    // 0x4ae31c: 0x0  nop
    ctx->pc = 0x4ae31cu;
    // NOP
label_4ae320:
    // 0x4ae320: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x4ae320u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4ae324:
    // 0x4ae324: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x4ae324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_4ae328:
    // 0x4ae328: 0x3466f000  ori         $a2, $v1, 0xF000
    ctx->pc = 0x4ae328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_4ae32c:
    // 0x4ae32c: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x4ae32cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_4ae330:
    // 0x4ae330: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x4ae330u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ae334:
    // 0x4ae334: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x4ae334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_4ae338:
    // 0x4ae338: 0xc4e20de4  lwc1        $f2, 0xDE4($a3)
    ctx->pc = 0x4ae338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ae33c:
    // 0x4ae33c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4ae33cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae340:
    // 0x4ae340: 0x0  nop
    ctx->pc = 0x4ae340u;
    // NOP
label_4ae344:
    // 0x4ae344: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4ae344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4ae348:
    // 0x4ae348: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x4ae348u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_4ae34c:
    // 0x4ae34c: 0x0  nop
    ctx->pc = 0x4ae34cu;
    // NOP
label_4ae350:
    // 0x4ae350: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4ae350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ae354:
    // 0x4ae354: 0x0  nop
    ctx->pc = 0x4ae354u;
    // NOP
label_4ae358:
    // 0x4ae358: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x4ae358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae35c:
    // 0x4ae35c: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
label_4ae360:
    if (ctx->pc == 0x4AE360u) {
        ctx->pc = 0x4AE360u;
            // 0x4ae360: 0x3c0342b4  lui         $v1, 0x42B4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
        ctx->pc = 0x4AE364u;
        goto label_4ae364;
    }
    ctx->pc = 0x4AE35Cu;
    {
        const bool branch_taken_0x4ae35c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae35c) {
            ctx->pc = 0x4AE360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE35Cu;
            // 0x4ae360: 0x3c0342b4  lui         $v1, 0x42B4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE3C8u;
            goto label_4ae3c8;
        }
    }
    ctx->pc = 0x4AE364u;
label_4ae364:
    // 0x4ae364: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x4ae364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae368:
    // 0x4ae368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ae368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae36c:
    // 0x4ae36c: 0x0  nop
    ctx->pc = 0x4ae36cu;
    // NOP
label_4ae370:
    // 0x4ae370: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4ae370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae374:
    // 0x4ae374: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_4ae378:
    if (ctx->pc == 0x4AE378u) {
        ctx->pc = 0x4AE378u;
            // 0x4ae378: 0x3c0340c0  lui         $v1, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
        ctx->pc = 0x4AE37Cu;
        goto label_4ae37c;
    }
    ctx->pc = 0x4AE374u;
    {
        const bool branch_taken_0x4ae374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae374) {
            ctx->pc = 0x4AE378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE374u;
            // 0x4ae378: 0x3c0340c0  lui         $v1, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE398u;
            goto label_4ae398;
        }
    }
    ctx->pc = 0x4AE37Cu;
label_4ae37c:
    // 0x4ae37c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x4ae37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_4ae380:
    // 0x4ae380: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4ae380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4ae384:
    // 0x4ae384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae388:
    // 0x4ae388: 0x0  nop
    ctx->pc = 0x4ae388u;
    // NOP
label_4ae38c:
    // 0x4ae38c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4ae38cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4ae390:
    // 0x4ae390: 0x10000077  b           . + 4 + (0x77 << 2)
label_4ae394:
    if (ctx->pc == 0x4AE394u) {
        ctx->pc = 0x4AE394u;
            // 0x4ae394: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->pc = 0x4AE398u;
        goto label_4ae398;
    }
    ctx->pc = 0x4AE390u;
    {
        const bool branch_taken_0x4ae390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE390u;
            // 0x4ae394: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae390) {
            ctx->pc = 0x4AE570u;
            goto label_4ae570;
        }
    }
    ctx->pc = 0x4AE398u;
label_4ae398:
    // 0x4ae398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae39c:
    // 0x4ae39c: 0x0  nop
    ctx->pc = 0x4ae39cu;
    // NOP
label_4ae3a0:
    // 0x4ae3a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4ae3a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae3a4:
    // 0x4ae3a4: 0x45020073  bc1fl       . + 4 + (0x73 << 2)
label_4ae3a8:
    if (ctx->pc == 0x4AE3A8u) {
        ctx->pc = 0x4AE3A8u;
            // 0x4ae3a8: 0x8c870000  lw          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4AE3ACu;
        goto label_4ae3ac;
    }
    ctx->pc = 0x4AE3A4u;
    {
        const bool branch_taken_0x4ae3a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae3a4) {
            ctx->pc = 0x4AE3A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE3A4u;
            // 0x4ae3a8: 0x8c870000  lw          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE574u;
            goto label_4ae574;
        }
    }
    ctx->pc = 0x4AE3ACu;
label_4ae3ac:
    // 0x4ae3ac: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x4ae3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_4ae3b0:
    // 0x4ae3b0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4ae3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4ae3b4:
    // 0x4ae3b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae3b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae3b8:
    // 0x4ae3b8: 0x0  nop
    ctx->pc = 0x4ae3b8u;
    // NOP
label_4ae3bc:
    // 0x4ae3bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4ae3bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4ae3c0:
    // 0x4ae3c0: 0x1000006b  b           . + 4 + (0x6B << 2)
label_4ae3c4:
    if (ctx->pc == 0x4AE3C4u) {
        ctx->pc = 0x4AE3C4u;
            // 0x4ae3c4: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->pc = 0x4AE3C8u;
        goto label_4ae3c8;
    }
    ctx->pc = 0x4AE3C0u;
    {
        const bool branch_taken_0x4ae3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE3C0u;
            // 0x4ae3c4: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae3c0) {
            ctx->pc = 0x4AE570u;
            goto label_4ae570;
        }
    }
    ctx->pc = 0x4AE3C8u;
label_4ae3c8:
    // 0x4ae3c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae3c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae3cc:
    // 0x4ae3cc: 0x0  nop
    ctx->pc = 0x4ae3ccu;
    // NOP
label_4ae3d0:
    // 0x4ae3d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4ae3d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae3d4:
    // 0x4ae3d4: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
label_4ae3d8:
    if (ctx->pc == 0x4AE3D8u) {
        ctx->pc = 0x4AE3D8u;
            // 0x4ae3d8: 0x3c034302  lui         $v1, 0x4302 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
        ctx->pc = 0x4AE3DCu;
        goto label_4ae3dc;
    }
    ctx->pc = 0x4AE3D4u;
    {
        const bool branch_taken_0x4ae3d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae3d4) {
            ctx->pc = 0x4AE3D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE3D4u;
            // 0x4ae3d8: 0x3c034302  lui         $v1, 0x4302 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE438u;
            goto label_4ae438;
        }
    }
    ctx->pc = 0x4AE3DCu;
label_4ae3dc:
    // 0x4ae3dc: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x4ae3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae3e0:
    // 0x4ae3e0: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x4ae3e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae3e4:
    // 0x4ae3e4: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_4ae3e8:
    if (ctx->pc == 0x4AE3E8u) {
        ctx->pc = 0x4AE3E8u;
            // 0x4ae3e8: 0x3c034180  lui         $v1, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
        ctx->pc = 0x4AE3ECu;
        goto label_4ae3ec;
    }
    ctx->pc = 0x4AE3E4u;
    {
        const bool branch_taken_0x4ae3e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae3e4) {
            ctx->pc = 0x4AE3E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE3E4u;
            // 0x4ae3e8: 0x3c034180  lui         $v1, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE408u;
            goto label_4ae408;
        }
    }
    ctx->pc = 0x4AE3ECu;
label_4ae3ec:
    // 0x4ae3ec: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x4ae3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_4ae3f0:
    // 0x4ae3f0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4ae3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4ae3f4:
    // 0x4ae3f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae3f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae3f8:
    // 0x4ae3f8: 0x0  nop
    ctx->pc = 0x4ae3f8u;
    // NOP
label_4ae3fc:
    // 0x4ae3fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4ae3fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4ae400:
    // 0x4ae400: 0x1000005b  b           . + 4 + (0x5B << 2)
label_4ae404:
    if (ctx->pc == 0x4AE404u) {
        ctx->pc = 0x4AE404u;
            // 0x4ae404: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->pc = 0x4AE408u;
        goto label_4ae408;
    }
    ctx->pc = 0x4AE400u;
    {
        const bool branch_taken_0x4ae400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE400u;
            // 0x4ae404: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae400) {
            ctx->pc = 0x4AE570u;
            goto label_4ae570;
        }
    }
    ctx->pc = 0x4AE408u;
label_4ae408:
    // 0x4ae408: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae40c:
    // 0x4ae40c: 0x0  nop
    ctx->pc = 0x4ae40cu;
    // NOP
label_4ae410:
    // 0x4ae410: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4ae410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae414:
    // 0x4ae414: 0x45000056  bc1f        . + 4 + (0x56 << 2)
label_4ae418:
    if (ctx->pc == 0x4AE418u) {
        ctx->pc = 0x4AE41Cu;
        goto label_4ae41c;
    }
    ctx->pc = 0x4AE414u;
    {
        const bool branch_taken_0x4ae414 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae414) {
            ctx->pc = 0x4AE570u;
            goto label_4ae570;
        }
    }
    ctx->pc = 0x4AE41Cu;
label_4ae41c:
    // 0x4ae41c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x4ae41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_4ae420:
    // 0x4ae420: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4ae420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4ae424:
    // 0x4ae424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae428:
    // 0x4ae428: 0x0  nop
    ctx->pc = 0x4ae428u;
    // NOP
label_4ae42c:
    // 0x4ae42c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4ae42cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4ae430:
    // 0x4ae430: 0x1000004f  b           . + 4 + (0x4F << 2)
label_4ae434:
    if (ctx->pc == 0x4AE434u) {
        ctx->pc = 0x4AE434u;
            // 0x4ae434: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->pc = 0x4AE438u;
        goto label_4ae438;
    }
    ctx->pc = 0x4AE430u;
    {
        const bool branch_taken_0x4ae430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE430u;
            // 0x4ae434: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae430) {
            ctx->pc = 0x4AE570u;
            goto label_4ae570;
        }
    }
    ctx->pc = 0x4AE438u;
label_4ae438:
    // 0x4ae438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae43c:
    // 0x4ae43c: 0x0  nop
    ctx->pc = 0x4ae43cu;
    // NOP
label_4ae440:
    // 0x4ae440: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4ae440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae444:
    // 0x4ae444: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
label_4ae448:
    if (ctx->pc == 0x4AE448u) {
        ctx->pc = 0x4AE448u;
            // 0x4ae448: 0x3c034322  lui         $v1, 0x4322 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17186 << 16));
        ctx->pc = 0x4AE44Cu;
        goto label_4ae44c;
    }
    ctx->pc = 0x4AE444u;
    {
        const bool branch_taken_0x4ae444 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae444) {
            ctx->pc = 0x4AE448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE444u;
            // 0x4ae448: 0x3c034322  lui         $v1, 0x4322 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17186 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE4B4u;
            goto label_4ae4b4;
        }
    }
    ctx->pc = 0x4AE44Cu;
label_4ae44c:
    // 0x4ae44c: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x4ae44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae450:
    // 0x4ae450: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x4ae450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_4ae454:
    // 0x4ae454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae458:
    // 0x4ae458: 0x0  nop
    ctx->pc = 0x4ae458u;
    // NOP
label_4ae45c:
    // 0x4ae45c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4ae45cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae460:
    // 0x4ae460: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_4ae464:
    if (ctx->pc == 0x4AE464u) {
        ctx->pc = 0x4AE464u;
            // 0x4ae464: 0x3c0341d0  lui         $v1, 0x41D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16848 << 16));
        ctx->pc = 0x4AE468u;
        goto label_4ae468;
    }
    ctx->pc = 0x4AE460u;
    {
        const bool branch_taken_0x4ae460 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae460) {
            ctx->pc = 0x4AE464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE460u;
            // 0x4ae464: 0x3c0341d0  lui         $v1, 0x41D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16848 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE484u;
            goto label_4ae484;
        }
    }
    ctx->pc = 0x4AE468u;
label_4ae468:
    // 0x4ae468: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x4ae468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_4ae46c:
    // 0x4ae46c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4ae46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4ae470:
    // 0x4ae470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae474:
    // 0x4ae474: 0x0  nop
    ctx->pc = 0x4ae474u;
    // NOP
label_4ae478:
    // 0x4ae478: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4ae478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4ae47c:
    // 0x4ae47c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_4ae480:
    if (ctx->pc == 0x4AE480u) {
        ctx->pc = 0x4AE480u;
            // 0x4ae480: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->pc = 0x4AE484u;
        goto label_4ae484;
    }
    ctx->pc = 0x4AE47Cu;
    {
        const bool branch_taken_0x4ae47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE47Cu;
            // 0x4ae480: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae47c) {
            ctx->pc = 0x4AE570u;
            goto label_4ae570;
        }
    }
    ctx->pc = 0x4AE484u;
label_4ae484:
    // 0x4ae484: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae484u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae488:
    // 0x4ae488: 0x0  nop
    ctx->pc = 0x4ae488u;
    // NOP
label_4ae48c:
    // 0x4ae48c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4ae48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae490:
    // 0x4ae490: 0x45000037  bc1f        . + 4 + (0x37 << 2)
label_4ae494:
    if (ctx->pc == 0x4AE494u) {
        ctx->pc = 0x4AE498u;
        goto label_4ae498;
    }
    ctx->pc = 0x4AE490u;
    {
        const bool branch_taken_0x4ae490 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae490) {
            ctx->pc = 0x4AE570u;
            goto label_4ae570;
        }
    }
    ctx->pc = 0x4AE498u;
label_4ae498:
    // 0x4ae498: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x4ae498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_4ae49c:
    // 0x4ae49c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4ae49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4ae4a0:
    // 0x4ae4a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae4a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae4a4:
    // 0x4ae4a4: 0x0  nop
    ctx->pc = 0x4ae4a4u;
    // NOP
label_4ae4a8:
    // 0x4ae4a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4ae4a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4ae4ac:
    // 0x4ae4ac: 0x10000030  b           . + 4 + (0x30 << 2)
label_4ae4b0:
    if (ctx->pc == 0x4AE4B0u) {
        ctx->pc = 0x4AE4B0u;
            // 0x4ae4b0: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->pc = 0x4AE4B4u;
        goto label_4ae4b4;
    }
    ctx->pc = 0x4AE4ACu;
    {
        const bool branch_taken_0x4ae4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE4ACu;
            // 0x4ae4b0: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae4ac) {
            ctx->pc = 0x4AE570u;
            goto label_4ae570;
        }
    }
    ctx->pc = 0x4AE4B4u;
label_4ae4b4:
    // 0x4ae4b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae4b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae4b8:
    // 0x4ae4b8: 0x0  nop
    ctx->pc = 0x4ae4b8u;
    // NOP
label_4ae4bc:
    // 0x4ae4bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4ae4bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae4c0:
    // 0x4ae4c0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_4ae4c4:
    if (ctx->pc == 0x4AE4C4u) {
        ctx->pc = 0x4AE4C8u;
        goto label_4ae4c8;
    }
    ctx->pc = 0x4AE4C0u;
    {
        const bool branch_taken_0x4ae4c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae4c0) {
            ctx->pc = 0x4AE530u;
            goto label_4ae530;
        }
    }
    ctx->pc = 0x4AE4C8u;
label_4ae4c8:
    // 0x4ae4c8: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x4ae4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae4cc:
    // 0x4ae4cc: 0x3c0341d0  lui         $v1, 0x41D0
    ctx->pc = 0x4ae4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16848 << 16));
label_4ae4d0:
    // 0x4ae4d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae4d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae4d4:
    // 0x4ae4d4: 0x0  nop
    ctx->pc = 0x4ae4d4u;
    // NOP
label_4ae4d8:
    // 0x4ae4d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4ae4d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae4dc:
    // 0x4ae4dc: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_4ae4e0:
    if (ctx->pc == 0x4AE4E0u) {
        ctx->pc = 0x4AE4E0u;
            // 0x4ae4e0: 0x3c034210  lui         $v1, 0x4210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16912 << 16));
        ctx->pc = 0x4AE4E4u;
        goto label_4ae4e4;
    }
    ctx->pc = 0x4AE4DCu;
    {
        const bool branch_taken_0x4ae4dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae4dc) {
            ctx->pc = 0x4AE4E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE4DCu;
            // 0x4ae4e0: 0x3c034210  lui         $v1, 0x4210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16912 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE500u;
            goto label_4ae500;
        }
    }
    ctx->pc = 0x4AE4E4u;
label_4ae4e4:
    // 0x4ae4e4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x4ae4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_4ae4e8:
    // 0x4ae4e8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4ae4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4ae4ec:
    // 0x4ae4ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae4ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae4f0:
    // 0x4ae4f0: 0x0  nop
    ctx->pc = 0x4ae4f0u;
    // NOP
label_4ae4f4:
    // 0x4ae4f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4ae4f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4ae4f8:
    // 0x4ae4f8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_4ae4fc:
    if (ctx->pc == 0x4AE4FCu) {
        ctx->pc = 0x4AE4FCu;
            // 0x4ae4fc: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->pc = 0x4AE500u;
        goto label_4ae500;
    }
    ctx->pc = 0x4AE4F8u;
    {
        const bool branch_taken_0x4ae4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE4F8u;
            // 0x4ae4fc: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae4f8) {
            ctx->pc = 0x4AE570u;
            goto label_4ae570;
        }
    }
    ctx->pc = 0x4AE500u;
label_4ae500:
    // 0x4ae500: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae500u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae504:
    // 0x4ae504: 0x0  nop
    ctx->pc = 0x4ae504u;
    // NOP
label_4ae508:
    // 0x4ae508: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4ae508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae50c:
    // 0x4ae50c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_4ae510:
    if (ctx->pc == 0x4AE510u) {
        ctx->pc = 0x4AE514u;
        goto label_4ae514;
    }
    ctx->pc = 0x4AE50Cu;
    {
        const bool branch_taken_0x4ae50c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae50c) {
            ctx->pc = 0x4AE570u;
            goto label_4ae570;
        }
    }
    ctx->pc = 0x4AE514u;
label_4ae514:
    // 0x4ae514: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x4ae514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_4ae518:
    // 0x4ae518: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4ae518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4ae51c:
    // 0x4ae51c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae51cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae520:
    // 0x4ae520: 0x0  nop
    ctx->pc = 0x4ae520u;
    // NOP
label_4ae524:
    // 0x4ae524: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4ae524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4ae528:
    // 0x4ae528: 0x10000011  b           . + 4 + (0x11 << 2)
label_4ae52c:
    if (ctx->pc == 0x4AE52Cu) {
        ctx->pc = 0x4AE52Cu;
            // 0x4ae52c: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->pc = 0x4AE530u;
        goto label_4ae530;
    }
    ctx->pc = 0x4AE528u;
    {
        const bool branch_taken_0x4ae528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE528u;
            // 0x4ae52c: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae528) {
            ctx->pc = 0x4AE570u;
            goto label_4ae570;
        }
    }
    ctx->pc = 0x4AE530u;
label_4ae530:
    // 0x4ae530: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4ae530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae534:
    // 0x4ae534: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_4ae538:
    if (ctx->pc == 0x4AE538u) {
        ctx->pc = 0x4AE53Cu;
        goto label_4ae53c;
    }
    ctx->pc = 0x4AE534u;
    {
        const bool branch_taken_0x4ae534 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae534) {
            ctx->pc = 0x4AE570u;
            goto label_4ae570;
        }
    }
    ctx->pc = 0x4AE53Cu;
label_4ae53c:
    // 0x4ae53c: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x4ae53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae540:
    // 0x4ae540: 0x3c034210  lui         $v1, 0x4210
    ctx->pc = 0x4ae540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16912 << 16));
label_4ae544:
    // 0x4ae544: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae548:
    // 0x4ae548: 0x0  nop
    ctx->pc = 0x4ae548u;
    // NOP
label_4ae54c:
    // 0x4ae54c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4ae54cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae550:
    // 0x4ae550: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_4ae554:
    if (ctx->pc == 0x4AE554u) {
        ctx->pc = 0x4AE558u;
        goto label_4ae558;
    }
    ctx->pc = 0x4AE550u;
    {
        const bool branch_taken_0x4ae550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae550) {
            ctx->pc = 0x4AE570u;
            goto label_4ae570;
        }
    }
    ctx->pc = 0x4AE558u;
label_4ae558:
    // 0x4ae558: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x4ae558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_4ae55c:
    // 0x4ae55c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4ae55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4ae560:
    // 0x4ae560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae564:
    // 0x4ae564: 0x0  nop
    ctx->pc = 0x4ae564u;
    // NOP
label_4ae568:
    // 0x4ae568: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4ae568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4ae56c:
    // 0x4ae56c: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x4ae56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
label_4ae570:
    // 0x4ae570: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x4ae570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ae574:
    // 0x4ae574: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4ae574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4ae578:
    // 0x4ae578: 0x8c663fb0  lw          $a2, 0x3FB0($v1)
    ctx->pc = 0x4ae578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16304)));
label_4ae57c:
    // 0x4ae57c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ae57cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae580:
    // 0x4ae580: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4ae580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_4ae584:
    // 0x4ae584: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x4ae584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4ae588:
    // 0x4ae588: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x4ae588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
label_4ae58c:
    // 0x4ae58c: 0xc03027  not         $a2, $a2
    ctx->pc = 0x4ae58cu;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
label_4ae590:
    // 0x4ae590: 0x34650b60  ori         $a1, $v1, 0xB60
    ctx->pc = 0x4ae590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2912);
label_4ae594:
    // 0x4ae594: 0x8ce70030  lw          $a3, 0x30($a3)
    ctx->pc = 0x4ae594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_4ae598:
    // 0x4ae598: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x4ae598u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ae59c:
    // 0x4ae59c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ae59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ae5a0:
    // 0x4ae5a0: 0x8ce51290  lw          $a1, 0x1290($a3)
    ctx->pc = 0x4ae5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4752)));
label_4ae5a4:
    // 0x4ae5a4: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4ae5a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_4ae5a8:
    // 0x4ae5a8: 0xace51290  sw          $a1, 0x1290($a3)
    ctx->pc = 0x4ae5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4752), GPR_U32(ctx, 5));
label_4ae5ac:
    // 0x4ae5ac: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x4ae5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae5b0:
    // 0x4ae5b0: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x4ae5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4ae5b4:
    // 0x4ae5b4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4ae5b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4ae5b8:
    // 0x4ae5b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ae5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ae5bc:
    // 0x4ae5bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4ae5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ae5c0:
    // 0x4ae5c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ae5c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4ae5c4:
    // 0x4ae5c4: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x4ae5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_4ae5c8:
    // 0x4ae5c8: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x4ae5c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4ae5cc:
    // 0x4ae5cc: 0xc4a112a8  lwc1        $f1, 0x12A8($a1)
    ctx->pc = 0x4ae5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae5d0:
    // 0x4ae5d0: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x4ae5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ae5d4:
    // 0x4ae5d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4ae5d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4ae5d8:
    // 0x4ae5d8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4ae5d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4ae5dc:
    // 0x4ae5dc: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x4ae5dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_4ae5e0:
    // 0x4ae5e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ae5e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ae5e4:
    // 0x4ae5e4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4ae5e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4ae5e8:
    // 0x4ae5e8: 0x0  nop
    ctx->pc = 0x4ae5e8u;
    // NOP
label_4ae5ec:
    // 0x4ae5ec: 0xaca312a8  sw          $v1, 0x12A8($a1)
    ctx->pc = 0x4ae5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4776), GPR_U32(ctx, 3));
label_4ae5f0:
    // 0x4ae5f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ae5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ae5f4:
    // 0x4ae5f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4ae5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ae5f8:
    // 0x4ae5f8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x4ae5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_4ae5fc:
    // 0x4ae5fc: 0x246412a8  addiu       $a0, $v1, 0x12A8
    ctx->pc = 0x4ae5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4776));
label_4ae600:
    // 0x4ae600: 0x8c6312a8  lw          $v1, 0x12A8($v1)
    ctx->pc = 0x4ae600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4776)));
label_4ae604:
    // 0x4ae604: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x4ae604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_4ae608:
    // 0x4ae608: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_4ae60c:
    if (ctx->pc == 0x4AE60Cu) {
        ctx->pc = 0x4AE610u;
        goto label_4ae610;
    }
    ctx->pc = 0x4AE608u;
    {
        const bool branch_taken_0x4ae608 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ae608) {
            ctx->pc = 0x4AE61Cu;
            goto label_4ae61c;
        }
    }
    ctx->pc = 0x4AE610u;
label_4ae610:
    // 0x4ae610: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x4ae610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
label_4ae614:
    // 0x4ae614: 0x24638001  addiu       $v1, $v1, -0x7FFF
    ctx->pc = 0x4ae614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934529));
label_4ae618:
    // 0x4ae618: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ae618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4ae61c:
    // 0x4ae61c: 0x3e00008  jr          $ra
label_4ae620:
    if (ctx->pc == 0x4AE620u) {
        ctx->pc = 0x4AE624u;
        goto label_4ae624;
    }
    ctx->pc = 0x4AE61Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AE624u;
label_4ae624:
    // 0x4ae624: 0x0  nop
    ctx->pc = 0x4ae624u;
    // NOP
label_4ae628:
    // 0x4ae628: 0x0  nop
    ctx->pc = 0x4ae628u;
    // NOP
label_4ae62c:
    // 0x4ae62c: 0x0  nop
    ctx->pc = 0x4ae62cu;
    // NOP
label_4ae630:
    // 0x4ae630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ae630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ae634:
    // 0x4ae634: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ae634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4ae638:
    // 0x4ae638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ae638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ae63c:
    // 0x4ae63c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ae63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ae640:
    // 0x4ae640: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ae640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ae644:
    // 0x4ae644: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x4ae644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_4ae648:
    // 0x4ae648: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_4ae64c:
    if (ctx->pc == 0x4AE64Cu) {
        ctx->pc = 0x4AE64Cu;
            // 0x4ae64c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AE650u;
        goto label_4ae650;
    }
    ctx->pc = 0x4AE648u;
    {
        const bool branch_taken_0x4ae648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE648u;
            // 0x4ae64c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae648) {
            ctx->pc = 0x4AE6B8u;
            goto label_4ae6b8;
        }
    }
    ctx->pc = 0x4AE650u;
label_4ae650:
    // 0x4ae650: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4ae650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4ae654:
    // 0x4ae654: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x4ae654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_4ae658:
    // 0x4ae658: 0x8c630550  lw          $v1, 0x550($v1)
    ctx->pc = 0x4ae658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1360)));
label_4ae65c:
    // 0x4ae65c: 0x8063010f  lb          $v1, 0x10F($v1)
    ctx->pc = 0x4ae65cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 271)));
label_4ae660:
    // 0x4ae660: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
label_4ae664:
    if (ctx->pc == 0x4AE664u) {
        ctx->pc = 0x4AE664u;
            // 0x4ae664: 0x3c034040  lui         $v1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
        ctx->pc = 0x4AE668u;
        goto label_4ae668;
    }
    ctx->pc = 0x4AE660u;
    {
        const bool branch_taken_0x4ae660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ae660) {
            ctx->pc = 0x4AE664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE660u;
            // 0x4ae664: 0x3c034040  lui         $v1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE6A0u;
            goto label_4ae6a0;
        }
    }
    ctx->pc = 0x4AE668u;
label_4ae668:
    // 0x4ae668: 0x2862001c  slti        $v0, $v1, 0x1C
    ctx->pc = 0x4ae668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28) ? 1 : 0);
label_4ae66c:
    // 0x4ae66c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_4ae670:
    if (ctx->pc == 0x4AE670u) {
        ctx->pc = 0x4AE670u;
            // 0x4ae670: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->pc = 0x4AE674u;
        goto label_4ae674;
    }
    ctx->pc = 0x4AE66Cu;
    {
        const bool branch_taken_0x4ae66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ae66c) {
            ctx->pc = 0x4AE670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE66Cu;
            // 0x4ae670: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE6B0u;
            goto label_4ae6b0;
        }
    }
    ctx->pc = 0x4AE674u;
label_4ae674:
    // 0x4ae674: 0x2862001f  slti        $v0, $v1, 0x1F
    ctx->pc = 0x4ae674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
label_4ae678:
    // 0x4ae678: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4ae67c:
    if (ctx->pc == 0x4AE67Cu) {
        ctx->pc = 0x4AE67Cu;
            // 0x4ae67c: 0x3c0341f0  lui         $v1, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
        ctx->pc = 0x4AE680u;
        goto label_4ae680;
    }
    ctx->pc = 0x4AE678u;
    {
        const bool branch_taken_0x4ae678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ae678) {
            ctx->pc = 0x4AE67Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE678u;
            // 0x4ae67c: 0x3c0341f0  lui         $v1, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE68Cu;
            goto label_4ae68c;
        }
    }
    ctx->pc = 0x4AE680u;
label_4ae680:
    // 0x4ae680: 0x1000000a  b           . + 4 + (0xA << 2)
label_4ae684:
    if (ctx->pc == 0x4AE684u) {
        ctx->pc = 0x4AE688u;
        goto label_4ae688;
    }
    ctx->pc = 0x4AE680u;
    {
        const bool branch_taken_0x4ae680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae680) {
            ctx->pc = 0x4AE6ACu;
            goto label_4ae6ac;
        }
    }
    ctx->pc = 0x4AE688u;
label_4ae688:
    // 0x4ae688: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x4ae688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_4ae68c:
    // 0x4ae68c: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x4ae68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_4ae690:
    // 0x4ae690: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x4ae690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
label_4ae694:
    // 0x4ae694: 0x1000000a  b           . + 4 + (0xA << 2)
label_4ae698:
    if (ctx->pc == 0x4AE698u) {
        ctx->pc = 0x4AE698u;
            // 0x4ae698: 0xae420068  sw          $v0, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
        ctx->pc = 0x4AE69Cu;
        goto label_4ae69c;
    }
    ctx->pc = 0x4AE694u;
    {
        const bool branch_taken_0x4ae694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE694u;
            // 0x4ae698: 0xae420068  sw          $v0, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae694) {
            ctx->pc = 0x4AE6C0u;
            goto label_4ae6c0;
        }
    }
    ctx->pc = 0x4AE69Cu;
label_4ae69c:
    // 0x4ae69c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x4ae69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_4ae6a0:
    // 0x4ae6a0: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x4ae6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_4ae6a4:
    // 0x4ae6a4: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x4ae6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
label_4ae6a8:
    // 0x4ae6a8: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x4ae6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_4ae6ac:
    // 0x4ae6ac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4ae6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4ae6b0:
    // 0x4ae6b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_4ae6b4:
    if (ctx->pc == 0x4AE6B4u) {
        ctx->pc = 0x4AE6B4u;
            // 0x4ae6b4: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4AE6B8u;
        goto label_4ae6b8;
    }
    ctx->pc = 0x4AE6B0u;
    {
        const bool branch_taken_0x4ae6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE6B0u;
            // 0x4ae6b4: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae6b0) {
            ctx->pc = 0x4AE6C0u;
            goto label_4ae6c0;
        }
    }
    ctx->pc = 0x4AE6B8u;
label_4ae6b8:
    // 0x4ae6b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ae6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4ae6bc:
    // 0x4ae6bc: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x4ae6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_4ae6c0:
    // 0x4ae6c0: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x4ae6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
label_4ae6c4:
    // 0x4ae6c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ae6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4ae6c8:
    // 0x4ae6c8: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x4ae6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_4ae6cc:
    // 0x4ae6cc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4ae6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4ae6d0:
    // 0x4ae6d0: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x4ae6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ae6d4:
    // 0x4ae6d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4ae6d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4ae6d8:
    // 0x4ae6d8: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x4ae6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae6dc:
    // 0x4ae6dc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x4ae6dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_4ae6e0:
    // 0x4ae6e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ae6e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae6e4:
    // 0x4ae6e4: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x4ae6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ae6e8:
    // 0x4ae6e8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4ae6e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4ae6ec:
    // 0x4ae6ec: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x4ae6ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_4ae6f0:
    // 0x4ae6f0: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x4ae6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
label_4ae6f4:
    // 0x4ae6f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ae6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ae6f8:
    // 0x4ae6f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4ae6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ae6fc:
    // 0x4ae6fc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x4ae6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4ae700:
    // 0x4ae700: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x4ae700u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4ae704:
    // 0x4ae704: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x4ae704u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4ae708:
    // 0x4ae708: 0xc0477a8  jal         func_11DEA0
label_4ae70c:
    if (ctx->pc == 0x4AE70Cu) {
        ctx->pc = 0x4AE70Cu;
            // 0x4ae70c: 0xc64c0060  lwc1        $f12, 0x60($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4AE710u;
        goto label_4ae710;
    }
    ctx->pc = 0x4AE708u;
    SET_GPR_U32(ctx, 31, 0x4AE710u);
    ctx->pc = 0x4AE70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE708u;
            // 0x4ae70c: 0xc64c0060  lwc1        $f12, 0x60($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE710u; }
        if (ctx->pc != 0x4AE710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE710u; }
        if (ctx->pc != 0x4AE710u) { return; }
    }
    ctx->pc = 0x4AE710u;
label_4ae710:
    // 0x4ae710: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x4ae710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
label_4ae714:
    // 0x4ae714: 0x3c0342aa  lui         $v1, 0x42AA
    ctx->pc = 0x4ae714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17066 << 16));
label_4ae718:
    // 0x4ae718: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4ae718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ae71c:
    // 0x4ae71c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4ae71cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ae720:
    // 0x4ae720: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4ae720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4ae724:
    // 0x4ae724: 0x0  nop
    ctx->pc = 0x4ae724u;
    // NOP
label_4ae728:
    // 0x4ae728: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4ae728u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4ae72c:
    // 0x4ae72c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x4ae72cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_4ae730:
    // 0x4ae730: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x4ae730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_4ae734:
    // 0x4ae734: 0xc0477a8  jal         func_11DEA0
label_4ae738:
    if (ctx->pc == 0x4AE738u) {
        ctx->pc = 0x4AE738u;
            // 0x4ae738: 0xc64c0060  lwc1        $f12, 0x60($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4AE73Cu;
        goto label_4ae73c;
    }
    ctx->pc = 0x4AE734u;
    SET_GPR_U32(ctx, 31, 0x4AE73Cu);
    ctx->pc = 0x4AE738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE734u;
            // 0x4ae738: 0xc64c0060  lwc1        $f12, 0x60($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE73Cu; }
        if (ctx->pc != 0x4AE73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE73Cu; }
        if (ctx->pc != 0x4AE73Cu) { return; }
    }
    ctx->pc = 0x4AE73Cu;
label_4ae73c:
    // 0x4ae73c: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x4ae73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
label_4ae740:
    // 0x4ae740: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ae740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ae744:
    // 0x4ae744: 0x0  nop
    ctx->pc = 0x4ae744u;
    // NOP
label_4ae748:
    // 0x4ae748: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4ae748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4ae74c:
    // 0x4ae74c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x4ae74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_4ae750:
    // 0x4ae750: 0xc0477a8  jal         func_11DEA0
label_4ae754:
    if (ctx->pc == 0x4AE754u) {
        ctx->pc = 0x4AE754u;
            // 0x4ae754: 0xc64c0060  lwc1        $f12, 0x60($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4AE758u;
        goto label_4ae758;
    }
    ctx->pc = 0x4AE750u;
    SET_GPR_U32(ctx, 31, 0x4AE758u);
    ctx->pc = 0x4AE754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE750u;
            // 0x4ae754: 0xc64c0060  lwc1        $f12, 0x60($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE758u; }
        if (ctx->pc != 0x4AE758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE758u; }
        if (ctx->pc != 0x4AE758u) { return; }
    }
    ctx->pc = 0x4AE758u;
label_4ae758:
    // 0x4ae758: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x4ae758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_4ae75c:
    // 0x4ae75c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x4ae75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_4ae760:
    // 0x4ae760: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4ae760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ae764:
    // 0x4ae764: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4ae764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4ae768:
    // 0x4ae768: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4ae768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4ae76c:
    // 0x4ae76c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x4ae76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_4ae770:
    // 0x4ae770: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x4ae770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae774:
    // 0x4ae774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ae774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae778:
    // 0x4ae778: 0xc0477a8  jal         func_11DEA0
label_4ae77c:
    if (ctx->pc == 0x4AE77Cu) {
        ctx->pc = 0x4AE77Cu;
            // 0x4ae77c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4AE780u;
        goto label_4ae780;
    }
    ctx->pc = 0x4AE778u;
    SET_GPR_U32(ctx, 31, 0x4AE780u);
    ctx->pc = 0x4AE77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE778u;
            // 0x4ae77c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE780u; }
        if (ctx->pc != 0x4AE780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE780u; }
        if (ctx->pc != 0x4AE780u) { return; }
    }
    ctx->pc = 0x4AE780u;
label_4ae780:
    // 0x4ae780: 0x3c03432a  lui         $v1, 0x432A
    ctx->pc = 0x4ae780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17194 << 16));
label_4ae784:
    // 0x4ae784: 0x3c0242aa  lui         $v0, 0x42AA
    ctx->pc = 0x4ae784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17066 << 16));
label_4ae788:
    // 0x4ae788: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4ae788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4ae78c:
    // 0x4ae78c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4ae78cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ae790:
    // 0x4ae790: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4ae790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4ae794:
    // 0x4ae794: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x4ae794u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_4ae798:
    // 0x4ae798: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x4ae798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_4ae79c:
    // 0x4ae79c: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x4ae79cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_4ae7a0:
    // 0x4ae7a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4ae7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4ae7a4:
    // 0x4ae7a4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x4ae7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_4ae7a8:
    // 0x4ae7a8: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x4ae7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ae7ac:
    // 0x4ae7ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ae7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ae7b0:
    // 0x4ae7b0: 0xc0477a8  jal         func_11DEA0
label_4ae7b4:
    if (ctx->pc == 0x4AE7B4u) {
        ctx->pc = 0x4AE7B4u;
            // 0x4ae7b4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4AE7B8u;
        goto label_4ae7b8;
    }
    ctx->pc = 0x4AE7B0u;
    SET_GPR_U32(ctx, 31, 0x4AE7B8u);
    ctx->pc = 0x4AE7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE7B0u;
            // 0x4ae7b4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE7B8u; }
        if (ctx->pc != 0x4AE7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE7B8u; }
        if (ctx->pc != 0x4AE7B8u) { return; }
    }
    ctx->pc = 0x4AE7B8u;
label_4ae7b8:
    // 0x4ae7b8: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x4ae7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_4ae7bc:
    // 0x4ae7bc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x4ae7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_4ae7c0:
    // 0x4ae7c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4ae7c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ae7c4:
    // 0x4ae7c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4ae7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4ae7c8:
    // 0x4ae7c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4ae7c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4ae7cc:
    // 0x4ae7cc: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x4ae7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_4ae7d0:
    // 0x4ae7d0: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x4ae7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae7d4:
    // 0x4ae7d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ae7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae7d8:
    // 0x4ae7d8: 0xc0477a8  jal         func_11DEA0
label_4ae7dc:
    if (ctx->pc == 0x4AE7DCu) {
        ctx->pc = 0x4AE7DCu;
            // 0x4ae7dc: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4AE7E0u;
        goto label_4ae7e0;
    }
    ctx->pc = 0x4AE7D8u;
    SET_GPR_U32(ctx, 31, 0x4AE7E0u);
    ctx->pc = 0x4AE7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE7D8u;
            // 0x4ae7dc: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE7E0u; }
        if (ctx->pc != 0x4AE7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AE7E0u; }
        if (ctx->pc != 0x4AE7E0u) { return; }
    }
    ctx->pc = 0x4AE7E0u;
label_4ae7e0:
    // 0x4ae7e0: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x4ae7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_4ae7e4:
    // 0x4ae7e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4ae7e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ae7e8:
    // 0x4ae7e8: 0x0  nop
    ctx->pc = 0x4ae7e8u;
    // NOP
label_4ae7ec:
    // 0x4ae7ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4ae7ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4ae7f0:
    // 0x4ae7f0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x4ae7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_4ae7f4:
    // 0x4ae7f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ae7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4ae7f8:
    // 0x4ae7f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ae7f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ae7fc:
    // 0x4ae7fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ae7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ae800:
    // 0x4ae800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ae800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ae804:
    // 0x4ae804: 0x3e00008  jr          $ra
label_4ae808:
    if (ctx->pc == 0x4AE808u) {
        ctx->pc = 0x4AE808u;
            // 0x4ae808: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4AE80Cu;
        goto label_4ae80c;
    }
    ctx->pc = 0x4AE804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE804u;
            // 0x4ae808: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AE80Cu;
label_4ae80c:
    // 0x4ae80c: 0x0  nop
    ctx->pc = 0x4ae80cu;
    // NOP
label_4ae810:
    // 0x4ae810: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4ae810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4ae814:
    // 0x4ae814: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x4ae814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_4ae818:
    // 0x4ae818: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ae818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae81c:
    // 0x4ae81c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ae81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ae820:
    // 0x4ae820: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4ae820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4ae824:
    // 0x4ae824: 0x8cc50d60  lw          $a1, 0xD60($a2)
    ctx->pc = 0x4ae824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3424)));
label_4ae828:
    // 0x4ae828: 0x90c30e3d  lbu         $v1, 0xE3D($a2)
    ctx->pc = 0x4ae828u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3645)));
label_4ae82c:
    // 0x4ae82c: 0x8c420788  lw          $v0, 0x788($v0)
    ctx->pc = 0x4ae82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_4ae830:
    // 0x4ae830: 0x80a50004  lb          $a1, 0x4($a1)
    ctx->pc = 0x4ae830u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_4ae834:
    // 0x4ae834: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4ae834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4ae838:
    // 0x4ae838: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4ae838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4ae83c:
    // 0x4ae83c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x4ae83cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ae840:
    // 0x4ae840: 0x0  nop
    ctx->pc = 0x4ae840u;
    // NOP
label_4ae844:
    // 0x4ae844: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4ae844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4ae848:
    // 0x4ae848: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x4ae848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_4ae84c:
    // 0x4ae84c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4ae84cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4ae850:
    // 0x4ae850: 0x0  nop
    ctx->pc = 0x4ae850u;
    // NOP
label_4ae854:
    // 0x4ae854: 0x0  nop
    ctx->pc = 0x4ae854u;
    // NOP
label_4ae858:
    // 0x4ae858: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4ae858u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4ae85c:
    // 0x4ae85c: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
label_4ae860:
    if (ctx->pc == 0x4AE860u) {
        ctx->pc = 0x4AE860u;
            // 0x4ae860: 0x3c024234  lui         $v0, 0x4234 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
        ctx->pc = 0x4AE864u;
        goto label_4ae864;
    }
    ctx->pc = 0x4AE85Cu;
    {
        const bool branch_taken_0x4ae85c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ae85c) {
            ctx->pc = 0x4AE860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE85Cu;
            // 0x4ae860: 0x3c024234  lui         $v0, 0x4234 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE874u;
            goto label_4ae874;
        }
    }
    ctx->pc = 0x4AE864u;
label_4ae864:
    // 0x4ae864: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x4ae864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
label_4ae868:
    // 0x4ae868: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4ae868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ae86c:
    // 0x4ae86c: 0x10000002  b           . + 4 + (0x2 << 2)
label_4ae870:
    if (ctx->pc == 0x4AE870u) {
        ctx->pc = 0x4AE874u;
        goto label_4ae874;
    }
    ctx->pc = 0x4AE86Cu;
    {
        const bool branch_taken_0x4ae86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae86c) {
            ctx->pc = 0x4AE878u;
            goto label_4ae878;
        }
    }
    ctx->pc = 0x4AE874u;
label_4ae874:
    // 0x4ae874: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4ae874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ae878:
    // 0x4ae878: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x4ae878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4ae87c:
    // 0x4ae87c: 0x0  nop
    ctx->pc = 0x4ae87cu;
    // NOP
label_4ae880:
    // 0x4ae880: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x4ae880u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae884:
    // 0x4ae884: 0x45000031  bc1f        . + 4 + (0x31 << 2)
label_4ae888:
    if (ctx->pc == 0x4AE888u) {
        ctx->pc = 0x4AE88Cu;
        goto label_4ae88c;
    }
    ctx->pc = 0x4AE884u;
    {
        const bool branch_taken_0x4ae884 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae884) {
            ctx->pc = 0x4AE94Cu;
            goto label_4ae94c;
        }
    }
    ctx->pc = 0x4AE88Cu;
label_4ae88c:
    // 0x4ae88c: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x4ae88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae890:
    // 0x4ae890: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x4ae890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae894:
    // 0x4ae894: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_4ae898:
    if (ctx->pc == 0x4AE898u) {
        ctx->pc = 0x4AE898u;
            // 0x4ae898: 0x46001007  neg.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[2]);
        ctx->pc = 0x4AE89Cu;
        goto label_4ae89c;
    }
    ctx->pc = 0x4AE894u;
    {
        const bool branch_taken_0x4ae894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae894) {
            ctx->pc = 0x4AE898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE894u;
            // 0x4ae898: 0x46001007  neg.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE8E8u;
            goto label_4ae8e8;
        }
    }
    ctx->pc = 0x4AE89Cu;
label_4ae89c:
    // 0x4ae89c: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x4ae89cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae8a0:
    // 0x4ae8a0: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_4ae8a4:
    if (ctx->pc == 0x4AE8A4u) {
        ctx->pc = 0x4AE8A8u;
        goto label_4ae8a8;
    }
    ctx->pc = 0x4AE8A0u;
    {
        const bool branch_taken_0x4ae8a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae8a0) {
            ctx->pc = 0x4AE8E4u;
            goto label_4ae8e4;
        }
    }
    ctx->pc = 0x4AE8A8u;
label_4ae8a8:
    // 0x4ae8a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ae8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4ae8ac:
    // 0x4ae8ac: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x4ae8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
label_4ae8b0:
    // 0x4ae8b0: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x4ae8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4ae8b4:
    // 0x4ae8b4: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x4ae8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae8b8:
    // 0x4ae8b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4ae8b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ae8bc:
    // 0x4ae8bc: 0xc4c30018  lwc1        $f3, 0x18($a2)
    ctx->pc = 0x4ae8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4ae8c0:
    // 0x4ae8c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4ae8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4ae8c4:
    // 0x4ae8c4: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x4ae8c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_4ae8c8:
    // 0x4ae8c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ae8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae8cc:
    // 0x4ae8cc: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x4ae8ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4ae8d0:
    // 0x4ae8d0: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x4ae8d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_4ae8d4:
    // 0x4ae8d4: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x4ae8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae8d8:
    // 0x4ae8d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4ae8d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4ae8dc:
    // 0x4ae8dc: 0x10000018  b           . + 4 + (0x18 << 2)
label_4ae8e0:
    if (ctx->pc == 0x4AE8E0u) {
        ctx->pc = 0x4AE8E0u;
            // 0x4ae8e0: 0xe4800070  swc1        $f0, 0x70($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
        ctx->pc = 0x4AE8E4u;
        goto label_4ae8e4;
    }
    ctx->pc = 0x4AE8DCu;
    {
        const bool branch_taken_0x4ae8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE8DCu;
            // 0x4ae8e0: 0xe4800070  swc1        $f0, 0x70($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae8dc) {
            ctx->pc = 0x4AE940u;
            goto label_4ae940;
        }
    }
    ctx->pc = 0x4AE8E4u;
label_4ae8e4:
    // 0x4ae8e4: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x4ae8e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_4ae8e8:
    // 0x4ae8e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4ae8e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae8ec:
    // 0x4ae8ec: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_4ae8f0:
    if (ctx->pc == 0x4AE8F0u) {
        ctx->pc = 0x4AE8F0u;
            // 0x4ae8f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4AE8F4u;
        goto label_4ae8f4;
    }
    ctx->pc = 0x4AE8ECu;
    {
        const bool branch_taken_0x4ae8ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae8ec) {
            ctx->pc = 0x4AE8F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE8ECu;
            // 0x4ae8f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AE944u;
            goto label_4ae944;
        }
    }
    ctx->pc = 0x4AE8F4u;
label_4ae8f4:
    // 0x4ae8f4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x4ae8f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4ae8f8:
    // 0x4ae8f8: 0x0  nop
    ctx->pc = 0x4ae8f8u;
    // NOP
label_4ae8fc:
    // 0x4ae8fc: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x4ae8fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae900:
    // 0x4ae900: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_4ae904:
    if (ctx->pc == 0x4AE904u) {
        ctx->pc = 0x4AE908u;
        goto label_4ae908;
    }
    ctx->pc = 0x4AE900u;
    {
        const bool branch_taken_0x4ae900 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae900) {
            ctx->pc = 0x4AE940u;
            goto label_4ae940;
        }
    }
    ctx->pc = 0x4AE908u;
label_4ae908:
    // 0x4ae908: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ae908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4ae90c:
    // 0x4ae90c: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x4ae90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
label_4ae910:
    // 0x4ae910: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x4ae910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4ae914:
    // 0x4ae914: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x4ae914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae918:
    // 0x4ae918: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4ae918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ae91c:
    // 0x4ae91c: 0xc4c30018  lwc1        $f3, 0x18($a2)
    ctx->pc = 0x4ae91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4ae920:
    // 0x4ae920: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4ae920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4ae924:
    // 0x4ae924: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x4ae924u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_4ae928:
    // 0x4ae928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ae928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae92c:
    // 0x4ae92c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x4ae92cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4ae930:
    // 0x4ae930: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x4ae930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_4ae934:
    // 0x4ae934: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x4ae934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae938:
    // 0x4ae938: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4ae938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4ae93c:
    // 0x4ae93c: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x4ae93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_4ae940:
    // 0x4ae940: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4ae940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ae944:
    // 0x4ae944: 0x10000030  b           . + 4 + (0x30 << 2)
label_4ae948:
    if (ctx->pc == 0x4AE948u) {
        ctx->pc = 0x4AE948u;
            // 0x4ae948: 0xac820074  sw          $v0, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x4AE94Cu;
        goto label_4ae94c;
    }
    ctx->pc = 0x4AE944u;
    {
        const bool branch_taken_0x4ae944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE944u;
            // 0x4ae948: 0xac820074  sw          $v0, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae944) {
            ctx->pc = 0x4AEA08u;
            goto label_4aea08;
        }
    }
    ctx->pc = 0x4AE94Cu;
label_4ae94c:
    // 0x4ae94c: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x4ae94cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae950:
    // 0x4ae950: 0x45010015  bc1t        . + 4 + (0x15 << 2)
label_4ae954:
    if (ctx->pc == 0x4AE954u) {
        ctx->pc = 0x4AE958u;
        goto label_4ae958;
    }
    ctx->pc = 0x4AE950u;
    {
        const bool branch_taken_0x4ae950 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae950) {
            ctx->pc = 0x4AE9A8u;
            goto label_4ae9a8;
        }
    }
    ctx->pc = 0x4AE958u;
label_4ae958:
    // 0x4ae958: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x4ae958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ae95c:
    // 0x4ae95c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x4ae95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae960:
    // 0x4ae960: 0x4502002a  bc1fl       . + 4 + (0x2A << 2)
label_4ae964:
    if (ctx->pc == 0x4AE964u) {
        ctx->pc = 0x4AE964u;
            // 0x4ae964: 0xc4800078  lwc1        $f0, 0x78($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4AE968u;
        goto label_4ae968;
    }
    ctx->pc = 0x4AE960u;
    {
        const bool branch_taken_0x4ae960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae960) {
            ctx->pc = 0x4AE964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE960u;
            // 0x4ae964: 0xc4800078  lwc1        $f0, 0x78($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AEA0Cu;
            goto label_4aea0c;
        }
    }
    ctx->pc = 0x4AE968u;
label_4ae968:
    // 0x4ae968: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ae968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4ae96c:
    // 0x4ae96c: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x4ae96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
label_4ae970:
    // 0x4ae970: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x4ae970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4ae974:
    // 0x4ae974: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x4ae974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae978:
    // 0x4ae978: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4ae978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ae97c:
    // 0x4ae97c: 0xc4c30018  lwc1        $f3, 0x18($a2)
    ctx->pc = 0x4ae97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4ae980:
    // 0x4ae980: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4ae980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4ae984:
    // 0x4ae984: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x4ae984u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_4ae988:
    // 0x4ae988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ae988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae98c:
    // 0x4ae98c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x4ae98cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4ae990:
    // 0x4ae990: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x4ae990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_4ae994:
    // 0x4ae994: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x4ae994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae998:
    // 0x4ae998: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4ae998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4ae99c:
    // 0x4ae99c: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x4ae99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_4ae9a0:
    // 0x4ae9a0: 0x10000019  b           . + 4 + (0x19 << 2)
label_4ae9a4:
    if (ctx->pc == 0x4AE9A4u) {
        ctx->pc = 0x4AE9A4u;
            // 0x4ae9a4: 0xac800074  sw          $zero, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4AE9A8u;
        goto label_4ae9a8;
    }
    ctx->pc = 0x4AE9A0u;
    {
        const bool branch_taken_0x4ae9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AE9A0u;
            // 0x4ae9a4: 0xac800074  sw          $zero, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae9a0) {
            ctx->pc = 0x4AEA08u;
            goto label_4aea08;
        }
    }
    ctx->pc = 0x4AE9A8u;
label_4ae9a8:
    // 0x4ae9a8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x4ae9a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae9ac:
    // 0x4ae9ac: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_4ae9b0:
    if (ctx->pc == 0x4AE9B0u) {
        ctx->pc = 0x4AE9B4u;
        goto label_4ae9b4;
    }
    ctx->pc = 0x4AE9ACu;
    {
        const bool branch_taken_0x4ae9ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae9ac) {
            ctx->pc = 0x4AEA08u;
            goto label_4aea08;
        }
    }
    ctx->pc = 0x4AE9B4u;
label_4ae9b4:
    // 0x4ae9b4: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x4ae9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae9b8:
    // 0x4ae9b8: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x4ae9b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_4ae9bc:
    // 0x4ae9bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4ae9bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ae9c0:
    // 0x4ae9c0: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_4ae9c4:
    if (ctx->pc == 0x4AE9C4u) {
        ctx->pc = 0x4AE9C8u;
        goto label_4ae9c8;
    }
    ctx->pc = 0x4AE9C0u;
    {
        const bool branch_taken_0x4ae9c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ae9c0) {
            ctx->pc = 0x4AEA08u;
            goto label_4aea08;
        }
    }
    ctx->pc = 0x4AE9C8u;
label_4ae9c8:
    // 0x4ae9c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ae9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4ae9cc:
    // 0x4ae9cc: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x4ae9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
label_4ae9d0:
    // 0x4ae9d0: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x4ae9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4ae9d4:
    // 0x4ae9d4: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x4ae9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae9d8:
    // 0x4ae9d8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4ae9d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ae9dc:
    // 0x4ae9dc: 0xc4c30018  lwc1        $f3, 0x18($a2)
    ctx->pc = 0x4ae9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4ae9e0:
    // 0x4ae9e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4ae9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4ae9e4:
    // 0x4ae9e4: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x4ae9e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_4ae9e8:
    // 0x4ae9e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ae9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ae9ec:
    // 0x4ae9ec: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x4ae9ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4ae9f0:
    // 0x4ae9f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ae9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ae9f4:
    // 0x4ae9f4: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x4ae9f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_4ae9f8:
    // 0x4ae9f8: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x4ae9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ae9fc:
    // 0x4ae9fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4ae9fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4aea00:
    // 0x4aea00: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x4aea00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_4aea04:
    // 0x4aea04: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x4aea04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
label_4aea08:
    // 0x4aea08: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x4aea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4aea0c:
    // 0x4aea0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4aea0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4aea10:
    // 0x4aea10: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4aea10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4aea14:
    // 0x4aea14: 0x0  nop
    ctx->pc = 0x4aea14u;
    // NOP
label_4aea18:
    // 0x4aea18: 0x804cdf0  j           func_1337C0
label_4aea1c:
    if (ctx->pc == 0x4AEA1Cu) {
        ctx->pc = 0x4AEA1Cu;
            // 0x4aea1c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AEA20u;
        goto label_4aea20;
    }
    ctx->pc = 0x4AEA18u;
    ctx->pc = 0x4AEA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEA18u;
            // 0x4aea1c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001337C0_0x1337c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4AEA20u;
label_4aea20:
    // 0x4aea20: 0x3e00008  jr          $ra
label_4aea24:
    if (ctx->pc == 0x4AEA24u) {
        ctx->pc = 0x4AEA28u;
        goto label_4aea28;
    }
    ctx->pc = 0x4AEA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AEA28u;
label_4aea28:
    // 0x4aea28: 0x0  nop
    ctx->pc = 0x4aea28u;
    // NOP
label_4aea2c:
    // 0x4aea2c: 0x0  nop
    ctx->pc = 0x4aea2cu;
    // NOP
label_4aea30:
    // 0x4aea30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4aea34:
    // 0x4aea34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aea34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4aea38:
    // 0x4aea38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4aea38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4aea3c:
    // 0x4aea3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4aea3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4aea40:
    // 0x4aea40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aea40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4aea44:
    // 0x4aea44: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4aea48:
    if (ctx->pc == 0x4AEA48u) {
        ctx->pc = 0x4AEA48u;
            // 0x4aea48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AEA4Cu;
        goto label_4aea4c;
    }
    ctx->pc = 0x4AEA44u;
    {
        const bool branch_taken_0x4aea44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEA44u;
            // 0x4aea48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aea44) {
            ctx->pc = 0x4AEA78u;
            goto label_4aea78;
        }
    }
    ctx->pc = 0x4AEA4Cu;
label_4aea4c:
    // 0x4aea4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4aea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4aea50:
    // 0x4aea50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4aea50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aea54:
    // 0x4aea54: 0x244205c0  addiu       $v0, $v0, 0x5C0
    ctx->pc = 0x4aea54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1472));
label_4aea58:
    // 0x4aea58: 0xc0ec4f0  jal         func_3B13C0
label_4aea5c:
    if (ctx->pc == 0x4AEA5Cu) {
        ctx->pc = 0x4AEA5Cu;
            // 0x4aea5c: 0xae220374  sw          $v0, 0x374($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 2));
        ctx->pc = 0x4AEA60u;
        goto label_4aea60;
    }
    ctx->pc = 0x4AEA58u;
    SET_GPR_U32(ctx, 31, 0x4AEA60u);
    ctx->pc = 0x4AEA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEA58u;
            // 0x4aea5c: 0xae220374  sw          $v0, 0x374($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B13C0u;
    if (runtime->hasFunction(0x3B13C0u)) {
        auto targetFn = runtime->lookupFunction(0x3B13C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEA60u; }
        if (ctx->pc != 0x4AEA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B13C0_0x3b13c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEA60u; }
        if (ctx->pc != 0x4AEA60u) { return; }
    }
    ctx->pc = 0x4AEA60u;
label_4aea60:
    // 0x4aea60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4aea60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4aea64:
    // 0x4aea64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4aea64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4aea68:
    // 0x4aea68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4aea6c:
    if (ctx->pc == 0x4AEA6Cu) {
        ctx->pc = 0x4AEA6Cu;
            // 0x4aea6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AEA70u;
        goto label_4aea70;
    }
    ctx->pc = 0x4AEA68u;
    {
        const bool branch_taken_0x4aea68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4aea68) {
            ctx->pc = 0x4AEA6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEA68u;
            // 0x4aea6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AEA7Cu;
            goto label_4aea7c;
        }
    }
    ctx->pc = 0x4AEA70u;
label_4aea70:
    // 0x4aea70: 0xc0400a8  jal         func_1002A0
label_4aea74:
    if (ctx->pc == 0x4AEA74u) {
        ctx->pc = 0x4AEA74u;
            // 0x4aea74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AEA78u;
        goto label_4aea78;
    }
    ctx->pc = 0x4AEA70u;
    SET_GPR_U32(ctx, 31, 0x4AEA78u);
    ctx->pc = 0x4AEA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEA70u;
            // 0x4aea74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEA78u; }
        if (ctx->pc != 0x4AEA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEA78u; }
        if (ctx->pc != 0x4AEA78u) { return; }
    }
    ctx->pc = 0x4AEA78u;
label_4aea78:
    // 0x4aea78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4aea78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4aea7c:
    // 0x4aea7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aea7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4aea80:
    // 0x4aea80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4aea80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4aea84:
    // 0x4aea84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4aea84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4aea88:
    // 0x4aea88: 0x3e00008  jr          $ra
label_4aea8c:
    if (ctx->pc == 0x4AEA8Cu) {
        ctx->pc = 0x4AEA8Cu;
            // 0x4aea8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4AEA90u;
        goto label_4aea90;
    }
    ctx->pc = 0x4AEA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEA88u;
            // 0x4aea8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AEA90u;
label_4aea90:
    // 0x4aea90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4aea90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4aea94:
    // 0x4aea94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4aea94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4aea98:
    // 0x4aea98: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4aea98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4aea9c:
    // 0x4aea9c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4aea9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4aeaa0:
    // 0x4aeaa0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4aeaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4aeaa4:
    // 0x4aeaa4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4aeaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4aeaa8:
    // 0x4aeaa8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4aeaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4aeaac:
    // 0x4aeaac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4aeaacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4aeab0:
    // 0x4aeab0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4aeab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4aeab4:
    // 0x4aeab4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aeab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4aeab8:
    // 0x4aeab8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4aeab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4aeabc:
    // 0x4aeabc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4aeabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4aeac0:
    // 0x4aeac0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4aeac0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4aeac4:
    // 0x4aeac4: 0x8c550e80  lw          $s5, 0xE80($v0)
    ctx->pc = 0x4aeac4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4aeac8:
    // 0x4aeac8: 0x92a30ce4  lbu         $v1, 0xCE4($s5)
    ctx->pc = 0x4aeac8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3300)));
label_4aeacc:
    // 0x4aeacc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4aeaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4aead0:
    // 0x4aead0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_4aead4:
    if (ctx->pc == 0x4AEAD4u) {
        ctx->pc = 0x4AEAD4u;
            // 0x4aead4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AEAD8u;
        goto label_4aead8;
    }
    ctx->pc = 0x4AEAD0u;
    {
        const bool branch_taken_0x4aead0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AEAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEAD0u;
            // 0x4aead4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aead0) {
            ctx->pc = 0x4AEAE8u;
            goto label_4aeae8;
        }
    }
    ctx->pc = 0x4AEAD8u;
label_4aead8:
    // 0x4aead8: 0xc0eb4b4  jal         func_3AD2D0
label_4aeadc:
    if (ctx->pc == 0x4AEADCu) {
        ctx->pc = 0x4AEAE0u;
        goto label_4aeae0;
    }
    ctx->pc = 0x4AEAD8u;
    SET_GPR_U32(ctx, 31, 0x4AEAE0u);
    ctx->pc = 0x3AD2D0u;
    if (runtime->hasFunction(0x3AD2D0u)) {
        auto targetFn = runtime->lookupFunction(0x3AD2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEAE0u; }
        if (ctx->pc != 0x4AEAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AD2D0_0x3ad2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEAE0u; }
        if (ctx->pc != 0x4AEAE0u) { return; }
    }
    ctx->pc = 0x4AEAE0u;
label_4aeae0:
    // 0x4aeae0: 0x10000053  b           . + 4 + (0x53 << 2)
label_4aeae4:
    if (ctx->pc == 0x4AEAE4u) {
        ctx->pc = 0x4AEAE4u;
            // 0x4aeae4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x4AEAE8u;
        goto label_4aeae8;
    }
    ctx->pc = 0x4AEAE0u;
    {
        const bool branch_taken_0x4aeae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEAE0u;
            // 0x4aeae4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aeae0) {
            ctx->pc = 0x4AEC30u;
            goto label_4aec30;
        }
    }
    ctx->pc = 0x4AEAE8u;
label_4aeae8:
    // 0x4aeae8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4aeae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4aeaec:
    // 0x4aeaec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4aeaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4aeaf0:
    // 0x4aeaf0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4aeaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4aeaf4:
    // 0x4aeaf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4aeaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4aeaf8:
    // 0x4aeaf8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4aeaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4aeafc:
    // 0x4aeafc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4aeafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4aeb00:
    // 0x4aeb00: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4aeb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4aeb04:
    // 0x4aeb04: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4aeb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4aeb08:
    // 0x4aeb08: 0xc0cfe90  jal         func_33FA40
label_4aeb0c:
    if (ctx->pc == 0x4AEB0Cu) {
        ctx->pc = 0x4AEB0Cu;
            // 0x4aeb0c: 0x24540090  addiu       $s4, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x4AEB10u;
        goto label_4aeb10;
    }
    ctx->pc = 0x4AEB08u;
    SET_GPR_U32(ctx, 31, 0x4AEB10u);
    ctx->pc = 0x4AEB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEB08u;
            // 0x4aeb0c: 0x24540090  addiu       $s4, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33FA40u;
    if (runtime->hasFunction(0x33FA40u)) {
        auto targetFn = runtime->lookupFunction(0x33FA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEB10u; }
        if (ctx->pc != 0x4AEB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033FA40_0x33fa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEB10u; }
        if (ctx->pc != 0x4AEB10u) { return; }
    }
    ctx->pc = 0x4AEB10u;
label_4aeb10:
    // 0x4aeb10: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x4aeb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_4aeb14:
    // 0x4aeb14: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4aeb14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4aeb18:
    // 0x4aeb18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4aeb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4aeb1c:
    // 0x4aeb1c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x4aeb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_4aeb20:
    // 0x4aeb20: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4aeb20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_4aeb24:
    // 0x4aeb24: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4aeb24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4aeb28:
    // 0x4aeb28: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_4aeb2c:
    if (ctx->pc == 0x4AEB2Cu) {
        ctx->pc = 0x4AEB2Cu;
            // 0x4aeb2c: 0xc6940014  lwc1        $f20, 0x14($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x4AEB30u;
        goto label_4aeb30;
    }
    ctx->pc = 0x4AEB28u;
    {
        const bool branch_taken_0x4aeb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aeb28) {
            ctx->pc = 0x4AEB2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEB28u;
            // 0x4aeb2c: 0xc6940014  lwc1        $f20, 0x14($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AEB38u;
            goto label_4aeb38;
        }
    }
    ctx->pc = 0x4AEB30u;
label_4aeb30:
    // 0x4aeb30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4aeb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4aeb34:
    // 0x4aeb34: 0xc6940014  lwc1        $f20, 0x14($s4)
    ctx->pc = 0x4aeb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4aeb38:
    // 0x4aeb38: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4aeb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4aeb3c:
    // 0x4aeb3c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x4aeb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_4aeb40:
    // 0x4aeb40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4aeb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4aeb44:
    // 0x4aeb44: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4aeb44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_4aeb48:
    // 0x4aeb48: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_4aeb4c:
    if (ctx->pc == 0x4AEB4Cu) {
        ctx->pc = 0x4AEB4Cu;
            // 0x4aeb4c: 0x8c940e00  lw          $s4, 0xE00($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3584)));
        ctx->pc = 0x4AEB50u;
        goto label_4aeb50;
    }
    ctx->pc = 0x4AEB48u;
    {
        const bool branch_taken_0x4aeb48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AEB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEB48u;
            // 0x4aeb4c: 0x8c940e00  lw          $s4, 0xE00($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aeb48) {
            ctx->pc = 0x4AEB70u;
            goto label_4aeb70;
        }
    }
    ctx->pc = 0x4AEB50u;
label_4aeb50:
    // 0x4aeb50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4aeb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4aeb54:
    // 0x4aeb54: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_4aeb58:
    if (ctx->pc == 0x4AEB58u) {
        ctx->pc = 0x4AEB58u;
            // 0x4aeb58: 0x8eb50cdc  lw          $s5, 0xCDC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3292)));
        ctx->pc = 0x4AEB5Cu;
        goto label_4aeb5c;
    }
    ctx->pc = 0x4AEB54u;
    {
        const bool branch_taken_0x4aeb54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4aeb54) {
            ctx->pc = 0x4AEB58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEB54u;
            // 0x4aeb58: 0x8eb50cdc  lw          $s5, 0xCDC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AEB74u;
            goto label_4aeb74;
        }
    }
    ctx->pc = 0x4AEB5Cu;
label_4aeb5c:
    // 0x4aeb5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4aeb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4aeb60:
    // 0x4aeb60: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_4aeb64:
    if (ctx->pc == 0x4AEB64u) {
        ctx->pc = 0x4AEB64u;
            // 0x4aeb64: 0x8eb50cd8  lw          $s5, 0xCD8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3288)));
        ctx->pc = 0x4AEB68u;
        goto label_4aeb68;
    }
    ctx->pc = 0x4AEB60u;
    {
        const bool branch_taken_0x4aeb60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4aeb60) {
            ctx->pc = 0x4AEB64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEB60u;
            // 0x4aeb64: 0x8eb50cd8  lw          $s5, 0xCD8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AEB74u;
            goto label_4aeb74;
        }
    }
    ctx->pc = 0x4AEB68u;
label_4aeb68:
    // 0x4aeb68: 0x10000002  b           . + 4 + (0x2 << 2)
label_4aeb6c:
    if (ctx->pc == 0x4AEB6Cu) {
        ctx->pc = 0x4AEB6Cu;
            // 0x4aeb6c: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4AEB70u;
        goto label_4aeb70;
    }
    ctx->pc = 0x4AEB68u;
    {
        const bool branch_taken_0x4aeb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEB68u;
            // 0x4aeb6c: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aeb68) {
            ctx->pc = 0x4AEB74u;
            goto label_4aeb74;
        }
    }
    ctx->pc = 0x4AEB70u;
label_4aeb70:
    // 0x4aeb70: 0x8eb50ce0  lw          $s5, 0xCE0($s5)
    ctx->pc = 0x4aeb70u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3296)));
label_4aeb74:
    // 0x4aeb74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4aeb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4aeb78:
    // 0x4aeb78: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4aeb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4aeb7c:
    // 0x4aeb7c: 0xc0506ac  jal         func_141AB0
label_4aeb80:
    if (ctx->pc == 0x4AEB80u) {
        ctx->pc = 0x4AEB80u;
            // 0x4aeb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AEB84u;
        goto label_4aeb84;
    }
    ctx->pc = 0x4AEB7Cu;
    SET_GPR_U32(ctx, 31, 0x4AEB84u);
    ctx->pc = 0x4AEB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEB7Cu;
            // 0x4aeb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEB84u; }
        if (ctx->pc != 0x4AEB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEB84u; }
        if (ctx->pc != 0x4AEB84u) { return; }
    }
    ctx->pc = 0x4AEB84u;
label_4aeb84:
    // 0x4aeb84: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4aeb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4aeb88:
    // 0x4aeb88: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4aeb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4aeb8c:
    // 0x4aeb8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4aeb8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4aeb90:
    // 0x4aeb90: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4aeb90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4aeb94:
    // 0x4aeb94: 0x320f809  jalr        $t9
label_4aeb98:
    if (ctx->pc == 0x4AEB98u) {
        ctx->pc = 0x4AEB98u;
            // 0x4aeb98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4AEB9Cu;
        goto label_4aeb9c;
    }
    ctx->pc = 0x4AEB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AEB9Cu);
        ctx->pc = 0x4AEB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEB94u;
            // 0x4aeb98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AEB9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AEB9Cu; }
            if (ctx->pc != 0x4AEB9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4AEB9Cu;
label_4aeb9c:
    // 0x4aeb9c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x4aeb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4aeba0:
    // 0x4aeba0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4aeba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4aeba4:
    // 0x4aeba4: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x4aeba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4aeba8:
    // 0x4aeba8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4aeba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4aebac:
    // 0x4aebac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4aebacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4aebb0:
    // 0x4aebb0: 0xc0ebf3c  jal         func_3AFCF0
label_4aebb4:
    if (ctx->pc == 0x4AEBB4u) {
        ctx->pc = 0x4AEBB4u;
            // 0x4aebb4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AEBB8u;
        goto label_4aebb8;
    }
    ctx->pc = 0x4AEBB0u;
    SET_GPR_U32(ctx, 31, 0x4AEBB8u);
    ctx->pc = 0x4AEBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEBB0u;
            // 0x4aebb4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (runtime->hasFunction(0x3AFCF0u)) {
        auto targetFn = runtime->lookupFunction(0x3AFCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEBB8u; }
        if (ctx->pc != 0x4AEBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AFCF0_0x3afcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEBB8u; }
        if (ctx->pc != 0x4AEBB8u) { return; }
    }
    ctx->pc = 0x4AEBB8u;
label_4aebb8:
    // 0x4aebb8: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x4aebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4aebbc:
    // 0x4aebbc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4aebbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4aebc0:
    // 0x4aebc0: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x4aebc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4aebc4:
    // 0x4aebc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4aebc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4aebc8:
    // 0x4aebc8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4aebc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4aebcc:
    // 0x4aebcc: 0xc0ebe78  jal         func_3AF9E0
label_4aebd0:
    if (ctx->pc == 0x4AEBD0u) {
        ctx->pc = 0x4AEBD0u;
            // 0x4aebd0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4AEBD4u;
        goto label_4aebd4;
    }
    ctx->pc = 0x4AEBCCu;
    SET_GPR_U32(ctx, 31, 0x4AEBD4u);
    ctx->pc = 0x4AEBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEBCCu;
            // 0x4aebd0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9E0u;
    if (runtime->hasFunction(0x3AF9E0u)) {
        auto targetFn = runtime->lookupFunction(0x3AF9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEBD4u; }
        if (ctx->pc != 0x4AEBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AF9E0_0x3af9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEBD4u; }
        if (ctx->pc != 0x4AEBD4u) { return; }
    }
    ctx->pc = 0x4AEBD4u;
label_4aebd4:
    // 0x4aebd4: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x4aebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4aebd8:
    // 0x4aebd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4aebd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4aebdc:
    // 0x4aebdc: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x4aebdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4aebe0:
    // 0x4aebe0: 0xc0ebf78  jal         func_3AFDE0
label_4aebe4:
    if (ctx->pc == 0x4AEBE4u) {
        ctx->pc = 0x4AEBE4u;
            // 0x4aebe4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AEBE8u;
        goto label_4aebe8;
    }
    ctx->pc = 0x4AEBE0u;
    SET_GPR_U32(ctx, 31, 0x4AEBE8u);
    ctx->pc = 0x4AEBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEBE0u;
            // 0x4aebe4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AFDE0u;
    if (runtime->hasFunction(0x3AFDE0u)) {
        auto targetFn = runtime->lookupFunction(0x3AFDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEBE8u; }
        if (ctx->pc != 0x4AEBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AFDE0_0x3afde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEBE8u; }
        if (ctx->pc != 0x4AEBE8u) { return; }
    }
    ctx->pc = 0x4AEBE8u;
label_4aebe8:
    // 0x4aebe8: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x4aebe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4aebec:
    // 0x4aebec: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4aebecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4aebf0:
    // 0x4aebf0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_4aebf4:
    if (ctx->pc == 0x4AEBF4u) {
        ctx->pc = 0x4AEBF8u;
        goto label_4aebf8;
    }
    ctx->pc = 0x4AEBF0u;
    {
        const bool branch_taken_0x4aebf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4aebf0) {
            ctx->pc = 0x4AEC14u;
            goto label_4aec14;
        }
    }
    ctx->pc = 0x4AEBF8u;
label_4aebf8:
    // 0x4aebf8: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x4aebf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4aebfc:
    // 0x4aebfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4aebfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4aec00:
    // 0x4aec00: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x4aec00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4aec04:
    // 0x4aec04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4aec04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4aec08:
    // 0x4aec08: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4aec08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4aec0c:
    // 0x4aec0c: 0xc0ebc60  jal         func_3AF180
label_4aec10:
    if (ctx->pc == 0x4AEC10u) {
        ctx->pc = 0x4AEC10u;
            // 0x4aec10: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AEC14u;
        goto label_4aec14;
    }
    ctx->pc = 0x4AEC0Cu;
    SET_GPR_U32(ctx, 31, 0x4AEC14u);
    ctx->pc = 0x4AEC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEC0Cu;
            // 0x4aec10: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AF180u;
    if (runtime->hasFunction(0x3AF180u)) {
        auto targetFn = runtime->lookupFunction(0x3AF180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEC14u; }
        if (ctx->pc != 0x4AEC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AF180_0x3af180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEC14u; }
        if (ctx->pc != 0x4AEC14u) { return; }
    }
    ctx->pc = 0x4AEC14u;
label_4aec14:
    // 0x4aec14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4aec14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4aec18:
    // 0x4aec18: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4aec18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4aec1c:
    // 0x4aec1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4aec1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4aec20:
    // 0x4aec20: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4aec20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4aec24:
    // 0x4aec24: 0x320f809  jalr        $t9
label_4aec28:
    if (ctx->pc == 0x4AEC28u) {
        ctx->pc = 0x4AEC2Cu;
        goto label_4aec2c;
    }
    ctx->pc = 0x4AEC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AEC2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AEC2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AEC2Cu; }
            if (ctx->pc != 0x4AEC2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4AEC2Cu;
label_4aec2c:
    // 0x4aec2c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4aec2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4aec30:
    // 0x4aec30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4aec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4aec34:
    // 0x4aec34: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4aec34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4aec38:
    // 0x4aec38: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4aec38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4aec3c:
    // 0x4aec3c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4aec3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4aec40:
    // 0x4aec40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4aec40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4aec44:
    // 0x4aec44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4aec44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4aec48:
    // 0x4aec48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4aec48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4aec4c:
    // 0x4aec4c: 0x3e00008  jr          $ra
label_4aec50:
    if (ctx->pc == 0x4AEC50u) {
        ctx->pc = 0x4AEC50u;
            // 0x4aec50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4AEC54u;
        goto label_4aec54;
    }
    ctx->pc = 0x4AEC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEC4Cu;
            // 0x4aec50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AEC54u;
label_4aec54:
    // 0x4aec54: 0x0  nop
    ctx->pc = 0x4aec54u;
    // NOP
label_4aec58:
    // 0x4aec58: 0x0  nop
    ctx->pc = 0x4aec58u;
    // NOP
label_4aec5c:
    // 0x4aec5c: 0x0  nop
    ctx->pc = 0x4aec5cu;
    // NOP
label_4aec60:
    // 0x4aec60: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x4aec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_4aec64:
    // 0x4aec64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4aec64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4aec68:
    // 0x4aec68: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4aec68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4aec6c:
    // 0x4aec6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4aec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4aec70:
    // 0x4aec70: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4aec70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4aec74:
    // 0x4aec74: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4aec74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4aec78:
    // 0x4aec78: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4aec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4aec7c:
    // 0x4aec7c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4aec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4aec80:
    // 0x4aec80: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4aec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4aec84:
    // 0x4aec84: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4aec84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4aec88:
    // 0x4aec88: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4aec88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4aec8c:
    // 0x4aec8c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4aec8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4aec90:
    // 0x4aec90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4aec90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4aec94:
    // 0x4aec94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4aec94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4aec98:
    // 0x4aec98: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4aec98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4aec9c:
    // 0x4aec9c: 0xafa5011c  sw          $a1, 0x11C($sp)
    ctx->pc = 0x4aec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 5));
label_4aeca0:
    // 0x4aeca0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4aeca0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4aeca4:
    // 0x4aeca4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4aeca4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4aeca8:
    // 0x4aeca8: 0x8c480e80  lw          $t0, 0xE80($v0)
    ctx->pc = 0x4aeca8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4aecac:
    // 0x4aecac: 0x91020ce4  lbu         $v0, 0xCE4($t0)
    ctx->pc = 0x4aecacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3300)));
label_4aecb0:
    // 0x4aecb0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_4aecb4:
    if (ctx->pc == 0x4AECB4u) {
        ctx->pc = 0x4AECB4u;
            // 0x4aecb4: 0xafa60118  sw          $a2, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 6));
        ctx->pc = 0x4AECB8u;
        goto label_4aecb8;
    }
    ctx->pc = 0x4AECB0u;
    {
        const bool branch_taken_0x4aecb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4AECB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AECB0u;
            // 0x4aecb4: 0xafa60118  sw          $a2, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aecb0) {
            ctx->pc = 0x4AECC8u;
            goto label_4aecc8;
        }
    }
    ctx->pc = 0x4AECB8u;
label_4aecb8:
    // 0x4aecb8: 0xc0eb56c  jal         func_3AD5B0
label_4aecbc:
    if (ctx->pc == 0x4AECBCu) {
        ctx->pc = 0x4AECC0u;
        goto label_4aecc0;
    }
    ctx->pc = 0x4AECB8u;
    SET_GPR_U32(ctx, 31, 0x4AECC0u);
    ctx->pc = 0x3AD5B0u;
    if (runtime->hasFunction(0x3AD5B0u)) {
        auto targetFn = runtime->lookupFunction(0x3AD5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AECC0u; }
        if (ctx->pc != 0x4AECC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AD5B0_0x3ad5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AECC0u; }
        if (ctx->pc != 0x4AECC0u) { return; }
    }
    ctx->pc = 0x4AECC0u;
label_4aecc0:
    // 0x4aecc0: 0x100001b8  b           . + 4 + (0x1B8 << 2)
label_4aecc4:
    if (ctx->pc == 0x4AECC4u) {
        ctx->pc = 0x4AECC4u;
            // 0x4aecc4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4AECC8u;
        goto label_4aecc8;
    }
    ctx->pc = 0x4AECC0u;
    {
        const bool branch_taken_0x4aecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AECC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AECC0u;
            // 0x4aecc4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aecc0) {
            ctx->pc = 0x4AF3A4u;
            goto label_4af3a4;
        }
    }
    ctx->pc = 0x4AECC8u;
label_4aecc8:
    // 0x4aecc8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4aecc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4aeccc:
    // 0x4aeccc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4aecccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4aecd0:
    // 0x4aecd0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4aecd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4aecd4:
    // 0x4aecd4: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x4aecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_4aecd8:
    // 0x4aecd8: 0x8cb00d70  lw          $s0, 0xD70($a1)
    ctx->pc = 0x4aecd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3440)));
label_4aecdc:
    // 0x4aecdc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4aecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4aece0:
    // 0x4aece0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4aece0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4aece4:
    // 0x4aece4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4aece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4aece8:
    // 0x4aece8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4aece8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4aecec:
    // 0x4aecec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4aececu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4aecf0:
    // 0x4aecf0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4aecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4aecf4:
    // 0x4aecf4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4aecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4aecf8:
    // 0x4aecf8: 0xc0cfe90  jal         func_33FA40
label_4aecfc:
    if (ctx->pc == 0x4AECFCu) {
        ctx->pc = 0x4AECFCu;
            // 0x4aecfc: 0x24530090  addiu       $s3, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x4AED00u;
        goto label_4aed00;
    }
    ctx->pc = 0x4AECF8u;
    SET_GPR_U32(ctx, 31, 0x4AED00u);
    ctx->pc = 0x4AECFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AECF8u;
            // 0x4aecfc: 0x24530090  addiu       $s3, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33FA40u;
    if (runtime->hasFunction(0x33FA40u)) {
        auto targetFn = runtime->lookupFunction(0x33FA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AED00u; }
        if (ctx->pc != 0x4AED00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033FA40_0x33fa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AED00u; }
        if (ctx->pc != 0x4AED00u) { return; }
    }
    ctx->pc = 0x4AED00u;
label_4aed00:
    // 0x4aed00: 0x2f63c  dsll32      $fp, $v0, 24
    ctx->pc = 0x4aed00u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 24));
label_4aed04:
    // 0x4aed04: 0x3c160064  lui         $s6, 0x64
    ctx->pc = 0x4aed04u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
label_4aed08:
    // 0x4aed08: 0x260200e8  addiu       $v0, $s0, 0xE8
    ctx->pc = 0x4aed08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_4aed0c:
    // 0x4aed0c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4aed0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4aed10:
    // 0x4aed10: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x4aed10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_4aed14:
    // 0x4aed14: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x4aed14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_4aed18:
    // 0x4aed18: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4aed18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4aed1c:
    // 0x4aed1c: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x4aed1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4aed20:
    // 0x4aed20: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x4aed20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_4aed24:
    // 0x4aed24: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4aed24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4aed28:
    // 0x4aed28: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x4aed28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_4aed2c:
    // 0x4aed2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4aed2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aed30:
    // 0x4aed30: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4aed30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4aed34:
    // 0x4aed34: 0x1ef63f  dsra32      $fp, $fp, 24
    ctx->pc = 0x4aed34u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 24));
label_4aed38:
    // 0x4aed38: 0x244256e8  addiu       $v0, $v0, 0x56E8
    ctx->pc = 0x4aed38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22248));
label_4aed3c:
    // 0x4aed3c: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x4aed3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
label_4aed40:
    // 0x4aed40: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x4aed40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_4aed44:
    // 0x4aed44: 0x26d62114  addiu       $s6, $s6, 0x2114
    ctx->pc = 0x4aed44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8468));
label_4aed48:
    // 0x4aed48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4aed48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4aed4c:
    // 0x4aed4c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4aed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4aed50:
    // 0x4aed50: 0x90c20116  lbu         $v0, 0x116($a2)
    ctx->pc = 0x4aed50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 278)));
label_4aed54:
    // 0x4aed54: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4aed54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4aed58:
    // 0x4aed58: 0xc0506ac  jal         func_141AB0
label_4aed5c:
    if (ctx->pc == 0x4AED5Cu) {
        ctx->pc = 0x4AED5Cu;
            // 0x4aed5c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x4AED60u;
        goto label_4aed60;
    }
    ctx->pc = 0x4AED58u;
    SET_GPR_U32(ctx, 31, 0x4AED60u);
    ctx->pc = 0x4AED5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AED58u;
            // 0x4aed5c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AED60u; }
        if (ctx->pc != 0x4AED60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AED60u; }
        if (ctx->pc != 0x4AED60u) { return; }
    }
    ctx->pc = 0x4AED60u;
label_4aed60:
    // 0x4aed60: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4aed60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4aed64:
    // 0x4aed64: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4aed64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4aed68:
    // 0x4aed68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4aed68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4aed6c:
    // 0x4aed6c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4aed6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4aed70:
    // 0x4aed70: 0x320f809  jalr        $t9
label_4aed74:
    if (ctx->pc == 0x4AED74u) {
        ctx->pc = 0x4AED74u;
            // 0x4aed74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4AED78u;
        goto label_4aed78;
    }
    ctx->pc = 0x4AED70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AED78u);
        ctx->pc = 0x4AED74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AED70u;
            // 0x4aed74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AED78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AED78u; }
            if (ctx->pc != 0x4AED78u) { return; }
        }
        }
    }
    ctx->pc = 0x4AED78u;
label_4aed78:
    // 0x4aed78: 0x92a30084  lbu         $v1, 0x84($s5)
    ctx->pc = 0x4aed78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 132)));
label_4aed7c:
    // 0x4aed7c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4aed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4aed80:
    // 0x4aed80: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x4aed80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_4aed84:
    // 0x4aed84: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x4aed84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_4aed88:
    // 0x4aed88: 0x24a59bc0  addiu       $a1, $a1, -0x6440
    ctx->pc = 0x4aed88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
label_4aed8c:
    // 0x4aed8c: 0x92460014  lbu         $a2, 0x14($s2)
    ctx->pc = 0x4aed8cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
label_4aed90:
    // 0x4aed90: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x4aed90u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4aed94:
    // 0x4aed94: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x4aed94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_4aed98:
    // 0x4aed98: 0xa8b821  addu        $s7, $a1, $t0
    ctx->pc = 0x4aed98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_4aed9c:
    // 0x4aed9c: 0x92450015  lbu         $a1, 0x15($s2)
    ctx->pc = 0x4aed9cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
label_4aeda0:
    // 0x4aeda0: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x4aeda0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4aeda4:
    // 0x4aeda4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4aeda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4aeda8:
    // 0x4aeda8: 0xc6470018  lwc1        $f7, 0x18($s2)
    ctx->pc = 0x4aeda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_4aedac:
    // 0x4aedac: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x4aedacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4aedb0:
    // 0x4aedb0: 0xc6e8000c  lwc1        $f8, 0xC($s7)
    ctx->pc = 0x4aedb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_4aedb4:
    // 0x4aedb4: 0xc6460008  lwc1        $f6, 0x8($s2)
    ctx->pc = 0x4aedb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4aedb8:
    // 0x4aedb8: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x4aedb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_4aedbc:
    // 0x4aedbc: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x4aedbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_4aedc0:
    // 0x4aedc0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4aedc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4aedc4:
    // 0x4aedc4: 0x0  nop
    ctx->pc = 0x4aedc4u;
    // NOP
label_4aedc8:
    // 0x4aedc8: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x4aedc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_4aedcc:
    // 0x4aedcc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x4aedccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4aedd0:
    // 0x4aedd0: 0xc34018  mult        $t0, $a2, $v1
    ctx->pc = 0x4aedd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_4aedd4:
    // 0x4aedd4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x4aedd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_4aedd8:
    // 0x4aedd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4aedd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4aeddc:
    // 0x4aeddc: 0x84662100  lh          $a2, 0x2100($v1)
    ctx->pc = 0x4aeddcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8448)));
label_4aede0:
    // 0x4aede0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4aede0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4aede4:
    // 0x4aede4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x4aede4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_4aede8:
    // 0x4aede8: 0x84652102  lh          $a1, 0x2102($v1)
    ctx->pc = 0x4aede8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8450)));
label_4aedec:
    // 0x4aedec: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x4aedecu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4aedf0:
    // 0x4aedf0: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x4aedf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_4aedf4:
    // 0x4aedf4: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x4aedf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_4aedf8:
    // 0x4aedf8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x4aedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_4aedfc:
    // 0x4aedfc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4aedfcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4aee00:
    // 0x4aee00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4aee00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4aee04:
    // 0x4aee04: 0x0  nop
    ctx->pc = 0x4aee04u;
    // NOP
label_4aee08:
    // 0x4aee08: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4aee08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4aee0c:
    // 0x4aee0c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x4aee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_4aee10:
    // 0x4aee10: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x4aee10u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
label_4aee14:
    // 0x4aee14: 0x46800da0  cvt.s.w     $f22, $f1
    ctx->pc = 0x4aee14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_4aee18:
    // 0x4aee18: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4aee18u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4aee1c:
    // 0x4aee1c: 0x0  nop
    ctx->pc = 0x4aee1cu;
    // NOP
label_4aee20:
    // 0x4aee20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4aee20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4aee24:
    // 0x4aee24: 0x46072242  mul.s       $f9, $f4, $f7
    ctx->pc = 0x4aee24u;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_4aee28:
    // 0x4aee28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4aee28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4aee2c:
    // 0x4aee2c: 0x0  nop
    ctx->pc = 0x4aee2cu;
    // NOP
label_4aee30:
    // 0x4aee30: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x4aee30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_4aee34:
    // 0x4aee34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4aee34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4aee38:
    // 0x4aee38: 0x0  nop
    ctx->pc = 0x4aee38u;
    // NOP
label_4aee3c:
    // 0x4aee3c: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x4aee3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4aee40:
    // 0x4aee40: 0x460431dc  madd.s      $f7, $f6, $f4
    ctx->pc = 0x4aee40u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_4aee44:
    // 0x4aee44: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x4aee44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4aee48:
    // 0x4aee48: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x4aee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4aee4c:
    // 0x4aee4c: 0xc6e40000  lwc1        $f4, 0x0($s7)
    ctx->pc = 0x4aee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4aee50:
    // 0x4aee50: 0x46002980  add.s       $f6, $f5, $f0
    ctx->pc = 0x4aee50u;
    ctx->f[6] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_4aee54:
    // 0x4aee54: 0x46081000  add.s       $f0, $f2, $f8
    ctx->pc = 0x4aee54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
label_4aee58:
    // 0x4aee58: 0x46010143  div.s       $f5, $f0, $f1
    ctx->pc = 0x4aee58u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[1];
label_4aee5c:
    // 0x4aee5c: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x4aee5cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
label_4aee60:
    // 0x4aee60: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x4aee60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4aee64:
    // 0x4aee64: 0x46032043  div.s       $f1, $f4, $f3
    ctx->pc = 0x4aee64u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[3];
label_4aee68:
    // 0x4aee68: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x4aee68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_4aee6c:
    // 0x4aee6c: 0x460300c3  div.s       $f3, $f0, $f3
    ctx->pc = 0x4aee6cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[3];
label_4aee70:
    // 0x4aee70: 0x0  nop
    ctx->pc = 0x4aee70u;
    // NOP
label_4aee74:
    // 0x4aee74: 0x0  nop
    ctx->pc = 0x4aee74u;
    // NOP
label_4aee78:
    // 0x4aee78: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_4aee7c:
    if (ctx->pc == 0x4AEE7Cu) {
        ctx->pc = 0x4AEE80u;
        goto label_4aee80;
    }
    ctx->pc = 0x4AEE78u;
    {
        const bool branch_taken_0x4aee78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aee78) {
            ctx->pc = 0x4AEE9Cu;
            goto label_4aee9c;
        }
    }
    ctx->pc = 0x4AEE80u;
label_4aee80:
    // 0x4aee80: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x4aee80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_4aee84:
    // 0x4aee84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4aee84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4aee88:
    // 0x4aee88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4aee88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4aee8c:
    // 0x4aee8c: 0x0  nop
    ctx->pc = 0x4aee8cu;
    // NOP
label_4aee90:
    // 0x4aee90: 0x0  nop
    ctx->pc = 0x4aee90u;
    // NOP
label_4aee94:
    // 0x4aee94: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4aee98:
    if (ctx->pc == 0x4AEE98u) {
        ctx->pc = 0x4AEE9Cu;
        goto label_4aee9c;
    }
    ctx->pc = 0x4AEE94u;
    {
        const bool branch_taken_0x4aee94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aee94) {
            ctx->pc = 0x4AEE80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4aee80;
        }
    }
    ctx->pc = 0x4AEE9Cu;
label_4aee9c:
    // 0x4aee9c: 0x46093001  sub.s       $f0, $f6, $f9
    ctx->pc = 0x4aee9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[9]);
label_4aeea0:
    // 0x4aeea0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4aeea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4aeea4:
    // 0x4aeea4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4aeea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4aeea8:
    // 0x4aeea8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x4aeea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4aeeac:
    // 0x4aeeac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4aeeacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4aeeb0:
    // 0x4aeeb0: 0xafb10128  sw          $s1, 0x128($sp)
    ctx->pc = 0x4aeeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 17));
label_4aeeb4:
    // 0x4aeeb4: 0xafb1013c  sw          $s1, 0x13C($sp)
    ctx->pc = 0x4aeeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 17));
label_4aeeb8:
    // 0x4aeeb8: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x4aeeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_4aeebc:
    // 0x4aeebc: 0xafb10150  sw          $s1, 0x150($sp)
    ctx->pc = 0x4aeebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 17));
label_4aeec0:
    // 0x4aeec0: 0x46093000  add.s       $f0, $f6, $f9
    ctx->pc = 0x4aeec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
label_4aeec4:
    // 0x4aeec4: 0xafb10164  sw          $s1, 0x164($sp)
    ctx->pc = 0x4aeec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 17));
label_4aeec8:
    // 0x4aeec8: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x4aeec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_4aeecc:
    // 0x4aeecc: 0x4609a001  sub.s       $f0, $f20, $f9
    ctx->pc = 0x4aeeccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[9]);
label_4aeed0:
    // 0x4aeed0: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x4aeed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4aeed4:
    // 0x4aeed4: 0x4609a000  add.s       $f0, $f20, $f9
    ctx->pc = 0x4aeed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[9]);
label_4aeed8:
    // 0x4aeed8: 0xe7a70120  swc1        $f7, 0x120($sp)
    ctx->pc = 0x4aeed8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4aeedc:
    // 0x4aeedc: 0xe7a70134  swc1        $f7, 0x134($sp)
    ctx->pc = 0x4aeedcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_4aeee0:
    // 0x4aeee0: 0xe7a3012c  swc1        $f3, 0x12C($sp)
    ctx->pc = 0x4aeee0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_4aeee4:
    // 0x4aeee4: 0xe7a30140  swc1        $f3, 0x140($sp)
    ctx->pc = 0x4aeee4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4aeee8:
    // 0x4aeee8: 0xe7a50130  swc1        $f5, 0x130($sp)
    ctx->pc = 0x4aeee8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_4aeeec:
    // 0x4aeeec: 0xe7a50158  swc1        $f5, 0x158($sp)
    ctx->pc = 0x4aeeecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_4aeef0:
    // 0x4aeef0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4aeef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4aeef4:
    // 0x4aeef4: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x4aeef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_4aeef8:
    // 0x4aeef8: 0xe7a2016c  swc1        $f2, 0x16C($sp)
    ctx->pc = 0x4aeef8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_4aeefc:
    // 0x4aeefc: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x4aeefcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_4aef00:
    // 0x4aef00: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x4aef00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_4aef04:
    // 0x4aef04: 0xe7a10168  swc1        $f1, 0x168($sp)
    ctx->pc = 0x4aef04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_4aef08:
    // 0x4aef08: 0xe7b60148  swc1        $f22, 0x148($sp)
    ctx->pc = 0x4aef08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4aef0c:
    // 0x4aef0c: 0xc050780  jal         func_141E00
label_4aef10:
    if (ctx->pc == 0x4AEF10u) {
        ctx->pc = 0x4AEF10u;
            // 0x4aef10: 0xe7b6015c  swc1        $f22, 0x15C($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
        ctx->pc = 0x4AEF14u;
        goto label_4aef14;
    }
    ctx->pc = 0x4AEF0Cu;
    SET_GPR_U32(ctx, 31, 0x4AEF14u);
    ctx->pc = 0x4AEF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEF0Cu;
            // 0x4aef10: 0xe7b6015c  swc1        $f22, 0x15C($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    if (runtime->hasFunction(0x141E00u)) {
        auto targetFn = runtime->lookupFunction(0x141E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEF14u; }
        if (ctx->pc != 0x4AEF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141E00_0x141e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEF14u; }
        if (ctx->pc != 0x4AEF14u) { return; }
    }
    ctx->pc = 0x4AEF14u;
label_4aef14:
    // 0x4aef14: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x4aef14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_4aef18:
    // 0x4aef18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4aef18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4aef1c:
    // 0x4aef1c: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_4aef20:
    if (ctx->pc == 0x4AEF20u) {
        ctx->pc = 0x4AEF20u;
            // 0x4aef20: 0xc6e2000c  lwc1        $f2, 0xC($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x4AEF24u;
        goto label_4aef24;
    }
    ctx->pc = 0x4AEF1Cu;
    {
        const bool branch_taken_0x4aef1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4aef1c) {
            ctx->pc = 0x4AEF20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEF1Cu;
            // 0x4aef20: 0xc6e2000c  lwc1        $f2, 0xC($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AEF40u;
            goto label_4aef40;
        }
    }
    ctx->pc = 0x4AEF24u;
label_4aef24:
    // 0x4aef24: 0x92420016  lbu         $v0, 0x16($s2)
    ctx->pc = 0x4aef24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_4aef28:
    // 0x4aef28: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4aef28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4aef2c:
    // 0x4aef2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4aef2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4aef30:
    // 0x4aef30: 0x0  nop
    ctx->pc = 0x4aef30u;
    // NOP
label_4aef34:
    // 0x4aef34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4aef34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4aef38:
    // 0x4aef38: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x4aef38u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_4aef3c:
    // 0x4aef3c: 0xc6e2000c  lwc1        $f2, 0xC($s7)
    ctx->pc = 0x4aef3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4aef40:
    // 0x4aef40: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4aef40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4aef44:
    // 0x4aef44: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x4aef44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4aef48:
    // 0x4aef48: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4aef48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4aef4c:
    // 0x4aef4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4aef4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4aef50:
    // 0x4aef50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4aef50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aef54:
    // 0x4aef54: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x4aef54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4aef58:
    // 0x4aef58: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4aef58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4aef5c:
    // 0x4aef5c: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x4aef5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4aef60:
    // 0x4aef60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4aef60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4aef64:
    // 0x4aef64: 0x4600a540  add.s       $f21, $f20, $f0
    ctx->pc = 0x4aef64u;
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4aef68:
    // 0x4aef68: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x4aef68u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4aef6c:
    // 0x4aef6c: 0x92450016  lbu         $a1, 0x16($s2)
    ctx->pc = 0x4aef6cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_4aef70:
    // 0x4aef70: 0x26840001  addiu       $a0, $s4, 0x1
    ctx->pc = 0x4aef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4aef74:
    // 0x4aef74: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4aef74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4aef78:
    // 0x4aef78: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4aef78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4aef7c:
    // 0x4aef7c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4aef7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4aef80:
    // 0x4aef80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4aef80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4aef84:
    // 0x4aef84: 0x70a42018  mult1       $a0, $a1, $a0
    ctx->pc = 0x4aef84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4aef88:
    // 0x4aef88: 0xb44018  mult        $t0, $a1, $s4
    ctx->pc = 0x4aef88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_4aef8c:
    // 0x4aef8c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4aef8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4aef90:
    // 0x4aef90: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x4aef90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4aef94:
    // 0x4aef94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4aef94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4aef98:
    // 0x4aef98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4aef98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4aef9c:
    // 0x4aef9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4aef9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aefa0:
    // 0x4aefa0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4aefa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4aefa4:
    // 0x4aefa4: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x4aefa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_4aefa8:
    // 0x4aefa8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4aefa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4aefac:
    // 0x4aefac: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x4aefacu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4aefb0:
    // 0x4aefb0: 0x0  nop
    ctx->pc = 0x4aefb0u;
    // NOP
label_4aefb4:
    // 0x4aefb4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4aefb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4aefb8:
    // 0x4aefb8: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x4aefb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_4aefbc:
    // 0x4aefbc: 0x4601b040  add.s       $f1, $f22, $f1
    ctx->pc = 0x4aefbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_4aefc0:
    // 0x4aefc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4aefc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4aefc4:
    // 0x4aefc4: 0x0  nop
    ctx->pc = 0x4aefc4u;
    // NOP
label_4aefc8:
    // 0x4aefc8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4aefc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4aefcc:
    // 0x4aefcc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4aefccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4aefd0:
    // 0x4aefd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4aefd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4aefd4:
    // 0x4aefd4: 0x0  nop
    ctx->pc = 0x4aefd4u;
    // NOP
label_4aefd8:
    // 0x4aefd8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x4aefd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4aefdc:
    // 0x4aefdc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4aefdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4aefe0:
    // 0x4aefe0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4aefe0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4aefe4:
    // 0x4aefe4: 0xc0bc284  jal         func_2F0A10
label_4aefe8:
    if (ctx->pc == 0x4AEFE8u) {
        ctx->pc = 0x4AEFE8u;
            // 0x4aefe8: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4AEFECu;
        goto label_4aefec;
    }
    ctx->pc = 0x4AEFE4u;
    SET_GPR_U32(ctx, 31, 0x4AEFECu);
    ctx->pc = 0x4AEFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEFE4u;
            // 0x4aefe8: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEFECu; }
        if (ctx->pc != 0x4AEFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AEFECu; }
        if (ctx->pc != 0x4AEFECu) { return; }
    }
    ctx->pc = 0x4AEFECu;
label_4aefec:
    // 0x4aefec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4aefecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4aeff0:
    // 0x4aeff0: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x4aeff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_4aeff4:
    // 0x4aeff4: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
label_4aeff8:
    if (ctx->pc == 0x4AEFF8u) {
        ctx->pc = 0x4AEFF8u;
            // 0x4aeff8: 0x92450016  lbu         $a1, 0x16($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
        ctx->pc = 0x4AEFFCu;
        goto label_4aeffc;
    }
    ctx->pc = 0x4AEFF4u;
    {
        const bool branch_taken_0x4aeff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aeff4) {
            ctx->pc = 0x4AEFF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AEFF4u;
            // 0x4aeff8: 0x92450016  lbu         $a1, 0x16($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AEF70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4aef70;
        }
    }
    ctx->pc = 0x4AEFFCu;
label_4aeffc:
    // 0x4aeffc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4aeffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4af000:
    // 0x4af000: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4af000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4af004:
    // 0x4af004: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4af004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4af008:
    // 0x4af008: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4af008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4af00c:
    // 0x4af00c: 0x320f809  jalr        $t9
label_4af010:
    if (ctx->pc == 0x4AF010u) {
        ctx->pc = 0x4AF014u;
        goto label_4af014;
    }
    ctx->pc = 0x4AF00Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AF014u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AF014u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AF014u; }
            if (ctx->pc != 0x4AF014u) { return; }
        }
        }
    }
    ctx->pc = 0x4AF014u;
label_4af014:
    // 0x4af014: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4af014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4af018:
    // 0x4af018: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4af018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4af01c:
    // 0x4af01c: 0xc0506ac  jal         func_141AB0
label_4af020:
    if (ctx->pc == 0x4AF020u) {
        ctx->pc = 0x4AF020u;
            // 0x4af020: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4AF024u;
        goto label_4af024;
    }
    ctx->pc = 0x4AF01Cu;
    SET_GPR_U32(ctx, 31, 0x4AF024u);
    ctx->pc = 0x4AF020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF01Cu;
            // 0x4af020: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF024u; }
        if (ctx->pc != 0x4AF024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF024u; }
        if (ctx->pc != 0x4AF024u) { return; }
    }
    ctx->pc = 0x4AF024u;
label_4af024:
    // 0x4af024: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4af024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4af028:
    // 0x4af028: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4af028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4af02c:
    // 0x4af02c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4af02cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4af030:
    // 0x4af030: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4af030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4af034:
    // 0x4af034: 0x320f809  jalr        $t9
label_4af038:
    if (ctx->pc == 0x4AF038u) {
        ctx->pc = 0x4AF038u;
            // 0x4af038: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4AF03Cu;
        goto label_4af03c;
    }
    ctx->pc = 0x4AF034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AF03Cu);
        ctx->pc = 0x4AF038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF034u;
            // 0x4af038: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AF03Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AF03Cu; }
            if (ctx->pc != 0x4AF03Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4AF03Cu;
label_4af03c:
    // 0x4af03c: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x4af03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_4af040:
    // 0x4af040: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4af040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4af044:
    // 0x4af044: 0x92460014  lbu         $a2, 0x14($s2)
    ctx->pc = 0x4af044u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
label_4af048:
    // 0x4af048: 0x92440015  lbu         $a0, 0x15($s2)
    ctx->pc = 0x4af048u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
label_4af04c:
    // 0x4af04c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4af04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4af050:
    // 0x4af050: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x4af050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_4af054:
    // 0x4af054: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x4af054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_4af058:
    // 0x4af058: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x4af058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_4af05c:
    // 0x4af05c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4af05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4af060:
    // 0x4af060: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4af060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4af064:
    // 0x4af064: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x4af064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4af068:
    // 0x4af068: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4af068u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af06c:
    // 0x4af06c: 0x0  nop
    ctx->pc = 0x4af06cu;
    // NOP
label_4af070:
    // 0x4af070: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4af070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4af074:
    // 0x4af074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4af074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af078:
    // 0x4af078: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x4af078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_4af07c:
    // 0x4af07c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_4af080:
    if (ctx->pc == 0x4AF080u) {
        ctx->pc = 0x4AF080u;
            // 0x4af080: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4AF084u;
        goto label_4af084;
    }
    ctx->pc = 0x4AF07Cu;
    {
        const bool branch_taken_0x4af07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AF080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF07Cu;
            // 0x4af080: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af07c) {
            ctx->pc = 0x4AF0A8u;
            goto label_4af0a8;
        }
    }
    ctx->pc = 0x4AF084u;
label_4af084:
    // 0x4af084: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x4af084u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4af088:
    // 0x4af088: 0x92430016  lbu         $v1, 0x16($s2)
    ctx->pc = 0x4af088u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_4af08c:
    // 0x4af08c: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x4af08cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_4af090:
    // 0x4af090: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4af090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4af094:
    // 0x4af094: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x4af094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4af098:
    // 0x4af098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4af098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af09c:
    // 0x4af09c: 0x0  nop
    ctx->pc = 0x4af09cu;
    // NOP
label_4af0a0:
    // 0x4af0a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4af0a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4af0a4:
    // 0x4af0a4: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x4af0a4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_4af0a8:
    // 0x4af0a8: 0x1e163c  dsll32      $v0, $fp, 24
    ctx->pc = 0x4af0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 24));
label_4af0ac:
    // 0x4af0ac: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x4af0acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_4af0b0:
    // 0x4af0b0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4af0b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4af0b4:
    // 0x4af0b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4af0b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4af0b8:
    // 0x4af0b8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x4af0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_4af0bc:
    // 0x4af0bc: 0x26109b30  addiu       $s0, $s0, -0x64D0
    ctx->pc = 0x4af0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941488));
label_4af0c0:
    // 0x4af0c0: 0x245effff  addiu       $fp, $v0, -0x1
    ctx->pc = 0x4af0c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4af0c4:
    // 0x4af0c4: 0x92420016  lbu         $v0, 0x16($s2)
    ctx->pc = 0x4af0c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_4af0c8:
    // 0x4af0c8: 0x3d4082a  slt         $at, $fp, $s4
    ctx->pc = 0x4af0c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_4af0cc:
    // 0x4af0cc: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x4af0ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4af0d0:
    // 0x4af0d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4af0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af0d4:
    // 0x4af0d4: 0x0  nop
    ctx->pc = 0x4af0d4u;
    // NOP
label_4af0d8:
    // 0x4af0d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4af0d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4af0dc:
    // 0x4af0dc: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x4af0dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4af0e0:
    // 0x4af0e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4af0e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4af0e4:
    // 0x4af0e4: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x4af0e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
label_4af0e8:
    // 0x4af0e8: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_4af0ec:
    if (ctx->pc == 0x4AF0ECu) {
        ctx->pc = 0x4AF0ECu;
            // 0x4af0ec: 0xc6560018  lwc1        $f22, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->pc = 0x4AF0F0u;
        goto label_4af0f0;
    }
    ctx->pc = 0x4AF0E8u;
    {
        const bool branch_taken_0x4af0e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF0E8u;
            // 0x4af0ec: 0xc6560018  lwc1        $f22, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af0e8) {
            ctx->pc = 0x4AF178u;
            goto label_4af178;
        }
    }
    ctx->pc = 0x4AF0F0u;
label_4af0f0:
    // 0x4af0f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4af0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4af0f4:
    // 0x4af0f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4af0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4af0f8:
    // 0x4af0f8: 0xc0ec0d8  jal         func_3B0360
label_4af0fc:
    if (ctx->pc == 0x4AF0FCu) {
        ctx->pc = 0x4AF0FCu;
            // 0x4af0fc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF100u;
        goto label_4af100;
    }
    ctx->pc = 0x4AF0F8u;
    SET_GPR_U32(ctx, 31, 0x4AF100u);
    ctx->pc = 0x4AF0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF0F8u;
            // 0x4af0fc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0360u;
    if (runtime->hasFunction(0x3B0360u)) {
        auto targetFn = runtime->lookupFunction(0x3B0360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF100u; }
        if (ctx->pc != 0x4AF100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0360_0x3b0360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF100u; }
        if (ctx->pc != 0x4AF100u) { return; }
    }
    ctx->pc = 0x4AF100u;
label_4af100:
    // 0x4af100: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x4af100u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af104:
    // 0x4af104: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4af104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4af108:
    // 0x4af108: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4af108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4af10c:
    // 0x4af10c: 0x86c80000  lh          $t0, 0x0($s6)
    ctx->pc = 0x4af10cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4af110:
    // 0x4af110: 0x86c30002  lh          $v1, 0x2($s6)
    ctx->pc = 0x4af110u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_4af114:
    // 0x4af114: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4af114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4af118:
    // 0x4af118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4af118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4af11c:
    // 0x4af11c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4af11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4af120:
    // 0x4af120: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4af120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4af124:
    // 0x4af124: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4af124u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af128:
    // 0x4af128: 0x0  nop
    ctx->pc = 0x4af128u;
    // NOP
label_4af12c:
    // 0x4af12c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4af12cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4af130:
    // 0x4af130: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4af130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af134:
    // 0x4af134: 0x0  nop
    ctx->pc = 0x4af134u;
    // NOP
label_4af138:
    // 0x4af138: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4af138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4af13c:
    // 0x4af13c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x4af13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4af140:
    // 0x4af140: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x4af140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4af144:
    // 0x4af144: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4af144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4af148:
    // 0x4af148: 0x0  nop
    ctx->pc = 0x4af148u;
    // NOP
label_4af14c:
    // 0x4af14c: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x4af14cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
label_4af150:
    // 0x4af150: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4af150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4af154:
    // 0x4af154: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4af154u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4af158:
    // 0x4af158: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x4af158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_4af15c:
    // 0x4af15c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4af15cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_4af160:
    // 0x4af160: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x4af160u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4af164:
    // 0x4af164: 0x46020b80  add.s       $f14, $f1, $f2
    ctx->pc = 0x4af164u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4af168:
    // 0x4af168: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x4af168u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4af16c:
    // 0x4af16c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4af16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4af170:
    // 0x4af170: 0xc0bc284  jal         func_2F0A10
label_4af174:
    if (ctx->pc == 0x4AF174u) {
        ctx->pc = 0x4AF174u;
            // 0x4af174: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x4AF178u;
        goto label_4af178;
    }
    ctx->pc = 0x4AF170u;
    SET_GPR_U32(ctx, 31, 0x4AF178u);
    ctx->pc = 0x4AF174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF170u;
            // 0x4af174: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF178u; }
        if (ctx->pc != 0x4AF178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF178u; }
        if (ctx->pc != 0x4AF178u) { return; }
    }
    ctx->pc = 0x4AF178u;
label_4af178:
    // 0x4af178: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x4af178u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4af17c:
    // 0x4af17c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4af17cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4af180:
    // 0x4af180: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x4af180u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_4af184:
    // 0x4af184: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x4af184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4af188:
    // 0x4af188: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
label_4af18c:
    if (ctx->pc == 0x4AF18Cu) {
        ctx->pc = 0x4AF18Cu;
            // 0x4af18c: 0x92420016  lbu         $v0, 0x16($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
        ctx->pc = 0x4AF190u;
        goto label_4af190;
    }
    ctx->pc = 0x4AF188u;
    {
        const bool branch_taken_0x4af188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4af188) {
            ctx->pc = 0x4AF18Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF188u;
            // 0x4af18c: 0x92420016  lbu         $v0, 0x16($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AF0C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4af0c8;
        }
    }
    ctx->pc = 0x4AF190u;
label_4af190:
    // 0x4af190: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4af190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4af194:
    // 0x4af194: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4af194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4af198:
    // 0x4af198: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4af198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4af19c:
    // 0x4af19c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4af19cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4af1a0:
    // 0x4af1a0: 0x320f809  jalr        $t9
label_4af1a4:
    if (ctx->pc == 0x4AF1A4u) {
        ctx->pc = 0x4AF1A8u;
        goto label_4af1a8;
    }
    ctx->pc = 0x4AF1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AF1A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AF1A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AF1A8u; }
            if (ctx->pc != 0x4AF1A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4AF1A8u;
label_4af1a8:
    // 0x4af1a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4af1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4af1ac:
    // 0x4af1ac: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x4af1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_4af1b0:
    // 0x4af1b0: 0xc0506ac  jal         func_141AB0
label_4af1b4:
    if (ctx->pc == 0x4AF1B4u) {
        ctx->pc = 0x4AF1B4u;
            // 0x4af1b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4AF1B8u;
        goto label_4af1b8;
    }
    ctx->pc = 0x4AF1B0u;
    SET_GPR_U32(ctx, 31, 0x4AF1B8u);
    ctx->pc = 0x4AF1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF1B0u;
            // 0x4af1b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF1B8u; }
        if (ctx->pc != 0x4AF1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF1B8u; }
        if (ctx->pc != 0x4AF1B8u) { return; }
    }
    ctx->pc = 0x4AF1B8u;
label_4af1b8:
    // 0x4af1b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4af1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4af1bc:
    // 0x4af1bc: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4af1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4af1c0:
    // 0x4af1c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4af1c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4af1c4:
    // 0x4af1c4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4af1c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4af1c8:
    // 0x4af1c8: 0x320f809  jalr        $t9
label_4af1cc:
    if (ctx->pc == 0x4AF1CCu) {
        ctx->pc = 0x4AF1CCu;
            // 0x4af1cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4AF1D0u;
        goto label_4af1d0;
    }
    ctx->pc = 0x4AF1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AF1D0u);
        ctx->pc = 0x4AF1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF1C8u;
            // 0x4af1cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AF1D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AF1D0u; }
            if (ctx->pc != 0x4AF1D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4AF1D0u;
label_4af1d0:
    // 0x4af1d0: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x4af1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_4af1d4:
    // 0x4af1d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4af1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4af1d8:
    // 0x4af1d8: 0x92460014  lbu         $a2, 0x14($s2)
    ctx->pc = 0x4af1d8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
label_4af1dc:
    // 0x4af1dc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4af1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4af1e0:
    // 0x4af1e0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4af1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4af1e4:
    // 0x4af1e4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x4af1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_4af1e8:
    // 0x4af1e8: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x4af1e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_4af1ec:
    // 0x4af1ec: 0x92420015  lbu         $v0, 0x15($s2)
    ctx->pc = 0x4af1ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
label_4af1f0:
    // 0x4af1f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4af1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4af1f4:
    // 0x4af1f4: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x4af1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4af1f8:
    // 0x4af1f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4af1f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af1fc:
    // 0x4af1fc: 0x0  nop
    ctx->pc = 0x4af1fcu;
    // NOP
label_4af200:
    // 0x4af200: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4af200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4af204:
    // 0x4af204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4af204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af208:
    // 0x4af208: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x4af208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_4af20c:
    // 0x4af20c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_4af210:
    if (ctx->pc == 0x4AF210u) {
        ctx->pc = 0x4AF210u;
            // 0x4af210: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4AF214u;
        goto label_4af214;
    }
    ctx->pc = 0x4AF20Cu;
    {
        const bool branch_taken_0x4af20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AF210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF20Cu;
            // 0x4af210: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af20c) {
            ctx->pc = 0x4AF238u;
            goto label_4af238;
        }
    }
    ctx->pc = 0x4AF214u;
label_4af214:
    // 0x4af214: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x4af214u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4af218:
    // 0x4af218: 0x92430016  lbu         $v1, 0x16($s2)
    ctx->pc = 0x4af218u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_4af21c:
    // 0x4af21c: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x4af21cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_4af220:
    // 0x4af220: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4af220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4af224:
    // 0x4af224: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x4af224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4af228:
    // 0x4af228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4af228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af22c:
    // 0x4af22c: 0x0  nop
    ctx->pc = 0x4af22cu;
    // NOP
label_4af230:
    // 0x4af230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4af230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4af234:
    // 0x4af234: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x4af234u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_4af238:
    // 0x4af238: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4af238u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4af23c:
    // 0x4af23c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x4af23cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4af240:
    // 0x4af240: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x4af240u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
label_4af244:
    // 0x4af244: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4af244u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4af248:
    // 0x4af248: 0x26313fb8  addiu       $s1, $s1, 0x3FB8
    ctx->pc = 0x4af248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16312));
label_4af24c:
    // 0x4af24c: 0x2457ffff  addiu       $s7, $v0, -0x1
    ctx->pc = 0x4af24cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4af250:
    // 0x4af250: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4af250u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_4af254:
    // 0x4af254: 0x0  nop
    ctx->pc = 0x4af254u;
    // NOP
label_4af258:
    // 0x4af258: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x4af258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_4af25c:
    // 0x4af25c: 0x92430016  lbu         $v1, 0x16($s2)
    ctx->pc = 0x4af25cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_4af260:
    // 0x4af260: 0xc6560018  lwc1        $f22, 0x18($s2)
    ctx->pc = 0x4af260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4af264:
    // 0x4af264: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4af264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4af268:
    // 0x4af268: 0x297082a  slt         $at, $s4, $s7
    ctx->pc = 0x4af268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_4af26c:
    // 0x4af26c: 0x241eff00  addiu       $fp, $zero, -0x100
    ctx->pc = 0x4af26cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4af270:
    // 0x4af270: 0x742018  mult        $a0, $v1, $s4
    ctx->pc = 0x4af270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4af274:
    // 0x4af274: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4af274u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af278:
    // 0x4af278: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x4af278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4af27c:
    // 0x4af27c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4af27cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4af280:
    // 0x4af280: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x4af280u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4af284:
    // 0x4af284: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x4af284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4af288:
    // 0x4af288: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4af288u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4af28c:
    // 0x4af28c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x4af28cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_4af290:
    // 0x4af290: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_4af294:
    if (ctx->pc == 0x4AF294u) {
        ctx->pc = 0x4AF294u;
            // 0x4af294: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4AF298u;
        goto label_4af298;
    }
    ctx->pc = 0x4AF290u;
    {
        const bool branch_taken_0x4af290 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF290u;
            // 0x4af294: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af290) {
            ctx->pc = 0x4AF2B8u;
            goto label_4af2b8;
        }
    }
    ctx->pc = 0x4AF298u;
label_4af298:
    // 0x4af298: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x4af298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_4af29c:
    // 0x4af29c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4af29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4af2a0:
    // 0x4af2a0: 0x345e8000  ori         $fp, $v0, 0x8000
    ctx->pc = 0x4af2a0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4af2a4:
    // 0x4af2a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4af2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4af2a8:
    // 0x4af2a8: 0xc0ec0d8  jal         func_3B0360
label_4af2ac:
    if (ctx->pc == 0x4AF2ACu) {
        ctx->pc = 0x4AF2ACu;
            // 0x4af2ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF2B0u;
        goto label_4af2b0;
    }
    ctx->pc = 0x4AF2A8u;
    SET_GPR_U32(ctx, 31, 0x4AF2B0u);
    ctx->pc = 0x4AF2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF2A8u;
            // 0x4af2ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0360u;
    if (runtime->hasFunction(0x3B0360u)) {
        auto targetFn = runtime->lookupFunction(0x3B0360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF2B0u; }
        if (ctx->pc != 0x4AF2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0360_0x3b0360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF2B0u; }
        if (ctx->pc != 0x4AF2B0u) { return; }
    }
    ctx->pc = 0x4AF2B0u;
label_4af2b0:
    // 0x4af2b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_4af2b4:
    if (ctx->pc == 0x4AF2B4u) {
        ctx->pc = 0x4AF2B8u;
        goto label_4af2b8;
    }
    ctx->pc = 0x4AF2B0u;
    {
        const bool branch_taken_0x4af2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4af2b0) {
            ctx->pc = 0x4AF2E0u;
            goto label_4af2e0;
        }
    }
    ctx->pc = 0x4AF2B8u;
label_4af2b8:
    // 0x4af2b8: 0x16970029  bne         $s4, $s7, . + 4 + (0x29 << 2)
label_4af2bc:
    if (ctx->pc == 0x4AF2BCu) {
        ctx->pc = 0x4AF2C0u;
        goto label_4af2c0;
    }
    ctx->pc = 0x4AF2B8u;
    {
        const bool branch_taken_0x4af2b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x4af2b8) {
            ctx->pc = 0x4AF360u;
            goto label_4af360;
        }
    }
    ctx->pc = 0x4AF2C0u;
label_4af2c0:
    // 0x4af2c0: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x4af2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_4af2c4:
    // 0x4af2c4: 0xc656001c  lwc1        $f22, 0x1C($s2)
    ctx->pc = 0x4af2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4af2c8:
    // 0x4af2c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4af2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4af2cc:
    // 0x4af2cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4af2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4af2d0:
    // 0x4af2d0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4af2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4af2d4:
    // 0x4af2d4: 0xc0ec0c0  jal         func_3B0300
label_4af2d8:
    if (ctx->pc == 0x4AF2D8u) {
        ctx->pc = 0x4AF2D8u;
            // 0x4af2d8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF2DCu;
        goto label_4af2dc;
    }
    ctx->pc = 0x4AF2D4u;
    SET_GPR_U32(ctx, 31, 0x4AF2DCu);
    ctx->pc = 0x4AF2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF2D4u;
            // 0x4af2d8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0300u;
    if (runtime->hasFunction(0x3B0300u)) {
        auto targetFn = runtime->lookupFunction(0x3B0300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF2DCu; }
        if (ctx->pc != 0x4AF2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0300_0x3b0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF2DCu; }
        if (ctx->pc != 0x4AF2DCu) { return; }
    }
    ctx->pc = 0x4AF2DCu;
label_4af2dc:
    // 0x4af2dc: 0x0  nop
    ctx->pc = 0x4af2dcu;
    // NOP
label_4af2e0:
    // 0x4af2e0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x4af2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4af2e4:
    // 0x4af2e4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4af2e4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af2e8:
    // 0x4af2e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4af2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4af2ec:
    // 0x4af2ec: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x4af2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4af2f0:
    // 0x4af2f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4af2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4af2f4:
    // 0x4af2f4: 0x3c23025  or          $a2, $fp, $v0
    ctx->pc = 0x4af2f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
label_4af2f8:
    // 0x4af2f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4af2f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4af2fc:
    // 0x4af2fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4af2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4af300:
    // 0x4af300: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4af300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4af304:
    // 0x4af304: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x4af304u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4af308:
    // 0x4af308: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4af308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4af30c:
    // 0x4af30c: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x4af30cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4af310:
    // 0x4af310: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x4af310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_4af314:
    // 0x4af314: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4af314u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af318:
    // 0x4af318: 0x0  nop
    ctx->pc = 0x4af318u;
    // NOP
label_4af31c:
    // 0x4af31c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4af31cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4af320:
    // 0x4af320: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4af320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4af324:
    // 0x4af324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4af324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af328:
    // 0x4af328: 0x0  nop
    ctx->pc = 0x4af328u;
    // NOP
label_4af32c:
    // 0x4af32c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4af32cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4af330:
    // 0x4af330: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x4af330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4af334:
    // 0x4af334: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x4af334u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
label_4af338:
    // 0x4af338: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x4af338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_4af33c:
    // 0x4af33c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4af33cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4af340:
    // 0x4af340: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4af340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_4af344:
    // 0x4af344: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x4af344u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4af348:
    // 0x4af348: 0x46020b80  add.s       $f14, $f1, $f2
    ctx->pc = 0x4af348u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4af34c:
    // 0x4af34c: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x4af34cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4af350:
    // 0x4af350: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4af350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4af354:
    // 0x4af354: 0xc0bc284  jal         func_2F0A10
label_4af358:
    if (ctx->pc == 0x4AF358u) {
        ctx->pc = 0x4AF358u;
            // 0x4af358: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x4AF35Cu;
        goto label_4af35c;
    }
    ctx->pc = 0x4AF354u;
    SET_GPR_U32(ctx, 31, 0x4AF35Cu);
    ctx->pc = 0x4AF358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF354u;
            // 0x4af358: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF35Cu; }
        if (ctx->pc != 0x4AF35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF35Cu; }
        if (ctx->pc != 0x4AF35Cu) { return; }
    }
    ctx->pc = 0x4AF35Cu;
label_4af35c:
    // 0x4af35c: 0x0  nop
    ctx->pc = 0x4af35cu;
    // NOP
label_4af360:
    // 0x4af360: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x4af360u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4af364:
    // 0x4af364: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4af364u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4af368:
    // 0x4af368: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x4af368u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_4af36c:
    // 0x4af36c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x4af36cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4af370:
    // 0x4af370: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_4af374:
    if (ctx->pc == 0x4AF374u) {
        ctx->pc = 0x4AF374u;
            // 0x4af374: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4AF378u;
        goto label_4af378;
    }
    ctx->pc = 0x4AF370u;
    {
        const bool branch_taken_0x4af370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AF374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF370u;
            // 0x4af374: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af370) {
            ctx->pc = 0x4AF25Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4af25c;
        }
    }
    ctx->pc = 0x4AF378u;
label_4af378:
    // 0x4af378: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4af378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4af37c:
    // 0x4af37c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4af37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4af380:
    // 0x4af380: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4af380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4af384:
    // 0x4af384: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4af384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4af388:
    // 0x4af388: 0x320f809  jalr        $t9
label_4af38c:
    if (ctx->pc == 0x4AF38Cu) {
        ctx->pc = 0x4AF390u;
        goto label_4af390;
    }
    ctx->pc = 0x4AF388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AF390u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AF390u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AF390u; }
            if (ctx->pc != 0x4AF390u) { return; }
        }
        }
    }
    ctx->pc = 0x4AF390u;
label_4af390:
    // 0x4af390: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4af390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4af394:
    // 0x4af394: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4af394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4af398:
    // 0x4af398: 0xc0506ac  jal         func_141AB0
label_4af39c:
    if (ctx->pc == 0x4AF39Cu) {
        ctx->pc = 0x4AF39Cu;
            // 0x4af39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF3A0u;
        goto label_4af3a0;
    }
    ctx->pc = 0x4AF398u;
    SET_GPR_U32(ctx, 31, 0x4AF3A0u);
    ctx->pc = 0x4AF39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF398u;
            // 0x4af39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF3A0u; }
        if (ctx->pc != 0x4AF3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF3A0u; }
        if (ctx->pc != 0x4AF3A0u) { return; }
    }
    ctx->pc = 0x4AF3A0u;
label_4af3a0:
    // 0x4af3a0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4af3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4af3a4:
    // 0x4af3a4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4af3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4af3a8:
    // 0x4af3a8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4af3a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4af3ac:
    // 0x4af3ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4af3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4af3b0:
    // 0x4af3b0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4af3b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4af3b4:
    // 0x4af3b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4af3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4af3b8:
    // 0x4af3b8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4af3b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4af3bc:
    // 0x4af3bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4af3bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4af3c0:
    // 0x4af3c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4af3c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4af3c4:
    // 0x4af3c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4af3c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4af3c8:
    // 0x4af3c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4af3c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4af3cc:
    // 0x4af3cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4af3ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4af3d0:
    // 0x4af3d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4af3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4af3d4:
    // 0x4af3d4: 0x3e00008  jr          $ra
label_4af3d8:
    if (ctx->pc == 0x4AF3D8u) {
        ctx->pc = 0x4AF3D8u;
            // 0x4af3d8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x4AF3DCu;
        goto label_4af3dc;
    }
    ctx->pc = 0x4AF3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF3D4u;
            // 0x4af3d8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AF3DCu;
label_4af3dc:
    // 0x4af3dc: 0x0  nop
    ctx->pc = 0x4af3dcu;
    // NOP
label_4af3e0:
    // 0x4af3e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4af3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4af3e4:
    // 0x4af3e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4af3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4af3e8:
    // 0x4af3e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4af3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4af3ec:
    // 0x4af3ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4af3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4af3f0:
    // 0x4af3f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4af3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4af3f4:
    // 0x4af3f4: 0x90830370  lbu         $v1, 0x370($a0)
    ctx->pc = 0x4af3f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 880)));
label_4af3f8:
    // 0x4af3f8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_4af3fc:
    if (ctx->pc == 0x4AF3FCu) {
        ctx->pc = 0x4AF3FCu;
            // 0x4af3fc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF400u;
        goto label_4af400;
    }
    ctx->pc = 0x4AF3F8u;
    {
        const bool branch_taken_0x4af3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF3F8u;
            // 0x4af3fc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af3f8) {
            ctx->pc = 0x4AF43Cu;
            goto label_4af43c;
        }
    }
    ctx->pc = 0x4AF400u;
label_4af400:
    // 0x4af400: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4af400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4af404:
    // 0x4af404: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4af404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4af408:
    // 0x4af408: 0x8c500110  lw          $s0, 0x110($v0)
    ctx->pc = 0x4af408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_4af40c:
    // 0x4af40c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4af40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4af410:
    // 0x4af410: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4af410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4af414:
    // 0x4af414: 0xc0eb654  jal         func_3AD950
label_4af418:
    if (ctx->pc == 0x4AF418u) {
        ctx->pc = 0x4AF418u;
            // 0x4af418: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF41Cu;
        goto label_4af41c;
    }
    ctx->pc = 0x4AF414u;
    SET_GPR_U32(ctx, 31, 0x4AF41Cu);
    ctx->pc = 0x4AF418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF414u;
            // 0x4af418: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AD950u;
    if (runtime->hasFunction(0x3AD950u)) {
        auto targetFn = runtime->lookupFunction(0x3AD950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF41Cu; }
        if (ctx->pc != 0x4AF41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AD950_0x3ad950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF41Cu; }
        if (ctx->pc != 0x4AF41Cu) { return; }
    }
    ctx->pc = 0x4AF41Cu;
label_4af41c:
    // 0x4af41c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4af41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4af420:
    // 0x4af420: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x4af420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_4af424:
    // 0x4af424: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_4af428:
    if (ctx->pc == 0x4AF428u) {
        ctx->pc = 0x4AF428u;
            // 0x4af428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF42Cu;
        goto label_4af42c;
    }
    ctx->pc = 0x4AF424u;
    {
        const bool branch_taken_0x4af424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4af424) {
            ctx->pc = 0x4AF428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF424u;
            // 0x4af428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AF410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4af410;
        }
    }
    ctx->pc = 0x4AF42Cu;
label_4af42c:
    // 0x4af42c: 0x8e590374  lw          $t9, 0x374($s2)
    ctx->pc = 0x4af42cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 884)));
label_4af430:
    // 0x4af430: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x4af430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_4af434:
    // 0x4af434: 0x320f809  jalr        $t9
label_4af438:
    if (ctx->pc == 0x4AF438u) {
        ctx->pc = 0x4AF438u;
            // 0x4af438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF43Cu;
        goto label_4af43c;
    }
    ctx->pc = 0x4AF434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AF43Cu);
        ctx->pc = 0x4AF438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF434u;
            // 0x4af438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AF43Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AF43Cu; }
            if (ctx->pc != 0x4AF43Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4AF43Cu;
label_4af43c:
    // 0x4af43c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4af43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4af440:
    // 0x4af440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4af440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4af444:
    // 0x4af444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4af444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4af448:
    // 0x4af448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4af448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4af44c:
    // 0x4af44c: 0x3e00008  jr          $ra
label_4af450:
    if (ctx->pc == 0x4AF450u) {
        ctx->pc = 0x4AF450u;
            // 0x4af450: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4AF454u;
        goto label_4af454;
    }
    ctx->pc = 0x4AF44Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF44Cu;
            // 0x4af450: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AF454u;
label_4af454:
    // 0x4af454: 0x0  nop
    ctx->pc = 0x4af454u;
    // NOP
label_4af458:
    // 0x4af458: 0x0  nop
    ctx->pc = 0x4af458u;
    // NOP
label_4af45c:
    // 0x4af45c: 0x0  nop
    ctx->pc = 0x4af45cu;
    // NOP
label_4af460:
    // 0x4af460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4af460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4af464:
    // 0x4af464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4af464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4af468:
    // 0x4af468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4af468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4af46c:
    // 0x4af46c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4af46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4af470:
    // 0x4af470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4af470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4af474:
    // 0x4af474: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4af478:
    if (ctx->pc == 0x4AF478u) {
        ctx->pc = 0x4AF478u;
            // 0x4af478: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF47Cu;
        goto label_4af47c;
    }
    ctx->pc = 0x4AF474u;
    {
        const bool branch_taken_0x4af474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF474u;
            // 0x4af478: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af474) {
            ctx->pc = 0x4AF4A8u;
            goto label_4af4a8;
        }
    }
    ctx->pc = 0x4AF47Cu;
label_4af47c:
    // 0x4af47c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4af47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4af480:
    // 0x4af480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4af480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4af484:
    // 0x4af484: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x4af484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
label_4af488:
    // 0x4af488: 0xc0ec4f0  jal         func_3B13C0
label_4af48c:
    if (ctx->pc == 0x4AF48Cu) {
        ctx->pc = 0x4AF48Cu;
            // 0x4af48c: 0xae220374  sw          $v0, 0x374($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 2));
        ctx->pc = 0x4AF490u;
        goto label_4af490;
    }
    ctx->pc = 0x4AF488u;
    SET_GPR_U32(ctx, 31, 0x4AF490u);
    ctx->pc = 0x4AF48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF488u;
            // 0x4af48c: 0xae220374  sw          $v0, 0x374($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B13C0u;
    if (runtime->hasFunction(0x3B13C0u)) {
        auto targetFn = runtime->lookupFunction(0x3B13C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF490u; }
        if (ctx->pc != 0x4AF490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B13C0_0x3b13c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF490u; }
        if (ctx->pc != 0x4AF490u) { return; }
    }
    ctx->pc = 0x4AF490u;
label_4af490:
    // 0x4af490: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4af490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4af494:
    // 0x4af494: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4af494u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4af498:
    // 0x4af498: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4af49c:
    if (ctx->pc == 0x4AF49Cu) {
        ctx->pc = 0x4AF49Cu;
            // 0x4af49c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF4A0u;
        goto label_4af4a0;
    }
    ctx->pc = 0x4AF498u;
    {
        const bool branch_taken_0x4af498 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4af498) {
            ctx->pc = 0x4AF49Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF498u;
            // 0x4af49c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AF4ACu;
            goto label_4af4ac;
        }
    }
    ctx->pc = 0x4AF4A0u;
label_4af4a0:
    // 0x4af4a0: 0xc0400a8  jal         func_1002A0
label_4af4a4:
    if (ctx->pc == 0x4AF4A4u) {
        ctx->pc = 0x4AF4A4u;
            // 0x4af4a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF4A8u;
        goto label_4af4a8;
    }
    ctx->pc = 0x4AF4A0u;
    SET_GPR_U32(ctx, 31, 0x4AF4A8u);
    ctx->pc = 0x4AF4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF4A0u;
            // 0x4af4a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF4A8u; }
        if (ctx->pc != 0x4AF4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF4A8u; }
        if (ctx->pc != 0x4AF4A8u) { return; }
    }
    ctx->pc = 0x4AF4A8u;
label_4af4a8:
    // 0x4af4a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4af4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4af4ac:
    // 0x4af4ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4af4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4af4b0:
    // 0x4af4b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4af4b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4af4b4:
    // 0x4af4b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4af4b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4af4b8:
    // 0x4af4b8: 0x3e00008  jr          $ra
label_4af4bc:
    if (ctx->pc == 0x4AF4BCu) {
        ctx->pc = 0x4AF4BCu;
            // 0x4af4bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4AF4C0u;
        goto label_4af4c0;
    }
    ctx->pc = 0x4AF4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF4B8u;
            // 0x4af4bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AF4C0u;
label_4af4c0:
    // 0x4af4c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4af4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4af4c4:
    // 0x4af4c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4af4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4af4c8:
    // 0x4af4c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4af4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4af4cc:
    // 0x4af4cc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4af4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4af4d0:
    // 0x4af4d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4af4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4af4d4:
    // 0x4af4d4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4af4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4af4d8:
    // 0x4af4d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4af4d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4af4dc:
    // 0x4af4dc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4af4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4af4e0:
    // 0x4af4e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4af4e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4af4e4:
    // 0x4af4e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4af4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4af4e8:
    // 0x4af4e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4af4e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4af4ec:
    // 0x4af4ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4af4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4af4f0:
    // 0x4af4f0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4af4f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4af4f4:
    // 0x4af4f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4af4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4af4f8:
    // 0x4af4f8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4af4f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4af4fc:
    // 0x4af4fc: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x4af4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4af500:
    // 0x4af500: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x4af500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4af504:
    // 0x4af504: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4af504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4af508:
    // 0x4af508: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x4af508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_4af50c:
    // 0x4af50c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4af50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4af510:
    // 0x4af510: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4af510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4af514:
    // 0x4af514: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4af514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4af518:
    // 0x4af518: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4af518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4af51c:
    // 0x4af51c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4af51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4af520:
    // 0x4af520: 0x8c500ce8  lw          $s0, 0xCE8($v0)
    ctx->pc = 0x4af520u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3304)));
label_4af524:
    // 0x4af524: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4af524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4af528:
    // 0x4af528: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4af528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4af52c:
    // 0x4af52c: 0xc45400a4  lwc1        $f20, 0xA4($v0)
    ctx->pc = 0x4af52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4af530:
    // 0x4af530: 0xc10aae4  jal         func_42AB90
label_4af534:
    if (ctx->pc == 0x4AF534u) {
        ctx->pc = 0x4AF534u;
            // 0x4af534: 0x24560090  addiu       $s6, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x4AF538u;
        goto label_4af538;
    }
    ctx->pc = 0x4AF530u;
    SET_GPR_U32(ctx, 31, 0x4AF538u);
    ctx->pc = 0x4AF534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF530u;
            // 0x4af534: 0x24560090  addiu       $s6, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42AB90u;
    if (runtime->hasFunction(0x42AB90u)) {
        auto targetFn = runtime->lookupFunction(0x42AB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF538u; }
        if (ctx->pc != 0x4AF538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042AB90_0x42ab90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF538u; }
        if (ctx->pc != 0x4AF538u) { return; }
    }
    ctx->pc = 0x4AF538u;
label_4af538:
    // 0x4af538: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4af538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4af53c:
    // 0x4af53c: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
label_4af540:
    if (ctx->pc == 0x4AF540u) {
        ctx->pc = 0x4AF544u;
        goto label_4af544;
    }
    ctx->pc = 0x4AF53Cu;
    {
        const bool branch_taken_0x4af53c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4af53c) {
            ctx->pc = 0x4AF548u;
            goto label_4af548;
        }
    }
    ctx->pc = 0x4AF544u;
label_4af544:
    // 0x4af544: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x4af544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4af548:
    // 0x4af548: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4af548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4af54c:
    // 0x4af54c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4af54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4af550:
    // 0x4af550: 0xc0506ac  jal         func_141AB0
label_4af554:
    if (ctx->pc == 0x4AF554u) {
        ctx->pc = 0x4AF554u;
            // 0x4af554: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF558u;
        goto label_4af558;
    }
    ctx->pc = 0x4AF550u;
    SET_GPR_U32(ctx, 31, 0x4AF558u);
    ctx->pc = 0x4AF554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF550u;
            // 0x4af554: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF558u; }
        if (ctx->pc != 0x4AF558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF558u; }
        if (ctx->pc != 0x4AF558u) { return; }
    }
    ctx->pc = 0x4AF558u;
label_4af558:
    // 0x4af558: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4af558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4af55c:
    // 0x4af55c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4af55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4af560:
    // 0x4af560: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4af560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4af564:
    // 0x4af564: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4af564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4af568:
    // 0x4af568: 0x320f809  jalr        $t9
label_4af56c:
    if (ctx->pc == 0x4AF56Cu) {
        ctx->pc = 0x4AF56Cu;
            // 0x4af56c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4AF570u;
        goto label_4af570;
    }
    ctx->pc = 0x4AF568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AF570u);
        ctx->pc = 0x4AF56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF568u;
            // 0x4af56c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AF570u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AF570u; }
            if (ctx->pc != 0x4AF570u) { return; }
        }
        }
    }
    ctx->pc = 0x4AF570u;
label_4af570:
    // 0x4af570: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x4af570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_4af574:
    // 0x4af574: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4af574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4af578:
    // 0x4af578: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x4af578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_4af57c:
    // 0x4af57c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4af57cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4af580:
    // 0x4af580: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4af580u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4af584:
    // 0x4af584: 0xc0ebf3c  jal         func_3AFCF0
label_4af588:
    if (ctx->pc == 0x4AF588u) {
        ctx->pc = 0x4AF588u;
            // 0x4af588: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF58Cu;
        goto label_4af58c;
    }
    ctx->pc = 0x4AF584u;
    SET_GPR_U32(ctx, 31, 0x4AF58Cu);
    ctx->pc = 0x4AF588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF584u;
            // 0x4af588: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (runtime->hasFunction(0x3AFCF0u)) {
        auto targetFn = runtime->lookupFunction(0x3AFCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF58Cu; }
        if (ctx->pc != 0x4AF58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AFCF0_0x3afcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF58Cu; }
        if (ctx->pc != 0x4AF58Cu) { return; }
    }
    ctx->pc = 0x4AF58Cu;
label_4af58c:
    // 0x4af58c: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x4af58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_4af590:
    // 0x4af590: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4af590u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4af594:
    // 0x4af594: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x4af594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_4af598:
    // 0x4af598: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4af598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4af59c:
    // 0x4af59c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4af59cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4af5a0:
    // 0x4af5a0: 0xc0ebe78  jal         func_3AF9E0
label_4af5a4:
    if (ctx->pc == 0x4AF5A4u) {
        ctx->pc = 0x4AF5A4u;
            // 0x4af5a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4AF5A8u;
        goto label_4af5a8;
    }
    ctx->pc = 0x4AF5A0u;
    SET_GPR_U32(ctx, 31, 0x4AF5A8u);
    ctx->pc = 0x4AF5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF5A0u;
            // 0x4af5a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9E0u;
    if (runtime->hasFunction(0x3AF9E0u)) {
        auto targetFn = runtime->lookupFunction(0x3AF9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF5A8u; }
        if (ctx->pc != 0x4AF5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AF9E0_0x3af9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF5A8u; }
        if (ctx->pc != 0x4AF5A8u) { return; }
    }
    ctx->pc = 0x4AF5A8u;
label_4af5a8:
    // 0x4af5a8: 0xc6a0002c  lwc1        $f0, 0x2C($s5)
    ctx->pc = 0x4af5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4af5ac:
    // 0x4af5ac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4af5acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4af5b0:
    // 0x4af5b0: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_4af5b4:
    if (ctx->pc == 0x4AF5B4u) {
        ctx->pc = 0x4AF5B4u;
            // 0x4af5b4: 0x8e86000c  lw          $a2, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x4AF5B8u;
        goto label_4af5b8;
    }
    ctx->pc = 0x4AF5B0u;
    {
        const bool branch_taken_0x4af5b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4af5b0) {
            ctx->pc = 0x4AF5B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF5B0u;
            // 0x4af5b4: 0x8e86000c  lw          $a2, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AF5D8u;
            goto label_4af5d8;
        }
    }
    ctx->pc = 0x4AF5B8u;
label_4af5b8:
    // 0x4af5b8: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x4af5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_4af5bc:
    // 0x4af5bc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4af5bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4af5c0:
    // 0x4af5c0: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x4af5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_4af5c4:
    // 0x4af5c4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x4af5c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4af5c8:
    // 0x4af5c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4af5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4af5cc:
    // 0x4af5cc: 0xc0ebc60  jal         func_3AF180
label_4af5d0:
    if (ctx->pc == 0x4AF5D0u) {
        ctx->pc = 0x4AF5D0u;
            // 0x4af5d0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF5D4u;
        goto label_4af5d4;
    }
    ctx->pc = 0x4AF5CCu;
    SET_GPR_U32(ctx, 31, 0x4AF5D4u);
    ctx->pc = 0x4AF5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF5CCu;
            // 0x4af5d0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AF180u;
    if (runtime->hasFunction(0x3AF180u)) {
        auto targetFn = runtime->lookupFunction(0x3AF180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF5D4u; }
        if (ctx->pc != 0x4AF5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AF180_0x3af180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF5D4u; }
        if (ctx->pc != 0x4AF5D4u) { return; }
    }
    ctx->pc = 0x4AF5D4u;
label_4af5d4:
    // 0x4af5d4: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x4af5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_4af5d8:
    // 0x4af5d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4af5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4af5dc:
    // 0x4af5dc: 0x8e870010  lw          $a3, 0x10($s4)
    ctx->pc = 0x4af5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_4af5e0:
    // 0x4af5e0: 0x26c5001c  addiu       $a1, $s6, 0x1C
    ctx->pc = 0x4af5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 28));
label_4af5e4:
    // 0x4af5e4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4af5e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4af5e8:
    // 0x4af5e8: 0xc0ec0e4  jal         func_3B0390
label_4af5ec:
    if (ctx->pc == 0x4AF5ECu) {
        ctx->pc = 0x4AF5ECu;
            // 0x4af5ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4AF5F0u;
        goto label_4af5f0;
    }
    ctx->pc = 0x4AF5E8u;
    SET_GPR_U32(ctx, 31, 0x4AF5F0u);
    ctx->pc = 0x4AF5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF5E8u;
            // 0x4af5ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0390u;
    if (runtime->hasFunction(0x3B0390u)) {
        auto targetFn = runtime->lookupFunction(0x3B0390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF5F0u; }
        if (ctx->pc != 0x4AF5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0390_0x3b0390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF5F0u; }
        if (ctx->pc != 0x4AF5F0u) { return; }
    }
    ctx->pc = 0x4AF5F0u;
label_4af5f0:
    // 0x4af5f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4af5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4af5f4:
    // 0x4af5f4: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4af5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4af5f8:
    // 0x4af5f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4af5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4af5fc:
    // 0x4af5fc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4af5fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4af600:
    // 0x4af600: 0x320f809  jalr        $t9
label_4af604:
    if (ctx->pc == 0x4AF604u) {
        ctx->pc = 0x4AF608u;
        goto label_4af608;
    }
    ctx->pc = 0x4AF600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AF608u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AF608u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AF608u; }
            if (ctx->pc != 0x4AF608u) { return; }
        }
        }
    }
    ctx->pc = 0x4AF608u;
label_4af608:
    // 0x4af608: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4af608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4af60c:
    // 0x4af60c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4af60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4af610:
    // 0x4af610: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4af610u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4af614:
    // 0x4af614: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4af614u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4af618:
    // 0x4af618: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4af618u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4af61c:
    // 0x4af61c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4af61cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4af620:
    // 0x4af620: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4af620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4af624:
    // 0x4af624: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4af624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4af628:
    // 0x4af628: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4af628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4af62c:
    // 0x4af62c: 0x3e00008  jr          $ra
label_4af630:
    if (ctx->pc == 0x4AF630u) {
        ctx->pc = 0x4AF630u;
            // 0x4af630: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4AF634u;
        goto label_4af634;
    }
    ctx->pc = 0x4AF62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF62Cu;
            // 0x4af630: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AF634u;
label_4af634:
    // 0x4af634: 0x0  nop
    ctx->pc = 0x4af634u;
    // NOP
label_4af638:
    // 0x4af638: 0x0  nop
    ctx->pc = 0x4af638u;
    // NOP
label_4af63c:
    // 0x4af63c: 0x0  nop
    ctx->pc = 0x4af63cu;
    // NOP
label_4af640:
    // 0x4af640: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4af640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_4af644:
    // 0x4af644: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4af644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4af648:
    // 0x4af648: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4af648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4af64c:
    // 0x4af64c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4af64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4af650:
    // 0x4af650: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4af650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4af654:
    // 0x4af654: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4af654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4af658:
    // 0x4af658: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4af658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4af65c:
    // 0x4af65c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4af65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4af660:
    // 0x4af660: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4af660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4af664:
    // 0x4af664: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4af664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4af668:
    // 0x4af668: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4af668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4af66c:
    // 0x4af66c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4af66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4af670:
    // 0x4af670: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4af670u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4af674:
    // 0x4af674: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4af674u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4af678:
    // 0x4af678: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4af678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4af67c:
    // 0x4af67c: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x4af67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_4af680:
    // 0x4af680: 0x8c630784  lw          $v1, 0x784($v1)
    ctx->pc = 0x4af680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1924)));
label_4af684:
    // 0x4af684: 0x50600112  beql        $v1, $zero, . + 4 + (0x112 << 2)
label_4af688:
    if (ctx->pc == 0x4AF688u) {
        ctx->pc = 0x4AF688u;
            // 0x4af688: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4AF68Cu;
        goto label_4af68c;
    }
    ctx->pc = 0x4AF684u;
    {
        const bool branch_taken_0x4af684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4af684) {
            ctx->pc = 0x4AF688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF684u;
            // 0x4af688: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AFAD0u;
            goto label_4afad0;
        }
    }
    ctx->pc = 0x4AF68Cu;
label_4af68c:
    // 0x4af68c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4af68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4af690:
    // 0x4af690: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4af690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4af694:
    // 0x4af694: 0x2463a580  addiu       $v1, $v1, -0x5A80
    ctx->pc = 0x4af694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944128));
label_4af698:
    // 0x4af698: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x4af698u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_4af69c:
    // 0x4af69c: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x4af69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_4af6a0:
    // 0x4af6a0: 0x3c170064  lui         $s7, 0x64
    ctx->pc = 0x4af6a0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)100 << 16));
label_4af6a4:
    // 0x4af6a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4af6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4af6a8:
    // 0x4af6a8: 0x90850116  lbu         $a1, 0x116($a0)
    ctx->pc = 0x4af6a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 278)));
label_4af6ac:
    // 0x4af6ac: 0x8c630eac  lw          $v1, 0xEAC($v1)
    ctx->pc = 0x4af6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
label_4af6b0:
    // 0x4af6b0: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x4af6b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
label_4af6b4:
    // 0x4af6b4: 0x3c1600af  lui         $s6, 0xAF
    ctx->pc = 0x4af6b4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)175 << 16));
label_4af6b8:
    // 0x4af6b8: 0x26739bc0  addiu       $s3, $s3, -0x6440
    ctx->pc = 0x4af6b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941632));
label_4af6bc:
    // 0x4af6bc: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x4af6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4af6c0:
    // 0x4af6c0: 0x26f72104  addiu       $s7, $s7, 0x2104
    ctx->pc = 0x4af6c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8452));
label_4af6c4:
    // 0x4af6c4: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x4af6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_4af6c8:
    // 0x4af6c8: 0xa4a025  or          $s4, $a1, $a0
    ctx->pc = 0x4af6c8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4af6cc:
    // 0x4af6cc: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x4af6ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4af6d0:
    // 0x4af6d0: 0x26522100  addiu       $s2, $s2, 0x2100
    ctx->pc = 0x4af6d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8448));
label_4af6d4:
    // 0x4af6d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4af6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4af6d8:
    // 0x4af6d8: 0x26d60e80  addiu       $s6, $s6, 0xE80
    ctx->pc = 0x4af6d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3712));
label_4af6dc:
    // 0x4af6dc: 0x8c63077c  lw          $v1, 0x77C($v1)
    ctx->pc = 0x4af6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_4af6e0:
    // 0x4af6e0: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x4af6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_4af6e4:
    // 0x4af6e4: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x4af6e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4af6e8:
    // 0x4af6e8: 0x8c660078  lw          $a2, 0x78($v1)
    ctx->pc = 0x4af6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_4af6ec:
    // 0x4af6ec: 0x24c4000a  addiu       $a0, $a2, 0xA
    ctx->pc = 0x4af6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
label_4af6f0:
    // 0x4af6f0: 0x8c63007c  lw          $v1, 0x7C($v1)
    ctx->pc = 0x4af6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_4af6f4:
    // 0x4af6f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4af6f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af6f8:
    // 0x4af6f8: 0x0  nop
    ctx->pc = 0x4af6f8u;
    // NOP
label_4af6fc:
    // 0x4af6fc: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x4af6fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_4af700:
    // 0x4af700: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x4af700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_4af704:
    // 0x4af704: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4af704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af708:
    // 0x4af708: 0x0  nop
    ctx->pc = 0x4af708u;
    // NOP
label_4af70c:
    // 0x4af70c: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4af70cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4af710:
    // 0x4af710: 0x8ed50004  lw          $s5, 0x4($s6)
    ctx->pc = 0x4af710u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_4af714:
    // 0x4af714: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x4af714u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4af718:
    // 0x4af718: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x4af718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_4af71c:
    // 0x4af71c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_4af720:
    if (ctx->pc == 0x4AF720u) {
        ctx->pc = 0x4AF720u;
            // 0x4af720: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF724u;
        goto label_4af724;
    }
    ctx->pc = 0x4AF71Cu;
    {
        const bool branch_taken_0x4af71c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4AF720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF71Cu;
            // 0x4af720: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af71c) {
            ctx->pc = 0x4AF738u;
            goto label_4af738;
        }
    }
    ctx->pc = 0x4AF724u;
label_4af724:
    // 0x4af724: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4af724u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4af728:
    // 0x4af728: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4af72c:
    if (ctx->pc == 0x4AF72Cu) {
        ctx->pc = 0x4AF730u;
        goto label_4af730;
    }
    ctx->pc = 0x4AF728u;
    {
        const bool branch_taken_0x4af728 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4af728) {
            ctx->pc = 0x4AF738u;
            goto label_4af738;
        }
    }
    ctx->pc = 0x4AF730u;
label_4af730:
    // 0x4af730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4af730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4af734:
    // 0x4af734: 0x0  nop
    ctx->pc = 0x4af734u;
    // NOP
label_4af738:
    // 0x4af738: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_4af73c:
    if (ctx->pc == 0x4AF73Cu) {
        ctx->pc = 0x4AF740u;
        goto label_4af740;
    }
    ctx->pc = 0x4AF738u;
    {
        const bool branch_taken_0x4af738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4af738) {
            ctx->pc = 0x4AF758u;
            goto label_4af758;
        }
    }
    ctx->pc = 0x4AF740u;
label_4af740:
    // 0x4af740: 0xc075eb4  jal         func_1D7AD0
label_4af744:
    if (ctx->pc == 0x4AF744u) {
        ctx->pc = 0x4AF744u;
            // 0x4af744: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF748u;
        goto label_4af748;
    }
    ctx->pc = 0x4AF740u;
    SET_GPR_U32(ctx, 31, 0x4AF748u);
    ctx->pc = 0x4AF744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF740u;
            // 0x4af744: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF748u; }
        if (ctx->pc != 0x4AF748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF748u; }
        if (ctx->pc != 0x4AF748u) { return; }
    }
    ctx->pc = 0x4AF748u;
label_4af748:
    // 0x4af748: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4af74c:
    if (ctx->pc == 0x4AF74Cu) {
        ctx->pc = 0x4AF750u;
        goto label_4af750;
    }
    ctx->pc = 0x4AF748u;
    {
        const bool branch_taken_0x4af748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4af748) {
            ctx->pc = 0x4AF758u;
            goto label_4af758;
        }
    }
    ctx->pc = 0x4AF750u;
label_4af750:
    // 0x4af750: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4af750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4af754:
    // 0x4af754: 0x0  nop
    ctx->pc = 0x4af754u;
    // NOP
label_4af758:
    // 0x4af758: 0x162000d5  bnez        $s1, . + 4 + (0xD5 << 2)
label_4af75c:
    if (ctx->pc == 0x4AF75Cu) {
        ctx->pc = 0x4AF760u;
        goto label_4af760;
    }
    ctx->pc = 0x4AF758u;
    {
        const bool branch_taken_0x4af758 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4af758) {
            ctx->pc = 0x4AFAB0u;
            goto label_4afab0;
        }
    }
    ctx->pc = 0x4AF760u;
label_4af760:
    // 0x4af760: 0x8ea30d6c  lw          $v1, 0xD6C($s5)
    ctx->pc = 0x4af760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3436)));
label_4af764:
    // 0x4af764: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x4af764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4af768:
    // 0x4af768: 0x80750010  lb          $s5, 0x10($v1)
    ctx->pc = 0x4af768u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_4af76c:
    // 0x4af76c: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
label_4af770:
    if (ctx->pc == 0x4AF770u) {
        ctx->pc = 0x4AF774u;
        goto label_4af774;
    }
    ctx->pc = 0x4AF76Cu;
    {
        const bool branch_taken_0x4af76c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x4af76c) {
            ctx->pc = 0x4AF778u;
            goto label_4af778;
        }
    }
    ctx->pc = 0x4AF774u;
label_4af774:
    // 0x4af774: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4af774u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4af778:
    // 0x4af778: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4af778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4af77c:
    // 0x4af77c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4af77cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4af780:
    // 0x4af780: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4af780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4af784:
    // 0x4af784: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4af784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4af788:
    // 0x4af788: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x4af788u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4af78c:
    // 0x4af78c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4af78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4af790:
    // 0x4af790: 0x8c641d08  lw          $a0, 0x1D08($v1)
    ctx->pc = 0x4af790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7432)));
label_4af794:
    // 0x4af794: 0x8c510ce8  lw          $s1, 0xCE8($v0)
    ctx->pc = 0x4af794u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3304)));
label_4af798:
    // 0x4af798: 0xc0506ac  jal         func_141AB0
label_4af79c:
    if (ctx->pc == 0x4AF79Cu) {
        ctx->pc = 0x4AF79Cu;
            // 0x4af79c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4AF7A0u;
        goto label_4af7a0;
    }
    ctx->pc = 0x4AF798u;
    SET_GPR_U32(ctx, 31, 0x4AF7A0u);
    ctx->pc = 0x4AF79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF798u;
            // 0x4af79c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF7A0u; }
        if (ctx->pc != 0x4AF7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF7A0u; }
        if (ctx->pc != 0x4AF7A0u) { return; }
    }
    ctx->pc = 0x4AF7A0u;
label_4af7a0:
    // 0x4af7a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4af7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4af7a4:
    // 0x4af7a4: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4af7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4af7a8:
    // 0x4af7a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4af7a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4af7ac:
    // 0x4af7ac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4af7acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4af7b0:
    // 0x4af7b0: 0x320f809  jalr        $t9
label_4af7b4:
    if (ctx->pc == 0x4AF7B4u) {
        ctx->pc = 0x4AF7B4u;
            // 0x4af7b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4AF7B8u;
        goto label_4af7b8;
    }
    ctx->pc = 0x4AF7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AF7B8u);
        ctx->pc = 0x4AF7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF7B0u;
            // 0x4af7b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AF7B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AF7B8u; }
            if (ctx->pc != 0x4AF7B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4AF7B8u;
label_4af7b8:
    // 0x4af7b8: 0x86e40000  lh          $a0, 0x0($s7)
    ctx->pc = 0x4af7b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4af7bc:
    // 0x4af7bc: 0x15163c  dsll32      $v0, $s5, 24
    ctx->pc = 0x4af7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 24));
label_4af7c0:
    // 0x4af7c0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4af7c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4af7c4:
    // 0x4af7c4: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x4af7c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_4af7c8:
    // 0x4af7c8: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x4af7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4af7cc:
    // 0x4af7cc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4af7ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4af7d0:
    // 0x4af7d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4af7d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af7d4:
    // 0x4af7d4: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x4af7d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4af7d8:
    // 0x4af7d8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4af7d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4af7dc:
    // 0x4af7dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4af7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4af7e0:
    // 0x4af7e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4af7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4af7e4:
    // 0x4af7e4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x4af7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4af7e8:
    // 0x4af7e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4af7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4af7ec:
    // 0x4af7ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4af7ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af7f0:
    // 0x4af7f0: 0x0  nop
    ctx->pc = 0x4af7f0u;
    // NOP
label_4af7f4:
    // 0x4af7f4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4af7f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4af7f8:
    // 0x4af7f8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4af7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4af7fc:
    // 0x4af7fc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4af7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4af800:
    // 0x4af800: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4af800u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4af804:
    // 0x4af804: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4af804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_4af808:
    // 0x4af808: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4af808u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4af80c:
    // 0x4af80c: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x4af80cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4af810:
    // 0x4af810: 0x4600a380  add.s       $f14, $f20, $f0
    ctx->pc = 0x4af810u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4af814:
    // 0x4af814: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x4af814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4af818:
    // 0x4af818: 0x4600abc0  add.s       $f15, $f21, $f0
    ctx->pc = 0x4af818u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4af81c:
    // 0x4af81c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4af81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4af820:
    // 0x4af820: 0x44151000  mfc1        $s5, $f2
    ctx->pc = 0x4af820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_4af824:
    // 0x4af824: 0x441e0800  mfc1        $fp, $f1
    ctx->pc = 0x4af824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
label_4af828:
    // 0x4af828: 0xc0bc284  jal         func_2F0A10
label_4af82c:
    if (ctx->pc == 0x4AF82Cu) {
        ctx->pc = 0x4AF82Cu;
            // 0x4af82c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4AF830u;
        goto label_4af830;
    }
    ctx->pc = 0x4AF828u;
    SET_GPR_U32(ctx, 31, 0x4AF830u);
    ctx->pc = 0x4AF82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF828u;
            // 0x4af82c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF830u; }
        if (ctx->pc != 0x4AF830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF830u; }
        if (ctx->pc != 0x4AF830u) { return; }
    }
    ctx->pc = 0x4AF830u;
label_4af830:
    // 0x4af830: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x4af830u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af834:
    // 0x4af834: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4af834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4af838:
    // 0x4af838: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4af838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4af83c:
    // 0x4af83c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4af83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4af840:
    // 0x4af840: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4af840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4af844:
    // 0x4af844: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4af844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4af848:
    // 0x4af848: 0x320f809  jalr        $t9
label_4af84c:
    if (ctx->pc == 0x4AF84Cu) {
        ctx->pc = 0x4AF84Cu;
            // 0x4af84c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x4AF850u;
        goto label_4af850;
    }
    ctx->pc = 0x4AF848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AF850u);
        ctx->pc = 0x4AF84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF848u;
            // 0x4af84c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AF850u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AF850u; }
            if (ctx->pc != 0x4AF850u) { return; }
        }
        }
    }
    ctx->pc = 0x4AF850u;
label_4af850:
    // 0x4af850: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4af850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4af854:
    // 0x4af854: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4af854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4af858:
    // 0x4af858: 0xc0506ac  jal         func_141AB0
label_4af85c:
    if (ctx->pc == 0x4AF85Cu) {
        ctx->pc = 0x4AF85Cu;
            // 0x4af85c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AF860u;
        goto label_4af860;
    }
    ctx->pc = 0x4AF858u;
    SET_GPR_U32(ctx, 31, 0x4AF860u);
    ctx->pc = 0x4AF85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF858u;
            // 0x4af85c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF860u; }
        if (ctx->pc != 0x4AF860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF860u; }
        if (ctx->pc != 0x4AF860u) { return; }
    }
    ctx->pc = 0x4AF860u;
label_4af860:
    // 0x4af860: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4af860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4af864:
    // 0x4af864: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4af864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4af868:
    // 0x4af868: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4af868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4af86c:
    // 0x4af86c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4af86cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4af870:
    // 0x4af870: 0x320f809  jalr        $t9
label_4af874:
    if (ctx->pc == 0x4AF874u) {
        ctx->pc = 0x4AF874u;
            // 0x4af874: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4AF878u;
        goto label_4af878;
    }
    ctx->pc = 0x4AF870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AF878u);
        ctx->pc = 0x4AF874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF870u;
            // 0x4af874: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AF878u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AF878u; }
            if (ctx->pc != 0x4AF878u) { return; }
        }
        }
    }
    ctx->pc = 0x4AF878u;
label_4af878:
    // 0x4af878: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x4af878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_4af87c:
    // 0x4af87c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x4af87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_4af880:
    // 0x4af880: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4af880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af884:
    // 0x4af884: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x4af884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_4af888:
    // 0x4af888: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x4af888u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4af88c:
    // 0x4af88c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4af88cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4af890:
    // 0x4af890: 0x510018  mult        $zero, $v0, $s1
    ctx->pc = 0x4af890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4af894:
    // 0x4af894: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x4af894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_4af898:
    // 0x4af898: 0x114fc2  srl         $t1, $s1, 31
    ctx->pc = 0x4af898u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_4af89c:
    // 0x4af89c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4af89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4af8a0:
    // 0x4af8a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4af8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4af8a4:
    // 0x4af8a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4af8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4af8a8:
    // 0x4af8a8: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x4af8a8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4af8ac:
    // 0x4af8ac: 0x4010  mfhi        $t0
    ctx->pc = 0x4af8acu;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_4af8b0:
    // 0x4af8b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4af8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4af8b4:
    // 0x4af8b4: 0x84143  sra         $t0, $t0, 5
    ctx->pc = 0x4af8b4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 5));
label_4af8b8:
    // 0x4af8b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4af8b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af8bc:
    // 0x4af8bc: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x4af8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4af8c0:
    // 0x4af8c0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4af8c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4af8c4:
    // 0x4af8c4: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x4af8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4af8c8:
    // 0x4af8c8: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x4af8c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_4af8cc:
    // 0x4af8cc: 0x2505001d  addiu       $a1, $t0, 0x1D
    ctx->pc = 0x4af8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 29));
label_4af8d0:
    // 0x4af8d0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4af8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4af8d4:
    // 0x4af8d4: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x4af8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4af8d8:
    // 0x4af8d8: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x4af8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4af8dc:
    // 0x4af8dc: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x4af8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_4af8e0:
    // 0x4af8e0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x4af8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4af8e4:
    // 0x4af8e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4af8e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af8e8:
    // 0x4af8e8: 0x2288823  subu        $s1, $s1, $t0
    ctx->pc = 0x4af8e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_4af8ec:
    // 0x4af8ec: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4af8ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4af8f0:
    // 0x4af8f0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4af8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4af8f4:
    // 0x4af8f4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4af8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4af8f8:
    // 0x4af8f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4af8f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4af8fc:
    // 0x4af8fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4af8fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4af900:
    // 0x4af900: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4af900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4af904:
    // 0x4af904: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4af904u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4af908:
    // 0x4af908: 0x4600abc0  add.s       $f15, $f21, $f0
    ctx->pc = 0x4af908u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4af90c:
    // 0x4af90c: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x4af90cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4af910:
    // 0x4af910: 0x4600a380  add.s       $f14, $f20, $f0
    ctx->pc = 0x4af910u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4af914:
    // 0x4af914: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4af914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4af918:
    // 0x4af918: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x4af918u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_4af91c:
    // 0x4af91c: 0xc0bc284  jal         func_2F0A10
label_4af920:
    if (ctx->pc == 0x4AF920u) {
        ctx->pc = 0x4AF920u;
            // 0x4af920: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4AF924u;
        goto label_4af924;
    }
    ctx->pc = 0x4AF91Cu;
    SET_GPR_U32(ctx, 31, 0x4AF924u);
    ctx->pc = 0x4AF920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF91Cu;
            // 0x4af920: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF924u; }
        if (ctx->pc != 0x4AF924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF924u; }
        if (ctx->pc != 0x4AF924u) { return; }
    }
    ctx->pc = 0x4AF924u;
label_4af924:
    // 0x4af924: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x4af924u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af928:
    // 0x4af928: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x4af928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_4af92c:
    // 0x4af92c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4af92cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4af930:
    // 0x4af930: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x4af930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4af934:
    // 0x4af934: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4af934u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4af938:
    // 0x4af938: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x4af938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_4af93c:
    // 0x4af93c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x4af93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_4af940:
    // 0x4af940: 0x114fc2  srl         $t1, $s1, 31
    ctx->pc = 0x4af940u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_4af944:
    // 0x4af944: 0x510018  mult        $zero, $v0, $s1
    ctx->pc = 0x4af944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4af948:
    // 0x4af948: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4af948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4af94c:
    // 0x4af94c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4af94cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4af950:
    // 0x4af950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4af950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4af954:
    // 0x4af954: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4af954u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af958:
    // 0x4af958: 0x0  nop
    ctx->pc = 0x4af958u;
    // NOP
label_4af95c:
    // 0x4af95c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4af95cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4af960:
    // 0x4af960: 0x4010  mfhi        $t0
    ctx->pc = 0x4af960u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_4af964:
    // 0x4af964: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4af964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4af968:
    // 0x4af968: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x4af968u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
label_4af96c:
    // 0x4af96c: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x4af96cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4af970:
    // 0x4af970: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x4af970u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4af974:
    // 0x4af974: 0xa94021  addu        $t0, $a1, $t1
    ctx->pc = 0x4af974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_4af978:
    // 0x4af978: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4af978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4af97c:
    // 0x4af97c: 0x2525001d  addiu       $a1, $t1, 0x1D
    ctx->pc = 0x4af97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 29));
label_4af980:
    // 0x4af980: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x4af980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_4af984:
    // 0x4af984: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4af984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4af988:
    // 0x4af988: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x4af988u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_4af98c:
    // 0x4af98c: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x4af98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4af990:
    // 0x4af990: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x4af990u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_4af994:
    // 0x4af994: 0x2288823  subu        $s1, $s1, $t0
    ctx->pc = 0x4af994u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_4af998:
    // 0x4af998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4af998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af99c:
    // 0x4af99c: 0x0  nop
    ctx->pc = 0x4af99cu;
    // NOP
label_4af9a0:
    // 0x4af9a0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4af9a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4af9a4:
    // 0x4af9a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4af9a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af9a8:
    // 0x4af9a8: 0x0  nop
    ctx->pc = 0x4af9a8u;
    // NOP
label_4af9ac:
    // 0x4af9ac: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x4af9acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4af9b0:
    // 0x4af9b0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4af9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4af9b4:
    // 0x4af9b4: 0x4601151c  madd.s      $f20, $f2, $f1
    ctx->pc = 0x4af9b4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_4af9b8:
    // 0x4af9b8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4af9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4af9bc:
    // 0x4af9bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4af9bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4af9c0:
    // 0x4af9c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4af9c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4af9c4:
    // 0x4af9c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4af9c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4af9c8:
    // 0x4af9c8: 0x4600abc0  add.s       $f15, $f21, $f0
    ctx->pc = 0x4af9c8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4af9cc:
    // 0x4af9cc: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x4af9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4af9d0:
    // 0x4af9d0: 0x4600a380  add.s       $f14, $f20, $f0
    ctx->pc = 0x4af9d0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4af9d4:
    // 0x4af9d4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4af9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4af9d8:
    // 0x4af9d8: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x4af9d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_4af9dc:
    // 0x4af9dc: 0xc0bc284  jal         func_2F0A10
label_4af9e0:
    if (ctx->pc == 0x4AF9E0u) {
        ctx->pc = 0x4AF9E0u;
            // 0x4af9e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4AF9E4u;
        goto label_4af9e4;
    }
    ctx->pc = 0x4AF9DCu;
    SET_GPR_U32(ctx, 31, 0x4AF9E4u);
    ctx->pc = 0x4AF9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AF9DCu;
            // 0x4af9e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF9E4u; }
        if (ctx->pc != 0x4AF9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AF9E4u; }
        if (ctx->pc != 0x4AF9E4u) { return; }
    }
    ctx->pc = 0x4AF9E4u;
label_4af9e4:
    // 0x4af9e4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x4af9e4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4af9e8:
    // 0x4af9e8: 0x2622001d  addiu       $v0, $s1, 0x1D
    ctx->pc = 0x4af9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 29));
label_4af9ec:
    // 0x4af9ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4af9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4af9f0:
    // 0x4af9f0: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x4af9f0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4af9f4:
    // 0x4af9f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4af9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4af9f8:
    // 0x4af9f8: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x4af9f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_4af9fc:
    // 0x4af9fc: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x4af9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4afa00:
    // 0x4afa00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4afa00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4afa04:
    // 0x4afa04: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x4afa04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_4afa08:
    // 0x4afa08: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4afa08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4afa0c:
    // 0x4afa0c: 0x3449cccd  ori         $t1, $v0, 0xCCCD
    ctx->pc = 0x4afa0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4afa10:
    // 0x4afa10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4afa10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4afa14:
    // 0x4afa14: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4afa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4afa18:
    // 0x4afa18: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4afa18u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4afa1c:
    // 0x4afa1c: 0x0  nop
    ctx->pc = 0x4afa1cu;
    // NOP
label_4afa20:
    // 0x4afa20: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4afa20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4afa24:
    // 0x4afa24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4afa24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4afa28:
    // 0x4afa28: 0x0  nop
    ctx->pc = 0x4afa28u;
    // NOP
label_4afa2c:
    // 0x4afa2c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4afa2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4afa30:
    // 0x4afa30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4afa30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4afa34:
    // 0x4afa34: 0x0  nop
    ctx->pc = 0x4afa34u;
    // NOP
label_4afa38:
    // 0x4afa38: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x4afa38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4afa3c:
    // 0x4afa3c: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x4afa3cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4afa40:
    // 0x4afa40: 0x0  nop
    ctx->pc = 0x4afa40u;
    // NOP
label_4afa44:
    // 0x4afa44: 0x4601131c  madd.s      $f12, $f2, $f1
    ctx->pc = 0x4afa44u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_4afa48:
    // 0x4afa48: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4afa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4afa4c:
    // 0x4afa4c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4afa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4afa50:
    // 0x4afa50: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x4afa50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_4afa54:
    // 0x4afa54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4afa54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4afa58:
    // 0x4afa58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4afa58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4afa5c:
    // 0x4afa5c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4afa5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4afa60:
    // 0x4afa60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4afa60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4afa64:
    // 0x4afa64: 0x46016380  add.s       $f14, $f12, $f1
    ctx->pc = 0x4afa64u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_4afa68:
    // 0x4afa68: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4afa68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4afa6c:
    // 0x4afa6c: 0xc0bc284  jal         func_2F0A10
label_4afa70:
    if (ctx->pc == 0x4AFA70u) {
        ctx->pc = 0x4AFA70u;
            // 0x4afa70: 0x4600abc0  add.s       $f15, $f21, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x4AFA74u;
        goto label_4afa74;
    }
    ctx->pc = 0x4AFA6Cu;
    SET_GPR_U32(ctx, 31, 0x4AFA74u);
    ctx->pc = 0x4AFA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFA6Cu;
            // 0x4afa70: 0x4600abc0  add.s       $f15, $f21, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFA74u; }
        if (ctx->pc != 0x4AFA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFA74u; }
        if (ctx->pc != 0x4AFA74u) { return; }
    }
    ctx->pc = 0x4AFA74u;
label_4afa74:
    // 0x4afa74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4afa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4afa78:
    // 0x4afa78: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4afa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4afa7c:
    // 0x4afa7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4afa7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4afa80:
    // 0x4afa80: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4afa80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4afa84:
    // 0x4afa84: 0x320f809  jalr        $t9
label_4afa88:
    if (ctx->pc == 0x4AFA88u) {
        ctx->pc = 0x4AFA8Cu;
        goto label_4afa8c;
    }
    ctx->pc = 0x4AFA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AFA8Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AFA8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AFA8Cu; }
            if (ctx->pc != 0x4AFA8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4AFA8Cu;
label_4afa8c:
    // 0x4afa8c: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x4afa8cu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4afa90:
    // 0x4afa90: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x4afa90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4afa94:
    // 0x4afa94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4afa94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4afa98:
    // 0x4afa98: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x4afa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_4afa9c:
    // 0x4afa9c: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x4afa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_4afaa0:
    // 0x4afaa0: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x4afaa0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4afaa4:
    // 0x4afaa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4afaa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4afaa8:
    // 0x4afaa8: 0x0  nop
    ctx->pc = 0x4afaa8u;
    // NOP
label_4afaac:
    // 0x4afaac: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x4afaacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_4afab0:
    // 0x4afab0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x4afab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4afab4:
    // 0x4afab4: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x4afab4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
label_4afab8:
    // 0x4afab8: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x4afab8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4afabc:
    // 0x4afabc: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x4afabcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_4afac0:
    // 0x4afac0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x4afac0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4afac4:
    // 0x4afac4: 0x1460ff12  bnez        $v1, . + 4 + (-0xEE << 2)
label_4afac8:
    if (ctx->pc == 0x4AFAC8u) {
        ctx->pc = 0x4AFAC8u;
            // 0x4afac8: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x4AFACCu;
        goto label_4afacc;
    }
    ctx->pc = 0x4AFAC4u;
    {
        const bool branch_taken_0x4afac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AFAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFAC4u;
            // 0x4afac8: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afac4) {
            ctx->pc = 0x4AF710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4af710;
        }
    }
    ctx->pc = 0x4AFACCu;
label_4afacc:
    // 0x4afacc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4afaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4afad0:
    // 0x4afad0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4afad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4afad4:
    // 0x4afad4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4afad4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4afad8:
    // 0x4afad8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4afad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4afadc:
    // 0x4afadc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4afadcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4afae0:
    // 0x4afae0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4afae0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4afae4:
    // 0x4afae4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4afae4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4afae8:
    // 0x4afae8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4afae8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4afaec:
    // 0x4afaec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4afaecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4afaf0:
    // 0x4afaf0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4afaf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4afaf4:
    // 0x4afaf4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4afaf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4afaf8:
    // 0x4afaf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4afaf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4afafc:
    // 0x4afafc: 0x3e00008  jr          $ra
label_4afb00:
    if (ctx->pc == 0x4AFB00u) {
        ctx->pc = 0x4AFB00u;
            // 0x4afb00: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4AFB04u;
        goto label_4afb04;
    }
    ctx->pc = 0x4AFAFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFAFCu;
            // 0x4afb00: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AFB04u;
label_4afb04:
    // 0x4afb04: 0x0  nop
    ctx->pc = 0x4afb04u;
    // NOP
label_4afb08:
    // 0x4afb08: 0x0  nop
    ctx->pc = 0x4afb08u;
    // NOP
label_4afb0c:
    // 0x4afb0c: 0x0  nop
    ctx->pc = 0x4afb0cu;
    // NOP
label_4afb10:
    // 0x4afb10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4afb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4afb14:
    // 0x4afb14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4afb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4afb18:
    // 0x4afb18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4afb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4afb1c:
    // 0x4afb1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4afb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4afb20:
    // 0x4afb20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4afb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4afb24:
    // 0x4afb24: 0x90830370  lbu         $v1, 0x370($a0)
    ctx->pc = 0x4afb24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 880)));
label_4afb28:
    // 0x4afb28: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_4afb2c:
    if (ctx->pc == 0x4AFB2Cu) {
        ctx->pc = 0x4AFB2Cu;
            // 0x4afb2c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AFB30u;
        goto label_4afb30;
    }
    ctx->pc = 0x4AFB28u;
    {
        const bool branch_taken_0x4afb28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFB28u;
            // 0x4afb2c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afb28) {
            ctx->pc = 0x4AFB6Cu;
            goto label_4afb6c;
        }
    }
    ctx->pc = 0x4AFB30u;
label_4afb30:
    // 0x4afb30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4afb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4afb34:
    // 0x4afb34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4afb34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4afb38:
    // 0x4afb38: 0x8c500110  lw          $s0, 0x110($v0)
    ctx->pc = 0x4afb38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_4afb3c:
    // 0x4afb3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4afb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4afb40:
    // 0x4afb40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4afb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4afb44:
    // 0x4afb44: 0xc0eb654  jal         func_3AD950
label_4afb48:
    if (ctx->pc == 0x4AFB48u) {
        ctx->pc = 0x4AFB48u;
            // 0x4afb48: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AFB4Cu;
        goto label_4afb4c;
    }
    ctx->pc = 0x4AFB44u;
    SET_GPR_U32(ctx, 31, 0x4AFB4Cu);
    ctx->pc = 0x4AFB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFB44u;
            // 0x4afb48: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AD950u;
    if (runtime->hasFunction(0x3AD950u)) {
        auto targetFn = runtime->lookupFunction(0x3AD950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFB4Cu; }
        if (ctx->pc != 0x4AFB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AD950_0x3ad950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFB4Cu; }
        if (ctx->pc != 0x4AFB4Cu) { return; }
    }
    ctx->pc = 0x4AFB4Cu;
label_4afb4c:
    // 0x4afb4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4afb4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4afb50:
    // 0x4afb50: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x4afb50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_4afb54:
    // 0x4afb54: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_4afb58:
    if (ctx->pc == 0x4AFB58u) {
        ctx->pc = 0x4AFB58u;
            // 0x4afb58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AFB5Cu;
        goto label_4afb5c;
    }
    ctx->pc = 0x4AFB54u;
    {
        const bool branch_taken_0x4afb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4afb54) {
            ctx->pc = 0x4AFB58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFB54u;
            // 0x4afb58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AFB40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4afb40;
        }
    }
    ctx->pc = 0x4AFB5Cu;
label_4afb5c:
    // 0x4afb5c: 0x8e590374  lw          $t9, 0x374($s2)
    ctx->pc = 0x4afb5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 884)));
label_4afb60:
    // 0x4afb60: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x4afb60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_4afb64:
    // 0x4afb64: 0x320f809  jalr        $t9
label_4afb68:
    if (ctx->pc == 0x4AFB68u) {
        ctx->pc = 0x4AFB68u;
            // 0x4afb68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AFB6Cu;
        goto label_4afb6c;
    }
    ctx->pc = 0x4AFB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AFB6Cu);
        ctx->pc = 0x4AFB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFB64u;
            // 0x4afb68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AFB6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AFB6Cu; }
            if (ctx->pc != 0x4AFB6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4AFB6Cu;
label_4afb6c:
    // 0x4afb6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4afb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4afb70:
    // 0x4afb70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4afb70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4afb74:
    // 0x4afb74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4afb74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4afb78:
    // 0x4afb78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4afb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4afb7c:
    // 0x4afb7c: 0x3e00008  jr          $ra
label_4afb80:
    if (ctx->pc == 0x4AFB80u) {
        ctx->pc = 0x4AFB80u;
            // 0x4afb80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4AFB84u;
        goto label_4afb84;
    }
    ctx->pc = 0x4AFB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFB7Cu;
            // 0x4afb80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AFB84u;
label_4afb84:
    // 0x4afb84: 0x0  nop
    ctx->pc = 0x4afb84u;
    // NOP
label_4afb88:
    // 0x4afb88: 0x0  nop
    ctx->pc = 0x4afb88u;
    // NOP
label_4afb8c:
    // 0x4afb8c: 0x0  nop
    ctx->pc = 0x4afb8cu;
    // NOP
label_4afb90:
    // 0x4afb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4afb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4afb94:
    // 0x4afb94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4afb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4afb98:
    // 0x4afb98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4afb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4afb9c:
    // 0x4afb9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4afb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4afba0:
    // 0x4afba0: 0x8c900d70  lw          $s0, 0xD70($a0)
    ctx->pc = 0x4afba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_4afba4:
    // 0x4afba4: 0xc0c1560  jal         func_305580
label_4afba8:
    if (ctx->pc == 0x4AFBA8u) {
        ctx->pc = 0x4AFBA8u;
            // 0x4afba8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AFBACu;
        goto label_4afbac;
    }
    ctx->pc = 0x4AFBA4u;
    SET_GPR_U32(ctx, 31, 0x4AFBACu);
    ctx->pc = 0x4AFBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFBA4u;
            // 0x4afba8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305580u;
    if (runtime->hasFunction(0x305580u)) {
        auto targetFn = runtime->lookupFunction(0x305580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFBACu; }
        if (ctx->pc != 0x4AFBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305580_0x305580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFBACu; }
        if (ctx->pc != 0x4AFBACu) { return; }
    }
    ctx->pc = 0x4AFBACu;
label_4afbac:
    // 0x4afbac: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4afbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4afbb0:
    // 0x4afbb0: 0xc44c1360  lwc1        $f12, 0x1360($v0)
    ctx->pc = 0x4afbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4afbb4:
    // 0x4afbb4: 0xc0c1540  jal         func_305500
label_4afbb8:
    if (ctx->pc == 0x4AFBB8u) {
        ctx->pc = 0x4AFBB8u;
            // 0x4afbb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AFBBCu;
        goto label_4afbbc;
    }
    ctx->pc = 0x4AFBB4u;
    SET_GPR_U32(ctx, 31, 0x4AFBBCu);
    ctx->pc = 0x4AFBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFBB4u;
            // 0x4afbb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305500u;
    if (runtime->hasFunction(0x305500u)) {
        auto targetFn = runtime->lookupFunction(0x305500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFBBCu; }
        if (ctx->pc != 0x4AFBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305500_0x305500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFBBCu; }
        if (ctx->pc != 0x4AFBBCu) { return; }
    }
    ctx->pc = 0x4AFBBCu;
label_4afbbc:
    // 0x4afbbc: 0x8e230da0  lw          $v1, 0xDA0($s1)
    ctx->pc = 0x4afbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_4afbc0:
    // 0x4afbc0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4afbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4afbc4:
    // 0x4afbc4: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_4afbc8:
    if (ctx->pc == 0x4AFBC8u) {
        ctx->pc = 0x4AFBC8u;
            // 0x4afbc8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4AFBCCu;
        goto label_4afbcc;
    }
    ctx->pc = 0x4AFBC4u;
    {
        const bool branch_taken_0x4afbc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4afbc4) {
            ctx->pc = 0x4AFBC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFBC4u;
            // 0x4afbc8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AFBE8u;
            goto label_4afbe8;
        }
    }
    ctx->pc = 0x4AFBCCu;
label_4afbcc:
    // 0x4afbcc: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x4afbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_4afbd0:
    // 0x4afbd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4afbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4afbd4:
    // 0x4afbd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4afbd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4afbd8:
    // 0x4afbd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4afbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4afbdc:
    // 0x4afbdc: 0xc0bdf9c  jal         func_2F7E70
label_4afbe0:
    if (ctx->pc == 0x4AFBE0u) {
        ctx->pc = 0x4AFBE0u;
            // 0x4afbe0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x4AFBE4u;
        goto label_4afbe4;
    }
    ctx->pc = 0x4AFBDCu;
    SET_GPR_U32(ctx, 31, 0x4AFBE4u);
    ctx->pc = 0x4AFBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFBDCu;
            // 0x4afbe0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFBE4u; }
        if (ctx->pc != 0x4AFBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFBE4u; }
        if (ctx->pc != 0x4AFBE4u) { return; }
    }
    ctx->pc = 0x4AFBE4u;
label_4afbe4:
    // 0x4afbe4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4afbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4afbe8:
    // 0x4afbe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4afbe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4afbec:
    // 0x4afbec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4afbecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4afbf0:
    // 0x4afbf0: 0x3e00008  jr          $ra
label_4afbf4:
    if (ctx->pc == 0x4AFBF4u) {
        ctx->pc = 0x4AFBF4u;
            // 0x4afbf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4AFBF8u;
        goto label_4afbf8;
    }
    ctx->pc = 0x4AFBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFBF0u;
            // 0x4afbf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AFBF8u;
label_4afbf8:
    // 0x4afbf8: 0x0  nop
    ctx->pc = 0x4afbf8u;
    // NOP
label_4afbfc:
    // 0x4afbfc: 0x0  nop
    ctx->pc = 0x4afbfcu;
    // NOP
label_4afc00:
    // 0x4afc00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4afc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4afc04:
    // 0x4afc04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4afc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4afc08:
    // 0x4afc08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4afc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4afc0c:
    // 0x4afc0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4afc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4afc10:
    // 0x4afc10: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x4afc10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_4afc14:
    // 0x4afc14: 0xc0c159c  jal         func_305670
label_4afc18:
    if (ctx->pc == 0x4AFC18u) {
        ctx->pc = 0x4AFC18u;
            // 0x4afc18: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AFC1Cu;
        goto label_4afc1c;
    }
    ctx->pc = 0x4AFC14u;
    SET_GPR_U32(ctx, 31, 0x4AFC1Cu);
    ctx->pc = 0x4AFC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFC14u;
            // 0x4afc18: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305670u;
    if (runtime->hasFunction(0x305670u)) {
        auto targetFn = runtime->lookupFunction(0x305670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFC1Cu; }
        if (ctx->pc != 0x4AFC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305670_0x305670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFC1Cu; }
        if (ctx->pc != 0x4AFC1Cu) { return; }
    }
    ctx->pc = 0x4AFC1Cu;
label_4afc1c:
    // 0x4afc1c: 0xae200dc4  sw          $zero, 0xDC4($s1)
    ctx->pc = 0x4afc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3524), GPR_U32(ctx, 0));
label_4afc20:
    // 0x4afc20: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x4afc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_4afc24:
    // 0x4afc24: 0x8206010d  lb          $a2, 0x10D($s0)
    ctx->pc = 0x4afc24u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_4afc28:
    // 0x4afc28: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4afc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4afc2c:
    // 0x4afc2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4afc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4afc30:
    // 0x4afc30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4afc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4afc34:
    // 0x4afc34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4afc34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4afc38:
    // 0x4afc38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4afc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4afc3c:
    // 0x4afc3c: 0xa206010e  sb          $a2, 0x10E($s0)
    ctx->pc = 0x4afc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 270), (uint8_t)GPR_U32(ctx, 6));
label_4afc40:
    // 0x4afc40: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4afc40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4afc44:
    // 0x4afc44: 0xa200010d  sb          $zero, 0x10D($s0)
    ctx->pc = 0x4afc44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 269), (uint8_t)GPR_U32(ctx, 0));
label_4afc48:
    // 0x4afc48: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x4afc48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_4afc4c:
    // 0x4afc4c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4afc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4afc50:
    // 0x4afc50: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4afc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4afc54:
    // 0x4afc54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4afc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4afc58:
    // 0x4afc58: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4afc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4afc5c:
    // 0x4afc5c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4afc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4afc60:
    // 0x4afc60: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x4afc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_4afc64:
    // 0x4afc64: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x4afc64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4afc68:
    // 0x4afc68: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x4afc68u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_4afc6c:
    // 0x4afc6c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4afc6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4afc70:
    // 0x4afc70: 0x320f809  jalr        $t9
label_4afc74:
    if (ctx->pc == 0x4AFC74u) {
        ctx->pc = 0x4AFC74u;
            // 0x4afc74: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x4AFC78u;
        goto label_4afc78;
    }
    ctx->pc = 0x4AFC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AFC78u);
        ctx->pc = 0x4AFC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFC70u;
            // 0x4afc74: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AFC78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AFC78u; }
            if (ctx->pc != 0x4AFC78u) { return; }
        }
        }
    }
    ctx->pc = 0x4AFC78u;
label_4afc78:
    // 0x4afc78: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x4afc78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4afc7c:
    // 0x4afc7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4afc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4afc80:
    // 0x4afc80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4afc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4afc84:
    // 0x4afc84: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4afc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4afc88:
    // 0x4afc88: 0x320f809  jalr        $t9
label_4afc8c:
    if (ctx->pc == 0x4AFC8Cu) {
        ctx->pc = 0x4AFC8Cu;
            // 0x4afc8c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AFC90u;
        goto label_4afc90;
    }
    ctx->pc = 0x4AFC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AFC90u);
        ctx->pc = 0x4AFC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFC88u;
            // 0x4afc8c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AFC90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AFC90u; }
            if (ctx->pc != 0x4AFC90u) { return; }
        }
        }
    }
    ctx->pc = 0x4AFC90u;
label_4afc90:
    // 0x4afc90: 0xc0c0f64  jal         func_303D90
label_4afc94:
    if (ctx->pc == 0x4AFC94u) {
        ctx->pc = 0x4AFC94u;
            // 0x4afc94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AFC98u;
        goto label_4afc98;
    }
    ctx->pc = 0x4AFC90u;
    SET_GPR_U32(ctx, 31, 0x4AFC98u);
    ctx->pc = 0x4AFC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFC90u;
            // 0x4afc94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303D90u;
    if (runtime->hasFunction(0x303D90u)) {
        auto targetFn = runtime->lookupFunction(0x303D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFC98u; }
        if (ctx->pc != 0x4AFC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303D90_0x303d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFC98u; }
        if (ctx->pc != 0x4AFC98u) { return; }
    }
    ctx->pc = 0x4AFC98u;
label_4afc98:
    // 0x4afc98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4afc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4afc9c:
    // 0x4afc9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4afc9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4afca0:
    // 0x4afca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4afca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4afca4:
    // 0x4afca4: 0x3e00008  jr          $ra
label_4afca8:
    if (ctx->pc == 0x4AFCA8u) {
        ctx->pc = 0x4AFCA8u;
            // 0x4afca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4AFCACu;
        goto label_4afcac;
    }
    ctx->pc = 0x4AFCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFCA4u;
            // 0x4afca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AFCACu;
label_4afcac:
    // 0x4afcac: 0x0  nop
    ctx->pc = 0x4afcacu;
    // NOP
label_4afcb0:
    // 0x4afcb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4afcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4afcb4:
    // 0x4afcb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4afcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4afcb8:
    // 0x4afcb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4afcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4afcbc:
    // 0x4afcbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4afcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4afcc0:
    // 0x4afcc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4afcc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4afcc4:
    // 0x4afcc4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4afcc8:
    if (ctx->pc == 0x4AFCC8u) {
        ctx->pc = 0x4AFCC8u;
            // 0x4afcc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AFCCCu;
        goto label_4afccc;
    }
    ctx->pc = 0x4AFCC4u;
    {
        const bool branch_taken_0x4afcc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFCC4u;
            // 0x4afcc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afcc4) {
            ctx->pc = 0x4AFD20u;
            goto label_4afd20;
        }
    }
    ctx->pc = 0x4AFCCCu;
label_4afccc:
    // 0x4afccc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4afcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4afcd0:
    // 0x4afcd0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4afcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4afcd4:
    // 0x4afcd4: 0x24630660  addiu       $v1, $v1, 0x660
    ctx->pc = 0x4afcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1632));
label_4afcd8:
    // 0x4afcd8: 0x24420698  addiu       $v0, $v0, 0x698
    ctx->pc = 0x4afcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
label_4afcdc:
    // 0x4afcdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4afcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4afce0:
    // 0x4afce0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4afce4:
    if (ctx->pc == 0x4AFCE4u) {
        ctx->pc = 0x4AFCE4u;
            // 0x4afce4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4AFCE8u;
        goto label_4afce8;
    }
    ctx->pc = 0x4AFCE0u;
    {
        const bool branch_taken_0x4afce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFCE0u;
            // 0x4afce4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afce0) {
            ctx->pc = 0x4AFD08u;
            goto label_4afd08;
        }
    }
    ctx->pc = 0x4AFCE8u;
label_4afce8:
    // 0x4afce8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4afce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4afcec:
    // 0x4afcec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4afcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4afcf0:
    // 0x4afcf0: 0x24630eb0  addiu       $v1, $v1, 0xEB0
    ctx->pc = 0x4afcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3760));
label_4afcf4:
    // 0x4afcf4: 0x24420ee8  addiu       $v0, $v0, 0xEE8
    ctx->pc = 0x4afcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3816));
label_4afcf8:
    // 0x4afcf8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4afcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4afcfc:
    // 0x4afcfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4afcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4afd00:
    // 0x4afd00: 0xc0b149c  jal         func_2C5270
label_4afd04:
    if (ctx->pc == 0x4AFD04u) {
        ctx->pc = 0x4AFD04u;
            // 0x4afd04: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4AFD08u;
        goto label_4afd08;
    }
    ctx->pc = 0x4AFD00u;
    SET_GPR_U32(ctx, 31, 0x4AFD08u);
    ctx->pc = 0x4AFD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFD00u;
            // 0x4afd04: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5270u;
    if (runtime->hasFunction(0x2C5270u)) {
        auto targetFn = runtime->lookupFunction(0x2C5270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFD08u; }
        if (ctx->pc != 0x4AFD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5270_0x2c5270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFD08u; }
        if (ctx->pc != 0x4AFD08u) { return; }
    }
    ctx->pc = 0x4AFD08u;
label_4afd08:
    // 0x4afd08: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4afd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4afd0c:
    // 0x4afd0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4afd0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4afd10:
    // 0x4afd10: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4afd14:
    if (ctx->pc == 0x4AFD14u) {
        ctx->pc = 0x4AFD14u;
            // 0x4afd14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AFD18u;
        goto label_4afd18;
    }
    ctx->pc = 0x4AFD10u;
    {
        const bool branch_taken_0x4afd10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4afd10) {
            ctx->pc = 0x4AFD14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFD10u;
            // 0x4afd14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AFD24u;
            goto label_4afd24;
        }
    }
    ctx->pc = 0x4AFD18u;
label_4afd18:
    // 0x4afd18: 0xc0400a8  jal         func_1002A0
label_4afd1c:
    if (ctx->pc == 0x4AFD1Cu) {
        ctx->pc = 0x4AFD1Cu;
            // 0x4afd1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AFD20u;
        goto label_4afd20;
    }
    ctx->pc = 0x4AFD18u;
    SET_GPR_U32(ctx, 31, 0x4AFD20u);
    ctx->pc = 0x4AFD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFD18u;
            // 0x4afd1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFD20u; }
        if (ctx->pc != 0x4AFD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFD20u; }
        if (ctx->pc != 0x4AFD20u) { return; }
    }
    ctx->pc = 0x4AFD20u;
label_4afd20:
    // 0x4afd20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4afd20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4afd24:
    // 0x4afd24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4afd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4afd28:
    // 0x4afd28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4afd28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4afd2c:
    // 0x4afd2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4afd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4afd30:
    // 0x4afd30: 0x3e00008  jr          $ra
label_4afd34:
    if (ctx->pc == 0x4AFD34u) {
        ctx->pc = 0x4AFD34u;
            // 0x4afd34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4AFD38u;
        goto label_4afd38;
    }
    ctx->pc = 0x4AFD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFD30u;
            // 0x4afd34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AFD38u;
label_4afd38:
    // 0x4afd38: 0x0  nop
    ctx->pc = 0x4afd38u;
    // NOP
label_4afd3c:
    // 0x4afd3c: 0x0  nop
    ctx->pc = 0x4afd3cu;
    // NOP
label_4afd40:
    // 0x4afd40: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4afd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_4afd44:
    // 0x4afd44: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4afd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4afd48:
    // 0x4afd48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4afd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4afd4c:
    // 0x4afd4c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4afd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4afd50:
    // 0x4afd50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4afd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4afd54:
    // 0x4afd54: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4afd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4afd58:
    // 0x4afd58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4afd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4afd5c:
    // 0x4afd5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4afd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4afd60:
    // 0x4afd60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4afd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4afd64:
    // 0x4afd64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4afd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4afd68:
    // 0x4afd68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4afd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4afd6c:
    // 0x4afd6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4afd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4afd70:
    // 0x4afd70: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4afd70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4afd74:
    // 0x4afd74: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4afd74u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4afd78:
    // 0x4afd78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4afd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4afd7c:
    // 0x4afd7c: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_4afd80:
    if (ctx->pc == 0x4AFD80u) {
        ctx->pc = 0x4AFD80u;
            // 0x4afd80: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AFD84u;
        goto label_4afd84;
    }
    ctx->pc = 0x4AFD7Cu;
    {
        const bool branch_taken_0x4afd7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4AFD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFD7Cu;
            // 0x4afd80: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afd7c) {
            ctx->pc = 0x4AFDC0u;
            goto label_4afdc0;
        }
    }
    ctx->pc = 0x4AFD84u;
label_4afd84:
    // 0x4afd84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4afd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4afd88:
    // 0x4afd88: 0x10a30039  beq         $a1, $v1, . + 4 + (0x39 << 2)
label_4afd8c:
    if (ctx->pc == 0x4AFD8Cu) {
        ctx->pc = 0x4AFD90u;
        goto label_4afd90;
    }
    ctx->pc = 0x4AFD88u;
    {
        const bool branch_taken_0x4afd88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4afd88) {
            ctx->pc = 0x4AFE70u;
            goto label_4afe70;
        }
    }
    ctx->pc = 0x4AFD90u;
label_4afd90:
    // 0x4afd90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4afd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4afd94:
    // 0x4afd94: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4afd98:
    if (ctx->pc == 0x4AFD98u) {
        ctx->pc = 0x4AFD98u;
            // 0x4afd98: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4AFD9Cu;
        goto label_4afd9c;
    }
    ctx->pc = 0x4AFD94u;
    {
        const bool branch_taken_0x4afd94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4afd94) {
            ctx->pc = 0x4AFD98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFD94u;
            // 0x4afd98: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AFDA4u;
            goto label_4afda4;
        }
    }
    ctx->pc = 0x4AFD9Cu;
label_4afd9c:
    // 0x4afd9c: 0x10000034  b           . + 4 + (0x34 << 2)
label_4afda0:
    if (ctx->pc == 0x4AFDA0u) {
        ctx->pc = 0x4AFDA4u;
        goto label_4afda4;
    }
    ctx->pc = 0x4AFD9Cu;
    {
        const bool branch_taken_0x4afd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4afd9c) {
            ctx->pc = 0x4AFE70u;
            goto label_4afe70;
        }
    }
    ctx->pc = 0x4AFDA4u;
label_4afda4:
    // 0x4afda4: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x4afda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_4afda8:
    // 0x4afda8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4afda8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4afdac:
    // 0x4afdac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4afdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4afdb0:
    // 0x4afdb0: 0x320f809  jalr        $t9
label_4afdb4:
    if (ctx->pc == 0x4AFDB4u) {
        ctx->pc = 0x4AFDB4u;
            // 0x4afdb4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4AFDB8u;
        goto label_4afdb8;
    }
    ctx->pc = 0x4AFDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AFDB8u);
        ctx->pc = 0x4AFDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFDB0u;
            // 0x4afdb4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AFDB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AFDB8u; }
            if (ctx->pc != 0x4AFDB8u) { return; }
        }
        }
    }
    ctx->pc = 0x4AFDB8u;
label_4afdb8:
    // 0x4afdb8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_4afdbc:
    if (ctx->pc == 0x4AFDBCu) {
        ctx->pc = 0x4AFDC0u;
        goto label_4afdc0;
    }
    ctx->pc = 0x4AFDB8u;
    {
        const bool branch_taken_0x4afdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4afdb8) {
            ctx->pc = 0x4AFE70u;
            goto label_4afe70;
        }
    }
    ctx->pc = 0x4AFDC0u;
label_4afdc0:
    // 0x4afdc0: 0x8e740070  lw          $s4, 0x70($s3)
    ctx->pc = 0x4afdc0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_4afdc4:
    // 0x4afdc4: 0x1280002a  beqz        $s4, . + 4 + (0x2A << 2)
label_4afdc8:
    if (ctx->pc == 0x4AFDC8u) {
        ctx->pc = 0x4AFDCCu;
        goto label_4afdcc;
    }
    ctx->pc = 0x4AFDC4u;
    {
        const bool branch_taken_0x4afdc4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4afdc4) {
            ctx->pc = 0x4AFE70u;
            goto label_4afe70;
        }
    }
    ctx->pc = 0x4AFDCCu;
label_4afdcc:
    // 0x4afdcc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4afdccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4afdd0:
    // 0x4afdd0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4afdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4afdd4:
    // 0x4afdd4: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x4afdd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4afdd8:
    // 0x4afdd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4afdd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4afddc:
    // 0x4afddc: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x4afddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4afde0:
    // 0x4afde0: 0x26700084  addiu       $s0, $s3, 0x84
    ctx->pc = 0x4afde0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_4afde4:
    // 0x4afde4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4afde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4afde8:
    // 0x4afde8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4afde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4afdec:
    // 0x4afdec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4afdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4afdf0:
    // 0x4afdf0: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4afdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4afdf4:
    // 0x4afdf4: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x4afdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4afdf8:
    // 0x4afdf8: 0x8cb10130  lw          $s1, 0x130($a1)
    ctx->pc = 0x4afdf8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4afdfc:
    // 0x4afdfc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4afdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4afe00:
    // 0x4afe00: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x4afe00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_4afe04:
    // 0x4afe04: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x4afe04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_4afe08:
    // 0x4afe08: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x4afe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_4afe0c:
    // 0x4afe0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4afe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4afe10:
    // 0x4afe10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4afe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4afe14:
    // 0x4afe14: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4afe14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4afe18:
    // 0x4afe18: 0x24770010  addiu       $s7, $v1, 0x10
    ctx->pc = 0x4afe18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4afe1c:
    // 0x4afe1c: 0xc04e4a4  jal         func_139290
label_4afe20:
    if (ctx->pc == 0x4AFE20u) {
        ctx->pc = 0x4AFE20u;
            // 0x4afe20: 0x247e0050  addiu       $fp, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->pc = 0x4AFE24u;
        goto label_4afe24;
    }
    ctx->pc = 0x4AFE1Cu;
    SET_GPR_U32(ctx, 31, 0x4AFE24u);
    ctx->pc = 0x4AFE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFE1Cu;
            // 0x4afe20: 0x247e0050  addiu       $fp, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFE24u; }
        if (ctx->pc != 0x4AFE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFE24u; }
        if (ctx->pc != 0x4AFE24u) { return; }
    }
    ctx->pc = 0x4AFE24u;
label_4afe24:
    // 0x4afe24: 0xc04e738  jal         func_139CE0
label_4afe28:
    if (ctx->pc == 0x4AFE28u) {
        ctx->pc = 0x4AFE28u;
            // 0x4afe28: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x4AFE2Cu;
        goto label_4afe2c;
    }
    ctx->pc = 0x4AFE24u;
    SET_GPR_U32(ctx, 31, 0x4AFE2Cu);
    ctx->pc = 0x4AFE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFE24u;
            // 0x4afe28: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFE2Cu; }
        if (ctx->pc != 0x4AFE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFE2Cu; }
        if (ctx->pc != 0x4AFE2Cu) { return; }
    }
    ctx->pc = 0x4AFE2Cu;
label_4afe2c:
    // 0x4afe2c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4afe2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4afe30:
    // 0x4afe30: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4afe30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4afe34:
    // 0x4afe34: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4afe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4afe38:
    // 0x4afe38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4afe38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4afe3c:
    // 0x4afe3c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x4afe3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4afe40:
    // 0x4afe40: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4afe40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4afe44:
    // 0x4afe44: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x4afe44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4afe48:
    // 0x4afe48: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x4afe48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4afe4c:
    // 0x4afe4c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4afe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4afe50:
    // 0x4afe50: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x4afe50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4afe54:
    // 0x4afe54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4afe54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4afe58:
    // 0x4afe58: 0xc12bffc  jal         func_4AFFF0
label_4afe5c:
    if (ctx->pc == 0x4AFE5Cu) {
        ctx->pc = 0x4AFE5Cu;
            // 0x4afe5c: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AFE60u;
        goto label_4afe60;
    }
    ctx->pc = 0x4AFE58u;
    SET_GPR_U32(ctx, 31, 0x4AFE60u);
    ctx->pc = 0x4AFE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFE58u;
            // 0x4afe5c: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AFFF0u;
    if (runtime->hasFunction(0x4AFFF0u)) {
        auto targetFn = runtime->lookupFunction(0x4AFFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFE60u; }
        if (ctx->pc != 0x4AFE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AFFF0_0x4afff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AFE60u; }
        if (ctx->pc != 0x4AFE60u) { return; }
    }
    ctx->pc = 0x4AFE60u;
label_4afe60:
    // 0x4afe60: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4afe60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4afe64:
    // 0x4afe64: 0x2d4182b  sltu        $v1, $s6, $s4
    ctx->pc = 0x4afe64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4afe68:
    // 0x4afe68: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_4afe6c:
    if (ctx->pc == 0x4AFE6Cu) {
        ctx->pc = 0x4AFE6Cu;
            // 0x4afe6c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x4AFE70u;
        goto label_4afe70;
    }
    ctx->pc = 0x4AFE68u;
    {
        const bool branch_taken_0x4afe68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AFE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFE68u;
            // 0x4afe6c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afe68) {
            ctx->pc = 0x4AFE34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4afe34;
        }
    }
    ctx->pc = 0x4AFE70u;
label_4afe70:
    // 0x4afe70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4afe70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4afe74:
    // 0x4afe74: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4afe74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4afe78:
    // 0x4afe78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4afe78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4afe7c:
    // 0x4afe7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4afe7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4afe80:
    // 0x4afe80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4afe80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4afe84:
    // 0x4afe84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4afe84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4afe88:
    // 0x4afe88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4afe88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4afe8c:
    // 0x4afe8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4afe8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4afe90:
    // 0x4afe90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4afe90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4afe94:
    // 0x4afe94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4afe94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4afe98:
    // 0x4afe98: 0x3e00008  jr          $ra
label_4afe9c:
    if (ctx->pc == 0x4AFE9Cu) {
        ctx->pc = 0x4AFE9Cu;
            // 0x4afe9c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4AFEA0u;
        goto label_4afea0;
    }
    ctx->pc = 0x4AFE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFE98u;
            // 0x4afe9c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AFEA0u;
label_4afea0:
    // 0x4afea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4afea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4afea4:
    // 0x4afea4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4afea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4afea8:
    // 0x4afea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4afea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4afeac:
    // 0x4afeac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4afeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4afeb0:
    // 0x4afeb0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4afeb0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4afeb4:
    // 0x4afeb4: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4afeb8:
    if (ctx->pc == 0x4AFEB8u) {
        ctx->pc = 0x4AFEB8u;
            // 0x4afeb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AFEBCu;
        goto label_4afebc;
    }
    ctx->pc = 0x4AFEB4u;
    {
        const bool branch_taken_0x4afeb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4AFEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFEB4u;
            // 0x4afeb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afeb4) {
            ctx->pc = 0x4AFEE8u;
            goto label_4afee8;
        }
    }
    ctx->pc = 0x4AFEBCu;
label_4afebc:
    // 0x4afebc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4afebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4afec0:
    // 0x4afec0: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4afec4:
    if (ctx->pc == 0x4AFEC4u) {
        ctx->pc = 0x4AFEC4u;
            // 0x4afec4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4AFEC8u;
        goto label_4afec8;
    }
    ctx->pc = 0x4AFEC0u;
    {
        const bool branch_taken_0x4afec0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4afec0) {
            ctx->pc = 0x4AFEC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFEC0u;
            // 0x4afec4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AFEDCu;
            goto label_4afedc;
        }
    }
    ctx->pc = 0x4AFEC8u;
label_4afec8:
    // 0x4afec8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4afec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4afecc:
    // 0x4afecc: 0x50a30040  beql        $a1, $v1, . + 4 + (0x40 << 2)
label_4afed0:
    if (ctx->pc == 0x4AFED0u) {
        ctx->pc = 0x4AFED0u;
            // 0x4afed0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4AFED4u;
        goto label_4afed4;
    }
    ctx->pc = 0x4AFECCu;
    {
        const bool branch_taken_0x4afecc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4afecc) {
            ctx->pc = 0x4AFED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFECCu;
            // 0x4afed0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AFFD0u;
            goto label_4affd0;
        }
    }
    ctx->pc = 0x4AFED4u;
label_4afed4:
    // 0x4afed4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4afed8:
    if (ctx->pc == 0x4AFED8u) {
        ctx->pc = 0x4AFEDCu;
        goto label_4afedc;
    }
    ctx->pc = 0x4AFED4u;
    {
        const bool branch_taken_0x4afed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4afed4) {
            ctx->pc = 0x4AFFCCu;
            goto label_4affcc;
        }
    }
    ctx->pc = 0x4AFEDCu;
label_4afedc:
    // 0x4afedc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4afedcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4afee0:
    // 0x4afee0: 0x320f809  jalr        $t9
label_4afee4:
    if (ctx->pc == 0x4AFEE4u) {
        ctx->pc = 0x4AFEE8u;
        goto label_4afee8;
    }
    ctx->pc = 0x4AFEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AFEE8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AFEE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AFEE8u; }
            if (ctx->pc != 0x4AFEE8u) { return; }
        }
        }
    }
    ctx->pc = 0x4AFEE8u;
label_4afee8:
    // 0x4afee8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4afee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4afeec:
    // 0x4afeec: 0x26080084  addiu       $t0, $s0, 0x84
    ctx->pc = 0x4afeecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4afef0:
    // 0x4afef0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4afef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4afef4:
    // 0x4afef4: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x4afef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4afef8:
    // 0x4afef8: 0x2507000c  addiu       $a3, $t0, 0xC
    ctx->pc = 0x4afef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_4afefc:
    // 0x4afefc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4afefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4aff00:
    // 0x4aff00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4aff00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4aff04:
    // 0x4aff04: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x4aff04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_4aff08:
    // 0x4aff08: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x4aff08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_4aff0c:
    // 0x4aff0c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x4aff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4aff10:
    // 0x4aff10: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4aff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4aff14:
    // 0x4aff14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4aff14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4aff18:
    // 0x4aff18: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4aff1c:
    if (ctx->pc == 0x4AFF1Cu) {
        ctx->pc = 0x4AFF1Cu;
            // 0x4aff1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4AFF20u;
        goto label_4aff20;
    }
    ctx->pc = 0x4AFF18u;
    {
        const bool branch_taken_0x4aff18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AFF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFF18u;
            // 0x4aff1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aff18) {
            ctx->pc = 0x4AFF24u;
            goto label_4aff24;
        }
    }
    ctx->pc = 0x4AFF20u;
label_4aff20:
    // 0x4aff20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4aff20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aff24:
    // 0x4aff24: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_4aff28:
    if (ctx->pc == 0x4AFF28u) {
        ctx->pc = 0x4AFF28u;
            // 0x4aff28: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x4AFF2Cu;
        goto label_4aff2c;
    }
    ctx->pc = 0x4AFF24u;
    {
        const bool branch_taken_0x4aff24 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x4aff24) {
            ctx->pc = 0x4AFF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFF24u;
            // 0x4aff28: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AFF38u;
            goto label_4aff38;
        }
    }
    ctx->pc = 0x4AFF2Cu;
label_4aff2c:
    // 0x4aff2c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4aff2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4aff30:
    // 0x4aff30: 0x10000007  b           . + 4 + (0x7 << 2)
label_4aff34:
    if (ctx->pc == 0x4AFF34u) {
        ctx->pc = 0x4AFF34u;
            // 0x4aff34: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4AFF38u;
        goto label_4aff38;
    }
    ctx->pc = 0x4AFF30u;
    {
        const bool branch_taken_0x4aff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFF30u;
            // 0x4aff34: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aff30) {
            ctx->pc = 0x4AFF50u;
            goto label_4aff50;
        }
    }
    ctx->pc = 0x4AFF38u;
label_4aff38:
    // 0x4aff38: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x4aff38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_4aff3c:
    // 0x4aff3c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4aff3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4aff40:
    // 0x4aff40: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4aff40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4aff44:
    // 0x4aff44: 0x0  nop
    ctx->pc = 0x4aff44u;
    // NOP
label_4aff48:
    // 0x4aff48: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4aff48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4aff4c:
    // 0x4aff4c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4aff4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4aff50:
    // 0x4aff50: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x4aff50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4aff54:
    // 0x4aff54: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4aff54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4aff58:
    // 0x4aff58: 0x2506001c  addiu       $a2, $t0, 0x1C
    ctx->pc = 0x4aff58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
label_4aff5c:
    // 0x4aff5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4aff5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4aff60:
    // 0x4aff60: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x4aff60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_4aff64:
    // 0x4aff64: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4aff64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4aff68:
    // 0x4aff68: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x4aff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4aff6c:
    // 0x4aff6c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4aff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4aff70:
    // 0x4aff70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4aff70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4aff74:
    // 0x4aff74: 0xe500001c  swc1        $f0, 0x1C($t0)
    ctx->pc = 0x4aff74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
label_4aff78:
    // 0x4aff78: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x4aff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_4aff7c:
    // 0x4aff7c: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x4aff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4aff80:
    // 0x4aff80: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4aff80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4aff84:
    // 0x4aff84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4aff84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4aff88:
    // 0x4aff88: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4aff8c:
    if (ctx->pc == 0x4AFF8Cu) {
        ctx->pc = 0x4AFF8Cu;
            // 0x4aff8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4AFF90u;
        goto label_4aff90;
    }
    ctx->pc = 0x4AFF88u;
    {
        const bool branch_taken_0x4aff88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AFF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFF88u;
            // 0x4aff8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aff88) {
            ctx->pc = 0x4AFF94u;
            goto label_4aff94;
        }
    }
    ctx->pc = 0x4AFF90u;
label_4aff90:
    // 0x4aff90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4aff90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aff94:
    // 0x4aff94: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_4aff98:
    if (ctx->pc == 0x4AFF98u) {
        ctx->pc = 0x4AFF98u;
            // 0x4aff98: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x4AFF9Cu;
        goto label_4aff9c;
    }
    ctx->pc = 0x4AFF94u;
    {
        const bool branch_taken_0x4aff94 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x4aff94) {
            ctx->pc = 0x4AFF98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFF94u;
            // 0x4aff98: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AFFA8u;
            goto label_4affa8;
        }
    }
    ctx->pc = 0x4AFF9Cu;
label_4aff9c:
    // 0x4aff9c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4aff9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4affa0:
    // 0x4affa0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4affa4:
    if (ctx->pc == 0x4AFFA4u) {
        ctx->pc = 0x4AFFA4u;
            // 0x4affa4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4AFFA8u;
        goto label_4affa8;
    }
    ctx->pc = 0x4AFFA0u;
    {
        const bool branch_taken_0x4affa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFFA0u;
            // 0x4affa4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4affa0) {
            ctx->pc = 0x4AFFC0u;
            goto label_4affc0;
        }
    }
    ctx->pc = 0x4AFFA8u;
label_4affa8:
    // 0x4affa8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x4affa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_4affac:
    // 0x4affac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4affacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4affb0:
    // 0x4affb0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4affb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4affb4:
    // 0x4affb4: 0x0  nop
    ctx->pc = 0x4affb4u;
    // NOP
label_4affb8:
    // 0x4affb8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4affb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4affbc:
    // 0x4affbc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4affbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4affc0:
    // 0x4affc0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4affc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4affc4:
    // 0x4affc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4affc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4affc8:
    // 0x4affc8: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x4affc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_4affcc:
    // 0x4affcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4affccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4affd0:
    // 0x4affd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4affd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4affd4:
    // 0x4affd4: 0x3e00008  jr          $ra
label_4affd8:
    if (ctx->pc == 0x4AFFD8u) {
        ctx->pc = 0x4AFFD8u;
            // 0x4affd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4AFFDCu;
        goto label_4affdc;
    }
    ctx->pc = 0x4AFFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AFFD4u;
            // 0x4affd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AFFDCu;
label_4affdc:
    // 0x4affdc: 0x0  nop
    ctx->pc = 0x4affdcu;
    // NOP
label_4affe0:
    // 0x4affe0: 0x3e00008  jr          $ra
label_4affe4:
    if (ctx->pc == 0x4AFFE4u) {
        ctx->pc = 0x4AFFE8u;
        goto label_4affe8;
    }
    ctx->pc = 0x4AFFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AFFE8u;
label_4affe8:
    // 0x4affe8: 0x0  nop
    ctx->pc = 0x4affe8u;
    // NOP
label_4affec:
    // 0x4affec: 0x0  nop
    ctx->pc = 0x4affecu;
    // NOP
}
