#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001901D8
// Address: 0x1901d8 - 0x190200
void sub_001901D8_0x1901d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001901D8_0x1901d8");
#endif

    ctx->pc = 0x1901d8u;

    // 0x1901d8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1901d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1901dc: 0xac44fea8  sw          $a0, -0x158($v0)
    ctx->pc = 0x1901dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966952), GPR_U32(ctx, 4));
    // 0x1901e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1901E0u;
    {
        const bool branch_taken_0x1901e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1901E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1901E0u;
            // 0x1901e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1901e0) {
            ctx->pc = 0x1901F4u;
            goto label_1901f4;
        }
    }
    ctx->pc = 0x1901E8u;
    // 0x1901e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1901e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1901ec: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x1901ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1901f0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1901f0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1901f4:
    // 0x1901f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1901F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1901FCu;
    // 0x1901fc: 0x0  nop
    ctx->pc = 0x1901fcu;
    // NOP
}
