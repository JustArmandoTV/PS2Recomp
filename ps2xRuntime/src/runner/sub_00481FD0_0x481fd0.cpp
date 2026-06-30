#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481FD0
// Address: 0x481fd0 - 0x482000
void sub_00481FD0_0x481fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481FD0_0x481fd0");
#endif

    ctx->pc = 0x481fd0u;

    // 0x481fd0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x481fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x481fd4: 0x2442f078  addiu       $v0, $v0, -0xF88
    ctx->pc = 0x481fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963320));
    // 0x481fd8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x481fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x481fdc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x481fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x481fe0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x481fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481fe4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x481fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x481fe8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x481fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x481fec: 0x3e00008  jr          $ra
    ctx->pc = 0x481FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x481FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481FECu;
            // 0x481ff0: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481FF4u;
    // 0x481ff4: 0x0  nop
    ctx->pc = 0x481ff4u;
    // NOP
    // 0x481ff8: 0x0  nop
    ctx->pc = 0x481ff8u;
    // NOP
    // 0x481ffc: 0x0  nop
    ctx->pc = 0x481ffcu;
    // NOP
}
