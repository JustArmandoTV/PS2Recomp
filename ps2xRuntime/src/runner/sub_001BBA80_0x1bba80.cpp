#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBA80
// Address: 0x1bba80 - 0x1bbaa0
void sub_001BBA80_0x1bba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBA80_0x1bba80");
#endif

    ctx->pc = 0x1bba80u;

    // 0x1bba80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bba80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bba84: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1bba84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bba88: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1bba88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1bba8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bba90: 0x90640084  lbu         $a0, 0x84($v1)
    ctx->pc = 0x1bba90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x1bba94: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA94u;
            // 0x1bba98: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBA9Cu;
    // 0x1bba9c: 0x0  nop
    ctx->pc = 0x1bba9cu;
    // NOP
}
