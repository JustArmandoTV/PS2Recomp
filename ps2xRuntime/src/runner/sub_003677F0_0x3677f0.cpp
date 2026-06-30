#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003677F0
// Address: 0x3677f0 - 0x3678a0
void sub_003677F0_0x3677f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003677F0_0x3677f0");
#endif

    switch (ctx->pc) {
        case 0x36785cu: goto label_36785c;
        case 0x36786cu: goto label_36786c;
        case 0x367884u: goto label_367884;
        default: break;
    }

    ctx->pc = 0x3677f0u;

    // 0x3677f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3677f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3677f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3677f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3677f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3677f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3677fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3677fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x367800: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x367800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367804: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x367804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x367808: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x367808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36780c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x36780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x367810: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x367810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x367814: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x367814u;
    {
        const bool branch_taken_0x367814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367814u;
            // 0x367818: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367814) {
            ctx->pc = 0x367824u;
            goto label_367824;
        }
    }
    ctx->pc = 0x36781Cu;
    // 0x36781c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36781Cu;
    {
        const bool branch_taken_0x36781c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36781Cu;
            // 0x367820: 0x8c860194  lw          $a2, 0x194($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36781c) {
            ctx->pc = 0x367838u;
            goto label_367838;
        }
    }
    ctx->pc = 0x367824u;
label_367824:
    // 0x367824: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x367824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x367828: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x367828u;
    {
        const bool branch_taken_0x367828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x367828) {
            ctx->pc = 0x36782Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367828u;
            // 0x36782c: 0x30624800  andi        $v0, $v1, 0x4800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)18432);
        ctx->in_delay_slot = false;
            ctx->pc = 0x36783Cu;
            goto label_36783c;
        }
    }
    ctx->pc = 0x367830u;
    // 0x367830: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x367830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x367834: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x367834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_367838:
    // 0x367838: 0x30624800  andi        $v0, $v1, 0x4800
    ctx->pc = 0x367838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)18432);
label_36783c:
    // 0x36783c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x36783Cu;
    {
        const bool branch_taken_0x36783c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36783c) {
            ctx->pc = 0x367874u;
            goto label_367874;
        }
    }
    ctx->pc = 0x367844u;
    // 0x367844: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x367844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x367848: 0xc48c01cc  lwc1        $f12, 0x1CC($a0)
    ctx->pc = 0x367848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36784c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36784cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367850: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x367850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x367854: 0xc0528ec  jal         func_14A3B0
    ctx->pc = 0x367854u;
    SET_GPR_U32(ctx, 31, 0x36785Cu);
    ctx->pc = 0x367858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367854u;
            // 0x367858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36785Cu; }
        if (ctx->pc != 0x36785Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36785Cu; }
        if (ctx->pc != 0x36785Cu) { return; }
    }
    ctx->pc = 0x36785Cu;
label_36785c:
    // 0x36785c: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x36785cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x367860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367864: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x367864u;
    SET_GPR_U32(ctx, 31, 0x36786Cu);
    ctx->pc = 0x367868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367864u;
            // 0x367868: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36786Cu; }
        if (ctx->pc != 0x36786Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36786Cu; }
        if (ctx->pc != 0x36786Cu) { return; }
    }
    ctx->pc = 0x36786Cu;
label_36786c:
    // 0x36786c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36786Cu;
    {
        const bool branch_taken_0x36786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36786Cu;
            // 0x367870: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36786c) {
            ctx->pc = 0x367888u;
            goto label_367888;
        }
    }
    ctx->pc = 0x367874u;
label_367874:
    // 0x367874: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x367874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x367878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36787c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x36787Cu;
    SET_GPR_U32(ctx, 31, 0x367884u);
    ctx->pc = 0x367880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36787Cu;
            // 0x367880: 0x24a54c10  addiu       $a1, $a1, 0x4C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367884u; }
        if (ctx->pc != 0x367884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367884u; }
        if (ctx->pc != 0x367884u) { return; }
    }
    ctx->pc = 0x367884u;
label_367884:
    // 0x367884: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x367884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_367888:
    // 0x367888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x367888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36788c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36788cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x367890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367894: 0x3e00008  jr          $ra
    ctx->pc = 0x367894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367894u;
            // 0x367898: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36789Cu;
    // 0x36789c: 0x0  nop
    ctx->pc = 0x36789cu;
    // NOP
}
