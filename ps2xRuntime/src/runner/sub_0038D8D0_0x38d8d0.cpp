#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038D8D0
// Address: 0x38d8d0 - 0x38d960
void sub_0038D8D0_0x38d8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D8D0_0x38d8d0");
#endif

    switch (ctx->pc) {
        case 0x38d8d0u: goto label_38d8d0;
        case 0x38d8d4u: goto label_38d8d4;
        case 0x38d8d8u: goto label_38d8d8;
        case 0x38d8dcu: goto label_38d8dc;
        case 0x38d8e0u: goto label_38d8e0;
        case 0x38d8e4u: goto label_38d8e4;
        case 0x38d8e8u: goto label_38d8e8;
        case 0x38d8ecu: goto label_38d8ec;
        case 0x38d8f0u: goto label_38d8f0;
        case 0x38d8f4u: goto label_38d8f4;
        case 0x38d8f8u: goto label_38d8f8;
        case 0x38d8fcu: goto label_38d8fc;
        case 0x38d900u: goto label_38d900;
        case 0x38d904u: goto label_38d904;
        case 0x38d908u: goto label_38d908;
        case 0x38d90cu: goto label_38d90c;
        case 0x38d910u: goto label_38d910;
        case 0x38d914u: goto label_38d914;
        case 0x38d918u: goto label_38d918;
        case 0x38d91cu: goto label_38d91c;
        case 0x38d920u: goto label_38d920;
        case 0x38d924u: goto label_38d924;
        case 0x38d928u: goto label_38d928;
        case 0x38d92cu: goto label_38d92c;
        case 0x38d930u: goto label_38d930;
        case 0x38d934u: goto label_38d934;
        case 0x38d938u: goto label_38d938;
        case 0x38d93cu: goto label_38d93c;
        case 0x38d940u: goto label_38d940;
        case 0x38d944u: goto label_38d944;
        case 0x38d948u: goto label_38d948;
        case 0x38d94cu: goto label_38d94c;
        case 0x38d950u: goto label_38d950;
        case 0x38d954u: goto label_38d954;
        case 0x38d958u: goto label_38d958;
        case 0x38d95cu: goto label_38d95c;
        default: break;
    }

    ctx->pc = 0x38d8d0u;

label_38d8d0:
    // 0x38d8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38d8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38d8d4:
    // 0x38d8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38d8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38d8d8:
    // 0x38d8d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38d8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38d8dc:
    // 0x38d8dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38d8dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38d8e0:
    // 0x38d8e0: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x38d8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_38d8e4:
    // 0x38d8e4: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
label_38d8e8:
    if (ctx->pc == 0x38D8E8u) {
        ctx->pc = 0x38D8E8u;
            // 0x38d8e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D8ECu;
        goto label_38d8ec;
    }
    ctx->pc = 0x38D8E4u;
    {
        const bool branch_taken_0x38d8e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d8e4) {
            ctx->pc = 0x38D8E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D8E4u;
            // 0x38d8e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D944u;
            goto label_38d944;
        }
    }
    ctx->pc = 0x38D8ECu;
label_38d8ec:
    // 0x38d8ec: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x38d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_38d8f0:
    // 0x38d8f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38d8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_38d8f4:
    // 0x38d8f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_38d8f8:
    if (ctx->pc == 0x38D8F8u) {
        ctx->pc = 0x38D8FCu;
        goto label_38d8fc;
    }
    ctx->pc = 0x38D8F4u;
    {
        const bool branch_taken_0x38d8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d8f4) {
            ctx->pc = 0x38D940u;
            goto label_38d940;
        }
    }
    ctx->pc = 0x38D8FCu;
label_38d8fc:
    // 0x38d8fc: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x38d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_38d900:
    // 0x38d900: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x38d900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_38d904:
    // 0x38d904: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_38d908:
    if (ctx->pc == 0x38D908u) {
        ctx->pc = 0x38D90Cu;
        goto label_38d90c;
    }
    ctx->pc = 0x38D904u;
    {
        const bool branch_taken_0x38d904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d904) {
            ctx->pc = 0x38D940u;
            goto label_38d940;
        }
    }
    ctx->pc = 0x38D90Cu;
label_38d90c:
    // 0x38d90c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x38d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_38d910:
    // 0x38d910: 0x1045000b  beq         $v0, $a1, . + 4 + (0xB << 2)
label_38d914:
    if (ctx->pc == 0x38D914u) {
        ctx->pc = 0x38D918u;
        goto label_38d918;
    }
    ctx->pc = 0x38D910u;
    {
        const bool branch_taken_0x38d910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x38d910) {
            ctx->pc = 0x38D940u;
            goto label_38d940;
        }
    }
    ctx->pc = 0x38D918u;
label_38d918:
    // 0x38d918: 0xc0e4a20  jal         func_392880
label_38d91c:
    if (ctx->pc == 0x38D91Cu) {
        ctx->pc = 0x38D920u;
        goto label_38d920;
    }
    ctx->pc = 0x38D918u;
    SET_GPR_U32(ctx, 31, 0x38D920u);
    ctx->pc = 0x392880u;
    if (runtime->hasFunction(0x392880u)) {
        auto targetFn = runtime->lookupFunction(0x392880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D920u; }
        if (ctx->pc != 0x38D920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00392880_0x392880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D920u; }
        if (ctx->pc != 0x38D920u) { return; }
    }
    ctx->pc = 0x38D920u;
label_38d920:
    // 0x38d920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38d920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d924:
    // 0x38d924: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x38d924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
label_38d928:
    // 0x38d928: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x38d928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38d92c:
    // 0x38d92c: 0x8f390084  lw          $t9, 0x84($t9)
    ctx->pc = 0x38d92cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 132)));
label_38d930:
    // 0x38d930: 0x320f809  jalr        $t9
label_38d934:
    if (ctx->pc == 0x38D934u) {
        ctx->pc = 0x38D934u;
            // 0x38d934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D938u;
        goto label_38d938;
    }
    ctx->pc = 0x38D930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D938u);
        ctx->pc = 0x38D934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D930u;
            // 0x38d934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D938u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D938u; }
            if (ctx->pc != 0x38D938u) { return; }
        }
        }
    }
    ctx->pc = 0x38D938u;
label_38d938:
    // 0x38d938: 0x10000002  b           . + 4 + (0x2 << 2)
label_38d93c:
    if (ctx->pc == 0x38D93Cu) {
        ctx->pc = 0x38D93Cu;
            // 0x38d93c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38D940u;
        goto label_38d940;
    }
    ctx->pc = 0x38D938u;
    {
        const bool branch_taken_0x38d938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D938u;
            // 0x38d93c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d938) {
            ctx->pc = 0x38D944u;
            goto label_38d944;
        }
    }
    ctx->pc = 0x38D940u;
label_38d940:
    // 0x38d940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38d940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38d944:
    // 0x38d944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38d944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38d948:
    // 0x38d948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38d948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38d94c:
    // 0x38d94c: 0x3e00008  jr          $ra
label_38d950:
    if (ctx->pc == 0x38D950u) {
        ctx->pc = 0x38D950u;
            // 0x38d950: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x38D954u;
        goto label_38d954;
    }
    ctx->pc = 0x38D94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D94Cu;
            // 0x38d950: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38D954u;
label_38d954:
    // 0x38d954: 0x0  nop
    ctx->pc = 0x38d954u;
    // NOP
label_38d958:
    // 0x38d958: 0x0  nop
    ctx->pc = 0x38d958u;
    // NOP
label_38d95c:
    // 0x38d95c: 0x0  nop
    ctx->pc = 0x38d95cu;
    // NOP
}
