#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BB310
// Address: 0x2bb310 - 0x2bb470
void sub_002BB310_0x2bb310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB310_0x2bb310");
#endif

    switch (ctx->pc) {
        case 0x2bb334u: goto label_2bb334;
        case 0x2bb344u: goto label_2bb344;
        case 0x2bb354u: goto label_2bb354;
        case 0x2bb36cu: goto label_2bb36c;
        case 0x2bb3ccu: goto label_2bb3cc;
        case 0x2bb3f8u: goto label_2bb3f8;
        case 0x2bb45cu: goto label_2bb45c;
        default: break;
    }

    ctx->pc = 0x2bb310u;

    // 0x2bb310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bb310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bb314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bb314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bb318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bb318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bb31c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bb320: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb324: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BB324u;
    {
        const bool branch_taken_0x2bb324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB324u;
            // 0x2bb328: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb324) {
            ctx->pc = 0x2BB36Cu;
            goto label_2bb36c;
        }
    }
    ctx->pc = 0x2BB32Cu;
    // 0x2bb32c: 0xc04008c  jal         func_100230
    ctx->pc = 0x2BB32Cu;
    SET_GPR_U32(ctx, 31, 0x2BB334u);
    ctx->pc = 0x2BB330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB32Cu;
            // 0x2bb330: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB334u; }
        if (ctx->pc != 0x2BB334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB334u; }
        if (ctx->pc != 0x2BB334u) { return; }
    }
    ctx->pc = 0x2BB334u;
label_2bb334:
    // 0x2bb334: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2bb334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bb338: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bb338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bb33c: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2BB33Cu;
    SET_GPR_U32(ctx, 31, 0x2BB344u);
    ctx->pc = 0x2BB340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB33Cu;
            // 0x2bb340: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB344u; }
        if (ctx->pc != 0x2BB344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB344u; }
        if (ctx->pc != 0x2BB344u) { return; }
    }
    ctx->pc = 0x2BB344u;
label_2bb344:
    // 0x2bb344: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2bb344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2bb348: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bb348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bb34c: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2BB34Cu;
    SET_GPR_U32(ctx, 31, 0x2BB354u);
    ctx->pc = 0x2BB350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB34Cu;
            // 0x2bb350: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB354u; }
        if (ctx->pc != 0x2BB354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB354u; }
        if (ctx->pc != 0x2BB354u) { return; }
    }
    ctx->pc = 0x2BB354u;
label_2bb354:
    // 0x2bb354: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bb354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2bb358: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bb358u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bb35c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB35Cu;
    {
        const bool branch_taken_0x2bb35c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bb35c) {
            ctx->pc = 0x2BB360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB35Cu;
            // 0x2bb360: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB370u;
            goto label_2bb370;
        }
    }
    ctx->pc = 0x2BB364u;
    // 0x2bb364: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BB364u;
    SET_GPR_U32(ctx, 31, 0x2BB36Cu);
    ctx->pc = 0x2BB368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB364u;
            // 0x2bb368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB36Cu; }
        if (ctx->pc != 0x2BB36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB36Cu; }
        if (ctx->pc != 0x2BB36Cu) { return; }
    }
    ctx->pc = 0x2BB36Cu;
label_2bb36c:
    // 0x2bb36c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bb36cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb370:
    // 0x2bb370: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bb370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb37c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB37Cu;
            // 0x2bb380: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BB384u;
    // 0x2bb384: 0x0  nop
    ctx->pc = 0x2bb384u;
    // NOP
    // 0x2bb388: 0x0  nop
    ctx->pc = 0x2bb388u;
    // NOP
    // 0x2bb38c: 0x0  nop
    ctx->pc = 0x2bb38cu;
    // NOP
    // 0x2bb390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bb390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bb394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bb394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bb398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bb398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bb39c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bb3a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb3a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb3a4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BB3A4u;
    {
        const bool branch_taken_0x2bb3a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB3A4u;
            // 0x2bb3a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb3a4) {
            ctx->pc = 0x2BB3F8u;
            goto label_2bb3f8;
        }
    }
    ctx->pc = 0x2BB3ACu;
    // 0x2bb3ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bb3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2bb3b0: 0x24428660  addiu       $v0, $v0, -0x79A0
    ctx->pc = 0x2bb3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936160));
    // 0x2bb3b4: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2bb3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x2bb3b8: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x2bb3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2bb3bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB3BCu;
    {
        const bool branch_taken_0x2bb3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb3bc) {
            ctx->pc = 0x2BB3CCu;
            goto label_2bb3cc;
        }
    }
    ctx->pc = 0x2BB3C4u;
    // 0x2bb3c4: 0xc08d414  jal         func_235050
    ctx->pc = 0x2BB3C4u;
    SET_GPR_U32(ctx, 31, 0x2BB3CCu);
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB3CCu; }
        if (ctx->pc != 0x2BB3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB3CCu; }
        if (ctx->pc != 0x2BB3CCu) { return; }
    }
    ctx->pc = 0x2BB3CCu;
label_2bb3cc:
    // 0x2bb3cc: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB3CCu;
    {
        const bool branch_taken_0x2bb3cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb3cc) {
            ctx->pc = 0x2BB3D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB3CCu;
            // 0x2bb3d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB3E4u;
            goto label_2bb3e4;
        }
    }
    ctx->pc = 0x2BB3D4u;
    // 0x2bb3d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2bb3d8: 0x24428630  addiu       $v0, $v0, -0x79D0
    ctx->pc = 0x2bb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936112));
    // 0x2bb3dc: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2bb3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x2bb3e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bb3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bb3e4:
    // 0x2bb3e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bb3e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bb3e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB3E8u;
    {
        const bool branch_taken_0x2bb3e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bb3e8) {
            ctx->pc = 0x2BB3ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB3E8u;
            // 0x2bb3ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB3FCu;
            goto label_2bb3fc;
        }
    }
    ctx->pc = 0x2BB3F0u;
    // 0x2bb3f0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BB3F0u;
    SET_GPR_U32(ctx, 31, 0x2BB3F8u);
    ctx->pc = 0x2BB3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB3F0u;
            // 0x2bb3f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB3F8u; }
        if (ctx->pc != 0x2BB3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB3F8u; }
        if (ctx->pc != 0x2BB3F8u) { return; }
    }
    ctx->pc = 0x2BB3F8u;
label_2bb3f8:
    // 0x2bb3f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bb3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb3fc:
    // 0x2bb3fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bb3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb400: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb408: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB408u;
            // 0x2bb40c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BB410u;
    // 0x2bb410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bb418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bb41c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bb41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb420: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2BB420u;
    {
        const bool branch_taken_0x2bb420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb420) {
            ctx->pc = 0x2BB424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB420u;
            // 0x2bb424: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB460u;
            goto label_2bb460;
        }
    }
    ctx->pc = 0x2BB428u;
    // 0x2bb428: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bb428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bb42c: 0x24427b90  addiu       $v0, $v0, 0x7B90
    ctx->pc = 0x2bb42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31632));
    // 0x2bb430: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB430u;
    {
        const bool branch_taken_0x2bb430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB430u;
            // 0x2bb434: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb430) {
            ctx->pc = 0x2BB444u;
            goto label_2bb444;
        }
    }
    ctx->pc = 0x2BB438u;
    // 0x2bb438: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bb438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2bb43c: 0x24428630  addiu       $v0, $v0, -0x79D0
    ctx->pc = 0x2bb43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936112));
    // 0x2bb440: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2bb440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_2bb444:
    // 0x2bb444: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2bb444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2bb448: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bb448u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bb44c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB44Cu;
    {
        const bool branch_taken_0x2bb44c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bb44c) {
            ctx->pc = 0x2BB45Cu;
            goto label_2bb45c;
        }
    }
    ctx->pc = 0x2BB454u;
    // 0x2bb454: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BB454u;
    SET_GPR_U32(ctx, 31, 0x2BB45Cu);
    ctx->pc = 0x2BB458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB454u;
            // 0x2bb458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB45Cu; }
        if (ctx->pc != 0x2BB45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB45Cu; }
        if (ctx->pc != 0x2BB45Cu) { return; }
    }
    ctx->pc = 0x2BB45Cu;
label_2bb45c:
    // 0x2bb45c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bb45cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb460:
    // 0x2bb460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bb460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb468: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB468u;
            // 0x2bb46c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BB470u;
}
