#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186750
// Address: 0x186750 - 0x186870
void sub_00186750_0x186750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186750_0x186750");
#endif

    switch (ctx->pc) {
        case 0x1867b8u: goto label_1867b8;
        case 0x186800u: goto label_186800;
        case 0x186844u: goto label_186844;
        case 0x186850u: goto label_186850;
        case 0x186858u: goto label_186858;
        default: break;
    }

    ctx->pc = 0x186750u;

    // 0x186750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186754: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x186754u;
    {
        const bool branch_taken_0x186754 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186754u;
            // 0x186758: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186754) {
            ctx->pc = 0x186778u;
            goto label_186778;
        }
    }
    ctx->pc = 0x18675Cu;
    // 0x18675c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18675cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x186760: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x186764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186768: 0x24847d20  addiu       $a0, $a0, 0x7D20
    ctx->pc = 0x186768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32032));
    // 0x18676c: 0x24a57c90  addiu       $a1, $a1, 0x7C90
    ctx->pc = 0x18676cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
    // 0x186770: 0x80618a8  j           func_1862A0
    ctx->pc = 0x186770u;
    ctx->pc = 0x186774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186770u;
            // 0x186774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001862A0_0x1862a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x186778u;
label_186778:
    // 0x186778: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x186778u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18677c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18677Cu;
    {
        const bool branch_taken_0x18677c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18677c) {
            ctx->pc = 0x186780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18677Cu;
            // 0x186780: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1867A0u;
            goto label_1867a0;
        }
    }
    ctx->pc = 0x186784u;
    // 0x186784: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x186784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x186788: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x18678c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18678cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186790: 0x24847d30  addiu       $a0, $a0, 0x7D30
    ctx->pc = 0x186790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32048));
    // 0x186794: 0x24a57cc0  addiu       $a1, $a1, 0x7CC0
    ctx->pc = 0x186794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31936));
    // 0x186798: 0x80618a8  j           func_1862A0
    ctx->pc = 0x186798u;
    ctx->pc = 0x18679Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186798u;
            // 0x18679c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001862A0_0x1862a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1867A0u;
label_1867a0:
    // 0x1867a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1867a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867a4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1867a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1867a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1867a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1867ac: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1867ACu;
    {
        const bool branch_taken_0x1867ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1867B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1867ACu;
            // 0x1867b0: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867ac) {
            ctx->pc = 0x1867E0u;
            goto label_1867e0;
        }
    }
    ctx->pc = 0x1867B4u;
    // 0x1867b4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1867b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1867b8:
    // 0x1867b8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1867b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1867bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1867bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1867c0: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1867c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1867c4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1867c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1867c8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1867c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1867cc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1867ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1867d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1867d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1867d4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1867d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1867d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1867D8u;
    {
        const bool branch_taken_0x1867d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1867DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1867D8u;
            // 0x1867dc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867d8) {
            ctx->pc = 0x1867B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1867b8;
        }
    }
    ctx->pc = 0x1867E0u;
label_1867e0:
    // 0x1867e0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1867e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1867e4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1867e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1867e8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1867e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1867ec: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x1867ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1867f0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1867f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1867f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1867f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1867f8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1867f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1867fc: 0x0  nop
    ctx->pc = 0x1867fcu;
    // NOP
label_186800:
    // 0x186800: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x186800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x186804: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x186804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x186808: 0x0  nop
    ctx->pc = 0x186808u;
    // NOP
    // 0x18680c: 0x0  nop
    ctx->pc = 0x18680cu;
    // NOP
    // 0x186810: 0x0  nop
    ctx->pc = 0x186810u;
    // NOP
    // 0x186814: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x186814u;
    {
        const bool branch_taken_0x186814 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x186818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186814u;
            // 0x186818: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186814) {
            ctx->pc = 0x186800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_186800;
        }
    }
    ctx->pc = 0x18681Cu;
    // 0x18681c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18681cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186820: 0x3e00008  jr          $ra
    ctx->pc = 0x186820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186820u;
            // 0x186824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186828u;
    // 0x186828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18682c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186834: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x186838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18683c: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x18683Cu;
    SET_GPR_U32(ctx, 31, 0x186844u);
    ctx->pc = 0x186840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18683Cu;
            // 0x186840: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186844u; }
        if (ctx->pc != 0x186844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186844u; }
        if (ctx->pc != 0x186844u) { return; }
    }
    ctx->pc = 0x186844u;
label_186844:
    // 0x186844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186848: 0xc061a1c  jal         func_186870
    ctx->pc = 0x186848u;
    SET_GPR_U32(ctx, 31, 0x186850u);
    ctx->pc = 0x18684Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186848u;
            // 0x18684c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186870u;
    if (runtime->hasFunction(0x186870u)) {
        auto targetFn = runtime->lookupFunction(0x186870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186850u; }
        if (ctx->pc != 0x186850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186870_0x186870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186850u; }
        if (ctx->pc != 0x186850u) { return; }
    }
    ctx->pc = 0x186850u;
label_186850:
    // 0x186850: 0xc061282  jal         func_184A08
    ctx->pc = 0x186850u;
    SET_GPR_U32(ctx, 31, 0x186858u);
    ctx->pc = 0x186854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186850u;
            // 0x186854: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186858u; }
        if (ctx->pc != 0x186858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186858u; }
        if (ctx->pc != 0x186858u) { return; }
    }
    ctx->pc = 0x186858u;
label_186858:
    // 0x186858: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18685c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18685cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186864: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186868: 0x3e00008  jr          $ra
    ctx->pc = 0x186868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18686Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186868u;
            // 0x18686c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186870u;
}
