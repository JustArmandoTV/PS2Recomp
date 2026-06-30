#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034CFD0
// Address: 0x34cfd0 - 0x34d010
void sub_0034CFD0_0x34cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CFD0_0x34cfd0");
#endif

    switch (ctx->pc) {
        case 0x34cfe4u: goto label_34cfe4;
        default: break;
    }

    ctx->pc = 0x34cfd0u;

    // 0x34cfd0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x34cfd4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x34cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x34cfd8: 0xac603ec0  sw          $zero, 0x3EC0($v1)
    ctx->pc = 0x34cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16064), GPR_U32(ctx, 0));
    // 0x34cfdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34cfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cfe0: 0x24843ed0  addiu       $a0, $a0, 0x3ED0
    ctx->pc = 0x34cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16080));
label_34cfe4:
    // 0x34cfe4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34cfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34cfe8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x34cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x34cfec: 0x2ca30040  sltiu       $v1, $a1, 0x40
    ctx->pc = 0x34cfecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x34cff0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x34cff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x34cff4: 0x0  nop
    ctx->pc = 0x34cff4u;
    // NOP
    // 0x34cff8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34CFF8u;
    {
        const bool branch_taken_0x34cff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34cff8) {
            ctx->pc = 0x34CFE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34cfe4;
        }
    }
    ctx->pc = 0x34D000u;
    // 0x34d000: 0x3e00008  jr          $ra
    ctx->pc = 0x34D000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D008u;
    // 0x34d008: 0x0  nop
    ctx->pc = 0x34d008u;
    // NOP
    // 0x34d00c: 0x0  nop
    ctx->pc = 0x34d00cu;
    // NOP
}
