#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042AEB0
// Address: 0x42aeb0 - 0x42b3e0
void sub_0042AEB0_0x42aeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042AEB0_0x42aeb0");
#endif

    switch (ctx->pc) {
        case 0x42aeb0u: goto label_42aeb0;
        case 0x42aeb4u: goto label_42aeb4;
        case 0x42aeb8u: goto label_42aeb8;
        case 0x42aebcu: goto label_42aebc;
        case 0x42aec0u: goto label_42aec0;
        case 0x42aec4u: goto label_42aec4;
        case 0x42aec8u: goto label_42aec8;
        case 0x42aeccu: goto label_42aecc;
        case 0x42aed0u: goto label_42aed0;
        case 0x42aed4u: goto label_42aed4;
        case 0x42aed8u: goto label_42aed8;
        case 0x42aedcu: goto label_42aedc;
        case 0x42aee0u: goto label_42aee0;
        case 0x42aee4u: goto label_42aee4;
        case 0x42aee8u: goto label_42aee8;
        case 0x42aeecu: goto label_42aeec;
        case 0x42aef0u: goto label_42aef0;
        case 0x42aef4u: goto label_42aef4;
        case 0x42aef8u: goto label_42aef8;
        case 0x42aefcu: goto label_42aefc;
        case 0x42af00u: goto label_42af00;
        case 0x42af04u: goto label_42af04;
        case 0x42af08u: goto label_42af08;
        case 0x42af0cu: goto label_42af0c;
        case 0x42af10u: goto label_42af10;
        case 0x42af14u: goto label_42af14;
        case 0x42af18u: goto label_42af18;
        case 0x42af1cu: goto label_42af1c;
        case 0x42af20u: goto label_42af20;
        case 0x42af24u: goto label_42af24;
        case 0x42af28u: goto label_42af28;
        case 0x42af2cu: goto label_42af2c;
        case 0x42af30u: goto label_42af30;
        case 0x42af34u: goto label_42af34;
        case 0x42af38u: goto label_42af38;
        case 0x42af3cu: goto label_42af3c;
        case 0x42af40u: goto label_42af40;
        case 0x42af44u: goto label_42af44;
        case 0x42af48u: goto label_42af48;
        case 0x42af4cu: goto label_42af4c;
        case 0x42af50u: goto label_42af50;
        case 0x42af54u: goto label_42af54;
        case 0x42af58u: goto label_42af58;
        case 0x42af5cu: goto label_42af5c;
        case 0x42af60u: goto label_42af60;
        case 0x42af64u: goto label_42af64;
        case 0x42af68u: goto label_42af68;
        case 0x42af6cu: goto label_42af6c;
        case 0x42af70u: goto label_42af70;
        case 0x42af74u: goto label_42af74;
        case 0x42af78u: goto label_42af78;
        case 0x42af7cu: goto label_42af7c;
        case 0x42af80u: goto label_42af80;
        case 0x42af84u: goto label_42af84;
        case 0x42af88u: goto label_42af88;
        case 0x42af8cu: goto label_42af8c;
        case 0x42af90u: goto label_42af90;
        case 0x42af94u: goto label_42af94;
        case 0x42af98u: goto label_42af98;
        case 0x42af9cu: goto label_42af9c;
        case 0x42afa0u: goto label_42afa0;
        case 0x42afa4u: goto label_42afa4;
        case 0x42afa8u: goto label_42afa8;
        case 0x42afacu: goto label_42afac;
        case 0x42afb0u: goto label_42afb0;
        case 0x42afb4u: goto label_42afb4;
        case 0x42afb8u: goto label_42afb8;
        case 0x42afbcu: goto label_42afbc;
        case 0x42afc0u: goto label_42afc0;
        case 0x42afc4u: goto label_42afc4;
        case 0x42afc8u: goto label_42afc8;
        case 0x42afccu: goto label_42afcc;
        case 0x42afd0u: goto label_42afd0;
        case 0x42afd4u: goto label_42afd4;
        case 0x42afd8u: goto label_42afd8;
        case 0x42afdcu: goto label_42afdc;
        case 0x42afe0u: goto label_42afe0;
        case 0x42afe4u: goto label_42afe4;
        case 0x42afe8u: goto label_42afe8;
        case 0x42afecu: goto label_42afec;
        case 0x42aff0u: goto label_42aff0;
        case 0x42aff4u: goto label_42aff4;
        case 0x42aff8u: goto label_42aff8;
        case 0x42affcu: goto label_42affc;
        case 0x42b000u: goto label_42b000;
        case 0x42b004u: goto label_42b004;
        case 0x42b008u: goto label_42b008;
        case 0x42b00cu: goto label_42b00c;
        case 0x42b010u: goto label_42b010;
        case 0x42b014u: goto label_42b014;
        case 0x42b018u: goto label_42b018;
        case 0x42b01cu: goto label_42b01c;
        case 0x42b020u: goto label_42b020;
        case 0x42b024u: goto label_42b024;
        case 0x42b028u: goto label_42b028;
        case 0x42b02cu: goto label_42b02c;
        case 0x42b030u: goto label_42b030;
        case 0x42b034u: goto label_42b034;
        case 0x42b038u: goto label_42b038;
        case 0x42b03cu: goto label_42b03c;
        case 0x42b040u: goto label_42b040;
        case 0x42b044u: goto label_42b044;
        case 0x42b048u: goto label_42b048;
        case 0x42b04cu: goto label_42b04c;
        case 0x42b050u: goto label_42b050;
        case 0x42b054u: goto label_42b054;
        case 0x42b058u: goto label_42b058;
        case 0x42b05cu: goto label_42b05c;
        case 0x42b060u: goto label_42b060;
        case 0x42b064u: goto label_42b064;
        case 0x42b068u: goto label_42b068;
        case 0x42b06cu: goto label_42b06c;
        case 0x42b070u: goto label_42b070;
        case 0x42b074u: goto label_42b074;
        case 0x42b078u: goto label_42b078;
        case 0x42b07cu: goto label_42b07c;
        case 0x42b080u: goto label_42b080;
        case 0x42b084u: goto label_42b084;
        case 0x42b088u: goto label_42b088;
        case 0x42b08cu: goto label_42b08c;
        case 0x42b090u: goto label_42b090;
        case 0x42b094u: goto label_42b094;
        case 0x42b098u: goto label_42b098;
        case 0x42b09cu: goto label_42b09c;
        case 0x42b0a0u: goto label_42b0a0;
        case 0x42b0a4u: goto label_42b0a4;
        case 0x42b0a8u: goto label_42b0a8;
        case 0x42b0acu: goto label_42b0ac;
        case 0x42b0b0u: goto label_42b0b0;
        case 0x42b0b4u: goto label_42b0b4;
        case 0x42b0b8u: goto label_42b0b8;
        case 0x42b0bcu: goto label_42b0bc;
        case 0x42b0c0u: goto label_42b0c0;
        case 0x42b0c4u: goto label_42b0c4;
        case 0x42b0c8u: goto label_42b0c8;
        case 0x42b0ccu: goto label_42b0cc;
        case 0x42b0d0u: goto label_42b0d0;
        case 0x42b0d4u: goto label_42b0d4;
        case 0x42b0d8u: goto label_42b0d8;
        case 0x42b0dcu: goto label_42b0dc;
        case 0x42b0e0u: goto label_42b0e0;
        case 0x42b0e4u: goto label_42b0e4;
        case 0x42b0e8u: goto label_42b0e8;
        case 0x42b0ecu: goto label_42b0ec;
        case 0x42b0f0u: goto label_42b0f0;
        case 0x42b0f4u: goto label_42b0f4;
        case 0x42b0f8u: goto label_42b0f8;
        case 0x42b0fcu: goto label_42b0fc;
        case 0x42b100u: goto label_42b100;
        case 0x42b104u: goto label_42b104;
        case 0x42b108u: goto label_42b108;
        case 0x42b10cu: goto label_42b10c;
        case 0x42b110u: goto label_42b110;
        case 0x42b114u: goto label_42b114;
        case 0x42b118u: goto label_42b118;
        case 0x42b11cu: goto label_42b11c;
        case 0x42b120u: goto label_42b120;
        case 0x42b124u: goto label_42b124;
        case 0x42b128u: goto label_42b128;
        case 0x42b12cu: goto label_42b12c;
        case 0x42b130u: goto label_42b130;
        case 0x42b134u: goto label_42b134;
        case 0x42b138u: goto label_42b138;
        case 0x42b13cu: goto label_42b13c;
        case 0x42b140u: goto label_42b140;
        case 0x42b144u: goto label_42b144;
        case 0x42b148u: goto label_42b148;
        case 0x42b14cu: goto label_42b14c;
        case 0x42b150u: goto label_42b150;
        case 0x42b154u: goto label_42b154;
        case 0x42b158u: goto label_42b158;
        case 0x42b15cu: goto label_42b15c;
        case 0x42b160u: goto label_42b160;
        case 0x42b164u: goto label_42b164;
        case 0x42b168u: goto label_42b168;
        case 0x42b16cu: goto label_42b16c;
        case 0x42b170u: goto label_42b170;
        case 0x42b174u: goto label_42b174;
        case 0x42b178u: goto label_42b178;
        case 0x42b17cu: goto label_42b17c;
        case 0x42b180u: goto label_42b180;
        case 0x42b184u: goto label_42b184;
        case 0x42b188u: goto label_42b188;
        case 0x42b18cu: goto label_42b18c;
        case 0x42b190u: goto label_42b190;
        case 0x42b194u: goto label_42b194;
        case 0x42b198u: goto label_42b198;
        case 0x42b19cu: goto label_42b19c;
        case 0x42b1a0u: goto label_42b1a0;
        case 0x42b1a4u: goto label_42b1a4;
        case 0x42b1a8u: goto label_42b1a8;
        case 0x42b1acu: goto label_42b1ac;
        case 0x42b1b0u: goto label_42b1b0;
        case 0x42b1b4u: goto label_42b1b4;
        case 0x42b1b8u: goto label_42b1b8;
        case 0x42b1bcu: goto label_42b1bc;
        case 0x42b1c0u: goto label_42b1c0;
        case 0x42b1c4u: goto label_42b1c4;
        case 0x42b1c8u: goto label_42b1c8;
        case 0x42b1ccu: goto label_42b1cc;
        case 0x42b1d0u: goto label_42b1d0;
        case 0x42b1d4u: goto label_42b1d4;
        case 0x42b1d8u: goto label_42b1d8;
        case 0x42b1dcu: goto label_42b1dc;
        case 0x42b1e0u: goto label_42b1e0;
        case 0x42b1e4u: goto label_42b1e4;
        case 0x42b1e8u: goto label_42b1e8;
        case 0x42b1ecu: goto label_42b1ec;
        case 0x42b1f0u: goto label_42b1f0;
        case 0x42b1f4u: goto label_42b1f4;
        case 0x42b1f8u: goto label_42b1f8;
        case 0x42b1fcu: goto label_42b1fc;
        case 0x42b200u: goto label_42b200;
        case 0x42b204u: goto label_42b204;
        case 0x42b208u: goto label_42b208;
        case 0x42b20cu: goto label_42b20c;
        case 0x42b210u: goto label_42b210;
        case 0x42b214u: goto label_42b214;
        case 0x42b218u: goto label_42b218;
        case 0x42b21cu: goto label_42b21c;
        case 0x42b220u: goto label_42b220;
        case 0x42b224u: goto label_42b224;
        case 0x42b228u: goto label_42b228;
        case 0x42b22cu: goto label_42b22c;
        case 0x42b230u: goto label_42b230;
        case 0x42b234u: goto label_42b234;
        case 0x42b238u: goto label_42b238;
        case 0x42b23cu: goto label_42b23c;
        case 0x42b240u: goto label_42b240;
        case 0x42b244u: goto label_42b244;
        case 0x42b248u: goto label_42b248;
        case 0x42b24cu: goto label_42b24c;
        case 0x42b250u: goto label_42b250;
        case 0x42b254u: goto label_42b254;
        case 0x42b258u: goto label_42b258;
        case 0x42b25cu: goto label_42b25c;
        case 0x42b260u: goto label_42b260;
        case 0x42b264u: goto label_42b264;
        case 0x42b268u: goto label_42b268;
        case 0x42b26cu: goto label_42b26c;
        case 0x42b270u: goto label_42b270;
        case 0x42b274u: goto label_42b274;
        case 0x42b278u: goto label_42b278;
        case 0x42b27cu: goto label_42b27c;
        case 0x42b280u: goto label_42b280;
        case 0x42b284u: goto label_42b284;
        case 0x42b288u: goto label_42b288;
        case 0x42b28cu: goto label_42b28c;
        case 0x42b290u: goto label_42b290;
        case 0x42b294u: goto label_42b294;
        case 0x42b298u: goto label_42b298;
        case 0x42b29cu: goto label_42b29c;
        case 0x42b2a0u: goto label_42b2a0;
        case 0x42b2a4u: goto label_42b2a4;
        case 0x42b2a8u: goto label_42b2a8;
        case 0x42b2acu: goto label_42b2ac;
        case 0x42b2b0u: goto label_42b2b0;
        case 0x42b2b4u: goto label_42b2b4;
        case 0x42b2b8u: goto label_42b2b8;
        case 0x42b2bcu: goto label_42b2bc;
        case 0x42b2c0u: goto label_42b2c0;
        case 0x42b2c4u: goto label_42b2c4;
        case 0x42b2c8u: goto label_42b2c8;
        case 0x42b2ccu: goto label_42b2cc;
        case 0x42b2d0u: goto label_42b2d0;
        case 0x42b2d4u: goto label_42b2d4;
        case 0x42b2d8u: goto label_42b2d8;
        case 0x42b2dcu: goto label_42b2dc;
        case 0x42b2e0u: goto label_42b2e0;
        case 0x42b2e4u: goto label_42b2e4;
        case 0x42b2e8u: goto label_42b2e8;
        case 0x42b2ecu: goto label_42b2ec;
        case 0x42b2f0u: goto label_42b2f0;
        case 0x42b2f4u: goto label_42b2f4;
        case 0x42b2f8u: goto label_42b2f8;
        case 0x42b2fcu: goto label_42b2fc;
        case 0x42b300u: goto label_42b300;
        case 0x42b304u: goto label_42b304;
        case 0x42b308u: goto label_42b308;
        case 0x42b30cu: goto label_42b30c;
        case 0x42b310u: goto label_42b310;
        case 0x42b314u: goto label_42b314;
        case 0x42b318u: goto label_42b318;
        case 0x42b31cu: goto label_42b31c;
        case 0x42b320u: goto label_42b320;
        case 0x42b324u: goto label_42b324;
        case 0x42b328u: goto label_42b328;
        case 0x42b32cu: goto label_42b32c;
        case 0x42b330u: goto label_42b330;
        case 0x42b334u: goto label_42b334;
        case 0x42b338u: goto label_42b338;
        case 0x42b33cu: goto label_42b33c;
        case 0x42b340u: goto label_42b340;
        case 0x42b344u: goto label_42b344;
        case 0x42b348u: goto label_42b348;
        case 0x42b34cu: goto label_42b34c;
        case 0x42b350u: goto label_42b350;
        case 0x42b354u: goto label_42b354;
        case 0x42b358u: goto label_42b358;
        case 0x42b35cu: goto label_42b35c;
        case 0x42b360u: goto label_42b360;
        case 0x42b364u: goto label_42b364;
        case 0x42b368u: goto label_42b368;
        case 0x42b36cu: goto label_42b36c;
        case 0x42b370u: goto label_42b370;
        case 0x42b374u: goto label_42b374;
        case 0x42b378u: goto label_42b378;
        case 0x42b37cu: goto label_42b37c;
        case 0x42b380u: goto label_42b380;
        case 0x42b384u: goto label_42b384;
        case 0x42b388u: goto label_42b388;
        case 0x42b38cu: goto label_42b38c;
        case 0x42b390u: goto label_42b390;
        case 0x42b394u: goto label_42b394;
        case 0x42b398u: goto label_42b398;
        case 0x42b39cu: goto label_42b39c;
        case 0x42b3a0u: goto label_42b3a0;
        case 0x42b3a4u: goto label_42b3a4;
        case 0x42b3a8u: goto label_42b3a8;
        case 0x42b3acu: goto label_42b3ac;
        case 0x42b3b0u: goto label_42b3b0;
        case 0x42b3b4u: goto label_42b3b4;
        case 0x42b3b8u: goto label_42b3b8;
        case 0x42b3bcu: goto label_42b3bc;
        case 0x42b3c0u: goto label_42b3c0;
        case 0x42b3c4u: goto label_42b3c4;
        case 0x42b3c8u: goto label_42b3c8;
        case 0x42b3ccu: goto label_42b3cc;
        case 0x42b3d0u: goto label_42b3d0;
        case 0x42b3d4u: goto label_42b3d4;
        case 0x42b3d8u: goto label_42b3d8;
        case 0x42b3dcu: goto label_42b3dc;
        default: break;
    }

    ctx->pc = 0x42aeb0u;

label_42aeb0:
    // 0x42aeb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42aeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42aeb4:
    // 0x42aeb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42aeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42aeb8:
    // 0x42aeb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42aeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42aebc:
    // 0x42aebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42aebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42aec0:
    // 0x42aec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42aec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42aec4:
    // 0x42aec4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_42aec8:
    if (ctx->pc == 0x42AEC8u) {
        ctx->pc = 0x42AEC8u;
            // 0x42aec8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42AECCu;
        goto label_42aecc;
    }
    ctx->pc = 0x42AEC4u;
    {
        const bool branch_taken_0x42aec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AEC4u;
            // 0x42aec8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aec4) {
            ctx->pc = 0x42AF08u;
            goto label_42af08;
        }
    }
    ctx->pc = 0x42AECCu;
label_42aecc:
    // 0x42aecc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_42aed0:
    if (ctx->pc == 0x42AED0u) {
        ctx->pc = 0x42AED0u;
            // 0x42aed0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x42AED4u;
        goto label_42aed4;
    }
    ctx->pc = 0x42AECCu;
    {
        const bool branch_taken_0x42aecc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x42aecc) {
            ctx->pc = 0x42AED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42AECCu;
            // 0x42aed0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42AEF4u;
            goto label_42aef4;
        }
    }
    ctx->pc = 0x42AED4u;
label_42aed4:
    // 0x42aed4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_42aed8:
    if (ctx->pc == 0x42AED8u) {
        ctx->pc = 0x42AEDCu;
        goto label_42aedc;
    }
    ctx->pc = 0x42AED4u;
    {
        const bool branch_taken_0x42aed4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x42aed4) {
            ctx->pc = 0x42AEF0u;
            goto label_42aef0;
        }
    }
    ctx->pc = 0x42AEDCu;
label_42aedc:
    // 0x42aedc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x42aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_42aee0:
    // 0x42aee0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_42aee4:
    if (ctx->pc == 0x42AEE4u) {
        ctx->pc = 0x42AEE8u;
        goto label_42aee8;
    }
    ctx->pc = 0x42AEE0u;
    {
        const bool branch_taken_0x42aee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42aee0) {
            ctx->pc = 0x42AEF0u;
            goto label_42aef0;
        }
    }
    ctx->pc = 0x42AEE8u;
label_42aee8:
    // 0x42aee8: 0xc0400a8  jal         func_1002A0
label_42aeec:
    if (ctx->pc == 0x42AEECu) {
        ctx->pc = 0x42AEF0u;
        goto label_42aef0;
    }
    ctx->pc = 0x42AEE8u;
    SET_GPR_U32(ctx, 31, 0x42AEF0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AEF0u; }
        if (ctx->pc != 0x42AEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AEF0u; }
        if (ctx->pc != 0x42AEF0u) { return; }
    }
    ctx->pc = 0x42AEF0u;
label_42aef0:
    // 0x42aef0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x42aef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_42aef4:
    // 0x42aef4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42aef4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_42aef8:
    // 0x42aef8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_42aefc:
    if (ctx->pc == 0x42AEFCu) {
        ctx->pc = 0x42AEFCu;
            // 0x42aefc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42AF00u;
        goto label_42af00;
    }
    ctx->pc = 0x42AEF8u;
    {
        const bool branch_taken_0x42aef8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42aef8) {
            ctx->pc = 0x42AEFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42AEF8u;
            // 0x42aefc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42AF0Cu;
            goto label_42af0c;
        }
    }
    ctx->pc = 0x42AF00u;
label_42af00:
    // 0x42af00: 0xc0400a8  jal         func_1002A0
label_42af04:
    if (ctx->pc == 0x42AF04u) {
        ctx->pc = 0x42AF04u;
            // 0x42af04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42AF08u;
        goto label_42af08;
    }
    ctx->pc = 0x42AF00u;
    SET_GPR_U32(ctx, 31, 0x42AF08u);
    ctx->pc = 0x42AF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AF00u;
            // 0x42af04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AF08u; }
        if (ctx->pc != 0x42AF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AF08u; }
        if (ctx->pc != 0x42AF08u) { return; }
    }
    ctx->pc = 0x42AF08u;
label_42af08:
    // 0x42af08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x42af08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42af0c:
    // 0x42af0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42af0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42af10:
    // 0x42af10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42af10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42af14:
    // 0x42af14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42af14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42af18:
    // 0x42af18: 0x3e00008  jr          $ra
label_42af1c:
    if (ctx->pc == 0x42AF1Cu) {
        ctx->pc = 0x42AF1Cu;
            // 0x42af1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42AF20u;
        goto label_42af20;
    }
    ctx->pc = 0x42AF18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42AF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AF18u;
            // 0x42af1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42AF20u;
label_42af20:
    // 0x42af20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42af20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42af24:
    // 0x42af24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42af24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42af28:
    // 0x42af28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42af28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42af2c:
    // 0x42af2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42af2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42af30:
    // 0x42af30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42af30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42af34:
    // 0x42af34: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
label_42af38:
    if (ctx->pc == 0x42AF38u) {
        ctx->pc = 0x42AF38u;
            // 0x42af38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42AF3Cu;
        goto label_42af3c;
    }
    ctx->pc = 0x42AF34u;
    {
        const bool branch_taken_0x42af34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AF34u;
            // 0x42af38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42af34) {
            ctx->pc = 0x42B050u;
            goto label_42b050;
        }
    }
    ctx->pc = 0x42AF3Cu;
label_42af3c:
    // 0x42af3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42af40:
    // 0x42af40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42af40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42af44:
    // 0x42af44: 0x2463c270  addiu       $v1, $v1, -0x3D90
    ctx->pc = 0x42af44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951536));
label_42af48:
    // 0x42af48: 0x2442c2b0  addiu       $v0, $v0, -0x3D50
    ctx->pc = 0x42af48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951600));
label_42af4c:
    // 0x42af4c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x42af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_42af50:
    // 0x42af50: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x42af50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_42af54:
    // 0x42af54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42af54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42af58:
    // 0x42af58: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x42af58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_42af5c:
    // 0x42af5c: 0x320f809  jalr        $t9
label_42af60:
    if (ctx->pc == 0x42AF60u) {
        ctx->pc = 0x42AF64u;
        goto label_42af64;
    }
    ctx->pc = 0x42AF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42AF64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42AF64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42AF64u; }
            if (ctx->pc != 0x42AF64u) { return; }
        }
        }
    }
    ctx->pc = 0x42AF64u;
label_42af64:
    // 0x42af64: 0x262400d4  addiu       $a0, $s1, 0xD4
    ctx->pc = 0x42af64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
label_42af68:
    // 0x42af68: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_42af6c:
    if (ctx->pc == 0x42AF6Cu) {
        ctx->pc = 0x42AF70u;
        goto label_42af70;
    }
    ctx->pc = 0x42AF68u;
    {
        const bool branch_taken_0x42af68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42af68) {
            ctx->pc = 0x42AFB8u;
            goto label_42afb8;
        }
    }
    ctx->pc = 0x42AF70u;
label_42af70:
    // 0x42af70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42af70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42af74:
    // 0x42af74: 0x2442c310  addiu       $v0, $v0, -0x3CF0
    ctx->pc = 0x42af74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951696));
label_42af78:
    // 0x42af78: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_42af7c:
    if (ctx->pc == 0x42AF7Cu) {
        ctx->pc = 0x42AF7Cu;
            // 0x42af7c: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x42AF80u;
        goto label_42af80;
    }
    ctx->pc = 0x42AF78u;
    {
        const bool branch_taken_0x42af78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AF78u;
            // 0x42af7c: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42af78) {
            ctx->pc = 0x42AFB8u;
            goto label_42afb8;
        }
    }
    ctx->pc = 0x42AF80u;
label_42af80:
    // 0x42af80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42af80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42af84:
    // 0x42af84: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x42af84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_42af88:
    // 0x42af88: 0xc0d37dc  jal         func_34DF70
label_42af8c:
    if (ctx->pc == 0x42AF8Cu) {
        ctx->pc = 0x42AF8Cu;
            // 0x42af8c: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x42AF90u;
        goto label_42af90;
    }
    ctx->pc = 0x42AF88u;
    SET_GPR_U32(ctx, 31, 0x42AF90u);
    ctx->pc = 0x42AF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AF88u;
            // 0x42af8c: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AF90u; }
        if (ctx->pc != 0x42AF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AF90u; }
        if (ctx->pc != 0x42AF90u) { return; }
    }
    ctx->pc = 0x42AF90u;
label_42af90:
    // 0x42af90: 0x262300d4  addiu       $v1, $s1, 0xD4
    ctx->pc = 0x42af90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
label_42af94:
    // 0x42af94: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_42af98:
    if (ctx->pc == 0x42AF98u) {
        ctx->pc = 0x42AF9Cu;
        goto label_42af9c;
    }
    ctx->pc = 0x42AF94u;
    {
        const bool branch_taken_0x42af94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42af94) {
            ctx->pc = 0x42AFB8u;
            goto label_42afb8;
        }
    }
    ctx->pc = 0x42AF9Cu;
label_42af9c:
    // 0x42af9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42afa0:
    // 0x42afa0: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x42afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_42afa4:
    // 0x42afa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_42afa8:
    if (ctx->pc == 0x42AFA8u) {
        ctx->pc = 0x42AFA8u;
            // 0x42afa8: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x42AFACu;
        goto label_42afac;
    }
    ctx->pc = 0x42AFA4u;
    {
        const bool branch_taken_0x42afa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AFA4u;
            // 0x42afa8: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42afa4) {
            ctx->pc = 0x42AFB8u;
            goto label_42afb8;
        }
    }
    ctx->pc = 0x42AFACu;
label_42afac:
    // 0x42afac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42afacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42afb0:
    // 0x42afb0: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x42afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_42afb4:
    // 0x42afb4: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x42afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_42afb8:
    // 0x42afb8: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_42afbc:
    if (ctx->pc == 0x42AFBCu) {
        ctx->pc = 0x42AFBCu;
            // 0x42afbc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x42AFC0u;
        goto label_42afc0;
    }
    ctx->pc = 0x42AFB8u;
    {
        const bool branch_taken_0x42afb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x42afb8) {
            ctx->pc = 0x42AFBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42AFB8u;
            // 0x42afbc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42B03Cu;
            goto label_42b03c;
        }
    }
    ctx->pc = 0x42AFC0u;
label_42afc0:
    // 0x42afc0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_42afc4:
    // 0x42afc4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42afc8:
    // 0x42afc8: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x42afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_42afcc:
    // 0x42afcc: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x42afccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_42afd0:
    // 0x42afd0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x42afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_42afd4:
    // 0x42afd4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x42afd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_42afd8:
    // 0x42afd8: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x42afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_42afdc:
    // 0x42afdc: 0xc0aecc4  jal         func_2BB310
label_42afe0:
    if (ctx->pc == 0x42AFE0u) {
        ctx->pc = 0x42AFE0u;
            // 0x42afe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42AFE4u;
        goto label_42afe4;
    }
    ctx->pc = 0x42AFDCu;
    SET_GPR_U32(ctx, 31, 0x42AFE4u);
    ctx->pc = 0x42AFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AFDCu;
            // 0x42afe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AFE4u; }
        if (ctx->pc != 0x42AFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AFE4u; }
        if (ctx->pc != 0x42AFE4u) { return; }
    }
    ctx->pc = 0x42AFE4u;
label_42afe4:
    // 0x42afe4: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x42afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_42afe8:
    // 0x42afe8: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x42afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_42afec:
    // 0x42afec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_42aff0:
    if (ctx->pc == 0x42AFF0u) {
        ctx->pc = 0x42AFF0u;
            // 0x42aff0: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x42AFF4u;
        goto label_42aff4;
    }
    ctx->pc = 0x42AFECu;
    {
        const bool branch_taken_0x42afec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42afec) {
            ctx->pc = 0x42AFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42AFECu;
            // 0x42aff0: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AFF4u;
label_42aff4:
    // 0x42aff4: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x42aff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_42aff8:
    // 0x42aff8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42aff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42affc:
    // 0x42affc: 0x320f809  jalr        $t9
label_42b000:
    if (ctx->pc == 0x42B000u) {
        ctx->pc = 0x42B000u;
            // 0x42b000: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42B004u;
        goto label_42b004;
    }
    ctx->pc = 0x42AFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42B004u);
        ctx->pc = 0x42B000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AFFCu;
            // 0x42b000: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42B004u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42B004u; }
            if (ctx->pc != 0x42B004u) { return; }
        }
        }
    }
    ctx->pc = 0x42B004u;
label_42b004:
    // 0x42b004: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x42b004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_42b008:
    // 0x42b008: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x42b008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_42b00c:
    // 0x42b00c: 0xc0aec9c  jal         func_2BB270
label_42b010:
    if (ctx->pc == 0x42B010u) {
        ctx->pc = 0x42B010u;
            // 0x42b010: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x42B014u;
        goto label_42b014;
    }
    ctx->pc = 0x42B00Cu;
    SET_GPR_U32(ctx, 31, 0x42B014u);
    ctx->pc = 0x42B010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B00Cu;
            // 0x42b010: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B014u; }
        if (ctx->pc != 0x42B014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B014u; }
        if (ctx->pc != 0x42B014u) { return; }
    }
    ctx->pc = 0x42B014u;
label_42b014:
    // 0x42b014: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x42b014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_42b018:
    // 0x42b018: 0xc0aec88  jal         func_2BB220
label_42b01c:
    if (ctx->pc == 0x42B01Cu) {
        ctx->pc = 0x42B01Cu;
            // 0x42b01c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x42B020u;
        goto label_42b020;
    }
    ctx->pc = 0x42B018u;
    SET_GPR_U32(ctx, 31, 0x42B020u);
    ctx->pc = 0x42B01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B018u;
            // 0x42b01c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B020u; }
        if (ctx->pc != 0x42B020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B020u; }
        if (ctx->pc != 0x42B020u) { return; }
    }
    ctx->pc = 0x42B020u;
label_42b020:
    // 0x42b020: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x42b020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_42b024:
    // 0x42b024: 0xc0aec0c  jal         func_2BB030
label_42b028:
    if (ctx->pc == 0x42B028u) {
        ctx->pc = 0x42B028u;
            // 0x42b028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B02Cu;
        goto label_42b02c;
    }
    ctx->pc = 0x42B024u;
    SET_GPR_U32(ctx, 31, 0x42B02Cu);
    ctx->pc = 0x42B028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B024u;
            // 0x42b028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B02Cu; }
        if (ctx->pc != 0x42B02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B02Cu; }
        if (ctx->pc != 0x42B02Cu) { return; }
    }
    ctx->pc = 0x42B02Cu;
label_42b02c:
    // 0x42b02c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42b02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42b030:
    // 0x42b030: 0xc0aeaa8  jal         func_2BAAA0
label_42b034:
    if (ctx->pc == 0x42B034u) {
        ctx->pc = 0x42B034u;
            // 0x42b034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B038u;
        goto label_42b038;
    }
    ctx->pc = 0x42B030u;
    SET_GPR_U32(ctx, 31, 0x42B038u);
    ctx->pc = 0x42B034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B030u;
            // 0x42b034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B038u; }
        if (ctx->pc != 0x42B038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B038u; }
        if (ctx->pc != 0x42B038u) { return; }
    }
    ctx->pc = 0x42B038u;
label_42b038:
    // 0x42b038: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x42b038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_42b03c:
    // 0x42b03c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42b03cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_42b040:
    // 0x42b040: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_42b044:
    if (ctx->pc == 0x42B044u) {
        ctx->pc = 0x42B044u;
            // 0x42b044: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B048u;
        goto label_42b048;
    }
    ctx->pc = 0x42B040u;
    {
        const bool branch_taken_0x42b040 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42b040) {
            ctx->pc = 0x42B044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42B040u;
            // 0x42b044: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42B054u;
            goto label_42b054;
        }
    }
    ctx->pc = 0x42B048u;
label_42b048:
    // 0x42b048: 0xc0400a8  jal         func_1002A0
label_42b04c:
    if (ctx->pc == 0x42B04Cu) {
        ctx->pc = 0x42B04Cu;
            // 0x42b04c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B050u;
        goto label_42b050;
    }
    ctx->pc = 0x42B048u;
    SET_GPR_U32(ctx, 31, 0x42B050u);
    ctx->pc = 0x42B04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B048u;
            // 0x42b04c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B050u; }
        if (ctx->pc != 0x42B050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B050u; }
        if (ctx->pc != 0x42B050u) { return; }
    }
    ctx->pc = 0x42B050u;
label_42b050:
    // 0x42b050: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x42b050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42b054:
    // 0x42b054: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42b054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42b058:
    // 0x42b058: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42b058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42b05c:
    // 0x42b05c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42b05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42b060:
    // 0x42b060: 0x3e00008  jr          $ra
label_42b064:
    if (ctx->pc == 0x42B064u) {
        ctx->pc = 0x42B064u;
            // 0x42b064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42B068u;
        goto label_42b068;
    }
    ctx->pc = 0x42B060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B060u;
            // 0x42b064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42B068u;
label_42b068:
    // 0x42b068: 0x0  nop
    ctx->pc = 0x42b068u;
    // NOP
label_42b06c:
    // 0x42b06c: 0x0  nop
    ctx->pc = 0x42b06cu;
    // NOP
label_42b070:
    // 0x42b070: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x42b070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_42b074:
    // 0x42b074: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x42b074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42b078:
    // 0x42b078: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x42b078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_42b07c:
    // 0x42b07c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x42b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_42b080:
    // 0x42b080: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x42b080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_42b084:
    // 0x42b084: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x42b084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_42b088:
    // 0x42b088: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x42b088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_42b08c:
    // 0x42b08c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x42b08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_42b090:
    // 0x42b090: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x42b090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_42b094:
    // 0x42b094: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x42b094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_42b098:
    // 0x42b098: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x42b098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_42b09c:
    // 0x42b09c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x42b09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_42b0a0:
    // 0x42b0a0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x42b0a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_42b0a4:
    // 0x42b0a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x42b0a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_42b0a8:
    // 0x42b0a8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x42b0a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_42b0ac:
    // 0x42b0ac: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_42b0b0:
    if (ctx->pc == 0x42B0B0u) {
        ctx->pc = 0x42B0B0u;
            // 0x42b0b0: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B0B4u;
        goto label_42b0b4;
    }
    ctx->pc = 0x42B0ACu;
    {
        const bool branch_taken_0x42b0ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x42B0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B0ACu;
            // 0x42b0b0: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b0ac) {
            ctx->pc = 0x42B0FCu;
            goto label_42b0fc;
        }
    }
    ctx->pc = 0x42B0B4u;
label_42b0b4:
    // 0x42b0b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x42b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42b0b8:
    // 0x42b0b8: 0x50a300bc  beql        $a1, $v1, . + 4 + (0xBC << 2)
label_42b0bc:
    if (ctx->pc == 0x42B0BCu) {
        ctx->pc = 0x42B0BCu;
            // 0x42b0bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x42B0C0u;
        goto label_42b0c0;
    }
    ctx->pc = 0x42B0B8u;
    {
        const bool branch_taken_0x42b0b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x42b0b8) {
            ctx->pc = 0x42B0BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42B0B8u;
            // 0x42b0bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42B3ACu;
            goto label_42b3ac;
        }
    }
    ctx->pc = 0x42B0C0u;
label_42b0c0:
    // 0x42b0c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x42b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42b0c4:
    // 0x42b0c4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_42b0c8:
    if (ctx->pc == 0x42B0C8u) {
        ctx->pc = 0x42B0CCu;
        goto label_42b0cc;
    }
    ctx->pc = 0x42B0C4u;
    {
        const bool branch_taken_0x42b0c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x42b0c4) {
            ctx->pc = 0x42B0D4u;
            goto label_42b0d4;
        }
    }
    ctx->pc = 0x42B0CCu;
label_42b0cc:
    // 0x42b0cc: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_42b0d0:
    if (ctx->pc == 0x42B0D0u) {
        ctx->pc = 0x42B0D4u;
        goto label_42b0d4;
    }
    ctx->pc = 0x42B0CCu;
    {
        const bool branch_taken_0x42b0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b0cc) {
            ctx->pc = 0x42B3A8u;
            goto label_42b3a8;
        }
    }
    ctx->pc = 0x42B0D4u;
label_42b0d4:
    // 0x42b0d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42b0d8:
    // 0x42b0d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42b0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42b0dc:
    // 0x42b0dc: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x42b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_42b0e0:
    // 0x42b0e0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x42b0e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_42b0e4:
    // 0x42b0e4: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x42b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_42b0e8:
    // 0x42b0e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x42b0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_42b0ec:
    // 0x42b0ec: 0x320f809  jalr        $t9
label_42b0f0:
    if (ctx->pc == 0x42B0F0u) {
        ctx->pc = 0x42B0F0u;
            // 0x42b0f0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x42B0F4u;
        goto label_42b0f4;
    }
    ctx->pc = 0x42B0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42B0F4u);
        ctx->pc = 0x42B0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B0ECu;
            // 0x42b0f0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42B0F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42B0F4u; }
            if (ctx->pc != 0x42B0F4u) { return; }
        }
        }
    }
    ctx->pc = 0x42B0F4u;
label_42b0f4:
    // 0x42b0f4: 0x100000ac  b           . + 4 + (0xAC << 2)
label_42b0f8:
    if (ctx->pc == 0x42B0F8u) {
        ctx->pc = 0x42B0FCu;
        goto label_42b0fc;
    }
    ctx->pc = 0x42B0F4u;
    {
        const bool branch_taken_0x42b0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b0f4) {
            ctx->pc = 0x42B3A8u;
            goto label_42b3a8;
        }
    }
    ctx->pc = 0x42B0FCu;
label_42b0fc:
    // 0x42b0fc: 0x8ede0070  lw          $fp, 0x70($s6)
    ctx->pc = 0x42b0fcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_42b100:
    // 0x42b100: 0x13c000a9  beqz        $fp, . + 4 + (0xA9 << 2)
label_42b104:
    if (ctx->pc == 0x42B104u) {
        ctx->pc = 0x42B108u;
        goto label_42b108;
    }
    ctx->pc = 0x42B100u;
    {
        const bool branch_taken_0x42b100 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b100) {
            ctx->pc = 0x42B3A8u;
            goto label_42b3a8;
        }
    }
    ctx->pc = 0x42B108u;
label_42b108:
    // 0x42b108: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x42b108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_42b10c:
    // 0x42b10c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42b110:
    // 0x42b110: 0x8c86d130  lw          $a2, -0x2ED0($a0)
    ctx->pc = 0x42b110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_42b114:
    // 0x42b114: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x42b114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_42b118:
    // 0x42b118: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x42b118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_42b11c:
    // 0x42b11c: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x42b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_42b120:
    // 0x42b120: 0x8cd70130  lw          $s7, 0x130($a2)
    ctx->pc = 0x42b120u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_42b124:
    // 0x42b124: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x42b124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_42b128:
    // 0x42b128: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x42b128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_42b12c:
    // 0x42b12c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42b130:
    // 0x42b130: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x42b130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_42b134:
    // 0x42b134: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42b134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42b138:
    // 0x42b138: 0x173080  sll         $a2, $s7, 2
    ctx->pc = 0x42b138u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_42b13c:
    // 0x42b13c: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x42b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_42b140:
    // 0x42b140: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x42b140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_42b144:
    // 0x42b144: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x42b144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_42b148:
    // 0x42b148: 0x8c847328  lw          $a0, 0x7328($a0)
    ctx->pc = 0x42b148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29480)));
label_42b14c:
    // 0x42b14c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x42b14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_42b150:
    // 0x42b150: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42b150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42b154:
    // 0x42b154: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x42b154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_42b158:
    // 0x42b158: 0x24910084  addiu       $s1, $a0, 0x84
    ctx->pc = 0x42b158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_42b15c:
    // 0x42b15c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x42b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_42b160:
    // 0x42b160: 0x8c840088  lw          $a0, 0x88($a0)
    ctx->pc = 0x42b160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_42b164:
    // 0x42b164: 0xc04e738  jal         func_139CE0
label_42b168:
    if (ctx->pc == 0x42B168u) {
        ctx->pc = 0x42B168u;
            // 0x42b168: 0x24b20010  addiu       $s2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x42B16Cu;
        goto label_42b16c;
    }
    ctx->pc = 0x42B164u;
    SET_GPR_U32(ctx, 31, 0x42B16Cu);
    ctx->pc = 0x42B168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B164u;
            // 0x42b168: 0x24b20010  addiu       $s2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B16Cu; }
        if (ctx->pc != 0x42B16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B16Cu; }
        if (ctx->pc != 0x42B16Cu) { return; }
    }
    ctx->pc = 0x42B16Cu;
label_42b16c:
    // 0x42b16c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x42b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_42b170:
    // 0x42b170: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x42b170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42b174:
    // 0x42b174: 0xc455cb28  lwc1        $f21, -0x34D8($v0)
    ctx->pc = 0x42b174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_42b178:
    // 0x42b178: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x42b178u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42b17c:
    // 0x42b17c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x42b17cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_42b180:
    // 0x42b180: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x42b180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_42b184:
    // 0x42b184: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x42b184u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_42b188:
    // 0x42b188: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x42b188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_42b18c:
    // 0x42b18c: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x42b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_42b190:
    // 0x42b190: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x42b190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_42b194:
    // 0x42b194: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x42b194u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42b198:
    // 0x42b198: 0xc0d639c  jal         func_358E70
label_42b19c:
    if (ctx->pc == 0x42B19Cu) {
        ctx->pc = 0x42B19Cu;
            // 0x42b19c: 0x26a4006c  addiu       $a0, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->pc = 0x42B1A0u;
        goto label_42b1a0;
    }
    ctx->pc = 0x42B198u;
    SET_GPR_U32(ctx, 31, 0x42B1A0u);
    ctx->pc = 0x42B19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B198u;
            // 0x42b19c: 0x26a4006c  addiu       $a0, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1A0u; }
        if (ctx->pc != 0x42B1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1A0u; }
        if (ctx->pc != 0x42B1A0u) { return; }
    }
    ctx->pc = 0x42B1A0u;
label_42b1a0:
    // 0x42b1a0: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_42b1a4:
    if (ctx->pc == 0x42B1A4u) {
        ctx->pc = 0x42B1A8u;
        goto label_42b1a8;
    }
    ctx->pc = 0x42B1A0u;
    {
        const bool branch_taken_0x42b1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b1a0) {
            ctx->pc = 0x42B368u;
            goto label_42b368;
        }
    }
    ctx->pc = 0x42B1A8u;
label_42b1a8:
    // 0x42b1a8: 0xc0d1c14  jal         func_347050
label_42b1ac:
    if (ctx->pc == 0x42B1ACu) {
        ctx->pc = 0x42B1ACu;
            // 0x42b1ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B1B0u;
        goto label_42b1b0;
    }
    ctx->pc = 0x42B1A8u;
    SET_GPR_U32(ctx, 31, 0x42B1B0u);
    ctx->pc = 0x42B1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B1A8u;
            // 0x42b1ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1B0u; }
        if (ctx->pc != 0x42B1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1B0u; }
        if (ctx->pc != 0x42B1B0u) { return; }
    }
    ctx->pc = 0x42B1B0u;
label_42b1b0:
    // 0x42b1b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42b1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42b1b4:
    // 0x42b1b4: 0xc04f278  jal         func_13C9E0
label_42b1b8:
    if (ctx->pc == 0x42B1B8u) {
        ctx->pc = 0x42B1B8u;
            // 0x42b1b8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x42B1BCu;
        goto label_42b1bc;
    }
    ctx->pc = 0x42B1B4u;
    SET_GPR_U32(ctx, 31, 0x42B1BCu);
    ctx->pc = 0x42B1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B1B4u;
            // 0x42b1b8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1BCu; }
        if (ctx->pc != 0x42B1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1BCu; }
        if (ctx->pc != 0x42B1BCu) { return; }
    }
    ctx->pc = 0x42B1BCu;
label_42b1bc:
    // 0x42b1bc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x42b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_42b1c0:
    // 0x42b1c0: 0x2406eaab  addiu       $a2, $zero, -0x1555
    ctx->pc = 0x42b1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961835));
label_42b1c4:
    // 0x42b1c4: 0xc04cdd0  jal         func_133740
label_42b1c8:
    if (ctx->pc == 0x42B1C8u) {
        ctx->pc = 0x42B1C8u;
            // 0x42b1c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B1CCu;
        goto label_42b1cc;
    }
    ctx->pc = 0x42B1C4u;
    SET_GPR_U32(ctx, 31, 0x42B1CCu);
    ctx->pc = 0x42B1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B1C4u;
            // 0x42b1c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1CCu; }
        if (ctx->pc != 0x42B1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1CCu; }
        if (ctx->pc != 0x42B1CCu) { return; }
    }
    ctx->pc = 0x42B1CCu;
label_42b1cc:
    // 0x42b1cc: 0xc0d1c10  jal         func_347040
label_42b1d0:
    if (ctx->pc == 0x42B1D0u) {
        ctx->pc = 0x42B1D0u;
            // 0x42b1d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B1D4u;
        goto label_42b1d4;
    }
    ctx->pc = 0x42B1CCu;
    SET_GPR_U32(ctx, 31, 0x42B1D4u);
    ctx->pc = 0x42B1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B1CCu;
            // 0x42b1d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1D4u; }
        if (ctx->pc != 0x42B1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1D4u; }
        if (ctx->pc != 0x42B1D4u) { return; }
    }
    ctx->pc = 0x42B1D4u;
label_42b1d4:
    // 0x42b1d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42b1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42b1d8:
    // 0x42b1d8: 0xc04ce80  jal         func_133A00
label_42b1dc:
    if (ctx->pc == 0x42B1DCu) {
        ctx->pc = 0x42B1DCu;
            // 0x42b1dc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x42B1E0u;
        goto label_42b1e0;
    }
    ctx->pc = 0x42B1D8u;
    SET_GPR_U32(ctx, 31, 0x42B1E0u);
    ctx->pc = 0x42B1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B1D8u;
            // 0x42b1dc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1E0u; }
        if (ctx->pc != 0x42B1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1E0u; }
        if (ctx->pc != 0x42B1E0u) { return; }
    }
    ctx->pc = 0x42B1E0u;
label_42b1e0:
    // 0x42b1e0: 0xc0d4108  jal         func_350420
label_42b1e4:
    if (ctx->pc == 0x42B1E4u) {
        ctx->pc = 0x42B1E8u;
        goto label_42b1e8;
    }
    ctx->pc = 0x42B1E0u;
    SET_GPR_U32(ctx, 31, 0x42B1E8u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1E8u; }
        if (ctx->pc != 0x42B1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1E8u; }
        if (ctx->pc != 0x42B1E8u) { return; }
    }
    ctx->pc = 0x42B1E8u;
label_42b1e8:
    // 0x42b1e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x42b1e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42b1ec:
    // 0x42b1ec: 0xc0d4104  jal         func_350410
label_42b1f0:
    if (ctx->pc == 0x42B1F0u) {
        ctx->pc = 0x42B1F0u;
            // 0x42b1f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B1F4u;
        goto label_42b1f4;
    }
    ctx->pc = 0x42B1ECu;
    SET_GPR_U32(ctx, 31, 0x42B1F4u);
    ctx->pc = 0x42B1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B1ECu;
            // 0x42b1f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1F4u; }
        if (ctx->pc != 0x42B1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B1F4u; }
        if (ctx->pc != 0x42B1F4u) { return; }
    }
    ctx->pc = 0x42B1F4u;
label_42b1f4:
    // 0x42b1f4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x42b1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42b1f8:
    // 0x42b1f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x42b1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42b1fc:
    // 0x42b1fc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x42b1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_42b200:
    // 0x42b200: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x42b200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_42b204:
    // 0x42b204: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x42b204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42b208:
    // 0x42b208: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x42b208u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42b20c:
    // 0x42b20c: 0xc0d40ac  jal         func_3502B0
label_42b210:
    if (ctx->pc == 0x42B210u) {
        ctx->pc = 0x42B210u;
            // 0x42b210: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x42B214u;
        goto label_42b214;
    }
    ctx->pc = 0x42B20Cu;
    SET_GPR_U32(ctx, 31, 0x42B214u);
    ctx->pc = 0x42B210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B20Cu;
            // 0x42b210: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B214u; }
        if (ctx->pc != 0x42B214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B214u; }
        if (ctx->pc != 0x42B214u) { return; }
    }
    ctx->pc = 0x42B214u;
label_42b214:
    // 0x42b214: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x42b214u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_42b218:
    // 0x42b218: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
label_42b21c:
    if (ctx->pc == 0x42B21Cu) {
        ctx->pc = 0x42B21Cu;
            // 0x42b21c: 0xaea20044  sw          $v0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x42B220u;
        goto label_42b220;
    }
    ctx->pc = 0x42B218u;
    {
        const bool branch_taken_0x42b218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B218u;
            // 0x42b21c: 0xaea20044  sw          $v0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b218) {
            ctx->pc = 0x42B368u;
            goto label_42b368;
        }
    }
    ctx->pc = 0x42B220u;
label_42b220:
    // 0x42b220: 0x26b3006c  addiu       $s3, $s5, 0x6C
    ctx->pc = 0x42b220u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
label_42b224:
    // 0x42b224: 0xc10314c  jal         func_40C530
label_42b228:
    if (ctx->pc == 0x42B228u) {
        ctx->pc = 0x42B228u;
            // 0x42b228: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B22Cu;
        goto label_42b22c;
    }
    ctx->pc = 0x42B224u;
    SET_GPR_U32(ctx, 31, 0x42B22Cu);
    ctx->pc = 0x42B228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B224u;
            // 0x42b228: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40C530u;
    if (runtime->hasFunction(0x40C530u)) {
        auto targetFn = runtime->lookupFunction(0x40C530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B22Cu; }
        if (ctx->pc != 0x42B22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040C530_0x40c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B22Cu; }
        if (ctx->pc != 0x42B22Cu) { return; }
    }
    ctx->pc = 0x42B22Cu;
label_42b22c:
    // 0x42b22c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_42b230:
    if (ctx->pc == 0x42B230u) {
        ctx->pc = 0x42B234u;
        goto label_42b234;
    }
    ctx->pc = 0x42B22Cu;
    {
        const bool branch_taken_0x42b22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b22c) {
            ctx->pc = 0x42B310u;
            goto label_42b310;
        }
    }
    ctx->pc = 0x42B234u;
label_42b234:
    // 0x42b234: 0xc0e3b0c  jal         func_38EC30
label_42b238:
    if (ctx->pc == 0x42B238u) {
        ctx->pc = 0x42B238u;
            // 0x42b238: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B23Cu;
        goto label_42b23c;
    }
    ctx->pc = 0x42B234u;
    SET_GPR_U32(ctx, 31, 0x42B23Cu);
    ctx->pc = 0x42B238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B234u;
            // 0x42b238: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38EC30u;
    if (runtime->hasFunction(0x38EC30u)) {
        auto targetFn = runtime->lookupFunction(0x38EC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B23Cu; }
        if (ctx->pc != 0x42B23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038EC30_0x38ec30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B23Cu; }
        if (ctx->pc != 0x42B23Cu) { return; }
    }
    ctx->pc = 0x42B23Cu;
label_42b23c:
    // 0x42b23c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x42b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_42b240:
    // 0x42b240: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x42b240u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_42b244:
    // 0x42b244: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x42b244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_42b248:
    // 0x42b248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x42b248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42b24c:
    // 0x42b24c: 0x0  nop
    ctx->pc = 0x42b24cu;
    // NOP
label_42b250:
    // 0x42b250: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x42b250u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42b254:
    // 0x42b254: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_42b258:
    if (ctx->pc == 0x42B258u) {
        ctx->pc = 0x42B25Cu;
        goto label_42b25c;
    }
    ctx->pc = 0x42B254u;
    {
        const bool branch_taken_0x42b254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x42b254) {
            ctx->pc = 0x42B310u;
            goto label_42b310;
        }
    }
    ctx->pc = 0x42B25Cu;
label_42b25c:
    // 0x42b25c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x42b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42b260:
    // 0x42b260: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x42b260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_42b264:
    // 0x42b264: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x42b264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_42b268:
    // 0x42b268: 0xc04e4a4  jal         func_139290
label_42b26c:
    if (ctx->pc == 0x42B26Cu) {
        ctx->pc = 0x42B26Cu;
            // 0x42b26c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B270u;
        goto label_42b270;
    }
    ctx->pc = 0x42B268u;
    SET_GPR_U32(ctx, 31, 0x42B270u);
    ctx->pc = 0x42B26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B268u;
            // 0x42b26c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B270u; }
        if (ctx->pc != 0x42B270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B270u; }
        if (ctx->pc != 0x42B270u) { return; }
    }
    ctx->pc = 0x42B270u;
label_42b270:
    // 0x42b270: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x42b270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_42b274:
    // 0x42b274: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x42b274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42b278:
    // 0x42b278: 0xc04cd60  jal         func_133580
label_42b27c:
    if (ctx->pc == 0x42B27Cu) {
        ctx->pc = 0x42B27Cu;
            // 0x42b27c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x42B280u;
        goto label_42b280;
    }
    ctx->pc = 0x42B278u;
    SET_GPR_U32(ctx, 31, 0x42B280u);
    ctx->pc = 0x42B27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B278u;
            // 0x42b27c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B280u; }
        if (ctx->pc != 0x42B280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B280u; }
        if (ctx->pc != 0x42B280u) { return; }
    }
    ctx->pc = 0x42B280u;
label_42b280:
    // 0x42b280: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x42b280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_42b284:
    // 0x42b284: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x42b284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_42b288:
    // 0x42b288: 0x320f809  jalr        $t9
label_42b28c:
    if (ctx->pc == 0x42B28Cu) {
        ctx->pc = 0x42B28Cu;
            // 0x42b28c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B290u;
        goto label_42b290;
    }
    ctx->pc = 0x42B288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42B290u);
        ctx->pc = 0x42B28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B288u;
            // 0x42b28c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42B290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42B290u; }
            if (ctx->pc != 0x42B290u) { return; }
        }
        }
    }
    ctx->pc = 0x42B290u;
label_42b290:
    // 0x42b290: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x42b290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_42b294:
    // 0x42b294: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x42b294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42b298:
    // 0x42b298: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x42b298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_42b29c:
    // 0x42b29c: 0xc054fd4  jal         func_153F50
label_42b2a0:
    if (ctx->pc == 0x42B2A0u) {
        ctx->pc = 0x42B2A0u;
            // 0x42b2a0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B2A4u;
        goto label_42b2a4;
    }
    ctx->pc = 0x42B29Cu;
    SET_GPR_U32(ctx, 31, 0x42B2A4u);
    ctx->pc = 0x42B2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B29Cu;
            // 0x42b2a0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B2A4u; }
        if (ctx->pc != 0x42B2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B2A4u; }
        if (ctx->pc != 0x42B2A4u) { return; }
    }
    ctx->pc = 0x42B2A4u;
label_42b2a4:
    // 0x42b2a4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x42b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_42b2a8:
    // 0x42b2a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x42b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42b2ac:
    // 0x42b2ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x42b2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_42b2b0:
    // 0x42b2b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x42b2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42b2b4:
    // 0x42b2b4: 0x0  nop
    ctx->pc = 0x42b2b4u;
    // NOP
label_42b2b8:
    // 0x42b2b8: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x42b2b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
label_42b2bc:
    // 0x42b2bc: 0x0  nop
    ctx->pc = 0x42b2bcu;
    // NOP
label_42b2c0:
    // 0x42b2c0: 0x0  nop
    ctx->pc = 0x42b2c0u;
    // NOP
label_42b2c4:
    // 0x42b2c4: 0xc054c3c  jal         func_1530F0
label_42b2c8:
    if (ctx->pc == 0x42B2C8u) {
        ctx->pc = 0x42B2CCu;
        goto label_42b2cc;
    }
    ctx->pc = 0x42B2C4u;
    SET_GPR_U32(ctx, 31, 0x42B2CCu);
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B2CCu; }
        if (ctx->pc != 0x42B2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B2CCu; }
        if (ctx->pc != 0x42B2CCu) { return; }
    }
    ctx->pc = 0x42B2CCu;
label_42b2cc:
    // 0x42b2cc: 0xc054c40  jal         func_153100
label_42b2d0:
    if (ctx->pc == 0x42B2D0u) {
        ctx->pc = 0x42B2D0u;
            // 0x42b2d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B2D4u;
        goto label_42b2d4;
    }
    ctx->pc = 0x42B2CCu;
    SET_GPR_U32(ctx, 31, 0x42B2D4u);
    ctx->pc = 0x42B2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B2CCu;
            // 0x42b2d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B2D4u; }
        if (ctx->pc != 0x42B2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B2D4u; }
        if (ctx->pc != 0x42B2D4u) { return; }
    }
    ctx->pc = 0x42B2D4u;
label_42b2d4:
    // 0x42b2d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x42b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42b2d8:
    // 0x42b2d8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x42b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_42b2dc:
    // 0x42b2dc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x42b2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_42b2e0:
    // 0x42b2e0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x42b2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_42b2e4:
    // 0x42b2e4: 0x8fa6012c  lw          $a2, 0x12C($sp)
    ctx->pc = 0x42b2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_42b2e8:
    // 0x42b2e8: 0xc10ad20  jal         func_42B480
label_42b2ec:
    if (ctx->pc == 0x42B2ECu) {
        ctx->pc = 0x42B2ECu;
            // 0x42b2ec: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x42B2F0u;
        goto label_42b2f0;
    }
    ctx->pc = 0x42B2E8u;
    SET_GPR_U32(ctx, 31, 0x42B2F0u);
    ctx->pc = 0x42B2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B2E8u;
            // 0x42b2ec: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x42B480u;
    if (runtime->hasFunction(0x42B480u)) {
        auto targetFn = runtime->lookupFunction(0x42B480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B2F0u; }
        if (ctx->pc != 0x42B2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042B480_0x42b480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B2F0u; }
        if (ctx->pc != 0x42B2F0u) { return; }
    }
    ctx->pc = 0x42B2F0u;
label_42b2f0:
    // 0x42b2f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x42b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_42b2f4:
    // 0x42b2f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42b2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42b2f8:
    // 0x42b2f8: 0xc054c3c  jal         func_1530F0
label_42b2fc:
    if (ctx->pc == 0x42B2FCu) {
        ctx->pc = 0x42B2FCu;
            // 0x42b2fc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x42B300u;
        goto label_42b300;
    }
    ctx->pc = 0x42B2F8u;
    SET_GPR_U32(ctx, 31, 0x42B300u);
    ctx->pc = 0x42B2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B2F8u;
            // 0x42b2fc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B300u; }
        if (ctx->pc != 0x42B300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B300u; }
        if (ctx->pc != 0x42B300u) { return; }
    }
    ctx->pc = 0x42B300u;
label_42b300:
    // 0x42b300: 0xc054c40  jal         func_153100
label_42b304:
    if (ctx->pc == 0x42B304u) {
        ctx->pc = 0x42B304u;
            // 0x42b304: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B308u;
        goto label_42b308;
    }
    ctx->pc = 0x42B300u;
    SET_GPR_U32(ctx, 31, 0x42B308u);
    ctx->pc = 0x42B304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B300u;
            // 0x42b304: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B308u; }
        if (ctx->pc != 0x42B308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B308u; }
        if (ctx->pc != 0x42B308u) { return; }
    }
    ctx->pc = 0x42B308u;
label_42b308:
    // 0x42b308: 0x10000017  b           . + 4 + (0x17 << 2)
label_42b30c:
    if (ctx->pc == 0x42B30Cu) {
        ctx->pc = 0x42B310u;
        goto label_42b310;
    }
    ctx->pc = 0x42B308u;
    {
        const bool branch_taken_0x42b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b308) {
            ctx->pc = 0x42B368u;
            goto label_42b368;
        }
    }
    ctx->pc = 0x42B310u;
label_42b310:
    // 0x42b310: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x42b310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42b314:
    // 0x42b314: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x42b314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_42b318:
    // 0x42b318: 0xc10acf8  jal         func_42B3E0
label_42b31c:
    if (ctx->pc == 0x42B31Cu) {
        ctx->pc = 0x42B31Cu;
            // 0x42b31c: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->pc = 0x42B320u;
        goto label_42b320;
    }
    ctx->pc = 0x42B318u;
    SET_GPR_U32(ctx, 31, 0x42B320u);
    ctx->pc = 0x42B31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B318u;
            // 0x42b31c: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42B3E0u;
    if (runtime->hasFunction(0x42B3E0u)) {
        auto targetFn = runtime->lookupFunction(0x42B3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B320u; }
        if (ctx->pc != 0x42B320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042B3E0_0x42b3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B320u; }
        if (ctx->pc != 0x42B320u) { return; }
    }
    ctx->pc = 0x42B320u;
label_42b320:
    // 0x42b320: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x42b320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42b324:
    // 0x42b324: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x42b324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_42b328:
    // 0x42b328: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x42b328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_42b32c:
    // 0x42b32c: 0xc04e4a4  jal         func_139290
label_42b330:
    if (ctx->pc == 0x42B330u) {
        ctx->pc = 0x42B330u;
            // 0x42b330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B334u;
        goto label_42b334;
    }
    ctx->pc = 0x42B32Cu;
    SET_GPR_U32(ctx, 31, 0x42B334u);
    ctx->pc = 0x42B330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B32Cu;
            // 0x42b330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B334u; }
        if (ctx->pc != 0x42B334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B334u; }
        if (ctx->pc != 0x42B334u) { return; }
    }
    ctx->pc = 0x42B334u;
label_42b334:
    // 0x42b334: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x42b334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_42b338:
    // 0x42b338: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x42b338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42b33c:
    // 0x42b33c: 0xc04cd60  jal         func_133580
label_42b340:
    if (ctx->pc == 0x42B340u) {
        ctx->pc = 0x42B340u;
            // 0x42b340: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x42B344u;
        goto label_42b344;
    }
    ctx->pc = 0x42B33Cu;
    SET_GPR_U32(ctx, 31, 0x42B344u);
    ctx->pc = 0x42B340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B33Cu;
            // 0x42b340: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B344u; }
        if (ctx->pc != 0x42B344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B344u; }
        if (ctx->pc != 0x42B344u) { return; }
    }
    ctx->pc = 0x42B344u;
label_42b344:
    // 0x42b344: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x42b344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_42b348:
    // 0x42b348: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x42b348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_42b34c:
    // 0x42b34c: 0x320f809  jalr        $t9
label_42b350:
    if (ctx->pc == 0x42B350u) {
        ctx->pc = 0x42B350u;
            // 0x42b350: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B354u;
        goto label_42b354;
    }
    ctx->pc = 0x42B34Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42B354u);
        ctx->pc = 0x42B350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B34Cu;
            // 0x42b350: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42B354u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42B354u; }
            if (ctx->pc != 0x42B354u) { return; }
        }
        }
    }
    ctx->pc = 0x42B354u;
label_42b354:
    // 0x42b354: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x42b354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_42b358:
    // 0x42b358: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x42b358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42b35c:
    // 0x42b35c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x42b35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_42b360:
    // 0x42b360: 0xc054fd4  jal         func_153F50
label_42b364:
    if (ctx->pc == 0x42B364u) {
        ctx->pc = 0x42B364u;
            // 0x42b364: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B368u;
        goto label_42b368;
    }
    ctx->pc = 0x42B360u;
    SET_GPR_U32(ctx, 31, 0x42B368u);
    ctx->pc = 0x42B364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B360u;
            // 0x42b364: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B368u; }
        if (ctx->pc != 0x42B368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B368u; }
        if (ctx->pc != 0x42B368u) { return; }
    }
    ctx->pc = 0x42B368u;
label_42b368:
    // 0x42b368: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x42b368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_42b36c:
    // 0x42b36c: 0x21e182b  sltu        $v1, $s0, $fp
    ctx->pc = 0x42b36cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_42b370:
    // 0x42b370: 0x1460ff82  bnez        $v1, . + 4 + (-0x7E << 2)
label_42b374:
    if (ctx->pc == 0x42B374u) {
        ctx->pc = 0x42B374u;
            // 0x42b374: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x42B378u;
        goto label_42b378;
    }
    ctx->pc = 0x42B370u;
    {
        const bool branch_taken_0x42b370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B370u;
            // 0x42b374: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b370) {
            ctx->pc = 0x42B17Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42b17c;
        }
    }
    ctx->pc = 0x42B378u;
label_42b378:
    // 0x42b378: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42b378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42b37c:
    // 0x42b37c: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x42b37cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_42b380:
    // 0x42b380: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_42b384:
    if (ctx->pc == 0x42B384u) {
        ctx->pc = 0x42B384u;
            // 0x42b384: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x42B388u;
        goto label_42b388;
    }
    ctx->pc = 0x42B380u;
    {
        const bool branch_taken_0x42b380 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x42B384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B380u;
            // 0x42b384: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b380) {
            ctx->pc = 0x42B3A8u;
            goto label_42b3a8;
        }
    }
    ctx->pc = 0x42B388u;
label_42b388:
    // 0x42b388: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42b388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42b38c:
    // 0x42b38c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42b390:
    // 0x42b390: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x42b390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_42b394:
    // 0x42b394: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x42b394u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_42b398:
    // 0x42b398: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x42b398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_42b39c:
    // 0x42b39c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x42b39cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_42b3a0:
    // 0x42b3a0: 0xc055ea8  jal         func_157AA0
label_42b3a4:
    if (ctx->pc == 0x42B3A4u) {
        ctx->pc = 0x42B3A4u;
            // 0x42b3a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B3A8u;
        goto label_42b3a8;
    }
    ctx->pc = 0x42B3A0u;
    SET_GPR_U32(ctx, 31, 0x42B3A8u);
    ctx->pc = 0x42B3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B3A0u;
            // 0x42b3a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B3A8u; }
        if (ctx->pc != 0x42B3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B3A8u; }
        if (ctx->pc != 0x42B3A8u) { return; }
    }
    ctx->pc = 0x42B3A8u;
label_42b3a8:
    // 0x42b3a8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x42b3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_42b3ac:
    // 0x42b3ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x42b3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_42b3b0:
    // 0x42b3b0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x42b3b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_42b3b4:
    // 0x42b3b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x42b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_42b3b8:
    // 0x42b3b8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x42b3b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_42b3bc:
    // 0x42b3bc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x42b3bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_42b3c0:
    // 0x42b3c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x42b3c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_42b3c4:
    // 0x42b3c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x42b3c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_42b3c8:
    // 0x42b3c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x42b3c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42b3cc:
    // 0x42b3cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x42b3ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42b3d0:
    // 0x42b3d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x42b3d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42b3d4:
    // 0x42b3d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x42b3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42b3d8:
    // 0x42b3d8: 0x3e00008  jr          $ra
label_42b3dc:
    if (ctx->pc == 0x42B3DCu) {
        ctx->pc = 0x42B3DCu;
            // 0x42b3dc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x42B3E0u;
        goto label_fallthrough_0x42b3d8;
    }
    ctx->pc = 0x42B3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B3D8u;
            // 0x42b3dc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x42b3d8:
    ctx->pc = 0x42B3E0u;
}
