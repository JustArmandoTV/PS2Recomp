#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00466780
// Address: 0x466780 - 0x4667a0
void sub_00466780_0x466780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466780_0x466780");
#endif

    ctx->pc = 0x466780u;

    // 0x466780: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x466780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x466784: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x466784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466788: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x466788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x46678c: 0x3e00008  jr          $ra
    ctx->pc = 0x46678Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46678Cu;
            // 0x466790: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x466794u;
    // 0x466794: 0x0  nop
    ctx->pc = 0x466794u;
    // NOP
    // 0x466798: 0x0  nop
    ctx->pc = 0x466798u;
    // NOP
    // 0x46679c: 0x0  nop
    ctx->pc = 0x46679cu;
    // NOP
}
