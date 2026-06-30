#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E5BC0
// Address: 0x2e5bc0 - 0x2e5be0
void sub_002E5BC0_0x2e5bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5BC0_0x2e5bc0");
#endif

    ctx->pc = 0x2e5bc0u;

    // 0x2e5bc0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2e5bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2e5bc4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2e5bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2e5bc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e5bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e5bcc: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2e5bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2e5bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5BD0u;
            // 0x2e5bd4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5BD8u;
    // 0x2e5bd8: 0x0  nop
    ctx->pc = 0x2e5bd8u;
    // NOP
    // 0x2e5bdc: 0x0  nop
    ctx->pc = 0x2e5bdcu;
    // NOP
}
