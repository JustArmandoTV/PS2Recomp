#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF5B0
// Address: 0x3bf5b0 - 0x3bf640
void sub_003BF5B0_0x3bf5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF5B0_0x3bf5b0");
#endif

    switch (ctx->pc) {
        case 0x3bf5f8u: goto label_3bf5f8;
        default: break;
    }

    ctx->pc = 0x3bf5b0u;

    // 0x3bf5b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bf5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3bf5b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bf5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bf5b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bf5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bf5bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bf5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bf5c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3bf5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bf5c4: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3bf5c4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3bf5c8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3bf5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bf5cc: 0x8e230e38  lw          $v1, 0xE38($s1)
    ctx->pc = 0x3bf5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
    // 0x3bf5d0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BF5D0u;
    {
        const bool branch_taken_0x3bf5d0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3BF5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF5D0u;
            // 0x3bf5d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf5d0) {
            ctx->pc = 0x3BF5E8u;
            goto label_3bf5e8;
        }
    }
    ctx->pc = 0x3BF5D8u;
    // 0x3bf5d8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3bf5d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3bf5dc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BF5DCu;
    {
        const bool branch_taken_0x3bf5dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf5dc) {
            ctx->pc = 0x3BF5E8u;
            goto label_3bf5e8;
        }
    }
    ctx->pc = 0x3BF5E4u;
    // 0x3bf5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bf5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bf5e8:
    // 0x3bf5e8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BF5E8u;
    {
        const bool branch_taken_0x3bf5e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf5e8) {
            ctx->pc = 0x3BF604u;
            goto label_3bf604;
        }
    }
    ctx->pc = 0x3BF5F0u;
    // 0x3bf5f0: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x3BF5F0u;
    SET_GPR_U32(ctx, 31, 0x3BF5F8u);
    ctx->pc = 0x3BF5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF5F0u;
            // 0x3bf5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF5F8u; }
        if (ctx->pc != 0x3BF5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF5F8u; }
        if (ctx->pc != 0x3BF5F8u) { return; }
    }
    ctx->pc = 0x3BF5F8u;
label_3bf5f8:
    // 0x3bf5f8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BF5F8u;
    {
        const bool branch_taken_0x3bf5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf5f8) {
            ctx->pc = 0x3BF604u;
            goto label_3bf604;
        }
    }
    ctx->pc = 0x3BF600u;
    // 0x3bf600: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3bf600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bf604:
    // 0x3bf604: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BF604u;
    {
        const bool branch_taken_0x3bf604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf604) {
            ctx->pc = 0x3BF608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF604u;
            // 0x3bf608: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BF624u;
            goto label_3bf624;
        }
    }
    ctx->pc = 0x3BF60Cu;
    // 0x3bf60c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bf60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3bf610: 0x8e240d98  lw          $a0, 0xD98($s1)
    ctx->pc = 0x3bf610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
    // 0x3bf614: 0x8c633e58  lw          $v1, 0x3E58($v1)
    ctx->pc = 0x3bf614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15960)));
    // 0x3bf618: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3bf618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3bf61c: 0xa06000c0  sb          $zero, 0xC0($v1)
    ctx->pc = 0x3bf61cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bf620: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bf620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3bf624:
    // 0x3bf624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bf624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bf628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bf628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf62c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF62Cu;
            // 0x3bf630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF634u;
    // 0x3bf634: 0x0  nop
    ctx->pc = 0x3bf634u;
    // NOP
    // 0x3bf638: 0x0  nop
    ctx->pc = 0x3bf638u;
    // NOP
    // 0x3bf63c: 0x0  nop
    ctx->pc = 0x3bf63cu;
    // NOP
}
