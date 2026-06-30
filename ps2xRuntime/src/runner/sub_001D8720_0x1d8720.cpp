#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8720
// Address: 0x1d8720 - 0x1d8750
void sub_001D8720_0x1d8720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8720_0x1d8720");
#endif

    ctx->pc = 0x1d8720u;

    // 0x1d8720: 0x8c851140  lw          $a1, 0x1140($a0)
    ctx->pc = 0x1d8720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4416)));
    // 0x1d8724: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8724u;
    {
        const bool branch_taken_0x1d8724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8724) {
            ctx->pc = 0x1D8748u;
            goto label_1d8748;
        }
    }
    ctx->pc = 0x1D872Cu;
    // 0x1d872c: 0x94a30064  lhu         $v1, 0x64($a1)
    ctx->pc = 0x1d872cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x1d8730: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1d8730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1d8734: 0xa4a30064  sh          $v1, 0x64($a1)
    ctx->pc = 0x1d8734u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d8738: 0x8c841140  lw          $a0, 0x1140($a0)
    ctx->pc = 0x1d8738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4416)));
    // 0x1d873c: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x1d873cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1d8740: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d8740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d8744: 0xac830094  sw          $v1, 0x94($a0)
    ctx->pc = 0x1d8744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
label_1d8748:
    // 0x1d8748: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8750u;
}
