#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015CF80
// Address: 0x15cf80 - 0x15d020
void sub_0015CF80_0x15cf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CF80_0x15cf80");
#endif

    switch (ctx->pc) {
        case 0x15cfe4u: goto label_15cfe4;
        case 0x15cff8u: goto label_15cff8;
        case 0x15d010u: goto label_15d010;
        default: break;
    }

    ctx->pc = 0x15cf80u;

    // 0x15cf80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15cf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15cf84: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15cf84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15cf88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15cf8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15cf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15cf90: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x15CF90u;
    {
        const bool branch_taken_0x15cf90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15CF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF90u;
            // 0x15cf94: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf90) {
            ctx->pc = 0x15D000u;
            goto label_15d000;
        }
    }
    ctx->pc = 0x15CF98u;
    // 0x15cf98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15cf9c: 0x50830013  beql        $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15CF9Cu;
    {
        const bool branch_taken_0x15cf9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15cf9c) {
            ctx->pc = 0x15CFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF9Cu;
            // 0x15cfa0: 0x8f848418  lw          $a0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15CFECu;
            goto label_15cfec;
        }
    }
    ctx->pc = 0x15CFA4u;
    // 0x15cfa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cfa8: 0x5083000c  beql        $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15CFA8u;
    {
        const bool branch_taken_0x15cfa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15cfa8) {
            ctx->pc = 0x15CFACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15CFA8u;
            // 0x15cfac: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15CFDCu;
            goto label_15cfdc;
        }
    }
    ctx->pc = 0x15CFB0u;
    // 0x15cfb0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15cfb4: 0x2463cd30  addiu       $v1, $v1, -0x32D0
    ctx->pc = 0x15cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954288));
    // 0x15cfb8: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x15cfb8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15cfbc: 0x78c90010  lq          $t1, 0x10($a2)
    ctx->pc = 0x15cfbcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x15cfc0: 0x78ca0020  lq          $t2, 0x20($a2)
    ctx->pc = 0x15cfc0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x15cfc4: 0x78cb0030  lq          $t3, 0x30($a2)
    ctx->pc = 0x15cfc4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x15cfc8: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x15cfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x15cfcc: 0x7c690010  sq          $t1, 0x10($v1)
    ctx->pc = 0x15cfccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 9));
    // 0x15cfd0: 0x7c6a0020  sq          $t2, 0x20($v1)
    ctx->pc = 0x15cfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 10));
    // 0x15cfd4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15CFD4u;
    {
        const bool branch_taken_0x15cfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CFD4u;
            // 0x15cfd8: 0x7c6b0030  sq          $t3, 0x30($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cfd4) {
            ctx->pc = 0x15D010u;
            goto label_15d010;
        }
    }
    ctx->pc = 0x15CFDCu;
label_15cfdc:
    // 0x15cfdc: 0xc057408  jal         func_15D020
    ctx->pc = 0x15CFDCu;
    SET_GPR_U32(ctx, 31, 0x15CFE4u);
    ctx->pc = 0x15D020u;
    if (runtime->hasFunction(0x15D020u)) {
        auto targetFn = runtime->lookupFunction(0x15D020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CFE4u; }
        if (ctx->pc != 0x15CFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D020_0x15d020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CFE4u; }
        if (ctx->pc != 0x15CFE4u) { return; }
    }
    ctx->pc = 0x15CFE4u;
label_15cfe4:
    // 0x15cfe4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15CFE4u;
    {
        const bool branch_taken_0x15cfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CFE4u;
            // 0x15cfe8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cfe4) {
            ctx->pc = 0x15D014u;
            goto label_15d014;
        }
    }
    ctx->pc = 0x15CFECu;
label_15cfec:
    // 0x15cfec: 0x240503f0  addiu       $a1, $zero, 0x3F0
    ctx->pc = 0x15cfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x15cff0: 0xc056dd0  jal         func_15B740
    ctx->pc = 0x15CFF0u;
    SET_GPR_U32(ctx, 31, 0x15CFF8u);
    ctx->pc = 0x15CFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CFF0u;
            // 0x15cff4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B740u;
    if (runtime->hasFunction(0x15B740u)) {
        auto targetFn = runtime->lookupFunction(0x15B740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CFF8u; }
        if (ctx->pc != 0x15CFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B740_0x15b740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CFF8u; }
        if (ctx->pc != 0x15CFF8u) { return; }
    }
    ctx->pc = 0x15CFF8u;
label_15cff8:
    // 0x15cff8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15CFF8u;
    {
        const bool branch_taken_0x15cff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cff8) {
            ctx->pc = 0x15D010u;
            goto label_15d010;
        }
    }
    ctx->pc = 0x15D000u;
label_15d000:
    // 0x15d000: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15d000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15d004: 0x240503f4  addiu       $a1, $zero, 0x3F4
    ctx->pc = 0x15d004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
    // 0x15d008: 0xc056dd0  jal         func_15B740
    ctx->pc = 0x15D008u;
    SET_GPR_U32(ctx, 31, 0x15D010u);
    ctx->pc = 0x15D00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D008u;
            // 0x15d00c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B740u;
    if (runtime->hasFunction(0x15B740u)) {
        auto targetFn = runtime->lookupFunction(0x15B740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D010u; }
        if (ctx->pc != 0x15D010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B740_0x15b740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D010u; }
        if (ctx->pc != 0x15D010u) { return; }
    }
    ctx->pc = 0x15D010u;
label_15d010:
    // 0x15d010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15d014:
    // 0x15d014: 0x3e00008  jr          $ra
    ctx->pc = 0x15D014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D014u;
            // 0x15d018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D01Cu;
    // 0x15d01c: 0x0  nop
    ctx->pc = 0x15d01cu;
    // NOP
}
