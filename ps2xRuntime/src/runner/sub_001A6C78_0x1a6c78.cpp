#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6C78
// Address: 0x1a6c78 - 0x1a6d18
void sub_001A6C78_0x1a6c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6C78_0x1a6c78");
#endif

    switch (ctx->pc) {
        case 0x1a6ca0u: goto label_1a6ca0;
        case 0x1a6cb0u: goto label_1a6cb0;
        case 0x1a6d00u: goto label_1a6d00;
        default: break;
    }

    ctx->pc = 0x1a6c78u;

    // 0x1a6c78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6c7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a6c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a6c80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a6c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a6c88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a6c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a6c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a6c90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a6c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c94: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a6c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a6c98: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1A6C98u;
    SET_GPR_U32(ctx, 31, 0x1A6CA0u);
    ctx->pc = 0x1A6C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C98u;
            // 0x1a6c9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6CA0u; }
        if (ctx->pc != 0x1A6CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6CA0u; }
        if (ctx->pc != 0x1A6CA0u) { return; }
    }
    ctx->pc = 0x1A6CA0u;
label_1a6ca0:
    // 0x1a6ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ca4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ca8: 0xc069b46  jal         func_1A6D18
    ctx->pc = 0x1A6CA8u;
    SET_GPR_U32(ctx, 31, 0x1A6CB0u);
    ctx->pc = 0x1A6CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6CA8u;
            // 0x1a6cac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D18u;
    if (runtime->hasFunction(0x1A6D18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6CB0u; }
        if (ctx->pc != 0x1A6CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6D18_0x1a6d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6CB0u; }
        if (ctx->pc != 0x1A6CB0u) { return; }
    }
    ctx->pc = 0x1A6CB0u;
label_1a6cb0:
    // 0x1a6cb0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1a6cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1a6cb4: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6CB4u;
    {
        const bool branch_taken_0x1a6cb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6CB4u;
            // 0x1a6cb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cb4) {
            ctx->pc = 0x1A6CD8u;
            goto label_1a6cd8;
        }
    }
    ctx->pc = 0x1A6CBCu;
    // 0x1a6cbc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1a6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1a6cc0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6CC0u;
    {
        const bool branch_taken_0x1a6cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6CC0u;
            // 0x1a6cc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cc0) {
            ctx->pc = 0x1A6CDCu;
            goto label_1a6cdc;
        }
    }
    ctx->pc = 0x1A6CC8u;
    // 0x1a6cc8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1a6cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a6ccc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a6cd0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6CD0u;
    {
        const bool branch_taken_0x1a6cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a6cd0) {
            ctx->pc = 0x1A6CE0u;
            goto label_1a6ce0;
        }
    }
    ctx->pc = 0x1A6CD8u;
label_1a6cd8:
    // 0x1a6cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6cdc:
    // 0x1a6cdc: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x1a6cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_1a6ce0:
    // 0x1a6ce0: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6CE0u;
    {
        const bool branch_taken_0x1a6ce0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6CE0u;
            // 0x1a6ce4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ce0) {
            ctx->pc = 0x1A6CF4u;
            goto label_1a6cf4;
        }
    }
    ctx->pc = 0x1A6CE8u;
    // 0x1a6ce8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1a6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1a6cec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6CECu;
    {
        const bool branch_taken_0x1a6cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6CECu;
            // 0x1a6cf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cec) {
            ctx->pc = 0x1A6CF8u;
            goto label_1a6cf8;
        }
    }
    ctx->pc = 0x1A6CF4u;
label_1a6cf4:
    // 0x1a6cf4: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x1a6cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_1a6cf8:
    // 0x1a6cf8: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1A6CF8u;
    SET_GPR_U32(ctx, 31, 0x1A6D00u);
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D00u; }
        if (ctx->pc != 0x1A6D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D00u; }
        if (ctx->pc != 0x1A6D00u) { return; }
    }
    ctx->pc = 0x1A6D00u;
label_1a6d00:
    // 0x1a6d00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a6d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6d04: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a6d04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6d08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6d0c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a6d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a6d10: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D10u;
            // 0x1a6d14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6D18u;
}
