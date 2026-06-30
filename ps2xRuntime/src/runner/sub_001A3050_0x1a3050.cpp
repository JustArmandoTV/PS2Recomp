#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3050
// Address: 0x1a3050 - 0x1a3110
void sub_001A3050_0x1a3050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3050_0x1a3050");
#endif

    switch (ctx->pc) {
        case 0x1a30b8u: goto label_1a30b8;
        case 0x1a30c0u: goto label_1a30c0;
        case 0x1a30d4u: goto label_1a30d4;
        case 0x1a30f8u: goto label_1a30f8;
        case 0x1a3100u: goto label_1a3100;
        default: break;
    }

    ctx->pc = 0x1a3050u;

    // 0x1a3050: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a3050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3054: 0x3c05006e  lui         $a1, 0x6E
    ctx->pc = 0x1a3054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)110 << 16));
    // 0x1a3058: 0x24a5be90  addiu       $a1, $a1, -0x4170
    ctx->pc = 0x1a3058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950544));
    // 0x1a305c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a3060: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a3060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a3064: 0x2406ffe0  addiu       $a2, $zero, -0x20
    ctx->pc = 0x1a3064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1a3068: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x1a3068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x1a306c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a3070: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1a3070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1a3074: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1a3074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1a3078: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1a3078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1a307c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1a307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a3080: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a3080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a3084: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x1a3084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x1a3088: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1a3088u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1a308c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1a308cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1a3090: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x1a3090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x1a3094: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1a3094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a3098: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1a3098u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1a309c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1a309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a30a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A30A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A30A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A30A0u;
            // 0x1a30a4: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A30A8u;
    // 0x1a30a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a30a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a30ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a30acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a30b0: 0xc05aea2  jal         func_16BA88
    ctx->pc = 0x1A30B0u;
    SET_GPR_U32(ctx, 31, 0x1A30B8u);
    ctx->pc = 0x16BA88u;
    if (runtime->hasFunction(0x16BA88u)) {
        auto targetFn = runtime->lookupFunction(0x16BA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30B8u; }
        if (ctx->pc != 0x1A30B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BA88_0x16ba88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30B8u; }
        if (ctx->pc != 0x1A30B8u) { return; }
    }
    ctx->pc = 0x1A30B8u;
label_1a30b8:
    // 0x1a30b8: 0xc05bb0c  jal         func_16EC30
    ctx->pc = 0x1A30B8u;
    SET_GPR_U32(ctx, 31, 0x1A30C0u);
    ctx->pc = 0x16EC30u;
    if (runtime->hasFunction(0x16EC30u)) {
        auto targetFn = runtime->lookupFunction(0x16EC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30C0u; }
        if (ctx->pc != 0x1A30C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EC30_0x16ec30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30C0u; }
        if (ctx->pc != 0x1A30C0u) { return; }
    }
    ctx->pc = 0x1A30C0u;
label_1a30c0:
    // 0x1a30c0: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1a30c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1a30c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a30c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a30c8: 0x2484be90  addiu       $a0, $a0, -0x4170
    ctx->pc = 0x1a30c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950544));
    // 0x1a30cc: 0xc06419c  jal         func_190670
    ctx->pc = 0x1A30CCu;
    SET_GPR_U32(ctx, 31, 0x1A30D4u);
    ctx->pc = 0x1A30D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A30CCu;
            // 0x1a30d0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190670u;
    if (runtime->hasFunction(0x190670u)) {
        auto targetFn = runtime->lookupFunction(0x190670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30D4u; }
        if (ctx->pc != 0x1A30D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190670_0x190670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30D4u; }
        if (ctx->pc != 0x1A30D4u) { return; }
    }
    ctx->pc = 0x1A30D4u;
label_1a30d4:
    // 0x1a30d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a30d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a30d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a30d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a30dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A30DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A30E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A30DCu;
            // 0x1a30e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A30E4u;
    // 0x1a30e4: 0x0  nop
    ctx->pc = 0x1a30e4u;
    // NOP
    // 0x1a30e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a30e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a30ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a30ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a30f0: 0xc05bb12  jal         func_16EC48
    ctx->pc = 0x1A30F0u;
    SET_GPR_U32(ctx, 31, 0x1A30F8u);
    ctx->pc = 0x16EC48u;
    if (runtime->hasFunction(0x16EC48u)) {
        auto targetFn = runtime->lookupFunction(0x16EC48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30F8u; }
        if (ctx->pc != 0x1A30F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EC48_0x16ec48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30F8u; }
        if (ctx->pc != 0x1A30F8u) { return; }
    }
    ctx->pc = 0x1A30F8u;
label_1a30f8:
    // 0x1a30f8: 0xc05af0e  jal         func_16BC38
    ctx->pc = 0x1A30F8u;
    SET_GPR_U32(ctx, 31, 0x1A3100u);
    ctx->pc = 0x16BC38u;
    if (runtime->hasFunction(0x16BC38u)) {
        auto targetFn = runtime->lookupFunction(0x16BC38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3100u; }
        if (ctx->pc != 0x1A3100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BC38_0x16bc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3100u; }
        if (ctx->pc != 0x1A3100u) { return; }
    }
    ctx->pc = 0x1A3100u;
label_1a3100:
    // 0x1a3100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a3100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3108: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A310Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3108u;
            // 0x1a310c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3110u;
}
