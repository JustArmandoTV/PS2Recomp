#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BBA90
// Address: 0x2bba90 - 0x2bbad0
void sub_002BBA90_0x2bba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBA90_0x2bba90");
#endif

    ctx->pc = 0x2bba90u;

    // 0x2bba90: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2bba90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2bba94: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2bba94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bba98: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2bba98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2bba9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2bba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bbaa0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2bbaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2bbaa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bbaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbaa8: 0xa086000c  sb          $a2, 0xC($a0)
    ctx->pc = 0x2bbaa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 6));
    // 0x2bbaac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bbaacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbab0: 0xa080000d  sb          $zero, 0xD($a0)
    ctx->pc = 0x2bbab0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bbab4: 0xa085000e  sb          $a1, 0xE($a0)
    ctx->pc = 0x2bbab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 5));
    // 0x2bbab8: 0xa083000f  sb          $v1, 0xF($a0)
    ctx->pc = 0x2bbab8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bbabc: 0xa0860010  sb          $a2, 0x10($a0)
    ctx->pc = 0x2bbabcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x2bbac0: 0xa0830011  sb          $v1, 0x11($a0)
    ctx->pc = 0x2bbac0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bbac4: 0xa0860012  sb          $a2, 0x12($a0)
    ctx->pc = 0x2bbac4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 6));
    // 0x2bbac8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBAC8u;
            // 0x2bbacc: 0xa0830013  sb          $v1, 0x13($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBAD0u;
}
