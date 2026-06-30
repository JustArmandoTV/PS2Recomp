#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051F110
// Address: 0x51f110 - 0x51f170
void sub_0051F110_0x51f110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051F110_0x51f110");
#endif

    switch (ctx->pc) {
        case 0x51f138u: goto label_51f138;
        case 0x51f144u: goto label_51f144;
        default: break;
    }

    ctx->pc = 0x51f110u;

    // 0x51f110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x51f110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x51f114: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x51f114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x51f118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51f118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x51f11c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51f11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51f120: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x51f120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f124: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51f124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51f128: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x51f128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x51f12c: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x51f12cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x51f130: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x51f130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x51f134: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x51f134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_51f138:
    // 0x51f138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51f138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f13c: 0xc147d00  jal         func_51F400
    ctx->pc = 0x51F13Cu;
    SET_GPR_U32(ctx, 31, 0x51F144u);
    ctx->pc = 0x51F140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F13Cu;
            // 0x51f140: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51F400u;
    if (runtime->hasFunction(0x51F400u)) {
        auto targetFn = runtime->lookupFunction(0x51F400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F144u; }
        if (ctx->pc != 0x51F144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051F400_0x51f400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F144u; }
        if (ctx->pc != 0x51F144u) { return; }
    }
    ctx->pc = 0x51F144u;
label_51f144:
    // 0x51f144: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x51f144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x51f148: 0x26100280  addiu       $s0, $s0, 0x280
    ctx->pc = 0x51f148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x51f14c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x51F14Cu;
    {
        const bool branch_taken_0x51f14c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x51f14c) {
            ctx->pc = 0x51F138u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51f138;
        }
    }
    ctx->pc = 0x51F154u;
    // 0x51f154: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x51f154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x51f158: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51f158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51f15c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51f15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51f160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51f160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51f164: 0x3e00008  jr          $ra
    ctx->pc = 0x51F164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51F168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F164u;
            // 0x51f168: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51F16Cu;
    // 0x51f16c: 0x0  nop
    ctx->pc = 0x51f16cu;
    // NOP
}
