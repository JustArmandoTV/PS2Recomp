#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100930
// Address: 0x100930 - 0x100960
void sub_00100930_0x100930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100930_0x100930");
#endif

    ctx->pc = 0x100930u;

    // 0x100930: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x100930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x100934: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x100934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x100938: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x100938u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x10093c: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x10093cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x100940: 0x2484bef0  addiu       $a0, $a0, -0x4110
    ctx->pc = 0x100940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950640));
    // 0x100944: 0x24a5ca20  addiu       $a1, $a1, -0x35E0
    ctx->pc = 0x100944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953504));
    // 0x100948: 0x24c683d0  addiu       $a2, $a2, -0x7C30
    ctx->pc = 0x100948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935504));
    // 0x10094c: 0x80408a8  j           func_1022A0
    ctx->pc = 0x10094Cu;
    ctx->pc = 0x100950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10094Cu;
            // 0x100950: 0x24e783d0  addiu       $a3, $a3, -0x7C30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1022A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1022A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x100954u;
    // 0x100954: 0x0  nop
    ctx->pc = 0x100954u;
    // NOP
    // 0x100958: 0x0  nop
    ctx->pc = 0x100958u;
    // NOP
    // 0x10095c: 0x0  nop
    ctx->pc = 0x10095cu;
    // NOP
}
