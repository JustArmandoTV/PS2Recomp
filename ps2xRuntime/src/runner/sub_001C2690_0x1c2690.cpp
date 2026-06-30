#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2690
// Address: 0x1c2690 - 0x1c2778
void sub_001C2690_0x1c2690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2690_0x1c2690");
#endif

    switch (ctx->pc) {
        case 0x1c26d0u: goto label_1c26d0;
        case 0x1c26e0u: goto label_1c26e0;
        case 0x1c26f4u: goto label_1c26f4;
        case 0x1c275cu: goto label_1c275c;
        default: break;
    }

    ctx->pc = 0x1c2690u;

    // 0x1c2690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2694: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c2694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c2698: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1c2698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x1c269c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c26a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c26a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c26a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c26a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c26a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c26acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c26b0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C26B0u;
    {
        const bool branch_taken_0x1c26b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C26B0u;
            // 0x1c26b4: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26b0) {
            ctx->pc = 0x1C26C0u;
            goto label_1c26c0;
        }
    }
    ctx->pc = 0x1C26B8u;
    // 0x1c26b8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C26B8u;
    {
        const bool branch_taken_0x1c26b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C26BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C26B8u;
            // 0x1c26bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26b8) {
            ctx->pc = 0x1C26C8u;
            goto label_1c26c8;
        }
    }
    ctx->pc = 0x1C26C0u;
label_1c26c0:
    // 0x1c26c0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1C26C0u;
    {
        const bool branch_taken_0x1c26c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C26C0u;
            // 0x1c26c4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26c0) {
            ctx->pc = 0x1C2760u;
            goto label_1c2760;
        }
    }
    ctx->pc = 0x1C26C8u;
label_1c26c8:
    // 0x1c26c8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C26C8u;
    SET_GPR_U32(ctx, 31, 0x1C26D0u);
    ctx->pc = 0x1C26CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C26C8u;
            // 0x1c26cc: 0x24060770  addiu       $a2, $zero, 0x770 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26D0u; }
        if (ctx->pc != 0x1C26D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26D0u; }
        if (ctx->pc != 0x1C26D0u) { return; }
    }
    ctx->pc = 0x1C26D0u;
label_1c26d0:
    // 0x1c26d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c26d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c26d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26d8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C26D8u;
    SET_GPR_U32(ctx, 31, 0x1C26E0u);
    ctx->pc = 0x1C26DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C26D8u;
            // 0x1c26dc: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26E0u; }
        if (ctx->pc != 0x1C26E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26E0u; }
        if (ctx->pc != 0x1C26E0u) { return; }
    }
    ctx->pc = 0x1C26E0u;
label_1c26e0:
    // 0x1c26e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c26e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c26e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c26e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c26ec: 0xc07128a  jal         func_1C4A28
    ctx->pc = 0x1C26ECu;
    SET_GPR_U32(ctx, 31, 0x1C26F4u);
    ctx->pc = 0x1C26F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C26ECu;
            // 0x1c26f0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4A28u;
    if (runtime->hasFunction(0x1C4A28u)) {
        auto targetFn = runtime->lookupFunction(0x1C4A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26F4u; }
        if (ctx->pc != 0x1C26F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4A28_0x1c4a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26F4u; }
        if (ctx->pc != 0x1C26F4u) { return; }
    }
    ctx->pc = 0x1C26F4u;
label_1c26f4:
    // 0x1c26f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c26f8: 0x240a0800  addiu       $t2, $zero, 0x800
    ctx->pc = 0x1c26f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1c26fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2700: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1c2700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c2704: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1c2704u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c2708: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x1c2708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x1c270c: 0x26070024  addiu       $a3, $s0, 0x24
    ctx->pc = 0x1c270cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1c2710: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x1c2710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x1c2714: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c2714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2718: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1c2718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x1c271c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c271cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2720: 0xa2230060  sb          $v1, 0x60($s1)
    ctx->pc = 0x1c2720u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c2724: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c2724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2728: 0xa2200061  sb          $zero, 0x61($s1)
    ctx->pc = 0x1c2728u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c272c: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x1c272cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x1c2730: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x1c2730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x1c2734: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c2734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c2738: 0xa2080006  sb          $t0, 0x6($s0)
    ctx->pc = 0x1c2738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 8));
    // 0x1c273c: 0xa2090007  sb          $t1, 0x7($s0)
    ctx->pc = 0x1c273cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 9));
    // 0x1c2740: 0xae0a0010  sw          $t2, 0x10($s0)
    ctx->pc = 0x1c2740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 10));
    // 0x1c2744: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x1c2744u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2748: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x1c2748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c274c: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x1c274cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2750: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x1c2750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x1c2754: 0xc07128a  jal         func_1C4A28
    ctx->pc = 0x1C2754u;
    SET_GPR_U32(ctx, 31, 0x1C275Cu);
    ctx->pc = 0x1C2758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2754u;
            // 0x1c2758: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4A28u;
    if (runtime->hasFunction(0x1C4A28u)) {
        auto targetFn = runtime->lookupFunction(0x1C4A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C275Cu; }
        if (ctx->pc != 0x1C275Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4A28_0x1c4a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C275Cu; }
        if (ctx->pc != 0x1C275Cu) { return; }
    }
    ctx->pc = 0x1C275Cu;
label_1c275c:
    // 0x1c275c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c275cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2760:
    // 0x1c2760: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c2760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2764: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c2764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c2768: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c2768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c276c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C276Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C276Cu;
            // 0x1c2770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2774u;
    // 0x1c2774: 0x0  nop
    ctx->pc = 0x1c2774u;
    // NOP
}
