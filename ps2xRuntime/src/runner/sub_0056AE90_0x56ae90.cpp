#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0056AE90
// Address: 0x56ae90 - 0x56aee0
void sub_0056AE90_0x56ae90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0056AE90_0x56ae90");
#endif

    switch (ctx->pc) {
        case 0x56aec8u: goto label_56aec8;
        default: break;
    }

    ctx->pc = 0x56ae90u;

    // 0x56ae90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x56ae90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x56ae94: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x56ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x56ae98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x56ae98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x56ae9c: 0x24638380  addiu       $v1, $v1, -0x7C80
    ctx->pc = 0x56ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935424));
    // 0x56aea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56aea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x56aea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x56aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x56aea8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x56aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x56aeac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x56aeacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56aeb0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x56aeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x56aeb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x56aeb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56aeb8: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x56aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x56aebc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x56aebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x56aec0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x56AEC0u;
    SET_GPR_U32(ctx, 31, 0x56AEC8u);
    ctx->pc = 0x56AEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56AEC0u;
            // 0x56aec4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AEC8u; }
        if (ctx->pc != 0x56AEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AEC8u; }
        if (ctx->pc != 0x56AEC8u) { return; }
    }
    ctx->pc = 0x56AEC8u;
label_56aec8:
    // 0x56aec8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x56aec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56aecc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x56aeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x56aed0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x56aed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x56aed4: 0x3e00008  jr          $ra
    ctx->pc = 0x56AED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56AED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AED4u;
            // 0x56aed8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56AEDCu;
    // 0x56aedc: 0x0  nop
    ctx->pc = 0x56aedcu;
    // NOP
}
