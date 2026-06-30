#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00479DE0
// Address: 0x479de0 - 0x479ec0
void sub_00479DE0_0x479de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479DE0_0x479de0");
#endif

    switch (ctx->pc) {
        case 0x479e1cu: goto label_479e1c;
        case 0x479e30u: goto label_479e30;
        case 0x479e44u: goto label_479e44;
        case 0x479e78u: goto label_479e78;
        case 0x479e90u: goto label_479e90;
        default: break;
    }

    ctx->pc = 0x479de0u;

    // 0x479de0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x479de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x479de4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x479de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x479de8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x479de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x479dec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x479decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x479df0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x479df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x479df4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x479df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x479df8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x479df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x479dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x479e00: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x479E00u;
    {
        const bool branch_taken_0x479e00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x479E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479E00u;
            // 0x479e04: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479e00) {
            ctx->pc = 0x479E90u;
            goto label_479e90;
        }
    }
    ctx->pc = 0x479E08u;
    // 0x479e08: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x479e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x479e0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x479e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479e10: 0x2442ebd0  addiu       $v0, $v0, -0x1430
    ctx->pc = 0x479e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962128));
    // 0x479e14: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x479e14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479e18: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x479e18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_479e1c:
    // 0x479e1c: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x479e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x479e20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x479E20u;
    {
        const bool branch_taken_0x479e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x479E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479E20u;
            // 0x479e24: 0x26930074  addiu       $s3, $s4, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479e20) {
            ctx->pc = 0x479E30u;
            goto label_479e30;
        }
    }
    ctx->pc = 0x479E28u;
    // 0x479e28: 0xc1109cc  jal         func_442730
    ctx->pc = 0x479E28u;
    SET_GPR_U32(ctx, 31, 0x479E30u);
    ctx->pc = 0x479E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479E28u;
            // 0x479e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442730u;
    if (runtime->hasFunction(0x442730u)) {
        auto targetFn = runtime->lookupFunction(0x442730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479E30u; }
        if (ctx->pc != 0x479E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442730_0x442730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479E30u; }
        if (ctx->pc != 0x479E30u) { return; }
    }
    ctx->pc = 0x479E30u;
label_479e30:
    // 0x479e30: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x479e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x479e34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x479E34u;
    {
        const bool branch_taken_0x479e34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x479e34) {
            ctx->pc = 0x479E48u;
            goto label_479e48;
        }
    }
    ctx->pc = 0x479E3Cu;
    // 0x479e3c: 0xc1109cc  jal         func_442730
    ctx->pc = 0x479E3Cu;
    SET_GPR_U32(ctx, 31, 0x479E44u);
    ctx->pc = 0x479E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479E3Cu;
            // 0x479e40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442730u;
    if (runtime->hasFunction(0x442730u)) {
        auto targetFn = runtime->lookupFunction(0x442730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479E44u; }
        if (ctx->pc != 0x479E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442730_0x442730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479E44u; }
        if (ctx->pc != 0x479E44u) { return; }
    }
    ctx->pc = 0x479E44u;
label_479e44:
    // 0x479e44: 0x0  nop
    ctx->pc = 0x479e44u;
    // NOP
label_479e48:
    // 0x479e48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x479e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x479e4c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x479e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x479e50: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x479E50u;
    {
        const bool branch_taken_0x479e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x479E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479E50u;
            // 0x479e54: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479e50) {
            ctx->pc = 0x479E1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_479e1c;
        }
    }
    ctx->pc = 0x479E58u;
    // 0x479e58: 0x52400008  beql        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x479E58u;
    {
        const bool branch_taken_0x479e58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x479e58) {
            ctx->pc = 0x479E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x479E58u;
            // 0x479e5c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x479E7Cu;
            goto label_479e7c;
        }
    }
    ctx->pc = 0x479E60u;
    // 0x479e60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x479e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x479e64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x479e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479e68: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x479e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x479e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x479e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479e70: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x479E70u;
    SET_GPR_U32(ctx, 31, 0x479E78u);
    ctx->pc = 0x479E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479E70u;
            // 0x479e74: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479E78u; }
        if (ctx->pc != 0x479E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479E78u; }
        if (ctx->pc != 0x479E78u) { return; }
    }
    ctx->pc = 0x479E78u;
label_479e78:
    // 0x479e78: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x479e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_479e7c:
    // 0x479e7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x479e7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x479e80: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x479E80u;
    {
        const bool branch_taken_0x479e80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x479e80) {
            ctx->pc = 0x479E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x479E80u;
            // 0x479e84: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x479E94u;
            goto label_479e94;
        }
    }
    ctx->pc = 0x479E88u;
    // 0x479e88: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x479E88u;
    SET_GPR_U32(ctx, 31, 0x479E90u);
    ctx->pc = 0x479E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479E88u;
            // 0x479e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479E90u; }
        if (ctx->pc != 0x479E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479E90u; }
        if (ctx->pc != 0x479E90u) { return; }
    }
    ctx->pc = 0x479E90u;
label_479e90:
    // 0x479e90: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x479e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_479e94:
    // 0x479e94: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x479e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x479e98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x479e98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479e9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x479e9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479ea0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x479ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x479ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x479ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x479eac: 0x3e00008  jr          $ra
    ctx->pc = 0x479EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x479EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479EACu;
            // 0x479eb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x479EB4u;
    // 0x479eb4: 0x0  nop
    ctx->pc = 0x479eb4u;
    // NOP
    // 0x479eb8: 0x0  nop
    ctx->pc = 0x479eb8u;
    // NOP
    // 0x479ebc: 0x0  nop
    ctx->pc = 0x479ebcu;
    // NOP
}
