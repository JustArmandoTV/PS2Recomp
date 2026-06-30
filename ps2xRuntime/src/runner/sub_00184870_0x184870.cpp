#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184870
// Address: 0x184870 - 0x1848b8
void sub_00184870_0x184870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184870_0x184870");
#endif

    switch (ctx->pc) {
        case 0x1848a4u: goto label_1848a4;
        default: break;
    }

    ctx->pc = 0x184870u;

    // 0x184870: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x184874: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184878: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
    // 0x18487c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184880: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x184880u;
    {
        const bool branch_taken_0x184880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x184884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184880u;
            // 0x184884: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184880) {
            ctx->pc = 0x184898u;
            goto label_184898;
        }
    }
    ctx->pc = 0x184888u;
    // 0x184888: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x184888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x18488c: 0x8c83ced0  lw          $v1, -0x3130($a0)
    ctx->pc = 0x18488cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954704)));
    // 0x184890: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x184890u;
    {
        const bool branch_taken_0x184890 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x184894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184890u;
            // 0x184894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184890) {
            ctx->pc = 0x1848A8u;
            goto label_1848a8;
        }
    }
    ctx->pc = 0x184898u;
label_184898:
    // 0x184898: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x18489c: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x18489Cu;
    SET_GPR_U32(ctx, 31, 0x1848A4u);
    ctx->pc = 0x1848A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18489Cu;
            // 0x1848a0: 0x24847930  addiu       $a0, $a0, 0x7930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1848A4u; }
        if (ctx->pc != 0x1848A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1848A4u; }
        if (ctx->pc != 0x1848A4u) { return; }
    }
    ctx->pc = 0x1848A4u;
label_1848a4:
    // 0x1848a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1848a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1848a8:
    // 0x1848a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1848a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1848ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1848ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1848B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1848ACu;
            // 0x1848b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1848B4u;
    // 0x1848b4: 0x0  nop
    ctx->pc = 0x1848b4u;
    // NOP
}
