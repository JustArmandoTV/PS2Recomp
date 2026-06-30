#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB338
// Address: 0x1ab338 - 0x1ab410
void sub_001AB338_0x1ab338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB338_0x1ab338");
#endif

    switch (ctx->pc) {
        case 0x1ab350u: goto label_1ab350;
        case 0x1ab394u: goto label_1ab394;
        case 0x1ab3a4u: goto label_1ab3a4;
        case 0x1ab3c0u: goto label_1ab3c0;
        case 0x1ab3d8u: goto label_1ab3d8;
        case 0x1ab3e0u: goto label_1ab3e0;
        case 0x1ab3ecu: goto label_1ab3ec;
        case 0x1ab3f4u: goto label_1ab3f4;
        default: break;
    }

    ctx->pc = 0x1ab338u;

    // 0x1ab338: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB338u;
            // 0x1ab33c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB340u;
    // 0x1ab340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab348: 0xc06589c  jal         func_196270
    ctx->pc = 0x1AB348u;
    SET_GPR_U32(ctx, 31, 0x1AB350u);
    ctx->pc = 0x196270u;
    if (runtime->hasFunction(0x196270u)) {
        auto targetFn = runtime->lookupFunction(0x196270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB350u; }
        if (ctx->pc != 0x1AB350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196270_0x196270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB350u; }
        if (ctx->pc != 0x1AB350u) { return; }
    }
    ctx->pc = 0x1AB350u;
label_1ab350:
    // 0x1ab350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab358: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB358u;
            // 0x1ab35c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB360u;
    // 0x1ab360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab36c: 0x806acde  j           func_1AB378
    ctx->pc = 0x1AB36Cu;
    ctx->pc = 0x1AB370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB36Cu;
            // 0x1ab370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB378u;
    goto label_1ab378;
    ctx->pc = 0x1AB374u;
    // 0x1ab374: 0x0  nop
    ctx->pc = 0x1ab374u;
    // NOP
label_1ab378:
    // 0x1ab378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab37c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ab37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ab380: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ab380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ab384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ab388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ab38c: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1AB38Cu;
    SET_GPR_U32(ctx, 31, 0x1AB394u);
    ctx->pc = 0x1AB390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB38Cu;
            // 0x1ab390: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB394u; }
        if (ctx->pc != 0x1AB394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB394u; }
        if (ctx->pc != 0x1AB394u) { return; }
    }
    ctx->pc = 0x1AB394u;
label_1ab394:
    // 0x1ab394: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AB394u;
    {
        const bool branch_taken_0x1ab394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB394u;
            // 0x1ab398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab394) {
            ctx->pc = 0x1AB3F8u;
            goto label_1ab3f8;
        }
    }
    ctx->pc = 0x1AB39Cu;
    // 0x1ab39c: 0xc06ad3c  jal         func_1AB4F0
    ctx->pc = 0x1AB39Cu;
    SET_GPR_U32(ctx, 31, 0x1AB3A4u);
    ctx->pc = 0x1AB4F0u;
    if (runtime->hasFunction(0x1AB4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AB4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3A4u; }
        if (ctx->pc != 0x1AB3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB4F0_0x1ab4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3A4u; }
        if (ctx->pc != 0x1AB3A4u) { return; }
    }
    ctx->pc = 0x1AB3A4u;
label_1ab3a4:
    // 0x1ab3a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab3a8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB3A8u;
    {
        const bool branch_taken_0x1ab3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AB3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3A8u;
            // 0x1ab3ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3a8) {
            ctx->pc = 0x1AB3B8u;
            goto label_1ab3b8;
        }
    }
    ctx->pc = 0x1AB3B0u;
    // 0x1ab3b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AB3B0u;
    {
        const bool branch_taken_0x1ab3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3B0u;
            // 0x1ab3b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3b0) {
            ctx->pc = 0x1AB3F8u;
            goto label_1ab3f8;
        }
    }
    ctx->pc = 0x1AB3B8u;
label_1ab3b8:
    // 0x1ab3b8: 0xc06ad04  jal         func_1AB410
    ctx->pc = 0x1AB3B8u;
    SET_GPR_U32(ctx, 31, 0x1AB3C0u);
    ctx->pc = 0x1AB410u;
    if (runtime->hasFunction(0x1AB410u)) {
        auto targetFn = runtime->lookupFunction(0x1AB410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3C0u; }
        if (ctx->pc != 0x1AB3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB410_0x1ab410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3C0u; }
        if (ctx->pc != 0x1AB3C0u) { return; }
    }
    ctx->pc = 0x1AB3C0u;
label_1ab3c0:
    // 0x1ab3c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ab3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab3c4: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1ab3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1ab3c8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB3C8u;
    {
        const bool branch_taken_0x1ab3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AB3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3C8u;
            // 0x1ab3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3c8) {
            ctx->pc = 0x1AB3D8u;
            goto label_1ab3d8;
        }
    }
    ctx->pc = 0x1AB3D0u;
    // 0x1ab3d0: 0xc06ad20  jal         func_1AB480
    ctx->pc = 0x1AB3D0u;
    SET_GPR_U32(ctx, 31, 0x1AB3D8u);
    ctx->pc = 0x1AB480u;
    if (runtime->hasFunction(0x1AB480u)) {
        auto targetFn = runtime->lookupFunction(0x1AB480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3D8u; }
        if (ctx->pc != 0x1AB3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB480_0x1ab480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3D8u; }
        if (ctx->pc != 0x1AB3D8u) { return; }
    }
    ctx->pc = 0x1AB3D8u;
label_1ab3d8:
    // 0x1ab3d8: 0xc06ae2a  jal         func_1AB8A8
    ctx->pc = 0x1AB3D8u;
    SET_GPR_U32(ctx, 31, 0x1AB3E0u);
    ctx->pc = 0x1AB3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3D8u;
            // 0x1ab3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB8A8u;
    if (runtime->hasFunction(0x1AB8A8u)) {
        auto targetFn = runtime->lookupFunction(0x1AB8A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3E0u; }
        if (ctx->pc != 0x1AB3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB8A8_0x1ab8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3E0u; }
        if (ctx->pc != 0x1AB3E0u) { return; }
    }
    ctx->pc = 0x1AB3E0u;
label_1ab3e0:
    // 0x1ab3e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab3e4: 0xc06ad42  jal         func_1AB508
    ctx->pc = 0x1AB3E4u;
    SET_GPR_U32(ctx, 31, 0x1AB3ECu);
    ctx->pc = 0x1AB3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3E4u;
            // 0x1ab3e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB508u;
    if (runtime->hasFunction(0x1AB508u)) {
        auto targetFn = runtime->lookupFunction(0x1AB508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3ECu; }
        if (ctx->pc != 0x1AB3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB508_0x1ab508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3ECu; }
        if (ctx->pc != 0x1AB3ECu) { return; }
    }
    ctx->pc = 0x1AB3ECu;
label_1ab3ec:
    // 0x1ab3ec: 0xc06ade4  jal         func_1AB790
    ctx->pc = 0x1AB3ECu;
    SET_GPR_U32(ctx, 31, 0x1AB3F4u);
    ctx->pc = 0x1AB3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3ECu;
            // 0x1ab3f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB790u;
    if (runtime->hasFunction(0x1AB790u)) {
        auto targetFn = runtime->lookupFunction(0x1AB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3F4u; }
        if (ctx->pc != 0x1AB3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB790_0x1ab790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3F4u; }
        if (ctx->pc != 0x1AB3F4u) { return; }
    }
    ctx->pc = 0x1AB3F4u;
label_1ab3f4:
    // 0x1ab3f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ab3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab3f8:
    // 0x1ab3f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab3fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab3fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ab400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab404: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB404u;
            // 0x1ab408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB40Cu;
    // 0x1ab40c: 0x0  nop
    ctx->pc = 0x1ab40cu;
    // NOP
}
