#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180740
// Address: 0x180740 - 0x180818
void sub_00180740_0x180740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180740_0x180740");
#endif

    switch (ctx->pc) {
        case 0x180760u: goto label_180760;
        case 0x18078cu: goto label_18078c;
        case 0x1807d0u: goto label_1807d0;
        case 0x1807ecu: goto label_1807ec;
        case 0x1807f8u: goto label_1807f8;
        case 0x180800u: goto label_180800;
        default: break;
    }

    ctx->pc = 0x180740u;

    // 0x180740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180744: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x180744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18074c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x18074Cu;
    {
        const bool branch_taken_0x18074c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x180750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18074Cu;
            // 0x180750: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18074c) {
            ctx->pc = 0x180768u;
            goto label_180768;
        }
    }
    ctx->pc = 0x180754u;
    // 0x180754: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x180754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x180758: 0xc060334  jal         func_180CD0
    ctx->pc = 0x180758u;
    SET_GPR_U32(ctx, 31, 0x180760u);
    ctx->pc = 0x18075Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180758u;
            // 0x18075c: 0x248468d8  addiu       $a0, $a0, 0x68D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180760u; }
        if (ctx->pc != 0x180760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180760u; }
        if (ctx->pc != 0x180760u) { return; }
    }
    ctx->pc = 0x180760u;
label_180760:
    // 0x180760: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x180760u;
    {
        const bool branch_taken_0x180760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180760u;
            // 0x180764: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180760) {
            ctx->pc = 0x1807C4u;
            goto label_1807c4;
        }
    }
    ctx->pc = 0x180768u;
label_180768:
    // 0x180768: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x180768u;
    {
        const bool branch_taken_0x180768 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x18076Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180768u;
            // 0x18076c: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180768) {
            ctx->pc = 0x180784u;
            goto label_180784;
        }
    }
    ctx->pc = 0x180770u;
    // 0x180770: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x180770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x180774: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x180774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x180778: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x180778u;
    {
        const bool branch_taken_0x180778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180778) {
            ctx->pc = 0x18077Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180778u;
            // 0x18077c: 0x8cc50020  lw          $a1, 0x20($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180798u;
            goto label_180798;
        }
    }
    ctx->pc = 0x180780u;
    // 0x180780: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x180780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_180784:
    // 0x180784: 0xc060334  jal         func_180CD0
    ctx->pc = 0x180784u;
    SET_GPR_U32(ctx, 31, 0x18078Cu);
    ctx->pc = 0x180788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180784u;
            // 0x180788: 0x24846908  addiu       $a0, $a0, 0x6908 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18078Cu; }
        if (ctx->pc != 0x18078Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18078Cu; }
        if (ctx->pc != 0x18078Cu) { return; }
    }
    ctx->pc = 0x18078Cu;
label_18078c:
    // 0x18078c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18078Cu;
    {
        const bool branch_taken_0x18078c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18078Cu;
            // 0x180790: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18078c) {
            ctx->pc = 0x1807C4u;
            goto label_1807c4;
        }
    }
    ctx->pc = 0x180794u;
    // 0x180794: 0x0  nop
    ctx->pc = 0x180794u;
    // NOP
label_180798:
    // 0x180798: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x180798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18079c: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x18079cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1807a0: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1807a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1807a4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1807a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807a8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1807a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1807ac: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1807acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1807b0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1807b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1807b4: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x1807b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1807b8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1807b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1807bc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1807bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1807c0: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1807c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1807c4:
    // 0x1807c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1807c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1807c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1807C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1807CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1807C8u;
            // 0x1807cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1807D0u;
label_1807d0:
    // 0x1807d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1807d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1807d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1807d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1807d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1807d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1807dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1807e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1807e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1807e4: 0xc06031a  jal         func_180C68
    ctx->pc = 0x1807E4u;
    SET_GPR_U32(ctx, 31, 0x1807ECu);
    ctx->pc = 0x1807E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1807E4u;
            // 0x1807e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1807ECu; }
        if (ctx->pc != 0x1807ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1807ECu; }
        if (ctx->pc != 0x1807ECu) { return; }
    }
    ctx->pc = 0x1807ECu;
label_1807ec:
    // 0x1807ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1807ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807f0: 0xc060206  jal         func_180818
    ctx->pc = 0x1807F0u;
    SET_GPR_U32(ctx, 31, 0x1807F8u);
    ctx->pc = 0x1807F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1807F0u;
            // 0x1807f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180818u;
    if (runtime->hasFunction(0x180818u)) {
        auto targetFn = runtime->lookupFunction(0x180818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1807F8u; }
        if (ctx->pc != 0x1807F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180818_0x180818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1807F8u; }
        if (ctx->pc != 0x1807F8u) { return; }
    }
    ctx->pc = 0x1807F8u;
label_1807f8:
    // 0x1807f8: 0xc06031c  jal         func_180C70
    ctx->pc = 0x1807F8u;
    SET_GPR_U32(ctx, 31, 0x180800u);
    ctx->pc = 0x1807FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1807F8u;
            // 0x1807fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180800u; }
        if (ctx->pc != 0x180800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C70_0x180c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180800u; }
        if (ctx->pc != 0x180800u) { return; }
    }
    ctx->pc = 0x180800u;
label_180800:
    // 0x180800: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180804: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18080c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18080cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180810: 0x3e00008  jr          $ra
    ctx->pc = 0x180810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180810u;
            // 0x180814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180818u;
}
