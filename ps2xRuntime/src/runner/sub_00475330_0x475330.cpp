#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00475330
// Address: 0x475330 - 0x475390
void sub_00475330_0x475330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00475330_0x475330");
#endif

    switch (ctx->pc) {
        case 0x475354u: goto label_475354;
        case 0x475360u: goto label_475360;
        default: break;
    }

    ctx->pc = 0x475330u;

    // 0x475330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x475330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x475334: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x475334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x475338: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x475338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47533c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47533cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x475340: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x475340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475344: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x475344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x475348: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x475348u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x47534c: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x47534cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x475350: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x475350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_475354:
    // 0x475354: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x475354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475358: 0xc11d990  jal         func_476640
    ctx->pc = 0x475358u;
    SET_GPR_U32(ctx, 31, 0x475360u);
    ctx->pc = 0x47535Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475358u;
            // 0x47535c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x476640u;
    if (runtime->hasFunction(0x476640u)) {
        auto targetFn = runtime->lookupFunction(0x476640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475360u; }
        if (ctx->pc != 0x475360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00476640_0x476640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475360u; }
        if (ctx->pc != 0x475360u) { return; }
    }
    ctx->pc = 0x475360u;
label_475360:
    // 0x475360: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x475360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x475364: 0x261001f0  addiu       $s0, $s0, 0x1F0
    ctx->pc = 0x475364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x475368: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x475368u;
    {
        const bool branch_taken_0x475368 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x475368) {
            ctx->pc = 0x475354u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_475354;
        }
    }
    ctx->pc = 0x475370u;
    // 0x475370: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x475370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x475374: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x475374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x475378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x475378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47537c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47537cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x475380: 0x3e00008  jr          $ra
    ctx->pc = 0x475380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x475384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475380u;
            // 0x475384: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x475388u;
    // 0x475388: 0x0  nop
    ctx->pc = 0x475388u;
    // NOP
    // 0x47538c: 0x0  nop
    ctx->pc = 0x47538cu;
    // NOP
}
