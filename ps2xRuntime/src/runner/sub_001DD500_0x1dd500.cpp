#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD500
// Address: 0x1dd500 - 0x1dd510
void sub_001DD500_0x1dd500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD500_0x1dd500");
#endif

    ctx->pc = 0x1dd500u;

    // 0x1dd500: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x1dd500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
    // 0x1dd504: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1dd504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1dd508: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD508u;
            // 0x1dd50c: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD510u;
}
