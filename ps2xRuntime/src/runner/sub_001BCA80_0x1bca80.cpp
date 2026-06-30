#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCA80
// Address: 0x1bca80 - 0x1bcab8
void sub_001BCA80_0x1bca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCA80_0x1bca80");
#endif

    ctx->pc = 0x1bca80u;

    // 0x1bca80: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1bca80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bca84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bca84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bca88: 0x90c300cc  lbu         $v1, 0xCC($a2)
    ctx->pc = 0x1bca88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x1bca8c: 0x90c400cd  lbu         $a0, 0xCD($a2)
    ctx->pc = 0x1bca8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 205)));
    // 0x1bca90: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bca90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bca94: 0x90c700ce  lbu         $a3, 0xCE($a2)
    ctx->pc = 0x1bca94u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 206)));
    // 0x1bca98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bca98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bca9c: 0x90c800cf  lbu         $t0, 0xCF($a2)
    ctx->pc = 0x1bca9cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 207)));
    // 0x1bcaa0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bcaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcaa4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bcaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bcaa8: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1bcaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcaac: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x1bcaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1bcab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCAB0u;
            // 0x1bcab4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BCAB8u;
}
