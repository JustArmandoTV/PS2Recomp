#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00363CA0
// Address: 0x363ca0 - 0x363e20
void sub_00363CA0_0x363ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363CA0_0x363ca0");
#endif

    switch (ctx->pc) {
        case 0x363cbcu: goto label_363cbc;
        case 0x363cdcu: goto label_363cdc;
        case 0x363d0cu: goto label_363d0c;
        case 0x363d2cu: goto label_363d2c;
        case 0x363d50u: goto label_363d50;
        case 0x363db0u: goto label_363db0;
        case 0x363dbcu: goto label_363dbc;
        case 0x363dc8u: goto label_363dc8;
        case 0x363dd4u: goto label_363dd4;
        case 0x363de0u: goto label_363de0;
        case 0x363decu: goto label_363dec;
        case 0x363e04u: goto label_363e04;
        default: break;
    }

    ctx->pc = 0x363ca0u;

    // 0x363ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x363ca4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x363ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x363ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x363ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x363cac: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x363cacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x363cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x363cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x363cb4: 0xc0d8fc0  jal         func_363F00
    ctx->pc = 0x363CB4u;
    SET_GPR_U32(ctx, 31, 0x363CBCu);
    ctx->pc = 0x363CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363CB4u;
            // 0x363cb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x363F00u;
    if (runtime->hasFunction(0x363F00u)) {
        auto targetFn = runtime->lookupFunction(0x363F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363CBCu; }
        if (ctx->pc != 0x363CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00363F00_0x363f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363CBCu; }
        if (ctx->pc != 0x363CBCu) { return; }
    }
    ctx->pc = 0x363CBCu;
label_363cbc:
    // 0x363cbc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x363cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x363cc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x363cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x363cc4: 0x24636770  addiu       $v1, $v1, 0x6770
    ctx->pc = 0x363cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26480));
    // 0x363cc8: 0x244267a8  addiu       $v0, $v0, 0x67A8
    ctx->pc = 0x363cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26536));
    // 0x363ccc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x363cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x363cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363cd4: 0xc0d8fbc  jal         func_363EF0
    ctx->pc = 0x363CD4u;
    SET_GPR_U32(ctx, 31, 0x363CDCu);
    ctx->pc = 0x363CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363CD4u;
            // 0x363cd8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x363EF0u;
    if (runtime->hasFunction(0x363EF0u)) {
        auto targetFn = runtime->lookupFunction(0x363EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363CDCu; }
        if (ctx->pc != 0x363CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00363EF0_0x363ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363CDCu; }
        if (ctx->pc != 0x363CDCu) { return; }
    }
    ctx->pc = 0x363CDCu;
label_363cdc:
    // 0x363cdc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x363cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x363ce0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x363ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x363ce4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x363ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x363ce8: 0x244266c0  addiu       $v0, $v0, 0x66C0
    ctx->pc = 0x363ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26304));
    // 0x363cec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x363cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x363cf0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x363cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x363cf4: 0x244266f8  addiu       $v0, $v0, 0x66F8
    ctx->pc = 0x363cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26360));
    // 0x363cf8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x363cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x363cfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x363cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x363d00: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x363d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x363d04: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x363D04u;
    SET_GPR_U32(ctx, 31, 0x363D0Cu);
    ctx->pc = 0x363D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363D04u;
            // 0x363d08: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363D0Cu; }
        if (ctx->pc != 0x363D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363D0Cu; }
        if (ctx->pc != 0x363D0Cu) { return; }
    }
    ctx->pc = 0x363D0Cu;
label_363d0c:
    // 0x363d0c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x363d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x363d10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x363d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363d14: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x363D14u;
    {
        const bool branch_taken_0x363d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x363D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363D14u;
            // 0x363d18: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363d14) {
            ctx->pc = 0x363D30u;
            goto label_363d30;
        }
    }
    ctx->pc = 0x363D1Cu;
    // 0x363d1c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x363d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x363d20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x363d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x363d24: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x363D24u;
    SET_GPR_U32(ctx, 31, 0x363D2Cu);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363D2Cu; }
        if (ctx->pc != 0x363D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363D2Cu; }
        if (ctx->pc != 0x363D2Cu) { return; }
    }
    ctx->pc = 0x363D2Cu;
label_363d2c:
    // 0x363d2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x363d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_363d30:
    // 0x363d30: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x363d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x363d34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x363d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363d38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x363d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363d3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x363d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363d40: 0x3e00008  jr          $ra
    ctx->pc = 0x363D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363D40u;
            // 0x363d44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x363D48u;
    // 0x363d48: 0x0  nop
    ctx->pc = 0x363d48u;
    // NOP
    // 0x363d4c: 0x0  nop
    ctx->pc = 0x363d4cu;
    // NOP
label_363d50:
    // 0x363d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x363d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x363d54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x363d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x363d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x363d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x363d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x363d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x363d60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363d64: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x363D64u;
    {
        const bool branch_taken_0x363d64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x363D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363D64u;
            // 0x363d68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363d64) {
            ctx->pc = 0x363E04u;
            goto label_363e04;
        }
    }
    ctx->pc = 0x363D6Cu;
    // 0x363d6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x363d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x363d70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x363d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x363d74: 0x24636770  addiu       $v1, $v1, 0x6770
    ctx->pc = 0x363d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26480));
    // 0x363d78: 0x244267a8  addiu       $v0, $v0, 0x67A8
    ctx->pc = 0x363d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26536));
    // 0x363d7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x363d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x363d80: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x363D80u;
    {
        const bool branch_taken_0x363d80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x363D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363D80u;
            // 0x363d84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363d80) {
            ctx->pc = 0x363DECu;
            goto label_363dec;
        }
    }
    ctx->pc = 0x363D88u;
    // 0x363d88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x363d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x363d8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x363d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x363d90: 0x24636720  addiu       $v1, $v1, 0x6720
    ctx->pc = 0x363d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26400));
    // 0x363d94: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x363d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x363d98: 0x24426758  addiu       $v0, $v0, 0x6758
    ctx->pc = 0x363d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26456));
    // 0x363d9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x363d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x363da0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x363da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x363da4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x363da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x363da8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x363DA8u;
    SET_GPR_U32(ctx, 31, 0x363DB0u);
    ctx->pc = 0x363DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363DA8u;
            // 0x363dac: 0x24a52e30  addiu       $a1, $a1, 0x2E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363DB0u; }
        if (ctx->pc != 0x363DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363DB0u; }
        if (ctx->pc != 0x363DB0u) { return; }
    }
    ctx->pc = 0x363DB0u;
label_363db0:
    // 0x363db0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x363db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x363db4: 0xc0aeacc  jal         func_2BAB30
    ctx->pc = 0x363DB4u;
    SET_GPR_U32(ctx, 31, 0x363DBCu);
    ctx->pc = 0x363DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363DB4u;
            // 0x363db8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB30u;
    if (runtime->hasFunction(0x2BAB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363DBCu; }
        if (ctx->pc != 0x363DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB30_0x2bab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363DBCu; }
        if (ctx->pc != 0x363DBCu) { return; }
    }
    ctx->pc = 0x363DBCu;
label_363dbc:
    // 0x363dbc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x363dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x363dc0: 0xc0d8fa0  jal         func_363E80
    ctx->pc = 0x363DC0u;
    SET_GPR_U32(ctx, 31, 0x363DC8u);
    ctx->pc = 0x363DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363DC0u;
            // 0x363dc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x363E80u;
    if (runtime->hasFunction(0x363E80u)) {
        auto targetFn = runtime->lookupFunction(0x363E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363DC8u; }
        if (ctx->pc != 0x363DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00363E80_0x363e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363DC8u; }
        if (ctx->pc != 0x363DC8u) { return; }
    }
    ctx->pc = 0x363DC8u;
label_363dc8:
    // 0x363dc8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x363dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x363dcc: 0xc0d8fa0  jal         func_363E80
    ctx->pc = 0x363DCCu;
    SET_GPR_U32(ctx, 31, 0x363DD4u);
    ctx->pc = 0x363DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363DCCu;
            // 0x363dd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x363E80u;
    if (runtime->hasFunction(0x363E80u)) {
        auto targetFn = runtime->lookupFunction(0x363E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363DD4u; }
        if (ctx->pc != 0x363DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00363E80_0x363e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363DD4u; }
        if (ctx->pc != 0x363DD4u) { return; }
    }
    ctx->pc = 0x363DD4u;
label_363dd4:
    // 0x363dd4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x363dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x363dd8: 0xc0d8f88  jal         func_363E20
    ctx->pc = 0x363DD8u;
    SET_GPR_U32(ctx, 31, 0x363DE0u);
    ctx->pc = 0x363DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363DD8u;
            // 0x363ddc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x363E20u;
    if (runtime->hasFunction(0x363E20u)) {
        auto targetFn = runtime->lookupFunction(0x363E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363DE0u; }
        if (ctx->pc != 0x363DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00363E20_0x363e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363DE0u; }
        if (ctx->pc != 0x363DE0u) { return; }
    }
    ctx->pc = 0x363DE0u;
label_363de0:
    // 0x363de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363de4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x363DE4u;
    SET_GPR_U32(ctx, 31, 0x363DECu);
    ctx->pc = 0x363DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363DE4u;
            // 0x363de8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363DECu; }
        if (ctx->pc != 0x363DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363DECu; }
        if (ctx->pc != 0x363DECu) { return; }
    }
    ctx->pc = 0x363DECu;
label_363dec:
    // 0x363dec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x363decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x363df0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x363df0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x363df4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x363DF4u;
    {
        const bool branch_taken_0x363df4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x363df4) {
            ctx->pc = 0x363DF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x363DF4u;
            // 0x363df8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x363E08u;
            goto label_363e08;
        }
    }
    ctx->pc = 0x363DFCu;
    // 0x363dfc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x363DFCu;
    SET_GPR_U32(ctx, 31, 0x363E04u);
    ctx->pc = 0x363E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363DFCu;
            // 0x363e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363E04u; }
        if (ctx->pc != 0x363E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363E04u; }
        if (ctx->pc != 0x363E04u) { return; }
    }
    ctx->pc = 0x363E04u;
label_363e04:
    // 0x363e04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x363e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_363e08:
    // 0x363e08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x363e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363e0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x363e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x363e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363e14: 0x3e00008  jr          $ra
    ctx->pc = 0x363E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363E14u;
            // 0x363e18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x363E1Cu;
    // 0x363e1c: 0x0  nop
    ctx->pc = 0x363e1cu;
    // NOP
}
