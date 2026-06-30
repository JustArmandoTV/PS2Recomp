#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D3050
// Address: 0x2d3050 - 0x2d3190
void sub_002D3050_0x2d3050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3050_0x2d3050");
#endif

    switch (ctx->pc) {
        case 0x2d30d4u: goto label_2d30d4;
        case 0x2d30ecu: goto label_2d30ec;
        case 0x2d3150u: goto label_2d3150;
        case 0x2d3168u: goto label_2d3168;
        default: break;
    }

    ctx->pc = 0x2d3050u;

    // 0x2d3050: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d3050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d3054: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d3054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d3058: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d3058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d305c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d305cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d3060: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d3060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d3064: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d3064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d3068: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d3068u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d306c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d306cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d3070: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d3070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3074: 0x1260003c  beqz        $s3, . + 4 + (0x3C << 2)
    ctx->pc = 0x2D3074u;
    {
        const bool branch_taken_0x2d3074 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3074u;
            // 0x2d3078: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3074) {
            ctx->pc = 0x2D3168u;
            goto label_2d3168;
        }
    }
    ctx->pc = 0x2D307Cu;
    // 0x2d307c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2d307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2d3080: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D3080u;
    {
        const bool branch_taken_0x2d3080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3080u;
            // 0x2d3084: 0x26660004  addiu       $a2, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3080) {
            ctx->pc = 0x2D3108u;
            goto label_2d3108;
        }
    }
    ctx->pc = 0x2D3088u;
    // 0x2d3088: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2d3088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d308c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D308Cu;
    {
        const bool branch_taken_0x2d308c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d308c) {
            ctx->pc = 0x2D3090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D308Cu;
            // 0x2d3090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D30A8u;
            goto label_2d30a8;
        }
    }
    ctx->pc = 0x2D3094u;
    // 0x2d3094: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2d3094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2d3098: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2d3098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2d309c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d30a0: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x2d30a0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2d30a4: 0x1010  mfhi        $v0
    ctx->pc = 0x2d30a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2d30a8:
    // 0x2d30a8: 0x8cd10010  lw          $s1, 0x10($a2)
    ctx->pc = 0x2d30a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2d30ac: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2d30acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d30b0: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2d30b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2d30b4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2d30b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d30b8: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x2d30b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d30bc: 0x2248021  addu        $s0, $s1, $a0
    ctx->pc = 0x2d30bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2d30c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d30c4: 0x222a821  addu        $s5, $s1, $v0
    ctx->pc = 0x2d30c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d30c8: 0x12b0000f  beq         $s5, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D30C8u;
    {
        const bool branch_taken_0x2d30c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 16));
        if (branch_taken_0x2d30c8) {
            ctx->pc = 0x2D3108u;
            goto label_2d3108;
        }
    }
    ctx->pc = 0x2D30D0u;
    // 0x2d30d0: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2d30d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2d30d4:
    // 0x2d30d4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D30D4u;
    {
        const bool branch_taken_0x2d30d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d30d4) {
            ctx->pc = 0x2D30F0u;
            goto label_2d30f0;
        }
    }
    ctx->pc = 0x2D30DCu;
    // 0x2d30dc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D30DCu;
    {
        const bool branch_taken_0x2d30dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d30dc) {
            ctx->pc = 0x2D30F0u;
            goto label_2d30f0;
        }
    }
    ctx->pc = 0x2D30E4u;
    // 0x2d30e4: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2D30E4u;
    SET_GPR_U32(ctx, 31, 0x2D30ECu);
    ctx->pc = 0x2D30E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D30E4u;
            // 0x2d30e8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D30ECu; }
        if (ctx->pc != 0x2D30ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D30ECu; }
        if (ctx->pc != 0x2D30ECu) { return; }
    }
    ctx->pc = 0x2D30ECu;
label_2d30ec:
    // 0x2d30ec: 0x0  nop
    ctx->pc = 0x2d30ecu;
    // NOP
label_2d30f0:
    // 0x2d30f0: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2d30f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2d30f4: 0x16b40002  bne         $s5, $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D30F4u;
    {
        const bool branch_taken_0x2d30f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        if (branch_taken_0x2d30f4) {
            ctx->pc = 0x2D3100u;
            goto label_2d3100;
        }
    }
    ctx->pc = 0x2D30FCu;
    // 0x2d30fc: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2d30fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d3100:
    // 0x2d3100: 0x56b0fff4  bnel        $s5, $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D3100u;
    {
        const bool branch_taken_0x2d3100 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 16));
        if (branch_taken_0x2d3100) {
            ctx->pc = 0x2D3104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3100u;
            // 0x2d3104: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D30D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d30d4;
        }
    }
    ctx->pc = 0x2D3108u;
label_2d3108:
    // 0x2d3108: 0x52600012  beql        $s3, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D3108u;
    {
        const bool branch_taken_0x2d3108 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3108) {
            ctx->pc = 0x2D310Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3108u;
            // 0x2d310c: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D3154u;
            goto label_2d3154;
        }
    }
    ctx->pc = 0x2D3110u;
    // 0x2d3110: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x2D3110u;
    {
        const bool branch_taken_0x2d3110 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3110) {
            ctx->pc = 0x2D3150u;
            goto label_2d3150;
        }
    }
    ctx->pc = 0x2D3118u;
    // 0x2d3118: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x2d3118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2d311c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D311Cu;
    {
        const bool branch_taken_0x2d311c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d311c) {
            ctx->pc = 0x2D3150u;
            goto label_2d3150;
        }
    }
    ctx->pc = 0x2D3124u;
    // 0x2d3124: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D3124u;
    {
        const bool branch_taken_0x2d3124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3124) {
            ctx->pc = 0x2D3150u;
            goto label_2d3150;
        }
    }
    ctx->pc = 0x2D312Cu;
    // 0x2d312c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D312Cu;
    {
        const bool branch_taken_0x2d312c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d312c) {
            ctx->pc = 0x2D3150u;
            goto label_2d3150;
        }
    }
    ctx->pc = 0x2D3134u;
    // 0x2d3134: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x2d3134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2d3138: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3138u;
    {
        const bool branch_taken_0x2d3138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3138) {
            ctx->pc = 0x2D3150u;
            goto label_2d3150;
        }
    }
    ctx->pc = 0x2D3140u;
    // 0x2d3140: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3140u;
    {
        const bool branch_taken_0x2d3140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3140) {
            ctx->pc = 0x2D3150u;
            goto label_2d3150;
        }
    }
    ctx->pc = 0x2D3148u;
    // 0x2d3148: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2D3148u;
    SET_GPR_U32(ctx, 31, 0x2D3150u);
    ctx->pc = 0x2D314Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3148u;
            // 0x2d314c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3150u; }
        if (ctx->pc != 0x2D3150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3150u; }
        if (ctx->pc != 0x2D3150u) { return; }
    }
    ctx->pc = 0x2D3150u;
label_2d3150:
    // 0x2d3150: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x2d3150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_2d3154:
    // 0x2d3154: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d3154u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d3158: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3158u;
    {
        const bool branch_taken_0x2d3158 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d3158) {
            ctx->pc = 0x2D315Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3158u;
            // 0x2d315c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D316Cu;
            goto label_2d316c;
        }
    }
    ctx->pc = 0x2D3160u;
    // 0x2d3160: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D3160u;
    SET_GPR_U32(ctx, 31, 0x2D3168u);
    ctx->pc = 0x2D3164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3160u;
            // 0x2d3164: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3168u; }
        if (ctx->pc != 0x2D3168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3168u; }
        if (ctx->pc != 0x2D3168u) { return; }
    }
    ctx->pc = 0x2D3168u;
label_2d3168:
    // 0x2d3168: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2d3168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d316c:
    // 0x2d316c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d316cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d3170: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d3170u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d3174: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d3174u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3178: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d3178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d317c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d317cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d3180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d3184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3188: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D318Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3188u;
            // 0x2d318c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3190u;
}
