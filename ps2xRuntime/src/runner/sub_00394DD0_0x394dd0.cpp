#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00394DD0
// Address: 0x394dd0 - 0x394e00
void sub_00394DD0_0x394dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394DD0_0x394dd0");
#endif

    switch (ctx->pc) {
        case 0x394ddcu: goto label_394ddc;
        default: break;
    }

    ctx->pc = 0x394dd0u;

    // 0x394dd0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x394dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x394dd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394dd8: 0x24846150  addiu       $a0, $a0, 0x6150
    ctx->pc = 0x394dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24912));
label_394ddc:
    // 0x394ddc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x394ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x394de0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x394de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x394de4: 0x2ca30010  sltiu       $v1, $a1, 0x10
    ctx->pc = 0x394de4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x394de8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x394de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x394dec: 0x0  nop
    ctx->pc = 0x394decu;
    // NOP
    // 0x394df0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x394DF0u;
    {
        const bool branch_taken_0x394df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x394df0) {
            ctx->pc = 0x394DDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_394ddc;
        }
    }
    ctx->pc = 0x394DF8u;
    // 0x394df8: 0x3e00008  jr          $ra
    ctx->pc = 0x394DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x394E00u;
}
