#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011D308
// Address: 0x11d308 - 0x11d4e8
void sub_0011D308_0x11d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D308_0x11d308");
#endif

    switch (ctx->pc) {
        case 0x11d35cu: goto label_11d35c;
        case 0x11d368u: goto label_11d368;
        case 0x11d380u: goto label_11d380;
        case 0x11d384u: goto label_11d384;
        case 0x11d3b0u: goto label_11d3b0;
        case 0x11d3b4u: goto label_11d3b4;
        case 0x11d410u: goto label_11d410;
        case 0x11d41cu: goto label_11d41c;
        case 0x11d468u: goto label_11d468;
        case 0x11d48cu: goto label_11d48c;
        case 0x11d498u: goto label_11d498;
        case 0x11d4b8u: goto label_11d4b8;
        default: break;
    }

    ctx->pc = 0x11d308u;

    // 0x11d308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d30c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11d30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d310: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11d310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11d314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d318: 0x4883f  dsra32      $s1, $a0, 0
    ctx->pc = 0x11d318u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11d31c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11d31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11d320: 0x117503  sra         $t6, $s1, 20
    ctx->pc = 0x11d320u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 17), 20));
    // 0x11d324: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11d324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11d328: 0x31ce07ff  andi        $t6, $t6, 0x7FF
    ctx->pc = 0x11d328u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2047);
    // 0x11d32c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11d32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11d330: 0x4903c  dsll32      $s2, $a0, 0
    ctx->pc = 0x11d330u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11d334: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11d334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x11d338: 0x25d0fc01  addiu       $s0, $t6, -0x3FF
    ctx->pc = 0x11d338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966273));
    // 0x11d33c: 0x2a0f0014  slti        $t7, $s0, 0x14
    ctx->pc = 0x11d33cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x11d340: 0x11e00041  beqz        $t7, . + 4 + (0x41 << 2)
    ctx->pc = 0x11D340u;
    {
        const bool branch_taken_0x11d340 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D340u;
            // 0x11d344: 0x12903f  dsra32      $s2, $s2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d340) {
            ctx->pc = 0x11D448u;
            goto label_11d448;
        }
    }
    ctx->pc = 0x11D348u;
    // 0x11d348: 0x6010029  bgez        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11D348u;
    {
        const bool branch_taken_0x11d348 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11D34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D348u;
            // 0x11d34c: 0x3c0e000f  lui         $t6, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d348) {
            ctx->pc = 0x11D3F0u;
            goto label_11d3f0;
        }
    }
    ctx->pc = 0x11D350u;
    // 0x11d350: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d350u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d354: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D354u;
    SET_GPR_U32(ctx, 31, 0x11D35Cu);
    ctx->pc = 0x11D358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D354u;
            // 0x11d358: 0xdde50028  ld          $a1, 0x28($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D35Cu; }
        if (ctx->pc != 0x11D35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D35Cu; }
        if (ctx->pc != 0x11D35Cu) { return; }
    }
    ctx->pc = 0x11D35Cu;
label_11d35c:
    // 0x11d35c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d360: 0xc049760  jal         func_125D80
    ctx->pc = 0x11D360u;
    SET_GPR_U32(ctx, 31, 0x11D368u);
    ctx->pc = 0x11D364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D360u;
            // 0x11d364: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D368u; }
        if (ctx->pc != 0x11D368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D368u; }
        if (ctx->pc != 0x11D368u) { return; }
    }
    ctx->pc = 0x11D368u;
label_11d368:
    // 0x11d368: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D368u;
    {
        const bool branch_taken_0x11d368 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11D36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D368u;
            // 0x11d36c: 0x11783c  dsll32      $t7, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d368) {
            ctx->pc = 0x11D384u;
            goto label_11d384;
        }
    }
    ctx->pc = 0x11D370u;
    // 0x11d370: 0x6200017  bltz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x11D370u;
    {
        const bool branch_taken_0x11d370 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x11D374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D370u;
            // 0x11d374: 0x3c0f7fff  lui         $t7, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d370) {
            ctx->pc = 0x11D3D0u;
            goto label_11d3d0;
        }
    }
    ctx->pc = 0x11D378u;
    // 0x11d378: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11d378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d37c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11d37cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d380:
    // 0x11d380: 0x11783c  dsll32      $t7, $s1, 0
    ctx->pc = 0x11d380u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << (32 + 0));
label_11d384:
    // 0x11d384: 0x13983c  dsll32      $s3, $s3, 0
    ctx->pc = 0x11d384u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
    // 0x11d388: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x11d388u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x11d38c: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x11d38cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x11d390: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d390u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d394: 0x12703c  dsll32      $t6, $s2, 0
    ctx->pc = 0x11d394u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (32 + 0));
    // 0x11d398: 0x26f9825  or          $s3, $s3, $t7
    ctx->pc = 0x11d398u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 15));
    // 0x11d39c: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x11d39cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x11d3a0: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x11d3a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d3a4: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d3a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d3a8: 0x26f9824  and         $s3, $s3, $t7
    ctx->pc = 0x11d3a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 15));
    // 0x11d3ac: 0x26e1025  or          $v0, $s3, $t6
    ctx->pc = 0x11d3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 14));
label_11d3b0:
    // 0x11d3b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d3b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11d3b4:
    // 0x11d3b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11d3b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d3b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11d3b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d3bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11d3bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11d3c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11d3c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d3c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x11d3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11d3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x11D3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D3C8u;
            // 0x11d3cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D3D0u;
label_11d3d0:
    // 0x11d3d0: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11d3d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11d3d4: 0x22f7824  and         $t7, $s1, $t7
    ctx->pc = 0x11d3d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & GPR_U64(ctx, 15));
    // 0x11d3d8: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x11d3d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x11d3dc: 0x11e0ffe9  beqz        $t7, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11D3DCu;
    {
        const bool branch_taken_0x11d3dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D3DCu;
            // 0x11d3e0: 0x11783c  dsll32      $t7, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3dc) {
            ctx->pc = 0x11D384u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d384;
        }
    }
    ctx->pc = 0x11D3E4u;
    // 0x11d3e4: 0x3c11bff0  lui         $s1, 0xBFF0
    ctx->pc = 0x11d3e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)49136 << 16));
    // 0x11d3e8: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x11D3E8u;
    {
        const bool branch_taken_0x11d3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D3E8u;
            // 0x11d3ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3e8) {
            ctx->pc = 0x11D380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d380;
        }
    }
    ctx->pc = 0x11D3F0u;
label_11d3f0:
    // 0x11d3f0: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11d3f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11d3f4: 0x20ea007  srav        $s4, $t6, $s0
    ctx->pc = 0x11d3f4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 16) & 0x1F));
    // 0x11d3f8: 0x2347824  and         $t7, $s1, $s4
    ctx->pc = 0x11d3f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & GPR_U64(ctx, 20));
    // 0x11d3fc: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x11d3fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x11d400: 0x11e0ffeb  beqz        $t7, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11D400u;
    {
        const bool branch_taken_0x11d400 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D400u;
            // 0x11d404: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d400) {
            ctx->pc = 0x11D3B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d3b0;
        }
    }
    ctx->pc = 0x11D408u;
    // 0x11d408: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D408u;
    SET_GPR_U32(ctx, 31, 0x11D410u);
    ctx->pc = 0x11D40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D408u;
            // 0x11d40c: 0xdde50028  ld          $a1, 0x28($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D410u; }
        if (ctx->pc != 0x11D410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D410u; }
        if (ctx->pc != 0x11D410u) { return; }
    }
    ctx->pc = 0x11D410u;
label_11d410:
    // 0x11d410: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d414: 0xc049760  jal         func_125D80
    ctx->pc = 0x11D414u;
    SET_GPR_U32(ctx, 31, 0x11D41Cu);
    ctx->pc = 0x11D418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D414u;
            // 0x11d418: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D41Cu; }
        if (ctx->pc != 0x11D41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D41Cu; }
        if (ctx->pc != 0x11D41Cu) { return; }
    }
    ctx->pc = 0x11D41Cu;
label_11d41c:
    // 0x11d41c: 0x441ffd9  bgez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x11D41Cu;
    {
        const bool branch_taken_0x11d41c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11D420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D41Cu;
            // 0x11d420: 0x11783c  dsll32      $t7, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d41c) {
            ctx->pc = 0x11D384u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d384;
        }
    }
    ctx->pc = 0x11D424u;
    // 0x11d424: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D424u;
    {
        const bool branch_taken_0x11d424 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x11D428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D424u;
            // 0x11d428: 0x147827  nor         $t7, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d424) {
            ctx->pc = 0x11D43Cu;
            goto label_11d43c;
        }
    }
    ctx->pc = 0x11D42Cu;
    // 0x11d42c: 0x3c0f0010  lui         $t7, 0x10
    ctx->pc = 0x11d42cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16 << 16));
    // 0x11d430: 0x20f7807  srav        $t7, $t7, $s0
    ctx->pc = 0x11d430u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 16) & 0x1F));
    // 0x11d434: 0x22f8821  addu        $s1, $s1, $t7
    ctx->pc = 0x11d434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x11d438: 0x147827  nor         $t7, $zero, $s4
    ctx->pc = 0x11d438u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_11d43c:
    // 0x11d43c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11d43cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d440: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x11D440u;
    {
        const bool branch_taken_0x11d440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D440u;
            // 0x11d444: 0x22f8824  and         $s1, $s1, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d440) {
            ctx->pc = 0x11D380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d380;
        }
    }
    ctx->pc = 0x11D448u;
label_11d448:
    // 0x11d448: 0x2a0f0034  slti        $t7, $s0, 0x34
    ctx->pc = 0x11d448u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x11d44c: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D44Cu;
    {
        const bool branch_taken_0x11d44c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D44Cu;
            // 0x11d450: 0x25cffbed  addiu       $t7, $t6, -0x413 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d44c) {
            ctx->pc = 0x11D470u;
            goto label_11d470;
        }
    }
    ctx->pc = 0x11D454u;
    // 0x11d454: 0x240f0400  addiu       $t7, $zero, 0x400
    ctx->pc = 0x11d454u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x11d458: 0x560fffd6  bnel        $s0, $t7, . + 4 + (-0x2A << 2)
    ctx->pc = 0x11D458u;
    {
        const bool branch_taken_0x11d458 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        if (branch_taken_0x11d458) {
            ctx->pc = 0x11D45Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11D458u;
            // 0x11d45c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D3B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d3b4;
        }
    }
    ctx->pc = 0x11D460u;
    // 0x11d460: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D460u;
    SET_GPR_U32(ctx, 31, 0x11D468u);
    ctx->pc = 0x11D464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D460u;
            // 0x11d464: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D468u; }
        if (ctx->pc != 0x11D468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D468u; }
        if (ctx->pc != 0x11D468u) { return; }
    }
    ctx->pc = 0x11D468u;
label_11d468:
    // 0x11d468: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x11D468u;
    {
        const bool branch_taken_0x11d468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D468u;
            // 0x11d46c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d468) {
            ctx->pc = 0x11D3B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d3b4;
        }
    }
    ctx->pc = 0x11D470u;
label_11d470:
    // 0x11d470: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x11d470u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d474: 0x1eea006  srlv        $s4, $t6, $t7
    ctx->pc = 0x11d474u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 15) & 0x1F));
    // 0x11d478: 0x2546824  and         $t5, $s2, $s4
    ctx->pc = 0x11d478u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) & GPR_U64(ctx, 20));
    // 0x11d47c: 0x11a0ffcc  beqz        $t5, . + 4 + (-0x34 << 2)
    ctx->pc = 0x11D47Cu;
    {
        const bool branch_taken_0x11d47c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D47Cu;
            // 0x11d480: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d47c) {
            ctx->pc = 0x11D3B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d3b0;
        }
    }
    ctx->pc = 0x11D484u;
    // 0x11d484: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D484u;
    SET_GPR_U32(ctx, 31, 0x11D48Cu);
    ctx->pc = 0x11D488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D484u;
            // 0x11d488: 0xdde50028  ld          $a1, 0x28($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D48Cu; }
        if (ctx->pc != 0x11D48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D48Cu; }
        if (ctx->pc != 0x11D48Cu) { return; }
    }
    ctx->pc = 0x11D48Cu;
label_11d48c:
    // 0x11d48c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d490: 0xc049760  jal         func_125D80
    ctx->pc = 0x11D490u;
    SET_GPR_U32(ctx, 31, 0x11D498u);
    ctx->pc = 0x11D494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D490u;
            // 0x11d494: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D498u; }
        if (ctx->pc != 0x11D498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D498u; }
        if (ctx->pc != 0x11D498u) { return; }
    }
    ctx->pc = 0x11D498u;
label_11d498:
    // 0x11d498: 0x441ffba  bgez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x11D498u;
    {
        const bool branch_taken_0x11d498 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11D49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D498u;
            // 0x11d49c: 0x11783c  dsll32      $t7, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d498) {
            ctx->pc = 0x11D384u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d384;
        }
    }
    ctx->pc = 0x11D4A0u;
    // 0x11d4a0: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D4A0u;
    {
        const bool branch_taken_0x11d4a0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x11D4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D4A0u;
            // 0x11d4a4: 0x147827  nor         $t7, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4a0) {
            ctx->pc = 0x11D4BCu;
            goto label_11d4bc;
        }
    }
    ctx->pc = 0x11D4A8u;
    // 0x11d4a8: 0x240f0014  addiu       $t7, $zero, 0x14
    ctx->pc = 0x11d4a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11d4ac: 0x160f0005  bne         $s0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D4ACu;
    {
        const bool branch_taken_0x11d4ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x11D4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D4ACu;
            // 0x11d4b0: 0x240f0034  addiu       $t7, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4ac) {
            ctx->pc = 0x11D4C4u;
            goto label_11d4c4;
        }
    }
    ctx->pc = 0x11D4B4u;
    // 0x11d4b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11d4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11d4b8:
    // 0x11d4b8: 0x147827  nor         $t7, $zero, $s4
    ctx->pc = 0x11d4b8u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_11d4bc:
    // 0x11d4bc: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
    ctx->pc = 0x11D4BCu;
    {
        const bool branch_taken_0x11d4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D4BCu;
            // 0x11d4c0: 0x24f9024  and         $s2, $s2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4bc) {
            ctx->pc = 0x11D380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d380;
        }
    }
    ctx->pc = 0x11D4C4u;
label_11d4c4:
    // 0x11d4c4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x11d4c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d4c8: 0x1f07823  subu        $t7, $t7, $s0
    ctx->pc = 0x11d4c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x11d4cc: 0x1ee7004  sllv        $t6, $t6, $t7
    ctx->pc = 0x11d4ccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 15) & 0x1F));
    // 0x11d4d0: 0x24e7021  addu        $t6, $s2, $t6
    ctx->pc = 0x11d4d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x11d4d4: 0x1d2782b  sltu        $t7, $t6, $s2
    ctx->pc = 0x11d4d4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x11d4d8: 0x22f8821  addu        $s1, $s1, $t7
    ctx->pc = 0x11d4d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x11d4dc: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x11D4DCu;
    {
        const bool branch_taken_0x11d4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D4DCu;
            // 0x11d4e0: 0x1c0902d  daddu       $s2, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4dc) {
            ctx->pc = 0x11D4B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d4b8;
        }
    }
    ctx->pc = 0x11D4E4u;
    // 0x11d4e4: 0x0  nop
    ctx->pc = 0x11d4e4u;
    // NOP
}
