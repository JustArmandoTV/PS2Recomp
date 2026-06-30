#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B8F90
// Address: 0x4b8f90 - 0x4b8fb0
void sub_004B8F90_0x4b8f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8F90_0x4b8f90");
#endif

    ctx->pc = 0x4b8f90u;

    // 0x4b8f90: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4b8f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x4b8f94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b8f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8f98: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4b8f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x4b8f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8F9Cu;
            // 0x4b8fa0: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B8FA4u;
    // 0x4b8fa4: 0x0  nop
    ctx->pc = 0x4b8fa4u;
    // NOP
    // 0x4b8fa8: 0x0  nop
    ctx->pc = 0x4b8fa8u;
    // NOP
    // 0x4b8fac: 0x0  nop
    ctx->pc = 0x4b8facu;
    // NOP
}
