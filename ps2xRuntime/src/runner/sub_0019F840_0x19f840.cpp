#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F840
// Address: 0x19f840 - 0x19f938
void sub_0019F840_0x19f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F840_0x19f840");
#endif

    switch (ctx->pc) {
        case 0x19f854u: goto label_19f854;
        case 0x19f884u: goto label_19f884;
        case 0x19f910u: goto label_19f910;
        default: break;
    }

    ctx->pc = 0x19f840u;

    // 0x19f840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f848: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19f848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19f84c: 0xc067cf4  jal         func_19F3D0
    ctx->pc = 0x19F84Cu;
    SET_GPR_U32(ctx, 31, 0x19F854u);
    ctx->pc = 0x19F850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F84Cu;
            // 0x19f850: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D0u;
    if (runtime->hasFunction(0x19F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x19F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F854u; }
        if (ctx->pc != 0x19F854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F3D0_0x19f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F854u; }
        if (ctx->pc != 0x19F854u) { return; }
    }
    ctx->pc = 0x19F854u;
label_19f854:
    // 0x19f854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f858: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F858u;
    {
        const bool branch_taken_0x19f858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19f858) {
            ctx->pc = 0x19F85Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19F858u;
            // 0x19f85c: 0x8e0303f0  lw          $v1, 0x3F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1008)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19F868u;
            goto label_19f868;
        }
    }
    ctx->pc = 0x19F860u;
    // 0x19f860: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19F860u;
    {
        const bool branch_taken_0x19f860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F860u;
            // 0x19f864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f860) {
            ctx->pc = 0x19F890u;
            goto label_19f890;
        }
    }
    ctx->pc = 0x19F868u;
label_19f868:
    // 0x19f868: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F868u;
    {
        const bool branch_taken_0x19f868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F868u;
            // 0x19f86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f868) {
            ctx->pc = 0x19F890u;
            goto label_19f890;
        }
    }
    ctx->pc = 0x19F870u;
    // 0x19f870: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x19f870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x19f874: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19f874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f878: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f87c: 0xc06e68c  jal         func_1B9A30
    ctx->pc = 0x19F87Cu;
    SET_GPR_U32(ctx, 31, 0x19F884u);
    ctx->pc = 0x19F880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F87Cu;
            // 0x19f880: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9A30u;
    if (runtime->hasFunction(0x1B9A30u)) {
        auto targetFn = runtime->lookupFunction(0x1B9A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F884u; }
        if (ctx->pc != 0x19F884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9A30_0x1b9a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F884u; }
        if (ctx->pc != 0x19F884u) { return; }
    }
    ctx->pc = 0x19F884u;
label_19f884:
    // 0x19f884: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19f884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19f888: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x19f888u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x19f88c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19f88cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19f890:
    // 0x19f890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f894: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f898: 0x3e00008  jr          $ra
    ctx->pc = 0x19F898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F898u;
            // 0x19f89c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F8A0u;
    // 0x19f8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f8a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f8a8: 0x8c8400b8  lw          $a0, 0xB8($a0)
    ctx->pc = 0x19f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x19f8ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f8b0: 0x806fa5a  j           func_1BE968
    ctx->pc = 0x19F8B0u;
    ctx->pc = 0x19F8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8B0u;
            // 0x19f8b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE968u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19F8B8u;
    // 0x19f8b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f8bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f8c0: 0x8c8400b8  lw          $a0, 0xB8($a0)
    ctx->pc = 0x19f8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x19f8c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f8c8: 0x806fa60  j           func_1BE980
    ctx->pc = 0x19F8C8u;
    ctx->pc = 0x19F8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8C8u;
            // 0x19f8cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE980u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19F8D0u;
    // 0x19f8d0: 0x24840408  addiu       $a0, $a0, 0x408
    ctx->pc = 0x19f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1032));
    // 0x19f8d4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x19f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19f8d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x19f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19f8dc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x19f8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8E0u;
            // 0x19f8e4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F8E8u;
    // 0x19f8e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f8ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19f8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19f8f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19f8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x19f8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x19f8f8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19f8f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19f8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f900: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19f900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f904: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x19f904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x19f908: 0xc06fa46  jal         func_1BE918
    ctx->pc = 0x19F908u;
    SET_GPR_U32(ctx, 31, 0x19F910u);
    ctx->pc = 0x19F90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F908u;
            // 0x19f90c: 0x8c8400b8  lw          $a0, 0xB8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE918u;
    if (runtime->hasFunction(0x1BE918u)) {
        auto targetFn = runtime->lookupFunction(0x1BE918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F910u; }
        if (ctx->pc != 0x19F910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE918_0x1be918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F910u; }
        if (ctx->pc != 0x19F910u) { return; }
    }
    ctx->pc = 0x19F910u;
label_19f910:
    // 0x19f910: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f914: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x19f914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19f918: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19f918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19f91c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x19f91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x19f920: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19f920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f924: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x19f924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f928: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f92c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F92Cu;
            // 0x19f930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F934u;
    // 0x19f934: 0x0  nop
    ctx->pc = 0x19f934u;
    // NOP
}
