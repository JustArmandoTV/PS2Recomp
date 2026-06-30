#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030C440
// Address: 0x30c440 - 0x30c470
void sub_0030C440_0x30c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C440_0x30c440");
#endif

    switch (ctx->pc) {
        case 0x30c44cu: goto label_30c44c;
        default: break;
    }

    ctx->pc = 0x30c440u;

    // 0x30c440: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x30c440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x30c444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30c444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c448: 0x24843da8  addiu       $a0, $a0, 0x3DA8
    ctx->pc = 0x30c448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15784));
label_30c44c:
    // 0x30c44c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x30c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30c450: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x30c450u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c454: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x30c454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30c458: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x30c458u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x30c45c: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x30c45cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x30c460: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30C460u;
    {
        const bool branch_taken_0x30c460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C460u;
            // 0x30c464: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c460) {
            ctx->pc = 0x30C44Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30c44c;
        }
    }
    ctx->pc = 0x30C468u;
    // 0x30c468: 0x3e00008  jr          $ra
    ctx->pc = 0x30C468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C470u;
}
