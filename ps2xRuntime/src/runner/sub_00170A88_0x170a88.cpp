#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170A88
// Address: 0x170a88 - 0x170ac8
void sub_00170A88_0x170a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170A88_0x170a88");
#endif

    switch (ctx->pc) {
        case 0x170a9cu: goto label_170a9c;
        case 0x170aa4u: goto label_170aa4;
        default: break;
    }

    ctx->pc = 0x170a88u;

    // 0x170a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170a90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170a94: 0xc05c370  jal         func_170DC0
    ctx->pc = 0x170A94u;
    SET_GPR_U32(ctx, 31, 0x170A9Cu);
    ctx->pc = 0x170A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A94u;
            // 0x170a98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170DC0u;
    if (runtime->hasFunction(0x170DC0u)) {
        auto targetFn = runtime->lookupFunction(0x170DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A9Cu; }
        if (ctx->pc != 0x170A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170DC0_0x170dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A9Cu; }
        if (ctx->pc != 0x170A9Cu) { return; }
    }
    ctx->pc = 0x170A9Cu;
label_170a9c:
    // 0x170a9c: 0xc05c834  jal         func_1720D0
    ctx->pc = 0x170A9Cu;
    SET_GPR_U32(ctx, 31, 0x170AA4u);
    ctx->pc = 0x1720D0u;
    if (runtime->hasFunction(0x1720D0u)) {
        auto targetFn = runtime->lookupFunction(0x1720D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170AA4u; }
        if (ctx->pc != 0x170AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720D0_0x1720d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170AA4u; }
        if (ctx->pc != 0x170AA4u) { return; }
    }
    ctx->pc = 0x170AA4u;
label_170aa4:
    // 0x170aa4: 0x8203004d  lb          $v1, 0x4D($s0)
    ctx->pc = 0x170aa4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x170aa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170aac: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x170AACu;
    {
        const bool branch_taken_0x170aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x170aac) {
            ctx->pc = 0x170AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170AACu;
            // 0x170ab0: 0xa203004a  sb          $v1, 0x4A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170AB4u;
            goto label_170ab4;
        }
    }
    ctx->pc = 0x170AB4u;
label_170ab4:
    // 0x170ab4: 0xa2000049  sb          $zero, 0x49($s0)
    ctx->pc = 0x170ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x170ab8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170abc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170ac0: 0x805c83a  j           func_1720E8
    ctx->pc = 0x170AC0u;
    ctx->pc = 0x170AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170AC0u;
            // 0x170ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001720E8_0x1720e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x170AC8u;
}
