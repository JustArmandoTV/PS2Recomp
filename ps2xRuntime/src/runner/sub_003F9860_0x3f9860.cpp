#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F9860
// Address: 0x3f9860 - 0x3f9880
void sub_003F9860_0x3f9860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9860_0x3f9860");
#endif

    ctx->pc = 0x3f9860u;

    // 0x3f9860: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x3f9860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x3f9864: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x3f9864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3f9868: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3f9868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3f986c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3f986cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3f9870: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3f9870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3f9874: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3f9874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3f9878: 0x80fe3d0  j           func_3F8F40
    ctx->pc = 0x3F9878u;
    ctx->pc = 0x3F987Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9878u;
            // 0x3f987c: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F8F40u;
    {
        auto targetFn = runtime->lookupFunction(0x3F8F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3F9880u;
}
