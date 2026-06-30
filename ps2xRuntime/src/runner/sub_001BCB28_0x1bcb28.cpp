#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCB28
// Address: 0x1bcb28 - 0x1bcb60
void sub_001BCB28_0x1bcb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCB28_0x1bcb28");
#endif

    ctx->pc = 0x1bcb28u;

    // 0x1bcb28: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1bcb28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bcb2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcb30: 0x90c300d8  lbu         $v1, 0xD8($a2)
    ctx->pc = 0x1bcb30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x1bcb34: 0x90c400d9  lbu         $a0, 0xD9($a2)
    ctx->pc = 0x1bcb34u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 217)));
    // 0x1bcb38: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bcb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcb3c: 0x90c700da  lbu         $a3, 0xDA($a2)
    ctx->pc = 0x1bcb3cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 218)));
    // 0x1bcb40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bcb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bcb44: 0x90c800db  lbu         $t0, 0xDB($a2)
    ctx->pc = 0x1bcb44u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 219)));
    // 0x1bcb48: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bcb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcb4c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bcb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bcb50: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1bcb50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcb54: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x1bcb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1bcb58: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB58u;
            // 0x1bcb5c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BCB60u;
}
