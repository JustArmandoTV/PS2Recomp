#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C90A8
// Address: 0x1c90a8 - 0x1c90d0
void sub_001C90A8_0x1c90a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C90A8_0x1c90a8");
#endif

    ctx->pc = 0x1c90a8u;

    // 0x1c90a8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c90a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c90ac: 0x2463a6f4  addiu       $v1, $v1, -0x590C
    ctx->pc = 0x1c90acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944500));
    // 0x1c90b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c90b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C90B4u;
    {
        const bool branch_taken_0x1c90b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C90B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C90B4u;
            // 0x1c90b8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90b4) {
            ctx->pc = 0x1C90C4u;
            goto label_1c90c4;
        }
    }
    ctx->pc = 0x1C90BCu;
    // 0x1c90bc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1c90bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1c90c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c90c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c90c4:
    // 0x1c90c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C90C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C90C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C90C4u;
            // 0x1c90c8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C90CCu;
    // 0x1c90cc: 0x0  nop
    ctx->pc = 0x1c90ccu;
    // NOP
}
