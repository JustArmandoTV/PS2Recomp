#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C8A0
// Address: 0x51c8a0 - 0x51c8c0
void sub_0051C8A0_0x51c8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C8A0_0x51c8a0");
#endif

    ctx->pc = 0x51c8a0u;

    // 0x51c8a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c8a4: 0x24425ae8  addiu       $v0, $v0, 0x5AE8
    ctx->pc = 0x51c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23272));
    // 0x51c8a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51c8ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x51c8b0: 0xac44e410  sw          $a0, -0x1BF0($v0)
    ctx->pc = 0x51c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960144), GPR_U32(ctx, 4));
    // 0x51c8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x51C8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C8B4u;
            // 0x51c8b8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C8BCu;
    // 0x51c8bc: 0x0  nop
    ctx->pc = 0x51c8bcu;
    // NOP
}
