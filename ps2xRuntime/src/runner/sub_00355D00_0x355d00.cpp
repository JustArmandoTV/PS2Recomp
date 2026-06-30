#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00355D00
// Address: 0x355d00 - 0x355ef0
void sub_00355D00_0x355d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355D00_0x355d00");
#endif

    switch (ctx->pc) {
        case 0x355d1cu: goto label_355d1c;
        case 0x355d24u: goto label_355d24;
        case 0x355d88u: goto label_355d88;
        case 0x355da4u: goto label_355da4;
        case 0x355de0u: goto label_355de0;
        case 0x355dfcu: goto label_355dfc;
        case 0x355e20u: goto label_355e20;
        case 0x355e80u: goto label_355e80;
        case 0x355e8cu: goto label_355e8c;
        case 0x355e98u: goto label_355e98;
        case 0x355ea4u: goto label_355ea4;
        case 0x355eb0u: goto label_355eb0;
        case 0x355ebcu: goto label_355ebc;
        case 0x355ed4u: goto label_355ed4;
        default: break;
    }

    ctx->pc = 0x355d00u;

    // 0x355d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x355d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x355d04: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x355d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x355d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x355d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x355d0c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x355d0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x355d10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x355d14: 0xc0d57f0  jal         func_355FC0
    ctx->pc = 0x355D14u;
    SET_GPR_U32(ctx, 31, 0x355D1Cu);
    ctx->pc = 0x355D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355D14u;
            // 0x355d18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x355FC0u;
    if (runtime->hasFunction(0x355FC0u)) {
        auto targetFn = runtime->lookupFunction(0x355FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355D1Cu; }
        if (ctx->pc != 0x355D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00355FC0_0x355fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355D1Cu; }
        if (ctx->pc != 0x355D1Cu) { return; }
    }
    ctx->pc = 0x355D1Cu;
label_355d1c:
    // 0x355d1c: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x355D1Cu;
    SET_GPR_U32(ctx, 31, 0x355D24u);
    ctx->pc = 0x355D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355D1Cu;
            // 0x355d20: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355D24u; }
        if (ctx->pc != 0x355D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355D24u; }
        if (ctx->pc != 0x355D24u) { return; }
    }
    ctx->pc = 0x355D24u;
label_355d24:
    // 0x355d24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x355d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x355d28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x355d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x355d2c: 0x24635f70  addiu       $v1, $v1, 0x5F70
    ctx->pc = 0x355d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24432));
    // 0x355d30: 0x24425fa8  addiu       $v0, $v0, 0x5FA8
    ctx->pc = 0x355d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24488));
    // 0x355d34: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x355d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x355d38: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x355d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x355d3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x355d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x355d40: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x355d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x355d44: 0x24635ec0  addiu       $v1, $v1, 0x5EC0
    ctx->pc = 0x355d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24256));
    // 0x355d48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x355d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x355d4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x355d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x355d50: 0x24425ef8  addiu       $v0, $v0, 0x5EF8
    ctx->pc = 0x355d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24312));
    // 0x355d54: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x355d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x355d58: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x355d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x355d5c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x355d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x355d60: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x355d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x355d64: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x355d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x355d68: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x355d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x355d6c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x355d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x355d70: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x355d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x355d74: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x355d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x355d78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x355d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x355d7c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x355d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x355d80: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x355D80u;
    SET_GPR_U32(ctx, 31, 0x355D88u);
    ctx->pc = 0x355D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355D80u;
            // 0x355d84: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355D88u; }
        if (ctx->pc != 0x355D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355D88u; }
        if (ctx->pc != 0x355D88u) { return; }
    }
    ctx->pc = 0x355D88u;
label_355d88:
    // 0x355d88: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x355d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x355d8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x355d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355d90: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x355D90u;
    {
        const bool branch_taken_0x355d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x355D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355D90u;
            // 0x355d94: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355d90) {
            ctx->pc = 0x355DA8u;
            goto label_355da8;
        }
    }
    ctx->pc = 0x355D98u;
    // 0x355d98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x355d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x355d9c: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x355D9Cu;
    SET_GPR_U32(ctx, 31, 0x355DA4u);
    ctx->pc = 0x355DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355D9Cu;
            // 0x355da0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355DA4u; }
        if (ctx->pc != 0x355DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355DA4u; }
        if (ctx->pc != 0x355DA4u) { return; }
    }
    ctx->pc = 0x355DA4u;
label_355da4:
    // 0x355da4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x355da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_355da8:
    // 0x355da8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x355da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x355dac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x355dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x355db0: 0x3445cccd  ori         $a1, $v0, 0xCCCD
    ctx->pc = 0x355db0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x355db4: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x355db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x355db8: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x355db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x355dbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x355dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x355dc0: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x355dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x355dc4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x355dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x355dc8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x355dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x355dcc: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x355dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x355dd0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x355dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x355dd4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x355dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x355dd8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x355DD8u;
    SET_GPR_U32(ctx, 31, 0x355DE0u);
    ctx->pc = 0x355DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355DD8u;
            // 0x355ddc: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355DE0u; }
        if (ctx->pc != 0x355DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355DE0u; }
        if (ctx->pc != 0x355DE0u) { return; }
    }
    ctx->pc = 0x355DE0u;
label_355de0:
    // 0x355de0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x355de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x355de4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x355de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355de8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x355DE8u;
    {
        const bool branch_taken_0x355de8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x355DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355DE8u;
            // 0x355dec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355de8) {
            ctx->pc = 0x355E00u;
            goto label_355e00;
        }
    }
    ctx->pc = 0x355DF0u;
    // 0x355df0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x355df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x355df4: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x355DF4u;
    SET_GPR_U32(ctx, 31, 0x355DFCu);
    ctx->pc = 0x355DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355DF4u;
            // 0x355df8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355DFCu; }
        if (ctx->pc != 0x355DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355DFCu; }
        if (ctx->pc != 0x355DFCu) { return; }
    }
    ctx->pc = 0x355DFCu;
label_355dfc:
    // 0x355dfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x355dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_355e00:
    // 0x355e00: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x355e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x355e04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x355e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355e08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x355e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355e10: 0x3e00008  jr          $ra
    ctx->pc = 0x355E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355E10u;
            // 0x355e14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x355E18u;
    // 0x355e18: 0x0  nop
    ctx->pc = 0x355e18u;
    // NOP
    // 0x355e1c: 0x0  nop
    ctx->pc = 0x355e1cu;
    // NOP
label_355e20:
    // 0x355e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x355e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x355e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x355e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x355e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x355e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x355e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x355e30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x355e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355e34: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x355E34u;
    {
        const bool branch_taken_0x355e34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x355E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355E34u;
            // 0x355e38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e34) {
            ctx->pc = 0x355ED4u;
            goto label_355ed4;
        }
    }
    ctx->pc = 0x355E3Cu;
    // 0x355e3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x355e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x355e40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x355e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x355e44: 0x24635f70  addiu       $v1, $v1, 0x5F70
    ctx->pc = 0x355e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24432));
    // 0x355e48: 0x24425fa8  addiu       $v0, $v0, 0x5FA8
    ctx->pc = 0x355e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24488));
    // 0x355e4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x355e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x355e50: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x355E50u;
    {
        const bool branch_taken_0x355e50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x355E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355E50u;
            // 0x355e54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e50) {
            ctx->pc = 0x355EBCu;
            goto label_355ebc;
        }
    }
    ctx->pc = 0x355E58u;
    // 0x355e58: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x355e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x355e5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x355e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x355e60: 0x24635f20  addiu       $v1, $v1, 0x5F20
    ctx->pc = 0x355e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24352));
    // 0x355e64: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x355e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x355e68: 0x24425f58  addiu       $v0, $v0, 0x5F58
    ctx->pc = 0x355e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24408));
    // 0x355e6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x355e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x355e70: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x355e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x355e74: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x355e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x355e78: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x355E78u;
    SET_GPR_U32(ctx, 31, 0x355E80u);
    ctx->pc = 0x355E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355E78u;
            // 0x355e7c: 0x24a56d00  addiu       $a1, $a1, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355E80u; }
        if (ctx->pc != 0x355E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355E80u; }
        if (ctx->pc != 0x355E80u) { return; }
    }
    ctx->pc = 0x355E80u;
label_355e80:
    // 0x355e80: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x355e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x355e84: 0xc0b1208  jal         func_2C4820
    ctx->pc = 0x355E84u;
    SET_GPR_U32(ctx, 31, 0x355E8Cu);
    ctx->pc = 0x355E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355E84u;
            // 0x355e88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4820u;
    if (runtime->hasFunction(0x2C4820u)) {
        auto targetFn = runtime->lookupFunction(0x2C4820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355E8Cu; }
        if (ctx->pc != 0x355E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4820_0x2c4820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355E8Cu; }
        if (ctx->pc != 0x355E8Cu) { return; }
    }
    ctx->pc = 0x355E8Cu;
label_355e8c:
    // 0x355e8c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x355e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x355e90: 0xc0d57d4  jal         func_355F50
    ctx->pc = 0x355E90u;
    SET_GPR_U32(ctx, 31, 0x355E98u);
    ctx->pc = 0x355E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355E90u;
            // 0x355e94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x355F50u;
    if (runtime->hasFunction(0x355F50u)) {
        auto targetFn = runtime->lookupFunction(0x355F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355E98u; }
        if (ctx->pc != 0x355E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00355F50_0x355f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355E98u; }
        if (ctx->pc != 0x355E98u) { return; }
    }
    ctx->pc = 0x355E98u;
label_355e98:
    // 0x355e98: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x355e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x355e9c: 0xc0d57d4  jal         func_355F50
    ctx->pc = 0x355E9Cu;
    SET_GPR_U32(ctx, 31, 0x355EA4u);
    ctx->pc = 0x355EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355E9Cu;
            // 0x355ea0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x355F50u;
    if (runtime->hasFunction(0x355F50u)) {
        auto targetFn = runtime->lookupFunction(0x355F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355EA4u; }
        if (ctx->pc != 0x355EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00355F50_0x355f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355EA4u; }
        if (ctx->pc != 0x355EA4u) { return; }
    }
    ctx->pc = 0x355EA4u;
label_355ea4:
    // 0x355ea4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x355ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x355ea8: 0xc0d57bc  jal         func_355EF0
    ctx->pc = 0x355EA8u;
    SET_GPR_U32(ctx, 31, 0x355EB0u);
    ctx->pc = 0x355EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355EA8u;
            // 0x355eac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x355EF0u;
    if (runtime->hasFunction(0x355EF0u)) {
        auto targetFn = runtime->lookupFunction(0x355EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355EB0u; }
        if (ctx->pc != 0x355EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00355EF0_0x355ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355EB0u; }
        if (ctx->pc != 0x355EB0u) { return; }
    }
    ctx->pc = 0x355EB0u;
label_355eb0:
    // 0x355eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355eb4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x355EB4u;
    SET_GPR_U32(ctx, 31, 0x355EBCu);
    ctx->pc = 0x355EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355EB4u;
            // 0x355eb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355EBCu; }
        if (ctx->pc != 0x355EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355EBCu; }
        if (ctx->pc != 0x355EBCu) { return; }
    }
    ctx->pc = 0x355EBCu;
label_355ebc:
    // 0x355ebc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x355ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x355ec0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x355ec0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x355ec4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x355EC4u;
    {
        const bool branch_taken_0x355ec4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x355ec4) {
            ctx->pc = 0x355EC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355EC4u;
            // 0x355ec8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355ED8u;
            goto label_355ed8;
        }
    }
    ctx->pc = 0x355ECCu;
    // 0x355ecc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x355ECCu;
    SET_GPR_U32(ctx, 31, 0x355ED4u);
    ctx->pc = 0x355ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355ECCu;
            // 0x355ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355ED4u; }
        if (ctx->pc != 0x355ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355ED4u; }
        if (ctx->pc != 0x355ED4u) { return; }
    }
    ctx->pc = 0x355ED4u;
label_355ed4:
    // 0x355ed4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x355ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_355ed8:
    // 0x355ed8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x355ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355edc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x355edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x355EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355EE4u;
            // 0x355ee8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x355EECu;
    // 0x355eec: 0x0  nop
    ctx->pc = 0x355eecu;
    // NOP
}
