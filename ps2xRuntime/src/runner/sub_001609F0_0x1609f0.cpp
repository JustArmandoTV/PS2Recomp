#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001609F0
// Address: 0x1609f0 - 0x160ab0
void sub_001609F0_0x1609f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001609F0_0x1609f0");
#endif

    switch (ctx->pc) {
        case 0x160a58u: goto label_160a58;
        case 0x160a6cu: goto label_160a6c;
        default: break;
    }

    ctx->pc = 0x1609f0u;

    // 0x1609f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1609f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1609f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1609f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1609f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1609f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1609fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1609fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x160a00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x160a00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x160a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x160a08: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x160a08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160a10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x160a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a14: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x160a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a18: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x160a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x160a1c: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x160a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x160a20: 0x14a70003  bne         $a1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x160A20u;
    {
        const bool branch_taken_0x160a20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x160A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A20u;
            // 0x160a24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a20) {
            ctx->pc = 0x160A30u;
            goto label_160a30;
        }
    }
    ctx->pc = 0x160A28u;
    // 0x160a28: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x160A28u;
    {
        const bool branch_taken_0x160a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A28u;
            // 0x160a2c: 0xae870000  sw          $a3, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a28) {
            ctx->pc = 0x160A8Cu;
            goto label_160a8c;
        }
    }
    ctx->pc = 0x160A30u;
label_160a30:
    // 0x160a30: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x160a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x160a34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x160a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x160a38: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x160a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x160a3c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x160a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x160a40: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x160a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x160a44: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x160a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x160a48: 0x10a7000f  beq         $a1, $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x160A48u;
    {
        const bool branch_taken_0x160a48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x160A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A48u;
            // 0x160a4c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a48) {
            ctx->pc = 0x160A88u;
            goto label_160a88;
        }
    }
    ctx->pc = 0x160A50u;
    // 0x160a50: 0x10a7000d  beq         $a1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x160A50u;
    {
        const bool branch_taken_0x160a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x160A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A50u;
            // 0x160a54: 0x26700008  addiu       $s0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a50) {
            ctx->pc = 0x160A88u;
            goto label_160a88;
        }
    }
    ctx->pc = 0x160A58u;
label_160a58:
    // 0x160a58: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x160a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x160a5c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x160A5Cu;
    {
        const bool branch_taken_0x160a5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A5Cu;
            // 0x160a60: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a5c) {
            ctx->pc = 0x160A70u;
            goto label_160a70;
        }
    }
    ctx->pc = 0x160A64u;
    // 0x160a64: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x160A64u;
    SET_GPR_U32(ctx, 31, 0x160A6Cu);
    ctx->pc = 0x160A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160A64u;
            // 0x160a68: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160A6Cu; }
        if (ctx->pc != 0x160A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160A6Cu; }
        if (ctx->pc != 0x160A6Cu) { return; }
    }
    ctx->pc = 0x160A6Cu;
label_160a6c:
    // 0x160a6c: 0x0  nop
    ctx->pc = 0x160a6cu;
    // NOP
label_160a70:
    // 0x160a70: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x160a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x160a74: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x160a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x160a78: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x160a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x160a7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x160a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x160a80: 0x14a7fff5  bne         $a1, $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x160A80u;
    {
        const bool branch_taken_0x160a80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x160A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A80u;
            // 0x160a84: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a80) {
            ctx->pc = 0x160A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_160a58;
        }
    }
    ctx->pc = 0x160A88u;
label_160a88:
    // 0x160a88: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x160a88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
label_160a8c:
    // 0x160a8c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x160a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160a90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x160a90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160a94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160a94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160a98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x160AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160AA4u;
            // 0x160aa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160AACu;
    // 0x160aac: 0x0  nop
    ctx->pc = 0x160aacu;
    // NOP
}
