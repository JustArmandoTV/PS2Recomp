#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00370E70
// Address: 0x370e70 - 0x370ec0
void sub_00370E70_0x370e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370E70_0x370e70");
#endif

    switch (ctx->pc) {
        case 0x370e88u: goto label_370e88;
        case 0x370e90u: goto label_370e90;
        default: break;
    }

    ctx->pc = 0x370e70u;

    // 0x370e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x370e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x370e74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x370e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x370e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x370e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x370e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x370e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x370e80: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x370e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x370e84: 0x24900080  addiu       $s0, $a0, 0x80
    ctx->pc = 0x370e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_370e88:
    // 0x370e88: 0xc0e3658  jal         func_38D960
    ctx->pc = 0x370E88u;
    SET_GPR_U32(ctx, 31, 0x370E90u);
    ctx->pc = 0x370E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370E88u;
            // 0x370e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370E90u; }
        if (ctx->pc != 0x370E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370E90u; }
        if (ctx->pc != 0x370E90u) { return; }
    }
    ctx->pc = 0x370E90u;
label_370e90:
    // 0x370e90: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x370e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x370e94: 0x261000f0  addiu       $s0, $s0, 0xF0
    ctx->pc = 0x370e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x370e98: 0x0  nop
    ctx->pc = 0x370e98u;
    // NOP
    // 0x370e9c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x370E9Cu;
    {
        const bool branch_taken_0x370e9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x370e9c) {
            ctx->pc = 0x370E88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_370e88;
        }
    }
    ctx->pc = 0x370EA4u;
    // 0x370ea4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x370ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370ea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x370ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370eac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x370eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x370EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370EB0u;
            // 0x370eb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x370EB8u;
    // 0x370eb8: 0x0  nop
    ctx->pc = 0x370eb8u;
    // NOP
    // 0x370ebc: 0x0  nop
    ctx->pc = 0x370ebcu;
    // NOP
}
