#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B3A8
// Address: 0x17b3a8 - 0x17b4e8
void sub_0017B3A8_0x17b3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B3A8_0x17b3a8");
#endif

    switch (ctx->pc) {
        case 0x17b3c8u: goto label_17b3c8;
        case 0x17b410u: goto label_17b410;
        case 0x17b424u: goto label_17b424;
        case 0x17b43cu: goto label_17b43c;
        case 0x17b454u: goto label_17b454;
        case 0x17b474u: goto label_17b474;
        case 0x17b498u: goto label_17b498;
        case 0x17b4a0u: goto label_17b4a0;
        case 0x17b4b0u: goto label_17b4b0;
        default: break;
    }

    ctx->pc = 0x17b3a8u;

label_17b3a8:
    // 0x17b3a8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b3ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b3acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b3b0: 0x80444389  lb          $a0, 0x4389($v0)
    ctx->pc = 0x17b3b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 17289)));
    // 0x17b3b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b3b8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B3B8u;
    {
        const bool branch_taken_0x17b3b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x17B3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B3B8u;
            // 0x17b3bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3b8) {
            ctx->pc = 0x17B3D0u;
            goto label_17b3d0;
        }
    }
    ctx->pc = 0x17B3C0u;
    // 0x17b3c0: 0xc05ecb2  jal         func_17B2C8
    ctx->pc = 0x17B3C0u;
    SET_GPR_U32(ctx, 31, 0x17B3C8u);
    ctx->pc = 0x17B2C8u;
    if (runtime->hasFunction(0x17B2C8u)) {
        auto targetFn = runtime->lookupFunction(0x17B2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B3C8u; }
        if (ctx->pc != 0x17B3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B2C8_0x17b2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B3C8u; }
        if (ctx->pc != 0x17B3C8u) { return; }
    }
    ctx->pc = 0x17B3C8u;
label_17b3c8:
    // 0x17b3c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17B3C8u;
    {
        const bool branch_taken_0x17b3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B3C8u;
            // 0x17b3cc: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3c8) {
            ctx->pc = 0x17B3E8u;
            goto label_17b3e8;
        }
    }
    ctx->pc = 0x17B3D0u;
label_17b3d0:
    // 0x17b3d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17b3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b3d4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B3D4u;
    {
        const bool branch_taken_0x17b3d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x17B3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B3D4u;
            // 0x17b3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3d4) {
            ctx->pc = 0x17B3E8u;
            goto label_17b3e8;
        }
    }
    ctx->pc = 0x17B3DCu;
    // 0x17b3dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b3e0: 0x805ecc2  j           func_17B308
    ctx->pc = 0x17B3E0u;
    ctx->pc = 0x17B3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B3E0u;
            // 0x17b3e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B308u;
    {
        auto targetFn = runtime->lookupFunction(0x17B308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x17B3E8u;
label_17b3e8:
    // 0x17b3e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x17B3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B3ECu;
            // 0x17b3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B3F4u;
    // 0x17b3f4: 0x0  nop
    ctx->pc = 0x17b3f4u;
    // NOP
    // 0x17b3f8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b3fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b3fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b404: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17b404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17b408: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17B408u;
    SET_GPR_U32(ctx, 31, 0x17B410u);
    ctx->pc = 0x17B40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B408u;
            // 0x17b40c: 0x248459c8  addiu       $a0, $a0, 0x59C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B410u; }
        if (ctx->pc != 0x17B410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B410u; }
        if (ctx->pc != 0x17B410u) { return; }
    }
    ctx->pc = 0x17B410u;
label_17b410:
    // 0x17b410: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b414: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b418: 0x8c4543c4  lw          $a1, 0x43C4($v0)
    ctx->pc = 0x17b418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17348)));
    // 0x17b41c: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17B41Cu;
    SET_GPR_U32(ctx, 31, 0x17B424u);
    ctx->pc = 0x17B420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B41Cu;
            // 0x17b420: 0x248459d8  addiu       $a0, $a0, 0x59D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B424u; }
        if (ctx->pc != 0x17B424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B424u; }
        if (ctx->pc != 0x17B424u) { return; }
    }
    ctx->pc = 0x17B424u;
label_17b424:
    // 0x17b424: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b428: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b42c: 0x248459f8  addiu       $a0, $a0, 0x59F8
    ctx->pc = 0x17b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23032));
    // 0x17b430: 0x244243dc  addiu       $v0, $v0, 0x43DC
    ctx->pc = 0x17b430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17372));
    // 0x17b434: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17B434u;
    SET_GPR_U32(ctx, 31, 0x17B43Cu);
    ctx->pc = 0x17B438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B434u;
            // 0x17b438: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B43Cu; }
        if (ctx->pc != 0x17B43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B43Cu; }
        if (ctx->pc != 0x17B43Cu) { return; }
    }
    ctx->pc = 0x17B43Cu;
label_17b43c:
    // 0x17b43c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b440: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b444: 0x24845a18  addiu       $a0, $a0, 0x5A18
    ctx->pc = 0x17b444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23064));
    // 0x17b448: 0x24504388  addiu       $s0, $v0, 0x4388
    ctx->pc = 0x17b448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17288));
    // 0x17b44c: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17B44Cu;
    SET_GPR_U32(ctx, 31, 0x17B454u);
    ctx->pc = 0x17B450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B44Cu;
            // 0x17b450: 0x82050002  lb          $a1, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B454u; }
        if (ctx->pc != 0x17B454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B454u; }
        if (ctx->pc != 0x17B454u) { return; }
    }
    ctx->pc = 0x17B454u;
label_17b454:
    // 0x17b454: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b458: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x17b458u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x17b45c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b460: 0x24845a38  addiu       $a0, $a0, 0x5A38
    ctx->pc = 0x17b460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23096));
    // 0x17b464: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B464u;
    {
        const bool branch_taken_0x17b464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17B468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B464u;
            // 0x17b468: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b464) {
            ctx->pc = 0x17B478u;
            goto label_17b478;
        }
    }
    ctx->pc = 0x17B46Cu;
    // 0x17b46c: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17B46Cu;
    SET_GPR_U32(ctx, 31, 0x17B474u);
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B474u; }
        if (ctx->pc != 0x17B474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B474u; }
        if (ctx->pc != 0x17B474u) { return; }
    }
    ctx->pc = 0x17B474u;
label_17b474:
    // 0x17b474: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x17b474u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_17b478:
    // 0x17b478: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x17b478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x17b47c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b480: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x17b480u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x17b484: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B484u;
    {
        const bool branch_taken_0x17b484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17b484) {
            ctx->pc = 0x17B498u;
            goto label_17b498;
        }
    }
    ctx->pc = 0x17B48Cu;
    // 0x17b48c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b490: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17B490u;
    SET_GPR_U32(ctx, 31, 0x17B498u);
    ctx->pc = 0x17B494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B490u;
            // 0x17b494: 0x24845a58  addiu       $a0, $a0, 0x5A58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B498u; }
        if (ctx->pc != 0x17B498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B498u; }
        if (ctx->pc != 0x17B498u) { return; }
    }
    ctx->pc = 0x17B498u;
label_17b498:
    // 0x17b498: 0xc05ecea  jal         func_17B3A8
    ctx->pc = 0x17B498u;
    SET_GPR_U32(ctx, 31, 0x17B4A0u);
    ctx->pc = 0x17B3A8u;
    goto label_17b3a8;
    ctx->pc = 0x17B4A0u;
label_17b4a0:
    // 0x17b4a0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b4a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17b4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4a8: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17B4A8u;
    SET_GPR_U32(ctx, 31, 0x17B4B0u);
    ctx->pc = 0x17B4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B4A8u;
            // 0x17b4ac: 0x24845a78  addiu       $a0, $a0, 0x5A78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B4B0u; }
        if (ctx->pc != 0x17B4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B4B0u; }
        if (ctx->pc != 0x17B4B0u) { return; }
    }
    ctx->pc = 0x17B4B0u;
label_17b4b0:
    // 0x17b4b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17b4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b4b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17b4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x17B4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B4BCu;
            // 0x17b4c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B4C4u;
    // 0x17b4c4: 0x0  nop
    ctx->pc = 0x17b4c4u;
    // NOP
    // 0x17b4c8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17b4cc: 0x246343e4  addiu       $v1, $v1, 0x43E4
    ctx->pc = 0x17b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17380));
    // 0x17b4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B4D0u;
            // 0x17b4d4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B4D8u;
    // 0x17b4d8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17b4dc: 0x246343e0  addiu       $v1, $v1, 0x43E0
    ctx->pc = 0x17b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17376));
    // 0x17b4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B4E0u;
            // 0x17b4e4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B4E8u;
}
