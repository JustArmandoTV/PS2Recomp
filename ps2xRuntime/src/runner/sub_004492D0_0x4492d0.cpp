#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004492D0
// Address: 0x4492d0 - 0x4493e0
void sub_004492D0_0x4492d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004492D0_0x4492d0");
#endif

    switch (ctx->pc) {
        case 0x4492f4u: goto label_4492f4;
        case 0x449300u: goto label_449300;
        case 0x449330u: goto label_449330;
        case 0x44935cu: goto label_44935c;
        case 0x44939cu: goto label_44939c;
        case 0x4493c4u: goto label_4493c4;
        default: break;
    }

    ctx->pc = 0x4492d0u;

    // 0x4492d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4492d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4492d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4492d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4492d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4492d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4492dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4492dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4492e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4492e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4492e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4492e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4492e8: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x4492e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4492ec: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x4492ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4492f0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4492f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_4492f4:
    // 0x4492f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4492f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4492f8: 0xc1124f8  jal         func_4493E0
    ctx->pc = 0x4492F8u;
    SET_GPR_U32(ctx, 31, 0x449300u);
    ctx->pc = 0x4492FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4492F8u;
            // 0x4492fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4493E0u;
    if (runtime->hasFunction(0x4493E0u)) {
        auto targetFn = runtime->lookupFunction(0x4493E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449300u; }
        if (ctx->pc != 0x449300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004493E0_0x4493e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449300u; }
        if (ctx->pc != 0x449300u) { return; }
    }
    ctx->pc = 0x449300u;
label_449300:
    // 0x449300: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x449300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x449304: 0x26100220  addiu       $s0, $s0, 0x220
    ctx->pc = 0x449304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x449308: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x449308u;
    {
        const bool branch_taken_0x449308 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x449308) {
            ctx->pc = 0x4492F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4492f4;
        }
    }
    ctx->pc = 0x449310u;
    // 0x449310: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x449310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x449314: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x449314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x449318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x449318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44931c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44931cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x449320: 0x3e00008  jr          $ra
    ctx->pc = 0x449320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449320u;
            // 0x449324: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x449328u;
    // 0x449328: 0x0  nop
    ctx->pc = 0x449328u;
    // NOP
    // 0x44932c: 0x0  nop
    ctx->pc = 0x44932cu;
    // NOP
label_449330:
    // 0x449330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x449330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x449334: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x449334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449338: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x449338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44933c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44933cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x449340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x449340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x449344: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x449344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449348: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x449348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44934c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x44934Cu;
    {
        const bool branch_taken_0x44934c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x449350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44934Cu;
            // 0x449350: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44934c) {
            ctx->pc = 0x4493B8u;
            goto label_4493b8;
        }
    }
    ctx->pc = 0x449354u;
    // 0x449354: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x449354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x449358: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x449358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44935c:
    // 0x44935c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x449360: 0x54500012  bnel        $v0, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x449360u;
    {
        const bool branch_taken_0x449360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x449360) {
            ctx->pc = 0x449364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x449360u;
            // 0x449364: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4493ACu;
            goto label_4493ac;
        }
    }
    ctx->pc = 0x449368u;
    // 0x449368: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x449368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x44936c: 0xc2082b  sltu        $at, $a2, $v0
    ctx->pc = 0x44936cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x449370: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x449370u;
    {
        const bool branch_taken_0x449370 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x449370) {
            ctx->pc = 0x449374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x449370u;
            // 0x449374: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4493A0u;
            goto label_4493a0;
        }
    }
    ctx->pc = 0x449378u;
    // 0x449378: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x449378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x44937c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x44937cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x449380: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x449380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x449384: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x449384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x449388: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x449388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x44938c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44938cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x449390: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x449390u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x449394: 0xc04a508  jal         func_129420
    ctx->pc = 0x449394u;
    SET_GPR_U32(ctx, 31, 0x44939Cu);
    ctx->pc = 0x449398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449394u;
            // 0x449398: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44939Cu; }
        if (ctx->pc != 0x44939Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44939Cu; }
        if (ctx->pc != 0x44939Cu) { return; }
    }
    ctx->pc = 0x44939Cu;
label_44939c:
    // 0x44939c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x44939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4493a0:
    // 0x4493a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4493a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4493a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4493A4u;
    {
        const bool branch_taken_0x4493a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4493A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4493A4u;
            // 0x4493a8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4493a4) {
            ctx->pc = 0x4493B8u;
            goto label_4493b8;
        }
    }
    ctx->pc = 0x4493ACu;
label_4493ac:
    // 0x4493ac: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x4493acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4493b0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x4493B0u;
    {
        const bool branch_taken_0x4493b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4493B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4493B0u;
            // 0x4493b4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4493b0) {
            ctx->pc = 0x44935Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44935c;
        }
    }
    ctx->pc = 0x4493B8u;
label_4493b8:
    // 0x4493b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4493b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4493bc: 0xc1124f8  jal         func_4493E0
    ctx->pc = 0x4493BCu;
    SET_GPR_U32(ctx, 31, 0x4493C4u);
    ctx->pc = 0x4493C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4493BCu;
            // 0x4493c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4493E0u;
    if (runtime->hasFunction(0x4493E0u)) {
        auto targetFn = runtime->lookupFunction(0x4493E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4493C4u; }
        if (ctx->pc != 0x4493C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004493E0_0x4493e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4493C4u; }
        if (ctx->pc != 0x4493C4u) { return; }
    }
    ctx->pc = 0x4493C4u;
label_4493c4:
    // 0x4493c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4493c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4493c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4493c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4493cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4493ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4493d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4493D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4493D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4493D0u;
            // 0x4493d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4493D8u;
    // 0x4493d8: 0x0  nop
    ctx->pc = 0x4493d8u;
    // NOP
    // 0x4493dc: 0x0  nop
    ctx->pc = 0x4493dcu;
    // NOP
}
