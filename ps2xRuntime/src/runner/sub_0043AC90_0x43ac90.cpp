#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043AC90
// Address: 0x43ac90 - 0x43b300
void sub_0043AC90_0x43ac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043AC90_0x43ac90");
#endif

    switch (ctx->pc) {
        case 0x43ac90u: goto label_43ac90;
        case 0x43ac94u: goto label_43ac94;
        case 0x43ac98u: goto label_43ac98;
        case 0x43ac9cu: goto label_43ac9c;
        case 0x43aca0u: goto label_43aca0;
        case 0x43aca4u: goto label_43aca4;
        case 0x43aca8u: goto label_43aca8;
        case 0x43acacu: goto label_43acac;
        case 0x43acb0u: goto label_43acb0;
        case 0x43acb4u: goto label_43acb4;
        case 0x43acb8u: goto label_43acb8;
        case 0x43acbcu: goto label_43acbc;
        case 0x43acc0u: goto label_43acc0;
        case 0x43acc4u: goto label_43acc4;
        case 0x43acc8u: goto label_43acc8;
        case 0x43acccu: goto label_43accc;
        case 0x43acd0u: goto label_43acd0;
        case 0x43acd4u: goto label_43acd4;
        case 0x43acd8u: goto label_43acd8;
        case 0x43acdcu: goto label_43acdc;
        case 0x43ace0u: goto label_43ace0;
        case 0x43ace4u: goto label_43ace4;
        case 0x43ace8u: goto label_43ace8;
        case 0x43acecu: goto label_43acec;
        case 0x43acf0u: goto label_43acf0;
        case 0x43acf4u: goto label_43acf4;
        case 0x43acf8u: goto label_43acf8;
        case 0x43acfcu: goto label_43acfc;
        case 0x43ad00u: goto label_43ad00;
        case 0x43ad04u: goto label_43ad04;
        case 0x43ad08u: goto label_43ad08;
        case 0x43ad0cu: goto label_43ad0c;
        case 0x43ad10u: goto label_43ad10;
        case 0x43ad14u: goto label_43ad14;
        case 0x43ad18u: goto label_43ad18;
        case 0x43ad1cu: goto label_43ad1c;
        case 0x43ad20u: goto label_43ad20;
        case 0x43ad24u: goto label_43ad24;
        case 0x43ad28u: goto label_43ad28;
        case 0x43ad2cu: goto label_43ad2c;
        case 0x43ad30u: goto label_43ad30;
        case 0x43ad34u: goto label_43ad34;
        case 0x43ad38u: goto label_43ad38;
        case 0x43ad3cu: goto label_43ad3c;
        case 0x43ad40u: goto label_43ad40;
        case 0x43ad44u: goto label_43ad44;
        case 0x43ad48u: goto label_43ad48;
        case 0x43ad4cu: goto label_43ad4c;
        case 0x43ad50u: goto label_43ad50;
        case 0x43ad54u: goto label_43ad54;
        case 0x43ad58u: goto label_43ad58;
        case 0x43ad5cu: goto label_43ad5c;
        case 0x43ad60u: goto label_43ad60;
        case 0x43ad64u: goto label_43ad64;
        case 0x43ad68u: goto label_43ad68;
        case 0x43ad6cu: goto label_43ad6c;
        case 0x43ad70u: goto label_43ad70;
        case 0x43ad74u: goto label_43ad74;
        case 0x43ad78u: goto label_43ad78;
        case 0x43ad7cu: goto label_43ad7c;
        case 0x43ad80u: goto label_43ad80;
        case 0x43ad84u: goto label_43ad84;
        case 0x43ad88u: goto label_43ad88;
        case 0x43ad8cu: goto label_43ad8c;
        case 0x43ad90u: goto label_43ad90;
        case 0x43ad94u: goto label_43ad94;
        case 0x43ad98u: goto label_43ad98;
        case 0x43ad9cu: goto label_43ad9c;
        case 0x43ada0u: goto label_43ada0;
        case 0x43ada4u: goto label_43ada4;
        case 0x43ada8u: goto label_43ada8;
        case 0x43adacu: goto label_43adac;
        case 0x43adb0u: goto label_43adb0;
        case 0x43adb4u: goto label_43adb4;
        case 0x43adb8u: goto label_43adb8;
        case 0x43adbcu: goto label_43adbc;
        case 0x43adc0u: goto label_43adc0;
        case 0x43adc4u: goto label_43adc4;
        case 0x43adc8u: goto label_43adc8;
        case 0x43adccu: goto label_43adcc;
        case 0x43add0u: goto label_43add0;
        case 0x43add4u: goto label_43add4;
        case 0x43add8u: goto label_43add8;
        case 0x43addcu: goto label_43addc;
        case 0x43ade0u: goto label_43ade0;
        case 0x43ade4u: goto label_43ade4;
        case 0x43ade8u: goto label_43ade8;
        case 0x43adecu: goto label_43adec;
        case 0x43adf0u: goto label_43adf0;
        case 0x43adf4u: goto label_43adf4;
        case 0x43adf8u: goto label_43adf8;
        case 0x43adfcu: goto label_43adfc;
        case 0x43ae00u: goto label_43ae00;
        case 0x43ae04u: goto label_43ae04;
        case 0x43ae08u: goto label_43ae08;
        case 0x43ae0cu: goto label_43ae0c;
        case 0x43ae10u: goto label_43ae10;
        case 0x43ae14u: goto label_43ae14;
        case 0x43ae18u: goto label_43ae18;
        case 0x43ae1cu: goto label_43ae1c;
        case 0x43ae20u: goto label_43ae20;
        case 0x43ae24u: goto label_43ae24;
        case 0x43ae28u: goto label_43ae28;
        case 0x43ae2cu: goto label_43ae2c;
        case 0x43ae30u: goto label_43ae30;
        case 0x43ae34u: goto label_43ae34;
        case 0x43ae38u: goto label_43ae38;
        case 0x43ae3cu: goto label_43ae3c;
        case 0x43ae40u: goto label_43ae40;
        case 0x43ae44u: goto label_43ae44;
        case 0x43ae48u: goto label_43ae48;
        case 0x43ae4cu: goto label_43ae4c;
        case 0x43ae50u: goto label_43ae50;
        case 0x43ae54u: goto label_43ae54;
        case 0x43ae58u: goto label_43ae58;
        case 0x43ae5cu: goto label_43ae5c;
        case 0x43ae60u: goto label_43ae60;
        case 0x43ae64u: goto label_43ae64;
        case 0x43ae68u: goto label_43ae68;
        case 0x43ae6cu: goto label_43ae6c;
        case 0x43ae70u: goto label_43ae70;
        case 0x43ae74u: goto label_43ae74;
        case 0x43ae78u: goto label_43ae78;
        case 0x43ae7cu: goto label_43ae7c;
        case 0x43ae80u: goto label_43ae80;
        case 0x43ae84u: goto label_43ae84;
        case 0x43ae88u: goto label_43ae88;
        case 0x43ae8cu: goto label_43ae8c;
        case 0x43ae90u: goto label_43ae90;
        case 0x43ae94u: goto label_43ae94;
        case 0x43ae98u: goto label_43ae98;
        case 0x43ae9cu: goto label_43ae9c;
        case 0x43aea0u: goto label_43aea0;
        case 0x43aea4u: goto label_43aea4;
        case 0x43aea8u: goto label_43aea8;
        case 0x43aeacu: goto label_43aeac;
        case 0x43aeb0u: goto label_43aeb0;
        case 0x43aeb4u: goto label_43aeb4;
        case 0x43aeb8u: goto label_43aeb8;
        case 0x43aebcu: goto label_43aebc;
        case 0x43aec0u: goto label_43aec0;
        case 0x43aec4u: goto label_43aec4;
        case 0x43aec8u: goto label_43aec8;
        case 0x43aeccu: goto label_43aecc;
        case 0x43aed0u: goto label_43aed0;
        case 0x43aed4u: goto label_43aed4;
        case 0x43aed8u: goto label_43aed8;
        case 0x43aedcu: goto label_43aedc;
        case 0x43aee0u: goto label_43aee0;
        case 0x43aee4u: goto label_43aee4;
        case 0x43aee8u: goto label_43aee8;
        case 0x43aeecu: goto label_43aeec;
        case 0x43aef0u: goto label_43aef0;
        case 0x43aef4u: goto label_43aef4;
        case 0x43aef8u: goto label_43aef8;
        case 0x43aefcu: goto label_43aefc;
        case 0x43af00u: goto label_43af00;
        case 0x43af04u: goto label_43af04;
        case 0x43af08u: goto label_43af08;
        case 0x43af0cu: goto label_43af0c;
        case 0x43af10u: goto label_43af10;
        case 0x43af14u: goto label_43af14;
        case 0x43af18u: goto label_43af18;
        case 0x43af1cu: goto label_43af1c;
        case 0x43af20u: goto label_43af20;
        case 0x43af24u: goto label_43af24;
        case 0x43af28u: goto label_43af28;
        case 0x43af2cu: goto label_43af2c;
        case 0x43af30u: goto label_43af30;
        case 0x43af34u: goto label_43af34;
        case 0x43af38u: goto label_43af38;
        case 0x43af3cu: goto label_43af3c;
        case 0x43af40u: goto label_43af40;
        case 0x43af44u: goto label_43af44;
        case 0x43af48u: goto label_43af48;
        case 0x43af4cu: goto label_43af4c;
        case 0x43af50u: goto label_43af50;
        case 0x43af54u: goto label_43af54;
        case 0x43af58u: goto label_43af58;
        case 0x43af5cu: goto label_43af5c;
        case 0x43af60u: goto label_43af60;
        case 0x43af64u: goto label_43af64;
        case 0x43af68u: goto label_43af68;
        case 0x43af6cu: goto label_43af6c;
        case 0x43af70u: goto label_43af70;
        case 0x43af74u: goto label_43af74;
        case 0x43af78u: goto label_43af78;
        case 0x43af7cu: goto label_43af7c;
        case 0x43af80u: goto label_43af80;
        case 0x43af84u: goto label_43af84;
        case 0x43af88u: goto label_43af88;
        case 0x43af8cu: goto label_43af8c;
        case 0x43af90u: goto label_43af90;
        case 0x43af94u: goto label_43af94;
        case 0x43af98u: goto label_43af98;
        case 0x43af9cu: goto label_43af9c;
        case 0x43afa0u: goto label_43afa0;
        case 0x43afa4u: goto label_43afa4;
        case 0x43afa8u: goto label_43afa8;
        case 0x43afacu: goto label_43afac;
        case 0x43afb0u: goto label_43afb0;
        case 0x43afb4u: goto label_43afb4;
        case 0x43afb8u: goto label_43afb8;
        case 0x43afbcu: goto label_43afbc;
        case 0x43afc0u: goto label_43afc0;
        case 0x43afc4u: goto label_43afc4;
        case 0x43afc8u: goto label_43afc8;
        case 0x43afccu: goto label_43afcc;
        case 0x43afd0u: goto label_43afd0;
        case 0x43afd4u: goto label_43afd4;
        case 0x43afd8u: goto label_43afd8;
        case 0x43afdcu: goto label_43afdc;
        case 0x43afe0u: goto label_43afe0;
        case 0x43afe4u: goto label_43afe4;
        case 0x43afe8u: goto label_43afe8;
        case 0x43afecu: goto label_43afec;
        case 0x43aff0u: goto label_43aff0;
        case 0x43aff4u: goto label_43aff4;
        case 0x43aff8u: goto label_43aff8;
        case 0x43affcu: goto label_43affc;
        case 0x43b000u: goto label_43b000;
        case 0x43b004u: goto label_43b004;
        case 0x43b008u: goto label_43b008;
        case 0x43b00cu: goto label_43b00c;
        case 0x43b010u: goto label_43b010;
        case 0x43b014u: goto label_43b014;
        case 0x43b018u: goto label_43b018;
        case 0x43b01cu: goto label_43b01c;
        case 0x43b020u: goto label_43b020;
        case 0x43b024u: goto label_43b024;
        case 0x43b028u: goto label_43b028;
        case 0x43b02cu: goto label_43b02c;
        case 0x43b030u: goto label_43b030;
        case 0x43b034u: goto label_43b034;
        case 0x43b038u: goto label_43b038;
        case 0x43b03cu: goto label_43b03c;
        case 0x43b040u: goto label_43b040;
        case 0x43b044u: goto label_43b044;
        case 0x43b048u: goto label_43b048;
        case 0x43b04cu: goto label_43b04c;
        case 0x43b050u: goto label_43b050;
        case 0x43b054u: goto label_43b054;
        case 0x43b058u: goto label_43b058;
        case 0x43b05cu: goto label_43b05c;
        case 0x43b060u: goto label_43b060;
        case 0x43b064u: goto label_43b064;
        case 0x43b068u: goto label_43b068;
        case 0x43b06cu: goto label_43b06c;
        case 0x43b070u: goto label_43b070;
        case 0x43b074u: goto label_43b074;
        case 0x43b078u: goto label_43b078;
        case 0x43b07cu: goto label_43b07c;
        case 0x43b080u: goto label_43b080;
        case 0x43b084u: goto label_43b084;
        case 0x43b088u: goto label_43b088;
        case 0x43b08cu: goto label_43b08c;
        case 0x43b090u: goto label_43b090;
        case 0x43b094u: goto label_43b094;
        case 0x43b098u: goto label_43b098;
        case 0x43b09cu: goto label_43b09c;
        case 0x43b0a0u: goto label_43b0a0;
        case 0x43b0a4u: goto label_43b0a4;
        case 0x43b0a8u: goto label_43b0a8;
        case 0x43b0acu: goto label_43b0ac;
        case 0x43b0b0u: goto label_43b0b0;
        case 0x43b0b4u: goto label_43b0b4;
        case 0x43b0b8u: goto label_43b0b8;
        case 0x43b0bcu: goto label_43b0bc;
        case 0x43b0c0u: goto label_43b0c0;
        case 0x43b0c4u: goto label_43b0c4;
        case 0x43b0c8u: goto label_43b0c8;
        case 0x43b0ccu: goto label_43b0cc;
        case 0x43b0d0u: goto label_43b0d0;
        case 0x43b0d4u: goto label_43b0d4;
        case 0x43b0d8u: goto label_43b0d8;
        case 0x43b0dcu: goto label_43b0dc;
        case 0x43b0e0u: goto label_43b0e0;
        case 0x43b0e4u: goto label_43b0e4;
        case 0x43b0e8u: goto label_43b0e8;
        case 0x43b0ecu: goto label_43b0ec;
        case 0x43b0f0u: goto label_43b0f0;
        case 0x43b0f4u: goto label_43b0f4;
        case 0x43b0f8u: goto label_43b0f8;
        case 0x43b0fcu: goto label_43b0fc;
        case 0x43b100u: goto label_43b100;
        case 0x43b104u: goto label_43b104;
        case 0x43b108u: goto label_43b108;
        case 0x43b10cu: goto label_43b10c;
        case 0x43b110u: goto label_43b110;
        case 0x43b114u: goto label_43b114;
        case 0x43b118u: goto label_43b118;
        case 0x43b11cu: goto label_43b11c;
        case 0x43b120u: goto label_43b120;
        case 0x43b124u: goto label_43b124;
        case 0x43b128u: goto label_43b128;
        case 0x43b12cu: goto label_43b12c;
        case 0x43b130u: goto label_43b130;
        case 0x43b134u: goto label_43b134;
        case 0x43b138u: goto label_43b138;
        case 0x43b13cu: goto label_43b13c;
        case 0x43b140u: goto label_43b140;
        case 0x43b144u: goto label_43b144;
        case 0x43b148u: goto label_43b148;
        case 0x43b14cu: goto label_43b14c;
        case 0x43b150u: goto label_43b150;
        case 0x43b154u: goto label_43b154;
        case 0x43b158u: goto label_43b158;
        case 0x43b15cu: goto label_43b15c;
        case 0x43b160u: goto label_43b160;
        case 0x43b164u: goto label_43b164;
        case 0x43b168u: goto label_43b168;
        case 0x43b16cu: goto label_43b16c;
        case 0x43b170u: goto label_43b170;
        case 0x43b174u: goto label_43b174;
        case 0x43b178u: goto label_43b178;
        case 0x43b17cu: goto label_43b17c;
        case 0x43b180u: goto label_43b180;
        case 0x43b184u: goto label_43b184;
        case 0x43b188u: goto label_43b188;
        case 0x43b18cu: goto label_43b18c;
        case 0x43b190u: goto label_43b190;
        case 0x43b194u: goto label_43b194;
        case 0x43b198u: goto label_43b198;
        case 0x43b19cu: goto label_43b19c;
        case 0x43b1a0u: goto label_43b1a0;
        case 0x43b1a4u: goto label_43b1a4;
        case 0x43b1a8u: goto label_43b1a8;
        case 0x43b1acu: goto label_43b1ac;
        case 0x43b1b0u: goto label_43b1b0;
        case 0x43b1b4u: goto label_43b1b4;
        case 0x43b1b8u: goto label_43b1b8;
        case 0x43b1bcu: goto label_43b1bc;
        case 0x43b1c0u: goto label_43b1c0;
        case 0x43b1c4u: goto label_43b1c4;
        case 0x43b1c8u: goto label_43b1c8;
        case 0x43b1ccu: goto label_43b1cc;
        case 0x43b1d0u: goto label_43b1d0;
        case 0x43b1d4u: goto label_43b1d4;
        case 0x43b1d8u: goto label_43b1d8;
        case 0x43b1dcu: goto label_43b1dc;
        case 0x43b1e0u: goto label_43b1e0;
        case 0x43b1e4u: goto label_43b1e4;
        case 0x43b1e8u: goto label_43b1e8;
        case 0x43b1ecu: goto label_43b1ec;
        case 0x43b1f0u: goto label_43b1f0;
        case 0x43b1f4u: goto label_43b1f4;
        case 0x43b1f8u: goto label_43b1f8;
        case 0x43b1fcu: goto label_43b1fc;
        case 0x43b200u: goto label_43b200;
        case 0x43b204u: goto label_43b204;
        case 0x43b208u: goto label_43b208;
        case 0x43b20cu: goto label_43b20c;
        case 0x43b210u: goto label_43b210;
        case 0x43b214u: goto label_43b214;
        case 0x43b218u: goto label_43b218;
        case 0x43b21cu: goto label_43b21c;
        case 0x43b220u: goto label_43b220;
        case 0x43b224u: goto label_43b224;
        case 0x43b228u: goto label_43b228;
        case 0x43b22cu: goto label_43b22c;
        case 0x43b230u: goto label_43b230;
        case 0x43b234u: goto label_43b234;
        case 0x43b238u: goto label_43b238;
        case 0x43b23cu: goto label_43b23c;
        case 0x43b240u: goto label_43b240;
        case 0x43b244u: goto label_43b244;
        case 0x43b248u: goto label_43b248;
        case 0x43b24cu: goto label_43b24c;
        case 0x43b250u: goto label_43b250;
        case 0x43b254u: goto label_43b254;
        case 0x43b258u: goto label_43b258;
        case 0x43b25cu: goto label_43b25c;
        case 0x43b260u: goto label_43b260;
        case 0x43b264u: goto label_43b264;
        case 0x43b268u: goto label_43b268;
        case 0x43b26cu: goto label_43b26c;
        case 0x43b270u: goto label_43b270;
        case 0x43b274u: goto label_43b274;
        case 0x43b278u: goto label_43b278;
        case 0x43b27cu: goto label_43b27c;
        case 0x43b280u: goto label_43b280;
        case 0x43b284u: goto label_43b284;
        case 0x43b288u: goto label_43b288;
        case 0x43b28cu: goto label_43b28c;
        case 0x43b290u: goto label_43b290;
        case 0x43b294u: goto label_43b294;
        case 0x43b298u: goto label_43b298;
        case 0x43b29cu: goto label_43b29c;
        case 0x43b2a0u: goto label_43b2a0;
        case 0x43b2a4u: goto label_43b2a4;
        case 0x43b2a8u: goto label_43b2a8;
        case 0x43b2acu: goto label_43b2ac;
        case 0x43b2b0u: goto label_43b2b0;
        case 0x43b2b4u: goto label_43b2b4;
        case 0x43b2b8u: goto label_43b2b8;
        case 0x43b2bcu: goto label_43b2bc;
        case 0x43b2c0u: goto label_43b2c0;
        case 0x43b2c4u: goto label_43b2c4;
        case 0x43b2c8u: goto label_43b2c8;
        case 0x43b2ccu: goto label_43b2cc;
        case 0x43b2d0u: goto label_43b2d0;
        case 0x43b2d4u: goto label_43b2d4;
        case 0x43b2d8u: goto label_43b2d8;
        case 0x43b2dcu: goto label_43b2dc;
        case 0x43b2e0u: goto label_43b2e0;
        case 0x43b2e4u: goto label_43b2e4;
        case 0x43b2e8u: goto label_43b2e8;
        case 0x43b2ecu: goto label_43b2ec;
        case 0x43b2f0u: goto label_43b2f0;
        case 0x43b2f4u: goto label_43b2f4;
        case 0x43b2f8u: goto label_43b2f8;
        case 0x43b2fcu: goto label_43b2fc;
        default: break;
    }

    ctx->pc = 0x43ac90u;

label_43ac90:
    // 0x43ac90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43ac94:
    // 0x43ac94: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43ac98:
    // 0x43ac98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43ac9c:
    // 0x43ac9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43aca0:
    // 0x43aca0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43aca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43aca4:
    // 0x43aca4: 0x244221e0  addiu       $v0, $v0, 0x21E0
    ctx->pc = 0x43aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8672));
label_43aca8:
    // 0x43aca8: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x43aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
label_43acac:
    // 0x43acac: 0x3c07c000  lui         $a3, 0xC000
    ctx->pc = 0x43acacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49152 << 16));
label_43acb0:
    // 0x43acb0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x43acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_43acb4:
    // 0x43acb4: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x43acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_43acb8:
    // 0x43acb8: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x43acb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
label_43acbc:
    // 0x43acbc: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x43acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_43acc0:
    // 0x43acc0: 0xac870028  sw          $a3, 0x28($a0)
    ctx->pc = 0x43acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 7));
label_43acc4:
    // 0x43acc4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x43acc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_43acc8:
    // 0x43acc8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x43acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_43accc:
    // 0x43accc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43acccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43acd0:
    // 0x43acd0: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x43acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_43acd4:
    // 0x43acd4: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x43acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_43acd8:
    // 0x43acd8: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x43acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_43acdc:
    // 0x43acdc: 0xac86003c  sw          $a2, 0x3C($a0)
    ctx->pc = 0x43acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 6));
label_43ace0:
    // 0x43ace0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x43ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
label_43ace4:
    // 0x43ace4: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x43ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_43ace8:
    // 0x43ace8: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x43ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
label_43acec:
    // 0x43acec: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x43acecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_43acf0:
    // 0x43acf0: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x43acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
label_43acf4:
    // 0x43acf4: 0xc04c968  jal         func_1325A0
label_43acf8:
    if (ctx->pc == 0x43ACF8u) {
        ctx->pc = 0x43ACF8u;
            // 0x43acf8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x43ACFCu;
        goto label_43acfc;
    }
    ctx->pc = 0x43ACF4u;
    SET_GPR_U32(ctx, 31, 0x43ACFCu);
    ctx->pc = 0x43ACF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43ACF4u;
            // 0x43acf8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43ACFCu; }
        if (ctx->pc != 0x43ACFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43ACFCu; }
        if (ctx->pc != 0x43ACFCu) { return; }
    }
    ctx->pc = 0x43ACFCu;
label_43acfc:
    // 0x43acfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43acfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43ad00:
    // 0x43ad00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43ad00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43ad04:
    // 0x43ad04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43ad04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43ad08:
    // 0x43ad08: 0x3e00008  jr          $ra
label_43ad0c:
    if (ctx->pc == 0x43AD0Cu) {
        ctx->pc = 0x43AD0Cu;
            // 0x43ad0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43AD10u;
        goto label_43ad10;
    }
    ctx->pc = 0x43AD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43AD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43AD08u;
            // 0x43ad0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43AD10u;
label_43ad10:
    // 0x43ad10: 0x3e00008  jr          $ra
label_43ad14:
    if (ctx->pc == 0x43AD14u) {
        ctx->pc = 0x43AD18u;
        goto label_43ad18;
    }
    ctx->pc = 0x43AD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43AD18u;
label_43ad18:
    // 0x43ad18: 0x0  nop
    ctx->pc = 0x43ad18u;
    // NOP
label_43ad1c:
    // 0x43ad1c: 0x0  nop
    ctx->pc = 0x43ad1cu;
    // NOP
label_43ad20:
    // 0x43ad20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x43ad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_43ad24:
    // 0x43ad24: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x43ad24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_43ad28:
    // 0x43ad28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43ad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43ad2c:
    // 0x43ad2c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x43ad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_43ad30:
    // 0x43ad30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x43ad30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_43ad34:
    // 0x43ad34: 0x24c6d080  addiu       $a2, $a2, -0x2F80
    ctx->pc = 0x43ad34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955136));
label_43ad38:
    // 0x43ad38: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x43ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43ad3c:
    // 0x43ad3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43ad3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43ad40:
    // 0x43ad40: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x43ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43ad44:
    // 0x43ad44: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x43ad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43ad48:
    // 0x43ad48: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x43ad48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_43ad4c:
    // 0x43ad4c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x43ad4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_43ad50:
    // 0x43ad50: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x43ad50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_43ad54:
    // 0x43ad54: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x43ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43ad58:
    // 0x43ad58: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x43ad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43ad5c:
    // 0x43ad5c: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x43ad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43ad60:
    // 0x43ad60: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x43ad60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_43ad64:
    // 0x43ad64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x43ad64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43ad68:
    // 0x43ad68: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x43ad68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_43ad6c:
    // 0x43ad6c: 0xc04cafc  jal         func_132BF0
label_43ad70:
    if (ctx->pc == 0x43AD70u) {
        ctx->pc = 0x43AD70u;
            // 0x43ad70: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x43AD74u;
        goto label_43ad74;
    }
    ctx->pc = 0x43AD6Cu;
    SET_GPR_U32(ctx, 31, 0x43AD74u);
    ctx->pc = 0x43AD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43AD6Cu;
            // 0x43ad70: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AD74u; }
        if (ctx->pc != 0x43AD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AD74u; }
        if (ctx->pc != 0x43AD74u) { return; }
    }
    ctx->pc = 0x43AD74u;
label_43ad74:
    // 0x43ad74: 0xc040180  jal         func_100600
label_43ad78:
    if (ctx->pc == 0x43AD78u) {
        ctx->pc = 0x43AD78u;
            // 0x43ad78: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x43AD7Cu;
        goto label_43ad7c;
    }
    ctx->pc = 0x43AD74u;
    SET_GPR_U32(ctx, 31, 0x43AD7Cu);
    ctx->pc = 0x43AD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43AD74u;
            // 0x43ad78: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AD7Cu; }
        if (ctx->pc != 0x43AD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AD7Cu; }
        if (ctx->pc != 0x43AD7Cu) { return; }
    }
    ctx->pc = 0x43AD7Cu;
label_43ad7c:
    // 0x43ad7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43ad7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43ad80:
    // 0x43ad80: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
label_43ad84:
    if (ctx->pc == 0x43AD84u) {
        ctx->pc = 0x43AD84u;
            // 0x43ad84: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x43AD88u;
        goto label_43ad88;
    }
    ctx->pc = 0x43AD80u;
    {
        const bool branch_taken_0x43ad80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ad80) {
            ctx->pc = 0x43AD84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43AD80u;
            // 0x43ad84: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43AE2Cu;
            goto label_43ae2c;
        }
    }
    ctx->pc = 0x43AD88u;
label_43ad88:
    // 0x43ad88: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x43ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_43ad8c:
    // 0x43ad8c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x43ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_43ad90:
    // 0x43ad90: 0xc441d0c0  lwc1        $f1, -0x2F40($v0)
    ctx->pc = 0x43ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43ad94:
    // 0x43ad94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x43ad94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43ad98:
    // 0x43ad98: 0x0  nop
    ctx->pc = 0x43ad98u;
    // NOP
label_43ad9c:
    // 0x43ad9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x43ad9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43ada0:
    // 0x43ada0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_43ada4:
    if (ctx->pc == 0x43ADA4u) {
        ctx->pc = 0x43ADA4u;
            // 0x43ada4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x43ADA8u;
        goto label_43ada8;
    }
    ctx->pc = 0x43ADA0u;
    {
        const bool branch_taken_0x43ada0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x43ada0) {
            ctx->pc = 0x43ADA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43ADA0u;
            // 0x43ada4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x43ADB8u;
            goto label_43adb8;
        }
    }
    ctx->pc = 0x43ADA8u;
label_43ada8:
    // 0x43ada8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43ada8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_43adac:
    // 0x43adac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x43adacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_43adb0:
    // 0x43adb0: 0x10000006  b           . + 4 + (0x6 << 2)
label_43adb4:
    if (ctx->pc == 0x43ADB4u) {
        ctx->pc = 0x43ADB8u;
        goto label_43adb8;
    }
    ctx->pc = 0x43ADB0u;
    {
        const bool branch_taken_0x43adb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43adb0) {
            ctx->pc = 0x43ADCCu;
            goto label_43adcc;
        }
    }
    ctx->pc = 0x43ADB8u;
label_43adb8:
    // 0x43adb8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x43adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_43adbc:
    // 0x43adbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43adbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_43adc0:
    // 0x43adc0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x43adc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_43adc4:
    // 0x43adc4: 0x0  nop
    ctx->pc = 0x43adc4u;
    // NOP
label_43adc8:
    // 0x43adc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43adc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_43adcc:
    // 0x43adcc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x43adccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_43add0:
    // 0x43add0: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x43add0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
label_43add4:
    // 0x43add4: 0x2442d090  addiu       $v0, $v0, -0x2F70
    ctx->pc = 0x43add4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955152));
label_43add8:
    // 0x43add8: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x43add8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_43addc:
    // 0x43addc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x43addcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_43ade0:
    // 0x43ade0: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x43ade0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_43ade4:
    // 0x43ade4: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x43ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_43ade8:
    // 0x43ade8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x43ade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_43adec:
    // 0x43adec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43adecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43adf0:
    // 0x43adf0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x43adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_43adf4:
    // 0x43adf4: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x43adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_43adf8:
    // 0x43adf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x43adf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43adfc:
    // 0x43adfc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x43adfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_43ae00:
    // 0x43ae00: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x43ae00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_43ae04:
    // 0x43ae04: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x43ae04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_43ae08:
    // 0x43ae08: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x43ae08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43ae0c:
    // 0x43ae0c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x43ae0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_43ae10:
    // 0x43ae10: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x43ae10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_43ae14:
    // 0x43ae14: 0x2529d0a0  addiu       $t1, $t1, -0x2F60
    ctx->pc = 0x43ae14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294955168));
label_43ae18:
    // 0x43ae18: 0x254ad0b0  addiu       $t2, $t2, -0x2F50
    ctx->pc = 0x43ae18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955184));
label_43ae1c:
    // 0x43ae1c: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x43ae1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_43ae20:
    // 0x43ae20: 0xc0db488  jal         func_36D220
label_43ae24:
    if (ctx->pc == 0x43AE24u) {
        ctx->pc = 0x43AE24u;
            // 0x43ae24: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x43AE28u;
        goto label_43ae28;
    }
    ctx->pc = 0x43AE20u;
    SET_GPR_U32(ctx, 31, 0x43AE28u);
    ctx->pc = 0x43AE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43AE20u;
            // 0x43ae24: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AE28u; }
        if (ctx->pc != 0x43AE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AE28u; }
        if (ctx->pc != 0x43AE28u) { return; }
    }
    ctx->pc = 0x43AE28u;
label_43ae28:
    // 0x43ae28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43ae28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43ae2c:
    // 0x43ae2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x43ae2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43ae30:
    // 0x43ae30: 0x3e00008  jr          $ra
label_43ae34:
    if (ctx->pc == 0x43AE34u) {
        ctx->pc = 0x43AE34u;
            // 0x43ae34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x43AE38u;
        goto label_43ae38;
    }
    ctx->pc = 0x43AE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43AE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43AE30u;
            // 0x43ae34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43AE38u;
label_43ae38:
    // 0x43ae38: 0x0  nop
    ctx->pc = 0x43ae38u;
    // NOP
label_43ae3c:
    // 0x43ae3c: 0x0  nop
    ctx->pc = 0x43ae3cu;
    // NOP
label_43ae40:
    // 0x43ae40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43ae44:
    // 0x43ae44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43ae44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43ae48:
    // 0x43ae48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43ae48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43ae4c:
    // 0x43ae4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43ae4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43ae50:
    // 0x43ae50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43ae50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43ae54:
    // 0x43ae54: 0xc0ba938  jal         func_2EA4E0
label_43ae58:
    if (ctx->pc == 0x43AE58u) {
        ctx->pc = 0x43AE58u;
            // 0x43ae58: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x43AE5Cu;
        goto label_43ae5c;
    }
    ctx->pc = 0x43AE54u;
    SET_GPR_U32(ctx, 31, 0x43AE5Cu);
    ctx->pc = 0x43AE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43AE54u;
            // 0x43ae58: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AE5Cu; }
        if (ctx->pc != 0x43AE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AE5Cu; }
        if (ctx->pc != 0x43AE5Cu) { return; }
    }
    ctx->pc = 0x43AE5Cu;
label_43ae5c:
    // 0x43ae5c: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x43ae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_43ae60:
    // 0x43ae60: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x43ae60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_43ae64:
    // 0x43ae64: 0xc122d2c  jal         func_48B4B0
label_43ae68:
    if (ctx->pc == 0x43AE68u) {
        ctx->pc = 0x43AE68u;
            // 0x43ae68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43AE6Cu;
        goto label_43ae6c;
    }
    ctx->pc = 0x43AE64u;
    SET_GPR_U32(ctx, 31, 0x43AE6Cu);
    ctx->pc = 0x43AE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43AE64u;
            // 0x43ae68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AE6Cu; }
        if (ctx->pc != 0x43AE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AE6Cu; }
        if (ctx->pc != 0x43AE6Cu) { return; }
    }
    ctx->pc = 0x43AE6Cu;
label_43ae6c:
    // 0x43ae6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43ae6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43ae70:
    // 0x43ae70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43ae70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43ae74:
    // 0x43ae74: 0x3e00008  jr          $ra
label_43ae78:
    if (ctx->pc == 0x43AE78u) {
        ctx->pc = 0x43AE78u;
            // 0x43ae78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43AE7Cu;
        goto label_43ae7c;
    }
    ctx->pc = 0x43AE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43AE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43AE74u;
            // 0x43ae78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43AE7Cu;
label_43ae7c:
    // 0x43ae7c: 0x0  nop
    ctx->pc = 0x43ae7cu;
    // NOP
label_43ae80:
    // 0x43ae80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43ae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43ae84:
    // 0x43ae84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43ae88:
    // 0x43ae88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43ae88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43ae8c:
    // 0x43ae8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43ae8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43ae90:
    // 0x43ae90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43ae90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43ae94:
    // 0x43ae94: 0x8c8400e0  lw          $a0, 0xE0($a0)
    ctx->pc = 0x43ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_43ae98:
    // 0x43ae98: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_43ae9c:
    if (ctx->pc == 0x43AE9Cu) {
        ctx->pc = 0x43AE9Cu;
            // 0x43ae9c: 0x920300f0  lbu         $v1, 0xF0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->pc = 0x43AEA0u;
        goto label_43aea0;
    }
    ctx->pc = 0x43AE98u;
    {
        const bool branch_taken_0x43ae98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x43ae98) {
            ctx->pc = 0x43AE9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43AE98u;
            // 0x43ae9c: 0x920300f0  lbu         $v1, 0xF0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43AEB0u;
            goto label_43aeb0;
        }
    }
    ctx->pc = 0x43AEA0u;
label_43aea0:
    // 0x43aea0: 0x50800036  beql        $a0, $zero, . + 4 + (0x36 << 2)
label_43aea4:
    if (ctx->pc == 0x43AEA4u) {
        ctx->pc = 0x43AEA4u;
            // 0x43aea4: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x43AEA8u;
        goto label_43aea8;
    }
    ctx->pc = 0x43AEA0u;
    {
        const bool branch_taken_0x43aea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43aea0) {
            ctx->pc = 0x43AEA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43AEA0u;
            // 0x43aea4: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43AF7Cu;
            goto label_43af7c;
        }
    }
    ctx->pc = 0x43AEA8u;
label_43aea8:
    // 0x43aea8: 0x10000035  b           . + 4 + (0x35 << 2)
label_43aeac:
    if (ctx->pc == 0x43AEACu) {
        ctx->pc = 0x43AEACu;
            // 0x43aeac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x43AEB0u;
        goto label_43aeb0;
    }
    ctx->pc = 0x43AEA8u;
    {
        const bool branch_taken_0x43aea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43AEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43AEA8u;
            // 0x43aeac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43aea8) {
            ctx->pc = 0x43AF80u;
            goto label_43af80;
        }
    }
    ctx->pc = 0x43AEB0u;
label_43aeb0:
    // 0x43aeb0: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_43aeb4:
    if (ctx->pc == 0x43AEB4u) {
        ctx->pc = 0x43AEB8u;
        goto label_43aeb8;
    }
    ctx->pc = 0x43AEB0u;
    {
        const bool branch_taken_0x43aeb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x43aeb0) {
            ctx->pc = 0x43AF7Cu;
            goto label_43af7c;
        }
    }
    ctx->pc = 0x43AEB8u;
label_43aeb8:
    // 0x43aeb8: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x43aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_43aebc:
    // 0x43aebc: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x43aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_43aec0:
    // 0x43aec0: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x43aec0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_43aec4:
    // 0x43aec4: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
label_43aec8:
    if (ctx->pc == 0x43AEC8u) {
        ctx->pc = 0x43AECCu;
        goto label_43aecc;
    }
    ctx->pc = 0x43AEC4u;
    {
        const bool branch_taken_0x43aec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x43aec4) {
            ctx->pc = 0x43AF7Cu;
            goto label_43af7c;
        }
    }
    ctx->pc = 0x43AECCu;
label_43aecc:
    // 0x43aecc: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x43aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_43aed0:
    // 0x43aed0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x43aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_43aed4:
    // 0x43aed4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43aed8:
    // 0x43aed8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x43aed8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43aedc:
    // 0x43aedc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x43aedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_43aee0:
    // 0x43aee0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x43aee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_43aee4:
    // 0x43aee4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x43aee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_43aee8:
    // 0x43aee8: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x43aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_43aeec:
    // 0x43aeec: 0x8c42e410  lw          $v0, -0x1BF0($v0)
    ctx->pc = 0x43aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
label_43aef0:
    // 0x43aef0: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x43aef0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43aef4:
    // 0x43aef4: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x43aef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_43aef8:
    // 0x43aef8: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x43aef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_43aefc:
    // 0x43aefc: 0x8ca30200  lw          $v1, 0x200($a1)
    ctx->pc = 0x43aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 512)));
label_43af00:
    // 0x43af00: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x43af00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_43af04:
    // 0x43af04: 0x54440012  bnel        $v0, $a0, . + 4 + (0x12 << 2)
label_43af08:
    if (ctx->pc == 0x43AF08u) {
        ctx->pc = 0x43AF08u;
            // 0x43af08: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x43AF0Cu;
        goto label_43af0c;
    }
    ctx->pc = 0x43AF04u;
    {
        const bool branch_taken_0x43af04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x43af04) {
            ctx->pc = 0x43AF08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43AF04u;
            // 0x43af08: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43AF50u;
            goto label_43af50;
        }
    }
    ctx->pc = 0x43AF0Cu;
label_43af0c:
    // 0x43af0c: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x43af0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_43af10:
    // 0x43af10: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x43af10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_43af14:
    // 0x43af14: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_43af18:
    if (ctx->pc == 0x43AF18u) {
        ctx->pc = 0x43AF1Cu;
        goto label_43af1c;
    }
    ctx->pc = 0x43AF14u;
    {
        const bool branch_taken_0x43af14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x43af14) {
            ctx->pc = 0x43AF4Cu;
            goto label_43af4c;
        }
    }
    ctx->pc = 0x43AF1Cu;
label_43af1c:
    // 0x43af1c: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x43af1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_43af20:
    // 0x43af20: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x43af20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_43af24:
    // 0x43af24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43af24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43af28:
    // 0x43af28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43af28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43af2c:
    // 0x43af2c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x43af2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_43af30:
    // 0x43af30: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x43af30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_43af34:
    // 0x43af34: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x43af34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43af38:
    // 0x43af38: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x43af38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43af3c:
    // 0x43af3c: 0xc08bff0  jal         func_22FFC0
label_43af40:
    if (ctx->pc == 0x43AF40u) {
        ctx->pc = 0x43AF40u;
            // 0x43af40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43AF44u;
        goto label_43af44;
    }
    ctx->pc = 0x43AF3Cu;
    SET_GPR_U32(ctx, 31, 0x43AF44u);
    ctx->pc = 0x43AF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43AF3Cu;
            // 0x43af40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AF44u; }
        if (ctx->pc != 0x43AF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AF44u; }
        if (ctx->pc != 0x43AF44u) { return; }
    }
    ctx->pc = 0x43AF44u;
label_43af44:
    // 0x43af44: 0x10000006  b           . + 4 + (0x6 << 2)
label_43af48:
    if (ctx->pc == 0x43AF48u) {
        ctx->pc = 0x43AF4Cu;
        goto label_43af4c;
    }
    ctx->pc = 0x43AF44u;
    {
        const bool branch_taken_0x43af44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43af44) {
            ctx->pc = 0x43AF60u;
            goto label_43af60;
        }
    }
    ctx->pc = 0x43AF4Cu;
label_43af4c:
    // 0x43af4c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x43af4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_43af50:
    // 0x43af50: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x43af50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_43af54:
    // 0x43af54: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_43af58:
    if (ctx->pc == 0x43AF58u) {
        ctx->pc = 0x43AF58u;
            // 0x43af58: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x43AF5Cu;
        goto label_43af5c;
    }
    ctx->pc = 0x43AF54u;
    {
        const bool branch_taken_0x43af54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43AF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43AF54u;
            // 0x43af58: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43af54) {
            ctx->pc = 0x43AEF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43aef8;
        }
    }
    ctx->pc = 0x43AF5Cu;
label_43af5c:
    // 0x43af5c: 0x0  nop
    ctx->pc = 0x43af5cu;
    // NOP
label_43af60:
    // 0x43af60: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43af60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43af64:
    // 0x43af64: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x43af64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_43af68:
    // 0x43af68: 0x8e0600ec  lw          $a2, 0xEC($s0)
    ctx->pc = 0x43af68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_43af6c:
    // 0x43af6c: 0xc0c2f44  jal         func_30BD10
label_43af70:
    if (ctx->pc == 0x43AF70u) {
        ctx->pc = 0x43AF70u;
            // 0x43af70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43AF74u;
        goto label_43af74;
    }
    ctx->pc = 0x43AF6Cu;
    SET_GPR_U32(ctx, 31, 0x43AF74u);
    ctx->pc = 0x43AF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43AF6Cu;
            // 0x43af70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BD10u;
    if (runtime->hasFunction(0x30BD10u)) {
        auto targetFn = runtime->lookupFunction(0x30BD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AF74u; }
        if (ctx->pc != 0x43AF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BD10_0x30bd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AF74u; }
        if (ctx->pc != 0x43AF74u) { return; }
    }
    ctx->pc = 0x43AF74u;
label_43af74:
    // 0x43af74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43af74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43af78:
    // 0x43af78: 0xa20300f0  sb          $v1, 0xF0($s0)
    ctx->pc = 0x43af78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 240), (uint8_t)GPR_U32(ctx, 3));
label_43af7c:
    // 0x43af7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43af7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43af80:
    // 0x43af80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43af80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43af84:
    // 0x43af84: 0x3e00008  jr          $ra
label_43af88:
    if (ctx->pc == 0x43AF88u) {
        ctx->pc = 0x43AF88u;
            // 0x43af88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43AF8Cu;
        goto label_43af8c;
    }
    ctx->pc = 0x43AF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43AF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43AF84u;
            // 0x43af88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43AF8Cu;
label_43af8c:
    // 0x43af8c: 0x0  nop
    ctx->pc = 0x43af8cu;
    // NOP
label_43af90:
    // 0x43af90: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x43af90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_43af94:
    // 0x43af94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43af94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43af98:
    // 0x43af98: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_43af9c:
    if (ctx->pc == 0x43AF9Cu) {
        ctx->pc = 0x43AFA0u;
        goto label_43afa0;
    }
    ctx->pc = 0x43AF98u;
    {
        const bool branch_taken_0x43af98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x43af98) {
            ctx->pc = 0x43AFA8u;
            goto label_43afa8;
        }
    }
    ctx->pc = 0x43AFA0u;
label_43afa0:
    // 0x43afa0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_43afa4:
    if (ctx->pc == 0x43AFA4u) {
        ctx->pc = 0x43AFA4u;
            // 0x43afa4: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x43AFA8u;
        goto label_43afa8;
    }
    ctx->pc = 0x43AFA0u;
    {
        const bool branch_taken_0x43afa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x43afa0) {
            ctx->pc = 0x43AFA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43AFA0u;
            // 0x43afa4: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43AFA8u;
            goto label_43afa8;
        }
    }
    ctx->pc = 0x43AFA8u;
label_43afa8:
    // 0x43afa8: 0x3e00008  jr          $ra
label_43afac:
    if (ctx->pc == 0x43AFACu) {
        ctx->pc = 0x43AFB0u;
        goto label_43afb0;
    }
    ctx->pc = 0x43AFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43AFB0u;
label_43afb0:
    // 0x43afb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x43afb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_43afb4:
    // 0x43afb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43afb8:
    // 0x43afb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43afbc:
    // 0x43afbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43afbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43afc0:
    // 0x43afc0: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x43afc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_43afc4:
    // 0x43afc4: 0xc0e393c  jal         func_38E4F0
label_43afc8:
    if (ctx->pc == 0x43AFC8u) {
        ctx->pc = 0x43AFC8u;
            // 0x43afc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43AFCCu;
        goto label_43afcc;
    }
    ctx->pc = 0x43AFC4u;
    SET_GPR_U32(ctx, 31, 0x43AFCCu);
    ctx->pc = 0x43AFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43AFC4u;
            // 0x43afc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AFCCu; }
        if (ctx->pc != 0x43AFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AFCCu; }
        if (ctx->pc != 0x43AFCCu) { return; }
    }
    ctx->pc = 0x43AFCCu;
label_43afcc:
    // 0x43afcc: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x43afccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_43afd0:
    // 0x43afd0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43afd4:
    // 0x43afd4: 0xa223004c  sb          $v1, 0x4C($s1)
    ctx->pc = 0x43afd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 3));
label_43afd8:
    // 0x43afd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x43afd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43afdc:
    // 0x43afdc: 0xa22000f1  sb          $zero, 0xF1($s1)
    ctx->pc = 0x43afdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 241), (uint8_t)GPR_U32(ctx, 0));
label_43afe0:
    // 0x43afe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43afe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43afe4:
    // 0x43afe4: 0xa22000f0  sb          $zero, 0xF0($s1)
    ctx->pc = 0x43afe4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 240), (uint8_t)GPR_U32(ctx, 0));
label_43afe8:
    // 0x43afe8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x43afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_43afec:
    // 0x43afec: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x43afecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_43aff0:
    // 0x43aff0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x43aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_43aff4:
    // 0x43aff4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x43aff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_43aff8:
    // 0x43aff8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x43aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_43affc:
    // 0x43affc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x43affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43b000:
    // 0x43b000: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x43b000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43b004:
    // 0x43b004: 0xc08bff0  jal         func_22FFC0
label_43b008:
    if (ctx->pc == 0x43B008u) {
        ctx->pc = 0x43B008u;
            // 0x43b008: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B00Cu;
        goto label_43b00c;
    }
    ctx->pc = 0x43B004u;
    SET_GPR_U32(ctx, 31, 0x43B00Cu);
    ctx->pc = 0x43B008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B004u;
            // 0x43b008: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B00Cu; }
        if (ctx->pc != 0x43B00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B00Cu; }
        if (ctx->pc != 0x43B00Cu) { return; }
    }
    ctx->pc = 0x43B00Cu;
label_43b00c:
    // 0x43b00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43b00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43b010:
    // 0x43b010: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x43b010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_43b014:
    // 0x43b014: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43b014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43b018:
    // 0x43b018: 0xc08914c  jal         func_224530
label_43b01c:
    if (ctx->pc == 0x43B01Cu) {
        ctx->pc = 0x43B01Cu;
            // 0x43b01c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B020u;
        goto label_43b020;
    }
    ctx->pc = 0x43B018u;
    SET_GPR_U32(ctx, 31, 0x43B020u);
    ctx->pc = 0x43B01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B018u;
            // 0x43b01c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B020u; }
        if (ctx->pc != 0x43B020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B020u; }
        if (ctx->pc != 0x43B020u) { return; }
    }
    ctx->pc = 0x43B020u;
label_43b020:
    // 0x43b020: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x43b020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43b024:
    // 0x43b024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43b024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43b028:
    // 0x43b028: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x43b028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43b02c:
    // 0x43b02c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x43b02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_43b030:
    // 0x43b030: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x43b030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43b034:
    // 0x43b034: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x43b034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_43b038:
    // 0x43b038: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x43b038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_43b03c:
    // 0x43b03c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x43b03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_43b040:
    // 0x43b040: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x43b040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_43b044:
    // 0x43b044: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x43b044u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_43b048:
    // 0x43b048: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x43b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_43b04c:
    // 0x43b04c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x43b04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43b050:
    // 0x43b050: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x43b050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43b054:
    // 0x43b054: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x43b054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43b058:
    // 0x43b058: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x43b058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_43b05c:
    // 0x43b05c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x43b05cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_43b060:
    // 0x43b060: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x43b060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_43b064:
    // 0x43b064: 0xc0892b0  jal         func_224AC0
label_43b068:
    if (ctx->pc == 0x43B068u) {
        ctx->pc = 0x43B068u;
            // 0x43b068: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x43B06Cu;
        goto label_43b06c;
    }
    ctx->pc = 0x43B064u;
    SET_GPR_U32(ctx, 31, 0x43B06Cu);
    ctx->pc = 0x43B068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B064u;
            // 0x43b068: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B06Cu; }
        if (ctx->pc != 0x43B06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B06Cu; }
        if (ctx->pc != 0x43B06Cu) { return; }
    }
    ctx->pc = 0x43B06Cu;
label_43b06c:
    // 0x43b06c: 0xc088b74  jal         func_222DD0
label_43b070:
    if (ctx->pc == 0x43B070u) {
        ctx->pc = 0x43B070u;
            // 0x43b070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B074u;
        goto label_43b074;
    }
    ctx->pc = 0x43B06Cu;
    SET_GPR_U32(ctx, 31, 0x43B074u);
    ctx->pc = 0x43B070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B06Cu;
            // 0x43b070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B074u; }
        if (ctx->pc != 0x43B074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B074u; }
        if (ctx->pc != 0x43B074u) { return; }
    }
    ctx->pc = 0x43B074u;
label_43b074:
    // 0x43b074: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x43b074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_43b078:
    // 0x43b078: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x43b078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_43b07c:
    // 0x43b07c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x43b07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_43b080:
    // 0x43b080: 0x320f809  jalr        $t9
label_43b084:
    if (ctx->pc == 0x43B084u) {
        ctx->pc = 0x43B084u;
            // 0x43b084: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x43B088u;
        goto label_43b088;
    }
    ctx->pc = 0x43B080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43B088u);
        ctx->pc = 0x43B084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B080u;
            // 0x43b084: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43B088u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43B088u; }
            if (ctx->pc != 0x43B088u) { return; }
        }
        }
    }
    ctx->pc = 0x43B088u;
label_43b088:
    // 0x43b088: 0xc088b74  jal         func_222DD0
label_43b08c:
    if (ctx->pc == 0x43B08Cu) {
        ctx->pc = 0x43B08Cu;
            // 0x43b08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B090u;
        goto label_43b090;
    }
    ctx->pc = 0x43B088u;
    SET_GPR_U32(ctx, 31, 0x43B090u);
    ctx->pc = 0x43B08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B088u;
            // 0x43b08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B090u; }
        if (ctx->pc != 0x43B090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B090u; }
        if (ctx->pc != 0x43B090u) { return; }
    }
    ctx->pc = 0x43B090u;
label_43b090:
    // 0x43b090: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x43b090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_43b094:
    // 0x43b094: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x43b094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_43b098:
    // 0x43b098: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x43b098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_43b09c:
    // 0x43b09c: 0x320f809  jalr        $t9
label_43b0a0:
    if (ctx->pc == 0x43B0A0u) {
        ctx->pc = 0x43B0A0u;
            // 0x43b0a0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x43B0A4u;
        goto label_43b0a4;
    }
    ctx->pc = 0x43B09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43B0A4u);
        ctx->pc = 0x43B0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B09Cu;
            // 0x43b0a0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43B0A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43B0A4u; }
            if (ctx->pc != 0x43B0A4u) { return; }
        }
        }
    }
    ctx->pc = 0x43B0A4u;
label_43b0a4:
    // 0x43b0a4: 0x3c0443d1  lui         $a0, 0x43D1
    ctx->pc = 0x43b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17361 << 16));
label_43b0a8:
    // 0x43b0a8: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x43b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_43b0ac:
    // 0x43b0ac: 0x34857084  ori         $a1, $a0, 0x7084
    ctx->pc = 0x43b0acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28804);
label_43b0b0:
    // 0x43b0b0: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x43b0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_43b0b4:
    // 0x43b0b4: 0xae050154  sw          $a1, 0x154($s0)
    ctx->pc = 0x43b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 5));
label_43b0b8:
    // 0x43b0b8: 0xae040158  sw          $a0, 0x158($s0)
    ctx->pc = 0x43b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 4));
label_43b0bc:
    // 0x43b0bc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x43b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_43b0c0:
    // 0x43b0c0: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x43b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43b0c4:
    // 0x43b0c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x43b0c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43b0c8:
    // 0x43b0c8: 0x0  nop
    ctx->pc = 0x43b0c8u;
    // NOP
label_43b0cc:
    // 0x43b0cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x43b0ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43b0d0:
    // 0x43b0d0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_43b0d4:
    if (ctx->pc == 0x43B0D4u) {
        ctx->pc = 0x43B0D4u;
            // 0x43b0d4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x43B0D8u;
        goto label_43b0d8;
    }
    ctx->pc = 0x43B0D0u;
    {
        const bool branch_taken_0x43b0d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x43b0d0) {
            ctx->pc = 0x43B0D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43B0D0u;
            // 0x43b0d4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x43B0E8u;
            goto label_43b0e8;
        }
    }
    ctx->pc = 0x43B0D8u;
label_43b0d8:
    // 0x43b0d8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43b0d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_43b0dc:
    // 0x43b0dc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x43b0dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_43b0e0:
    // 0x43b0e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_43b0e4:
    if (ctx->pc == 0x43B0E4u) {
        ctx->pc = 0x43B0E4u;
            // 0x43b0e4: 0xae2400ec  sw          $a0, 0xEC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 4));
        ctx->pc = 0x43B0E8u;
        goto label_43b0e8;
    }
    ctx->pc = 0x43B0E0u;
    {
        const bool branch_taken_0x43b0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B0E0u;
            // 0x43b0e4: 0xae2400ec  sw          $a0, 0xEC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b0e0) {
            ctx->pc = 0x43B100u;
            goto label_43b100;
        }
    }
    ctx->pc = 0x43B0E8u;
label_43b0e8:
    // 0x43b0e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x43b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_43b0ec:
    // 0x43b0ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43b0ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_43b0f0:
    // 0x43b0f0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x43b0f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_43b0f4:
    // 0x43b0f4: 0x0  nop
    ctx->pc = 0x43b0f4u;
    // NOP
label_43b0f8:
    // 0x43b0f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x43b0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_43b0fc:
    // 0x43b0fc: 0xae2400ec  sw          $a0, 0xEC($s1)
    ctx->pc = 0x43b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 4));
label_43b100:
    // 0x43b100: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x43b100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43b104:
    // 0x43b104: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43b104u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_43b108:
    // 0x43b108: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x43b108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_43b10c:
    // 0x43b10c: 0x0  nop
    ctx->pc = 0x43b10cu;
    // NOP
label_43b110:
    // 0x43b110: 0xae2300e8  sw          $v1, 0xE8($s1)
    ctx->pc = 0x43b110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 3));
label_43b114:
    // 0x43b114: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x43b114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_43b118:
    // 0x43b118: 0x5460002b  bnel        $v1, $zero, . + 4 + (0x2B << 2)
label_43b11c:
    if (ctx->pc == 0x43B11Cu) {
        ctx->pc = 0x43B11Cu;
            // 0x43b11c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43B120u;
        goto label_43b120;
    }
    ctx->pc = 0x43B118u;
    {
        const bool branch_taken_0x43b118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x43b118) {
            ctx->pc = 0x43B11Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43B118u;
            // 0x43b11c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43B1C8u;
            goto label_43b1c8;
        }
    }
    ctx->pc = 0x43B120u;
label_43b120:
    // 0x43b120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43b124:
    // 0x43b124: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x43b124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_43b128:
    // 0x43b128: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x43b128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_43b12c:
    // 0x43b12c: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x43b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_43b130:
    // 0x43b130: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x43b130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_43b134:
    // 0x43b134: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x43b134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
label_43b138:
    // 0x43b138: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x43b138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
label_43b13c:
    // 0x43b13c: 0xc0dc408  jal         func_371020
label_43b140:
    if (ctx->pc == 0x43B140u) {
        ctx->pc = 0x43B140u;
            // 0x43b140: 0xae200080  sw          $zero, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
        ctx->pc = 0x43B144u;
        goto label_43b144;
    }
    ctx->pc = 0x43B13Cu;
    SET_GPR_U32(ctx, 31, 0x43B144u);
    ctx->pc = 0x43B140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B13Cu;
            // 0x43b140: 0xae200080  sw          $zero, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B144u; }
        if (ctx->pc != 0x43B144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B144u; }
        if (ctx->pc != 0x43B144u) { return; }
    }
    ctx->pc = 0x43B144u;
label_43b144:
    // 0x43b144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43b144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43b148:
    // 0x43b148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43b148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43b14c:
    // 0x43b14c: 0xc0e1b0c  jal         func_386C30
label_43b150:
    if (ctx->pc == 0x43B150u) {
        ctx->pc = 0x43B150u;
            // 0x43b150: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x43B154u;
        goto label_43b154;
    }
    ctx->pc = 0x43B14Cu;
    SET_GPR_U32(ctx, 31, 0x43B154u);
    ctx->pc = 0x43B150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B14Cu;
            // 0x43b150: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C30u;
    if (runtime->hasFunction(0x386C30u)) {
        auto targetFn = runtime->lookupFunction(0x386C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B154u; }
        if (ctx->pc != 0x43B154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C30_0x386c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B154u; }
        if (ctx->pc != 0x43B154u) { return; }
    }
    ctx->pc = 0x43B154u;
label_43b154:
    // 0x43b154: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x43b154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_43b158:
    // 0x43b158: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x43b158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43b15c:
    // 0x43b15c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43b15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43b160:
    // 0x43b160: 0xc10e74c  jal         func_439D30
label_43b164:
    if (ctx->pc == 0x43B164u) {
        ctx->pc = 0x43B164u;
            // 0x43b164: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B168u;
        goto label_43b168;
    }
    ctx->pc = 0x43B160u;
    SET_GPR_U32(ctx, 31, 0x43B168u);
    ctx->pc = 0x43B164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B160u;
            // 0x43b164: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439D30u;
    if (runtime->hasFunction(0x439D30u)) {
        auto targetFn = runtime->lookupFunction(0x439D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B168u; }
        if (ctx->pc != 0x43B168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439D30_0x439d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B168u; }
        if (ctx->pc != 0x43B168u) { return; }
    }
    ctx->pc = 0x43B168u;
label_43b168:
    // 0x43b168: 0xc10e748  jal         func_439D20
label_43b16c:
    if (ctx->pc == 0x43B16Cu) {
        ctx->pc = 0x43B16Cu;
            // 0x43b16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B170u;
        goto label_43b170;
    }
    ctx->pc = 0x43B168u;
    SET_GPR_U32(ctx, 31, 0x43B170u);
    ctx->pc = 0x43B16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B168u;
            // 0x43b16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439D20u;
    if (runtime->hasFunction(0x439D20u)) {
        auto targetFn = runtime->lookupFunction(0x439D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B170u; }
        if (ctx->pc != 0x43B170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439D20_0x439d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B170u; }
        if (ctx->pc != 0x43B170u) { return; }
    }
    ctx->pc = 0x43B170u;
label_43b170:
    // 0x43b170: 0xc10e744  jal         func_439D10
label_43b174:
    if (ctx->pc == 0x43B174u) {
        ctx->pc = 0x43B174u;
            // 0x43b174: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B178u;
        goto label_43b178;
    }
    ctx->pc = 0x43B170u;
    SET_GPR_U32(ctx, 31, 0x43B178u);
    ctx->pc = 0x43B174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B170u;
            // 0x43b174: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439D10u;
    if (runtime->hasFunction(0x439D10u)) {
        auto targetFn = runtime->lookupFunction(0x439D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B178u; }
        if (ctx->pc != 0x43B178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439D10_0x439d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B178u; }
        if (ctx->pc != 0x43B178u) { return; }
    }
    ctx->pc = 0x43B178u;
label_43b178:
    // 0x43b178: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x43b178u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_43b17c:
    // 0x43b17c: 0x5460005b  bnel        $v1, $zero, . + 4 + (0x5B << 2)
label_43b180:
    if (ctx->pc == 0x43B180u) {
        ctx->pc = 0x43B180u;
            // 0x43b180: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x43B184u;
        goto label_43b184;
    }
    ctx->pc = 0x43B17Cu;
    {
        const bool branch_taken_0x43b17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x43b17c) {
            ctx->pc = 0x43B180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43B17Cu;
            // 0x43b180: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43B2ECu;
            goto label_43b2ec;
        }
    }
    ctx->pc = 0x43B184u;
label_43b184:
    // 0x43b184: 0xc0e3b50  jal         func_38ED40
label_43b188:
    if (ctx->pc == 0x43B188u) {
        ctx->pc = 0x43B188u;
            // 0x43b188: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x43B18Cu;
        goto label_43b18c;
    }
    ctx->pc = 0x43B184u;
    SET_GPR_U32(ctx, 31, 0x43B18Cu);
    ctx->pc = 0x43B188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B184u;
            // 0x43b188: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38ED40u;
    if (runtime->hasFunction(0x38ED40u)) {
        auto targetFn = runtime->lookupFunction(0x38ED40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B18Cu; }
        if (ctx->pc != 0x43B18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038ED40_0x38ed40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B18Cu; }
        if (ctx->pc != 0x43B18Cu) { return; }
    }
    ctx->pc = 0x43B18Cu;
label_43b18c:
    // 0x43b18c: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
label_43b190:
    if (ctx->pc == 0x43B190u) {
        ctx->pc = 0x43B194u;
        goto label_43b194;
    }
    ctx->pc = 0x43B18Cu;
    {
        const bool branch_taken_0x43b18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43b18c) {
            ctx->pc = 0x43B2E8u;
            goto label_43b2e8;
        }
    }
    ctx->pc = 0x43B194u;
label_43b194:
    // 0x43b194: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x43b194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_43b198:
    // 0x43b198: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x43b198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_43b19c:
    // 0x43b19c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x43b19cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43b1a0:
    // 0x43b1a0: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x43b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_43b1a4:
    // 0x43b1a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x43b1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_43b1a8:
    // 0x43b1a8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x43b1a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_43b1ac:
    // 0x43b1ac: 0xc10e73c  jal         func_439CF0
label_43b1b0:
    if (ctx->pc == 0x43B1B0u) {
        ctx->pc = 0x43B1B0u;
            // 0x43b1b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43B1B4u;
        goto label_43b1b4;
    }
    ctx->pc = 0x43B1ACu;
    SET_GPR_U32(ctx, 31, 0x43B1B4u);
    ctx->pc = 0x43B1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B1ACu;
            // 0x43b1b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439CF0u;
    if (runtime->hasFunction(0x439CF0u)) {
        auto targetFn = runtime->lookupFunction(0x439CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B1B4u; }
        if (ctx->pc != 0x43B1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439CF0_0x439cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B1B4u; }
        if (ctx->pc != 0x43B1B4u) { return; }
    }
    ctx->pc = 0x43B1B4u;
label_43b1b4:
    // 0x43b1b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43b1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43b1b8:
    // 0x43b1b8: 0xc10e728  jal         func_439CA0
label_43b1bc:
    if (ctx->pc == 0x43B1BCu) {
        ctx->pc = 0x43B1BCu;
            // 0x43b1bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x43B1C0u;
        goto label_43b1c0;
    }
    ctx->pc = 0x43B1B8u;
    SET_GPR_U32(ctx, 31, 0x43B1C0u);
    ctx->pc = 0x43B1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B1B8u;
            // 0x43b1bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439CA0u;
    if (runtime->hasFunction(0x439CA0u)) {
        auto targetFn = runtime->lookupFunction(0x439CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B1C0u; }
        if (ctx->pc != 0x43B1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439CA0_0x439ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B1C0u; }
        if (ctx->pc != 0x43B1C0u) { return; }
    }
    ctx->pc = 0x43B1C0u;
label_43b1c0:
    // 0x43b1c0: 0x10000049  b           . + 4 + (0x49 << 2)
label_43b1c4:
    if (ctx->pc == 0x43B1C4u) {
        ctx->pc = 0x43B1C8u;
        goto label_43b1c8;
    }
    ctx->pc = 0x43B1C0u;
    {
        const bool branch_taken_0x43b1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b1c0) {
            ctx->pc = 0x43B2E8u;
            goto label_43b2e8;
        }
    }
    ctx->pc = 0x43B1C8u;
label_43b1c8:
    // 0x43b1c8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x43b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_43b1cc:
    // 0x43b1cc: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x43b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
label_43b1d0:
    // 0x43b1d0: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x43b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
label_43b1d4:
    // 0x43b1d4: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x43b1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_43b1d8:
    // 0x43b1d8: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x43b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
label_43b1dc:
    // 0x43b1dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x43b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43b1e0:
    // 0x43b1e0: 0xae240080  sw          $a0, 0x80($s1)
    ctx->pc = 0x43b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 4));
label_43b1e4:
    // 0x43b1e4: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x43b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_43b1e8:
    // 0x43b1e8: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_43b1ec:
    if (ctx->pc == 0x43B1ECu) {
        ctx->pc = 0x43B1F0u;
        goto label_43b1f0;
    }
    ctx->pc = 0x43B1E8u;
    {
        const bool branch_taken_0x43b1e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x43b1e8) {
            ctx->pc = 0x43B238u;
            goto label_43b238;
        }
    }
    ctx->pc = 0x43B1F0u;
label_43b1f0:
    // 0x43b1f0: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x43b1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_43b1f4:
    // 0x43b1f4: 0x3c02fddf  lui         $v0, 0xFDDF
    ctx->pc = 0x43b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64991 << 16));
label_43b1f8:
    // 0x43b1f8: 0x3444fddf  ori         $a0, $v0, 0xFDDF
    ctx->pc = 0x43b1f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64991);
label_43b1fc:
    // 0x43b1fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43b1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43b200:
    // 0x43b200: 0x3c020220  lui         $v0, 0x220
    ctx->pc = 0x43b200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)544 << 16));
label_43b204:
    // 0x43b204: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x43b204u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_43b208:
    // 0x43b208: 0x34430220  ori         $v1, $v0, 0x220
    ctx->pc = 0x43b208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)544);
label_43b20c:
    // 0x43b20c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43b210:
    // 0x43b210: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x43b210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_43b214:
    // 0x43b214: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x43b214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_43b218:
    // 0x43b218: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x43b218u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_43b21c:
    // 0x43b21c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x43b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43b220:
    // 0x43b220: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x43b220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43b224:
    // 0x43b224: 0xc08bff0  jal         func_22FFC0
label_43b228:
    if (ctx->pc == 0x43B228u) {
        ctx->pc = 0x43B228u;
            // 0x43b228: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B22Cu;
        goto label_43b22c;
    }
    ctx->pc = 0x43B224u;
    SET_GPR_U32(ctx, 31, 0x43B22Cu);
    ctx->pc = 0x43B228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B224u;
            // 0x43b228: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B22Cu; }
        if (ctx->pc != 0x43B22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B22Cu; }
        if (ctx->pc != 0x43B22Cu) { return; }
    }
    ctx->pc = 0x43B22Cu;
label_43b22c:
    // 0x43b22c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x43b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_43b230:
    // 0x43b230: 0xa2230068  sb          $v1, 0x68($s1)
    ctx->pc = 0x43b230u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 3));
label_43b234:
    // 0x43b234: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x43b234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_43b238:
    // 0x43b238: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x43b238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_43b23c:
    // 0x43b23c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x43b23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_43b240:
    // 0x43b240: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x43b240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_43b244:
    // 0x43b244: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x43b244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_43b248:
    // 0x43b248: 0x14640027  bne         $v1, $a0, . + 4 + (0x27 << 2)
label_43b24c:
    if (ctx->pc == 0x43B24Cu) {
        ctx->pc = 0x43B250u;
        goto label_43b250;
    }
    ctx->pc = 0x43B248u;
    {
        const bool branch_taken_0x43b248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x43b248) {
            ctx->pc = 0x43B2E8u;
            goto label_43b2e8;
        }
    }
    ctx->pc = 0x43B250u;
label_43b250:
    // 0x43b250: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43b250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43b254:
    // 0x43b254: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x43b254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43b258:
    // 0x43b258: 0x8c42e410  lw          $v0, -0x1BF0($v0)
    ctx->pc = 0x43b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
label_43b25c:
    // 0x43b25c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x43b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_43b260:
    // 0x43b260: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x43b260u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43b264:
    // 0x43b264: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x43b264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_43b268:
    // 0x43b268: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x43b268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_43b26c:
    // 0x43b26c: 0x8ca30200  lw          $v1, 0x200($a1)
    ctx->pc = 0x43b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 512)));
label_43b270:
    // 0x43b270: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x43b270u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_43b274:
    // 0x43b274: 0x54440013  bnel        $v0, $a0, . + 4 + (0x13 << 2)
label_43b278:
    if (ctx->pc == 0x43B278u) {
        ctx->pc = 0x43B278u;
            // 0x43b278: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x43B27Cu;
        goto label_43b27c;
    }
    ctx->pc = 0x43B274u;
    {
        const bool branch_taken_0x43b274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x43b274) {
            ctx->pc = 0x43B278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43B274u;
            // 0x43b278: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43B2C4u;
            goto label_43b2c4;
        }
    }
    ctx->pc = 0x43B27Cu;
label_43b27c:
    // 0x43b27c: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x43b27cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_43b280:
    // 0x43b280: 0x8e2200ec  lw          $v0, 0xEC($s1)
    ctx->pc = 0x43b280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_43b284:
    // 0x43b284: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_43b288:
    if (ctx->pc == 0x43B288u) {
        ctx->pc = 0x43B28Cu;
        goto label_43b28c;
    }
    ctx->pc = 0x43B284u;
    {
        const bool branch_taken_0x43b284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x43b284) {
            ctx->pc = 0x43B2C0u;
            goto label_43b2c0;
        }
    }
    ctx->pc = 0x43B28Cu;
label_43b28c:
    // 0x43b28c: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x43b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_43b290:
    // 0x43b290: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x43b290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_43b294:
    // 0x43b294: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43b294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43b298:
    // 0x43b298: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43b298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43b29c:
    // 0x43b29c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x43b29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_43b2a0:
    // 0x43b2a0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x43b2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_43b2a4:
    // 0x43b2a4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x43b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_43b2a8:
    // 0x43b2a8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x43b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43b2ac:
    // 0x43b2ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x43b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43b2b0:
    // 0x43b2b0: 0xc08bff0  jal         func_22FFC0
label_43b2b4:
    if (ctx->pc == 0x43B2B4u) {
        ctx->pc = 0x43B2B4u;
            // 0x43b2b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B2B8u;
        goto label_43b2b8;
    }
    ctx->pc = 0x43B2B0u;
    SET_GPR_U32(ctx, 31, 0x43B2B8u);
    ctx->pc = 0x43B2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B2B0u;
            // 0x43b2b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B2B8u; }
        if (ctx->pc != 0x43B2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B2B8u; }
        if (ctx->pc != 0x43B2B8u) { return; }
    }
    ctx->pc = 0x43B2B8u;
label_43b2b8:
    // 0x43b2b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_43b2bc:
    if (ctx->pc == 0x43B2BCu) {
        ctx->pc = 0x43B2C0u;
        goto label_43b2c0;
    }
    ctx->pc = 0x43B2B8u;
    {
        const bool branch_taken_0x43b2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b2b8) {
            ctx->pc = 0x43B2D0u;
            goto label_43b2d0;
        }
    }
    ctx->pc = 0x43B2C0u;
label_43b2c0:
    // 0x43b2c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x43b2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_43b2c4:
    // 0x43b2c4: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x43b2c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_43b2c8:
    // 0x43b2c8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_43b2cc:
    if (ctx->pc == 0x43B2CCu) {
        ctx->pc = 0x43B2CCu;
            // 0x43b2cc: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x43B2D0u;
        goto label_43b2d0;
    }
    ctx->pc = 0x43B2C8u;
    {
        const bool branch_taken_0x43b2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B2C8u;
            // 0x43b2cc: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b2c8) {
            ctx->pc = 0x43B268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43b268;
        }
    }
    ctx->pc = 0x43B2D0u;
label_43b2d0:
    // 0x43b2d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43b2d4:
    // 0x43b2d4: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x43b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_43b2d8:
    // 0x43b2d8: 0x8e2600ec  lw          $a2, 0xEC($s1)
    ctx->pc = 0x43b2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_43b2dc:
    // 0x43b2dc: 0xc0c2f44  jal         func_30BD10
label_43b2e0:
    if (ctx->pc == 0x43B2E0u) {
        ctx->pc = 0x43B2E0u;
            // 0x43b2e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43B2E4u;
        goto label_43b2e4;
    }
    ctx->pc = 0x43B2DCu;
    SET_GPR_U32(ctx, 31, 0x43B2E4u);
    ctx->pc = 0x43B2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B2DCu;
            // 0x43b2e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BD10u;
    if (runtime->hasFunction(0x30BD10u)) {
        auto targetFn = runtime->lookupFunction(0x30BD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B2E4u; }
        if (ctx->pc != 0x43B2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BD10_0x30bd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B2E4u; }
        if (ctx->pc != 0x43B2E4u) { return; }
    }
    ctx->pc = 0x43B2E4u;
label_43b2e4:
    // 0x43b2e4: 0xa22000f0  sb          $zero, 0xF0($s1)
    ctx->pc = 0x43b2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 240), (uint8_t)GPR_U32(ctx, 0));
label_43b2e8:
    // 0x43b2e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43b2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43b2ec:
    // 0x43b2ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43b2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43b2f0:
    // 0x43b2f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43b2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43b2f4:
    // 0x43b2f4: 0x3e00008  jr          $ra
label_43b2f8:
    if (ctx->pc == 0x43B2F8u) {
        ctx->pc = 0x43B2F8u;
            // 0x43b2f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x43B2FCu;
        goto label_43b2fc;
    }
    ctx->pc = 0x43B2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B2F4u;
            // 0x43b2f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43B2FCu;
label_43b2fc:
    // 0x43b2fc: 0x0  nop
    ctx->pc = 0x43b2fcu;
    // NOP
}
