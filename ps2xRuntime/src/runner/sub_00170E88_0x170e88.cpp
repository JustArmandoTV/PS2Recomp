#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170E88
// Address: 0x170e88 - 0x170ed8
void sub_00170E88_0x170e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170E88_0x170e88");
#endif

    switch (ctx->pc) {
        case 0x170e9cu: goto label_170e9c;
        case 0x170ea8u: goto label_170ea8;
        case 0x170eb0u: goto label_170eb0;
        default: break;
    }

    ctx->pc = 0x170e88u;

    // 0x170e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170e90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170e94: 0xc05c370  jal         func_170DC0
    ctx->pc = 0x170E94u;
    SET_GPR_U32(ctx, 31, 0x170E9Cu);
    ctx->pc = 0x170E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170E94u;
            // 0x170e98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170DC0u;
    if (runtime->hasFunction(0x170DC0u)) {
        auto targetFn = runtime->lookupFunction(0x170DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E9Cu; }
        if (ctx->pc != 0x170E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170DC0_0x170dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E9Cu; }
        if (ctx->pc != 0x170E9Cu) { return; }
    }
    ctx->pc = 0x170E9Cu;
label_170e9c:
    // 0x170e9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x170E9Cu;
    {
        const bool branch_taken_0x170e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170E9Cu;
            // 0x170ea0: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e9c) {
            ctx->pc = 0x170EB4u;
            goto label_170eb4;
        }
    }
    ctx->pc = 0x170EA4u;
    // 0x170ea4: 0x0  nop
    ctx->pc = 0x170ea4u;
    // NOP
label_170ea8:
    // 0x170ea8: 0xc05adda  jal         func_16B768
    ctx->pc = 0x170EA8u;
    SET_GPR_U32(ctx, 31, 0x170EB0u);
    ctx->pc = 0x16B768u;
    if (runtime->hasFunction(0x16B768u)) {
        auto targetFn = runtime->lookupFunction(0x16B768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170EB0u; }
        if (ctx->pc != 0x170EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B768_0x16b768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170EB0u; }
        if (ctx->pc != 0x170EB0u) { return; }
    }
    ctx->pc = 0x170EB0u;
label_170eb0:
    // 0x170eb0: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x170eb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_170eb4:
    // 0x170eb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170eb8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x170EB8u;
    {
        const bool branch_taken_0x170eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x170eb8) {
            ctx->pc = 0x170EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_170ea8;
        }
    }
    ctx->pc = 0x170EC0u;
    // 0x170ec0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x170ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x170ec4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x170EC4u;
    {
        const bool branch_taken_0x170ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170EC4u;
            // 0x170ec8: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ec4) {
            ctx->pc = 0x170EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_170ea8;
        }
    }
    ctx->pc = 0x170ECCu;
    // 0x170ecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x170ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170ED0u;
            // 0x170ed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170ED8u;
}
