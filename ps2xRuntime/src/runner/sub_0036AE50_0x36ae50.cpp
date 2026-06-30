#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036AE50
// Address: 0x36ae50 - 0x36b300
void sub_0036AE50_0x36ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AE50_0x36ae50");
#endif

    switch (ctx->pc) {
        case 0x36ae50u: goto label_36ae50;
        case 0x36ae54u: goto label_36ae54;
        case 0x36ae58u: goto label_36ae58;
        case 0x36ae5cu: goto label_36ae5c;
        case 0x36ae60u: goto label_36ae60;
        case 0x36ae64u: goto label_36ae64;
        case 0x36ae68u: goto label_36ae68;
        case 0x36ae6cu: goto label_36ae6c;
        case 0x36ae70u: goto label_36ae70;
        case 0x36ae74u: goto label_36ae74;
        case 0x36ae78u: goto label_36ae78;
        case 0x36ae7cu: goto label_36ae7c;
        case 0x36ae80u: goto label_36ae80;
        case 0x36ae84u: goto label_36ae84;
        case 0x36ae88u: goto label_36ae88;
        case 0x36ae8cu: goto label_36ae8c;
        case 0x36ae90u: goto label_36ae90;
        case 0x36ae94u: goto label_36ae94;
        case 0x36ae98u: goto label_36ae98;
        case 0x36ae9cu: goto label_36ae9c;
        case 0x36aea0u: goto label_36aea0;
        case 0x36aea4u: goto label_36aea4;
        case 0x36aea8u: goto label_36aea8;
        case 0x36aeacu: goto label_36aeac;
        case 0x36aeb0u: goto label_36aeb0;
        case 0x36aeb4u: goto label_36aeb4;
        case 0x36aeb8u: goto label_36aeb8;
        case 0x36aebcu: goto label_36aebc;
        case 0x36aec0u: goto label_36aec0;
        case 0x36aec4u: goto label_36aec4;
        case 0x36aec8u: goto label_36aec8;
        case 0x36aeccu: goto label_36aecc;
        case 0x36aed0u: goto label_36aed0;
        case 0x36aed4u: goto label_36aed4;
        case 0x36aed8u: goto label_36aed8;
        case 0x36aedcu: goto label_36aedc;
        case 0x36aee0u: goto label_36aee0;
        case 0x36aee4u: goto label_36aee4;
        case 0x36aee8u: goto label_36aee8;
        case 0x36aeecu: goto label_36aeec;
        case 0x36aef0u: goto label_36aef0;
        case 0x36aef4u: goto label_36aef4;
        case 0x36aef8u: goto label_36aef8;
        case 0x36aefcu: goto label_36aefc;
        case 0x36af00u: goto label_36af00;
        case 0x36af04u: goto label_36af04;
        case 0x36af08u: goto label_36af08;
        case 0x36af0cu: goto label_36af0c;
        case 0x36af10u: goto label_36af10;
        case 0x36af14u: goto label_36af14;
        case 0x36af18u: goto label_36af18;
        case 0x36af1cu: goto label_36af1c;
        case 0x36af20u: goto label_36af20;
        case 0x36af24u: goto label_36af24;
        case 0x36af28u: goto label_36af28;
        case 0x36af2cu: goto label_36af2c;
        case 0x36af30u: goto label_36af30;
        case 0x36af34u: goto label_36af34;
        case 0x36af38u: goto label_36af38;
        case 0x36af3cu: goto label_36af3c;
        case 0x36af40u: goto label_36af40;
        case 0x36af44u: goto label_36af44;
        case 0x36af48u: goto label_36af48;
        case 0x36af4cu: goto label_36af4c;
        case 0x36af50u: goto label_36af50;
        case 0x36af54u: goto label_36af54;
        case 0x36af58u: goto label_36af58;
        case 0x36af5cu: goto label_36af5c;
        case 0x36af60u: goto label_36af60;
        case 0x36af64u: goto label_36af64;
        case 0x36af68u: goto label_36af68;
        case 0x36af6cu: goto label_36af6c;
        case 0x36af70u: goto label_36af70;
        case 0x36af74u: goto label_36af74;
        case 0x36af78u: goto label_36af78;
        case 0x36af7cu: goto label_36af7c;
        case 0x36af80u: goto label_36af80;
        case 0x36af84u: goto label_36af84;
        case 0x36af88u: goto label_36af88;
        case 0x36af8cu: goto label_36af8c;
        case 0x36af90u: goto label_36af90;
        case 0x36af94u: goto label_36af94;
        case 0x36af98u: goto label_36af98;
        case 0x36af9cu: goto label_36af9c;
        case 0x36afa0u: goto label_36afa0;
        case 0x36afa4u: goto label_36afa4;
        case 0x36afa8u: goto label_36afa8;
        case 0x36afacu: goto label_36afac;
        case 0x36afb0u: goto label_36afb0;
        case 0x36afb4u: goto label_36afb4;
        case 0x36afb8u: goto label_36afb8;
        case 0x36afbcu: goto label_36afbc;
        case 0x36afc0u: goto label_36afc0;
        case 0x36afc4u: goto label_36afc4;
        case 0x36afc8u: goto label_36afc8;
        case 0x36afccu: goto label_36afcc;
        case 0x36afd0u: goto label_36afd0;
        case 0x36afd4u: goto label_36afd4;
        case 0x36afd8u: goto label_36afd8;
        case 0x36afdcu: goto label_36afdc;
        case 0x36afe0u: goto label_36afe0;
        case 0x36afe4u: goto label_36afe4;
        case 0x36afe8u: goto label_36afe8;
        case 0x36afecu: goto label_36afec;
        case 0x36aff0u: goto label_36aff0;
        case 0x36aff4u: goto label_36aff4;
        case 0x36aff8u: goto label_36aff8;
        case 0x36affcu: goto label_36affc;
        case 0x36b000u: goto label_36b000;
        case 0x36b004u: goto label_36b004;
        case 0x36b008u: goto label_36b008;
        case 0x36b00cu: goto label_36b00c;
        case 0x36b010u: goto label_36b010;
        case 0x36b014u: goto label_36b014;
        case 0x36b018u: goto label_36b018;
        case 0x36b01cu: goto label_36b01c;
        case 0x36b020u: goto label_36b020;
        case 0x36b024u: goto label_36b024;
        case 0x36b028u: goto label_36b028;
        case 0x36b02cu: goto label_36b02c;
        case 0x36b030u: goto label_36b030;
        case 0x36b034u: goto label_36b034;
        case 0x36b038u: goto label_36b038;
        case 0x36b03cu: goto label_36b03c;
        case 0x36b040u: goto label_36b040;
        case 0x36b044u: goto label_36b044;
        case 0x36b048u: goto label_36b048;
        case 0x36b04cu: goto label_36b04c;
        case 0x36b050u: goto label_36b050;
        case 0x36b054u: goto label_36b054;
        case 0x36b058u: goto label_36b058;
        case 0x36b05cu: goto label_36b05c;
        case 0x36b060u: goto label_36b060;
        case 0x36b064u: goto label_36b064;
        case 0x36b068u: goto label_36b068;
        case 0x36b06cu: goto label_36b06c;
        case 0x36b070u: goto label_36b070;
        case 0x36b074u: goto label_36b074;
        case 0x36b078u: goto label_36b078;
        case 0x36b07cu: goto label_36b07c;
        case 0x36b080u: goto label_36b080;
        case 0x36b084u: goto label_36b084;
        case 0x36b088u: goto label_36b088;
        case 0x36b08cu: goto label_36b08c;
        case 0x36b090u: goto label_36b090;
        case 0x36b094u: goto label_36b094;
        case 0x36b098u: goto label_36b098;
        case 0x36b09cu: goto label_36b09c;
        case 0x36b0a0u: goto label_36b0a0;
        case 0x36b0a4u: goto label_36b0a4;
        case 0x36b0a8u: goto label_36b0a8;
        case 0x36b0acu: goto label_36b0ac;
        case 0x36b0b0u: goto label_36b0b0;
        case 0x36b0b4u: goto label_36b0b4;
        case 0x36b0b8u: goto label_36b0b8;
        case 0x36b0bcu: goto label_36b0bc;
        case 0x36b0c0u: goto label_36b0c0;
        case 0x36b0c4u: goto label_36b0c4;
        case 0x36b0c8u: goto label_36b0c8;
        case 0x36b0ccu: goto label_36b0cc;
        case 0x36b0d0u: goto label_36b0d0;
        case 0x36b0d4u: goto label_36b0d4;
        case 0x36b0d8u: goto label_36b0d8;
        case 0x36b0dcu: goto label_36b0dc;
        case 0x36b0e0u: goto label_36b0e0;
        case 0x36b0e4u: goto label_36b0e4;
        case 0x36b0e8u: goto label_36b0e8;
        case 0x36b0ecu: goto label_36b0ec;
        case 0x36b0f0u: goto label_36b0f0;
        case 0x36b0f4u: goto label_36b0f4;
        case 0x36b0f8u: goto label_36b0f8;
        case 0x36b0fcu: goto label_36b0fc;
        case 0x36b100u: goto label_36b100;
        case 0x36b104u: goto label_36b104;
        case 0x36b108u: goto label_36b108;
        case 0x36b10cu: goto label_36b10c;
        case 0x36b110u: goto label_36b110;
        case 0x36b114u: goto label_36b114;
        case 0x36b118u: goto label_36b118;
        case 0x36b11cu: goto label_36b11c;
        case 0x36b120u: goto label_36b120;
        case 0x36b124u: goto label_36b124;
        case 0x36b128u: goto label_36b128;
        case 0x36b12cu: goto label_36b12c;
        case 0x36b130u: goto label_36b130;
        case 0x36b134u: goto label_36b134;
        case 0x36b138u: goto label_36b138;
        case 0x36b13cu: goto label_36b13c;
        case 0x36b140u: goto label_36b140;
        case 0x36b144u: goto label_36b144;
        case 0x36b148u: goto label_36b148;
        case 0x36b14cu: goto label_36b14c;
        case 0x36b150u: goto label_36b150;
        case 0x36b154u: goto label_36b154;
        case 0x36b158u: goto label_36b158;
        case 0x36b15cu: goto label_36b15c;
        case 0x36b160u: goto label_36b160;
        case 0x36b164u: goto label_36b164;
        case 0x36b168u: goto label_36b168;
        case 0x36b16cu: goto label_36b16c;
        case 0x36b170u: goto label_36b170;
        case 0x36b174u: goto label_36b174;
        case 0x36b178u: goto label_36b178;
        case 0x36b17cu: goto label_36b17c;
        case 0x36b180u: goto label_36b180;
        case 0x36b184u: goto label_36b184;
        case 0x36b188u: goto label_36b188;
        case 0x36b18cu: goto label_36b18c;
        case 0x36b190u: goto label_36b190;
        case 0x36b194u: goto label_36b194;
        case 0x36b198u: goto label_36b198;
        case 0x36b19cu: goto label_36b19c;
        case 0x36b1a0u: goto label_36b1a0;
        case 0x36b1a4u: goto label_36b1a4;
        case 0x36b1a8u: goto label_36b1a8;
        case 0x36b1acu: goto label_36b1ac;
        case 0x36b1b0u: goto label_36b1b0;
        case 0x36b1b4u: goto label_36b1b4;
        case 0x36b1b8u: goto label_36b1b8;
        case 0x36b1bcu: goto label_36b1bc;
        case 0x36b1c0u: goto label_36b1c0;
        case 0x36b1c4u: goto label_36b1c4;
        case 0x36b1c8u: goto label_36b1c8;
        case 0x36b1ccu: goto label_36b1cc;
        case 0x36b1d0u: goto label_36b1d0;
        case 0x36b1d4u: goto label_36b1d4;
        case 0x36b1d8u: goto label_36b1d8;
        case 0x36b1dcu: goto label_36b1dc;
        case 0x36b1e0u: goto label_36b1e0;
        case 0x36b1e4u: goto label_36b1e4;
        case 0x36b1e8u: goto label_36b1e8;
        case 0x36b1ecu: goto label_36b1ec;
        case 0x36b1f0u: goto label_36b1f0;
        case 0x36b1f4u: goto label_36b1f4;
        case 0x36b1f8u: goto label_36b1f8;
        case 0x36b1fcu: goto label_36b1fc;
        case 0x36b200u: goto label_36b200;
        case 0x36b204u: goto label_36b204;
        case 0x36b208u: goto label_36b208;
        case 0x36b20cu: goto label_36b20c;
        case 0x36b210u: goto label_36b210;
        case 0x36b214u: goto label_36b214;
        case 0x36b218u: goto label_36b218;
        case 0x36b21cu: goto label_36b21c;
        case 0x36b220u: goto label_36b220;
        case 0x36b224u: goto label_36b224;
        case 0x36b228u: goto label_36b228;
        case 0x36b22cu: goto label_36b22c;
        case 0x36b230u: goto label_36b230;
        case 0x36b234u: goto label_36b234;
        case 0x36b238u: goto label_36b238;
        case 0x36b23cu: goto label_36b23c;
        case 0x36b240u: goto label_36b240;
        case 0x36b244u: goto label_36b244;
        case 0x36b248u: goto label_36b248;
        case 0x36b24cu: goto label_36b24c;
        case 0x36b250u: goto label_36b250;
        case 0x36b254u: goto label_36b254;
        case 0x36b258u: goto label_36b258;
        case 0x36b25cu: goto label_36b25c;
        case 0x36b260u: goto label_36b260;
        case 0x36b264u: goto label_36b264;
        case 0x36b268u: goto label_36b268;
        case 0x36b26cu: goto label_36b26c;
        case 0x36b270u: goto label_36b270;
        case 0x36b274u: goto label_36b274;
        case 0x36b278u: goto label_36b278;
        case 0x36b27cu: goto label_36b27c;
        case 0x36b280u: goto label_36b280;
        case 0x36b284u: goto label_36b284;
        case 0x36b288u: goto label_36b288;
        case 0x36b28cu: goto label_36b28c;
        case 0x36b290u: goto label_36b290;
        case 0x36b294u: goto label_36b294;
        case 0x36b298u: goto label_36b298;
        case 0x36b29cu: goto label_36b29c;
        case 0x36b2a0u: goto label_36b2a0;
        case 0x36b2a4u: goto label_36b2a4;
        case 0x36b2a8u: goto label_36b2a8;
        case 0x36b2acu: goto label_36b2ac;
        case 0x36b2b0u: goto label_36b2b0;
        case 0x36b2b4u: goto label_36b2b4;
        case 0x36b2b8u: goto label_36b2b8;
        case 0x36b2bcu: goto label_36b2bc;
        case 0x36b2c0u: goto label_36b2c0;
        case 0x36b2c4u: goto label_36b2c4;
        case 0x36b2c8u: goto label_36b2c8;
        case 0x36b2ccu: goto label_36b2cc;
        case 0x36b2d0u: goto label_36b2d0;
        case 0x36b2d4u: goto label_36b2d4;
        case 0x36b2d8u: goto label_36b2d8;
        case 0x36b2dcu: goto label_36b2dc;
        case 0x36b2e0u: goto label_36b2e0;
        case 0x36b2e4u: goto label_36b2e4;
        case 0x36b2e8u: goto label_36b2e8;
        case 0x36b2ecu: goto label_36b2ec;
        case 0x36b2f0u: goto label_36b2f0;
        case 0x36b2f4u: goto label_36b2f4;
        case 0x36b2f8u: goto label_36b2f8;
        case 0x36b2fcu: goto label_36b2fc;
        default: break;
    }

    ctx->pc = 0x36ae50u;

label_36ae50:
    // 0x36ae50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36ae54:
    // 0x36ae54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_36ae58:
    // 0x36ae58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36ae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36ae5c:
    // 0x36ae5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36ae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36ae60:
    // 0x36ae60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36ae60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36ae64:
    // 0x36ae64: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_36ae68:
    if (ctx->pc == 0x36AE68u) {
        ctx->pc = 0x36AE68u;
            // 0x36ae68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36AE6Cu;
        goto label_36ae6c;
    }
    ctx->pc = 0x36AE64u;
    {
        const bool branch_taken_0x36ae64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36AE64u;
            // 0x36ae68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ae64) {
            ctx->pc = 0x36AF98u;
            goto label_36af98;
        }
    }
    ctx->pc = 0x36AE6Cu;
label_36ae6c:
    // 0x36ae6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36ae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36ae70:
    // 0x36ae70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36ae74:
    // 0x36ae74: 0x24636a40  addiu       $v1, $v1, 0x6A40
    ctx->pc = 0x36ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27200));
label_36ae78:
    // 0x36ae78: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x36ae78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_36ae7c:
    // 0x36ae7c: 0x24426a78  addiu       $v0, $v0, 0x6A78
    ctx->pc = 0x36ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27256));
label_36ae80:
    // 0x36ae80: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x36ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_36ae84:
    // 0x36ae84: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x36ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_36ae88:
    // 0x36ae88: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x36ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_36ae8c:
    // 0x36ae8c: 0xc0407c0  jal         func_101F00
label_36ae90:
    if (ctx->pc == 0x36AE90u) {
        ctx->pc = 0x36AE90u;
            // 0x36ae90: 0x24a5afb0  addiu       $a1, $a1, -0x5050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946736));
        ctx->pc = 0x36AE94u;
        goto label_36ae94;
    }
    ctx->pc = 0x36AE8Cu;
    SET_GPR_U32(ctx, 31, 0x36AE94u);
    ctx->pc = 0x36AE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36AE8Cu;
            // 0x36ae90: 0x24a5afb0  addiu       $a1, $a1, -0x5050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AE94u; }
        if (ctx->pc != 0x36AE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AE94u; }
        if (ctx->pc != 0x36AE94u) { return; }
    }
    ctx->pc = 0x36AE94u;
label_36ae94:
    // 0x36ae94: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x36ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_36ae98:
    // 0x36ae98: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_36ae9c:
    if (ctx->pc == 0x36AE9Cu) {
        ctx->pc = 0x36AE9Cu;
            // 0x36ae9c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x36AEA0u;
        goto label_36aea0;
    }
    ctx->pc = 0x36AE98u;
    {
        const bool branch_taken_0x36ae98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ae98) {
            ctx->pc = 0x36AE9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36AE98u;
            // 0x36ae9c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36AEACu;
            goto label_36aeac;
        }
    }
    ctx->pc = 0x36AEA0u;
label_36aea0:
    // 0x36aea0: 0xc07507c  jal         func_1D41F0
label_36aea4:
    if (ctx->pc == 0x36AEA4u) {
        ctx->pc = 0x36AEA4u;
            // 0x36aea4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x36AEA8u;
        goto label_36aea8;
    }
    ctx->pc = 0x36AEA0u;
    SET_GPR_U32(ctx, 31, 0x36AEA8u);
    ctx->pc = 0x36AEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36AEA0u;
            // 0x36aea4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AEA8u; }
        if (ctx->pc != 0x36AEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AEA8u; }
        if (ctx->pc != 0x36AEA8u) { return; }
    }
    ctx->pc = 0x36AEA8u;
label_36aea8:
    // 0x36aea8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x36aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_36aeac:
    // 0x36aeac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_36aeb0:
    if (ctx->pc == 0x36AEB0u) {
        ctx->pc = 0x36AEB0u;
            // 0x36aeb0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x36AEB4u;
        goto label_36aeb4;
    }
    ctx->pc = 0x36AEACu;
    {
        const bool branch_taken_0x36aeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aeac) {
            ctx->pc = 0x36AEB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36AEACu;
            // 0x36aeb0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36AEDCu;
            goto label_36aedc;
        }
    }
    ctx->pc = 0x36AEB4u;
label_36aeb4:
    // 0x36aeb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_36aeb8:
    if (ctx->pc == 0x36AEB8u) {
        ctx->pc = 0x36AEBCu;
        goto label_36aebc;
    }
    ctx->pc = 0x36AEB4u;
    {
        const bool branch_taken_0x36aeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aeb4) {
            ctx->pc = 0x36AED8u;
            goto label_36aed8;
        }
    }
    ctx->pc = 0x36AEBCu;
label_36aebc:
    // 0x36aebc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_36aec0:
    if (ctx->pc == 0x36AEC0u) {
        ctx->pc = 0x36AEC4u;
        goto label_36aec4;
    }
    ctx->pc = 0x36AEBCu;
    {
        const bool branch_taken_0x36aebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aebc) {
            ctx->pc = 0x36AED8u;
            goto label_36aed8;
        }
    }
    ctx->pc = 0x36AEC4u;
label_36aec4:
    // 0x36aec4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x36aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_36aec8:
    // 0x36aec8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_36aecc:
    if (ctx->pc == 0x36AECCu) {
        ctx->pc = 0x36AED0u;
        goto label_36aed0;
    }
    ctx->pc = 0x36AEC8u;
    {
        const bool branch_taken_0x36aec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aec8) {
            ctx->pc = 0x36AED8u;
            goto label_36aed8;
        }
    }
    ctx->pc = 0x36AED0u;
label_36aed0:
    // 0x36aed0: 0xc0400a8  jal         func_1002A0
label_36aed4:
    if (ctx->pc == 0x36AED4u) {
        ctx->pc = 0x36AED8u;
        goto label_36aed8;
    }
    ctx->pc = 0x36AED0u;
    SET_GPR_U32(ctx, 31, 0x36AED8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AED8u; }
        if (ctx->pc != 0x36AED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AED8u; }
        if (ctx->pc != 0x36AED8u) { return; }
    }
    ctx->pc = 0x36AED8u;
label_36aed8:
    // 0x36aed8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x36aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_36aedc:
    // 0x36aedc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_36aee0:
    if (ctx->pc == 0x36AEE0u) {
        ctx->pc = 0x36AEE0u;
            // 0x36aee0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x36AEE4u;
        goto label_36aee4;
    }
    ctx->pc = 0x36AEDCu;
    {
        const bool branch_taken_0x36aedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aedc) {
            ctx->pc = 0x36AEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36AEDCu;
            // 0x36aee0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36AF0Cu;
            goto label_36af0c;
        }
    }
    ctx->pc = 0x36AEE4u;
label_36aee4:
    // 0x36aee4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_36aee8:
    if (ctx->pc == 0x36AEE8u) {
        ctx->pc = 0x36AEECu;
        goto label_36aeec;
    }
    ctx->pc = 0x36AEE4u;
    {
        const bool branch_taken_0x36aee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aee4) {
            ctx->pc = 0x36AF08u;
            goto label_36af08;
        }
    }
    ctx->pc = 0x36AEECu;
label_36aeec:
    // 0x36aeec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_36aef0:
    if (ctx->pc == 0x36AEF0u) {
        ctx->pc = 0x36AEF4u;
        goto label_36aef4;
    }
    ctx->pc = 0x36AEECu;
    {
        const bool branch_taken_0x36aeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aeec) {
            ctx->pc = 0x36AF08u;
            goto label_36af08;
        }
    }
    ctx->pc = 0x36AEF4u;
label_36aef4:
    // 0x36aef4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x36aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_36aef8:
    // 0x36aef8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_36aefc:
    if (ctx->pc == 0x36AEFCu) {
        ctx->pc = 0x36AF00u;
        goto label_36af00;
    }
    ctx->pc = 0x36AEF8u;
    {
        const bool branch_taken_0x36aef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aef8) {
            ctx->pc = 0x36AF08u;
            goto label_36af08;
        }
    }
    ctx->pc = 0x36AF00u;
label_36af00:
    // 0x36af00: 0xc0400a8  jal         func_1002A0
label_36af04:
    if (ctx->pc == 0x36AF04u) {
        ctx->pc = 0x36AF08u;
        goto label_36af08;
    }
    ctx->pc = 0x36AF00u;
    SET_GPR_U32(ctx, 31, 0x36AF08u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AF08u; }
        if (ctx->pc != 0x36AF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AF08u; }
        if (ctx->pc != 0x36AF08u) { return; }
    }
    ctx->pc = 0x36AF08u;
label_36af08:
    // 0x36af08: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x36af08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_36af0c:
    // 0x36af0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_36af10:
    if (ctx->pc == 0x36AF10u) {
        ctx->pc = 0x36AF14u;
        goto label_36af14;
    }
    ctx->pc = 0x36AF0Cu;
    {
        const bool branch_taken_0x36af0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36af0c) {
            ctx->pc = 0x36AF28u;
            goto label_36af28;
        }
    }
    ctx->pc = 0x36AF14u;
label_36af14:
    // 0x36af14: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36af14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36af18:
    // 0x36af18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36af18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36af1c:
    // 0x36af1c: 0x24636a28  addiu       $v1, $v1, 0x6A28
    ctx->pc = 0x36af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27176));
label_36af20:
    // 0x36af20: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x36af20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_36af24:
    // 0x36af24: 0xac406040  sw          $zero, 0x6040($v0)
    ctx->pc = 0x36af24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24640), GPR_U32(ctx, 0));
label_36af28:
    // 0x36af28: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_36af2c:
    if (ctx->pc == 0x36AF2Cu) {
        ctx->pc = 0x36AF2Cu;
            // 0x36af2c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x36AF30u;
        goto label_36af30;
    }
    ctx->pc = 0x36AF28u;
    {
        const bool branch_taken_0x36af28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x36af28) {
            ctx->pc = 0x36AF2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36AF28u;
            // 0x36af2c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36AF84u;
            goto label_36af84;
        }
    }
    ctx->pc = 0x36AF30u;
label_36af30:
    // 0x36af30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36af30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36af34:
    // 0x36af34: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x36af34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_36af38:
    // 0x36af38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36af38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_36af3c:
    // 0x36af3c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x36af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_36af40:
    // 0x36af40: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36af44:
    if (ctx->pc == 0x36AF44u) {
        ctx->pc = 0x36AF44u;
            // 0x36af44: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x36AF48u;
        goto label_36af48;
    }
    ctx->pc = 0x36AF40u;
    {
        const bool branch_taken_0x36af40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36af40) {
            ctx->pc = 0x36AF44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36AF40u;
            // 0x36af44: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36AF5Cu;
            goto label_36af5c;
        }
    }
    ctx->pc = 0x36AF48u;
label_36af48:
    // 0x36af48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36af48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36af4c:
    // 0x36af4c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36af4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36af50:
    // 0x36af50: 0x320f809  jalr        $t9
label_36af54:
    if (ctx->pc == 0x36AF54u) {
        ctx->pc = 0x36AF54u;
            // 0x36af54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36AF58u;
        goto label_36af58;
    }
    ctx->pc = 0x36AF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36AF58u);
        ctx->pc = 0x36AF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36AF50u;
            // 0x36af54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36AF58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36AF58u; }
            if (ctx->pc != 0x36AF58u) { return; }
        }
        }
    }
    ctx->pc = 0x36AF58u;
label_36af58:
    // 0x36af58: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x36af58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_36af5c:
    // 0x36af5c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36af60:
    if (ctx->pc == 0x36AF60u) {
        ctx->pc = 0x36AF60u;
            // 0x36af60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36AF64u;
        goto label_36af64;
    }
    ctx->pc = 0x36AF5Cu;
    {
        const bool branch_taken_0x36af5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36af5c) {
            ctx->pc = 0x36AF60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36AF5Cu;
            // 0x36af60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36AF78u;
            goto label_36af78;
        }
    }
    ctx->pc = 0x36AF64u;
label_36af64:
    // 0x36af64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36af64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36af68:
    // 0x36af68: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36af68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36af6c:
    // 0x36af6c: 0x320f809  jalr        $t9
label_36af70:
    if (ctx->pc == 0x36AF70u) {
        ctx->pc = 0x36AF70u;
            // 0x36af70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36AF74u;
        goto label_36af74;
    }
    ctx->pc = 0x36AF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36AF74u);
        ctx->pc = 0x36AF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36AF6Cu;
            // 0x36af70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36AF74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36AF74u; }
            if (ctx->pc != 0x36AF74u) { return; }
        }
        }
    }
    ctx->pc = 0x36AF74u;
label_36af74:
    // 0x36af74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36af74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36af78:
    // 0x36af78: 0xc075bf8  jal         func_1D6FE0
label_36af7c:
    if (ctx->pc == 0x36AF7Cu) {
        ctx->pc = 0x36AF7Cu;
            // 0x36af7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36AF80u;
        goto label_36af80;
    }
    ctx->pc = 0x36AF78u;
    SET_GPR_U32(ctx, 31, 0x36AF80u);
    ctx->pc = 0x36AF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36AF78u;
            // 0x36af7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AF80u; }
        if (ctx->pc != 0x36AF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AF80u; }
        if (ctx->pc != 0x36AF80u) { return; }
    }
    ctx->pc = 0x36AF80u;
label_36af80:
    // 0x36af80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x36af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_36af84:
    // 0x36af84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36af84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_36af88:
    // 0x36af88: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_36af8c:
    if (ctx->pc == 0x36AF8Cu) {
        ctx->pc = 0x36AF8Cu;
            // 0x36af8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36AF90u;
        goto label_36af90;
    }
    ctx->pc = 0x36AF88u;
    {
        const bool branch_taken_0x36af88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x36af88) {
            ctx->pc = 0x36AF8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36AF88u;
            // 0x36af8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36AF9Cu;
            goto label_36af9c;
        }
    }
    ctx->pc = 0x36AF90u;
label_36af90:
    // 0x36af90: 0xc0400a8  jal         func_1002A0
label_36af94:
    if (ctx->pc == 0x36AF94u) {
        ctx->pc = 0x36AF94u;
            // 0x36af94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36AF98u;
        goto label_36af98;
    }
    ctx->pc = 0x36AF90u;
    SET_GPR_U32(ctx, 31, 0x36AF98u);
    ctx->pc = 0x36AF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36AF90u;
            // 0x36af94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AF98u; }
        if (ctx->pc != 0x36AF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36AF98u; }
        if (ctx->pc != 0x36AF98u) { return; }
    }
    ctx->pc = 0x36AF98u;
label_36af98:
    // 0x36af98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x36af98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36af9c:
    // 0x36af9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36af9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36afa0:
    // 0x36afa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36afa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36afa4:
    // 0x36afa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36afa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36afa8:
    // 0x36afa8: 0x3e00008  jr          $ra
label_36afac:
    if (ctx->pc == 0x36AFACu) {
        ctx->pc = 0x36AFACu;
            // 0x36afac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x36AFB0u;
        goto label_36afb0;
    }
    ctx->pc = 0x36AFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36AFA8u;
            // 0x36afac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AFB0u;
label_36afb0:
    // 0x36afb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36afb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36afb4:
    // 0x36afb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_36afb8:
    // 0x36afb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36afbc:
    // 0x36afbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36afbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36afc0:
    // 0x36afc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36afc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36afc4:
    // 0x36afc4: 0x12200045  beqz        $s1, . + 4 + (0x45 << 2)
label_36afc8:
    if (ctx->pc == 0x36AFC8u) {
        ctx->pc = 0x36AFC8u;
            // 0x36afc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36AFCCu;
        goto label_36afcc;
    }
    ctx->pc = 0x36AFC4u;
    {
        const bool branch_taken_0x36afc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36AFC4u;
            // 0x36afc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36afc4) {
            ctx->pc = 0x36B0DCu;
            goto label_36b0dc;
        }
    }
    ctx->pc = 0x36AFCCu;
label_36afcc:
    // 0x36afcc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36afccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36afd0:
    // 0x36afd0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36afd4:
    // 0x36afd4: 0x24636ae0  addiu       $v1, $v1, 0x6AE0
    ctx->pc = 0x36afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27360));
label_36afd8:
    // 0x36afd8: 0x24426b20  addiu       $v0, $v0, 0x6B20
    ctx->pc = 0x36afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27424));
label_36afdc:
    // 0x36afdc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x36afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_36afe0:
    // 0x36afe0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x36afe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_36afe4:
    // 0x36afe4: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x36afe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_36afe8:
    // 0x36afe8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_36afec:
    if (ctx->pc == 0x36AFECu) {
        ctx->pc = 0x36AFECu;
            // 0x36afec: 0x8e24006c  lw          $a0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->pc = 0x36AFF0u;
        goto label_36aff0;
    }
    ctx->pc = 0x36AFE8u;
    {
        const bool branch_taken_0x36afe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36afe8) {
            ctx->pc = 0x36AFECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36AFE8u;
            // 0x36afec: 0x8e24006c  lw          $a0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36B010u;
            goto label_36b010;
        }
    }
    ctx->pc = 0x36AFF0u;
label_36aff0:
    // 0x36aff0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36aff4:
    if (ctx->pc == 0x36AFF4u) {
        ctx->pc = 0x36AFF4u;
            // 0x36aff4: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x36AFF8u;
        goto label_36aff8;
    }
    ctx->pc = 0x36AFF0u;
    {
        const bool branch_taken_0x36aff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aff0) {
            ctx->pc = 0x36AFF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36AFF0u;
            // 0x36aff4: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36B00Cu;
            goto label_36b00c;
        }
    }
    ctx->pc = 0x36AFF8u;
label_36aff8:
    // 0x36aff8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36aff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36affc:
    // 0x36affc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36affcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36b000:
    // 0x36b000: 0x320f809  jalr        $t9
label_36b004:
    if (ctx->pc == 0x36B004u) {
        ctx->pc = 0x36B004u;
            // 0x36b004: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36B008u;
        goto label_36b008;
    }
    ctx->pc = 0x36B000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36B008u);
        ctx->pc = 0x36B004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B000u;
            // 0x36b004: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36B008u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36B008u; }
            if (ctx->pc != 0x36B008u) { return; }
        }
        }
    }
    ctx->pc = 0x36B008u;
label_36b008:
    // 0x36b008: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x36b008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_36b00c:
    // 0x36b00c: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x36b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_36b010:
    // 0x36b010: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_36b014:
    if (ctx->pc == 0x36B014u) {
        ctx->pc = 0x36B014u;
            // 0x36b014: 0xae20006c  sw          $zero, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x36B018u;
        goto label_36b018;
    }
    ctx->pc = 0x36B010u;
    {
        const bool branch_taken_0x36b010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b010) {
            ctx->pc = 0x36B014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36B010u;
            // 0x36b014: 0xae20006c  sw          $zero, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36B024u;
            goto label_36b024;
        }
    }
    ctx->pc = 0x36B018u;
label_36b018:
    // 0x36b018: 0xc04008c  jal         func_100230
label_36b01c:
    if (ctx->pc == 0x36B01Cu) {
        ctx->pc = 0x36B020u;
        goto label_36b020;
    }
    ctx->pc = 0x36B018u;
    SET_GPR_U32(ctx, 31, 0x36B020u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B020u; }
        if (ctx->pc != 0x36B020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B020u; }
        if (ctx->pc != 0x36B020u) { return; }
    }
    ctx->pc = 0x36B020u;
label_36b020:
    // 0x36b020: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x36b020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_36b024:
    // 0x36b024: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x36b024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_36b028:
    // 0x36b028: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36b02c:
    if (ctx->pc == 0x36B02Cu) {
        ctx->pc = 0x36B02Cu;
            // 0x36b02c: 0xae200080  sw          $zero, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
        ctx->pc = 0x36B030u;
        goto label_36b030;
    }
    ctx->pc = 0x36B028u;
    {
        const bool branch_taken_0x36b028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b028) {
            ctx->pc = 0x36B02Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36B028u;
            // 0x36b02c: 0xae200080  sw          $zero, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36B044u;
            goto label_36b044;
        }
    }
    ctx->pc = 0x36B030u;
label_36b030:
    // 0x36b030: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36b030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36b034:
    // 0x36b034: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36b034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36b038:
    // 0x36b038: 0x320f809  jalr        $t9
label_36b03c:
    if (ctx->pc == 0x36B03Cu) {
        ctx->pc = 0x36B03Cu;
            // 0x36b03c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36B040u;
        goto label_36b040;
    }
    ctx->pc = 0x36B038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36B040u);
        ctx->pc = 0x36B03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B038u;
            // 0x36b03c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36B040u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36B040u; }
            if (ctx->pc != 0x36B040u) { return; }
        }
        }
    }
    ctx->pc = 0x36B040u;
label_36b040:
    // 0x36b040: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x36b040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
label_36b044:
    // 0x36b044: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_36b048:
    if (ctx->pc == 0x36B048u) {
        ctx->pc = 0x36B048u;
            // 0x36b048: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x36B04Cu;
        goto label_36b04c;
    }
    ctx->pc = 0x36B044u;
    {
        const bool branch_taken_0x36b044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b044) {
            ctx->pc = 0x36B048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36B044u;
            // 0x36b048: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36B0C8u;
            goto label_36b0c8;
        }
    }
    ctx->pc = 0x36B04Cu;
label_36b04c:
    // 0x36b04c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36b050:
    // 0x36b050: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36b050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36b054:
    // 0x36b054: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x36b054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_36b058:
    // 0x36b058: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x36b058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_36b05c:
    // 0x36b05c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_36b060:
    // 0x36b060: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x36b060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_36b064:
    // 0x36b064: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_36b068:
    if (ctx->pc == 0x36B068u) {
        ctx->pc = 0x36B068u;
            // 0x36b068: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x36B06Cu;
        goto label_36b06c;
    }
    ctx->pc = 0x36B064u;
    {
        const bool branch_taken_0x36b064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B064u;
            // 0x36b068: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b064) {
            ctx->pc = 0x36B0A0u;
            goto label_36b0a0;
        }
    }
    ctx->pc = 0x36B06Cu;
label_36b06c:
    // 0x36b06c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36b070:
    // 0x36b070: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x36b070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_36b074:
    // 0x36b074: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x36b074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_36b078:
    // 0x36b078: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x36b078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_36b07c:
    // 0x36b07c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_36b080:
    if (ctx->pc == 0x36B080u) {
        ctx->pc = 0x36B084u;
        goto label_36b084;
    }
    ctx->pc = 0x36B07Cu;
    {
        const bool branch_taken_0x36b07c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b07c) {
            ctx->pc = 0x36B0A0u;
            goto label_36b0a0;
        }
    }
    ctx->pc = 0x36B084u;
label_36b084:
    // 0x36b084: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36b088:
    if (ctx->pc == 0x36B088u) {
        ctx->pc = 0x36B088u;
            // 0x36b088: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x36B08Cu;
        goto label_36b08c;
    }
    ctx->pc = 0x36B084u;
    {
        const bool branch_taken_0x36b084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b084) {
            ctx->pc = 0x36B088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36B084u;
            // 0x36b088: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36B0A0u;
            goto label_36b0a0;
        }
    }
    ctx->pc = 0x36B08Cu;
label_36b08c:
    // 0x36b08c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36b08cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36b090:
    // 0x36b090: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36b090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36b094:
    // 0x36b094: 0x320f809  jalr        $t9
label_36b098:
    if (ctx->pc == 0x36B098u) {
        ctx->pc = 0x36B098u;
            // 0x36b098: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36B09Cu;
        goto label_36b09c;
    }
    ctx->pc = 0x36B094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36B09Cu);
        ctx->pc = 0x36B098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B094u;
            // 0x36b098: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36B09Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36B09Cu; }
            if (ctx->pc != 0x36B09Cu) { return; }
        }
        }
    }
    ctx->pc = 0x36B09Cu;
label_36b09c:
    // 0x36b09c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x36b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_36b0a0:
    // 0x36b0a0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_36b0a4:
    if (ctx->pc == 0x36B0A4u) {
        ctx->pc = 0x36B0A8u;
        goto label_36b0a8;
    }
    ctx->pc = 0x36B0A0u;
    {
        const bool branch_taken_0x36b0a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b0a0) {
            ctx->pc = 0x36B0C4u;
            goto label_36b0c4;
        }
    }
    ctx->pc = 0x36B0A8u;
label_36b0a8:
    // 0x36b0a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36b0ac:
    // 0x36b0ac: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x36b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_36b0b0:
    // 0x36b0b0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_36b0b4:
    if (ctx->pc == 0x36B0B4u) {
        ctx->pc = 0x36B0B4u;
            // 0x36b0b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x36B0B8u;
        goto label_36b0b8;
    }
    ctx->pc = 0x36B0B0u;
    {
        const bool branch_taken_0x36b0b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B0B0u;
            // 0x36b0b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b0b0) {
            ctx->pc = 0x36B0C4u;
            goto label_36b0c4;
        }
    }
    ctx->pc = 0x36B0B8u;
label_36b0b8:
    // 0x36b0b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36b0bc:
    // 0x36b0bc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x36b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_36b0c0:
    // 0x36b0c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_36b0c4:
    // 0x36b0c4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x36b0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_36b0c8:
    // 0x36b0c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36b0c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_36b0cc:
    // 0x36b0cc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_36b0d0:
    if (ctx->pc == 0x36B0D0u) {
        ctx->pc = 0x36B0D0u;
            // 0x36b0d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B0D4u;
        goto label_36b0d4;
    }
    ctx->pc = 0x36B0CCu;
    {
        const bool branch_taken_0x36b0cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x36b0cc) {
            ctx->pc = 0x36B0D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36B0CCu;
            // 0x36b0d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36B0E0u;
            goto label_36b0e0;
        }
    }
    ctx->pc = 0x36B0D4u;
label_36b0d4:
    // 0x36b0d4: 0xc0400a8  jal         func_1002A0
label_36b0d8:
    if (ctx->pc == 0x36B0D8u) {
        ctx->pc = 0x36B0D8u;
            // 0x36b0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B0DCu;
        goto label_36b0dc;
    }
    ctx->pc = 0x36B0D4u;
    SET_GPR_U32(ctx, 31, 0x36B0DCu);
    ctx->pc = 0x36B0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B0D4u;
            // 0x36b0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B0DCu; }
        if (ctx->pc != 0x36B0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B0DCu; }
        if (ctx->pc != 0x36B0DCu) { return; }
    }
    ctx->pc = 0x36B0DCu;
label_36b0dc:
    // 0x36b0dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x36b0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b0e0:
    // 0x36b0e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36b0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36b0e4:
    // 0x36b0e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36b0e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36b0e8:
    // 0x36b0e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36b0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36b0ec:
    // 0x36b0ec: 0x3e00008  jr          $ra
label_36b0f0:
    if (ctx->pc == 0x36B0F0u) {
        ctx->pc = 0x36B0F0u;
            // 0x36b0f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x36B0F4u;
        goto label_36b0f4;
    }
    ctx->pc = 0x36B0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B0ECu;
            // 0x36b0f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36B0F4u;
label_36b0f4:
    // 0x36b0f4: 0x0  nop
    ctx->pc = 0x36b0f4u;
    // NOP
label_36b0f8:
    // 0x36b0f8: 0x0  nop
    ctx->pc = 0x36b0f8u;
    // NOP
label_36b0fc:
    // 0x36b0fc: 0x0  nop
    ctx->pc = 0x36b0fcu;
    // NOP
label_36b100:
    // 0x36b100: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x36b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_36b104:
    // 0x36b104: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x36b104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36b108:
    // 0x36b108: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x36b108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_36b10c:
    // 0x36b10c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x36b10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_36b110:
    // 0x36b110: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x36b110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_36b114:
    // 0x36b114: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36b114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_36b118:
    // 0x36b118: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36b118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_36b11c:
    // 0x36b11c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36b11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36b120:
    // 0x36b120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36b120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36b124:
    // 0x36b124: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36b124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36b128:
    // 0x36b128: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x36b128u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_36b12c:
    // 0x36b12c: 0x50a30013  beql        $a1, $v1, . + 4 + (0x13 << 2)
label_36b130:
    if (ctx->pc == 0x36B130u) {
        ctx->pc = 0x36B130u;
            // 0x36b130: 0x8c830070  lw          $v1, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->pc = 0x36B134u;
        goto label_36b134;
    }
    ctx->pc = 0x36B12Cu;
    {
        const bool branch_taken_0x36b12c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36b12c) {
            ctx->pc = 0x36B130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36B12Cu;
            // 0x36b130: 0x8c830070  lw          $v1, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36B17Cu;
            goto label_36b17c;
        }
    }
    ctx->pc = 0x36B134u;
label_36b134:
    // 0x36b134: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36b134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36b138:
    // 0x36b138: 0x50a30066  beql        $a1, $v1, . + 4 + (0x66 << 2)
label_36b13c:
    if (ctx->pc == 0x36B13Cu) {
        ctx->pc = 0x36B13Cu;
            // 0x36b13c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x36B140u;
        goto label_36b140;
    }
    ctx->pc = 0x36B138u;
    {
        const bool branch_taken_0x36b138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36b138) {
            ctx->pc = 0x36B13Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36B138u;
            // 0x36b13c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36B2D4u;
            goto label_36b2d4;
        }
    }
    ctx->pc = 0x36B140u;
label_36b140:
    // 0x36b140: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36b140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36b144:
    // 0x36b144: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_36b148:
    if (ctx->pc == 0x36B148u) {
        ctx->pc = 0x36B14Cu;
        goto label_36b14c;
    }
    ctx->pc = 0x36B144u;
    {
        const bool branch_taken_0x36b144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36b144) {
            ctx->pc = 0x36B154u;
            goto label_36b154;
        }
    }
    ctx->pc = 0x36B14Cu;
label_36b14c:
    // 0x36b14c: 0x10000060  b           . + 4 + (0x60 << 2)
label_36b150:
    if (ctx->pc == 0x36B150u) {
        ctx->pc = 0x36B154u;
        goto label_36b154;
    }
    ctx->pc = 0x36B14Cu;
    {
        const bool branch_taken_0x36b14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b14c) {
            ctx->pc = 0x36B2D0u;
            goto label_36b2d0;
        }
    }
    ctx->pc = 0x36B154u;
label_36b154:
    // 0x36b154: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36b154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36b158:
    // 0x36b158: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36b158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36b15c:
    // 0x36b15c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x36b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_36b160:
    // 0x36b160: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x36b160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_36b164:
    // 0x36b164: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x36b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_36b168:
    // 0x36b168: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x36b168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_36b16c:
    // 0x36b16c: 0x320f809  jalr        $t9
label_36b170:
    if (ctx->pc == 0x36B170u) {
        ctx->pc = 0x36B170u;
            // 0x36b170: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x36B174u;
        goto label_36b174;
    }
    ctx->pc = 0x36B16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36B174u);
        ctx->pc = 0x36B170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B16Cu;
            // 0x36b170: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36B174u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36B174u; }
            if (ctx->pc != 0x36B174u) { return; }
        }
        }
    }
    ctx->pc = 0x36B174u;
label_36b174:
    // 0x36b174: 0x10000056  b           . + 4 + (0x56 << 2)
label_36b178:
    if (ctx->pc == 0x36B178u) {
        ctx->pc = 0x36B17Cu;
        goto label_36b17c;
    }
    ctx->pc = 0x36B174u;
    {
        const bool branch_taken_0x36b174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b174) {
            ctx->pc = 0x36B2D0u;
            goto label_36b2d0;
        }
    }
    ctx->pc = 0x36B17Cu;
label_36b17c:
    // 0x36b17c: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
label_36b180:
    if (ctx->pc == 0x36B180u) {
        ctx->pc = 0x36B184u;
        goto label_36b184;
    }
    ctx->pc = 0x36B17Cu;
    {
        const bool branch_taken_0x36b17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b17c) {
            ctx->pc = 0x36B2D0u;
            goto label_36b2d0;
        }
    }
    ctx->pc = 0x36B184u;
label_36b184:
    // 0x36b184: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x36b184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_36b188:
    // 0x36b188: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36b188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36b18c:
    // 0x36b18c: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x36b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_36b190:
    // 0x36b190: 0x24910084  addiu       $s1, $a0, 0x84
    ctx->pc = 0x36b190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_36b194:
    // 0x36b194: 0x8c75e378  lw          $s5, -0x1C88($v1)
    ctx->pc = 0x36b194u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_36b198:
    // 0x36b198: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36b198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36b19c:
    // 0x36b19c: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x36b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_36b1a0:
    // 0x36b1a0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x36b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_36b1a4:
    // 0x36b1a4: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x36b1a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_36b1a8:
    // 0x36b1a8: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x36b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_36b1ac:
    // 0x36b1ac: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x36b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_36b1b0:
    // 0x36b1b0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x36b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_36b1b4:
    // 0x36b1b4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x36b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_36b1b8:
    // 0x36b1b8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x36b1b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36b1bc:
    // 0x36b1bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_36b1c0:
    // 0x36b1c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x36b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_36b1c4:
    // 0x36b1c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36b1c8:
    // 0x36b1c8: 0xc0dacd0  jal         func_36B340
label_36b1cc:
    if (ctx->pc == 0x36B1CCu) {
        ctx->pc = 0x36B1CCu;
            // 0x36b1cc: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x36B1D0u;
        goto label_36b1d0;
    }
    ctx->pc = 0x36B1C8u;
    SET_GPR_U32(ctx, 31, 0x36B1D0u);
    ctx->pc = 0x36B1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B1C8u;
            // 0x36b1cc: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36B340u;
    if (runtime->hasFunction(0x36B340u)) {
        auto targetFn = runtime->lookupFunction(0x36B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B1D0u; }
        if (ctx->pc != 0x36B1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036B340_0x36b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B1D0u; }
        if (ctx->pc != 0x36B1D0u) { return; }
    }
    ctx->pc = 0x36B1D0u;
label_36b1d0:
    // 0x36b1d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b1d4:
    // 0x36b1d4: 0x1443003e  bne         $v0, $v1, . + 4 + (0x3E << 2)
label_36b1d8:
    if (ctx->pc == 0x36B1D8u) {
        ctx->pc = 0x36B1DCu;
        goto label_36b1dc;
    }
    ctx->pc = 0x36B1D4u;
    {
        const bool branch_taken_0x36b1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x36b1d4) {
            ctx->pc = 0x36B2D0u;
            goto label_36b2d0;
        }
    }
    ctx->pc = 0x36B1DCu;
label_36b1dc:
    // 0x36b1dc: 0xc0d1c14  jal         func_347050
label_36b1e0:
    if (ctx->pc == 0x36B1E0u) {
        ctx->pc = 0x36B1E0u;
            // 0x36b1e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B1E4u;
        goto label_36b1e4;
    }
    ctx->pc = 0x36B1DCu;
    SET_GPR_U32(ctx, 31, 0x36B1E4u);
    ctx->pc = 0x36B1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B1DCu;
            // 0x36b1e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B1E4u; }
        if (ctx->pc != 0x36B1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B1E4u; }
        if (ctx->pc != 0x36B1E4u) { return; }
    }
    ctx->pc = 0x36B1E4u;
label_36b1e4:
    // 0x36b1e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36b1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b1e8:
    // 0x36b1e8: 0xc04f278  jal         func_13C9E0
label_36b1ec:
    if (ctx->pc == 0x36B1ECu) {
        ctx->pc = 0x36B1ECu;
            // 0x36b1ec: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x36B1F0u;
        goto label_36b1f0;
    }
    ctx->pc = 0x36B1E8u;
    SET_GPR_U32(ctx, 31, 0x36B1F0u);
    ctx->pc = 0x36B1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B1E8u;
            // 0x36b1ec: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B1F0u; }
        if (ctx->pc != 0x36B1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B1F0u; }
        if (ctx->pc != 0x36B1F0u) { return; }
    }
    ctx->pc = 0x36B1F0u;
label_36b1f0:
    // 0x36b1f0: 0x8e460064  lw          $a2, 0x64($s2)
    ctx->pc = 0x36b1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_36b1f4:
    // 0x36b1f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x36b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_36b1f8:
    // 0x36b1f8: 0xc04cdd0  jal         func_133740
label_36b1fc:
    if (ctx->pc == 0x36B1FCu) {
        ctx->pc = 0x36B1FCu;
            // 0x36b1fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B200u;
        goto label_36b200;
    }
    ctx->pc = 0x36B1F8u;
    SET_GPR_U32(ctx, 31, 0x36B200u);
    ctx->pc = 0x36B1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B1F8u;
            // 0x36b1fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B200u; }
        if (ctx->pc != 0x36B200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B200u; }
        if (ctx->pc != 0x36B200u) { return; }
    }
    ctx->pc = 0x36B200u;
label_36b200:
    // 0x36b200: 0xc0d1c10  jal         func_347040
label_36b204:
    if (ctx->pc == 0x36B204u) {
        ctx->pc = 0x36B204u;
            // 0x36b204: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B208u;
        goto label_36b208;
    }
    ctx->pc = 0x36B200u;
    SET_GPR_U32(ctx, 31, 0x36B208u);
    ctx->pc = 0x36B204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B200u;
            // 0x36b204: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B208u; }
        if (ctx->pc != 0x36B208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B208u; }
        if (ctx->pc != 0x36B208u) { return; }
    }
    ctx->pc = 0x36B208u;
label_36b208:
    // 0x36b208: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36b208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b20c:
    // 0x36b20c: 0xc04ce80  jal         func_133A00
label_36b210:
    if (ctx->pc == 0x36B210u) {
        ctx->pc = 0x36B210u;
            // 0x36b210: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x36B214u;
        goto label_36b214;
    }
    ctx->pc = 0x36B20Cu;
    SET_GPR_U32(ctx, 31, 0x36B214u);
    ctx->pc = 0x36B210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B20Cu;
            // 0x36b210: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B214u; }
        if (ctx->pc != 0x36B214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B214u; }
        if (ctx->pc != 0x36B214u) { return; }
    }
    ctx->pc = 0x36B214u;
label_36b214:
    // 0x36b214: 0xc0d4108  jal         func_350420
label_36b218:
    if (ctx->pc == 0x36B218u) {
        ctx->pc = 0x36B21Cu;
        goto label_36b21c;
    }
    ctx->pc = 0x36B214u;
    SET_GPR_U32(ctx, 31, 0x36B21Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B21Cu; }
        if (ctx->pc != 0x36B21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B21Cu; }
        if (ctx->pc != 0x36B21Cu) { return; }
    }
    ctx->pc = 0x36B21Cu;
label_36b21c:
    // 0x36b21c: 0xc0b36b4  jal         func_2CDAD0
label_36b220:
    if (ctx->pc == 0x36B220u) {
        ctx->pc = 0x36B220u;
            // 0x36b220: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B224u;
        goto label_36b224;
    }
    ctx->pc = 0x36B21Cu;
    SET_GPR_U32(ctx, 31, 0x36B224u);
    ctx->pc = 0x36B220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B21Cu;
            // 0x36b220: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B224u; }
        if (ctx->pc != 0x36B224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B224u; }
        if (ctx->pc != 0x36B224u) { return; }
    }
    ctx->pc = 0x36B224u;
label_36b224:
    // 0x36b224: 0xc0b9c64  jal         func_2E7190
label_36b228:
    if (ctx->pc == 0x36B228u) {
        ctx->pc = 0x36B228u;
            // 0x36b228: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B22Cu;
        goto label_36b22c;
    }
    ctx->pc = 0x36B224u;
    SET_GPR_U32(ctx, 31, 0x36B22Cu);
    ctx->pc = 0x36B228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B224u;
            // 0x36b228: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B22Cu; }
        if (ctx->pc != 0x36B22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B22Cu; }
        if (ctx->pc != 0x36B22Cu) { return; }
    }
    ctx->pc = 0x36B22Cu;
label_36b22c:
    // 0x36b22c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x36b22cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b230:
    // 0x36b230: 0xc0d4104  jal         func_350410
label_36b234:
    if (ctx->pc == 0x36B234u) {
        ctx->pc = 0x36B234u;
            // 0x36b234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B238u;
        goto label_36b238;
    }
    ctx->pc = 0x36B230u;
    SET_GPR_U32(ctx, 31, 0x36B238u);
    ctx->pc = 0x36B234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B230u;
            // 0x36b234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B238u; }
        if (ctx->pc != 0x36B238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B238u; }
        if (ctx->pc != 0x36B238u) { return; }
    }
    ctx->pc = 0x36B238u;
label_36b238:
    // 0x36b238: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x36b238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b23c:
    // 0x36b23c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x36b23cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36b240:
    // 0x36b240: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x36b240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_36b244:
    // 0x36b244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36b248:
    // 0x36b248: 0xc44c4d08  lwc1        $f12, 0x4D08($v0)
    ctx->pc = 0x36b248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_36b24c:
    // 0x36b24c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x36b24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_36b250:
    // 0x36b250: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x36b250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_36b254:
    // 0x36b254: 0xc0d40ac  jal         func_3502B0
label_36b258:
    if (ctx->pc == 0x36B258u) {
        ctx->pc = 0x36B258u;
            // 0x36b258: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B25Cu;
        goto label_36b25c;
    }
    ctx->pc = 0x36B254u;
    SET_GPR_U32(ctx, 31, 0x36B25Cu);
    ctx->pc = 0x36B258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B254u;
            // 0x36b258: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B25Cu; }
        if (ctx->pc != 0x36B25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B25Cu; }
        if (ctx->pc != 0x36B25Cu) { return; }
    }
    ctx->pc = 0x36B25Cu;
label_36b25c:
    // 0x36b25c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x36b25cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_36b260:
    // 0x36b260: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_36b264:
    if (ctx->pc == 0x36B264u) {
        ctx->pc = 0x36B264u;
            // 0x36b264: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x36B268u;
        goto label_36b268;
    }
    ctx->pc = 0x36B260u;
    {
        const bool branch_taken_0x36b260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B260u;
            // 0x36b264: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b260) {
            ctx->pc = 0x36B2D0u;
            goto label_36b2d0;
        }
    }
    ctx->pc = 0x36B268u;
label_36b268:
    // 0x36b268: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x36b268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36b26c:
    // 0x36b26c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x36b26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_36b270:
    // 0x36b270: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x36b270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_36b274:
    // 0x36b274: 0xc04e4a4  jal         func_139290
label_36b278:
    if (ctx->pc == 0x36B278u) {
        ctx->pc = 0x36B278u;
            // 0x36b278: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B27Cu;
        goto label_36b27c;
    }
    ctx->pc = 0x36B274u;
    SET_GPR_U32(ctx, 31, 0x36B27Cu);
    ctx->pc = 0x36B278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B274u;
            // 0x36b278: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B27Cu; }
        if (ctx->pc != 0x36B27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B27Cu; }
        if (ctx->pc != 0x36B27Cu) { return; }
    }
    ctx->pc = 0x36B27Cu;
label_36b27c:
    // 0x36b27c: 0xc04e738  jal         func_139CE0
label_36b280:
    if (ctx->pc == 0x36B280u) {
        ctx->pc = 0x36B280u;
            // 0x36b280: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x36B284u;
        goto label_36b284;
    }
    ctx->pc = 0x36B27Cu;
    SET_GPR_U32(ctx, 31, 0x36B284u);
    ctx->pc = 0x36B280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B27Cu;
            // 0x36b280: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B284u; }
        if (ctx->pc != 0x36B284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B284u; }
        if (ctx->pc != 0x36B284u) { return; }
    }
    ctx->pc = 0x36B284u;
label_36b284:
    // 0x36b284: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36b284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36b288:
    // 0x36b288: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36b288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_36b28c:
    // 0x36b28c: 0xc04cd60  jal         func_133580
label_36b290:
    if (ctx->pc == 0x36B290u) {
        ctx->pc = 0x36B290u;
            // 0x36b290: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x36B294u;
        goto label_36b294;
    }
    ctx->pc = 0x36B28Cu;
    SET_GPR_U32(ctx, 31, 0x36B294u);
    ctx->pc = 0x36B290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B28Cu;
            // 0x36b290: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B294u; }
        if (ctx->pc != 0x36B294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B294u; }
        if (ctx->pc != 0x36B294u) { return; }
    }
    ctx->pc = 0x36B294u;
label_36b294:
    // 0x36b294: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x36b294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36b298:
    // 0x36b298: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x36b298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_36b29c:
    // 0x36b29c: 0x320f809  jalr        $t9
label_36b2a0:
    if (ctx->pc == 0x36B2A0u) {
        ctx->pc = 0x36B2A0u;
            // 0x36b2a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B2A4u;
        goto label_36b2a4;
    }
    ctx->pc = 0x36B29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36B2A4u);
        ctx->pc = 0x36B2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B29Cu;
            // 0x36b2a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36B2A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36B2A4u; }
            if (ctx->pc != 0x36B2A4u) { return; }
        }
        }
    }
    ctx->pc = 0x36B2A4u;
label_36b2a4:
    // 0x36b2a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36b2a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b2a8:
    // 0x36b2a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x36b2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_36b2ac:
    // 0x36b2ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36b2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36b2b0:
    // 0x36b2b0: 0xc054fd4  jal         func_153F50
label_36b2b4:
    if (ctx->pc == 0x36B2B4u) {
        ctx->pc = 0x36B2B4u;
            // 0x36b2b4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B2B8u;
        goto label_36b2b8;
    }
    ctx->pc = 0x36B2B0u;
    SET_GPR_U32(ctx, 31, 0x36B2B8u);
    ctx->pc = 0x36B2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B2B0u;
            // 0x36b2b4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B2B8u; }
        if (ctx->pc != 0x36B2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B2B8u; }
        if (ctx->pc != 0x36B2B8u) { return; }
    }
    ctx->pc = 0x36B2B8u;
label_36b2b8:
    // 0x36b2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36b2bc:
    // 0x36b2bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36b2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_36b2c0:
    // 0x36b2c0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x36b2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_36b2c4:
    // 0x36b2c4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x36b2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_36b2c8:
    // 0x36b2c8: 0xc0dacc0  jal         func_36B300
label_36b2cc:
    if (ctx->pc == 0x36B2CCu) {
        ctx->pc = 0x36B2CCu;
            // 0x36b2cc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x36B2D0u;
        goto label_36b2d0;
    }
    ctx->pc = 0x36B2C8u;
    SET_GPR_U32(ctx, 31, 0x36B2D0u);
    ctx->pc = 0x36B2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B2C8u;
            // 0x36b2cc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36B300u;
    if (runtime->hasFunction(0x36B300u)) {
        auto targetFn = runtime->lookupFunction(0x36B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B2D0u; }
        if (ctx->pc != 0x36B2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036B300_0x36b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B2D0u; }
        if (ctx->pc != 0x36B2D0u) { return; }
    }
    ctx->pc = 0x36B2D0u;
label_36b2d0:
    // 0x36b2d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x36b2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_36b2d4:
    // 0x36b2d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x36b2d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_36b2d8:
    // 0x36b2d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36b2d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_36b2dc:
    // 0x36b2dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36b2dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_36b2e0:
    // 0x36b2e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36b2e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36b2e4:
    // 0x36b2e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36b2e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36b2e8:
    // 0x36b2e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36b2e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36b2ec:
    // 0x36b2ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36b2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36b2f0:
    // 0x36b2f0: 0x3e00008  jr          $ra
label_36b2f4:
    if (ctx->pc == 0x36B2F4u) {
        ctx->pc = 0x36B2F4u;
            // 0x36b2f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x36B2F8u;
        goto label_36b2f8;
    }
    ctx->pc = 0x36B2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B2F0u;
            // 0x36b2f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36B2F8u;
label_36b2f8:
    // 0x36b2f8: 0x0  nop
    ctx->pc = 0x36b2f8u;
    // NOP
label_36b2fc:
    // 0x36b2fc: 0x0  nop
    ctx->pc = 0x36b2fcu;
    // NOP
}
