#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E1B8
// Address: 0x17e1b8 - 0x17e1d8
void sub_0017E1B8_0x17e1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E1B8_0x17e1b8");
#endif

    ctx->pc = 0x17e1b8u;

    // 0x17e1b8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17e1bc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17e1c0: 0x24426550  addiu       $v0, $v0, 0x6550
    ctx->pc = 0x17e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25936));
    // 0x17e1c4: 0xac676554  sw          $a3, 0x6554($v1)
    ctx->pc = 0x17e1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 25940), GPR_U32(ctx, 7));
    // 0x17e1c8: 0xa0460002  sb          $a2, 0x2($v0)
    ctx->pc = 0x17e1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x17e1cc: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x17e1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x17e1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17E1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1D0u;
            // 0x17e1d4: 0xa0450001  sb          $a1, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E1D8u;
}
