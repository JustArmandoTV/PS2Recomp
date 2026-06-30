#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178488
// Address: 0x178488 - 0x178560
void sub_00178488_0x178488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178488_0x178488");
#endif

    switch (ctx->pc) {
        case 0x178488u: goto label_178488;
        case 0x17848cu: goto label_17848c;
        case 0x178490u: goto label_178490;
        case 0x178494u: goto label_178494;
        case 0x178498u: goto label_178498;
        case 0x17849cu: goto label_17849c;
        case 0x1784a0u: goto label_1784a0;
        case 0x1784a4u: goto label_1784a4;
        case 0x1784a8u: goto label_1784a8;
        case 0x1784acu: goto label_1784ac;
        case 0x1784b0u: goto label_1784b0;
        case 0x1784b4u: goto label_1784b4;
        case 0x1784b8u: goto label_1784b8;
        case 0x1784bcu: goto label_1784bc;
        case 0x1784c0u: goto label_1784c0;
        case 0x1784c4u: goto label_1784c4;
        case 0x1784c8u: goto label_1784c8;
        case 0x1784ccu: goto label_1784cc;
        case 0x1784d0u: goto label_1784d0;
        case 0x1784d4u: goto label_1784d4;
        case 0x1784d8u: goto label_1784d8;
        case 0x1784dcu: goto label_1784dc;
        case 0x1784e0u: goto label_1784e0;
        case 0x1784e4u: goto label_1784e4;
        case 0x1784e8u: goto label_1784e8;
        case 0x1784ecu: goto label_1784ec;
        case 0x1784f0u: goto label_1784f0;
        case 0x1784f4u: goto label_1784f4;
        case 0x1784f8u: goto label_1784f8;
        case 0x1784fcu: goto label_1784fc;
        case 0x178500u: goto label_178500;
        case 0x178504u: goto label_178504;
        case 0x178508u: goto label_178508;
        case 0x17850cu: goto label_17850c;
        case 0x178510u: goto label_178510;
        case 0x178514u: goto label_178514;
        case 0x178518u: goto label_178518;
        case 0x17851cu: goto label_17851c;
        case 0x178520u: goto label_178520;
        case 0x178524u: goto label_178524;
        case 0x178528u: goto label_178528;
        case 0x17852cu: goto label_17852c;
        case 0x178530u: goto label_178530;
        case 0x178534u: goto label_178534;
        case 0x178538u: goto label_178538;
        case 0x17853cu: goto label_17853c;
        case 0x178540u: goto label_178540;
        case 0x178544u: goto label_178544;
        case 0x178548u: goto label_178548;
        case 0x17854cu: goto label_17854c;
        case 0x178550u: goto label_178550;
        case 0x178554u: goto label_178554;
        case 0x178558u: goto label_178558;
        case 0x17855cu: goto label_17855c;
        default: break;
    }

    ctx->pc = 0x178488u;

label_178488:
    // 0x178488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17848c:
    // 0x17848c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_178490:
    // 0x178490: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x178490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_178494:
    // 0x178494: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_178498:
    // 0x178498: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17849c:
    // 0x17849c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1784a0:
    // 0x1784a0: 0xc05e17e  jal         func_1785F8
label_1784a4:
    if (ctx->pc == 0x1784A4u) {
        ctx->pc = 0x1784A4u;
            // 0x1784a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1784A8u;
        goto label_1784a8;
    }
    ctx->pc = 0x1784A0u;
    SET_GPR_U32(ctx, 31, 0x1784A8u);
    ctx->pc = 0x1784A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1784A0u;
            // 0x1784a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1785F8u;
    if (runtime->hasFunction(0x1785F8u)) {
        auto targetFn = runtime->lookupFunction(0x1785F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1784A8u; }
        if (ctx->pc != 0x1784A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001785F8_0x1785f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1784A8u; }
        if (ctx->pc != 0x1784A8u) { return; }
    }
    ctx->pc = 0x1784A8u;
label_1784a8:
    // 0x1784a8: 0x200f809  jalr        $s0
label_1784ac:
    if (ctx->pc == 0x1784ACu) {
        ctx->pc = 0x1784B0u;
        goto label_1784b0;
    }
    ctx->pc = 0x1784A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1784B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1784B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1784B0u; }
            if (ctx->pc != 0x1784B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1784B0u;
label_1784b0:
    // 0x1784b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1784b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1784b4:
    // 0x1784b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1784b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1784b8:
    // 0x1784b8: 0xc05e158  jal         func_178560
label_1784bc:
    if (ctx->pc == 0x1784BCu) {
        ctx->pc = 0x1784BCu;
            // 0x1784bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1784C0u;
        goto label_1784c0;
    }
    ctx->pc = 0x1784B8u;
    SET_GPR_U32(ctx, 31, 0x1784C0u);
    ctx->pc = 0x1784BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1784B8u;
            // 0x1784bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (runtime->hasFunction(0x178560u)) {
        auto targetFn = runtime->lookupFunction(0x178560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1784C0u; }
        if (ctx->pc != 0x1784C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178560_0x178560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1784C0u; }
        if (ctx->pc != 0x1784C0u) { return; }
    }
    ctx->pc = 0x1784C0u;
label_1784c0:
    // 0x1784c0: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_1784c4:
    if (ctx->pc == 0x1784C4u) {
        ctx->pc = 0x1784C4u;
            // 0x1784c4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1784C8u;
        goto label_1784c8;
    }
    ctx->pc = 0x1784C0u;
    {
        const bool branch_taken_0x1784c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1784C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1784C0u;
            // 0x1784c4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784c0) {
            ctx->pc = 0x178544u;
            goto label_178544;
        }
    }
    ctx->pc = 0x1784C8u;
label_1784c8:
    // 0x1784c8: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1784c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_1784cc:
    // 0x1784cc: 0x2483d3d8  addiu       $v1, $a0, -0x2C28
    ctx->pc = 0x1784ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955992));
label_1784d0:
    // 0x1784d0: 0x80620004  lb          $v0, 0x4($v1)
    ctx->pc = 0x1784d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_1784d4:
    // 0x1784d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1784d8:
    if (ctx->pc == 0x1784D8u) {
        ctx->pc = 0x1784D8u;
            // 0x1784d8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1784DCu;
        goto label_1784dc;
    }
    ctx->pc = 0x1784D4u;
    {
        const bool branch_taken_0x1784d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1784D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1784D4u;
            // 0x1784d8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784d4) {
            ctx->pc = 0x178504u;
            goto label_178504;
        }
    }
    ctx->pc = 0x1784DCu;
label_1784dc:
    // 0x1784dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1784dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1784e0:
    // 0x1784e0: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x1784e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_1784e4:
    // 0x1784e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1784e8:
    if (ctx->pc == 0x1784E8u) {
        ctx->pc = 0x1784E8u;
            // 0x1784e8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x1784ECu;
        goto label_1784ec;
    }
    ctx->pc = 0x1784E4u;
    {
        const bool branch_taken_0x1784e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1784E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1784E4u;
            // 0x1784e8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784e4) {
            ctx->pc = 0x178504u;
            goto label_178504;
        }
    }
    ctx->pc = 0x1784ECu;
label_1784ec:
    // 0x1784ec: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1784ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1784f0:
    // 0x1784f0: 0x0  nop
    ctx->pc = 0x1784f0u;
    // NOP
label_1784f4:
    // 0x1784f4: 0x0  nop
    ctx->pc = 0x1784f4u;
    // NOP
label_1784f8:
    // 0x1784f8: 0x0  nop
    ctx->pc = 0x1784f8u;
    // NOP
label_1784fc:
    // 0x1784fc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_178500:
    if (ctx->pc == 0x178500u) {
        ctx->pc = 0x178500u;
            // 0x178500: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x178504u;
        goto label_178504;
    }
    ctx->pc = 0x1784FCu;
    {
        const bool branch_taken_0x1784fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1784fc) {
            ctx->pc = 0x178500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1784FCu;
            // 0x178500: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1784E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1784e0;
        }
    }
    ctx->pc = 0x178504u;
label_178504:
    // 0x178504: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x178504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_178508:
    // 0x178508: 0x1203000e  beq         $s0, $v1, . + 4 + (0xE << 2)
label_17850c:
    if (ctx->pc == 0x17850Cu) {
        ctx->pc = 0x17850Cu;
            // 0x17850c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178510u;
        goto label_178510;
    }
    ctx->pc = 0x178508u;
    {
        const bool branch_taken_0x178508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x17850Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178508u;
            // 0x17850c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178508) {
            ctx->pc = 0x178544u;
            goto label_178544;
        }
    }
    ctx->pc = 0x178510u;
label_178510:
    // 0x178510: 0x2482d3d8  addiu       $v0, $a0, -0x2C28
    ctx->pc = 0x178510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955992));
label_178514:
    // 0x178514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178518:
    // 0x178518: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x178518u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_17851c:
    // 0x17851c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x17851cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_178520:
    // 0x178520: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x178520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_178524:
    // 0x178524: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x178524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_178528:
    // 0x178528: 0xc04b02e  jal         func_12C0B8
label_17852c:
    if (ctx->pc == 0x17852Cu) {
        ctx->pc = 0x17852Cu;
            // 0x17852c: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->pc = 0x178530u;
        goto label_178530;
    }
    ctx->pc = 0x178528u;
    SET_GPR_U32(ctx, 31, 0x178530u);
    ctx->pc = 0x17852Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178528u;
            // 0x17852c: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178530u; }
        if (ctx->pc != 0x178530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178530u; }
        if (ctx->pc != 0x178530u) { return; }
    }
    ctx->pc = 0x178530u;
label_178530:
    // 0x178530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178534:
    // 0x178534: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178538:
    // 0x178538: 0xc04a508  jal         func_129420
label_17853c:
    if (ctx->pc == 0x17853Cu) {
        ctx->pc = 0x17853Cu;
            // 0x17853c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x178540u;
        goto label_178540;
    }
    ctx->pc = 0x178538u;
    SET_GPR_U32(ctx, 31, 0x178540u);
    ctx->pc = 0x17853Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178538u;
            // 0x17853c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178540u; }
        if (ctx->pc != 0x178540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178540u; }
        if (ctx->pc != 0x178540u) { return; }
    }
    ctx->pc = 0x178540u;
label_178540:
    // 0x178540: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x178540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_178544:
    // 0x178544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178548:
    // 0x178548: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17854c:
    // 0x17854c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17854cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_178550:
    // 0x178550: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x178550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_178554:
    // 0x178554: 0x3e00008  jr          $ra
label_178558:
    if (ctx->pc == 0x178558u) {
        ctx->pc = 0x178558u;
            // 0x178558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17855Cu;
        goto label_17855c;
    }
    ctx->pc = 0x178554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178554u;
            // 0x178558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17855Cu;
label_17855c:
    // 0x17855c: 0x0  nop
    ctx->pc = 0x17855cu;
    // NOP
}
