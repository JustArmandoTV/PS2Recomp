#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003247F0
// Address: 0x3247f0 - 0x324900
void sub_003247F0_0x3247f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003247F0_0x3247f0");
#endif

    switch (ctx->pc) {
        case 0x324848u: goto label_324848;
        case 0x324858u: goto label_324858;
        case 0x324880u: goto label_324880;
        case 0x324890u: goto label_324890;
        case 0x3248bcu: goto label_3248bc;
        case 0x3248ccu: goto label_3248cc;
        default: break;
    }

    ctx->pc = 0x3247f0u;

    // 0x3247f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3247f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3247f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3247f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3247f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3247f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3247fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3247fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x324800: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x324800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x324804: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x324804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x324808: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x324808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32480c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32480cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x324810: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x324810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324814: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x324814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x324818: 0x10a30024  beq         $a1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x324818u;
    {
        const bool branch_taken_0x324818 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x32481Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324818u;
            // 0x32481c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324818) {
            ctx->pc = 0x3248ACu;
            goto label_3248ac;
        }
    }
    ctx->pc = 0x324820u;
    // 0x324820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x324820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324824: 0x50a30013  beql        $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x324824u;
    {
        const bool branch_taken_0x324824 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x324824) {
            ctx->pc = 0x324828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x324824u;
            // 0x324828: 0x3102ffff  andi        $v0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x324874u;
            goto label_324874;
        }
    }
    ctx->pc = 0x32482Cu;
    // 0x32482c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x32482Cu;
    {
        const bool branch_taken_0x32482c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32482c) {
            ctx->pc = 0x324830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32482Cu;
            // 0x324830: 0x3102ffff  andi        $v0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x32483Cu;
            goto label_32483c;
        }
    }
    ctx->pc = 0x324834u;
    // 0x324834: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x324834u;
    {
        const bool branch_taken_0x324834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324834) {
            ctx->pc = 0x3248E0u;
            goto label_3248e0;
        }
    }
    ctx->pc = 0x32483Cu;
label_32483c:
    // 0x32483c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32483cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324840: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x324840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x324844: 0xe2a021  addu        $s4, $a3, $v0
    ctx->pc = 0x324844u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_324848:
    // 0x324848: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x324848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x32484c: 0x26040614  addiu       $a0, $s0, 0x614
    ctx->pc = 0x32484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1556));
    // 0x324850: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x324850u;
    SET_GPR_U32(ctx, 31, 0x324858u);
    ctx->pc = 0x324854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324850u;
            // 0x324854: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324858u; }
        if (ctx->pc != 0x324858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324858u; }
        if (ctx->pc != 0x324858u) { return; }
    }
    ctx->pc = 0x324858u;
label_324858:
    // 0x324858: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x324858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32485c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x32485cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x324860: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x324860u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x324864: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x324864u;
    {
        const bool branch_taken_0x324864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x324868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324864u;
            // 0x324868: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324864) {
            ctx->pc = 0x324848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_324848;
        }
    }
    ctx->pc = 0x32486Cu;
    // 0x32486c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x32486Cu;
    {
        const bool branch_taken_0x32486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32486c) {
            ctx->pc = 0x3248E0u;
            goto label_3248e0;
        }
    }
    ctx->pc = 0x324874u;
label_324874:
    // 0x324874: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x324878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32487c: 0xe2a021  addu        $s4, $a3, $v0
    ctx->pc = 0x32487cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_324880:
    // 0x324880: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x324880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x324884: 0x26040630  addiu       $a0, $s0, 0x630
    ctx->pc = 0x324884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x324888: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x324888u;
    SET_GPR_U32(ctx, 31, 0x324890u);
    ctx->pc = 0x32488Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324888u;
            // 0x32488c: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324890u; }
        if (ctx->pc != 0x324890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324890u; }
        if (ctx->pc != 0x324890u) { return; }
    }
    ctx->pc = 0x324890u;
label_324890:
    // 0x324890: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x324890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x324894: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x324894u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x324898: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x324898u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x32489c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32489Cu;
    {
        const bool branch_taken_0x32489c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3248A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32489Cu;
            // 0x3248a0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32489c) {
            ctx->pc = 0x324880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_324880;
        }
    }
    ctx->pc = 0x3248A4u;
    // 0x3248a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3248A4u;
    {
        const bool branch_taken_0x3248a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3248a4) {
            ctx->pc = 0x3248E0u;
            goto label_3248e0;
        }
    }
    ctx->pc = 0x3248ACu;
label_3248ac:
    // 0x3248ac: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x3248acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3248b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3248b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3248b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3248b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3248b8: 0xe2a021  addu        $s4, $a3, $v0
    ctx->pc = 0x3248b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3248bc:
    // 0x3248bc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3248bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3248c0: 0x2604064c  addiu       $a0, $s0, 0x64C
    ctx->pc = 0x3248c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1612));
    // 0x3248c4: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x3248C4u;
    SET_GPR_U32(ctx, 31, 0x3248CCu);
    ctx->pc = 0x3248C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3248C4u;
            // 0x3248c8: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3248CCu; }
        if (ctx->pc != 0x3248CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3248CCu; }
        if (ctx->pc != 0x3248CCu) { return; }
    }
    ctx->pc = 0x3248CCu;
label_3248cc:
    // 0x3248cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3248ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3248d0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x3248d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x3248d4: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x3248d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3248d8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3248D8u;
    {
        const bool branch_taken_0x3248d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3248DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3248D8u;
            // 0x3248dc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3248d8) {
            ctx->pc = 0x3248BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3248bc;
        }
    }
    ctx->pc = 0x3248E0u;
label_3248e0:
    // 0x3248e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3248e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3248e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3248e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3248e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3248e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3248ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3248ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3248f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3248f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3248f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3248f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3248f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3248F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3248FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3248F8u;
            // 0x3248fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x324900u;
}
