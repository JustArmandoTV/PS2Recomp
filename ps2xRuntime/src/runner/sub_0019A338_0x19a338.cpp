#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019A338
// Address: 0x19a338 - 0x19a488
void sub_0019A338_0x19a338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A338_0x19a338");
#endif

    switch (ctx->pc) {
        case 0x19a34cu: goto label_19a34c;
        case 0x19a364u: goto label_19a364;
        case 0x19a378u: goto label_19a378;
        case 0x19a3d4u: goto label_19a3d4;
        case 0x19a408u: goto label_19a408;
        case 0x19a420u: goto label_19a420;
        default: break;
    }

    ctx->pc = 0x19a338u;

    // 0x19a338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19a338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a33c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a340: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19a344: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19A344u;
    SET_GPR_U32(ctx, 31, 0x19A34Cu);
    ctx->pc = 0x19A348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A344u;
            // 0x19a348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A34Cu; }
        if (ctx->pc != 0x19A34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A34Cu; }
        if (ctx->pc != 0x19A34Cu) { return; }
    }
    ctx->pc = 0x19A34Cu;
label_19a34c:
    // 0x19a34c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a350: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19A350u;
    {
        const bool branch_taken_0x19a350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19A354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A350u;
            // 0x19a354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a350) {
            ctx->pc = 0x19A370u;
            goto label_19a370;
        }
    }
    ctx->pc = 0x19A358u;
    // 0x19a358: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19a358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19a35c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19A35Cu;
    SET_GPR_U32(ctx, 31, 0x19A364u);
    ctx->pc = 0x19A360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A35Cu;
            // 0x19a360: 0x24848d68  addiu       $a0, $a0, -0x7298 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A364u; }
        if (ctx->pc != 0x19A364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A364u; }
        if (ctx->pc != 0x19A364u) { return; }
    }
    ctx->pc = 0x19A364u;
label_19a364:
    // 0x19a364: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19A364u;
    {
        const bool branch_taken_0x19a364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A364u;
            // 0x19a368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a364) {
            ctx->pc = 0x19A398u;
            goto label_19a398;
        }
    }
    ctx->pc = 0x19A36Cu;
    // 0x19a36c: 0x0  nop
    ctx->pc = 0x19a36cu;
    // NOP
label_19a370:
    // 0x19a370: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19A370u;
    SET_GPR_U32(ctx, 31, 0x19A378u);
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A378u; }
        if (ctx->pc != 0x19A378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A378u; }
        if (ctx->pc != 0x19A378u) { return; }
    }
    ctx->pc = 0x19A378u;
label_19a378:
    // 0x19a378: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19a378u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a37c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A37Cu;
    {
        const bool branch_taken_0x19a37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A37Cu;
            // 0x19a380: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a37c) {
            ctx->pc = 0x19A398u;
            goto label_19a398;
        }
    }
    ctx->pc = 0x19A384u;
    // 0x19a384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a388: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19a388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a38c: 0x806c1be  j           func_1B06F8
    ctx->pc = 0x19A38Cu;
    ctx->pc = 0x19A390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A38Cu;
            // 0x19a390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B06F8u;
    {
        auto targetFn = runtime->lookupFunction(0x1B06F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19A394u;
    // 0x19a394: 0x0  nop
    ctx->pc = 0x19a394u;
    // NOP
label_19a398:
    // 0x19a398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a39c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19a39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19A3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A3A0u;
            // 0x19a3a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A3A8u;
    // 0x19a3a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a3ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19a3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19a3b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19a3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19a3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19a3b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19a3b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a3c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a3c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19a3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19a3c8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x19a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x19a3cc: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19A3CCu;
    SET_GPR_U32(ctx, 31, 0x19A3D4u);
    ctx->pc = 0x19A3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A3CCu;
            // 0x19a3d0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3D4u; }
        if (ctx->pc != 0x19A3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3D4u; }
        if (ctx->pc != 0x19A3D4u) { return; }
    }
    ctx->pc = 0x19A3D4u;
label_19a3d4:
    // 0x19a3d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a3d8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19A3D8u;
    {
        const bool branch_taken_0x19a3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19A3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A3D8u;
            // 0x19a3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a3d8) {
            ctx->pc = 0x19A400u;
            goto label_19a400;
        }
    }
    ctx->pc = 0x19A3E0u;
    // 0x19a3e0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19a3e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a3e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19a3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a3ec: 0x24848da0  addiu       $a0, $a0, -0x7260
    ctx->pc = 0x19a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938016));
    // 0x19a3f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19a3f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a3f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19a3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19a3f8: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19A3F8u;
    ctx->pc = 0x19A3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A3F8u;
            // 0x19a3fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19A400u;
label_19a400:
    // 0x19a400: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19A400u;
    SET_GPR_U32(ctx, 31, 0x19A408u);
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A408u; }
        if (ctx->pc != 0x19A408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A408u; }
        if (ctx->pc != 0x19A408u) { return; }
    }
    ctx->pc = 0x19A408u;
label_19a408:
    // 0x19a408: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19a408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a40c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19a40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a410: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19A410u;
    {
        const bool branch_taken_0x19a410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A410u;
            // 0x19a414: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a410) {
            ctx->pc = 0x19A444u;
            goto label_19a444;
        }
    }
    ctx->pc = 0x19A418u;
    // 0x19a418: 0xc06c150  jal         func_1B0540
    ctx->pc = 0x19A418u;
    SET_GPR_U32(ctx, 31, 0x19A420u);
    ctx->pc = 0x1B0540u;
    if (runtime->hasFunction(0x1B0540u)) {
        auto targetFn = runtime->lookupFunction(0x1B0540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A420u; }
        if (ctx->pc != 0x19A420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0540_0x1b0540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A420u; }
        if (ctx->pc != 0x19A420u) { return; }
    }
    ctx->pc = 0x19A420u;
label_19a420:
    // 0x19a420: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19a420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19a424: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x19a424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x19a428: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x19a428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19a42c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A42Cu;
    {
        const bool branch_taken_0x19a42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A42Cu;
            // 0x19a430: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a42c) {
            ctx->pc = 0x19A448u;
            goto label_19a448;
        }
    }
    ctx->pc = 0x19A434u;
    // 0x19a434: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19a434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19a438: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x19a438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x19a43c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x19a440: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x19a440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_19a444:
    // 0x19a444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19a448:
    // 0x19a448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19a448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a44c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19a44cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a450: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19a450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19a454: 0x3e00008  jr          $ra
    ctx->pc = 0x19A454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A454u;
            // 0x19a458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A45Cu;
    // 0x19a45c: 0x0  nop
    ctx->pc = 0x19a45cu;
    // NOP
    // 0x19a460: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x19a460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x19a464: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x19a464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x19a468: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x19a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19a46c: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x19a46cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19a470: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A470u;
    {
        const bool branch_taken_0x19a470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A470u;
            // 0x19a474: 0x451026  xor         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a470) {
            ctx->pc = 0x19A480u;
            goto label_19a480;
        }
    }
    ctx->pc = 0x19A478u;
    // 0x19a478: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19a478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a47c: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x19a47cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_19a480:
    // 0x19a480: 0x3e00008  jr          $ra
    ctx->pc = 0x19A480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A480u;
            // 0x19a484: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A488u;
}
