#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023B590
// Address: 0x23b590 - 0x23b5c0
void sub_0023B590_0x23b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B590_0x23b590");
#endif

    ctx->pc = 0x23b590u;

    // 0x23b590: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x23b590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x23b594: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23b594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x23b598: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x23b598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x23b59c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23b59cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b5a0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x23b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x23b5a4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x23b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x23b5a8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x23b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x23b5ac: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x23b5acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x23b5b0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x23b5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x23B5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B5B4u;
            // 0x23b5b8: 0xa080001c  sb          $zero, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B5BCu;
    // 0x23b5bc: 0x0  nop
    ctx->pc = 0x23b5bcu;
    // NOP
}
