#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B2C8
// Address: 0x17b2c8 - 0x17b3a8
void sub_0017B2C8_0x17b2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B2C8_0x17b2c8");
#endif

    switch (ctx->pc) {
        case 0x17b2dcu: goto label_17b2dc;
        case 0x17b2e4u: goto label_17b2e4;
        case 0x17b2f0u: goto label_17b2f0;
        case 0x17b308u: goto label_17b308;
        case 0x17b330u: goto label_17b330;
        case 0x17b338u: goto label_17b338;
        case 0x17b348u: goto label_17b348;
        case 0x17b358u: goto label_17b358;
        case 0x17b368u: goto label_17b368;
        case 0x17b37cu: goto label_17b37c;
        case 0x17b390u: goto label_17b390;
        default: break;
    }

    ctx->pc = 0x17b2c8u;

    // 0x17b2c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b2cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b2d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17b2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17b2d4: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17B2D4u;
    SET_GPR_U32(ctx, 31, 0x17B2DCu);
    ctx->pc = 0x17B2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B2D4u;
            // 0x17b2d8: 0x24042300  addiu       $a0, $zero, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B2DCu; }
        if (ctx->pc != 0x17B2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B2DCu; }
        if (ctx->pc != 0x17B2DCu) { return; }
    }
    ctx->pc = 0x17B2DCu;
label_17b2dc:
    // 0x17b2dc: 0xc047aee  jal         func_11EBB8
    ctx->pc = 0x17B2DCu;
    SET_GPR_U32(ctx, 31, 0x17B2E4u);
    ctx->pc = 0x17B2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B2DCu;
            // 0x17b2e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B2E4u; }
        if (ctx->pc != 0x17B2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B2E4u; }
        if (ctx->pc != 0x17B2E4u) { return; }
    }
    ctx->pc = 0x17B2E4u;
label_17b2e4:
    // 0x17b2e4: 0x24042301  addiu       $a0, $zero, 0x2301
    ctx->pc = 0x17b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8961));
    // 0x17b2e8: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17B2E8u;
    SET_GPR_U32(ctx, 31, 0x17B2F0u);
    ctx->pc = 0x17B2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B2E8u;
            // 0x17b2ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B2F0u; }
        if (ctx->pc != 0x17B2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B2F0u; }
        if (ctx->pc != 0x17B2F0u) { return; }
    }
    ctx->pc = 0x17B2F0u;
label_17b2f0:
    // 0x17b2f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17b2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b2f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17B2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B2FCu;
            // 0x17b300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B304u;
    // 0x17b304: 0x0  nop
    ctx->pc = 0x17b304u;
    // NOP
label_17b308:
    // 0x17b308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b30c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b310: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17b310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17b314: 0x24504388  addiu       $s0, $v0, 0x4388
    ctx->pc = 0x17b314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17288));
    // 0x17b318: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x17b318u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x17b31c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b320: 0x1464001b  bne         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x17B320u;
    {
        const bool branch_taken_0x17b320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x17B324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B320u;
            // 0x17b324: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b320) {
            ctx->pc = 0x17B390u;
            goto label_17b390;
        }
    }
    ctx->pc = 0x17B328u;
    // 0x17b328: 0xc061f74  jal         func_187DD0
    ctx->pc = 0x17B328u;
    SET_GPR_U32(ctx, 31, 0x17B330u);
    ctx->pc = 0x187DD0u;
    if (runtime->hasFunction(0x187DD0u)) {
        auto targetFn = runtime->lookupFunction(0x187DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B330u; }
        if (ctx->pc != 0x17B330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DD0_0x187dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B330u; }
        if (ctx->pc != 0x17B330u) { return; }
    }
    ctx->pc = 0x17B330u;
label_17b330:
    // 0x17b330: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17B330u;
    SET_GPR_U32(ctx, 31, 0x17B338u);
    ctx->pc = 0x17B334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B330u;
            // 0x17b334: 0x24042400  addiu       $a0, $zero, 0x2400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B338u; }
        if (ctx->pc != 0x17B338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B338u; }
        if (ctx->pc != 0x17B338u) { return; }
    }
    ctx->pc = 0x17B338u;
label_17b338:
    // 0x17b338: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17b338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b33c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x17b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x17b340: 0xc05ede0  jal         func_17B780
    ctx->pc = 0x17B340u;
    SET_GPR_U32(ctx, 31, 0x17B348u);
    ctx->pc = 0x17B344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B340u;
            // 0x17b344: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B780u;
    if (runtime->hasFunction(0x17B780u)) {
        auto targetFn = runtime->lookupFunction(0x17B780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B348u; }
        if (ctx->pc != 0x17B348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B780_0x17b780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B348u; }
        if (ctx->pc != 0x17B348u) { return; }
    }
    ctx->pc = 0x17B348u;
label_17b348:
    // 0x17b348: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B348u;
    {
        const bool branch_taken_0x17b348 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17B34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B348u;
            // 0x17b34c: 0x24042402  addiu       $a0, $zero, 0x2402 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9218));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b348) {
            ctx->pc = 0x17B360u;
            goto label_17b360;
        }
    }
    ctx->pc = 0x17B350u;
    // 0x17b350: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17B350u;
    SET_GPR_U32(ctx, 31, 0x17B358u);
    ctx->pc = 0x17B354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B350u;
            // 0x17b354: 0x24042401  addiu       $a0, $zero, 0x2401 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9217));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B358u; }
        if (ctx->pc != 0x17B358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B358u; }
        if (ctx->pc != 0x17B358u) { return; }
    }
    ctx->pc = 0x17B358u;
label_17b358:
    // 0x17b358: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17B358u;
    {
        const bool branch_taken_0x17b358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b358) {
            ctx->pc = 0x17B388u;
            goto label_17b388;
        }
    }
    ctx->pc = 0x17B360u;
label_17b360:
    // 0x17b360: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17B360u;
    SET_GPR_U32(ctx, 31, 0x17B368u);
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B368u; }
        if (ctx->pc != 0x17B368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B368u; }
        if (ctx->pc != 0x17B368u) { return; }
    }
    ctx->pc = 0x17B368u;
label_17b368:
    // 0x17b368: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17b368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b36c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B36Cu;
    {
        const bool branch_taken_0x17b36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b36c) {
            ctx->pc = 0x17B388u;
            goto label_17b388;
        }
    }
    ctx->pc = 0x17B374u;
    // 0x17b374: 0xc061f7a  jal         func_187DE8
    ctx->pc = 0x17B374u;
    SET_GPR_U32(ctx, 31, 0x17B37Cu);
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B37Cu; }
        if (ctx->pc != 0x17B37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DE8_0x187de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B37Cu; }
        if (ctx->pc != 0x17B37Cu) { return; }
    }
    ctx->pc = 0x17B37Cu;
label_17b37c:
    // 0x17b37c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17B37Cu;
    {
        const bool branch_taken_0x17b37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B37Cu;
            // 0x17b380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b37c) {
            ctx->pc = 0x17B394u;
            goto label_17b394;
        }
    }
    ctx->pc = 0x17B384u;
    // 0x17b384: 0x0  nop
    ctx->pc = 0x17b384u;
    // NOP
label_17b388:
    // 0x17b388: 0xc061f7a  jal         func_187DE8
    ctx->pc = 0x17B388u;
    SET_GPR_U32(ctx, 31, 0x17B390u);
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B390u; }
        if (ctx->pc != 0x17B390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DE8_0x187de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B390u; }
        if (ctx->pc != 0x17B390u) { return; }
    }
    ctx->pc = 0x17B390u;
label_17b390:
    // 0x17b390: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17b390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b394:
    // 0x17b394: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17b394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b398: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17b398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b39c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B39Cu;
            // 0x17b3a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B3A4u;
    // 0x17b3a4: 0x0  nop
    ctx->pc = 0x17b3a4u;
    // NOP
}
