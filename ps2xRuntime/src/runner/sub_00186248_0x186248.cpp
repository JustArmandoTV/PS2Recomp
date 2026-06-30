#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186248
// Address: 0x186248 - 0x186268
void sub_00186248_0x186248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186248_0x186248");
#endif

    ctx->pc = 0x186248u;

    // 0x186248: 0x3e00008  jr          $ra
    ctx->pc = 0x186248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18624Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186248u;
            // 0x18624c: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186250u;
    // 0x186250: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x186250u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x186254: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x186254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x186258: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x186258u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18625c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x18625cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x186260: 0x3e00008  jr          $ra
    ctx->pc = 0x186260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186260u;
            // 0x186264: 0xaca70028  sw          $a3, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186268u;
}
