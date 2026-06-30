#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187E48
// Address: 0x187e48 - 0x187e78
void sub_00187E48_0x187e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187E48_0x187e48");
#endif

    ctx->pc = 0x187e48u;

    // 0x187e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187e4c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x187e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x187e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187e58: 0x8061f38  j           func_187CE0
    ctx->pc = 0x187E58u;
    ctx->pc = 0x187E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187E58u;
            // 0x187e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187CE0u;
    {
        auto targetFn = runtime->lookupFunction(0x187CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x187E60u;
    // 0x187e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187e64: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x187e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x187e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187e70: 0x8061f38  j           func_187CE0
    ctx->pc = 0x187E70u;
    ctx->pc = 0x187E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187E70u;
            // 0x187e74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187CE0u;
    {
        auto targetFn = runtime->lookupFunction(0x187CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x187E78u;
}
