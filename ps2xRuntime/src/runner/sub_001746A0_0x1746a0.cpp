#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001746A0
// Address: 0x1746a0 - 0x174748
void sub_001746A0_0x1746a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001746A0_0x1746a0");
#endif

    switch (ctx->pc) {
        case 0x1746a0u: goto label_1746a0;
        case 0x1746a4u: goto label_1746a4;
        case 0x1746a8u: goto label_1746a8;
        case 0x1746acu: goto label_1746ac;
        case 0x1746b0u: goto label_1746b0;
        case 0x1746b4u: goto label_1746b4;
        case 0x1746b8u: goto label_1746b8;
        case 0x1746bcu: goto label_1746bc;
        case 0x1746c0u: goto label_1746c0;
        case 0x1746c4u: goto label_1746c4;
        case 0x1746c8u: goto label_1746c8;
        case 0x1746ccu: goto label_1746cc;
        case 0x1746d0u: goto label_1746d0;
        case 0x1746d4u: goto label_1746d4;
        case 0x1746d8u: goto label_1746d8;
        case 0x1746dcu: goto label_1746dc;
        case 0x1746e0u: goto label_1746e0;
        case 0x1746e4u: goto label_1746e4;
        case 0x1746e8u: goto label_1746e8;
        case 0x1746ecu: goto label_1746ec;
        case 0x1746f0u: goto label_1746f0;
        case 0x1746f4u: goto label_1746f4;
        case 0x1746f8u: goto label_1746f8;
        case 0x1746fcu: goto label_1746fc;
        case 0x174700u: goto label_174700;
        case 0x174704u: goto label_174704;
        case 0x174708u: goto label_174708;
        case 0x17470cu: goto label_17470c;
        case 0x174710u: goto label_174710;
        case 0x174714u: goto label_174714;
        case 0x174718u: goto label_174718;
        case 0x17471cu: goto label_17471c;
        case 0x174720u: goto label_174720;
        case 0x174724u: goto label_174724;
        case 0x174728u: goto label_174728;
        case 0x17472cu: goto label_17472c;
        case 0x174730u: goto label_174730;
        case 0x174734u: goto label_174734;
        case 0x174738u: goto label_174738;
        case 0x17473cu: goto label_17473c;
        case 0x174740u: goto label_174740;
        case 0x174744u: goto label_174744;
        default: break;
    }

    ctx->pc = 0x1746a0u;

label_1746a0:
    // 0x1746a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1746a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1746a4:
    // 0x1746a4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1746a8:
    if (ctx->pc == 0x1746A8u) {
        ctx->pc = 0x1746A8u;
            // 0x1746a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1746ACu;
        goto label_1746ac;
    }
    ctx->pc = 0x1746A4u;
    {
        const bool branch_taken_0x1746a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1746A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1746A4u;
            // 0x1746a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746a4) {
            ctx->pc = 0x1746C0u;
            goto label_1746c0;
        }
    }
    ctx->pc = 0x1746ACu;
label_1746ac:
    // 0x1746ac: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1746acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1746b0:
    // 0x1746b0: 0xc059f4e  jal         func_167D38
label_1746b4:
    if (ctx->pc == 0x1746B4u) {
        ctx->pc = 0x1746B4u;
            // 0x1746b4: 0x24844518  addiu       $a0, $a0, 0x4518 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17688));
        ctx->pc = 0x1746B8u;
        goto label_1746b8;
    }
    ctx->pc = 0x1746B0u;
    SET_GPR_U32(ctx, 31, 0x1746B8u);
    ctx->pc = 0x1746B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1746B0u;
            // 0x1746b4: 0x24844518  addiu       $a0, $a0, 0x4518 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1746B8u; }
        if (ctx->pc != 0x1746B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1746B8u; }
        if (ctx->pc != 0x1746B8u) { return; }
    }
    ctx->pc = 0x1746B8u;
label_1746b8:
    // 0x1746b8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1746bc:
    if (ctx->pc == 0x1746BCu) {
        ctx->pc = 0x1746BCu;
            // 0x1746bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1746C0u;
        goto label_1746c0;
    }
    ctx->pc = 0x1746B8u;
    {
        const bool branch_taken_0x1746b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1746BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1746B8u;
            // 0x1746bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746b8) {
            ctx->pc = 0x1746F4u;
            goto label_1746f4;
        }
    }
    ctx->pc = 0x1746C0u;
label_1746c0:
    // 0x1746c0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1746c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1746c4:
    // 0x1746c4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1746c8:
    if (ctx->pc == 0x1746C8u) {
        ctx->pc = 0x1746C8u;
            // 0x1746c8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1746CCu;
        goto label_1746cc;
    }
    ctx->pc = 0x1746C4u;
    {
        const bool branch_taken_0x1746c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1746C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1746C4u;
            // 0x1746c8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746c4) {
            ctx->pc = 0x1746F0u;
            goto label_1746f0;
        }
    }
    ctx->pc = 0x1746CCu;
label_1746cc:
    // 0x1746cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1746ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1746d0:
    // 0x1746d0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1746d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1746d4:
    // 0x1746d4: 0x40f809  jalr        $v0
label_1746d8:
    if (ctx->pc == 0x1746D8u) {
        ctx->pc = 0x1746D8u;
            // 0x1746d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1746DCu;
        goto label_1746dc;
    }
    ctx->pc = 0x1746D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1746DCu);
        ctx->pc = 0x1746D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1746D4u;
            // 0x1746d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1746DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1746DCu; }
            if (ctx->pc != 0x1746DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1746DCu;
label_1746dc:
    // 0x1746dc: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x1746dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_1746e0:
    // 0x1746e0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1746e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_1746e4:
    // 0x1746e4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1746e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1746e8:
    // 0x1746e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1746ec:
    if (ctx->pc == 0x1746ECu) {
        ctx->pc = 0x1746ECu;
            // 0x1746ec: 0x212c3  sra         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
        ctx->pc = 0x1746F0u;
        goto label_1746f0;
    }
    ctx->pc = 0x1746E8u;
    {
        const bool branch_taken_0x1746e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1746ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1746E8u;
            // 0x1746ec: 0x212c3  sra         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746e8) {
            ctx->pc = 0x1746F4u;
            goto label_1746f4;
        }
    }
    ctx->pc = 0x1746F0u;
label_1746f0:
    // 0x1746f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1746f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1746f4:
    // 0x1746f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1746f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1746f8:
    // 0x1746f8: 0x3e00008  jr          $ra
label_1746fc:
    if (ctx->pc == 0x1746FCu) {
        ctx->pc = 0x1746FCu;
            // 0x1746fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x174700u;
        goto label_174700;
    }
    ctx->pc = 0x1746F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1746FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1746F8u;
            // 0x1746fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174700u;
label_174700:
    // 0x174700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_174704:
    // 0x174704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_174708:
    // 0x174708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17470c:
    // 0x17470c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17470cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_174710:
    // 0x174710: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_174714:
    // 0x174714: 0xc0599de  jal         func_166778
label_174718:
    if (ctx->pc == 0x174718u) {
        ctx->pc = 0x174718u;
            // 0x174718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17471Cu;
        goto label_17471c;
    }
    ctx->pc = 0x174714u;
    SET_GPR_U32(ctx, 31, 0x17471Cu);
    ctx->pc = 0x174718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174714u;
            // 0x174718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17471Cu; }
        if (ctx->pc != 0x17471Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17471Cu; }
        if (ctx->pc != 0x17471Cu) { return; }
    }
    ctx->pc = 0x17471Cu;
label_17471c:
    // 0x17471c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17471cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174720:
    // 0x174720: 0xc05d1d2  jal         func_174748
label_174724:
    if (ctx->pc == 0x174724u) {
        ctx->pc = 0x174724u;
            // 0x174724: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174728u;
        goto label_174728;
    }
    ctx->pc = 0x174720u;
    SET_GPR_U32(ctx, 31, 0x174728u);
    ctx->pc = 0x174724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174720u;
            // 0x174724: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174748u;
    if (runtime->hasFunction(0x174748u)) {
        auto targetFn = runtime->lookupFunction(0x174748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174728u; }
        if (ctx->pc != 0x174728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174748_0x174748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174728u; }
        if (ctx->pc != 0x174728u) { return; }
    }
    ctx->pc = 0x174728u;
label_174728:
    // 0x174728: 0xc0599e0  jal         func_166780
label_17472c:
    if (ctx->pc == 0x17472Cu) {
        ctx->pc = 0x17472Cu;
            // 0x17472c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174730u;
        goto label_174730;
    }
    ctx->pc = 0x174728u;
    SET_GPR_U32(ctx, 31, 0x174730u);
    ctx->pc = 0x17472Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174728u;
            // 0x17472c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174730u; }
        if (ctx->pc != 0x174730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174730u; }
        if (ctx->pc != 0x174730u) { return; }
    }
    ctx->pc = 0x174730u;
label_174730:
    // 0x174730: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x174730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_174734:
    // 0x174734: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174738:
    // 0x174738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x174738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17473c:
    // 0x17473c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17473cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174740:
    // 0x174740: 0x3e00008  jr          $ra
label_174744:
    if (ctx->pc == 0x174744u) {
        ctx->pc = 0x174744u;
            // 0x174744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x174748u;
        goto label_fallthrough_0x174740;
    }
    ctx->pc = 0x174740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174740u;
            // 0x174744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x174740:
    ctx->pc = 0x174748u;
}
