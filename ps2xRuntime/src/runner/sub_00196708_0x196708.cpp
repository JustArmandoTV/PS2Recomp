#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196708
// Address: 0x196708 - 0x196720
void sub_00196708_0x196708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196708_0x196708");
#endif

    ctx->pc = 0x196708u;

    // 0x196708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19670c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19670cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196710: 0x8c8403d4  lw          $a0, 0x3D4($a0)
    ctx->pc = 0x196710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 980)));
    // 0x196714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196718: 0x80628de  j           func_18A378
    ctx->pc = 0x196718u;
    ctx->pc = 0x19671Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196718u;
            // 0x19671c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A378u;
    {
        auto targetFn = runtime->lookupFunction(0x18A378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x196720u;
}
