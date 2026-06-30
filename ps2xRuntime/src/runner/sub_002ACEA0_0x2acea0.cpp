#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ACEA0
// Address: 0x2acea0 - 0x2ad020
void sub_002ACEA0_0x2acea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACEA0_0x2acea0");
#endif

    switch (ctx->pc) {
        case 0x2acf20u: goto label_2acf20;
        case 0x2acf30u: goto label_2acf30;
        case 0x2acf54u: goto label_2acf54;
        case 0x2acf5cu: goto label_2acf5c;
        case 0x2acfa8u: goto label_2acfa8;
        case 0x2acfe4u: goto label_2acfe4;
        default: break;
    }

    ctx->pc = 0x2acea0u;

    // 0x2acea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2acea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2acea4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2acea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2acea8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2acea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2aceac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2aceacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2aceb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2aceb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aceb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aceb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2acebc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2acebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2acec0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACEC0u;
    {
        const bool branch_taken_0x2acec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACEC0u;
            // 0x2acec4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acec0) {
            ctx->pc = 0x2ACED0u;
            goto label_2aced0;
        }
    }
    ctx->pc = 0x2ACEC8u;
    // 0x2acec8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ACEC8u;
    {
        const bool branch_taken_0x2acec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACEC8u;
            // 0x2acecc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acec8) {
            ctx->pc = 0x2ACED4u;
            goto label_2aced4;
        }
    }
    ctx->pc = 0x2ACED0u;
label_2aced0:
    // 0x2aced0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2aced0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2aced4:
    // 0x2aced4: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x2aced4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2aced8: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x2aced8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2acedc: 0x5020000e  beql        $at, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2ACEDCu;
    {
        const bool branch_taken_0x2acedc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acedc) {
            ctx->pc = 0x2ACEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACEDCu;
            // 0x2acee0: 0x24e50001  addiu       $a1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACF18u;
            goto label_2acf18;
        }
    }
    ctx->pc = 0x2ACEE4u;
    // 0x2acee4: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x2acee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2acee8: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x2acee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x2aceec: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2aceecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2acef0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2acef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2acef4: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2acef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2acef8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2acef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2acefc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2acefcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2acf00: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x2acf00u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2acf04: 0x2010  mfhi        $a0
    ctx->pc = 0x2acf04u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2acf08: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2acf08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acf0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acf10: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2ACF10u;
    {
        const bool branch_taken_0x2acf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACF10u;
            // 0x2acf14: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf10) {
            ctx->pc = 0x2AD000u;
            goto label_2ad000;
        }
    }
    ctx->pc = 0x2ACF18u;
label_2acf18:
    // 0x2acf18: 0xc0ab498  jal         func_2AD260
    ctx->pc = 0x2ACF18u;
    SET_GPR_U32(ctx, 31, 0x2ACF20u);
    ctx->pc = 0x2ACF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACF18u;
            // 0x2acf1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD260u;
    if (runtime->hasFunction(0x2AD260u)) {
        auto targetFn = runtime->lookupFunction(0x2AD260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF20u; }
        if (ctx->pc != 0x2ACF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD260_0x2ad260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF20u; }
        if (ctx->pc != 0x2ACF20u) { return; }
    }
    ctx->pc = 0x2ACF20u;
label_2acf20:
    // 0x2acf20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2acf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acf24: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2acf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2acf28: 0xc040180  jal         func_100600
    ctx->pc = 0x2ACF28u;
    SET_GPR_U32(ctx, 31, 0x2ACF30u);
    ctx->pc = 0x2ACF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACF28u;
            // 0x2acf2c: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF30u; }
        if (ctx->pc != 0x2ACF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF30u; }
        if (ctx->pc != 0x2ACF30u) { return; }
    }
    ctx->pc = 0x2ACF30u;
label_2acf30:
    // 0x2acf30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2acf30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acf34: 0x5620000a  bnel        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2ACF34u;
    {
        const bool branch_taken_0x2acf34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acf34) {
            ctx->pc = 0x2ACF38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACF34u;
            // 0x2acf38: 0x8e660008  lw          $a2, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACF60u;
            goto label_2acf60;
        }
    }
    ctx->pc = 0x2ACF3Cu;
    // 0x2acf3c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2acf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2acf40: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2acf40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2acf44: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2acf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2acf48: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2acf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2acf4c: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2ACF4Cu;
    SET_GPR_U32(ctx, 31, 0x2ACF54u);
    ctx->pc = 0x2ACF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACF4Cu;
            // 0x2acf50: 0x24a5c870  addiu       $a1, $a1, -0x3790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF54u; }
        if (ctx->pc != 0x2ACF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF54u; }
        if (ctx->pc != 0x2ACF54u) { return; }
    }
    ctx->pc = 0x2ACF54u;
label_2acf54:
    // 0x2acf54: 0xc04981a  jal         func_126068
    ctx->pc = 0x2ACF54u;
    SET_GPR_U32(ctx, 31, 0x2ACF5Cu);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF5Cu; }
        if (ctx->pc != 0x2ACF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF5Cu; }
        if (ctx->pc != 0x2ACF5Cu) { return; }
    }
    ctx->pc = 0x2ACF5Cu;
label_2acf5c:
    // 0x2acf5c: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x2acf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2acf60:
    // 0x2acf60: 0x8e67000c  lw          $a3, 0xC($s3)
    ctx->pc = 0x2acf60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2acf64: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2acf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2acf68: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2acf68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2acf6c: 0xe34021  addu        $t0, $a3, $v1
    ctx->pc = 0x2acf6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2acf70: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2acf70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acf74: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ACF74u;
    {
        const bool branch_taken_0x2acf74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACF74u;
            // 0x2acf78: 0xe32821  addu        $a1, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf74) {
            ctx->pc = 0x2ACF94u;
            goto label_2acf94;
        }
    }
    ctx->pc = 0x2ACF7Cu;
    // 0x2acf7c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2acf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2acf80: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2acf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2acf84: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x2acf84u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2acf88: 0x1810  mfhi        $v1
    ctx->pc = 0x2acf88u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2acf8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACF8Cu;
    {
        const bool branch_taken_0x2acf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACF8Cu;
            // 0x2acf90: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf8c) {
            ctx->pc = 0x2ACF9Cu;
            goto label_2acf9c;
        }
    }
    ctx->pc = 0x2ACF94u;
label_2acf94:
    // 0x2acf94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2acf94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acf98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2acf98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2acf9c:
    // 0x2acf9c: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x2acf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2acfa0: 0x11040009  beq         $t0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ACFA0u;
    {
        const bool branch_taken_0x2acfa0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x2ACFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACFA0u;
            // 0x2acfa4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acfa0) {
            ctx->pc = 0x2ACFC8u;
            goto label_2acfc8;
        }
    }
    ctx->pc = 0x2ACFA8u;
label_2acfa8:
    // 0x2acfa8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2acfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2acfac: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2acfacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2acfb0: 0x15050003  bne         $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACFB0u;
    {
        const bool branch_taken_0x2acfb0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x2ACFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACFB0u;
            // 0x2acfb4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acfb0) {
            ctx->pc = 0x2ACFC0u;
            goto label_2acfc0;
        }
    }
    ctx->pc = 0x2ACFB8u;
    // 0x2acfb8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2acfb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acfbc: 0x0  nop
    ctx->pc = 0x2acfbcu;
    // NOP
label_2acfc0:
    // 0x2acfc0: 0x1504fff9  bne         $t0, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2ACFC0u;
    {
        const bool branch_taken_0x2acfc0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        ctx->pc = 0x2ACFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACFC0u;
            // 0x2acfc4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acfc0) {
            ctx->pc = 0x2ACFA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2acfa8;
        }
    }
    ctx->pc = 0x2ACFC8u;
label_2acfc8:
    // 0x2acfc8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2acfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2acfcc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2acfccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2acfd0: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x2acfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2acfd4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACFD4u;
    {
        const bool branch_taken_0x2acfd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acfd4) {
            ctx->pc = 0x2ACFD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACFD4u;
            // 0x2acfd8: 0xae71000c  sw          $s1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACFE8u;
            goto label_2acfe8;
        }
    }
    ctx->pc = 0x2ACFDCu;
    // 0x2acfdc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2ACFDCu;
    SET_GPR_U32(ctx, 31, 0x2ACFE4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACFE4u; }
        if (ctx->pc != 0x2ACFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACFE4u; }
        if (ctx->pc != 0x2ACFE4u) { return; }
    }
    ctx->pc = 0x2ACFE4u;
label_2acfe4:
    // 0x2acfe4: 0xae71000c  sw          $s1, 0xC($s3)
    ctx->pc = 0x2acfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 17));
label_2acfe8:
    // 0x2acfe8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2acfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2acfec: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2acfecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2acff0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x2acff0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x2acff4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2acff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2acff8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2acff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2acffc: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x2acffcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_2ad000:
    // 0x2ad000: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ad000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad004: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ad004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad008: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ad008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad00c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ad00cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad014: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD014u;
            // 0x2ad018: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD01Cu;
    // 0x2ad01c: 0x0  nop
    ctx->pc = 0x2ad01cu;
    // NOP
}
