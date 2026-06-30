#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE5A0
// Address: 0x2ce5a0 - 0x2ce5c0
void sub_002CE5A0_0x2ce5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE5A0_0x2ce5a0");
#endif

    ctx->pc = 0x2ce5a0u;

    // 0x2ce5a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ce5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ce5a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ce5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce5a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ce5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ce5ac: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ce5acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ce5b0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2ce5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2ce5b4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2ce5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2ce5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE5B8u;
            // 0x2ce5bc: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE5C0u;
}
