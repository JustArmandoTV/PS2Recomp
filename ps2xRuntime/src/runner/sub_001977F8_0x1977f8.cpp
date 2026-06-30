#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001977F8
// Address: 0x1977f8 - 0x1978b0
void sub_001977F8_0x1977f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001977F8_0x1977f8");
#endif

    switch (ctx->pc) {
        case 0x197824u: goto label_197824;
        case 0x197834u: goto label_197834;
        case 0x197848u: goto label_197848;
        case 0x197850u: goto label_197850;
        default: break;
    }

    ctx->pc = 0x1977f8u;

    // 0x1977f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1977f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1977fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1977fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197800: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x197800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x197804: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x197804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x197808: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x197808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x19780c: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x19780cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197810: 0x27aa0014  addiu       $t2, $sp, 0x14
    ctx->pc = 0x197810u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x197814: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x197814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x197818: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x197818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x19781c: 0xc065d4e  jal         func_197538
    ctx->pc = 0x19781Cu;
    SET_GPR_U32(ctx, 31, 0x197824u);
    ctx->pc = 0x197820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19781Cu;
            // 0x197820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197538u;
    if (runtime->hasFunction(0x197538u)) {
        auto targetFn = runtime->lookupFunction(0x197538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197824u; }
        if (ctx->pc != 0x197824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197538_0x197538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197824u; }
        if (ctx->pc != 0x197824u) { return; }
    }
    ctx->pc = 0x197824u;
label_197824:
    // 0x197824: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x197824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x197828: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x197828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x19782c: 0xc065d9c  jal         func_197670
    ctx->pc = 0x19782Cu;
    SET_GPR_U32(ctx, 31, 0x197834u);
    ctx->pc = 0x197830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19782Cu;
            // 0x197830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197670u;
    if (runtime->hasFunction(0x197670u)) {
        auto targetFn = runtime->lookupFunction(0x197670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197834u; }
        if (ctx->pc != 0x197834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197670_0x197670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197834u; }
        if (ctx->pc != 0x197834u) { return; }
    }
    ctx->pc = 0x197834u;
label_197834:
    // 0x197834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197838: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x197838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19783c: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x19783cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x197840: 0xc065df0  jal         func_1977C0
    ctx->pc = 0x197840u;
    SET_GPR_U32(ctx, 31, 0x197848u);
    ctx->pc = 0x197844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197840u;
            // 0x197844: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1977C0u;
    if (runtime->hasFunction(0x1977C0u)) {
        auto targetFn = runtime->lookupFunction(0x1977C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197848u; }
        if (ctx->pc != 0x197848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001977C0_0x1977c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197848u; }
        if (ctx->pc != 0x197848u) { return; }
    }
    ctx->pc = 0x197848u;
label_197848:
    // 0x197848: 0xc065dfc  jal         func_1977F0
    ctx->pc = 0x197848u;
    SET_GPR_U32(ctx, 31, 0x197850u);
    ctx->pc = 0x19784Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197848u;
            // 0x19784c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1977F0u;
    if (runtime->hasFunction(0x1977F0u)) {
        auto targetFn = runtime->lookupFunction(0x1977F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197850u; }
        if (ctx->pc != 0x197850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001977F0_0x1977f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197850u; }
        if (ctx->pc != 0x197850u) { return; }
    }
    ctx->pc = 0x197850u;
label_197850:
    // 0x197850: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x197850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x197854: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x197854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x197858: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x197858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x19785c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19785cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x197860: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197864: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x197864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197868: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x197868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19786c: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x19786cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197870: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x197870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x197874: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x197874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x197878: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x197878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19787c: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x19787cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x197880: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x197880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x197884: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x197884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x197888: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x197888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19788c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x19788cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x197890: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x197890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197894: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x197894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x197898: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x197898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19789c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19789cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1978a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1978a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1978a4: 0x24620800  addiu       $v0, $v1, 0x800
    ctx->pc = 0x1978a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1978a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1978A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1978ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1978A8u;
            // 0x1978ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1978B0u;
}
