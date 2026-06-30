#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DE210
// Address: 0x1de210 - 0x1de260
void sub_001DE210_0x1de210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE210_0x1de210");
#endif

    switch (ctx->pc) {
        case 0x1de240u: goto label_1de240;
        default: break;
    }

    ctx->pc = 0x1de210u;

    // 0x1de210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1de218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1de21c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de220: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE220u;
    {
        const bool branch_taken_0x1de220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de220) {
            ctx->pc = 0x1DE224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE220u;
            // 0x1de224: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE244u;
            goto label_1de244;
        }
    }
    ctx->pc = 0x1DE228u;
    // 0x1de228: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1de228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1de22c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de22cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de230: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE230u;
    {
        const bool branch_taken_0x1de230 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1de230) {
            ctx->pc = 0x1DE240u;
            goto label_1de240;
        }
    }
    ctx->pc = 0x1DE238u;
    // 0x1de238: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1DE238u;
    SET_GPR_U32(ctx, 31, 0x1DE240u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE240u; }
        if (ctx->pc != 0x1DE240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE240u; }
        if (ctx->pc != 0x1DE240u) { return; }
    }
    ctx->pc = 0x1DE240u;
label_1de240:
    // 0x1de240: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1de240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de244:
    // 0x1de244: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de24c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE24Cu;
            // 0x1de250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE254u;
    // 0x1de254: 0x0  nop
    ctx->pc = 0x1de254u;
    // NOP
    // 0x1de258: 0x0  nop
    ctx->pc = 0x1de258u;
    // NOP
    // 0x1de25c: 0x0  nop
    ctx->pc = 0x1de25cu;
    // NOP
}
