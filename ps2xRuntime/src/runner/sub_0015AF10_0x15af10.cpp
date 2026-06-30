#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015AF10
// Address: 0x15af10 - 0x15b380
void sub_0015AF10_0x15af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AF10_0x15af10");
#endif

    switch (ctx->pc) {
        case 0x15af10u: goto label_15af10;
        case 0x15af14u: goto label_15af14;
        case 0x15af18u: goto label_15af18;
        case 0x15af1cu: goto label_15af1c;
        case 0x15af20u: goto label_15af20;
        case 0x15af24u: goto label_15af24;
        case 0x15af28u: goto label_15af28;
        case 0x15af2cu: goto label_15af2c;
        case 0x15af30u: goto label_15af30;
        case 0x15af34u: goto label_15af34;
        case 0x15af38u: goto label_15af38;
        case 0x15af3cu: goto label_15af3c;
        case 0x15af40u: goto label_15af40;
        case 0x15af44u: goto label_15af44;
        case 0x15af48u: goto label_15af48;
        case 0x15af4cu: goto label_15af4c;
        case 0x15af50u: goto label_15af50;
        case 0x15af54u: goto label_15af54;
        case 0x15af58u: goto label_15af58;
        case 0x15af5cu: goto label_15af5c;
        case 0x15af60u: goto label_15af60;
        case 0x15af64u: goto label_15af64;
        case 0x15af68u: goto label_15af68;
        case 0x15af6cu: goto label_15af6c;
        case 0x15af70u: goto label_15af70;
        case 0x15af74u: goto label_15af74;
        case 0x15af78u: goto label_15af78;
        case 0x15af7cu: goto label_15af7c;
        case 0x15af80u: goto label_15af80;
        case 0x15af84u: goto label_15af84;
        case 0x15af88u: goto label_15af88;
        case 0x15af8cu: goto label_15af8c;
        case 0x15af90u: goto label_15af90;
        case 0x15af94u: goto label_15af94;
        case 0x15af98u: goto label_15af98;
        case 0x15af9cu: goto label_15af9c;
        case 0x15afa0u: goto label_15afa0;
        case 0x15afa4u: goto label_15afa4;
        case 0x15afa8u: goto label_15afa8;
        case 0x15afacu: goto label_15afac;
        case 0x15afb0u: goto label_15afb0;
        case 0x15afb4u: goto label_15afb4;
        case 0x15afb8u: goto label_15afb8;
        case 0x15afbcu: goto label_15afbc;
        case 0x15afc0u: goto label_15afc0;
        case 0x15afc4u: goto label_15afc4;
        case 0x15afc8u: goto label_15afc8;
        case 0x15afccu: goto label_15afcc;
        case 0x15afd0u: goto label_15afd0;
        case 0x15afd4u: goto label_15afd4;
        case 0x15afd8u: goto label_15afd8;
        case 0x15afdcu: goto label_15afdc;
        case 0x15afe0u: goto label_15afe0;
        case 0x15afe4u: goto label_15afe4;
        case 0x15afe8u: goto label_15afe8;
        case 0x15afecu: goto label_15afec;
        case 0x15aff0u: goto label_15aff0;
        case 0x15aff4u: goto label_15aff4;
        case 0x15aff8u: goto label_15aff8;
        case 0x15affcu: goto label_15affc;
        case 0x15b000u: goto label_15b000;
        case 0x15b004u: goto label_15b004;
        case 0x15b008u: goto label_15b008;
        case 0x15b00cu: goto label_15b00c;
        case 0x15b010u: goto label_15b010;
        case 0x15b014u: goto label_15b014;
        case 0x15b018u: goto label_15b018;
        case 0x15b01cu: goto label_15b01c;
        case 0x15b020u: goto label_15b020;
        case 0x15b024u: goto label_15b024;
        case 0x15b028u: goto label_15b028;
        case 0x15b02cu: goto label_15b02c;
        case 0x15b030u: goto label_15b030;
        case 0x15b034u: goto label_15b034;
        case 0x15b038u: goto label_15b038;
        case 0x15b03cu: goto label_15b03c;
        case 0x15b040u: goto label_15b040;
        case 0x15b044u: goto label_15b044;
        case 0x15b048u: goto label_15b048;
        case 0x15b04cu: goto label_15b04c;
        case 0x15b050u: goto label_15b050;
        case 0x15b054u: goto label_15b054;
        case 0x15b058u: goto label_15b058;
        case 0x15b05cu: goto label_15b05c;
        case 0x15b060u: goto label_15b060;
        case 0x15b064u: goto label_15b064;
        case 0x15b068u: goto label_15b068;
        case 0x15b06cu: goto label_15b06c;
        case 0x15b070u: goto label_15b070;
        case 0x15b074u: goto label_15b074;
        case 0x15b078u: goto label_15b078;
        case 0x15b07cu: goto label_15b07c;
        case 0x15b080u: goto label_15b080;
        case 0x15b084u: goto label_15b084;
        case 0x15b088u: goto label_15b088;
        case 0x15b08cu: goto label_15b08c;
        case 0x15b090u: goto label_15b090;
        case 0x15b094u: goto label_15b094;
        case 0x15b098u: goto label_15b098;
        case 0x15b09cu: goto label_15b09c;
        case 0x15b0a0u: goto label_15b0a0;
        case 0x15b0a4u: goto label_15b0a4;
        case 0x15b0a8u: goto label_15b0a8;
        case 0x15b0acu: goto label_15b0ac;
        case 0x15b0b0u: goto label_15b0b0;
        case 0x15b0b4u: goto label_15b0b4;
        case 0x15b0b8u: goto label_15b0b8;
        case 0x15b0bcu: goto label_15b0bc;
        case 0x15b0c0u: goto label_15b0c0;
        case 0x15b0c4u: goto label_15b0c4;
        case 0x15b0c8u: goto label_15b0c8;
        case 0x15b0ccu: goto label_15b0cc;
        case 0x15b0d0u: goto label_15b0d0;
        case 0x15b0d4u: goto label_15b0d4;
        case 0x15b0d8u: goto label_15b0d8;
        case 0x15b0dcu: goto label_15b0dc;
        case 0x15b0e0u: goto label_15b0e0;
        case 0x15b0e4u: goto label_15b0e4;
        case 0x15b0e8u: goto label_15b0e8;
        case 0x15b0ecu: goto label_15b0ec;
        case 0x15b0f0u: goto label_15b0f0;
        case 0x15b0f4u: goto label_15b0f4;
        case 0x15b0f8u: goto label_15b0f8;
        case 0x15b0fcu: goto label_15b0fc;
        case 0x15b100u: goto label_15b100;
        case 0x15b104u: goto label_15b104;
        case 0x15b108u: goto label_15b108;
        case 0x15b10cu: goto label_15b10c;
        case 0x15b110u: goto label_15b110;
        case 0x15b114u: goto label_15b114;
        case 0x15b118u: goto label_15b118;
        case 0x15b11cu: goto label_15b11c;
        case 0x15b120u: goto label_15b120;
        case 0x15b124u: goto label_15b124;
        case 0x15b128u: goto label_15b128;
        case 0x15b12cu: goto label_15b12c;
        case 0x15b130u: goto label_15b130;
        case 0x15b134u: goto label_15b134;
        case 0x15b138u: goto label_15b138;
        case 0x15b13cu: goto label_15b13c;
        case 0x15b140u: goto label_15b140;
        case 0x15b144u: goto label_15b144;
        case 0x15b148u: goto label_15b148;
        case 0x15b14cu: goto label_15b14c;
        case 0x15b150u: goto label_15b150;
        case 0x15b154u: goto label_15b154;
        case 0x15b158u: goto label_15b158;
        case 0x15b15cu: goto label_15b15c;
        case 0x15b160u: goto label_15b160;
        case 0x15b164u: goto label_15b164;
        case 0x15b168u: goto label_15b168;
        case 0x15b16cu: goto label_15b16c;
        case 0x15b170u: goto label_15b170;
        case 0x15b174u: goto label_15b174;
        case 0x15b178u: goto label_15b178;
        case 0x15b17cu: goto label_15b17c;
        case 0x15b180u: goto label_15b180;
        case 0x15b184u: goto label_15b184;
        case 0x15b188u: goto label_15b188;
        case 0x15b18cu: goto label_15b18c;
        case 0x15b190u: goto label_15b190;
        case 0x15b194u: goto label_15b194;
        case 0x15b198u: goto label_15b198;
        case 0x15b19cu: goto label_15b19c;
        case 0x15b1a0u: goto label_15b1a0;
        case 0x15b1a4u: goto label_15b1a4;
        case 0x15b1a8u: goto label_15b1a8;
        case 0x15b1acu: goto label_15b1ac;
        case 0x15b1b0u: goto label_15b1b0;
        case 0x15b1b4u: goto label_15b1b4;
        case 0x15b1b8u: goto label_15b1b8;
        case 0x15b1bcu: goto label_15b1bc;
        case 0x15b1c0u: goto label_15b1c0;
        case 0x15b1c4u: goto label_15b1c4;
        case 0x15b1c8u: goto label_15b1c8;
        case 0x15b1ccu: goto label_15b1cc;
        case 0x15b1d0u: goto label_15b1d0;
        case 0x15b1d4u: goto label_15b1d4;
        case 0x15b1d8u: goto label_15b1d8;
        case 0x15b1dcu: goto label_15b1dc;
        case 0x15b1e0u: goto label_15b1e0;
        case 0x15b1e4u: goto label_15b1e4;
        case 0x15b1e8u: goto label_15b1e8;
        case 0x15b1ecu: goto label_15b1ec;
        case 0x15b1f0u: goto label_15b1f0;
        case 0x15b1f4u: goto label_15b1f4;
        case 0x15b1f8u: goto label_15b1f8;
        case 0x15b1fcu: goto label_15b1fc;
        case 0x15b200u: goto label_15b200;
        case 0x15b204u: goto label_15b204;
        case 0x15b208u: goto label_15b208;
        case 0x15b20cu: goto label_15b20c;
        case 0x15b210u: goto label_15b210;
        case 0x15b214u: goto label_15b214;
        case 0x15b218u: goto label_15b218;
        case 0x15b21cu: goto label_15b21c;
        case 0x15b220u: goto label_15b220;
        case 0x15b224u: goto label_15b224;
        case 0x15b228u: goto label_15b228;
        case 0x15b22cu: goto label_15b22c;
        case 0x15b230u: goto label_15b230;
        case 0x15b234u: goto label_15b234;
        case 0x15b238u: goto label_15b238;
        case 0x15b23cu: goto label_15b23c;
        case 0x15b240u: goto label_15b240;
        case 0x15b244u: goto label_15b244;
        case 0x15b248u: goto label_15b248;
        case 0x15b24cu: goto label_15b24c;
        case 0x15b250u: goto label_15b250;
        case 0x15b254u: goto label_15b254;
        case 0x15b258u: goto label_15b258;
        case 0x15b25cu: goto label_15b25c;
        case 0x15b260u: goto label_15b260;
        case 0x15b264u: goto label_15b264;
        case 0x15b268u: goto label_15b268;
        case 0x15b26cu: goto label_15b26c;
        case 0x15b270u: goto label_15b270;
        case 0x15b274u: goto label_15b274;
        case 0x15b278u: goto label_15b278;
        case 0x15b27cu: goto label_15b27c;
        case 0x15b280u: goto label_15b280;
        case 0x15b284u: goto label_15b284;
        case 0x15b288u: goto label_15b288;
        case 0x15b28cu: goto label_15b28c;
        case 0x15b290u: goto label_15b290;
        case 0x15b294u: goto label_15b294;
        case 0x15b298u: goto label_15b298;
        case 0x15b29cu: goto label_15b29c;
        case 0x15b2a0u: goto label_15b2a0;
        case 0x15b2a4u: goto label_15b2a4;
        case 0x15b2a8u: goto label_15b2a8;
        case 0x15b2acu: goto label_15b2ac;
        case 0x15b2b0u: goto label_15b2b0;
        case 0x15b2b4u: goto label_15b2b4;
        case 0x15b2b8u: goto label_15b2b8;
        case 0x15b2bcu: goto label_15b2bc;
        case 0x15b2c0u: goto label_15b2c0;
        case 0x15b2c4u: goto label_15b2c4;
        case 0x15b2c8u: goto label_15b2c8;
        case 0x15b2ccu: goto label_15b2cc;
        case 0x15b2d0u: goto label_15b2d0;
        case 0x15b2d4u: goto label_15b2d4;
        case 0x15b2d8u: goto label_15b2d8;
        case 0x15b2dcu: goto label_15b2dc;
        case 0x15b2e0u: goto label_15b2e0;
        case 0x15b2e4u: goto label_15b2e4;
        case 0x15b2e8u: goto label_15b2e8;
        case 0x15b2ecu: goto label_15b2ec;
        case 0x15b2f0u: goto label_15b2f0;
        case 0x15b2f4u: goto label_15b2f4;
        case 0x15b2f8u: goto label_15b2f8;
        case 0x15b2fcu: goto label_15b2fc;
        case 0x15b300u: goto label_15b300;
        case 0x15b304u: goto label_15b304;
        case 0x15b308u: goto label_15b308;
        case 0x15b30cu: goto label_15b30c;
        case 0x15b310u: goto label_15b310;
        case 0x15b314u: goto label_15b314;
        case 0x15b318u: goto label_15b318;
        case 0x15b31cu: goto label_15b31c;
        case 0x15b320u: goto label_15b320;
        case 0x15b324u: goto label_15b324;
        case 0x15b328u: goto label_15b328;
        case 0x15b32cu: goto label_15b32c;
        case 0x15b330u: goto label_15b330;
        case 0x15b334u: goto label_15b334;
        case 0x15b338u: goto label_15b338;
        case 0x15b33cu: goto label_15b33c;
        case 0x15b340u: goto label_15b340;
        case 0x15b344u: goto label_15b344;
        case 0x15b348u: goto label_15b348;
        case 0x15b34cu: goto label_15b34c;
        case 0x15b350u: goto label_15b350;
        case 0x15b354u: goto label_15b354;
        case 0x15b358u: goto label_15b358;
        case 0x15b35cu: goto label_15b35c;
        case 0x15b360u: goto label_15b360;
        case 0x15b364u: goto label_15b364;
        case 0x15b368u: goto label_15b368;
        case 0x15b36cu: goto label_15b36c;
        case 0x15b370u: goto label_15b370;
        case 0x15b374u: goto label_15b374;
        case 0x15b378u: goto label_15b378;
        case 0x15b37cu: goto label_15b37c;
        default: break;
    }

    ctx->pc = 0x15af10u;

label_15af10:
    // 0x15af10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15af14:
    // 0x15af14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15af14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15af18:
    // 0x15af18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15af18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15af1c:
    // 0x15af1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15af1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15af20:
    // 0x15af20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15af20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15af24:
    // 0x15af24: 0xc045968  jal         func_1165A0
label_15af28:
    if (ctx->pc == 0x15AF28u) {
        ctx->pc = 0x15AF28u;
            // 0x15af28: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x15AF2Cu;
        goto label_15af2c;
    }
    ctx->pc = 0x15AF24u;
    SET_GPR_U32(ctx, 31, 0x15AF2Cu);
    ctx->pc = 0x15AF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF24u;
            // 0x15af28: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF2Cu; }
        if (ctx->pc != 0x15AF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF2Cu; }
        if (ctx->pc != 0x15AF2Cu) { return; }
    }
    ctx->pc = 0x15AF2Cu;
label_15af2c:
    // 0x15af2c: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x15af2cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_15af30:
    // 0x15af30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15af30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15af34:
    // 0x15af34: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x15af34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15af38:
    // 0x15af38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15af38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15af3c:
    // 0x15af3c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x15af3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_15af40:
    // 0x15af40: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x15af40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_15af44:
    // 0x15af44: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x15af44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_15af48:
    // 0x15af48: 0x1483003e  bne         $a0, $v1, . + 4 + (0x3E << 2)
label_15af4c:
    if (ctx->pc == 0x15AF4Cu) {
        ctx->pc = 0x15AF4Cu;
            // 0x15af4c: 0x24b00020  addiu       $s0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x15AF50u;
        goto label_15af50;
    }
    ctx->pc = 0x15AF48u;
    {
        const bool branch_taken_0x15af48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15AF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF48u;
            // 0x15af4c: 0x24b00020  addiu       $s0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af48) {
            ctx->pc = 0x15B044u;
            goto label_15b044;
        }
    }
    ctx->pc = 0x15AF50u;
label_15af50:
    // 0x15af50: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x15af50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_15af54:
    // 0x15af54: 0x8c42cc6c  lw          $v0, -0x3394($v0)
    ctx->pc = 0x15af54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954092)));
label_15af58:
    // 0x15af58: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x15af58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_15af5c:
    // 0x15af5c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_15af60:
    if (ctx->pc == 0x15AF60u) {
        ctx->pc = 0x15AF60u;
            // 0x15af60: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x15AF64u;
        goto label_15af64;
    }
    ctx->pc = 0x15AF5Cu;
    {
        const bool branch_taken_0x15af5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af5c) {
            ctx->pc = 0x15AF60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF5Cu;
            // 0x15af60: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AF74u;
            goto label_15af74;
        }
    }
    ctx->pc = 0x15AF64u;
label_15af64:
    // 0x15af64: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x15af64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_15af68:
    // 0x15af68: 0xc056b04  jal         func_15AC10
label_15af6c:
    if (ctx->pc == 0x15AF6Cu) {
        ctx->pc = 0x15AF6Cu;
            // 0x15af6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AF70u;
        goto label_15af70;
    }
    ctx->pc = 0x15AF68u;
    SET_GPR_U32(ctx, 31, 0x15AF70u);
    ctx->pc = 0x15AF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF68u;
            // 0x15af6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC10u;
    if (runtime->hasFunction(0x15AC10u)) {
        auto targetFn = runtime->lookupFunction(0x15AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF70u; }
        if (ctx->pc != 0x15AF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC10_0x15ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF70u; }
        if (ctx->pc != 0x15AF70u) { return; }
    }
    ctx->pc = 0x15AF70u;
label_15af70:
    // 0x15af70: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15af70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15af74:
    // 0x15af74: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x15af74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_15af78:
    // 0x15af78: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x15af78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
label_15af7c:
    // 0x15af7c: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x15af7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
label_15af80:
    // 0x15af80: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x15af80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_15af84:
    // 0x15af84: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x15af84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_15af88:
    // 0x15af88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15af8c:
    // 0x15af8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15af90:
    // 0x15af90: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15af90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_15af94:
    // 0x15af94: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15af94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_15af98:
    // 0x15af98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15af98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15af9c:
    // 0x15af9c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x15af9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_15afa0:
    // 0x15afa0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x15afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_15afa4:
    // 0x15afa4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x15afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_15afa8:
    // 0x15afa8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x15afa8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_15afac:
    // 0x15afac: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_15afb0:
    if (ctx->pc == 0x15AFB0u) {
        ctx->pc = 0x15AFB0u;
            // 0x15afb0: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x15AFB4u;
        goto label_15afb4;
    }
    ctx->pc = 0x15AFACu;
    {
        const bool branch_taken_0x15afac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15afac) {
            ctx->pc = 0x15AFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AFACu;
            // 0x15afb0: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AFBCu;
            goto label_15afbc;
        }
    }
    ctx->pc = 0x15AFB4u;
label_15afb4:
    // 0x15afb4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x15afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_15afb8:
    // 0x15afb8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x15afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_15afbc:
    // 0x15afbc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x15afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15afc0:
    // 0x15afc0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x15afc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_15afc4:
    // 0x15afc4: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_15afc8:
    if (ctx->pc == 0x15AFC8u) {
        ctx->pc = 0x15AFC8u;
            // 0x15afc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x15AFCCu;
        goto label_15afcc;
    }
    ctx->pc = 0x15AFC4u;
    {
        const bool branch_taken_0x15afc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15afc4) {
            ctx->pc = 0x15AFC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AFC4u;
            // 0x15afc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AFD4u;
            goto label_15afd4;
        }
    }
    ctx->pc = 0x15AFCCu;
label_15afcc:
    // 0x15afcc: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x15afccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_15afd0:
    // 0x15afd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15afd4:
    // 0x15afd4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x15afd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_15afd8:
    // 0x15afd8: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x15afd8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_15afdc:
    // 0x15afdc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15afdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15afe0:
    // 0x15afe0: 0xa6420004  sh          $v0, 0x4($s2)
    ctx->pc = 0x15afe0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
label_15afe4:
    // 0x15afe4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x15afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_15afe8:
    // 0x15afe8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x15afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_15afec:
    // 0x15afec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15aff0:
    // 0x15aff0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x15aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_15aff4:
    // 0x15aff4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15aff8:
    // 0x15aff8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_15affc:
    // 0x15affc: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x15affcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_15b000:
    // 0x15b000: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x15b000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_15b004:
    // 0x15b004: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15b004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15b008:
    // 0x15b008: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x15b008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_15b00c:
    // 0x15b00c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x15b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_15b010:
    // 0x15b010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15b010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b014:
    // 0x15b014: 0xc056cf0  jal         func_15B3C0
label_15b018:
    if (ctx->pc == 0x15B018u) {
        ctx->pc = 0x15B018u;
            // 0x15b018: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x15B01Cu;
        goto label_15b01c;
    }
    ctx->pc = 0x15B014u;
    SET_GPR_U32(ctx, 31, 0x15B01Cu);
    ctx->pc = 0x15B018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B014u;
            // 0x15b018: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B3C0u;
    if (runtime->hasFunction(0x15B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B01Cu; }
        if (ctx->pc != 0x15B01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B3C0_0x15b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B01Cu; }
        if (ctx->pc != 0x15B01Cu) { return; }
    }
    ctx->pc = 0x15B01Cu;
label_15b01c:
    // 0x15b01c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15b020:
    // 0x15b020: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x15b020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_15b024:
    // 0x15b024: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x15b024u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
label_15b028:
    // 0x15b028: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x15b028u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_15b02c:
    // 0x15b02c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15b030:
    // 0x15b030: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x15b030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_15b034:
    // 0x15b034: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x15b034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_15b038:
    // 0x15b038: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x15b038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_15b03c:
    // 0x15b03c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15b040:
    // 0x15b040: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x15b040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_15b044:
    // 0x15b044: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_15b048:
    if (ctx->pc == 0x15B048u) {
        ctx->pc = 0x15B048u;
            // 0x15b048: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x15B04Cu;
        goto label_15b04c;
    }
    ctx->pc = 0x15B044u;
    {
        const bool branch_taken_0x15b044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b044) {
            ctx->pc = 0x15B048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B044u;
            // 0x15b048: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B058u;
            goto label_15b058;
        }
    }
    ctx->pc = 0x15B04Cu;
label_15b04c:
    // 0x15b04c: 0xc04597c  jal         func_1165F0
label_15b050:
    if (ctx->pc == 0x15B050u) {
        ctx->pc = 0x15B054u;
        goto label_15b054;
    }
    ctx->pc = 0x15B04Cu;
    SET_GPR_U32(ctx, 31, 0x15B054u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B054u; }
        if (ctx->pc != 0x15B054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B054u; }
        if (ctx->pc != 0x15B054u) { return; }
    }
    ctx->pc = 0x15B054u;
label_15b054:
    // 0x15b054: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15b054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15b058:
    // 0x15b058: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15b058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15b05c:
    // 0x15b05c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b05cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15b060:
    // 0x15b060: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15b064:
    // 0x15b064: 0x3e00008  jr          $ra
label_15b068:
    if (ctx->pc == 0x15B068u) {
        ctx->pc = 0x15B068u;
            // 0x15b068: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x15B06Cu;
        goto label_15b06c;
    }
    ctx->pc = 0x15B064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B064u;
            // 0x15b068: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B06Cu;
label_15b06c:
    // 0x15b06c: 0x0  nop
    ctx->pc = 0x15b06cu;
    // NOP
label_15b070:
    // 0x15b070: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15b070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_15b074:
    // 0x15b074: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15b074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15b078:
    // 0x15b078: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15b07c:
    // 0x15b07c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15b080:
    // 0x15b080: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15b080u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b084:
    // 0x15b084: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15b084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15b088:
    // 0x15b088: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15b088u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15b08c:
    // 0x15b08c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15b08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15b090:
    // 0x15b090: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15b094:
    // 0x15b094: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15b098:
    // 0x15b098: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x15b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_15b09c:
    // 0x15b09c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_15b0a0:
    if (ctx->pc == 0x15B0A0u) {
        ctx->pc = 0x15B0A0u;
            // 0x15b0a0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15B0A4u;
        goto label_15b0a4;
    }
    ctx->pc = 0x15B09Cu;
    {
        const bool branch_taken_0x15b09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B09Cu;
            // 0x15b0a0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b09c) {
            ctx->pc = 0x15B0C8u;
            goto label_15b0c8;
        }
    }
    ctx->pc = 0x15B0A4u;
label_15b0a4:
    // 0x15b0a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_15b0a8:
    if (ctx->pc == 0x15B0A8u) {
        ctx->pc = 0x15B0ACu;
        goto label_15b0ac;
    }
    ctx->pc = 0x15B0A4u;
    {
        const bool branch_taken_0x15b0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b0a4) {
            ctx->pc = 0x15B0C8u;
            goto label_15b0c8;
        }
    }
    ctx->pc = 0x15B0ACu;
label_15b0ac:
    // 0x15b0ac: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x15b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_15b0b0:
    // 0x15b0b0: 0x0  nop
    ctx->pc = 0x15b0b0u;
    // NOP
label_15b0b4:
    // 0x15b0b4: 0x0  nop
    ctx->pc = 0x15b0b4u;
    // NOP
label_15b0b8:
    // 0x15b0b8: 0x0  nop
    ctx->pc = 0x15b0b8u;
    // NOP
label_15b0bc:
    // 0x15b0bc: 0x0  nop
    ctx->pc = 0x15b0bcu;
    // NOP
label_15b0c0:
    // 0x15b0c0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_15b0c4:
    if (ctx->pc == 0x15B0C4u) {
        ctx->pc = 0x15B0C8u;
        goto label_15b0c8;
    }
    ctx->pc = 0x15B0C0u;
    {
        const bool branch_taken_0x15b0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b0c0) {
            ctx->pc = 0x15B0ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15b0ac;
        }
    }
    ctx->pc = 0x15B0C8u;
label_15b0c8:
    // 0x15b0c8: 0x32700010  andi        $s0, $s3, 0x10
    ctx->pc = 0x15b0c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_15b0cc:
    // 0x15b0cc: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_15b0d0:
    if (ctx->pc == 0x15B0D0u) {
        ctx->pc = 0x15B0D0u;
            // 0x15b0d0: 0x96820004  lhu         $v0, 0x4($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x15B0D4u;
        goto label_15b0d4;
    }
    ctx->pc = 0x15B0CCu;
    {
        const bool branch_taken_0x15b0cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b0cc) {
            ctx->pc = 0x15B0D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B0CCu;
            // 0x15b0d0: 0x96820004  lhu         $v0, 0x4($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B0E8u;
            goto label_15b0e8;
        }
    }
    ctx->pc = 0x15B0D4u;
label_15b0d4:
    // 0x15b0d4: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x15b0d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_15b0d8:
    // 0x15b0d8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x15b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_15b0dc:
    // 0x15b0dc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_15b0e0:
    // 0x15b0e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_15b0e4:
    if (ctx->pc == 0x15B0E4u) {
        ctx->pc = 0x15B0E4u;
            // 0x15b0e4: 0x24520020  addiu       $s2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x15B0E8u;
        goto label_15b0e8;
    }
    ctx->pc = 0x15B0E0u;
    {
        const bool branch_taken_0x15b0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B0E0u;
            // 0x15b0e4: 0x24520020  addiu       $s2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0e0) {
            ctx->pc = 0x15B0F4u;
            goto label_15b0f4;
        }
    }
    ctx->pc = 0x15B0E8u;
label_15b0e8:
    // 0x15b0e8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x15b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_15b0ec:
    // 0x15b0ec: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_15b0f0:
    // 0x15b0f0: 0x24520020  addiu       $s2, $v0, 0x20
    ctx->pc = 0x15b0f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_15b0f4:
    // 0x15b0f4: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_15b0f8:
    if (ctx->pc == 0x15B0F8u) {
        ctx->pc = 0x15B0F8u;
            // 0x15b0f8: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x15B0FCu;
        goto label_15b0fc;
    }
    ctx->pc = 0x15B0F4u;
    {
        const bool branch_taken_0x15b0f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b0f4) {
            ctx->pc = 0x15B0F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B0F4u;
            // 0x15b0f8: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B114u;
            goto label_15b114;
        }
    }
    ctx->pc = 0x15B0FCu;
label_15b0fc:
    // 0x15b0fc: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x15b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_15b100:
    // 0x15b100: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_15b104:
    if (ctx->pc == 0x15B104u) {
        ctx->pc = 0x15B108u;
        goto label_15b108;
    }
    ctx->pc = 0x15B100u;
    {
        const bool branch_taken_0x15b100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b100) {
            ctx->pc = 0x15B110u;
            goto label_15b110;
        }
    }
    ctx->pc = 0x15B108u;
label_15b108:
    // 0x15b108: 0x10000092  b           . + 4 + (0x92 << 2)
label_15b10c:
    if (ctx->pc == 0x15B10Cu) {
        ctx->pc = 0x15B10Cu;
            // 0x15b10c: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->pc = 0x15B110u;
        goto label_15b110;
    }
    ctx->pc = 0x15B108u;
    {
        const bool branch_taken_0x15b108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B108u;
            // 0x15b10c: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b108) {
            ctx->pc = 0x15B354u;
            goto label_15b354;
        }
    }
    ctx->pc = 0x15B110u;
label_15b110:
    // 0x15b110: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x15b110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_15b114:
    // 0x15b114: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
label_15b118:
    if (ctx->pc == 0x15B118u) {
        ctx->pc = 0x15B118u;
            // 0x15b118: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->pc = 0x15B11Cu;
        goto label_15b11c;
    }
    ctx->pc = 0x15B114u;
    {
        const bool branch_taken_0x15b114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b114) {
            ctx->pc = 0x15B118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B114u;
            // 0x15b118: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B268u;
            goto label_15b268;
        }
    }
    ctx->pc = 0x15B11Cu;
label_15b11c:
    // 0x15b11c: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x15b11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_15b120:
    // 0x15b120: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_15b124:
    if (ctx->pc == 0x15B124u) {
        ctx->pc = 0x15B124u;
            // 0x15b124: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x15B128u;
        goto label_15b128;
    }
    ctx->pc = 0x15B120u;
    {
        const bool branch_taken_0x15b120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b120) {
            ctx->pc = 0x15B124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B120u;
            // 0x15b124: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B168u;
            goto label_15b168;
        }
    }
    ctx->pc = 0x15B128u;
label_15b128:
    // 0x15b128: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15b128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15b12c:
    // 0x15b12c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x15b12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
label_15b130:
    // 0x15b130: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x15b130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
label_15b134:
    // 0x15b134: 0x1600001b  bnez        $s0, . + 4 + (0x1B << 2)
label_15b138:
    if (ctx->pc == 0x15B138u) {
        ctx->pc = 0x15B138u;
            // 0x15b138: 0x24510020  addiu       $s1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x15B13Cu;
        goto label_15b13c;
    }
    ctx->pc = 0x15B134u;
    {
        const bool branch_taken_0x15b134 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B134u;
            // 0x15b138: 0x24510020  addiu       $s1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b134) {
            ctx->pc = 0x15B1A4u;
            goto label_15b1a4;
        }
    }
    ctx->pc = 0x15B13Cu;
label_15b13c:
    // 0x15b13c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x15b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_15b140:
    // 0x15b140: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x15b140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_15b144:
    // 0x15b144: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x15b144u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
label_15b148:
    // 0x15b148: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x15b148u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
label_15b14c:
    // 0x15b14c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x15b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_15b150:
    // 0x15b150: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15b150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15b154:
    // 0x15b154: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x15b154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_15b158:
    // 0x15b158: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x15b158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_15b15c:
    // 0x15b15c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15b160:
    // 0x15b160: 0x10000010  b           . + 4 + (0x10 << 2)
label_15b164:
    if (ctx->pc == 0x15B164u) {
        ctx->pc = 0x15B164u;
            // 0x15b164: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x15B168u;
        goto label_15b168;
    }
    ctx->pc = 0x15B160u;
    {
        const bool branch_taken_0x15b160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B160u;
            // 0x15b164: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b160) {
            ctx->pc = 0x15B1A4u;
            goto label_15b1a4;
        }
    }
    ctx->pc = 0x15B168u;
label_15b168:
    // 0x15b168: 0x2893c  dsll32      $s1, $v0, 4
    ctx->pc = 0x15b168u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 4));
label_15b16c:
    // 0x15b16c: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_15b170:
    if (ctx->pc == 0x15B170u) {
        ctx->pc = 0x15B170u;
            // 0x15b170: 0x11893e  dsrl32      $s1, $s1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 4));
        ctx->pc = 0x15B174u;
        goto label_15b174;
    }
    ctx->pc = 0x15B16Cu;
    {
        const bool branch_taken_0x15b16c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B16Cu;
            // 0x15b170: 0x11893e  dsrl32      $s1, $s1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b16c) {
            ctx->pc = 0x15B1A4u;
            goto label_15b1a4;
        }
    }
    ctx->pc = 0x15B174u;
label_15b174:
    // 0x15b174: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x15b174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_15b178:
    // 0x15b178: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x15b178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_15b17c:
    // 0x15b17c: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x15b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
label_15b180:
    // 0x15b180: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x15b180u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
label_15b184:
    // 0x15b184: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x15b184u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_15b188:
    // 0x15b188: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x15b188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_15b18c:
    // 0x15b18c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x15b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_15b190:
    // 0x15b190: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15b190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15b194:
    // 0x15b194: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x15b194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_15b198:
    // 0x15b198: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x15b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_15b19c:
    // 0x15b19c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15b1a0:
    // 0x15b1a0: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x15b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_15b1a4:
    // 0x15b1a4: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x15b1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_15b1a8:
    // 0x15b1a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_15b1ac:
    if (ctx->pc == 0x15B1ACu) {
        ctx->pc = 0x15B1ACu;
            // 0x15b1ac: 0xaf918438  sw          $s1, -0x7BC8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935608), GPR_U32(ctx, 17));
        ctx->pc = 0x15B1B0u;
        goto label_15b1b0;
    }
    ctx->pc = 0x15B1A8u;
    {
        const bool branch_taken_0x15b1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b1a8) {
            ctx->pc = 0x15B1ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1A8u;
            // 0x15b1ac: 0xaf918438  sw          $s1, -0x7BC8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935608), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B1C0u;
            goto label_15b1c0;
        }
    }
    ctx->pc = 0x15B1B0u;
label_15b1b0:
    // 0x15b1b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15b1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b1b4:
    // 0x15b1b4: 0xc040c00  jal         func_103000
label_15b1b8:
    if (ctx->pc == 0x15B1B8u) {
        ctx->pc = 0x15B1B8u;
            // 0x15b1b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15B1BCu;
        goto label_15b1bc;
    }
    ctx->pc = 0x15B1B4u;
    SET_GPR_U32(ctx, 31, 0x15B1BCu);
    ctx->pc = 0x15B1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1B4u;
            // 0x15b1b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103000u;
    if (runtime->hasFunction(0x103000u)) {
        auto targetFn = runtime->lookupFunction(0x103000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B1BCu; }
        if (ctx->pc != 0x15B1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103000_0x103000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B1BCu; }
        if (ctx->pc != 0x15B1BCu) { return; }
    }
    ctx->pc = 0x15B1BCu;
label_15b1bc:
    // 0x15b1bc: 0xaf918438  sw          $s1, -0x7BC8($gp)
    ctx->pc = 0x15b1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935608), GPR_U32(ctx, 17));
label_15b1c0:
    // 0x15b1c0: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x15b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
label_15b1c4:
    // 0x15b1c4: 0xac409020  sw          $zero, -0x6FE0($v0)
    ctx->pc = 0x15b1c4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294938656), GPR_U32(ctx, 0)); // MMIO: 0x10009020
label_15b1c8:
    // 0x15b1c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15b1cc:
    // 0x15b1cc: 0xac519030  sw          $s1, -0x6FD0($v0)
    ctx->pc = 0x15b1ccu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294938672), GPR_U32(ctx, 17)); // MMIO: 0x10009030
label_15b1d0:
    // 0x15b1d0: 0x32630020  andi        $v1, $s3, 0x20
    ctx->pc = 0x15b1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_15b1d4:
    // 0x15b1d4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_15b1d8:
    if (ctx->pc == 0x15B1D8u) {
        ctx->pc = 0x15B1D8u;
            // 0x15b1d8: 0xac44e010  sw          $a0, -0x1FF0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294959120), GPR_U32(ctx, 4));
        ctx->pc = 0x15B1DCu;
        goto label_15b1dc;
    }
    ctx->pc = 0x15B1D4u;
    {
        const bool branch_taken_0x15b1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1D4u;
            // 0x15b1d8: 0xac44e010  sw          $a0, -0x1FF0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294959120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1d4) {
            ctx->pc = 0x15B1ECu;
            goto label_15b1ec;
        }
    }
    ctx->pc = 0x15B1DCu;
label_15b1dc:
    // 0x15b1dc: 0xc043184  jal         func_10C610
label_15b1e0:
    if (ctx->pc == 0x15B1E0u) {
        ctx->pc = 0x15B1E0u;
            // 0x15b1e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15B1E4u;
        goto label_15b1e4;
    }
    ctx->pc = 0x15B1DCu;
    SET_GPR_U32(ctx, 31, 0x15B1E4u);
    ctx->pc = 0x15B1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1DCu;
            // 0x15b1e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C610u;
    if (runtime->hasFunction(0x10C610u)) {
        auto targetFn = runtime->lookupFunction(0x10C610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B1E4u; }
        if (ctx->pc != 0x15B1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C610_0x10c610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B1E4u; }
        if (ctx->pc != 0x15B1E4u) { return; }
    }
    ctx->pc = 0x15B1E4u;
label_15b1e4:
    // 0x15b1e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_15b1e8:
    if (ctx->pc == 0x15B1E8u) {
        ctx->pc = 0x15B1E8u;
            // 0x15b1e8: 0x8f828420  lw          $v0, -0x7BE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935584)));
        ctx->pc = 0x15B1ECu;
        goto label_15b1ec;
    }
    ctx->pc = 0x15B1E4u;
    {
        const bool branch_taken_0x15b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1E4u;
            // 0x15b1e8: 0x8f828420  lw          $v0, -0x7BE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1e4) {
            ctx->pc = 0x15B204u;
            goto label_15b204;
        }
    }
    ctx->pc = 0x15B1ECu;
label_15b1ec:
    // 0x15b1ec: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x15b1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_15b1f0:
    // 0x15b1f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_15b1f4:
    if (ctx->pc == 0x15B1F4u) {
        ctx->pc = 0x15B1F8u;
        goto label_15b1f8;
    }
    ctx->pc = 0x15B1F0u;
    {
        const bool branch_taken_0x15b1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b1f0) {
            ctx->pc = 0x15B200u;
            goto label_15b200;
        }
    }
    ctx->pc = 0x15B1F8u;
label_15b1f8:
    // 0x15b1f8: 0xc043178  jal         func_10C5E0
label_15b1fc:
    if (ctx->pc == 0x15B1FCu) {
        ctx->pc = 0x15B1FCu;
            // 0x15b1fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15B200u;
        goto label_15b200;
    }
    ctx->pc = 0x15B1F8u;
    SET_GPR_U32(ctx, 31, 0x15B200u);
    ctx->pc = 0x15B1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1F8u;
            // 0x15b1fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C5E0u;
    if (runtime->hasFunction(0x10C5E0u)) {
        auto targetFn = runtime->lookupFunction(0x10C5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B200u; }
        if (ctx->pc != 0x15B200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C5E0_0x10c5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B200u; }
        if (ctx->pc != 0x15B200u) { return; }
    }
    ctx->pc = 0x15B200u;
label_15b200:
    // 0x15b200: 0x8f828420  lw          $v0, -0x7BE0($gp)
    ctx->pc = 0x15b200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935584)));
label_15b204:
    // 0x15b204: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_15b208:
    if (ctx->pc == 0x15B208u) {
        ctx->pc = 0x15B208u;
            // 0x15b208: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->pc = 0x15B20Cu;
        goto label_15b20c;
    }
    ctx->pc = 0x15B204u;
    {
        const bool branch_taken_0x15b204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b204) {
            ctx->pc = 0x15B208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B204u;
            // 0x15b208: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B21Cu;
            goto label_15b21c;
        }
    }
    ctx->pc = 0x15B20Cu;
label_15b20c:
    // 0x15b20c: 0x40f809  jalr        $v0
label_15b210:
    if (ctx->pc == 0x15B210u) {
        ctx->pc = 0x15B210u;
            // 0x15b210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15B214u;
        goto label_15b214;
    }
    ctx->pc = 0x15B20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B214u);
        ctx->pc = 0x15B210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B20Cu;
            // 0x15b210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15B214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15B214u; }
            if (ctx->pc != 0x15B214u) { return; }
        }
        }
    }
    ctx->pc = 0x15B214u;
label_15b214:
    // 0x15b214: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15b214u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b218:
    // 0x15b218: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x15b218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
label_15b21c:
    // 0x15b21c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_15b220:
    if (ctx->pc == 0x15B220u) {
        ctx->pc = 0x15B220u;
            // 0x15b220: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x15B224u;
        goto label_15b224;
    }
    ctx->pc = 0x15B21Cu;
    {
        const bool branch_taken_0x15b21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b21c) {
            ctx->pc = 0x15B220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B21Cu;
            // 0x15b220: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B230u;
            goto label_15b230;
        }
    }
    ctx->pc = 0x15B224u;
label_15b224:
    // 0x15b224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b228:
    // 0x15b228: 0xaf828434  sw          $v0, -0x7BCC($gp)
    ctx->pc = 0x15b228u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935604), GPR_U32(ctx, 2));
label_15b22c:
    // 0x15b22c: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x15b22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_15b230:
    // 0x15b230: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_15b234:
    if (ctx->pc == 0x15B234u) {
        ctx->pc = 0x15B234u;
            // 0x15b234: 0xaf948444  sw          $s4, -0x7BBC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935620), GPR_U32(ctx, 20));
        ctx->pc = 0x15B238u;
        goto label_15b238;
    }
    ctx->pc = 0x15B230u;
    {
        const bool branch_taken_0x15b230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b230) {
            ctx->pc = 0x15B234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B230u;
            // 0x15b234: 0xaf948444  sw          $s4, -0x7BBC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935620), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B254u;
            goto label_15b254;
        }
    }
    ctx->pc = 0x15B238u;
label_15b238:
    // 0x15b238: 0xf  sync
    ctx->pc = 0x15b238u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_15b23c:
    // 0x15b23c: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
label_15b240:
    if (ctx->pc == 0x15B240u) {
        ctx->pc = 0x15B244u;
        goto label_15b244;
    }
    ctx->pc = 0x15B23Cu;
    {
        const bool branch_taken_0x15b23c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b23c) {
            ctx->pc = 0x15B250u;
            goto label_15b250;
        }
    }
    ctx->pc = 0x15B244u;
label_15b244:
    // 0x15b244: 0x24030145  addiu       $v1, $zero, 0x145
    ctx->pc = 0x15b244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
label_15b248:
    // 0x15b248: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x15b248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
label_15b24c:
    // 0x15b24c: 0xac439000  sw          $v1, -0x7000($v0)
    ctx->pc = 0x15b24cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294938624), GPR_U32(ctx, 3)); // MMIO: 0x10009000
label_15b250:
    // 0x15b250: 0xaf948444  sw          $s4, -0x7BBC($gp)
    ctx->pc = 0x15b250u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935620), GPR_U32(ctx, 20));
label_15b254:
    // 0x15b254: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x15b254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_15b258:
    // 0x15b258: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x15b258u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_15b25c:
    // 0x15b25c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15b25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15b260:
    // 0x15b260: 0xa6820006  sh          $v0, 0x6($s4)
    ctx->pc = 0x15b260u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
label_15b264:
    // 0x15b264: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x15b264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_15b268:
    // 0x15b268: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x15b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_15b26c:
    // 0x15b26c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x15b26cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_15b270:
    // 0x15b270: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_15b274:
    if (ctx->pc == 0x15B274u) {
        ctx->pc = 0x15B274u;
            // 0x15b274: 0x8e43001c  lw          $v1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x15B278u;
        goto label_15b278;
    }
    ctx->pc = 0x15B270u;
    {
        const bool branch_taken_0x15b270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b270) {
            ctx->pc = 0x15B274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B270u;
            // 0x15b274: 0x8e43001c  lw          $v1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B280u;
            goto label_15b280;
        }
    }
    ctx->pc = 0x15B278u;
label_15b278:
    // 0x15b278: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x15b278u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_15b27c:
    // 0x15b27c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x15b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_15b280:
    // 0x15b280: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x15b280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_15b284:
    // 0x15b284: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x15b284u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_15b288:
    // 0x15b288: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_15b28c:
    if (ctx->pc == 0x15B28Cu) {
        ctx->pc = 0x15B290u;
        goto label_15b290;
    }
    ctx->pc = 0x15B288u;
    {
        const bool branch_taken_0x15b288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b288) {
            ctx->pc = 0x15B294u;
            goto label_15b294;
        }
    }
    ctx->pc = 0x15B290u;
label_15b290:
    // 0x15b290: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x15b290u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_15b294:
    // 0x15b294: 0x1600002e  bnez        $s0, . + 4 + (0x2E << 2)
label_15b298:
    if (ctx->pc == 0x15B298u) {
        ctx->pc = 0x15B29Cu;
        goto label_15b29c;
    }
    ctx->pc = 0x15B294u;
    {
        const bool branch_taken_0x15b294 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b294) {
            ctx->pc = 0x15B350u;
            goto label_15b350;
        }
    }
    ctx->pc = 0x15B29Cu;
label_15b29c:
    // 0x15b29c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x15b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15b2a0:
    // 0x15b2a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15b2a4:
    // 0x15b2a4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x15b2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_15b2a8:
    // 0x15b2a8: 0x5462001d  bnel        $v1, $v0, . + 4 + (0x1D << 2)
label_15b2ac:
    if (ctx->pc == 0x15B2ACu) {
        ctx->pc = 0x15B2ACu;
            // 0x15b2ac: 0x8e90001c  lw          $s0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->pc = 0x15B2B0u;
        goto label_15b2b0;
    }
    ctx->pc = 0x15B2A8u;
    {
        const bool branch_taken_0x15b2a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b2a8) {
            ctx->pc = 0x15B2ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B2A8u;
            // 0x15b2ac: 0x8e90001c  lw          $s0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B320u;
            goto label_15b320;
        }
    }
    ctx->pc = 0x15B2B0u;
label_15b2b0:
    // 0x15b2b0: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x15b2b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_15b2b4:
    // 0x15b2b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15b2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15b2b8:
    // 0x15b2b8: 0xa6820004  sh          $v0, 0x4($s4)
    ctx->pc = 0x15b2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 2));
label_15b2bc:
    // 0x15b2bc: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x15b2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_15b2c0:
    // 0x15b2c0: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x15b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_15b2c4:
    // 0x15b2c4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x15b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15b2c8:
    // 0x15b2c8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_15b2cc:
    // 0x15b2cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15b2d0:
    // 0x15b2d0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x15b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_15b2d4:
    // 0x15b2d4: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x15b2d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_15b2d8:
    // 0x15b2d8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x15b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_15b2dc:
    // 0x15b2dc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_15b2e0:
    // 0x15b2e0: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x15b2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_15b2e4:
    // 0x15b2e4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x15b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_15b2e8:
    // 0x15b2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15b2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b2ec:
    // 0x15b2ec: 0xc056cf0  jal         func_15B3C0
label_15b2f0:
    if (ctx->pc == 0x15B2F0u) {
        ctx->pc = 0x15B2F0u;
            // 0x15b2f0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x15B2F4u;
        goto label_15b2f4;
    }
    ctx->pc = 0x15B2ECu;
    SET_GPR_U32(ctx, 31, 0x15B2F4u);
    ctx->pc = 0x15B2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B2ECu;
            // 0x15b2f0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B3C0u;
    if (runtime->hasFunction(0x15B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B2F4u; }
        if (ctx->pc != 0x15B2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B3C0_0x15b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B2F4u; }
        if (ctx->pc != 0x15B2F4u) { return; }
    }
    ctx->pc = 0x15B2F4u;
label_15b2f4:
    // 0x15b2f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15b2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15b2f8:
    // 0x15b2f8: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x15b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_15b2fc:
    // 0x15b2fc: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x15b2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
label_15b300:
    // 0x15b300: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x15b300u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
label_15b304:
    // 0x15b304: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15b304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15b308:
    // 0x15b308: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15b308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15b30c:
    // 0x15b30c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15b30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_15b310:
    // 0x15b310: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_15b314:
    // 0x15b314: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15b318:
    // 0x15b318: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x15b318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_15b31c:
    // 0x15b31c: 0x8e90001c  lw          $s0, 0x1C($s4)
    ctx->pc = 0x15b31cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15b320:
    // 0x15b320: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_15b324:
    if (ctx->pc == 0x15B324u) {
        ctx->pc = 0x15B328u;
        goto label_15b328;
    }
    ctx->pc = 0x15B320u;
    {
        const bool branch_taken_0x15b320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b320) {
            ctx->pc = 0x15B350u;
            goto label_15b350;
        }
    }
    ctx->pc = 0x15B328u;
label_15b328:
    // 0x15b328: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_15b32c:
    if (ctx->pc == 0x15B32Cu) {
        ctx->pc = 0x15B330u;
        goto label_15b330;
    }
    ctx->pc = 0x15B328u;
    {
        const bool branch_taken_0x15b328 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b328) {
            ctx->pc = 0x15B350u;
            goto label_15b350;
        }
    }
    ctx->pc = 0x15B330u;
label_15b330:
    // 0x15b330: 0xc056bc4  jal         func_15AF10
label_15b334:
    if (ctx->pc == 0x15B334u) {
        ctx->pc = 0x15B334u;
            // 0x15b334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15B338u;
        goto label_15b338;
    }
    ctx->pc = 0x15B330u;
    SET_GPR_U32(ctx, 31, 0x15B338u);
    ctx->pc = 0x15B334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B330u;
            // 0x15b334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AF10u;
    goto label_15af10;
    ctx->pc = 0x15B338u;
label_15b338:
    // 0x15b338: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x15b338u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_15b33c:
    // 0x15b33c: 0x0  nop
    ctx->pc = 0x15b33cu;
    // NOP
label_15b340:
    // 0x15b340: 0x0  nop
    ctx->pc = 0x15b340u;
    // NOP
label_15b344:
    // 0x15b344: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_15b348:
    if (ctx->pc == 0x15B348u) {
        ctx->pc = 0x15B34Cu;
        goto label_15b34c;
    }
    ctx->pc = 0x15B344u;
    {
        const bool branch_taken_0x15b344 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b344) {
            ctx->pc = 0x15B330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15b330;
        }
    }
    ctx->pc = 0x15B34Cu;
label_15b34c:
    // 0x15b34c: 0x0  nop
    ctx->pc = 0x15b34cu;
    // NOP
label_15b350:
    // 0x15b350: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b354:
    // 0x15b354: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15b354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15b358:
    // 0x15b358: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15b358u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15b35c:
    // 0x15b35c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15b35cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15b360:
    // 0x15b360: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15b360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15b364:
    // 0x15b364: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15b364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15b368:
    // 0x15b368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15b36c:
    // 0x15b36c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15b370:
    // 0x15b370: 0x3e00008  jr          $ra
label_15b374:
    if (ctx->pc == 0x15B374u) {
        ctx->pc = 0x15B374u;
            // 0x15b374: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x15B378u;
        goto label_15b378;
    }
    ctx->pc = 0x15B370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B370u;
            // 0x15b374: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B378u;
label_15b378:
    // 0x15b378: 0x0  nop
    ctx->pc = 0x15b378u;
    // NOP
label_15b37c:
    // 0x15b37c: 0x0  nop
    ctx->pc = 0x15b37cu;
    // NOP
}
