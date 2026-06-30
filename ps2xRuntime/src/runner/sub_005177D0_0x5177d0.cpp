#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005177D0
// Address: 0x5177d0 - 0x517870
void sub_005177D0_0x5177d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005177D0_0x5177d0");
#endif

    switch (ctx->pc) {
        case 0x5177d0u: goto label_5177d0;
        case 0x5177d4u: goto label_5177d4;
        case 0x5177d8u: goto label_5177d8;
        case 0x5177dcu: goto label_5177dc;
        case 0x5177e0u: goto label_5177e0;
        case 0x5177e4u: goto label_5177e4;
        case 0x5177e8u: goto label_5177e8;
        case 0x5177ecu: goto label_5177ec;
        case 0x5177f0u: goto label_5177f0;
        case 0x5177f4u: goto label_5177f4;
        case 0x5177f8u: goto label_5177f8;
        case 0x5177fcu: goto label_5177fc;
        case 0x517800u: goto label_517800;
        case 0x517804u: goto label_517804;
        case 0x517808u: goto label_517808;
        case 0x51780cu: goto label_51780c;
        case 0x517810u: goto label_517810;
        case 0x517814u: goto label_517814;
        case 0x517818u: goto label_517818;
        case 0x51781cu: goto label_51781c;
        case 0x517820u: goto label_517820;
        case 0x517824u: goto label_517824;
        case 0x517828u: goto label_517828;
        case 0x51782cu: goto label_51782c;
        case 0x517830u: goto label_517830;
        case 0x517834u: goto label_517834;
        case 0x517838u: goto label_517838;
        case 0x51783cu: goto label_51783c;
        case 0x517840u: goto label_517840;
        case 0x517844u: goto label_517844;
        case 0x517848u: goto label_517848;
        case 0x51784cu: goto label_51784c;
        case 0x517850u: goto label_517850;
        case 0x517854u: goto label_517854;
        case 0x517858u: goto label_517858;
        case 0x51785cu: goto label_51785c;
        case 0x517860u: goto label_517860;
        case 0x517864u: goto label_517864;
        case 0x517868u: goto label_517868;
        case 0x51786cu: goto label_51786c;
        default: break;
    }

    ctx->pc = 0x5177d0u;

label_5177d0:
    // 0x5177d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5177d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5177d4:
    // 0x5177d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5177d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5177d8:
    // 0x5177d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5177d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5177dc:
    // 0x5177dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5177dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5177e0:
    // 0x5177e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x5177e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5177e4:
    // 0x5177e4: 0x2e010008  sltiu       $at, $s0, 0x8
    ctx->pc = 0x5177e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_5177e8:
    // 0x5177e8: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_5177ec:
    if (ctx->pc == 0x5177ECu) {
        ctx->pc = 0x5177ECu;
            // 0x5177ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5177F0u;
        goto label_5177f0;
    }
    ctx->pc = 0x5177E8u;
    {
        const bool branch_taken_0x5177e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5177ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5177E8u;
            // 0x5177ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5177e8) {
            ctx->pc = 0x517850u;
            goto label_517850;
        }
    }
    ctx->pc = 0x5177F0u;
label_5177f0:
    // 0x5177f0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x5177f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_5177f4:
    // 0x5177f4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x5177f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_5177f8:
    // 0x5177f8: 0x2484bfd0  addiu       $a0, $a0, -0x4030
    ctx->pc = 0x5177f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950864));
label_5177fc:
    // 0x5177fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5177fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_517800:
    // 0x517800: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x517800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_517804:
    // 0x517804: 0x600008  jr          $v1
label_517808:
    if (ctx->pc == 0x517808u) {
        ctx->pc = 0x51780Cu;
        goto label_51780c;
    }
    ctx->pc = 0x517804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x51780Cu: goto label_51780c;
            case 0x51783Cu: goto label_51783c;
            case 0x517850u: goto label_517850;
            default: break;
        }
        return;
    }
    ctx->pc = 0x51780Cu;
label_51780c:
    // 0x51780c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x51780cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_517810:
    // 0x517810: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x517810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_517814:
    // 0x517814: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x517814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_517818:
    // 0x517818: 0x320f809  jalr        $t9
label_51781c:
    if (ctx->pc == 0x51781Cu) {
        ctx->pc = 0x517820u;
        goto label_517820;
    }
    ctx->pc = 0x517818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x517820u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x517820u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x517820u; }
            if (ctx->pc != 0x517820u) { return; }
        }
        }
    }
    ctx->pc = 0x517820u;
label_517820:
    // 0x517820: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x517820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_517824:
    // 0x517824: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x517824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_517828:
    // 0x517828: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x517828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_51782c:
    // 0x51782c: 0x320f809  jalr        $t9
label_517830:
    if (ctx->pc == 0x517830u) {
        ctx->pc = 0x517834u;
        goto label_517834;
    }
    ctx->pc = 0x51782Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x517834u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x517834u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x517834u; }
            if (ctx->pc != 0x517834u) { return; }
        }
        }
    }
    ctx->pc = 0x517834u;
label_517834:
    // 0x517834: 0x10000007  b           . + 4 + (0x7 << 2)
label_517838:
    if (ctx->pc == 0x517838u) {
        ctx->pc = 0x517838u;
            // 0x517838: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x51783Cu;
        goto label_51783c;
    }
    ctx->pc = 0x517834u;
    {
        const bool branch_taken_0x517834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x517838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517834u;
            // 0x517838: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517834) {
            ctx->pc = 0x517854u;
            goto label_517854;
        }
    }
    ctx->pc = 0x51783Cu;
label_51783c:
    // 0x51783c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x51783cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_517840:
    // 0x517840: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x517840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_517844:
    // 0x517844: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x517844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_517848:
    // 0x517848: 0x320f809  jalr        $t9
label_51784c:
    if (ctx->pc == 0x51784Cu) {
        ctx->pc = 0x517850u;
        goto label_517850;
    }
    ctx->pc = 0x517848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x517850u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x517850u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x517850u; }
            if (ctx->pc != 0x517850u) { return; }
        }
        }
    }
    ctx->pc = 0x517850u;
label_517850:
    // 0x517850: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x517850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_517854:
    // 0x517854: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x517854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_517858:
    // 0x517858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x517858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51785c:
    // 0x51785c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51785cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_517860:
    // 0x517860: 0x3e00008  jr          $ra
label_517864:
    if (ctx->pc == 0x517864u) {
        ctx->pc = 0x517864u;
            // 0x517864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x517868u;
        goto label_517868;
    }
    ctx->pc = 0x517860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x517864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517860u;
            // 0x517864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x517868u;
label_517868:
    // 0x517868: 0x0  nop
    ctx->pc = 0x517868u;
    // NOP
label_51786c:
    // 0x51786c: 0x0  nop
    ctx->pc = 0x51786cu;
    // NOP
}
