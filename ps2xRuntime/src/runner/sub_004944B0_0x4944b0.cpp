#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004944B0
// Address: 0x4944b0 - 0x494580
void sub_004944B0_0x4944b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004944B0_0x4944b0");
#endif

    switch (ctx->pc) {
        case 0x4944f8u: goto label_4944f8;
        case 0x49450cu: goto label_49450c;
        default: break;
    }

    ctx->pc = 0x4944b0u;

    // 0x4944b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4944b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4944b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4944b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4944b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4944b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4944bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4944bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4944c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4944c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4944c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4944c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4944c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4944c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4944cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4944ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4944d0: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x4944d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x4944d4: 0x8c9000b4  lw          $s0, 0xB4($a0)
    ctx->pc = 0x4944d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x4944d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4944d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4944dc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4944dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4944e0: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x4944e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x4944e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4944e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4944e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4944e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4944ec: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4944ECu;
    {
        const bool branch_taken_0x4944ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4944F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4944ECu;
            // 0x4944f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4944ec) {
            ctx->pc = 0x494558u;
            goto label_494558;
        }
    }
    ctx->pc = 0x4944F4u;
    // 0x4944f4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x4944f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_4944f8:
    // 0x4944f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4944f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4944fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4944fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x494500: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x494500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x494504: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x494504u;
    SET_GPR_U32(ctx, 31, 0x49450Cu);
    ctx->pc = 0x494508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494504u;
            // 0x494508: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49450Cu; }
        if (ctx->pc != 0x49450Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49450Cu; }
        if (ctx->pc != 0x49450Cu) { return; }
    }
    ctx->pc = 0x49450Cu;
label_49450c:
    // 0x49450c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x49450Cu;
    {
        const bool branch_taken_0x49450c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49450c) {
            ctx->pc = 0x494510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49450Cu;
            // 0x494510: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494528u;
            goto label_494528;
        }
    }
    ctx->pc = 0x494514u;
    // 0x494514: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x494514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x494518: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x494518u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x49451c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x49451cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x494520: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x494520u;
    {
        const bool branch_taken_0x494520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494520u;
            // 0x494524: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494520) {
            ctx->pc = 0x494558u;
            goto label_494558;
        }
    }
    ctx->pc = 0x494528u;
label_494528:
    // 0x494528: 0x8e6300b0  lw          $v1, 0xB0($s3)
    ctx->pc = 0x494528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x49452c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x49452cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x494530: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x494530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x494534: 0x8e6200b4  lw          $v0, 0xB4($s3)
    ctx->pc = 0x494534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x494538: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x494538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49453c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x494540: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x494540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x494544: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x494544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x494548: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x494548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x49454c: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x49454Cu;
    {
        const bool branch_taken_0x49454c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49454c) {
            ctx->pc = 0x494550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49454Cu;
            // 0x494550: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4944F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4944f8;
        }
    }
    ctx->pc = 0x494554u;
    // 0x494554: 0x0  nop
    ctx->pc = 0x494554u;
    // NOP
label_494558:
    // 0x494558: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x494558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49455c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x49455cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x494560: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x494560u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x494564: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x494564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x494568: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x494568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49456c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49456cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494570: 0x3e00008  jr          $ra
    ctx->pc = 0x494570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494570u;
            // 0x494574: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x494578u;
    // 0x494578: 0x0  nop
    ctx->pc = 0x494578u;
    // NOP
    // 0x49457c: 0x0  nop
    ctx->pc = 0x49457cu;
    // NOP
}
