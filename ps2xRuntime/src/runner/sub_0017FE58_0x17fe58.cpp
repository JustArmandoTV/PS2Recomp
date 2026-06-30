#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FE58
// Address: 0x17fe58 - 0x17fe78
void sub_0017FE58_0x17fe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FE58_0x17fe58");
#endif

    ctx->pc = 0x17fe58u;

    // 0x17fe58: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17fe5c: 0x3e00008  jr          $ra
    ctx->pc = 0x17FE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE5Cu;
            // 0x17fe60: 0xac446b14  sw          $a0, 0x6B14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FE64u;
    // 0x17fe64: 0x0  nop
    ctx->pc = 0x17fe64u;
    // NOP
    // 0x17fe68: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17fe6c: 0x3e00008  jr          $ra
    ctx->pc = 0x17FE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE6Cu;
            // 0x17fe70: 0x8c626b14  lw          $v0, 0x6B14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27412)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FE74u;
    // 0x17fe74: 0x0  nop
    ctx->pc = 0x17fe74u;
    // NOP
}
