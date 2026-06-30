#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2588
// Address: 0x1c2588 - 0x1c2690
void sub_001C2588_0x1c2588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2588_0x1c2588");
#endif

    switch (ctx->pc) {
        case 0x1c25d8u: goto label_1c25d8;
        case 0x1c25f8u: goto label_1c25f8;
        case 0x1c2628u: goto label_1c2628;
        case 0x1c263cu: goto label_1c263c;
        case 0x1c2660u: goto label_1c2660;
        default: break;
    }

    ctx->pc = 0x1c2588u;

    // 0x1c2588: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c2588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c258c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c258cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c2590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2594: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c2594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2598: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c2598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c259c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c259cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c25a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c25a4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1c25a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c25a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c25ac: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c25acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c25b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c25b4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1c25b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c25b8: 0x8c43a4d8  lw          $v1, -0x5B28($v0)
    ctx->pc = 0x1c25b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
    // 0x1c25bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c25bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c25c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c25c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c25c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c25c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c25c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c25cc: 0x8c710048  lw          $s1, 0x48($v1)
    ctx->pc = 0x1c25ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1c25d0: 0xc071180  jal         func_1C4600
    ctx->pc = 0x1C25D0u;
    SET_GPR_U32(ctx, 31, 0x1C25D8u);
    ctx->pc = 0x1C25D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C25D0u;
            // 0x1c25d4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4600u;
    if (runtime->hasFunction(0x1C4600u)) {
        auto targetFn = runtime->lookupFunction(0x1C4600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25D8u; }
        if (ctx->pc != 0x1C25D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4600_0x1c4600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25D8u; }
        if (ctx->pc != 0x1C25D8u) { return; }
    }
    ctx->pc = 0x1C25D8u;
label_1c25d8:
    // 0x1c25d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c25d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c25dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25e0: 0x2402ff31  addiu       $v0, $zero, -0xCF
    ctx->pc = 0x1c25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967089));
    // 0x1c25e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c25e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25e8: 0x14750020  bne         $v1, $s5, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C25E8u;
    {
        const bool branch_taken_0x1c25e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x1C25ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C25E8u;
            // 0x1c25ec: 0x63100b  movn        $v0, $v1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25e8) {
            ctx->pc = 0x1C266Cu;
            goto label_1c266c;
        }
    }
    ctx->pc = 0x1C25F0u;
    // 0x1c25f0: 0xc0718c2  jal         func_1C6308
    ctx->pc = 0x1C25F0u;
    SET_GPR_U32(ctx, 31, 0x1C25F8u);
    ctx->pc = 0x1C6308u;
    if (runtime->hasFunction(0x1C6308u)) {
        auto targetFn = runtime->lookupFunction(0x1C6308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25F8u; }
        if (ctx->pc != 0x1C25F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6308_0x1c6308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25F8u; }
        if (ctx->pc != 0x1C25F8u) { return; }
    }
    ctx->pc = 0x1C25F8u;
label_1c25f8:
    // 0x1c25f8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C25F8u;
    {
        const bool branch_taken_0x1c25f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C25FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C25F8u;
            // 0x1c25fc: 0x2402ff97  addiu       $v0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25f8) {
            ctx->pc = 0x1C266Cu;
            goto label_1c266c;
        }
    }
    ctx->pc = 0x1C2600u;
    // 0x1c2600: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c2600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c2604: 0x26460024  addiu       $a2, $s2, 0x24
    ctx->pc = 0x1c2604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x1c2608: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1c2608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c260c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c260cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2610: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c2610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c2614: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1c2614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c2618: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c2618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c261c: 0x8c500070  lw          $s0, 0x70($v0)
    ctx->pc = 0x1c261cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1c2620: 0xc072212  jal         func_1C8848
    ctx->pc = 0x1C2620u;
    SET_GPR_U32(ctx, 31, 0x1C2628u);
    ctx->pc = 0x1C2624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2620u;
            // 0x1c2624: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8848u;
    if (runtime->hasFunction(0x1C8848u)) {
        auto targetFn = runtime->lookupFunction(0x1C8848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2628u; }
        if (ctx->pc != 0x1C2628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8848_0x1c8848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2628u; }
        if (ctx->pc != 0x1C2628u) { return; }
    }
    ctx->pc = 0x1C2628u;
label_1c2628:
    // 0x1c2628: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c262c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c262cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2630: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c2630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2634: 0xc071180  jal         func_1C4600
    ctx->pc = 0x1C2634u;
    SET_GPR_U32(ctx, 31, 0x1C263Cu);
    ctx->pc = 0x1C2638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2634u;
            // 0x1c2638: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4600u;
    if (runtime->hasFunction(0x1C4600u)) {
        auto targetFn = runtime->lookupFunction(0x1C4600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C263Cu; }
        if (ctx->pc != 0x1C263Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4600_0x1c4600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C263Cu; }
        if (ctx->pc != 0x1C263Cu) { return; }
    }
    ctx->pc = 0x1C263Cu;
label_1c263c:
    // 0x1c263c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c263cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2640: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c2640u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2644: 0x10750004  beq         $v1, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2644u;
    {
        const bool branch_taken_0x1c2644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x1C2648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2644u;
            // 0x1c2648: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2644) {
            ctx->pc = 0x1C2658u;
            goto label_1c2658;
        }
    }
    ctx->pc = 0x1C264Cu;
    // 0x1c264c: 0x2402ff31  addiu       $v0, $zero, -0xCF
    ctx->pc = 0x1c264cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967089));
    // 0x1c2650: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2650u;
    {
        const bool branch_taken_0x1c2650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2650u;
            // 0x1c2654: 0x63100b  movn        $v0, $v1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2650) {
            ctx->pc = 0x1C266Cu;
            goto label_1c266c;
        }
    }
    ctx->pc = 0x1C2658u;
label_1c2658:
    // 0x1c2658: 0xc0718f2  jal         func_1C63C8
    ctx->pc = 0x1C2658u;
    SET_GPR_U32(ctx, 31, 0x1C2660u);
    ctx->pc = 0x1C63C8u;
    if (runtime->hasFunction(0x1C63C8u)) {
        auto targetFn = runtime->lookupFunction(0x1C63C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2660u; }
        if (ctx->pc != 0x1C2660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C63C8_0x1c63c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2660u; }
        if (ctx->pc != 0x1C2660u) { return; }
    }
    ctx->pc = 0x1C2660u;
label_1c2660:
    // 0x1c2660: 0x2403ff97  addiu       $v1, $zero, -0x69
    ctx->pc = 0x1c2660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
    // 0x1c2664: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1c2664u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1c2668: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c2668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c266c:
    // 0x1c266c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c266cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2670: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c2670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2674: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c2674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2678: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c2678u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c267c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c267cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2680: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c2680u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2684: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c2684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2688: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C268Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2688u;
            // 0x1c268c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2690u;
}
