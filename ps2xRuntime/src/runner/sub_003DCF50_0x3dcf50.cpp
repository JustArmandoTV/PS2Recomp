#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DCF50
// Address: 0x3dcf50 - 0x3dd010
void sub_003DCF50_0x3dcf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCF50_0x3dcf50");
#endif

    switch (ctx->pc) {
        case 0x3dcf74u: goto label_3dcf74;
        case 0x3dcf94u: goto label_3dcf94;
        case 0x3dcfa8u: goto label_3dcfa8;
        case 0x3dcfc4u: goto label_3dcfc4;
        case 0x3dcff0u: goto label_3dcff0;
        default: break;
    }

    ctx->pc = 0x3dcf50u;

    // 0x3dcf50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dcf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3dcf54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dcf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3dcf58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dcf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dcf5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dcf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dcf60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dcf60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcf64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dcf64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcf68: 0x101240  sll         $v0, $s0, 9
    ctx->pc = 0x3dcf68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
    // 0x3dcf6c: 0xc040138  jal         func_1004E0
    ctx->pc = 0x3DCF6Cu;
    SET_GPR_U32(ctx, 31, 0x3DCF74u);
    ctx->pc = 0x3DCF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCF6Cu;
            // 0x3dcf70: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCF74u; }
        if (ctx->pc != 0x3DCF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCF74u; }
        if (ctx->pc != 0x3DCF74u) { return; }
    }
    ctx->pc = 0x3DCF74u;
label_3dcf74:
    // 0x3dcf74: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3dcf74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x3dcf78: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x3dcf78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x3dcf7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dcf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcf80: 0x24a5eea0  addiu       $a1, $a1, -0x1160
    ctx->pc = 0x3dcf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962848));
    // 0x3dcf84: 0x24c6ede0  addiu       $a2, $a2, -0x1220
    ctx->pc = 0x3dcf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962656));
    // 0x3dcf88: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x3dcf88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3dcf8c: 0xc040840  jal         func_102100
    ctx->pc = 0x3DCF8Cu;
    SET_GPR_U32(ctx, 31, 0x3DCF94u);
    ctx->pc = 0x3DCF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCF8Cu;
            // 0x3dcf90: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCF94u; }
        if (ctx->pc != 0x3DCF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCF94u; }
        if (ctx->pc != 0x3DCF94u) { return; }
    }
    ctx->pc = 0x3DCF94u;
label_3dcf94:
    // 0x3dcf94: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3dcf94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x3dcf98: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x3dcf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3dcf9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3dcf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3dcfa0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x3DCFA0u;
    SET_GPR_U32(ctx, 31, 0x3DCFA8u);
    ctx->pc = 0x3DCFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCFA0u;
            // 0x3dcfa4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCFA8u; }
        if (ctx->pc != 0x3DCFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCFA8u; }
        if (ctx->pc != 0x3DCFA8u) { return; }
    }
    ctx->pc = 0x3DCFA8u;
label_3dcfa8:
    // 0x3dcfa8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x3dcfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x3dcfac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dcfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcfb0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x3dcfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3dcfb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dcfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcfb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3dcfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3dcfbc: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3DCFBCu;
    SET_GPR_U32(ctx, 31, 0x3DCFC4u);
    ctx->pc = 0x3DCFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCFBCu;
            // 0x3dcfc0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCFC4u; }
        if (ctx->pc != 0x3DCFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCFC4u; }
        if (ctx->pc != 0x3DCFC4u) { return; }
    }
    ctx->pc = 0x3DCFC4u;
label_3dcfc4:
    // 0x3dcfc4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3dcfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3dcfc8: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x3dcfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3dcfcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dcfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcfd0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x3dcfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3dcfd4: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x3dcfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3dcfd8: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x3dcfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x3dcfdc: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3dcfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x3dcfe0: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x3dcfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x3dcfe4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3dcfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x3dcfe8: 0xc0f741c  jal         func_3DD070
    ctx->pc = 0x3DCFE8u;
    SET_GPR_U32(ctx, 31, 0x3DCFF0u);
    ctx->pc = 0x3DCFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCFE8u;
            // 0x3dcfec: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DD070u;
    if (runtime->hasFunction(0x3DD070u)) {
        auto targetFn = runtime->lookupFunction(0x3DD070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCFF0u; }
        if (ctx->pc != 0x3DCFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DD070_0x3dd070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCFF0u; }
        if (ctx->pc != 0x3DCFF0u) { return; }
    }
    ctx->pc = 0x3DCFF0u;
label_3dcff0:
    // 0x3dcff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dcff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dcff4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dcff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dcff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dcff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dcffc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCFFCu;
            // 0x3dd000: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DD004u;
    // 0x3dd004: 0x0  nop
    ctx->pc = 0x3dd004u;
    // NOP
    // 0x3dd008: 0x0  nop
    ctx->pc = 0x3dd008u;
    // NOP
    // 0x3dd00c: 0x0  nop
    ctx->pc = 0x3dd00cu;
    // NOP
}
