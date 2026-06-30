#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023EC00
// Address: 0x23ec00 - 0x23ec40
void sub_0023EC00_0x23ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EC00_0x23ec00");
#endif

    switch (ctx->pc) {
        case 0x23ec20u: goto label_23ec20;
        case 0x23ec28u: goto label_23ec28;
        default: break;
    }

    ctx->pc = 0x23ec00u;

    // 0x23ec00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ec04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ec08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ec08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ec0c: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x23ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x23ec10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23EC10u;
    {
        const bool branch_taken_0x23ec10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC10u;
            // 0x23ec14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec10) {
            ctx->pc = 0x23EC20u;
            goto label_23ec20;
        }
    }
    ctx->pc = 0x23EC18u;
    // 0x23ec18: 0xc08e5f0  jal         func_2397C0
    ctx->pc = 0x23EC18u;
    SET_GPR_U32(ctx, 31, 0x23EC20u);
    ctx->pc = 0x2397C0u;
    if (runtime->hasFunction(0x2397C0u)) {
        auto targetFn = runtime->lookupFunction(0x2397C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC20u; }
        if (ctx->pc != 0x23EC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002397C0_0x2397c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC20u; }
        if (ctx->pc != 0x23EC20u) { return; }
    }
    ctx->pc = 0x23EC20u;
label_23ec20:
    // 0x23ec20: 0xc08ebfc  jal         func_23AFF0
    ctx->pc = 0x23EC20u;
    SET_GPR_U32(ctx, 31, 0x23EC28u);
    ctx->pc = 0x23EC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC20u;
            // 0x23ec24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AFF0u;
    if (runtime->hasFunction(0x23AFF0u)) {
        auto targetFn = runtime->lookupFunction(0x23AFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC28u; }
        if (ctx->pc != 0x23EC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023AFF0_0x23aff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC28u; }
        if (ctx->pc != 0x23EC28u) { return; }
    }
    ctx->pc = 0x23EC28u;
label_23ec28:
    // 0x23ec28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23ec28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ec2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23ec2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ec30: 0x3e00008  jr          $ra
    ctx->pc = 0x23EC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC30u;
            // 0x23ec34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EC38u;
    // 0x23ec38: 0x0  nop
    ctx->pc = 0x23ec38u;
    // NOP
    // 0x23ec3c: 0x0  nop
    ctx->pc = 0x23ec3cu;
    // NOP
}
