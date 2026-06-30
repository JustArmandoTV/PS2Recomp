#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCA48
// Address: 0x1bca48 - 0x1bca80
void sub_001BCA48_0x1bca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCA48_0x1bca48");
#endif

    ctx->pc = 0x1bca48u;

    // 0x1bca48: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1bca48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bca4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bca50: 0x90c300c8  lbu         $v1, 0xC8($a2)
    ctx->pc = 0x1bca50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 200)));
    // 0x1bca54: 0x90c400c9  lbu         $a0, 0xC9($a2)
    ctx->pc = 0x1bca54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 201)));
    // 0x1bca58: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bca58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bca5c: 0x90c700ca  lbu         $a3, 0xCA($a2)
    ctx->pc = 0x1bca5cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 202)));
    // 0x1bca60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bca60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bca64: 0x90c800cb  lbu         $t0, 0xCB($a2)
    ctx->pc = 0x1bca64u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 203)));
    // 0x1bca68: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bca68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bca6c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bca70: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1bca70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bca74: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x1bca74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1bca78: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA78u;
            // 0x1bca7c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BCA80u;
}
