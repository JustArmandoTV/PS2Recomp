#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170F78
// Address: 0x170f78 - 0x170f90
void sub_00170F78_0x170f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170F78_0x170f78");
#endif

    ctx->pc = 0x170f78u;

    // 0x170f78: 0x4a20003  bltzl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x170F78u;
    {
        const bool branch_taken_0x170f78 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x170f78) {
            ctx->pc = 0x170F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170F78u;
            // 0x170f7c: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170F88u;
            goto label_170f88;
        }
    }
    ctx->pc = 0x170F80u;
    // 0x170f80: 0x3e00008  jr          $ra
    ctx->pc = 0x170F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170F80u;
            // 0x170f84: 0xac850034  sw          $a1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170F88u;
label_170f88:
    // 0x170f88: 0x3e00008  jr          $ra
    ctx->pc = 0x170F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170F88u;
            // 0x170f8c: 0xac820034  sw          $v0, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170F90u;
}
