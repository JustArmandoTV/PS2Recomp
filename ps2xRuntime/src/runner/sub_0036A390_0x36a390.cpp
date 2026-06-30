#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036A390
// Address: 0x36a390 - 0x36a650
void sub_0036A390_0x36a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A390_0x36a390");
#endif

    switch (ctx->pc) {
        case 0x36a3b0u: goto label_36a3b0;
        case 0x36a3fcu: goto label_36a3fc;
        case 0x36a470u: goto label_36a470;
        case 0x36a53cu: goto label_36a53c;
        case 0x36a550u: goto label_36a550;
        case 0x36a570u: goto label_36a570;
        case 0x36a590u: goto label_36a590;
        default: break;
    }

    ctx->pc = 0x36a390u;

    // 0x36a390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36a390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36a394: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36a394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a398: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36a398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36a39c: 0x27a8003c  addiu       $t0, $sp, 0x3C
    ctx->pc = 0x36a39cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x36a3a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36a3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36a3a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x36a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36a3a8: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36A3A8u;
    {
        const bool branch_taken_0x36a3a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36A3A8u;
            // 0x36a3ac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a3a8) {
            ctx->pc = 0x36A3CCu;
            goto label_36a3cc;
        }
    }
    ctx->pc = 0x36A3B0u;
label_36a3b0:
    // 0x36a3b0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x36a3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a3b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36a3b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36a3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x36a3bc: 0x0  nop
    ctx->pc = 0x36a3bcu;
    // NOP
    // 0x36a3c0: 0x0  nop
    ctx->pc = 0x36a3c0u;
    // NOP
    // 0x36a3c4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A3C4u;
    {
        const bool branch_taken_0x36a3c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a3c4) {
            ctx->pc = 0x36A3B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36a3b0;
        }
    }
    ctx->pc = 0x36A3CCu;
label_36a3cc:
    // 0x36a3cc: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x36a3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x36a3d0: 0x27a9003c  addiu       $t1, $sp, 0x3C
    ctx->pc = 0x36a3d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x36a3d4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x36a3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36a3d8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36a3dc: 0xa65021  addu        $t2, $a1, $a2
    ctx->pc = 0x36a3dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x36a3e0: 0x8c664030  lw          $a2, 0x4030($v1)
    ctx->pc = 0x36a3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16432)));
    // 0x36a3e4: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x36a3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x36a3e8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36a3ec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x36a3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x36a3f0: 0x24634080  addiu       $v1, $v1, 0x4080
    ctx->pc = 0x36a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16512));
    // 0x36a3f4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x36a3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x36a3f8: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x36a3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_36a3fc:
    // 0x36a3fc: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x36a3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36a400: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36a400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36a404: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x36a404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x36a408: 0x47182b  sltu        $v1, $v0, $a3
    ctx->pc = 0x36a408u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x36a40c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36a40cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36a410: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x36a410u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x36a414: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x36a414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x36a418: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x36a418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x36a41c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x36a41cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x36a420: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x36A420u;
    {
        const bool branch_taken_0x36a420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36A420u;
            // 0x36a424: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a420) {
            ctx->pc = 0x36A3FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36a3fc;
        }
    }
    ctx->pc = 0x36A428u;
    // 0x36a428: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36a428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36a42c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36a430: 0x8c474030  lw          $a3, 0x4030($v0)
    ctx->pc = 0x36a430u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x36a434: 0x24844080  addiu       $a0, $a0, 0x4080
    ctx->pc = 0x36a434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16512));
    // 0x36a438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36a438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a43c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x36a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x36a440: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36a440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36a444: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36a448: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x36a448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
    // 0x36a44c: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x36a44cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36a450: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36a450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36a454: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x36a454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x36a458: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36a458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36a45c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x36a45cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36a460: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36a460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36a464: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x36a464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36a468: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x36A468u;
    SET_GPR_U32(ctx, 31, 0x36A470u);
    ctx->pc = 0x36A46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A468u;
            // 0x36a46c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A470u; }
        if (ctx->pc != 0x36A470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A470u; }
        if (ctx->pc != 0x36A470u) { return; }
    }
    ctx->pc = 0x36A470u;
label_36a470:
    // 0x36a470: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36a470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36a474: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a478: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x36a478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x36a47c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x36a47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x36a480: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a480u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a484: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A484u;
    {
        const bool branch_taken_0x36a484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a484) {
            ctx->pc = 0x36A488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A484u;
            // 0x36a488: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A498u;
            goto label_36a498;
        }
    }
    ctx->pc = 0x36A48Cu;
    // 0x36a48c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a490: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x36a490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x36a494: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36a494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36a498:
    // 0x36a498: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a49c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x36a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x36a4a0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36a4a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a4a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a4a8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A4A8u;
    {
        const bool branch_taken_0x36a4a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a4a8) {
            ctx->pc = 0x36A4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A4A8u;
            // 0x36a4ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A4BCu;
            goto label_36a4bc;
        }
    }
    ctx->pc = 0x36A4B0u;
    // 0x36a4b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a4b4: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x36a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x36a4b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36a4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36a4bc:
    // 0x36a4bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a4c0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x36a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x36a4c4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36a4c8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a4c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a4cc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A4CCu;
    {
        const bool branch_taken_0x36a4cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a4cc) {
            ctx->pc = 0x36A4D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A4CCu;
            // 0x36a4d0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A4E0u;
            goto label_36a4e0;
        }
    }
    ctx->pc = 0x36A4D4u;
    // 0x36a4d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a4d8: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x36a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x36a4dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36a4e0:
    // 0x36a4e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a4e4: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x36a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x36a4e8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36a4ec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a4ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a4f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A4F0u;
    {
        const bool branch_taken_0x36a4f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a4f0) {
            ctx->pc = 0x36A4F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A4F0u;
            // 0x36a4f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A504u;
            goto label_36a504;
        }
    }
    ctx->pc = 0x36A4F8u;
    // 0x36a4f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a4fc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x36a4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x36a500: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36a500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36a504:
    // 0x36a504: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a508: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x36a508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x36a50c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36a510: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a510u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a514: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A514u;
    {
        const bool branch_taken_0x36a514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a514) {
            ctx->pc = 0x36A518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A514u;
            // 0x36a518: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A528u;
            goto label_36a528;
        }
    }
    ctx->pc = 0x36A51Cu;
    // 0x36a51c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a520: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x36a520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x36a524: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x36a524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_36a528:
    // 0x36a528: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x36A528u;
    {
        const bool branch_taken_0x36a528 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a528) {
            ctx->pc = 0x36A52Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A528u;
            // 0x36a52c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A540u;
            goto label_36a540;
        }
    }
    ctx->pc = 0x36A530u;
    // 0x36a530: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x36a530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x36a534: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x36A534u;
    SET_GPR_U32(ctx, 31, 0x36A53Cu);
    ctx->pc = 0x36A538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A534u;
            // 0x36a538: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A53Cu; }
        if (ctx->pc != 0x36A53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A53Cu; }
        if (ctx->pc != 0x36A53Cu) { return; }
    }
    ctx->pc = 0x36A53Cu;
label_36a53c:
    // 0x36a53c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x36a53cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_36a540:
    // 0x36a540: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A540u;
    {
        const bool branch_taken_0x36a540 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a540) {
            ctx->pc = 0x36A544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A540u;
            // 0x36a544: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A554u;
            goto label_36a554;
        }
    }
    ctx->pc = 0x36A548u;
    // 0x36a548: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x36A548u;
    SET_GPR_U32(ctx, 31, 0x36A550u);
    ctx->pc = 0x36A54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A548u;
            // 0x36a54c: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A550u; }
        if (ctx->pc != 0x36A550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A550u; }
        if (ctx->pc != 0x36A550u) { return; }
    }
    ctx->pc = 0x36A550u;
label_36a550:
    // 0x36a550: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x36a550u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_36a554:
    // 0x36a554: 0x51000007  beql        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x36A554u;
    {
        const bool branch_taken_0x36a554 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a554) {
            ctx->pc = 0x36A558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A554u;
            // 0x36a558: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A574u;
            goto label_36a574;
        }
    }
    ctx->pc = 0x36A55Cu;
    // 0x36a55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36a55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a560: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x36a560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x36a564: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x36a564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x36a568: 0xc075188  jal         func_1D4620
    ctx->pc = 0x36A568u;
    SET_GPR_U32(ctx, 31, 0x36A570u);
    ctx->pc = 0x36A56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A568u;
            // 0x36a56c: 0x26270018  addiu       $a3, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A570u; }
        if (ctx->pc != 0x36A570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A570u; }
        if (ctx->pc != 0x36A570u) { return; }
    }
    ctx->pc = 0x36A570u;
label_36a570:
    // 0x36a570: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x36a570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_36a574:
    // 0x36a574: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36A574u;
    {
        const bool branch_taken_0x36a574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a574) {
            ctx->pc = 0x36A590u;
            goto label_36a590;
        }
    }
    ctx->pc = 0x36A57Cu;
    // 0x36a57c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x36a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x36a580: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A580u;
    {
        const bool branch_taken_0x36a580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a580) {
            ctx->pc = 0x36A590u;
            goto label_36a590;
        }
    }
    ctx->pc = 0x36A588u;
    // 0x36a588: 0xc074da8  jal         func_1D36A0
    ctx->pc = 0x36A588u;
    SET_GPR_U32(ctx, 31, 0x36A590u);
    ctx->pc = 0x36A58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A588u;
            // 0x36a58c: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D36A0u;
    if (runtime->hasFunction(0x1D36A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D36A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A590u; }
        if (ctx->pc != 0x36A590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D36A0_0x1d36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A590u; }
        if (ctx->pc != 0x36A590u) { return; }
    }
    ctx->pc = 0x36A590u;
label_36a590:
    // 0x36a590: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36a590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36a594: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36a594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36a598: 0x8c664030  lw          $a2, 0x4030($v1)
    ctx->pc = 0x36a598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16432)));
    // 0x36a59c: 0x24844710  addiu       $a0, $a0, 0x4710
    ctx->pc = 0x36a59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
    // 0x36a5a0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x36a5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x36a5a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a5a8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x36a5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x36a5ac: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x36a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x36a5b0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36a5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36a5b4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x36a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x36a5b8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36a5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36a5bc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x36a5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36a5c0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36a5c4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x36a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x36a5c8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a5c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a5cc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A5CCu;
    {
        const bool branch_taken_0x36a5cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a5cc) {
            ctx->pc = 0x36A5D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A5CCu;
            // 0x36a5d0: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A5E0u;
            goto label_36a5e0;
        }
    }
    ctx->pc = 0x36A5D4u;
    // 0x36a5d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a5d8: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x36a5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x36a5dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36a5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_36a5e0:
    // 0x36a5e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a5e4: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x36a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x36a5e8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36a5ec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a5ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a5f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A5F0u;
    {
        const bool branch_taken_0x36a5f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a5f0) {
            ctx->pc = 0x36A5F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A5F0u;
            // 0x36a5f4: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A604u;
            goto label_36a604;
        }
    }
    ctx->pc = 0x36A5F8u;
    // 0x36a5f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a5fc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x36a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x36a600: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36a600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_36a604:
    // 0x36a604: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a608: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x36a608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x36a60c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36a610: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a610u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a614: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A614u;
    {
        const bool branch_taken_0x36a614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a614) {
            ctx->pc = 0x36A624u;
            goto label_36a624;
        }
    }
    ctx->pc = 0x36A61Cu;
    // 0x36a61c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a620: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x36a620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_36a624:
    // 0x36a624: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36a624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36a628: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36a628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36a62c: 0x8c844030  lw          $a0, 0x4030($a0)
    ctx->pc = 0x36a62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16432)));
    // 0x36a630: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x36a630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x36a634: 0xac644030  sw          $a0, 0x4030($v1)
    ctx->pc = 0x36a634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16432), GPR_U32(ctx, 4));
    // 0x36a638: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36a638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a63c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a63cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a644: 0x3e00008  jr          $ra
    ctx->pc = 0x36A644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36A644u;
            // 0x36a648: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36A64Cu;
    // 0x36a64c: 0x0  nop
    ctx->pc = 0x36a64cu;
    // NOP
}
