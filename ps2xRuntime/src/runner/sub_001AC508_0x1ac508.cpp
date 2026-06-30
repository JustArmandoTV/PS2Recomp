#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC508
// Address: 0x1ac508 - 0x1ac5d8
void sub_001AC508_0x1ac508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC508_0x1ac508");
#endif

    switch (ctx->pc) {
        case 0x1ac530u: goto label_1ac530;
        case 0x1ac540u: goto label_1ac540;
        case 0x1ac550u: goto label_1ac550;
        case 0x1ac56cu: goto label_1ac56c;
        case 0x1ac580u: goto label_1ac580;
        case 0x1ac590u: goto label_1ac590;
        case 0x1ac5a8u: goto label_1ac5a8;
        case 0x1ac5b4u: goto label_1ac5b4;
        default: break;
    }

    ctx->pc = 0x1ac508u;

    // 0x1ac508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ac50c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ac50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ac510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ac510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ac514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac518: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ac518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ac51c: 0x26110d88  addiu       $s1, $s0, 0xD88
    ctx->pc = 0x1ac51cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1ac520: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ac520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ac524: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ac524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ac528: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1AC528u;
    SET_GPR_U32(ctx, 31, 0x1AC530u);
    ctx->pc = 0x1AC52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC528u;
            // 0x1ac52c: 0x8e122030  lw          $s2, 0x2030($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8240)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC530u; }
        if (ctx->pc != 0x1AC530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC530u; }
        if (ctx->pc != 0x1AC530u) { return; }
    }
    ctx->pc = 0x1AC530u;
label_1ac530:
    // 0x1ac530: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC530u;
    {
        const bool branch_taken_0x1ac530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC530u;
            // 0x1ac534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac530) {
            ctx->pc = 0x1AC548u;
            goto label_1ac548;
        }
    }
    ctx->pc = 0x1AC538u;
    // 0x1ac538: 0xc06b176  jal         func_1AC5D8
    ctx->pc = 0x1AC538u;
    SET_GPR_U32(ctx, 31, 0x1AC540u);
    ctx->pc = 0x1AC5D8u;
    if (runtime->hasFunction(0x1AC5D8u)) {
        auto targetFn = runtime->lookupFunction(0x1AC5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC540u; }
        if (ctx->pc != 0x1AC540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC5D8_0x1ac5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC540u; }
        if (ctx->pc != 0x1AC540u) { return; }
    }
    ctx->pc = 0x1AC540u;
label_1ac540:
    // 0x1ac540: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AC540u;
    {
        const bool branch_taken_0x1ac540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC540u;
            // 0x1ac544: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac540) {
            ctx->pc = 0x1AC55Cu;
            goto label_1ac55c;
        }
    }
    ctx->pc = 0x1AC548u;
label_1ac548:
    // 0x1ac548: 0xc06b18e  jal         func_1AC638
    ctx->pc = 0x1AC548u;
    SET_GPR_U32(ctx, 31, 0x1AC550u);
    ctx->pc = 0x1AC638u;
    if (runtime->hasFunction(0x1AC638u)) {
        auto targetFn = runtime->lookupFunction(0x1AC638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC550u; }
        if (ctx->pc != 0x1AC550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC638_0x1ac638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC550u; }
        if (ctx->pc != 0x1AC550u) { return; }
    }
    ctx->pc = 0x1AC550u;
label_1ac550:
    // 0x1ac550: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac554: 0x4a0001a  bltz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1AC554u;
    {
        const bool branch_taken_0x1ac554 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1AC558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC554u;
            // 0x1ac558: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac554) {
            ctx->pc = 0x1AC5C0u;
            goto label_1ac5c0;
        }
    }
    ctx->pc = 0x1AC55Cu;
label_1ac55c:
    // 0x1ac55c: 0x58a0000f  blezl       $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1AC55Cu;
    {
        const bool branch_taken_0x1ac55c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1ac55c) {
            ctx->pc = 0x1AC560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC55Cu;
            // 0x1ac560: 0x3c057fff  lui         $a1, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC59Cu;
            goto label_1ac59c;
        }
    }
    ctx->pc = 0x1AC564u;
    // 0x1ac564: 0xc069a44  jal         func_1A6910
    ctx->pc = 0x1AC564u;
    SET_GPR_U32(ctx, 31, 0x1AC56Cu);
    ctx->pc = 0x1AC568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC564u;
            // 0x1ac568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6910u;
    if (runtime->hasFunction(0x1A6910u)) {
        auto targetFn = runtime->lookupFunction(0x1A6910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC56Cu; }
        if (ctx->pc != 0x1AC56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6910_0x1a6910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC56Cu; }
        if (ctx->pc != 0x1AC56Cu) { return; }
    }
    ctx->pc = 0x1AC56Cu;
label_1ac56c:
    // 0x1ac56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac570: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1ac570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1ac574: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ac574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ac578: 0xc06c530  jal         func_1B14C0
    ctx->pc = 0x1AC578u;
    SET_GPR_U32(ctx, 31, 0x1AC580u);
    ctx->pc = 0x1AC57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC578u;
            // 0x1ac57c: 0xae420088  sw          $v0, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14C0u;
    if (runtime->hasFunction(0x1B14C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC580u; }
        if (ctx->pc != 0x1AC580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B14C0_0x1b14c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC580u; }
        if (ctx->pc != 0x1AC580u) { return; }
    }
    ctx->pc = 0x1AC580u;
label_1ac580:
    // 0x1ac580: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC580u;
    {
        const bool branch_taken_0x1ac580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC580u;
            // 0x1ac584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac580) {
            ctx->pc = 0x1AC598u;
            goto label_1ac598;
        }
    }
    ctx->pc = 0x1AC588u;
    // 0x1ac588: 0xc06c788  jal         func_1B1E20
    ctx->pc = 0x1AC588u;
    SET_GPR_U32(ctx, 31, 0x1AC590u);
    ctx->pc = 0x1B1E20u;
    if (runtime->hasFunction(0x1B1E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B1E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC590u; }
        if (ctx->pc != 0x1AC590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1E20_0x1b1e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC590u; }
        if (ctx->pc != 0x1AC590u) { return; }
    }
    ctx->pc = 0x1AC590u;
label_1ac590:
    // 0x1ac590: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ac590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ac594: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x1ac594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_1ac598:
    // 0x1ac598: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1ac598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
label_1ac59c:
    // 0x1ac59c: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x1ac59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x1ac5a0: 0xc06d9e2  jal         func_1B6788
    ctx->pc = 0x1AC5A0u;
    SET_GPR_U32(ctx, 31, 0x1AC5A8u);
    ctx->pc = 0x1AC5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC5A0u;
            // 0x1ac5a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6788u;
    if (runtime->hasFunction(0x1B6788u)) {
        auto targetFn = runtime->lookupFunction(0x1B6788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5A8u; }
        if (ctx->pc != 0x1AC5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6788_0x1b6788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5A8u; }
        if (ctx->pc != 0x1AC5A8u) { return; }
    }
    ctx->pc = 0x1AC5A8u;
label_1ac5a8:
    // 0x1ac5a8: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x1ac5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x1ac5ac: 0xc06d9e2  jal         func_1B6788
    ctx->pc = 0x1AC5ACu;
    SET_GPR_U32(ctx, 31, 0x1AC5B4u);
    ctx->pc = 0x1AC5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC5ACu;
            // 0x1ac5b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6788u;
    if (runtime->hasFunction(0x1B6788u)) {
        auto targetFn = runtime->lookupFunction(0x1B6788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5B4u; }
        if (ctx->pc != 0x1AC5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6788_0x1b6788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5B4u; }
        if (ctx->pc != 0x1AC5B4u) { return; }
    }
    ctx->pc = 0x1AC5B4u;
label_1ac5b4:
    // 0x1ac5b4: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1ac5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1ac5b8: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x1ac5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    // 0x1ac5bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ac5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac5c0:
    // 0x1ac5c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac5c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac5c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ac5c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac5c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ac5c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac5cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ac5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ac5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC5D0u;
            // 0x1ac5d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC5D8u;
}
