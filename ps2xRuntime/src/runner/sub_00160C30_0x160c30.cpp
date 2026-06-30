#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160C30
// Address: 0x160c30 - 0x160d40
void sub_00160C30_0x160c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160C30_0x160c30");
#endif

    switch (ctx->pc) {
        case 0x160c88u: goto label_160c88;
        case 0x160c90u: goto label_160c90;
        case 0x160ca4u: goto label_160ca4;
        case 0x160d04u: goto label_160d04;
        default: break;
    }

    ctx->pc = 0x160c30u;

    // 0x160c30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x160c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x160c34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x160c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x160c38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x160c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x160c3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x160c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x160c40: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x160c40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x160c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x160c48: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x160c48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x160c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x160c50: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x160c50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160c58: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x160c58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160c60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x160c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x160c64: 0x2c41ffff  sltiu       $at, $v0, -0x1
    ctx->pc = 0x160c64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x160c68: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x160C68u;
    {
        const bool branch_taken_0x160c68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x160C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160C68u;
            // 0x160c6c: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c68) {
            ctx->pc = 0x160C90u;
            goto label_160c90;
        }
    }
    ctx->pc = 0x160C70u;
    // 0x160c70: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x160c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x160c74: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x160c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x160c78: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x160c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x160c7c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x160c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x160c80: 0xc049e92  jal         func_127A48
    ctx->pc = 0x160C80u;
    SET_GPR_U32(ctx, 31, 0x160C88u);
    ctx->pc = 0x160C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160C80u;
            // 0x160c84: 0x24a52600  addiu       $a1, $a1, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C88u; }
        if (ctx->pc != 0x160C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C88u; }
        if (ctx->pc != 0x160C88u) { return; }
    }
    ctx->pc = 0x160C88u;
label_160c88:
    // 0x160c88: 0xc04981a  jal         func_126068
    ctx->pc = 0x160C88u;
    SET_GPR_U32(ctx, 31, 0x160C90u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C90u; }
        if (ctx->pc != 0x160C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C90u; }
        if (ctx->pc != 0x160C90u) { return; }
    }
    ctx->pc = 0x160C90u;
label_160c90:
    // 0x160c90: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x160c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x160c94: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x160c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x160c98: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x160c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x160c9c: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x160C9Cu;
    SET_GPR_U32(ctx, 31, 0x160CA4u);
    ctx->pc = 0x160CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160C9Cu;
            // 0x160ca0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160CA4u; }
        if (ctx->pc != 0x160CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160CA4u; }
        if (ctx->pc != 0x160CA4u) { return; }
    }
    ctx->pc = 0x160CA4u;
label_160ca4:
    // 0x160ca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ca8: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x160ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x160cac: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x160CACu;
    {
        const bool branch_taken_0x160cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160cac) {
            ctx->pc = 0x160CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160CACu;
            // 0x160cb0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160CC8u;
            goto label_160cc8;
        }
    }
    ctx->pc = 0x160CB4u;
    // 0x160cb4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x160cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x160cb8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x160cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x160cbc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x160cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x160cc0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x160cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x160cc4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_160cc8:
    // 0x160cc8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x160cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x160ccc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x160cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x160cd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x160cd4: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x160cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x160cd8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x160CD8u;
    {
        const bool branch_taken_0x160cd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160CD8u;
            // 0x160cdc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cd8) {
            ctx->pc = 0x160CE8u;
            goto label_160ce8;
        }
    }
    ctx->pc = 0x160CE0u;
    // 0x160ce0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x160CE0u;
    {
        const bool branch_taken_0x160ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160CE0u;
            // 0x160ce4: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ce0) {
            ctx->pc = 0x160CECu;
            goto label_160cec;
        }
    }
    ctx->pc = 0x160CE8u;
label_160ce8:
    // 0x160ce8: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x160ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_160cec:
    // 0x160cec: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x160cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x160cf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160cf4: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x160cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x160cf8: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x160cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x160cfc: 0xc0583d8  jal         func_160F60
    ctx->pc = 0x160CFCu;
    SET_GPR_U32(ctx, 31, 0x160D04u);
    ctx->pc = 0x160D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160CFCu;
            // 0x160d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160F60u;
    if (runtime->hasFunction(0x160F60u)) {
        auto targetFn = runtime->lookupFunction(0x160F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D04u; }
        if (ctx->pc != 0x160D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F60_0x160f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D04u; }
        if (ctx->pc != 0x160D04u) { return; }
    }
    ctx->pc = 0x160D04u;
label_160d04:
    // 0x160d04: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x160D04u;
    {
        const bool branch_taken_0x160d04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x160d04) {
            ctx->pc = 0x160D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160D04u;
            // 0x160d08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160D14u;
            goto label_160d14;
        }
    }
    ctx->pc = 0x160D0Cu;
    // 0x160d0c: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x160d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
    // 0x160d10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x160d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160d14:
    // 0x160d14: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x160d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x160d18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x160d18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160d1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x160d1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160d20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160d20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160d24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160d24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160d28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160d30: 0x3e00008  jr          $ra
    ctx->pc = 0x160D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160D30u;
            // 0x160d34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160D38u;
    // 0x160d38: 0x0  nop
    ctx->pc = 0x160d38u;
    // NOP
    // 0x160d3c: 0x0  nop
    ctx->pc = 0x160d3cu;
    // NOP
}
