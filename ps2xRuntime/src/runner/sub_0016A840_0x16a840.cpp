#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A840
// Address: 0x16a840 - 0x16a908
void sub_0016A840_0x16a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A840_0x16a840");
#endif

    switch (ctx->pc) {
        case 0x16a86cu: goto label_16a86c;
        case 0x16a880u: goto label_16a880;
        case 0x16a8bcu: goto label_16a8bc;
        case 0x16a8d0u: goto label_16a8d0;
        case 0x16a8ecu: goto label_16a8ec;
        default: break;
    }

    ctx->pc = 0x16a840u;

    // 0x16a840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a848: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a84c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a850: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16a850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a854: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16a854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a858: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16a858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16a85c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a860: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a864: 0xc05a148  jal         func_168520
    ctx->pc = 0x16A864u;
    SET_GPR_U32(ctx, 31, 0x16A86Cu);
    ctx->pc = 0x16A868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A864u;
            // 0x16a868: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A86Cu; }
        if (ctx->pc != 0x16A86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A86Cu; }
        if (ctx->pc != 0x16A86Cu) { return; }
    }
    ctx->pc = 0x16A86Cu;
label_16a86c:
    // 0x16a86c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16a870: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A870u;
    {
        const bool branch_taken_0x16a870 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A870u;
            // 0x16a874: 0x24843928  addiu       $a0, $a0, 0x3928 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a870) {
            ctx->pc = 0x16A888u;
            goto label_16a888;
        }
    }
    ctx->pc = 0x16A878u;
    // 0x16a878: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16A878u;
    SET_GPR_U32(ctx, 31, 0x16A880u);
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A880u; }
        if (ctx->pc != 0x16A880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A880u; }
        if (ctx->pc != 0x16A880u) { return; }
    }
    ctx->pc = 0x16A880u;
label_16a880:
    // 0x16a880: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16A880u;
    {
        const bool branch_taken_0x16a880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A880u;
            // 0x16a884: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a880) {
            ctx->pc = 0x16A8F0u;
            goto label_16a8f0;
        }
    }
    ctx->pc = 0x16A888u;
label_16a888:
    // 0x16a888: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x16a888u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x16a88c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16a88cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a890: 0x10710016  beq         $v1, $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x16A890u;
    {
        const bool branch_taken_0x16a890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x16A894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A890u;
            // 0x16a894: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a890) {
            ctx->pc = 0x16A8ECu;
            goto label_16a8ec;
        }
    }
    ctx->pc = 0x16A898u;
    // 0x16a898: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A898u;
    {
        const bool branch_taken_0x16a898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a898) {
            ctx->pc = 0x16A89Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A898u;
            // 0x16a89c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A8A8u;
            goto label_16a8a8;
        }
    }
    ctx->pc = 0x16A8A0u;
    // 0x16a8a0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16A8A0u;
    {
        const bool branch_taken_0x16a8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8A0u;
            // 0x16a8a4: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8a0) {
            ctx->pc = 0x16A8ECu;
            goto label_16a8ec;
        }
    }
    ctx->pc = 0x16A8A8u;
label_16a8a8:
    // 0x16a8a8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A8A8u;
    {
        const bool branch_taken_0x16a8a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a8a8) {
            ctx->pc = 0x16A8C8u;
            goto label_16a8c8;
        }
    }
    ctx->pc = 0x16A8B0u;
    // 0x16a8b0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16a8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16a8b4: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16A8B4u;
    SET_GPR_U32(ctx, 31, 0x16A8BCu);
    ctx->pc = 0x16A8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8B4u;
            // 0x16a8b8: 0x24843950  addiu       $a0, $a0, 0x3950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8BCu; }
        if (ctx->pc != 0x16A8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8BCu; }
        if (ctx->pc != 0x16A8BCu) { return; }
    }
    ctx->pc = 0x16A8BCu;
label_16a8bc:
    // 0x16a8bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16A8BCu;
    {
        const bool branch_taken_0x16a8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8BCu;
            // 0x16a8c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8bc) {
            ctx->pc = 0x16A8F0u;
            goto label_16a8f0;
        }
    }
    ctx->pc = 0x16A8C4u;
    // 0x16a8c4: 0x0  nop
    ctx->pc = 0x16a8c4u;
    // NOP
label_16a8c8:
    // 0x16a8c8: 0xc05c370  jal         func_170DC0
    ctx->pc = 0x16A8C8u;
    SET_GPR_U32(ctx, 31, 0x16A8D0u);
    ctx->pc = 0x170DC0u;
    if (runtime->hasFunction(0x170DC0u)) {
        auto targetFn = runtime->lookupFunction(0x170DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8D0u; }
        if (ctx->pc != 0x16A8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170DC0_0x170dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8D0u; }
        if (ctx->pc != 0x16A8D0u) { return; }
    }
    ctx->pc = 0x16A8D0u;
label_16a8d0:
    // 0x16a8d0: 0xa2110003  sb          $s1, 0x3($s0)
    ctx->pc = 0x16a8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x16a8d4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16a8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16a8d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a8dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16a8dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8e0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16a8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a8e4: 0xc05a148  jal         func_168520
    ctx->pc = 0x16A8E4u;
    SET_GPR_U32(ctx, 31, 0x16A8ECu);
    ctx->pc = 0x16A8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8E4u;
            // 0x16a8e8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8ECu; }
        if (ctx->pc != 0x16A8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8ECu; }
        if (ctx->pc != 0x16A8ECu) { return; }
    }
    ctx->pc = 0x16A8ECu;
label_16a8ec:
    // 0x16a8ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16a8f0:
    // 0x16a8f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a8f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a8f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a8f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a8f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x16A8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8FCu;
            // 0x16a900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A904u;
    // 0x16a904: 0x0  nop
    ctx->pc = 0x16a904u;
    // NOP
}
