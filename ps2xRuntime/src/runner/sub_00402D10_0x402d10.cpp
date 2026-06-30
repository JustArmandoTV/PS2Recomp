#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00402D10
// Address: 0x402d10 - 0x402f40
void sub_00402D10_0x402d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00402D10_0x402d10");
#endif

    switch (ctx->pc) {
        case 0x402d38u: goto label_402d38;
        case 0x402d58u: goto label_402d58;
        case 0x402da8u: goto label_402da8;
        case 0x402dc4u: goto label_402dc4;
        case 0x402df4u: goto label_402df4;
        case 0x402e10u: goto label_402e10;
        case 0x402e34u: goto label_402e34;
        case 0x402e50u: goto label_402e50;
        case 0x402e70u: goto label_402e70;
        case 0x402ed0u: goto label_402ed0;
        case 0x402edcu: goto label_402edc;
        case 0x402ee8u: goto label_402ee8;
        case 0x402ef4u: goto label_402ef4;
        case 0x402f00u: goto label_402f00;
        case 0x402f0cu: goto label_402f0c;
        case 0x402f24u: goto label_402f24;
        default: break;
    }

    ctx->pc = 0x402d10u;

    // 0x402d10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x402d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x402d14: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x402d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x402d18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x402d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x402d1c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x402d1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x402d20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x402d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x402d24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x402d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x402d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x402d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x402d2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x402d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402d30: 0xc100c08  jal         func_403020
    ctx->pc = 0x402D30u;
    SET_GPR_U32(ctx, 31, 0x402D38u);
    ctx->pc = 0x402D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402D30u;
            // 0x402d34: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x403020u;
    if (runtime->hasFunction(0x403020u)) {
        auto targetFn = runtime->lookupFunction(0x403020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402D38u; }
        if (ctx->pc != 0x402D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00403020_0x403020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402D38u; }
        if (ctx->pc != 0x402D38u) { return; }
    }
    ctx->pc = 0x402D38u;
label_402d38:
    // 0x402d38: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x402d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x402d3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x402d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x402d40: 0x2463a6a0  addiu       $v1, $v1, -0x5960
    ctx->pc = 0x402d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944416));
    // 0x402d44: 0x2442a6d8  addiu       $v0, $v0, -0x5928
    ctx->pc = 0x402d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944472));
    // 0x402d48: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x402d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x402d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x402d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402d50: 0xc100c04  jal         func_403010
    ctx->pc = 0x402D50u;
    SET_GPR_U32(ctx, 31, 0x402D58u);
    ctx->pc = 0x402D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402D50u;
            // 0x402d54: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x403010u;
    if (runtime->hasFunction(0x403010u)) {
        auto targetFn = runtime->lookupFunction(0x403010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402D58u; }
        if (ctx->pc != 0x402D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00403010_0x403010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402D58u; }
        if (ctx->pc != 0x402D58u) { return; }
    }
    ctx->pc = 0x402D58u;
label_402d58:
    // 0x402d58: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x402d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x402d5c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x402d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x402d60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x402d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x402d64: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x402d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x402d68: 0x2442a5f0  addiu       $v0, $v0, -0x5A10
    ctx->pc = 0x402d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944240));
    // 0x402d6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x402d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x402d70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x402d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x402d74: 0x2442a628  addiu       $v0, $v0, -0x59D8
    ctx->pc = 0x402d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944296));
    // 0x402d78: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x402d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x402d7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x402d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x402d80: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x402d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x402d84: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x402d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x402d88: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x402d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x402d8c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x402d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x402d90: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x402d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x402d94: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x402d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x402d98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x402d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x402d9c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x402d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x402da0: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x402DA0u;
    SET_GPR_U32(ctx, 31, 0x402DA8u);
    ctx->pc = 0x402DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402DA0u;
            // 0x402da4: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402DA8u; }
        if (ctx->pc != 0x402DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402DA8u; }
        if (ctx->pc != 0x402DA8u) { return; }
    }
    ctx->pc = 0x402DA8u;
label_402da8:
    // 0x402da8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x402da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x402dac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x402dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402db0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x402DB0u;
    {
        const bool branch_taken_0x402db0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x402DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402DB0u;
            // 0x402db4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402db0) {
            ctx->pc = 0x402DC8u;
            goto label_402dc8;
        }
    }
    ctx->pc = 0x402DB8u;
    // 0x402db8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x402db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x402dbc: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x402DBCu;
    SET_GPR_U32(ctx, 31, 0x402DC4u);
    ctx->pc = 0x402DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402DBCu;
            // 0x402dc0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402DC4u; }
        if (ctx->pc != 0x402DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402DC4u; }
        if (ctx->pc != 0x402DC4u) { return; }
    }
    ctx->pc = 0x402DC4u;
label_402dc4:
    // 0x402dc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x402dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_402dc8:
    // 0x402dc8: 0xae24005c  sw          $a0, 0x5C($s1)
    ctx->pc = 0x402dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 4));
    // 0x402dcc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x402dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x402dd0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x402dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x402dd4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x402dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x402dd8: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x402dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x402ddc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x402ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x402de0: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x402de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x402de4: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x402de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x402de8: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x402de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x402dec: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x402DECu;
    SET_GPR_U32(ctx, 31, 0x402DF4u);
    ctx->pc = 0x402DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402DECu;
            // 0x402df0: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402DF4u; }
        if (ctx->pc != 0x402DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402DF4u; }
        if (ctx->pc != 0x402DF4u) { return; }
    }
    ctx->pc = 0x402DF4u;
label_402df4:
    // 0x402df4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x402df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x402df8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x402df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402dfc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x402DFCu;
    {
        const bool branch_taken_0x402dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x402E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402DFCu;
            // 0x402e00: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402dfc) {
            ctx->pc = 0x402E14u;
            goto label_402e14;
        }
    }
    ctx->pc = 0x402E04u;
    // 0x402e04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x402e04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x402e08: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x402E08u;
    SET_GPR_U32(ctx, 31, 0x402E10u);
    ctx->pc = 0x402E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402E08u;
            // 0x402e0c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402E10u; }
        if (ctx->pc != 0x402E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402E10u; }
        if (ctx->pc != 0x402E10u) { return; }
    }
    ctx->pc = 0x402E10u;
label_402e10:
    // 0x402e10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x402e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_402e14:
    // 0x402e14: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x402e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
    // 0x402e18: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x402e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x402e1c: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x402e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x402e20: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x402e20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x402e24: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x402e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x402e28: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x402e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x402e2c: 0xc040140  jal         func_100500
    ctx->pc = 0x402E2Cu;
    SET_GPR_U32(ctx, 31, 0x402E34u);
    ctx->pc = 0x402E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402E2Cu;
            // 0x402e30: 0x26320084  addiu       $s2, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402E34u; }
        if (ctx->pc != 0x402E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402E34u; }
        if (ctx->pc != 0x402E34u) { return; }
    }
    ctx->pc = 0x402E34u;
label_402e34:
    // 0x402e34: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x402E34u;
    {
        const bool branch_taken_0x402e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x402e34) {
            ctx->pc = 0x402E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402E34u;
            // 0x402e38: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402E54u;
            goto label_402e54;
        }
    }
    ctx->pc = 0x402E3Cu;
    // 0x402e3c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x402e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x402e40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x402e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402e44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x402e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402e48: 0xc0b4554  jal         func_2D1550
    ctx->pc = 0x402E48u;
    SET_GPR_U32(ctx, 31, 0x402E50u);
    ctx->pc = 0x402E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402E48u;
            // 0x402e4c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402E50u; }
        if (ctx->pc != 0x402E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402E50u; }
        if (ctx->pc != 0x402E50u) { return; }
    }
    ctx->pc = 0x402E50u;
label_402e50:
    // 0x402e50: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x402e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_402e54:
    // 0x402e54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x402e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402e58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x402e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x402e5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x402e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x402e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x402e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x402e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x402e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x402e68: 0x3e00008  jr          $ra
    ctx->pc = 0x402E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x402E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402E68u;
            // 0x402e6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x402E70u;
label_402e70:
    // 0x402e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x402e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x402e74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x402e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x402e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x402e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x402e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x402e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x402e80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x402e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402e84: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x402E84u;
    {
        const bool branch_taken_0x402e84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x402E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402E84u;
            // 0x402e88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402e84) {
            ctx->pc = 0x402F24u;
            goto label_402f24;
        }
    }
    ctx->pc = 0x402E8Cu;
    // 0x402e8c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x402e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x402e90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x402e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x402e94: 0x2463a6a0  addiu       $v1, $v1, -0x5960
    ctx->pc = 0x402e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944416));
    // 0x402e98: 0x2442a6d8  addiu       $v0, $v0, -0x5928
    ctx->pc = 0x402e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944472));
    // 0x402e9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x402e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x402ea0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x402EA0u;
    {
        const bool branch_taken_0x402ea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x402EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402EA0u;
            // 0x402ea4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402ea0) {
            ctx->pc = 0x402F0Cu;
            goto label_402f0c;
        }
    }
    ctx->pc = 0x402EA8u;
    // 0x402ea8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x402ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x402eac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x402eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x402eb0: 0x2463a650  addiu       $v1, $v1, -0x59B0
    ctx->pc = 0x402eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944336));
    // 0x402eb4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x402eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x402eb8: 0x2442a688  addiu       $v0, $v0, -0x5978
    ctx->pc = 0x402eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944392));
    // 0x402ebc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x402ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x402ec0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x402ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x402ec4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x402ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x402ec8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x402EC8u;
    SET_GPR_U32(ctx, 31, 0x402ED0u);
    ctx->pc = 0x402ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402EC8u;
            // 0x402ecc: 0x24a525c0  addiu       $a1, $a1, 0x25C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402ED0u; }
        if (ctx->pc != 0x402ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402ED0u; }
        if (ctx->pc != 0x402ED0u) { return; }
    }
    ctx->pc = 0x402ED0u;
label_402ed0:
    // 0x402ed0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x402ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x402ed4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x402ED4u;
    SET_GPR_U32(ctx, 31, 0x402EDCu);
    ctx->pc = 0x402ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402ED4u;
            // 0x402ed8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402EDCu; }
        if (ctx->pc != 0x402EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402EDCu; }
        if (ctx->pc != 0x402EDCu) { return; }
    }
    ctx->pc = 0x402EDCu;
label_402edc:
    // 0x402edc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x402edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x402ee0: 0xc100be8  jal         func_402FA0
    ctx->pc = 0x402EE0u;
    SET_GPR_U32(ctx, 31, 0x402EE8u);
    ctx->pc = 0x402EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402EE0u;
            // 0x402ee4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x402FA0u;
    if (runtime->hasFunction(0x402FA0u)) {
        auto targetFn = runtime->lookupFunction(0x402FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402EE8u; }
        if (ctx->pc != 0x402EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00402FA0_0x402fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402EE8u; }
        if (ctx->pc != 0x402EE8u) { return; }
    }
    ctx->pc = 0x402EE8u;
label_402ee8:
    // 0x402ee8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x402ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x402eec: 0xc100be8  jal         func_402FA0
    ctx->pc = 0x402EECu;
    SET_GPR_U32(ctx, 31, 0x402EF4u);
    ctx->pc = 0x402EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402EECu;
            // 0x402ef0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x402FA0u;
    if (runtime->hasFunction(0x402FA0u)) {
        auto targetFn = runtime->lookupFunction(0x402FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402EF4u; }
        if (ctx->pc != 0x402EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00402FA0_0x402fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402EF4u; }
        if (ctx->pc != 0x402EF4u) { return; }
    }
    ctx->pc = 0x402EF4u;
label_402ef4:
    // 0x402ef4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x402ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x402ef8: 0xc100bd0  jal         func_402F40
    ctx->pc = 0x402EF8u;
    SET_GPR_U32(ctx, 31, 0x402F00u);
    ctx->pc = 0x402EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402EF8u;
            // 0x402efc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x402F40u;
    if (runtime->hasFunction(0x402F40u)) {
        auto targetFn = runtime->lookupFunction(0x402F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402F00u; }
        if (ctx->pc != 0x402F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00402F40_0x402f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402F00u; }
        if (ctx->pc != 0x402F00u) { return; }
    }
    ctx->pc = 0x402F00u;
label_402f00:
    // 0x402f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402f04: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x402F04u;
    SET_GPR_U32(ctx, 31, 0x402F0Cu);
    ctx->pc = 0x402F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402F04u;
            // 0x402f08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402F0Cu; }
        if (ctx->pc != 0x402F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402F0Cu; }
        if (ctx->pc != 0x402F0Cu) { return; }
    }
    ctx->pc = 0x402F0Cu;
label_402f0c:
    // 0x402f0c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x402f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x402f10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x402f10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x402f14: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x402F14u;
    {
        const bool branch_taken_0x402f14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x402f14) {
            ctx->pc = 0x402F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402F14u;
            // 0x402f18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402F28u;
            goto label_402f28;
        }
    }
    ctx->pc = 0x402F1Cu;
    // 0x402f1c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x402F1Cu;
    SET_GPR_U32(ctx, 31, 0x402F24u);
    ctx->pc = 0x402F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402F1Cu;
            // 0x402f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402F24u; }
        if (ctx->pc != 0x402F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402F24u; }
        if (ctx->pc != 0x402F24u) { return; }
    }
    ctx->pc = 0x402F24u;
label_402f24:
    // 0x402f24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x402f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402f28:
    // 0x402f28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x402f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x402f2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x402f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x402f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x402f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x402f34: 0x3e00008  jr          $ra
    ctx->pc = 0x402F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x402F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402F34u;
            // 0x402f38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x402F3Cu;
    // 0x402f3c: 0x0  nop
    ctx->pc = 0x402f3cu;
    // NOP
}
