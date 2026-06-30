#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00442730
// Address: 0x442730 - 0x442780
void sub_00442730_0x442730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00442730_0x442730");
#endif

    switch (ctx->pc) {
        case 0x442760u: goto label_442760;
        default: break;
    }

    ctx->pc = 0x442730u;

    // 0x442730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x442730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x442734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x442734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x442738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x442738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44273c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44273cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442740: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x442740u;
    {
        const bool branch_taken_0x442740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x442740) {
            ctx->pc = 0x442744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x442740u;
            // 0x442744: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x442764u;
            goto label_442764;
        }
    }
    ctx->pc = 0x442748u;
    // 0x442748: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x442748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x44274c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44274cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x442750: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x442750u;
    {
        const bool branch_taken_0x442750 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x442750) {
            ctx->pc = 0x442760u;
            goto label_442760;
        }
    }
    ctx->pc = 0x442758u;
    // 0x442758: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x442758u;
    SET_GPR_U32(ctx, 31, 0x442760u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442760u; }
        if (ctx->pc != 0x442760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442760u; }
        if (ctx->pc != 0x442760u) { return; }
    }
    ctx->pc = 0x442760u;
label_442760:
    // 0x442760: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x442760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_442764:
    // 0x442764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x442764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x442768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x442768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44276c: 0x3e00008  jr          $ra
    ctx->pc = 0x44276Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x442770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44276Cu;
            // 0x442770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x442774u;
    // 0x442774: 0x0  nop
    ctx->pc = 0x442774u;
    // NOP
    // 0x442778: 0x0  nop
    ctx->pc = 0x442778u;
    // NOP
    // 0x44277c: 0x0  nop
    ctx->pc = 0x44277cu;
    // NOP
}
