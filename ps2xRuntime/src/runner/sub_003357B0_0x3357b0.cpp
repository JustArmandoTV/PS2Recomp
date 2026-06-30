#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003357B0
// Address: 0x3357b0 - 0x3358d0
void sub_003357B0_0x3357b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003357B0_0x3357b0");
#endif

    switch (ctx->pc) {
        case 0x335808u: goto label_335808;
        case 0x335810u: goto label_335810;
        case 0x335824u: goto label_335824;
        case 0x335884u: goto label_335884;
        default: break;
    }

    ctx->pc = 0x3357b0u;

    // 0x3357b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3357b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3357b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3357b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3357b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3357b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3357bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3357bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3357c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3357c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3357c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3357c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3357c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3357c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3357cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3357ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3357d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3357d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3357d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3357d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3357d8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3357d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3357dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3357dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3357e0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3357e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3357e4: 0x2c41ffff  sltiu       $at, $v0, -0x1
    ctx->pc = 0x3357e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x3357e8: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3357E8u;
    {
        const bool branch_taken_0x3357e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3357ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3357E8u;
            // 0x3357ec: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3357e8) {
            ctx->pc = 0x335810u;
            goto label_335810;
        }
    }
    ctx->pc = 0x3357F0u;
    // 0x3357f0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3357f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x3357f4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3357f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3357f8: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x3357f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x3357fc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x3357fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x335800: 0xc049e92  jal         func_127A48
    ctx->pc = 0x335800u;
    SET_GPR_U32(ctx, 31, 0x335808u);
    ctx->pc = 0x335804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335800u;
            // 0x335804: 0x24a5d350  addiu       $a1, $a1, -0x2CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335808u; }
        if (ctx->pc != 0x335808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335808u; }
        if (ctx->pc != 0x335808u) { return; }
    }
    ctx->pc = 0x335808u;
label_335808:
    // 0x335808: 0xc04981a  jal         func_126068
    ctx->pc = 0x335808u;
    SET_GPR_U32(ctx, 31, 0x335810u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335810u; }
        if (ctx->pc != 0x335810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335810u; }
        if (ctx->pc != 0x335810u) { return; }
    }
    ctx->pc = 0x335810u;
label_335810:
    // 0x335810: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x335810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x335814: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x335814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x335818: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x335818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x33581c: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x33581Cu;
    SET_GPR_U32(ctx, 31, 0x335824u);
    ctx->pc = 0x335820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33581Cu;
            // 0x335820: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335824u; }
        if (ctx->pc != 0x335824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335824u; }
        if (ctx->pc != 0x335824u) { return; }
    }
    ctx->pc = 0x335824u;
label_335824:
    // 0x335824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x335824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335828: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x335828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x33582c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x33582Cu;
    {
        const bool branch_taken_0x33582c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33582c) {
            ctx->pc = 0x335830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33582Cu;
            // 0x335830: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335848u;
            goto label_335848;
        }
    }
    ctx->pc = 0x335834u;
    // 0x335834: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x335834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x335838: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x335838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33583c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x33583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x335840: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x335840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x335844: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x335844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_335848:
    // 0x335848: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x335848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x33584c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x33584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x335850: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x335850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x335854: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x335854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x335858: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x335858u;
    {
        const bool branch_taken_0x335858 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x33585Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335858u;
            // 0x33585c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335858) {
            ctx->pc = 0x335868u;
            goto label_335868;
        }
    }
    ctx->pc = 0x335860u;
    // 0x335860: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x335860u;
    {
        const bool branch_taken_0x335860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335860u;
            // 0x335864: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335860) {
            ctx->pc = 0x33586Cu;
            goto label_33586c;
        }
    }
    ctx->pc = 0x335868u;
label_335868:
    // 0x335868: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x335868u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_33586c:
    // 0x33586c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x33586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x335870: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x335870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x335874: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x335874u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x335878: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x335878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x33587c: 0xc0583d8  jal         func_160F60
    ctx->pc = 0x33587Cu;
    SET_GPR_U32(ctx, 31, 0x335884u);
    ctx->pc = 0x335880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33587Cu;
            // 0x335880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160F60u;
    if (runtime->hasFunction(0x160F60u)) {
        auto targetFn = runtime->lookupFunction(0x160F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335884u; }
        if (ctx->pc != 0x335884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F60_0x160f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335884u; }
        if (ctx->pc != 0x335884u) { return; }
    }
    ctx->pc = 0x335884u;
label_335884:
    // 0x335884: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x335884u;
    {
        const bool branch_taken_0x335884 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x335884) {
            ctx->pc = 0x335888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335884u;
            // 0x335888: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335894u;
            goto label_335894;
        }
    }
    ctx->pc = 0x33588Cu;
    // 0x33588c: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x33588cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
    // 0x335890: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x335890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_335894:
    // 0x335894: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x335894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x335898: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x335898u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33589c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33589cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3358a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3358a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3358a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3358a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3358a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3358a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3358ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3358acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3358b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3358B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3358B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3358B0u;
            // 0x3358b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3358B8u;
    // 0x3358b8: 0x0  nop
    ctx->pc = 0x3358b8u;
    // NOP
    // 0x3358bc: 0x0  nop
    ctx->pc = 0x3358bcu;
    // NOP
    // 0x3358c0: 0x80cd2a0  j           func_334A80
    ctx->pc = 0x3358C0u;
    ctx->pc = 0x3358C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3358C0u;
            // 0x3358c4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334A80u;
    {
        auto targetFn = runtime->lookupFunction(0x334A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3358C8u;
    // 0x3358c8: 0x0  nop
    ctx->pc = 0x3358c8u;
    // NOP
    // 0x3358cc: 0x0  nop
    ctx->pc = 0x3358ccu;
    // NOP
}
