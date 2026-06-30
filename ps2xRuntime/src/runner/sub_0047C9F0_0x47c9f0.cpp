#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047C9F0
// Address: 0x47c9f0 - 0x47ca20
void sub_0047C9F0_0x47c9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C9F0_0x47c9f0");
#endif

    ctx->pc = 0x47c9f0u;

    // 0x47c9f0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x47c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x47c9f4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47C9F4u;
    {
        const bool branch_taken_0x47c9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c9f4) {
            ctx->pc = 0x47C9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47C9F4u;
            // 0x47c9f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47CA14u;
            goto label_47ca14;
        }
    }
    ctx->pc = 0x47C9FCu;
    // 0x47c9fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x47c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x47ca00: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x47ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x47ca04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x47ca08: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x47ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x47ca0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47ca10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47ca14:
    // 0x47ca14: 0x3e00008  jr          $ra
    ctx->pc = 0x47CA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47CA1Cu;
    // 0x47ca1c: 0x0  nop
    ctx->pc = 0x47ca1cu;
    // NOP
}
