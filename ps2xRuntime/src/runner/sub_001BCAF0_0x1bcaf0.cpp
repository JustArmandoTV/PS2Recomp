#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCAF0
// Address: 0x1bcaf0 - 0x1bcb28
void sub_001BCAF0_0x1bcaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCAF0_0x1bcaf0");
#endif

    ctx->pc = 0x1bcaf0u;

    // 0x1bcaf0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1bcaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bcaf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcaf8: 0x90c300d4  lbu         $v1, 0xD4($a2)
    ctx->pc = 0x1bcaf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x1bcafc: 0x90c400d5  lbu         $a0, 0xD5($a2)
    ctx->pc = 0x1bcafcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 213)));
    // 0x1bcb00: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bcb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcb04: 0x90c700d6  lbu         $a3, 0xD6($a2)
    ctx->pc = 0x1bcb04u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 214)));
    // 0x1bcb08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bcb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bcb0c: 0x90c800d7  lbu         $t0, 0xD7($a2)
    ctx->pc = 0x1bcb0cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 215)));
    // 0x1bcb10: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bcb10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcb14: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bcb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bcb18: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1bcb18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcb1c: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x1bcb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1bcb20: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB20u;
            // 0x1bcb24: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BCB28u;
}
