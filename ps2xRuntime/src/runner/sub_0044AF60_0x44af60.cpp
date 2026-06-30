#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044AF60
// Address: 0x44af60 - 0x44b210
void sub_0044AF60_0x44af60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044AF60_0x44af60");
#endif

    switch (ctx->pc) {
        case 0x44af60u: goto label_44af60;
        case 0x44af64u: goto label_44af64;
        case 0x44af68u: goto label_44af68;
        case 0x44af6cu: goto label_44af6c;
        case 0x44af70u: goto label_44af70;
        case 0x44af74u: goto label_44af74;
        case 0x44af78u: goto label_44af78;
        case 0x44af7cu: goto label_44af7c;
        case 0x44af80u: goto label_44af80;
        case 0x44af84u: goto label_44af84;
        case 0x44af88u: goto label_44af88;
        case 0x44af8cu: goto label_44af8c;
        case 0x44af90u: goto label_44af90;
        case 0x44af94u: goto label_44af94;
        case 0x44af98u: goto label_44af98;
        case 0x44af9cu: goto label_44af9c;
        case 0x44afa0u: goto label_44afa0;
        case 0x44afa4u: goto label_44afa4;
        case 0x44afa8u: goto label_44afa8;
        case 0x44afacu: goto label_44afac;
        case 0x44afb0u: goto label_44afb0;
        case 0x44afb4u: goto label_44afb4;
        case 0x44afb8u: goto label_44afb8;
        case 0x44afbcu: goto label_44afbc;
        case 0x44afc0u: goto label_44afc0;
        case 0x44afc4u: goto label_44afc4;
        case 0x44afc8u: goto label_44afc8;
        case 0x44afccu: goto label_44afcc;
        case 0x44afd0u: goto label_44afd0;
        case 0x44afd4u: goto label_44afd4;
        case 0x44afd8u: goto label_44afd8;
        case 0x44afdcu: goto label_44afdc;
        case 0x44afe0u: goto label_44afe0;
        case 0x44afe4u: goto label_44afe4;
        case 0x44afe8u: goto label_44afe8;
        case 0x44afecu: goto label_44afec;
        case 0x44aff0u: goto label_44aff0;
        case 0x44aff4u: goto label_44aff4;
        case 0x44aff8u: goto label_44aff8;
        case 0x44affcu: goto label_44affc;
        case 0x44b000u: goto label_44b000;
        case 0x44b004u: goto label_44b004;
        case 0x44b008u: goto label_44b008;
        case 0x44b00cu: goto label_44b00c;
        case 0x44b010u: goto label_44b010;
        case 0x44b014u: goto label_44b014;
        case 0x44b018u: goto label_44b018;
        case 0x44b01cu: goto label_44b01c;
        case 0x44b020u: goto label_44b020;
        case 0x44b024u: goto label_44b024;
        case 0x44b028u: goto label_44b028;
        case 0x44b02cu: goto label_44b02c;
        case 0x44b030u: goto label_44b030;
        case 0x44b034u: goto label_44b034;
        case 0x44b038u: goto label_44b038;
        case 0x44b03cu: goto label_44b03c;
        case 0x44b040u: goto label_44b040;
        case 0x44b044u: goto label_44b044;
        case 0x44b048u: goto label_44b048;
        case 0x44b04cu: goto label_44b04c;
        case 0x44b050u: goto label_44b050;
        case 0x44b054u: goto label_44b054;
        case 0x44b058u: goto label_44b058;
        case 0x44b05cu: goto label_44b05c;
        case 0x44b060u: goto label_44b060;
        case 0x44b064u: goto label_44b064;
        case 0x44b068u: goto label_44b068;
        case 0x44b06cu: goto label_44b06c;
        case 0x44b070u: goto label_44b070;
        case 0x44b074u: goto label_44b074;
        case 0x44b078u: goto label_44b078;
        case 0x44b07cu: goto label_44b07c;
        case 0x44b080u: goto label_44b080;
        case 0x44b084u: goto label_44b084;
        case 0x44b088u: goto label_44b088;
        case 0x44b08cu: goto label_44b08c;
        case 0x44b090u: goto label_44b090;
        case 0x44b094u: goto label_44b094;
        case 0x44b098u: goto label_44b098;
        case 0x44b09cu: goto label_44b09c;
        case 0x44b0a0u: goto label_44b0a0;
        case 0x44b0a4u: goto label_44b0a4;
        case 0x44b0a8u: goto label_44b0a8;
        case 0x44b0acu: goto label_44b0ac;
        case 0x44b0b0u: goto label_44b0b0;
        case 0x44b0b4u: goto label_44b0b4;
        case 0x44b0b8u: goto label_44b0b8;
        case 0x44b0bcu: goto label_44b0bc;
        case 0x44b0c0u: goto label_44b0c0;
        case 0x44b0c4u: goto label_44b0c4;
        case 0x44b0c8u: goto label_44b0c8;
        case 0x44b0ccu: goto label_44b0cc;
        case 0x44b0d0u: goto label_44b0d0;
        case 0x44b0d4u: goto label_44b0d4;
        case 0x44b0d8u: goto label_44b0d8;
        case 0x44b0dcu: goto label_44b0dc;
        case 0x44b0e0u: goto label_44b0e0;
        case 0x44b0e4u: goto label_44b0e4;
        case 0x44b0e8u: goto label_44b0e8;
        case 0x44b0ecu: goto label_44b0ec;
        case 0x44b0f0u: goto label_44b0f0;
        case 0x44b0f4u: goto label_44b0f4;
        case 0x44b0f8u: goto label_44b0f8;
        case 0x44b0fcu: goto label_44b0fc;
        case 0x44b100u: goto label_44b100;
        case 0x44b104u: goto label_44b104;
        case 0x44b108u: goto label_44b108;
        case 0x44b10cu: goto label_44b10c;
        case 0x44b110u: goto label_44b110;
        case 0x44b114u: goto label_44b114;
        case 0x44b118u: goto label_44b118;
        case 0x44b11cu: goto label_44b11c;
        case 0x44b120u: goto label_44b120;
        case 0x44b124u: goto label_44b124;
        case 0x44b128u: goto label_44b128;
        case 0x44b12cu: goto label_44b12c;
        case 0x44b130u: goto label_44b130;
        case 0x44b134u: goto label_44b134;
        case 0x44b138u: goto label_44b138;
        case 0x44b13cu: goto label_44b13c;
        case 0x44b140u: goto label_44b140;
        case 0x44b144u: goto label_44b144;
        case 0x44b148u: goto label_44b148;
        case 0x44b14cu: goto label_44b14c;
        case 0x44b150u: goto label_44b150;
        case 0x44b154u: goto label_44b154;
        case 0x44b158u: goto label_44b158;
        case 0x44b15cu: goto label_44b15c;
        case 0x44b160u: goto label_44b160;
        case 0x44b164u: goto label_44b164;
        case 0x44b168u: goto label_44b168;
        case 0x44b16cu: goto label_44b16c;
        case 0x44b170u: goto label_44b170;
        case 0x44b174u: goto label_44b174;
        case 0x44b178u: goto label_44b178;
        case 0x44b17cu: goto label_44b17c;
        case 0x44b180u: goto label_44b180;
        case 0x44b184u: goto label_44b184;
        case 0x44b188u: goto label_44b188;
        case 0x44b18cu: goto label_44b18c;
        case 0x44b190u: goto label_44b190;
        case 0x44b194u: goto label_44b194;
        case 0x44b198u: goto label_44b198;
        case 0x44b19cu: goto label_44b19c;
        case 0x44b1a0u: goto label_44b1a0;
        case 0x44b1a4u: goto label_44b1a4;
        case 0x44b1a8u: goto label_44b1a8;
        case 0x44b1acu: goto label_44b1ac;
        case 0x44b1b0u: goto label_44b1b0;
        case 0x44b1b4u: goto label_44b1b4;
        case 0x44b1b8u: goto label_44b1b8;
        case 0x44b1bcu: goto label_44b1bc;
        case 0x44b1c0u: goto label_44b1c0;
        case 0x44b1c4u: goto label_44b1c4;
        case 0x44b1c8u: goto label_44b1c8;
        case 0x44b1ccu: goto label_44b1cc;
        case 0x44b1d0u: goto label_44b1d0;
        case 0x44b1d4u: goto label_44b1d4;
        case 0x44b1d8u: goto label_44b1d8;
        case 0x44b1dcu: goto label_44b1dc;
        case 0x44b1e0u: goto label_44b1e0;
        case 0x44b1e4u: goto label_44b1e4;
        case 0x44b1e8u: goto label_44b1e8;
        case 0x44b1ecu: goto label_44b1ec;
        case 0x44b1f0u: goto label_44b1f0;
        case 0x44b1f4u: goto label_44b1f4;
        case 0x44b1f8u: goto label_44b1f8;
        case 0x44b1fcu: goto label_44b1fc;
        case 0x44b200u: goto label_44b200;
        case 0x44b204u: goto label_44b204;
        case 0x44b208u: goto label_44b208;
        case 0x44b20cu: goto label_44b20c;
        default: break;
    }

    ctx->pc = 0x44af60u;

label_44af60:
    // 0x44af60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44af60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44af64:
    // 0x44af64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44af64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44af68:
    // 0x44af68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44af68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44af6c:
    // 0x44af6c: 0x24425a30  addiu       $v0, $v0, 0x5A30
    ctx->pc = 0x44af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23088));
label_44af70:
    // 0x44af70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44af70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44af74:
    // 0x44af74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44af74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44af78:
    // 0x44af78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44af78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44af7c:
    // 0x44af7c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x44af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_44af80:
    // 0x44af80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x44af80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44af84:
    // 0x44af84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44af84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44af88:
    // 0x44af88: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x44af88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_44af8c:
    // 0x44af8c: 0xc0fe63c  jal         func_3F98F0
label_44af90:
    if (ctx->pc == 0x44AF90u) {
        ctx->pc = 0x44AF90u;
            // 0x44af90: 0xac513eb8  sw          $s1, 0x3EB8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16056), GPR_U32(ctx, 17));
        ctx->pc = 0x44AF94u;
        goto label_44af94;
    }
    ctx->pc = 0x44AF8Cu;
    SET_GPR_U32(ctx, 31, 0x44AF94u);
    ctx->pc = 0x44AF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AF8Cu;
            // 0x44af90: 0xac513eb8  sw          $s1, 0x3EB8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16056), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F98F0u;
    if (runtime->hasFunction(0x3F98F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F98F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AF94u; }
        if (ctx->pc != 0x44AF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F98F0_0x3f98f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AF94u; }
        if (ctx->pc != 0x44AF94u) { return; }
    }
    ctx->pc = 0x44AF94u;
label_44af94:
    // 0x44af94: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44af94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44af98:
    // 0x44af98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44af98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44af9c:
    // 0x44af9c: 0x24635a40  addiu       $v1, $v1, 0x5A40
    ctx->pc = 0x44af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23104));
label_44afa0:
    // 0x44afa0: 0x24425a4c  addiu       $v0, $v0, 0x5A4C
    ctx->pc = 0x44afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23116));
label_44afa4:
    // 0x44afa4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x44afa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_44afa8:
    // 0x44afa8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x44afa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_44afac:
    // 0x44afac: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x44afacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_44afb0:
    // 0x44afb0: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x44afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_44afb4:
    // 0x44afb4: 0x3202007f  andi        $v0, $s0, 0x7F
    ctx->pc = 0x44afb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)127);
label_44afb8:
    // 0x44afb8: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x44afb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_44afbc:
    // 0x44afbc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44afc0:
    // 0x44afc0: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x44afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_44afc4:
    // 0x44afc4: 0xc0fe54c  jal         func_3F9530
label_44afc8:
    if (ctx->pc == 0x44AFC8u) {
        ctx->pc = 0x44AFC8u;
            // 0x44afc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44AFCCu;
        goto label_44afcc;
    }
    ctx->pc = 0x44AFC4u;
    SET_GPR_U32(ctx, 31, 0x44AFCCu);
    ctx->pc = 0x44AFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AFC4u;
            // 0x44afc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AFCCu; }
        if (ctx->pc != 0x44AFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AFCCu; }
        if (ctx->pc != 0x44AFCCu) { return; }
    }
    ctx->pc = 0x44AFCCu;
label_44afcc:
    // 0x44afcc: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x44afccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_44afd0:
    // 0x44afd0: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x44afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_44afd4:
    // 0x44afd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44afd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44afd8:
    // 0x44afd8: 0xc0fe618  jal         func_3F9860
label_44afdc:
    if (ctx->pc == 0x44AFDCu) {
        ctx->pc = 0x44AFDCu;
            // 0x44afdc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x44AFE0u;
        goto label_44afe0;
    }
    ctx->pc = 0x44AFD8u;
    SET_GPR_U32(ctx, 31, 0x44AFE0u);
    ctx->pc = 0x44AFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AFD8u;
            // 0x44afdc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9860u;
    if (runtime->hasFunction(0x3F9860u)) {
        auto targetFn = runtime->lookupFunction(0x3F9860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AFE0u; }
        if (ctx->pc != 0x44AFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9860_0x3f9860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AFE0u; }
        if (ctx->pc != 0x44AFE0u) { return; }
    }
    ctx->pc = 0x44AFE0u;
label_44afe0:
    // 0x44afe0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x44afe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44afe4:
    // 0x44afe4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44afe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44afe8:
    // 0x44afe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44afe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44afec:
    // 0x44afec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44afecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44aff0:
    // 0x44aff0: 0x3e00008  jr          $ra
label_44aff4:
    if (ctx->pc == 0x44AFF4u) {
        ctx->pc = 0x44AFF4u;
            // 0x44aff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44AFF8u;
        goto label_44aff8;
    }
    ctx->pc = 0x44AFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44AFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44AFF0u;
            // 0x44aff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44AFF8u;
label_44aff8:
    // 0x44aff8: 0x0  nop
    ctx->pc = 0x44aff8u;
    // NOP
label_44affc:
    // 0x44affc: 0x0  nop
    ctx->pc = 0x44affcu;
    // NOP
label_44b000:
    // 0x44b000: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x44b000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_44b004:
    // 0x44b004: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x44b004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44b008:
    // 0x44b008: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x44b008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_44b00c:
    // 0x44b00c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x44b00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_44b010:
    // 0x44b010: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x44b010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_44b014:
    // 0x44b014: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44b014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44b018:
    // 0x44b018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44b018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44b01c:
    // 0x44b01c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44b01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44b020:
    // 0x44b020: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44b020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44b024:
    // 0x44b024: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x44b024u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_44b028:
    // 0x44b028: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
label_44b02c:
    if (ctx->pc == 0x44B02Cu) {
        ctx->pc = 0x44B02Cu;
            // 0x44b02c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B030u;
        goto label_44b030;
    }
    ctx->pc = 0x44B028u;
    {
        const bool branch_taken_0x44b028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x44B02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B028u;
            // 0x44b02c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b028) {
            ctx->pc = 0x44B09Cu;
            goto label_44b09c;
        }
    }
    ctx->pc = 0x44B030u;
label_44b030:
    // 0x44b030: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44b030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44b034:
    // 0x44b034: 0x50a30016  beql        $a1, $v1, . + 4 + (0x16 << 2)
label_44b038:
    if (ctx->pc == 0x44B038u) {
        ctx->pc = 0x44B038u;
            // 0x44b038: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x44B03Cu;
        goto label_44b03c;
    }
    ctx->pc = 0x44B034u;
    {
        const bool branch_taken_0x44b034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44b034) {
            ctx->pc = 0x44B038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44B034u;
            // 0x44b038: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44B090u;
            goto label_44b090;
        }
    }
    ctx->pc = 0x44B03Cu;
label_44b03c:
    // 0x44b03c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44b040:
    // 0x44b040: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_44b044:
    if (ctx->pc == 0x44B044u) {
        ctx->pc = 0x44B048u;
        goto label_44b048;
    }
    ctx->pc = 0x44B040u;
    {
        const bool branch_taken_0x44b040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44b040) {
            ctx->pc = 0x44B050u;
            goto label_44b050;
        }
    }
    ctx->pc = 0x44B048u;
label_44b048:
    // 0x44b048: 0x10000067  b           . + 4 + (0x67 << 2)
label_44b04c:
    if (ctx->pc == 0x44B04Cu) {
        ctx->pc = 0x44B050u;
        goto label_44b050;
    }
    ctx->pc = 0x44B048u;
    {
        const bool branch_taken_0x44b048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b048) {
            ctx->pc = 0x44B1E8u;
            goto label_44b1e8;
        }
    }
    ctx->pc = 0x44B050u;
label_44b050:
    // 0x44b050: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44b050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_44b054:
    // 0x44b054: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44b054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44b058:
    // 0x44b058: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x44b058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_44b05c:
    // 0x44b05c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x44b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_44b060:
    // 0x44b060: 0x10650061  beq         $v1, $a1, . + 4 + (0x61 << 2)
label_44b064:
    if (ctx->pc == 0x44B064u) {
        ctx->pc = 0x44B068u;
        goto label_44b068;
    }
    ctx->pc = 0x44B060u;
    {
        const bool branch_taken_0x44b060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x44b060) {
            ctx->pc = 0x44B1E8u;
            goto label_44b1e8;
        }
    }
    ctx->pc = 0x44B068u;
label_44b068:
    // 0x44b068: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44b068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44b06c:
    // 0x44b06c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x44b06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_44b070:
    // 0x44b070: 0x320f809  jalr        $t9
label_44b074:
    if (ctx->pc == 0x44B074u) {
        ctx->pc = 0x44B078u;
        goto label_44b078;
    }
    ctx->pc = 0x44B070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44B078u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44B078u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44B078u; }
            if (ctx->pc != 0x44B078u) { return; }
        }
        }
    }
    ctx->pc = 0x44B078u;
label_44b078:
    // 0x44b078: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x44b078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44b07c:
    // 0x44b07c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x44b07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_44b080:
    // 0x44b080: 0x320f809  jalr        $t9
label_44b084:
    if (ctx->pc == 0x44B084u) {
        ctx->pc = 0x44B084u;
            // 0x44b084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B088u;
        goto label_44b088;
    }
    ctx->pc = 0x44B080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44B088u);
        ctx->pc = 0x44B084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B080u;
            // 0x44b084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44B088u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44B088u; }
            if (ctx->pc != 0x44B088u) { return; }
        }
        }
    }
    ctx->pc = 0x44B088u;
label_44b088:
    // 0x44b088: 0x10000057  b           . + 4 + (0x57 << 2)
label_44b08c:
    if (ctx->pc == 0x44B08Cu) {
        ctx->pc = 0x44B090u;
        goto label_44b090;
    }
    ctx->pc = 0x44B088u;
    {
        const bool branch_taken_0x44b088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b088) {
            ctx->pc = 0x44B1E8u;
            goto label_44b1e8;
        }
    }
    ctx->pc = 0x44B090u;
label_44b090:
    // 0x44b090: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x44b090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_44b094:
    // 0x44b094: 0x320f809  jalr        $t9
label_44b098:
    if (ctx->pc == 0x44B098u) {
        ctx->pc = 0x44B09Cu;
        goto label_44b09c;
    }
    ctx->pc = 0x44B094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44B09Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44B09Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44B09Cu; }
            if (ctx->pc != 0x44B09Cu) { return; }
        }
        }
    }
    ctx->pc = 0x44B09Cu;
label_44b09c:
    // 0x44b09c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_44b0a0:
    // 0x44b0a0: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x44b0a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_44b0a4:
    // 0x44b0a4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x44b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_44b0a8:
    // 0x44b0a8: 0x26140058  addiu       $s4, $s0, 0x58
    ctx->pc = 0x44b0a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_44b0ac:
    // 0x44b0ac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x44b0acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b0b0:
    // 0x44b0b0: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x44b0b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_44b0b4:
    // 0x44b0b4: 0x8c7307b8  lw          $s3, 0x7B8($v1)
    ctx->pc = 0x44b0b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1976)));
label_44b0b8:
    // 0x44b0b8: 0x8c700780  lw          $s0, 0x780($v1)
    ctx->pc = 0x44b0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
label_44b0bc:
    // 0x44b0bc: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x44b0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44b0c0:
    // 0x44b0c0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x44b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_44b0c4:
    // 0x44b0c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x44b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44b0c8:
    // 0x44b0c8: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
label_44b0cc:
    if (ctx->pc == 0x44B0CCu) {
        ctx->pc = 0x44B0D0u;
        goto label_44b0d0;
    }
    ctx->pc = 0x44B0C8u;
    {
        const bool branch_taken_0x44b0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x44b0c8) {
            ctx->pc = 0x44B0F8u;
            goto label_44b0f8;
        }
    }
    ctx->pc = 0x44B0D0u;
label_44b0d0:
    // 0x44b0d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_44b0d4:
    if (ctx->pc == 0x44B0D4u) {
        ctx->pc = 0x44B0D8u;
        goto label_44b0d8;
    }
    ctx->pc = 0x44B0D0u;
    {
        const bool branch_taken_0x44b0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b0d0) {
            ctx->pc = 0x44B0E0u;
            goto label_44b0e0;
        }
    }
    ctx->pc = 0x44B0D8u;
label_44b0d8:
    // 0x44b0d8: 0x10000037  b           . + 4 + (0x37 << 2)
label_44b0dc:
    if (ctx->pc == 0x44B0DCu) {
        ctx->pc = 0x44B0E0u;
        goto label_44b0e0;
    }
    ctx->pc = 0x44B0D8u;
    {
        const bool branch_taken_0x44b0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b0d8) {
            ctx->pc = 0x44B1B8u;
            goto label_44b1b8;
        }
    }
    ctx->pc = 0x44B0E0u;
label_44b0e0:
    // 0x44b0e0: 0x96830030  lhu         $v1, 0x30($s4)
    ctx->pc = 0x44b0e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
label_44b0e4:
    // 0x44b0e4: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_44b0e8:
    if (ctx->pc == 0x44B0E8u) {
        ctx->pc = 0x44B0ECu;
        goto label_44b0ec;
    }
    ctx->pc = 0x44B0E4u;
    {
        const bool branch_taken_0x44b0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b0e4) {
            ctx->pc = 0x44B1B8u;
            goto label_44b1b8;
        }
    }
    ctx->pc = 0x44B0ECu;
label_44b0ec:
    // 0x44b0ec: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x44b0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_44b0f0:
    // 0x44b0f0: 0xa06411a9  sb          $a0, 0x11A9($v1)
    ctx->pc = 0x44b0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4521), (uint8_t)GPR_U32(ctx, 4));
label_44b0f4:
    // 0x44b0f4: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x44b0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_44b0f8:
    // 0x44b0f8: 0x96830030  lhu         $v1, 0x30($s4)
    ctx->pc = 0x44b0f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
label_44b0fc:
    // 0x44b0fc: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_44b100:
    if (ctx->pc == 0x44B100u) {
        ctx->pc = 0x44B104u;
        goto label_44b104;
    }
    ctx->pc = 0x44B0FCu;
    {
        const bool branch_taken_0x44b0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b0fc) {
            ctx->pc = 0x44B198u;
            goto label_44b198;
        }
    }
    ctx->pc = 0x44B104u;
label_44b104:
    // 0x44b104: 0x2751821  addu        $v1, $s3, $s5
    ctx->pc = 0x44b104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_44b108:
    // 0x44b108: 0x90640054  lbu         $a0, 0x54($v1)
    ctx->pc = 0x44b108u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 84)));
label_44b10c:
    // 0x44b10c: 0x2c810003  sltiu       $at, $a0, 0x3
    ctx->pc = 0x44b10cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_44b110:
    // 0x44b110: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_44b114:
    if (ctx->pc == 0x44B114u) {
        ctx->pc = 0x44B114u;
            // 0x44b114: 0x24670054  addiu       $a3, $v1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
        ctx->pc = 0x44B118u;
        goto label_44b118;
    }
    ctx->pc = 0x44B110u;
    {
        const bool branch_taken_0x44b110 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B110u;
            // 0x44b114: 0x24670054  addiu       $a3, $v1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b110) {
            ctx->pc = 0x44B170u;
            goto label_44b170;
        }
    }
    ctx->pc = 0x44B118u;
label_44b118:
    // 0x44b118: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x44b118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44b11c:
    // 0x44b11c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x44b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_44b120:
    // 0x44b120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x44b120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44b124:
    // 0x44b124: 0x0  nop
    ctx->pc = 0x44b124u;
    // NOP
label_44b128:
    // 0x44b128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x44b128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44b12c:
    // 0x44b12c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_44b130:
    if (ctx->pc == 0x44B130u) {
        ctx->pc = 0x44B134u;
        goto label_44b134;
    }
    ctx->pc = 0x44B12Cu;
    {
        const bool branch_taken_0x44b12c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x44b12c) {
            ctx->pc = 0x44B170u;
            goto label_44b170;
        }
    }
    ctx->pc = 0x44B134u;
label_44b134:
    // 0x44b134: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x44b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_44b138:
    // 0x44b138: 0x26a60003  addiu       $a2, $s5, 0x3
    ctx->pc = 0x44b138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
label_44b13c:
    // 0x44b13c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x44b13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44b140:
    // 0x44b140: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x44b140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_44b144:
    // 0x44b144: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x44b144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44b148:
    // 0x44b148: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x44b148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_44b14c:
    // 0x44b14c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x44b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_44b150:
    // 0x44b150: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x44b150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44b154:
    // 0x44b154: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x44b154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
label_44b158:
    // 0x44b158: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x44b158u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_44b15c:
    // 0x44b15c: 0xc0bc1d4  jal         func_2F0750
label_44b160:
    if (ctx->pc == 0x44B160u) {
        ctx->pc = 0x44B160u;
            // 0x44b160: 0xa6820032  sh          $v0, 0x32($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 50), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x44B164u;
        goto label_44b164;
    }
    ctx->pc = 0x44B15Cu;
    SET_GPR_U32(ctx, 31, 0x44B164u);
    ctx->pc = 0x44B160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B15Cu;
            // 0x44b160: 0xa6820032  sh          $v0, 0x32($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 50), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0750u;
    if (runtime->hasFunction(0x2F0750u)) {
        auto targetFn = runtime->lookupFunction(0x2F0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B164u; }
        if (ctx->pc != 0x44B164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0750_0x2f0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B164u; }
        if (ctx->pc != 0x44B164u) { return; }
    }
    ctx->pc = 0x44B164u;
label_44b164:
    // 0x44b164: 0x10000014  b           . + 4 + (0x14 << 2)
label_44b168:
    if (ctx->pc == 0x44B168u) {
        ctx->pc = 0x44B16Cu;
        goto label_44b16c;
    }
    ctx->pc = 0x44B164u;
    {
        const bool branch_taken_0x44b164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b164) {
            ctx->pc = 0x44B1B8u;
            goto label_44b1b8;
        }
    }
    ctx->pc = 0x44B16Cu;
label_44b16c:
    // 0x44b16c: 0x0  nop
    ctx->pc = 0x44b16cu;
    // NOP
label_44b170:
    // 0x44b170: 0x2c830003  sltiu       $v1, $a0, 0x3
    ctx->pc = 0x44b170u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_44b174:
    // 0x44b174: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_44b178:
    if (ctx->pc == 0x44B178u) {
        ctx->pc = 0x44B17Cu;
        goto label_44b17c;
    }
    ctx->pc = 0x44B174u;
    {
        const bool branch_taken_0x44b174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x44b174) {
            ctx->pc = 0x44B1B8u;
            goto label_44b1b8;
        }
    }
    ctx->pc = 0x44B17Cu;
label_44b17c:
    // 0x44b17c: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x44b17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_44b180:
    // 0x44b180: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x44b180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44b184:
    // 0x44b184: 0xc68d0008  lwc1        $f13, 0x8($s4)
    ctx->pc = 0x44b184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_44b188:
    // 0x44b188: 0xc0bc1c4  jal         func_2F0710
label_44b18c:
    if (ctx->pc == 0x44B18Cu) {
        ctx->pc = 0x44B18Cu;
            // 0x44b18c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B190u;
        goto label_44b190;
    }
    ctx->pc = 0x44B188u;
    SET_GPR_U32(ctx, 31, 0x44B190u);
    ctx->pc = 0x44B18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B188u;
            // 0x44b18c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0710u;
    if (runtime->hasFunction(0x2F0710u)) {
        auto targetFn = runtime->lookupFunction(0x2F0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B190u; }
        if (ctx->pc != 0x44B190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0710_0x2f0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B190u; }
        if (ctx->pc != 0x44B190u) { return; }
    }
    ctx->pc = 0x44B190u;
label_44b190:
    // 0x44b190: 0x10000009  b           . + 4 + (0x9 << 2)
label_44b194:
    if (ctx->pc == 0x44B194u) {
        ctx->pc = 0x44B198u;
        goto label_44b198;
    }
    ctx->pc = 0x44B190u;
    {
        const bool branch_taken_0x44b190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b190) {
            ctx->pc = 0x44B1B8u;
            goto label_44b1b8;
        }
    }
    ctx->pc = 0x44B198u;
label_44b198:
    // 0x44b198: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x44b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_44b19c:
    // 0x44b19c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x44b19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44b1a0:
    // 0x44b1a0: 0xa04011a9  sb          $zero, 0x11A9($v0)
    ctx->pc = 0x44b1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4521), (uint8_t)GPR_U32(ctx, 0));
label_44b1a4:
    // 0x44b1a4: 0x96860032  lhu         $a2, 0x32($s4)
    ctx->pc = 0x44b1a4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
label_44b1a8:
    // 0x44b1a8: 0xc0bc1d4  jal         func_2F0750
label_44b1ac:
    if (ctx->pc == 0x44B1ACu) {
        ctx->pc = 0x44B1ACu;
            // 0x44b1ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B1B0u;
        goto label_44b1b0;
    }
    ctx->pc = 0x44B1A8u;
    SET_GPR_U32(ctx, 31, 0x44B1B0u);
    ctx->pc = 0x44B1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B1A8u;
            // 0x44b1ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0750u;
    if (runtime->hasFunction(0x2F0750u)) {
        auto targetFn = runtime->lookupFunction(0x2F0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B1B0u; }
        if (ctx->pc != 0x44B1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0750_0x2f0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B1B0u; }
        if (ctx->pc != 0x44B1B0u) { return; }
    }
    ctx->pc = 0x44B1B0u;
label_44b1b0:
    // 0x44b1b0: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x44b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_44b1b4:
    // 0x44b1b4: 0x0  nop
    ctx->pc = 0x44b1b4u;
    // NOP
label_44b1b8:
    // 0x44b1b8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x44b1b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_44b1bc:
    // 0x44b1bc: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x44b1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44b1c0:
    // 0x44b1c0: 0x2b0182b  sltu        $v1, $s5, $s0
    ctx->pc = 0x44b1c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_44b1c4:
    // 0x44b1c4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x44b1c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_44b1c8:
    // 0x44b1c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x44b1c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_44b1cc:
    // 0x44b1cc: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x44b1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_44b1d0:
    // 0x44b1d0: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x44b1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44b1d4:
    // 0x44b1d4: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x44b1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_44b1d8:
    // 0x44b1d8: 0xa6800030  sh          $zero, 0x30($s4)
    ctx->pc = 0x44b1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 48), (uint16_t)GPR_U32(ctx, 0));
label_44b1dc:
    // 0x44b1dc: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
label_44b1e0:
    if (ctx->pc == 0x44B1E0u) {
        ctx->pc = 0x44B1E0u;
            // 0x44b1e0: 0x26940034  addiu       $s4, $s4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
        ctx->pc = 0x44B1E4u;
        goto label_44b1e4;
    }
    ctx->pc = 0x44B1DCu;
    {
        const bool branch_taken_0x44b1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B1DCu;
            // 0x44b1e0: 0x26940034  addiu       $s4, $s4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b1dc) {
            ctx->pc = 0x44B0C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44b0c0;
        }
    }
    ctx->pc = 0x44B1E4u;
label_44b1e4:
    // 0x44b1e4: 0x0  nop
    ctx->pc = 0x44b1e4u;
    // NOP
label_44b1e8:
    // 0x44b1e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x44b1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_44b1ec:
    // 0x44b1ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x44b1ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44b1f0:
    // 0x44b1f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x44b1f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44b1f4:
    // 0x44b1f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44b1f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44b1f8:
    // 0x44b1f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44b1f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44b1fc:
    // 0x44b1fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44b1fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44b200:
    // 0x44b200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44b200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44b204:
    // 0x44b204: 0x3e00008  jr          $ra
label_44b208:
    if (ctx->pc == 0x44B208u) {
        ctx->pc = 0x44B208u;
            // 0x44b208: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x44B20Cu;
        goto label_44b20c;
    }
    ctx->pc = 0x44B204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44B208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B204u;
            // 0x44b208: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44B20Cu;
label_44b20c:
    // 0x44b20c: 0x0  nop
    ctx->pc = 0x44b20cu;
    // NOP
}
