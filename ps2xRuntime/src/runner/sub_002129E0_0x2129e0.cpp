#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002129E0
// Address: 0x2129e0 - 0x212a08
void sub_002129E0_0x2129e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002129E0_0x2129e0");
#endif

    ctx->pc = 0x2129e0u;

    // 0x2129e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2129E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2129E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2129E0u;
            // 0x2129e4: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2129E8u;
    // 0x2129e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2129E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2129ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2129E8u;
            // 0x2129ec: 0x24820020  addiu       $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2129F0u;
    // 0x2129f0: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x2129f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2129f4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2129f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2129f8: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x2129f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2129fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2129FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2129FCu;
            // 0x212a00: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212A04u;
    // 0x212a04: 0x0  nop
    ctx->pc = 0x212a04u;
    // NOP
}
