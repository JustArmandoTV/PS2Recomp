#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036A660
// Address: 0x36a660 - 0x36a6e0
void sub_0036A660_0x36a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A660_0x36a660");
#endif

    switch (ctx->pc) {
        case 0x36a67cu: goto label_36a67c;
        case 0x36a690u: goto label_36a690;
        case 0x36a6b8u: goto label_36a6b8;
        default: break;
    }

    ctx->pc = 0x36a660u;

    // 0x36a660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36a664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36a668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36a668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36a66c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a670: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x36a670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x36a674: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x36a674u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
    // 0x36a678: 0x261046fc  addiu       $s0, $s0, 0x46FC
    ctx->pc = 0x36a678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18172));
label_36a67c:
    // 0x36a67c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x36a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36a680: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x36A680u;
    {
        const bool branch_taken_0x36a680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a680) {
            ctx->pc = 0x36A6B8u;
            goto label_36a6b8;
        }
    }
    ctx->pc = 0x36A688u;
    // 0x36a688: 0xc0d9ddc  jal         func_367770
    ctx->pc = 0x36A688u;
    SET_GPR_U32(ctx, 31, 0x36A690u);
    ctx->pc = 0x367770u;
    if (runtime->hasFunction(0x367770u)) {
        auto targetFn = runtime->lookupFunction(0x367770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A690u; }
        if (ctx->pc != 0x36A690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00367770_0x367770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A690u; }
        if (ctx->pc != 0x36A690u) { return; }
    }
    ctx->pc = 0x36A690u;
label_36a690:
    // 0x36a690: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x36a690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36a694: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x36a694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x36a698: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x36a698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x36a69c: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x36a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x36a6a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x36a6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x36a6a4: 0xaca30054  sw          $v1, 0x54($a1)
    ctx->pc = 0x36a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
    // 0x36a6a8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x36a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x36a6ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x36a6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36a6b0: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x36A6B0u;
    SET_GPR_U32(ctx, 31, 0x36A6B8u);
    ctx->pc = 0x36A6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A6B0u;
            // 0x36a6b4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A6B8u; }
        if (ctx->pc != 0x36A6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A6B8u; }
        if (ctx->pc != 0x36A6B8u) { return; }
    }
    ctx->pc = 0x36A6B8u;
label_36a6b8:
    // 0x36a6b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x36a6b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x36a6bc: 0x621ffef  bgez        $s1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x36A6BCu;
    {
        const bool branch_taken_0x36a6bc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x36A6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36A6BCu;
            // 0x36a6c0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a6bc) {
            ctx->pc = 0x36A67Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36a67c;
        }
    }
    ctx->pc = 0x36A6C4u;
    // 0x36a6c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36a6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a6c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a6c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a6cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x36A6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36A6D0u;
            // 0x36a6d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36A6D8u;
    // 0x36a6d8: 0x0  nop
    ctx->pc = 0x36a6d8u;
    // NOP
    // 0x36a6dc: 0x0  nop
    ctx->pc = 0x36a6dcu;
    // NOP
}
