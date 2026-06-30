#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010DDC0
// Address: 0x10ddc0 - 0x10ddf8
void sub_0010DDC0_0x10ddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DDC0_0x10ddc0");
#endif

    switch (ctx->pc) {
        case 0x10ddc8u: goto label_10ddc8;
        default: break;
    }

    ctx->pc = 0x10ddc0u;

    // 0x10ddc0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ddc4: 0x3463f130  ori         $v1, $v1, 0xF130
    ctx->pc = 0x10ddc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61744);
label_10ddc8:
    // 0x10ddc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10ddcc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x10ddccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x10ddd0: 0x0  nop
    ctx->pc = 0x10ddd0u;
    // NOP
    // 0x10ddd4: 0x0  nop
    ctx->pc = 0x10ddd4u;
    // NOP
    // 0x10ddd8: 0x0  nop
    ctx->pc = 0x10ddd8u;
    // NOP
    // 0x10dddc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10DDDCu;
    {
        const bool branch_taken_0x10dddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10dddc) {
            ctx->pc = 0x10DDC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ddc8;
        }
    }
    ctx->pc = 0x10DDE4u;
    // 0x10dde4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10dde8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x10dde8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddec: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x10ddecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61824);
    // 0x10ddf0: 0x3e00008  jr          $ra
    ctx->pc = 0x10DDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DDF0u;
            // 0x10ddf4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DDF8u;
}
