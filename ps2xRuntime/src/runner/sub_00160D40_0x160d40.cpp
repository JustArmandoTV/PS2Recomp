#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160D40
// Address: 0x160d40 - 0x160e50
void sub_00160D40_0x160d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160D40_0x160d40");
#endif

    switch (ctx->pc) {
        case 0x160d98u: goto label_160d98;
        case 0x160da0u: goto label_160da0;
        case 0x160db4u: goto label_160db4;
        case 0x160e14u: goto label_160e14;
        default: break;
    }

    ctx->pc = 0x160d40u;

    // 0x160d40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x160d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x160d44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x160d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x160d48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x160d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x160d4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x160d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x160d50: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x160d50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x160d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x160d58: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x160d58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x160d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x160d60: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x160d60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160d68: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x160d68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160d70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x160d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x160d74: 0x2c41ffff  sltiu       $at, $v0, -0x1
    ctx->pc = 0x160d74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x160d78: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x160D78u;
    {
        const bool branch_taken_0x160d78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x160D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160D78u;
            // 0x160d7c: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d78) {
            ctx->pc = 0x160DA0u;
            goto label_160da0;
        }
    }
    ctx->pc = 0x160D80u;
    // 0x160d80: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x160d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x160d84: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x160d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x160d88: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x160d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x160d8c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x160d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x160d90: 0xc049e92  jal         func_127A48
    ctx->pc = 0x160D90u;
    SET_GPR_U32(ctx, 31, 0x160D98u);
    ctx->pc = 0x160D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160D90u;
            // 0x160d94: 0x24a52600  addiu       $a1, $a1, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D98u; }
        if (ctx->pc != 0x160D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D98u; }
        if (ctx->pc != 0x160D98u) { return; }
    }
    ctx->pc = 0x160D98u;
label_160d98:
    // 0x160d98: 0xc04981a  jal         func_126068
    ctx->pc = 0x160D98u;
    SET_GPR_U32(ctx, 31, 0x160DA0u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DA0u; }
        if (ctx->pc != 0x160DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DA0u; }
        if (ctx->pc != 0x160DA0u) { return; }
    }
    ctx->pc = 0x160DA0u;
label_160da0:
    // 0x160da0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x160da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x160da4: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x160da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x160da8: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x160da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x160dac: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x160DACu;
    SET_GPR_U32(ctx, 31, 0x160DB4u);
    ctx->pc = 0x160DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160DACu;
            // 0x160db0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DB4u; }
        if (ctx->pc != 0x160DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DB4u; }
        if (ctx->pc != 0x160DB4u) { return; }
    }
    ctx->pc = 0x160DB4u;
label_160db4:
    // 0x160db4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160db8: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x160db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x160dbc: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x160DBCu;
    {
        const bool branch_taken_0x160dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160dbc) {
            ctx->pc = 0x160DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160DBCu;
            // 0x160dc0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160DD8u;
            goto label_160dd8;
        }
    }
    ctx->pc = 0x160DC4u;
    // 0x160dc4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x160dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x160dc8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x160dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x160dcc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x160dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x160dd0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x160dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x160dd4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_160dd8:
    // 0x160dd8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x160dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x160ddc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x160ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x160de0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x160de4: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x160de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x160de8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x160DE8u;
    {
        const bool branch_taken_0x160de8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160DE8u;
            // 0x160dec: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160de8) {
            ctx->pc = 0x160DF8u;
            goto label_160df8;
        }
    }
    ctx->pc = 0x160DF0u;
    // 0x160df0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x160DF0u;
    {
        const bool branch_taken_0x160df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160DF0u;
            // 0x160df4: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160df0) {
            ctx->pc = 0x160DFCu;
            goto label_160dfc;
        }
    }
    ctx->pc = 0x160DF8u;
label_160df8:
    // 0x160df8: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x160df8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_160dfc:
    // 0x160dfc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x160dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x160e00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160e04: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x160e04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x160e08: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x160e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x160e0c: 0xc0583d8  jal         func_160F60
    ctx->pc = 0x160E0Cu;
    SET_GPR_U32(ctx, 31, 0x160E14u);
    ctx->pc = 0x160E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160E0Cu;
            // 0x160e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160F60u;
    if (runtime->hasFunction(0x160F60u)) {
        auto targetFn = runtime->lookupFunction(0x160F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E14u; }
        if (ctx->pc != 0x160E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F60_0x160f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E14u; }
        if (ctx->pc != 0x160E14u) { return; }
    }
    ctx->pc = 0x160E14u;
label_160e14:
    // 0x160e14: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x160E14u;
    {
        const bool branch_taken_0x160e14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e14) {
            ctx->pc = 0x160E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160E14u;
            // 0x160e18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160E24u;
            goto label_160e24;
        }
    }
    ctx->pc = 0x160E1Cu;
    // 0x160e1c: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x160e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
    // 0x160e20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x160e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160e24:
    // 0x160e24: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x160e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x160e28: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x160e28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160e2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x160e2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160e30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160e30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160e34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160e34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160e38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160e38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160e3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160e40: 0x3e00008  jr          $ra
    ctx->pc = 0x160E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160E40u;
            // 0x160e44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160E48u;
    // 0x160e48: 0x0  nop
    ctx->pc = 0x160e48u;
    // NOP
    // 0x160e4c: 0x0  nop
    ctx->pc = 0x160e4cu;
    // NOP
}
