#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015CF60
// Address: 0x15cf60 - 0x15cf80
void sub_0015CF60_0x15cf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CF60_0x15cf60");
#endif

    ctx->pc = 0x15cf60u;

    // 0x15cf60: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x15cf60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x15cf64: 0x24a5ce40  addiu       $a1, $a1, -0x31C0
    ctx->pc = 0x15cf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954560));
    // 0x15cf68: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x15cf68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15cf6c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x15cf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x15cf70: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x15cf70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15cf74: 0x3e00008  jr          $ra
    ctx->pc = 0x15CF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF74u;
            // 0x15cf78: 0x7c830010  sq          $v1, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CF7Cu;
    // 0x15cf7c: 0x0  nop
    ctx->pc = 0x15cf7cu;
    // NOP
}
