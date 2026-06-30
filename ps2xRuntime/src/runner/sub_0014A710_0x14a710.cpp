#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014A710
// Address: 0x14a710 - 0x14a840
void sub_0014A710_0x14a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A710_0x14a710");
#endif

    switch (ctx->pc) {
        case 0x14a754u: goto label_14a754;
        case 0x14a788u: goto label_14a788;
        case 0x14a7b0u: goto label_14a7b0;
        case 0x14a7dcu: goto label_14a7dc;
        case 0x14a7f8u: goto label_14a7f8;
        default: break;
    }

    ctx->pc = 0x14a710u;

    // 0x14a710: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14a710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14a714: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x14a714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x14a718: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14a718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14a71c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14a71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14a720: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x14a720u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a724: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14a724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14a728: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14a728u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a72c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14a72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14a730: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14a730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a734: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14a734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14a738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a73c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a740: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x14a740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x14a744: 0x18600032  blez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x14A744u;
    {
        const bool branch_taken_0x14a744 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14A748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A744u;
            // 0x14a748: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a744) {
            ctx->pc = 0x14A810u;
            goto label_14a810;
        }
    }
    ctx->pc = 0x14A74Cu;
    // 0x14a74c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14a74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a750: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14a750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14a754:
    // 0x14a754: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x14a754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x14a758: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14a758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14a75c: 0x919021  addu        $s2, $a0, $s1
    ctx->pc = 0x14a75cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x14a760: 0x86440004  lh          $a0, 0x4($s2)
    ctx->pc = 0x14a760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14a764: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x14A764u;
    {
        const bool branch_taken_0x14a764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14a764) {
            ctx->pc = 0x14A7F8u;
            goto label_14a7f8;
        }
    }
    ctx->pc = 0x14A76Cu;
    // 0x14a76c: 0x12c00012  beqz        $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x14A76Cu;
    {
        const bool branch_taken_0x14a76c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a76c) {
            ctx->pc = 0x14A7B8u;
            goto label_14a7b8;
        }
    }
    ctx->pc = 0x14A774u;
    // 0x14a774: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x14a774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x14a778: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x14a778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a77c: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x14a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x14a780: 0xc04cd60  jal         func_133580
    ctx->pc = 0x14A780u;
    SET_GPR_U32(ctx, 31, 0x14A788u);
    ctx->pc = 0x14A784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A780u;
            // 0x14a784: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A788u; }
        if (ctx->pc != 0x14A788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A788u; }
        if (ctx->pc != 0x14A788u) { return; }
    }
    ctx->pc = 0x14A788u;
label_14a788:
    // 0x14a788: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a78c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x14a78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x14a790: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14A790u;
    {
        const bool branch_taken_0x14a790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a790) {
            ctx->pc = 0x14A7F8u;
            goto label_14a7f8;
        }
    }
    ctx->pc = 0x14A798u;
    // 0x14a798: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x14a798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14a79c: 0x26460030  addiu       $a2, $s2, 0x30
    ctx->pc = 0x14a79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x14a7a0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x14a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x14a7a4: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x14a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x14a7a8: 0xc04cd60  jal         func_133580
    ctx->pc = 0x14A7A8u;
    SET_GPR_U32(ctx, 31, 0x14A7B0u);
    ctx->pc = 0x14A7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7A8u;
            // 0x14a7ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7B0u; }
        if (ctx->pc != 0x14A7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7B0u; }
        if (ctx->pc != 0x14A7B0u) { return; }
    }
    ctx->pc = 0x14A7B0u;
label_14a7b0:
    // 0x14a7b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14A7B0u;
    {
        const bool branch_taken_0x14a7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a7b0) {
            ctx->pc = 0x14A7F8u;
            goto label_14a7f8;
        }
    }
    ctx->pc = 0x14A7B8u;
label_14a7b8:
    // 0x14a7b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a7bc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x14a7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x14a7c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A7C0u;
    {
        const bool branch_taken_0x14a7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a7c0) {
            ctx->pc = 0x14A7E8u;
            goto label_14a7e8;
        }
    }
    ctx->pc = 0x14A7C8u;
    // 0x14a7c8: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x14a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x14a7cc: 0x26460030  addiu       $a2, $s2, 0x30
    ctx->pc = 0x14a7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x14a7d0: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x14a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x14a7d4: 0xc04cd60  jal         func_133580
    ctx->pc = 0x14A7D4u;
    SET_GPR_U32(ctx, 31, 0x14A7DCu);
    ctx->pc = 0x14A7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7D4u;
            // 0x14a7d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7DCu; }
        if (ctx->pc != 0x14A7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7DCu; }
        if (ctx->pc != 0x14A7DCu) { return; }
    }
    ctx->pc = 0x14A7DCu;
label_14a7dc:
    // 0x14a7dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14A7DCu;
    {
        const bool branch_taken_0x14a7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a7dc) {
            ctx->pc = 0x14A7F8u;
            goto label_14a7f8;
        }
    }
    ctx->pc = 0x14A7E4u;
    // 0x14a7e4: 0x0  nop
    ctx->pc = 0x14a7e4u;
    // NOP
label_14a7e8:
    // 0x14a7e8: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x14a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x14a7ec: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x14a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x14a7f0: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x14A7F0u;
    SET_GPR_U32(ctx, 31, 0x14A7F8u);
    ctx->pc = 0x14A7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7F0u;
            // 0x14a7f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7F8u; }
        if (ctx->pc != 0x14A7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7F8u; }
        if (ctx->pc != 0x14A7F8u) { return; }
    }
    ctx->pc = 0x14A7F8u;
label_14a7f8:
    // 0x14a7f8: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x14a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x14a7fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14a7fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14a800: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x14a800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x14a804: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x14a804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a808: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x14A808u;
    {
        const bool branch_taken_0x14a808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A808u;
            // 0x14a80c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a808) {
            ctx->pc = 0x14A754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14a754;
        }
    }
    ctx->pc = 0x14A810u;
label_14a810:
    // 0x14a810: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x14a810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14a814: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14a814u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14a818: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14a818u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14a81c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14a81cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a820: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14a820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14a824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a82c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a830: 0x3e00008  jr          $ra
    ctx->pc = 0x14A830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A830u;
            // 0x14a834: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A838u;
    // 0x14a838: 0x0  nop
    ctx->pc = 0x14a838u;
    // NOP
    // 0x14a83c: 0x0  nop
    ctx->pc = 0x14a83cu;
    // NOP
}
