#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027D360
// Address: 0x27d360 - 0x27d560
void sub_0027D360_0x27d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D360_0x27d360");
#endif

    switch (ctx->pc) {
        case 0x27d360u: goto label_27d360;
        case 0x27d364u: goto label_27d364;
        case 0x27d368u: goto label_27d368;
        case 0x27d36cu: goto label_27d36c;
        case 0x27d370u: goto label_27d370;
        case 0x27d374u: goto label_27d374;
        case 0x27d378u: goto label_27d378;
        case 0x27d37cu: goto label_27d37c;
        case 0x27d380u: goto label_27d380;
        case 0x27d384u: goto label_27d384;
        case 0x27d388u: goto label_27d388;
        case 0x27d38cu: goto label_27d38c;
        case 0x27d390u: goto label_27d390;
        case 0x27d394u: goto label_27d394;
        case 0x27d398u: goto label_27d398;
        case 0x27d39cu: goto label_27d39c;
        case 0x27d3a0u: goto label_27d3a0;
        case 0x27d3a4u: goto label_27d3a4;
        case 0x27d3a8u: goto label_27d3a8;
        case 0x27d3acu: goto label_27d3ac;
        case 0x27d3b0u: goto label_27d3b0;
        case 0x27d3b4u: goto label_27d3b4;
        case 0x27d3b8u: goto label_27d3b8;
        case 0x27d3bcu: goto label_27d3bc;
        case 0x27d3c0u: goto label_27d3c0;
        case 0x27d3c4u: goto label_27d3c4;
        case 0x27d3c8u: goto label_27d3c8;
        case 0x27d3ccu: goto label_27d3cc;
        case 0x27d3d0u: goto label_27d3d0;
        case 0x27d3d4u: goto label_27d3d4;
        case 0x27d3d8u: goto label_27d3d8;
        case 0x27d3dcu: goto label_27d3dc;
        case 0x27d3e0u: goto label_27d3e0;
        case 0x27d3e4u: goto label_27d3e4;
        case 0x27d3e8u: goto label_27d3e8;
        case 0x27d3ecu: goto label_27d3ec;
        case 0x27d3f0u: goto label_27d3f0;
        case 0x27d3f4u: goto label_27d3f4;
        case 0x27d3f8u: goto label_27d3f8;
        case 0x27d3fcu: goto label_27d3fc;
        case 0x27d400u: goto label_27d400;
        case 0x27d404u: goto label_27d404;
        case 0x27d408u: goto label_27d408;
        case 0x27d40cu: goto label_27d40c;
        case 0x27d410u: goto label_27d410;
        case 0x27d414u: goto label_27d414;
        case 0x27d418u: goto label_27d418;
        case 0x27d41cu: goto label_27d41c;
        case 0x27d420u: goto label_27d420;
        case 0x27d424u: goto label_27d424;
        case 0x27d428u: goto label_27d428;
        case 0x27d42cu: goto label_27d42c;
        case 0x27d430u: goto label_27d430;
        case 0x27d434u: goto label_27d434;
        case 0x27d438u: goto label_27d438;
        case 0x27d43cu: goto label_27d43c;
        case 0x27d440u: goto label_27d440;
        case 0x27d444u: goto label_27d444;
        case 0x27d448u: goto label_27d448;
        case 0x27d44cu: goto label_27d44c;
        case 0x27d450u: goto label_27d450;
        case 0x27d454u: goto label_27d454;
        case 0x27d458u: goto label_27d458;
        case 0x27d45cu: goto label_27d45c;
        case 0x27d460u: goto label_27d460;
        case 0x27d464u: goto label_27d464;
        case 0x27d468u: goto label_27d468;
        case 0x27d46cu: goto label_27d46c;
        case 0x27d470u: goto label_27d470;
        case 0x27d474u: goto label_27d474;
        case 0x27d478u: goto label_27d478;
        case 0x27d47cu: goto label_27d47c;
        case 0x27d480u: goto label_27d480;
        case 0x27d484u: goto label_27d484;
        case 0x27d488u: goto label_27d488;
        case 0x27d48cu: goto label_27d48c;
        case 0x27d490u: goto label_27d490;
        case 0x27d494u: goto label_27d494;
        case 0x27d498u: goto label_27d498;
        case 0x27d49cu: goto label_27d49c;
        case 0x27d4a0u: goto label_27d4a0;
        case 0x27d4a4u: goto label_27d4a4;
        case 0x27d4a8u: goto label_27d4a8;
        case 0x27d4acu: goto label_27d4ac;
        case 0x27d4b0u: goto label_27d4b0;
        case 0x27d4b4u: goto label_27d4b4;
        case 0x27d4b8u: goto label_27d4b8;
        case 0x27d4bcu: goto label_27d4bc;
        case 0x27d4c0u: goto label_27d4c0;
        case 0x27d4c4u: goto label_27d4c4;
        case 0x27d4c8u: goto label_27d4c8;
        case 0x27d4ccu: goto label_27d4cc;
        case 0x27d4d0u: goto label_27d4d0;
        case 0x27d4d4u: goto label_27d4d4;
        case 0x27d4d8u: goto label_27d4d8;
        case 0x27d4dcu: goto label_27d4dc;
        case 0x27d4e0u: goto label_27d4e0;
        case 0x27d4e4u: goto label_27d4e4;
        case 0x27d4e8u: goto label_27d4e8;
        case 0x27d4ecu: goto label_27d4ec;
        case 0x27d4f0u: goto label_27d4f0;
        case 0x27d4f4u: goto label_27d4f4;
        case 0x27d4f8u: goto label_27d4f8;
        case 0x27d4fcu: goto label_27d4fc;
        case 0x27d500u: goto label_27d500;
        case 0x27d504u: goto label_27d504;
        case 0x27d508u: goto label_27d508;
        case 0x27d50cu: goto label_27d50c;
        case 0x27d510u: goto label_27d510;
        case 0x27d514u: goto label_27d514;
        case 0x27d518u: goto label_27d518;
        case 0x27d51cu: goto label_27d51c;
        case 0x27d520u: goto label_27d520;
        case 0x27d524u: goto label_27d524;
        case 0x27d528u: goto label_27d528;
        case 0x27d52cu: goto label_27d52c;
        case 0x27d530u: goto label_27d530;
        case 0x27d534u: goto label_27d534;
        case 0x27d538u: goto label_27d538;
        case 0x27d53cu: goto label_27d53c;
        case 0x27d540u: goto label_27d540;
        case 0x27d544u: goto label_27d544;
        case 0x27d548u: goto label_27d548;
        case 0x27d54cu: goto label_27d54c;
        case 0x27d550u: goto label_27d550;
        case 0x27d554u: goto label_27d554;
        case 0x27d558u: goto label_27d558;
        case 0x27d55cu: goto label_27d55c;
        default: break;
    }

    ctx->pc = 0x27d360u;

label_27d360:
    // 0x27d360: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_27d364:
    // 0x27d364: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27d364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_27d368:
    // 0x27d368: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27d368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27d36c:
    // 0x27d36c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27d36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27d370:
    // 0x27d370: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27d370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27d374:
    // 0x27d374: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27d374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27d378:
    // 0x27d378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27d37c:
    // 0x27d37c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27d37cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27d380:
    // 0x27d380: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27d380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27d384:
    // 0x27d384: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x27d384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_27d388:
    // 0x27d388: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
label_27d38c:
    if (ctx->pc == 0x27D38Cu) {
        ctx->pc = 0x27D38Cu;
            // 0x27d38c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D390u;
        goto label_27d390;
    }
    ctx->pc = 0x27D388u;
    {
        const bool branch_taken_0x27d388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D388u;
            // 0x27d38c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d388) {
            ctx->pc = 0x27D540u;
            goto label_27d540;
        }
    }
    ctx->pc = 0x27D390u;
label_27d390:
    // 0x27d390: 0xc0a748c  jal         func_29D230
label_27d394:
    if (ctx->pc == 0x27D394u) {
        ctx->pc = 0x27D394u;
            // 0x27d394: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27D398u;
        goto label_27d398;
    }
    ctx->pc = 0x27D390u;
    SET_GPR_U32(ctx, 31, 0x27D398u);
    ctx->pc = 0x27D394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D390u;
            // 0x27d394: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D230u;
    if (runtime->hasFunction(0x29D230u)) {
        auto targetFn = runtime->lookupFunction(0x29D230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D398u; }
        if (ctx->pc != 0x27D398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D230_0x29d230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D398u; }
        if (ctx->pc != 0x27D398u) { return; }
    }
    ctx->pc = 0x27D398u;
label_27d398:
    // 0x27d398: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x27d398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27d39c:
    // 0x27d39c: 0xc0a7328  jal         func_29CCA0
label_27d3a0:
    if (ctx->pc == 0x27D3A0u) {
        ctx->pc = 0x27D3A0u;
            // 0x27d3a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D3A4u;
        goto label_27d3a4;
    }
    ctx->pc = 0x27D39Cu;
    SET_GPR_U32(ctx, 31, 0x27D3A4u);
    ctx->pc = 0x27D3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D39Cu;
            // 0x27d3a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CCA0u;
    if (runtime->hasFunction(0x29CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x29CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D3A4u; }
        if (ctx->pc != 0x27D3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CCA0_0x29cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D3A4u; }
        if (ctx->pc != 0x27D3A4u) { return; }
    }
    ctx->pc = 0x27D3A4u;
label_27d3a4:
    // 0x27d3a4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x27d3a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_27d3a8:
    // 0x27d3a8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_27d3ac:
    if (ctx->pc == 0x27D3ACu) {
        ctx->pc = 0x27D3ACu;
            // 0x27d3ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D3B0u;
        goto label_27d3b0;
    }
    ctx->pc = 0x27D3A8u;
    {
        const bool branch_taken_0x27d3a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3A8u;
            // 0x27d3ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3a8) {
            ctx->pc = 0x27D3D0u;
            goto label_27d3d0;
        }
    }
    ctx->pc = 0x27D3B0u;
label_27d3b0:
    // 0x27d3b0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x27d3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27d3b4:
    // 0x27d3b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x27d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27d3b8:
    // 0x27d3b8: 0xc0a7420  jal         func_29D080
label_27d3bc:
    if (ctx->pc == 0x27D3BCu) {
        ctx->pc = 0x27D3BCu;
            // 0x27d3bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D3C0u;
        goto label_27d3c0;
    }
    ctx->pc = 0x27D3B8u;
    SET_GPR_U32(ctx, 31, 0x27D3C0u);
    ctx->pc = 0x27D3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3B8u;
            // 0x27d3bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D080u;
    if (runtime->hasFunction(0x29D080u)) {
        auto targetFn = runtime->lookupFunction(0x29D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D3C0u; }
        if (ctx->pc != 0x27D3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D080_0x29d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D3C0u; }
        if (ctx->pc != 0x27D3C0u) { return; }
    }
    ctx->pc = 0x27D3C0u;
label_27d3c0:
    // 0x27d3c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27d3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27d3c4:
    // 0x27d3c4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x27d3c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_27d3c8:
    // 0x27d3c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_27d3cc:
    if (ctx->pc == 0x27D3CCu) {
        ctx->pc = 0x27D3CCu;
            // 0x27d3cc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x27D3D0u;
        goto label_27d3d0;
    }
    ctx->pc = 0x27D3C8u;
    {
        const bool branch_taken_0x27d3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3C8u;
            // 0x27d3cc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3c8) {
            ctx->pc = 0x27D3B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d3b0;
        }
    }
    ctx->pc = 0x27D3D0u;
label_27d3d0:
    // 0x27d3d0: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x27d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_27d3d4:
    // 0x27d3d4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x27d3d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27d3d8:
    // 0x27d3d8: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
label_27d3dc:
    if (ctx->pc == 0x27D3DCu) {
        ctx->pc = 0x27D3DCu;
            // 0x27d3dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D3E0u;
        goto label_27d3e0;
    }
    ctx->pc = 0x27D3D8u;
    {
        const bool branch_taken_0x27d3d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3D8u;
            // 0x27d3dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3d8) {
            ctx->pc = 0x27D530u;
            goto label_27d530;
        }
    }
    ctx->pc = 0x27D3E0u;
label_27d3e0:
    // 0x27d3e0: 0x27b00068  addiu       $s0, $sp, 0x68
    ctx->pc = 0x27d3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_27d3e4:
    // 0x27d3e4: 0x0  nop
    ctx->pc = 0x27d3e4u;
    // NOP
label_27d3e8:
    // 0x27d3e8: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x27d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_27d3ec:
    // 0x27d3ec: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x27d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_27d3f0:
    // 0x27d3f0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x27d3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27d3f4:
    // 0x27d3f4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x27d3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_27d3f8:
    // 0x27d3f8: 0xc0a7400  jal         func_29D000
label_27d3fc:
    if (ctx->pc == 0x27D3FCu) {
        ctx->pc = 0x27D3FCu;
            // 0x27d3fc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27D400u;
        goto label_27d400;
    }
    ctx->pc = 0x27D3F8u;
    SET_GPR_U32(ctx, 31, 0x27D400u);
    ctx->pc = 0x27D3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3F8u;
            // 0x27d3fc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D000u;
    if (runtime->hasFunction(0x29D000u)) {
        auto targetFn = runtime->lookupFunction(0x29D000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D400u; }
        if (ctx->pc != 0x27D400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D000_0x29d000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D400u; }
        if (ctx->pc != 0x27D400u) { return; }
    }
    ctx->pc = 0x27D400u;
label_27d400:
    // 0x27d400: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x27d400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27d404:
    // 0x27d404: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27d404u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d408:
    // 0x27d408: 0xc0a7400  jal         func_29D000
label_27d40c:
    if (ctx->pc == 0x27D40Cu) {
        ctx->pc = 0x27D40Cu;
            // 0x27d40c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27D410u;
        goto label_27d410;
    }
    ctx->pc = 0x27D408u;
    SET_GPR_U32(ctx, 31, 0x27D410u);
    ctx->pc = 0x27D40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D408u;
            // 0x27d40c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D000u;
    if (runtime->hasFunction(0x29D000u)) {
        auto targetFn = runtime->lookupFunction(0x29D000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D410u; }
        if (ctx->pc != 0x27D410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D000_0x29d000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D410u; }
        if (ctx->pc != 0x27D410u) { return; }
    }
    ctx->pc = 0x27D410u;
label_27d410:
    // 0x27d410: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27d410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27d414:
    // 0x27d414: 0x94182a  slt         $v1, $a0, $s4
    ctx->pc = 0x27d414u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_27d418:
    // 0x27d418: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x27d418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_27d41c:
    // 0x27d41c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_27d420:
    if (ctx->pc == 0x27D420u) {
        ctx->pc = 0x27D424u;
        goto label_27d424;
    }
    ctx->pc = 0x27D41Cu;
    {
        const bool branch_taken_0x27d41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d41c) {
            ctx->pc = 0x27D438u;
            goto label_27d438;
        }
    }
    ctx->pc = 0x27D424u;
label_27d424:
    // 0x27d424: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x27d424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27d428:
    // 0x27d428: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27d428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_27d42c:
    // 0x27d42c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_27d430:
    if (ctx->pc == 0x27D430u) {
        ctx->pc = 0x27D434u;
        goto label_27d434;
    }
    ctx->pc = 0x27D42Cu;
    {
        const bool branch_taken_0x27d42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d42c) {
            ctx->pc = 0x27D518u;
            goto label_27d518;
        }
    }
    ctx->pc = 0x27D434u;
label_27d434:
    // 0x27d434: 0x0  nop
    ctx->pc = 0x27d434u;
    // NOP
label_27d438:
    // 0x27d438: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x27d438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_27d43c:
    // 0x27d43c: 0x908200a8  lbu         $v0, 0xA8($a0)
    ctx->pc = 0x27d43cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
label_27d440:
    // 0x27d440: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x27d440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_27d444:
    // 0x27d444: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27d444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27d448:
    // 0x27d448: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_27d44c:
    if (ctx->pc == 0x27D44Cu) {
        ctx->pc = 0x27D44Cu;
            // 0x27d44c: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x27D450u;
        goto label_27d450;
    }
    ctx->pc = 0x27D448u;
    {
        const bool branch_taken_0x27d448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D448u;
            // 0x27d44c: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d448) {
            ctx->pc = 0x27D458u;
            goto label_27d458;
        }
    }
    ctx->pc = 0x27D450u;
label_27d450:
    // 0x27d450: 0x10000002  b           . + 4 + (0x2 << 2)
label_27d454:
    if (ctx->pc == 0x27D454u) {
        ctx->pc = 0x27D454u;
            // 0x27d454: 0x8c670094  lw          $a3, 0x94($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
        ctx->pc = 0x27D458u;
        goto label_27d458;
    }
    ctx->pc = 0x27D450u;
    {
        const bool branch_taken_0x27d450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D450u;
            // 0x27d454: 0x8c670094  lw          $a3, 0x94($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d450) {
            ctx->pc = 0x27D45Cu;
            goto label_27d45c;
        }
    }
    ctx->pc = 0x27D458u;
label_27d458:
    // 0x27d458: 0x8c870094  lw          $a3, 0x94($a0)
    ctx->pc = 0x27d458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_27d45c:
    // 0x27d45c: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x27d45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_27d460:
    // 0x27d460: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x27d460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_27d464:
    // 0x27d464: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x27d464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_27d468:
    // 0x27d468: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27d468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27d46c:
    // 0x27d46c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x27d46cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_27d470:
    // 0x27d470: 0x320f809  jalr        $t9
label_27d474:
    if (ctx->pc == 0x27D474u) {
        ctx->pc = 0x27D474u;
            // 0x27d474: 0x26280010  addiu       $t0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x27D478u;
        goto label_27d478;
    }
    ctx->pc = 0x27D470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27D478u);
        ctx->pc = 0x27D474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D470u;
            // 0x27d474: 0x26280010  addiu       $t0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27D478u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27D478u; }
            if (ctx->pc != 0x27D478u) { return; }
        }
        }
    }
    ctx->pc = 0x27D478u;
label_27d478:
    // 0x27d478: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x27d478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_27d47c:
    // 0x27d47c: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x27d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_27d480:
    // 0x27d480: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x27d480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_27d484:
    // 0x27d484: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27d484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27d488:
    // 0x27d488: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x27d488u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
label_27d48c:
    // 0x27d48c: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x27d48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_27d490:
    // 0x27d490: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x27d490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_27d494:
    // 0x27d494: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x27d494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27d498:
    // 0x27d498: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x27d498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_27d49c:
    // 0x27d49c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x27d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27d4a0:
    // 0x27d4a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27d4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d4a4:
    // 0x27d4a4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x27d4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_27d4a8:
    // 0x27d4a8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x27d4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d4ac:
    // 0x27d4ac: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x27d4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d4b0:
    // 0x27d4b0: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x27d4b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_27d4b4:
    // 0x27d4b4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x27d4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_27d4b8:
    // 0x27d4b8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x27d4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d4bc:
    // 0x27d4bc: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x27d4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_27d4c0:
    // 0x27d4c0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x27d4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d4c4:
    // 0x27d4c4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x27d4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d4c8:
    // 0x27d4c8: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x27d4c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_27d4cc:
    // 0x27d4cc: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x27d4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_27d4d0:
    // 0x27d4d0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x27d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_27d4d4:
    // 0x27d4d4: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x27d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_27d4d8:
    // 0x27d4d8: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x27d4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d4dc:
    // 0x27d4dc: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x27d4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_27d4e0:
    // 0x27d4e0: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x27d4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d4e4:
    // 0x27d4e4: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x27d4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_27d4e8:
    // 0x27d4e8: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x27d4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d4ec:
    // 0x27d4ec: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x27d4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_27d4f0:
    // 0x27d4f0: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x27d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d4f4:
    // 0x27d4f4: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x27d4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_27d4f8:
    // 0x27d4f8: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x27d4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d4fc:
    // 0x27d4fc: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x27d4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_27d500:
    // 0x27d500: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x27d500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d504:
    // 0x27d504: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x27d504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_27d508:
    // 0x27d508: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x27d508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d50c:
    // 0x27d50c: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x27d50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
label_27d510:
    // 0x27d510: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x27d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d514:
    // 0x27d514: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x27d514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
label_27d518:
    // 0x27d518: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x27d518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_27d51c:
    // 0x27d51c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27d51cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_27d520:
    // 0x27d520: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x27d520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27d524:
    // 0x27d524: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
label_27d528:
    if (ctx->pc == 0x27D528u) {
        ctx->pc = 0x27D52Cu;
        goto label_27d52c;
    }
    ctx->pc = 0x27D524u;
    {
        const bool branch_taken_0x27d524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d524) {
            ctx->pc = 0x27D3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d3e8;
        }
    }
    ctx->pc = 0x27D52Cu;
label_27d52c:
    // 0x27d52c: 0x0  nop
    ctx->pc = 0x27d52cu;
    // NOP
label_27d530:
    // 0x27d530: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x27d530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27d534:
    // 0x27d534: 0xc0a745c  jal         func_29D170
label_27d538:
    if (ctx->pc == 0x27D538u) {
        ctx->pc = 0x27D538u;
            // 0x27d538: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x27D53Cu;
        goto label_27d53c;
    }
    ctx->pc = 0x27D534u;
    SET_GPR_U32(ctx, 31, 0x27D53Cu);
    ctx->pc = 0x27D538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D534u;
            // 0x27d538: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D170u;
    if (runtime->hasFunction(0x29D170u)) {
        auto targetFn = runtime->lookupFunction(0x29D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D53Cu; }
        if (ctx->pc != 0x27D53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D170_0x29d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D53Cu; }
        if (ctx->pc != 0x27D53Cu) { return; }
    }
    ctx->pc = 0x27D53Cu;
label_27d53c:
    // 0x27d53c: 0x0  nop
    ctx->pc = 0x27d53cu;
    // NOP
label_27d540:
    // 0x27d540: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27d540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_27d544:
    // 0x27d544: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27d544u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27d548:
    // 0x27d548: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27d548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27d54c:
    // 0x27d54c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d54cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27d550:
    // 0x27d550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27d554:
    // 0x27d554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27d558:
    // 0x27d558: 0x3e00008  jr          $ra
label_27d55c:
    if (ctx->pc == 0x27D55Cu) {
        ctx->pc = 0x27D55Cu;
            // 0x27d55c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x27D560u;
        goto label_fallthrough_0x27d558;
    }
    ctx->pc = 0x27D558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D558u;
            // 0x27d55c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x27d558:
    ctx->pc = 0x27D560u;
}
