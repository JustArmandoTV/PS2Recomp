#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9340
// Address: 0x1a9340 - 0x1a9368
void sub_001A9340_0x1a9340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9340_0x1a9340");
#endif

    ctx->pc = 0x1a9340u;

    // 0x1a9340: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a9340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9344: 0x8c441ff4  lw          $a0, 0x1FF4($v0)
    ctx->pc = 0x1a9344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8180)));
    // 0x1a9348: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1a9348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a934c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a934cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a9350: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9354: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a9354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a9358: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a935c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9360: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9360u;
            // 0x1a9364: 0x24421390  addiu       $v0, $v0, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5008));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9368u;
}
