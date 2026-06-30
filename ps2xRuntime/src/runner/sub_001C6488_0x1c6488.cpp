#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6488
// Address: 0x1c6488 - 0x1c65f0
void sub_001C6488_0x1c6488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6488_0x1c6488");
#endif

    switch (ctx->pc) {
        case 0x1c64e0u: goto label_1c64e0;
        case 0x1c6500u: goto label_1c6500;
        case 0x1c6510u: goto label_1c6510;
        case 0x1c6520u: goto label_1c6520;
        case 0x1c6578u: goto label_1c6578;
        default: break;
    }

    ctx->pc = 0x1c6488u;

    // 0x1c6488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c648c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6490: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6494: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c6494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c649c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1c649cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64a0: 0x14a20023  bne         $a1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C64A0u;
    {
        const bool branch_taken_0x1c64a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C64A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64A0u;
            // 0x1c64a4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64a0) {
            ctx->pc = 0x1C6530u;
            goto label_1c6530;
        }
    }
    ctx->pc = 0x1C64A8u;
    // 0x1c64a8: 0x2d020006  sltiu       $v0, $t0, 0x6
    ctx->pc = 0x1c64a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c64ac: 0xdcd00000  ld          $s0, 0x0($a2)
    ctx->pc = 0x1c64acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c64b0: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1C64B0u;
    {
        const bool branch_taken_0x1c64b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C64B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64B0u;
            // 0x1c64b4: 0xde240000  ld          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64b0) {
            ctx->pc = 0x1C65C8u;
            goto label_1c65c8;
        }
    }
    ctx->pc = 0x1C64B8u;
    // 0x1c64b8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1c64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1c64bc: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1c64bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1c64c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c64c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c64c4: 0x8c63bfb0  lw          $v1, -0x4050($v1)
    ctx->pc = 0x1c64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950832)));
    // 0x1c64c8: 0x600008  jr          $v1
    ctx->pc = 0x1C64C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C64D0u: goto label_1c64d0;
            case 0x1C64E8u: goto label_1c64e8;
            case 0x1C64F0u: goto label_1c64f0;
            case 0x1C64F8u: goto label_1c64f8;
            case 0x1C6508u: goto label_1c6508;
            case 0x1C6518u: goto label_1c6518;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C64D0u;
label_1c64d0:
    // 0x1c64d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c64d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c64d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64d8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C64D8u;
    SET_GPR_U32(ctx, 31, 0x1C64E0u);
    ctx->pc = 0x1C64DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64D8u;
            // 0x1c64dc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64E0u; }
        if (ctx->pc != 0x1C64E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64E0u; }
        if (ctx->pc != 0x1C64E0u) { return; }
    }
    ctx->pc = 0x1C64E0u;
label_1c64e0:
    // 0x1c64e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C64E0u;
    {
        const bool branch_taken_0x1c64e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C64E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64E0u;
            // 0x1c64e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64e0) {
            ctx->pc = 0x1C6524u;
            goto label_1c6524;
        }
    }
    ctx->pc = 0x1C64E8u;
label_1c64e8:
    // 0x1c64e8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C64E8u;
    {
        const bool branch_taken_0x1c64e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C64ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64E8u;
            // 0x1c64ec: 0x90202d  daddu       $a0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64e8) {
            ctx->pc = 0x1C6524u;
            goto label_1c6524;
        }
    }
    ctx->pc = 0x1C64F0u;
label_1c64f0:
    // 0x1c64f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C64F0u;
    {
        const bool branch_taken_0x1c64f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C64F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64F0u;
            // 0x1c64f4: 0x90202f  dsubu       $a0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64f0) {
            ctx->pc = 0x1C6524u;
            goto label_1c6524;
        }
    }
    ctx->pc = 0x1C64F8u;
label_1c64f8:
    // 0x1c64f8: 0xc048ce6  jal         func_123398
    ctx->pc = 0x1C64F8u;
    SET_GPR_U32(ctx, 31, 0x1C6500u);
    ctx->pc = 0x1C64FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64F8u;
            // 0x1c64fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6500u; }
        if (ctx->pc != 0x1C6500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6500u; }
        if (ctx->pc != 0x1C6500u) { return; }
    }
    ctx->pc = 0x1C6500u;
label_1c6500:
    // 0x1c6500: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6500u;
    {
        const bool branch_taken_0x1c6500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6500u;
            // 0x1c6504: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6500) {
            ctx->pc = 0x1C6524u;
            goto label_1c6524;
        }
    }
    ctx->pc = 0x1C6508u;
label_1c6508:
    // 0x1c6508: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1C6508u;
    SET_GPR_U32(ctx, 31, 0x1C6510u);
    ctx->pc = 0x1C650Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6508u;
            // 0x1c650c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6510u; }
        if (ctx->pc != 0x1C6510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6510u; }
        if (ctx->pc != 0x1C6510u) { return; }
    }
    ctx->pc = 0x1C6510u;
label_1c6510:
    // 0x1c6510: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6510u;
    {
        const bool branch_taken_0x1c6510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6510u;
            // 0x1c6514: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6510) {
            ctx->pc = 0x1C6524u;
            goto label_1c6524;
        }
    }
    ctx->pc = 0x1C6518u;
label_1c6518:
    // 0x1c6518: 0xc048fbc  jal         func_123EF0
    ctx->pc = 0x1C6518u;
    SET_GPR_U32(ctx, 31, 0x1C6520u);
    ctx->pc = 0x1C651Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6518u;
            // 0x1c651c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EF0u;
    if (runtime->hasFunction(0x123EF0u)) {
        auto targetFn = runtime->lookupFunction(0x123EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6520u; }
        if (ctx->pc != 0x1C6520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123EF0_0x123ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6520u; }
        if (ctx->pc != 0x1C6520u) { return; }
    }
    ctx->pc = 0x1C6520u;
label_1c6520:
    // 0x1c6520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6524:
    // 0x1c6524: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1C6524u;
    {
        const bool branch_taken_0x1c6524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6524u;
            // 0x1c6528: 0xfe240000  sd          $a0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6524) {
            ctx->pc = 0x1C65D4u;
            goto label_1c65d4;
        }
    }
    ctx->pc = 0x1C652Cu;
    // 0x1c652c: 0x0  nop
    ctx->pc = 0x1c652cu;
    // NOP
label_1c6530:
    // 0x1c6530: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6530u;
    {
        const bool branch_taken_0x1c6530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6530u;
            // 0x1c6534: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6530) {
            ctx->pc = 0x1C6544u;
            goto label_1c6544;
        }
    }
    ctx->pc = 0x1C6538u;
    // 0x1c6538: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c6538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c653c: 0x14a30026  bne         $a1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C653Cu;
    {
        const bool branch_taken_0x1c653c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C6540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C653Cu;
            // 0x1c6540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c653c) {
            ctx->pc = 0x1C65D8u;
            goto label_1c65d8;
        }
    }
    ctx->pc = 0x1C6544u;
label_1c6544:
    // 0x1c6544: 0x2d020006  sltiu       $v0, $t0, 0x6
    ctx->pc = 0x1c6544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c6548: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C6548u;
    {
        const bool branch_taken_0x1c6548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C654Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6548u;
            // 0x1c654c: 0x8cd00000  lw          $s0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6548) {
            ctx->pc = 0x1C65C8u;
            goto label_1c65c8;
        }
    }
    ctx->pc = 0x1C6550u;
    // 0x1c6550: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1c6550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1c6554: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1c6554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1c6558: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c6558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c655c: 0x8c63bfd0  lw          $v1, -0x4030($v1)
    ctx->pc = 0x1c655cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950864)));
    // 0x1c6560: 0x600008  jr          $v1
    ctx->pc = 0x1C6560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6568u: goto label_1c6568;
            case 0x1C6580u: goto label_1c6580;
            case 0x1C6588u: goto label_1c6588;
            case 0x1C6590u: goto label_1c6590;
            case 0x1C6598u: goto label_1c6598;
            case 0x1C65B0u: goto label_1c65b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6568u;
label_1c6568:
    // 0x1c6568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c656c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c656cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6570: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C6570u;
    SET_GPR_U32(ctx, 31, 0x1C6578u);
    ctx->pc = 0x1C6574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6570u;
            // 0x1c6574: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6578u; }
        if (ctx->pc != 0x1C6578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6578u; }
        if (ctx->pc != 0x1C6578u) { return; }
    }
    ctx->pc = 0x1C6578u;
label_1c6578:
    // 0x1c6578: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C6578u;
    {
        const bool branch_taken_0x1c6578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C657Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6578u;
            // 0x1c657c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6578) {
            ctx->pc = 0x1C65D0u;
            goto label_1c65d0;
        }
    }
    ctx->pc = 0x1C6580u;
label_1c6580:
    // 0x1c6580: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C6580u;
    {
        const bool branch_taken_0x1c6580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6580u;
            // 0x1c6584: 0xf03821  addu        $a3, $a3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6580) {
            ctx->pc = 0x1C65D0u;
            goto label_1c65d0;
        }
    }
    ctx->pc = 0x1C6588u;
label_1c6588:
    // 0x1c6588: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6588u;
    {
        const bool branch_taken_0x1c6588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C658Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6588u;
            // 0x1c658c: 0xf03823  subu        $a3, $a3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6588) {
            ctx->pc = 0x1C65D0u;
            goto label_1c65d0;
        }
    }
    ctx->pc = 0x1C6590u;
label_1c6590:
    // 0x1c6590: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C6590u;
    {
        const bool branch_taken_0x1c6590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6590u;
            // 0x1c6594: 0xf03818  mult        $a3, $a3, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6590) {
            ctx->pc = 0x1C65D0u;
            goto label_1c65d0;
        }
    }
    ctx->pc = 0x1C6598u;
label_1c6598:
    // 0x1c6598: 0xf0001b  divu        $zero, $a3, $s0
    ctx->pc = 0x1c6598u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x1c659c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C659Cu;
    {
        const bool branch_taken_0x1c659c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c659c) {
            ctx->pc = 0x1C65A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C659Cu;
            // 0x1c65a0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C65A4u;
            goto label_1c65a4;
        }
    }
    ctx->pc = 0x1C65A4u;
label_1c65a4:
    // 0x1c65a4: 0x1012  mflo        $v0
    ctx->pc = 0x1c65a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c65a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C65A8u;
    {
        const bool branch_taken_0x1c65a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C65ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65A8u;
            // 0x1c65ac: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65a8) {
            ctx->pc = 0x1C65D0u;
            goto label_1c65d0;
        }
    }
    ctx->pc = 0x1C65B0u;
label_1c65b0:
    // 0x1c65b0: 0xf0001b  divu        $zero, $a3, $s0
    ctx->pc = 0x1c65b0u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x1c65b4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C65B4u;
    {
        const bool branch_taken_0x1c65b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c65b4) {
            ctx->pc = 0x1C65B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65B4u;
            // 0x1c65b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C65BCu;
            goto label_1c65bc;
        }
    }
    ctx->pc = 0x1C65BCu;
label_1c65bc:
    // 0x1c65bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1c65bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c65c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C65C0u;
    {
        const bool branch_taken_0x1c65c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C65C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65C0u;
            // 0x1c65c4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65c0) {
            ctx->pc = 0x1C65D0u;
            goto label_1c65d0;
        }
    }
    ctx->pc = 0x1C65C8u;
label_1c65c8:
    // 0x1c65c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C65C8u;
    {
        const bool branch_taken_0x1c65c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C65CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65C8u;
            // 0x1c65cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65c8) {
            ctx->pc = 0x1C65D8u;
            goto label_1c65d8;
        }
    }
    ctx->pc = 0x1C65D0u;
label_1c65d0:
    // 0x1c65d0: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x1c65d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
label_1c65d4:
    // 0x1c65d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c65d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c65d8:
    // 0x1c65d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c65d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c65dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c65dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c65e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c65e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c65e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C65E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C65E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65E4u;
            // 0x1c65e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C65ECu;
    // 0x1c65ec: 0x0  nop
    ctx->pc = 0x1c65ecu;
    // NOP
}
