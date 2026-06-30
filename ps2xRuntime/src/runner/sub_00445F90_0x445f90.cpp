#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00445F90
// Address: 0x445f90 - 0x445fb0
void sub_00445F90_0x445f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00445F90_0x445f90");
#endif

    ctx->pc = 0x445f90u;

    // 0x445f90: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x445f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x445f94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x445f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445f98: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x445f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x445f9c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x445f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x445fa0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x445fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x445fa4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x445fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x445fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x445FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445FA8u;
            // 0x445fac: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x445FB0u;
}
