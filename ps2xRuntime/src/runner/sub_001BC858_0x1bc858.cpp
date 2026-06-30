#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC858
// Address: 0x1bc858 - 0x1bc880
void sub_001BC858_0x1bc858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC858_0x1bc858");
#endif

    ctx->pc = 0x1bc858u;

    // 0x1bc858: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1bc858u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1bc85c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc860: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1bc860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bc864: 0x90c40012  lbu         $a0, 0x12($a2)
    ctx->pc = 0x1bc864u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x1bc868: 0x90c30013  lbu         $v1, 0x13($a2)
    ctx->pc = 0x1bc868u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 19)));
    // 0x1bc86c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1bc86cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1bc870: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bc870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bc874: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1bc874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1bc878: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC878u;
            // 0x1bc87c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC880u;
}
