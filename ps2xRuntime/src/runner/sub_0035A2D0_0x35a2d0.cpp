#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035A2D0
// Address: 0x35a2d0 - 0x35a5c0
void sub_0035A2D0_0x35a2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A2D0_0x35a2d0");
#endif

    switch (ctx->pc) {
        case 0x35a2d0u: goto label_35a2d0;
        case 0x35a2d4u: goto label_35a2d4;
        case 0x35a2d8u: goto label_35a2d8;
        case 0x35a2dcu: goto label_35a2dc;
        case 0x35a2e0u: goto label_35a2e0;
        case 0x35a2e4u: goto label_35a2e4;
        case 0x35a2e8u: goto label_35a2e8;
        case 0x35a2ecu: goto label_35a2ec;
        case 0x35a2f0u: goto label_35a2f0;
        case 0x35a2f4u: goto label_35a2f4;
        case 0x35a2f8u: goto label_35a2f8;
        case 0x35a2fcu: goto label_35a2fc;
        case 0x35a300u: goto label_35a300;
        case 0x35a304u: goto label_35a304;
        case 0x35a308u: goto label_35a308;
        case 0x35a30cu: goto label_35a30c;
        case 0x35a310u: goto label_35a310;
        case 0x35a314u: goto label_35a314;
        case 0x35a318u: goto label_35a318;
        case 0x35a31cu: goto label_35a31c;
        case 0x35a320u: goto label_35a320;
        case 0x35a324u: goto label_35a324;
        case 0x35a328u: goto label_35a328;
        case 0x35a32cu: goto label_35a32c;
        case 0x35a330u: goto label_35a330;
        case 0x35a334u: goto label_35a334;
        case 0x35a338u: goto label_35a338;
        case 0x35a33cu: goto label_35a33c;
        case 0x35a340u: goto label_35a340;
        case 0x35a344u: goto label_35a344;
        case 0x35a348u: goto label_35a348;
        case 0x35a34cu: goto label_35a34c;
        case 0x35a350u: goto label_35a350;
        case 0x35a354u: goto label_35a354;
        case 0x35a358u: goto label_35a358;
        case 0x35a35cu: goto label_35a35c;
        case 0x35a360u: goto label_35a360;
        case 0x35a364u: goto label_35a364;
        case 0x35a368u: goto label_35a368;
        case 0x35a36cu: goto label_35a36c;
        case 0x35a370u: goto label_35a370;
        case 0x35a374u: goto label_35a374;
        case 0x35a378u: goto label_35a378;
        case 0x35a37cu: goto label_35a37c;
        case 0x35a380u: goto label_35a380;
        case 0x35a384u: goto label_35a384;
        case 0x35a388u: goto label_35a388;
        case 0x35a38cu: goto label_35a38c;
        case 0x35a390u: goto label_35a390;
        case 0x35a394u: goto label_35a394;
        case 0x35a398u: goto label_35a398;
        case 0x35a39cu: goto label_35a39c;
        case 0x35a3a0u: goto label_35a3a0;
        case 0x35a3a4u: goto label_35a3a4;
        case 0x35a3a8u: goto label_35a3a8;
        case 0x35a3acu: goto label_35a3ac;
        case 0x35a3b0u: goto label_35a3b0;
        case 0x35a3b4u: goto label_35a3b4;
        case 0x35a3b8u: goto label_35a3b8;
        case 0x35a3bcu: goto label_35a3bc;
        case 0x35a3c0u: goto label_35a3c0;
        case 0x35a3c4u: goto label_35a3c4;
        case 0x35a3c8u: goto label_35a3c8;
        case 0x35a3ccu: goto label_35a3cc;
        case 0x35a3d0u: goto label_35a3d0;
        case 0x35a3d4u: goto label_35a3d4;
        case 0x35a3d8u: goto label_35a3d8;
        case 0x35a3dcu: goto label_35a3dc;
        case 0x35a3e0u: goto label_35a3e0;
        case 0x35a3e4u: goto label_35a3e4;
        case 0x35a3e8u: goto label_35a3e8;
        case 0x35a3ecu: goto label_35a3ec;
        case 0x35a3f0u: goto label_35a3f0;
        case 0x35a3f4u: goto label_35a3f4;
        case 0x35a3f8u: goto label_35a3f8;
        case 0x35a3fcu: goto label_35a3fc;
        case 0x35a400u: goto label_35a400;
        case 0x35a404u: goto label_35a404;
        case 0x35a408u: goto label_35a408;
        case 0x35a40cu: goto label_35a40c;
        case 0x35a410u: goto label_35a410;
        case 0x35a414u: goto label_35a414;
        case 0x35a418u: goto label_35a418;
        case 0x35a41cu: goto label_35a41c;
        case 0x35a420u: goto label_35a420;
        case 0x35a424u: goto label_35a424;
        case 0x35a428u: goto label_35a428;
        case 0x35a42cu: goto label_35a42c;
        case 0x35a430u: goto label_35a430;
        case 0x35a434u: goto label_35a434;
        case 0x35a438u: goto label_35a438;
        case 0x35a43cu: goto label_35a43c;
        case 0x35a440u: goto label_35a440;
        case 0x35a444u: goto label_35a444;
        case 0x35a448u: goto label_35a448;
        case 0x35a44cu: goto label_35a44c;
        case 0x35a450u: goto label_35a450;
        case 0x35a454u: goto label_35a454;
        case 0x35a458u: goto label_35a458;
        case 0x35a45cu: goto label_35a45c;
        case 0x35a460u: goto label_35a460;
        case 0x35a464u: goto label_35a464;
        case 0x35a468u: goto label_35a468;
        case 0x35a46cu: goto label_35a46c;
        case 0x35a470u: goto label_35a470;
        case 0x35a474u: goto label_35a474;
        case 0x35a478u: goto label_35a478;
        case 0x35a47cu: goto label_35a47c;
        case 0x35a480u: goto label_35a480;
        case 0x35a484u: goto label_35a484;
        case 0x35a488u: goto label_35a488;
        case 0x35a48cu: goto label_35a48c;
        case 0x35a490u: goto label_35a490;
        case 0x35a494u: goto label_35a494;
        case 0x35a498u: goto label_35a498;
        case 0x35a49cu: goto label_35a49c;
        case 0x35a4a0u: goto label_35a4a0;
        case 0x35a4a4u: goto label_35a4a4;
        case 0x35a4a8u: goto label_35a4a8;
        case 0x35a4acu: goto label_35a4ac;
        case 0x35a4b0u: goto label_35a4b0;
        case 0x35a4b4u: goto label_35a4b4;
        case 0x35a4b8u: goto label_35a4b8;
        case 0x35a4bcu: goto label_35a4bc;
        case 0x35a4c0u: goto label_35a4c0;
        case 0x35a4c4u: goto label_35a4c4;
        case 0x35a4c8u: goto label_35a4c8;
        case 0x35a4ccu: goto label_35a4cc;
        case 0x35a4d0u: goto label_35a4d0;
        case 0x35a4d4u: goto label_35a4d4;
        case 0x35a4d8u: goto label_35a4d8;
        case 0x35a4dcu: goto label_35a4dc;
        case 0x35a4e0u: goto label_35a4e0;
        case 0x35a4e4u: goto label_35a4e4;
        case 0x35a4e8u: goto label_35a4e8;
        case 0x35a4ecu: goto label_35a4ec;
        case 0x35a4f0u: goto label_35a4f0;
        case 0x35a4f4u: goto label_35a4f4;
        case 0x35a4f8u: goto label_35a4f8;
        case 0x35a4fcu: goto label_35a4fc;
        case 0x35a500u: goto label_35a500;
        case 0x35a504u: goto label_35a504;
        case 0x35a508u: goto label_35a508;
        case 0x35a50cu: goto label_35a50c;
        case 0x35a510u: goto label_35a510;
        case 0x35a514u: goto label_35a514;
        case 0x35a518u: goto label_35a518;
        case 0x35a51cu: goto label_35a51c;
        case 0x35a520u: goto label_35a520;
        case 0x35a524u: goto label_35a524;
        case 0x35a528u: goto label_35a528;
        case 0x35a52cu: goto label_35a52c;
        case 0x35a530u: goto label_35a530;
        case 0x35a534u: goto label_35a534;
        case 0x35a538u: goto label_35a538;
        case 0x35a53cu: goto label_35a53c;
        case 0x35a540u: goto label_35a540;
        case 0x35a544u: goto label_35a544;
        case 0x35a548u: goto label_35a548;
        case 0x35a54cu: goto label_35a54c;
        case 0x35a550u: goto label_35a550;
        case 0x35a554u: goto label_35a554;
        case 0x35a558u: goto label_35a558;
        case 0x35a55cu: goto label_35a55c;
        case 0x35a560u: goto label_35a560;
        case 0x35a564u: goto label_35a564;
        case 0x35a568u: goto label_35a568;
        case 0x35a56cu: goto label_35a56c;
        case 0x35a570u: goto label_35a570;
        case 0x35a574u: goto label_35a574;
        case 0x35a578u: goto label_35a578;
        case 0x35a57cu: goto label_35a57c;
        case 0x35a580u: goto label_35a580;
        case 0x35a584u: goto label_35a584;
        case 0x35a588u: goto label_35a588;
        case 0x35a58cu: goto label_35a58c;
        case 0x35a590u: goto label_35a590;
        case 0x35a594u: goto label_35a594;
        case 0x35a598u: goto label_35a598;
        case 0x35a59cu: goto label_35a59c;
        case 0x35a5a0u: goto label_35a5a0;
        case 0x35a5a4u: goto label_35a5a4;
        case 0x35a5a8u: goto label_35a5a8;
        case 0x35a5acu: goto label_35a5ac;
        case 0x35a5b0u: goto label_35a5b0;
        case 0x35a5b4u: goto label_35a5b4;
        case 0x35a5b8u: goto label_35a5b8;
        case 0x35a5bcu: goto label_35a5bc;
        default: break;
    }

    ctx->pc = 0x35a2d0u;

label_35a2d0:
    // 0x35a2d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x35a2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_35a2d4:
    // 0x35a2d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35a2d8:
    // 0x35a2d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x35a2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_35a2dc:
    // 0x35a2dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x35a2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_35a2e0:
    // 0x35a2e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35a2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_35a2e4:
    // 0x35a2e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35a2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_35a2e8:
    // 0x35a2e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35a2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35a2ec:
    // 0x35a2ec: 0x249400a0  addiu       $s4, $a0, 0xA0
    ctx->pc = 0x35a2ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_35a2f0:
    // 0x35a2f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35a2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35a2f4:
    // 0x35a2f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x35a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_35a2f8:
    // 0x35a2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35a2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35a2fc:
    // 0x35a2fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35a2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35a300:
    // 0x35a300: 0x8cb10e00  lw          $s1, 0xE00($a1)
    ctx->pc = 0x35a300u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3584)));
label_35a304:
    // 0x35a304: 0x8c93e370  lw          $s3, -0x1C90($a0)
    ctx->pc = 0x35a304u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959984)));
label_35a308:
    // 0x35a308: 0x8c72a2e0  lw          $s2, -0x5D20($v1)
    ctx->pc = 0x35a308u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943456)));
label_35a30c:
    // 0x35a30c: 0x1a2000a1  blez        $s1, . + 4 + (0xA1 << 2)
label_35a310:
    if (ctx->pc == 0x35A310u) {
        ctx->pc = 0x35A310u;
            // 0x35a310: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35A314u;
        goto label_35a314;
    }
    ctx->pc = 0x35A30Cu;
    {
        const bool branch_taken_0x35a30c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x35A310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A30Cu;
            // 0x35a310: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a30c) {
            ctx->pc = 0x35A594u;
            goto label_35a594;
        }
    }
    ctx->pc = 0x35A314u;
label_35a314:
    // 0x35a314: 0x8ea20e34  lw          $v0, 0xE34($s5)
    ctx->pc = 0x35a314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_35a318:
    // 0x35a318: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x35a318u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_35a31c:
    // 0x35a31c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_35a320:
    if (ctx->pc == 0x35A320u) {
        ctx->pc = 0x35A320u;
            // 0x35a320: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35A324u;
        goto label_35a324;
    }
    ctx->pc = 0x35A31Cu;
    {
        const bool branch_taken_0x35a31c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x35A320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A31Cu;
            // 0x35a320: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a31c) {
            ctx->pc = 0x35A334u;
            goto label_35a334;
        }
    }
    ctx->pc = 0x35A324u;
label_35a324:
    // 0x35a324: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x35a324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_35a328:
    // 0x35a328: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_35a32c:
    if (ctx->pc == 0x35A32Cu) {
        ctx->pc = 0x35A330u;
        goto label_35a330;
    }
    ctx->pc = 0x35A328u;
    {
        const bool branch_taken_0x35a328 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a328) {
            ctx->pc = 0x35A334u;
            goto label_35a334;
        }
    }
    ctx->pc = 0x35A330u;
label_35a330:
    // 0x35a330: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x35a330u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35a334:
    // 0x35a334: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_35a338:
    if (ctx->pc == 0x35A338u) {
        ctx->pc = 0x35A33Cu;
        goto label_35a33c;
    }
    ctx->pc = 0x35A334u;
    {
        const bool branch_taken_0x35a334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a334) {
            ctx->pc = 0x35A350u;
            goto label_35a350;
        }
    }
    ctx->pc = 0x35A33Cu;
label_35a33c:
    // 0x35a33c: 0xc075eb4  jal         func_1D7AD0
label_35a340:
    if (ctx->pc == 0x35A340u) {
        ctx->pc = 0x35A340u;
            // 0x35a340: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35A344u;
        goto label_35a344;
    }
    ctx->pc = 0x35A33Cu;
    SET_GPR_U32(ctx, 31, 0x35A344u);
    ctx->pc = 0x35A340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A33Cu;
            // 0x35a340: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A344u; }
        if (ctx->pc != 0x35A344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A344u; }
        if (ctx->pc != 0x35A344u) { return; }
    }
    ctx->pc = 0x35A344u;
label_35a344:
    // 0x35a344: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_35a348:
    if (ctx->pc == 0x35A348u) {
        ctx->pc = 0x35A34Cu;
        goto label_35a34c;
    }
    ctx->pc = 0x35A344u;
    {
        const bool branch_taken_0x35a344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a344) {
            ctx->pc = 0x35A350u;
            goto label_35a350;
        }
    }
    ctx->pc = 0x35A34Cu;
label_35a34c:
    // 0x35a34c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35a34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35a350:
    // 0x35a350: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_35a354:
    if (ctx->pc == 0x35A354u) {
        ctx->pc = 0x35A354u;
            // 0x35a354: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->pc = 0x35A358u;
        goto label_35a358;
    }
    ctx->pc = 0x35A350u;
    {
        const bool branch_taken_0x35a350 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a350) {
            ctx->pc = 0x35A354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A350u;
            // 0x35a354: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A36Cu;
            goto label_35a36c;
        }
    }
    ctx->pc = 0x35A358u;
label_35a358:
    // 0x35a358: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x35a358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_35a35c:
    // 0x35a35c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35a360:
    // 0x35a360: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_35a364:
    if (ctx->pc == 0x35A364u) {
        ctx->pc = 0x35A364u;
            // 0x35a364: 0x2a210008  slti        $at, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->pc = 0x35A368u;
        goto label_35a368;
    }
    ctx->pc = 0x35A360u;
    {
        const bool branch_taken_0x35a360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35a360) {
            ctx->pc = 0x35A364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A360u;
            // 0x35a364: 0x2a210008  slti        $at, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A38Cu;
            goto label_35a38c;
        }
    }
    ctx->pc = 0x35A368u;
label_35a368:
    // 0x35a368: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x35a368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_35a36c:
    // 0x35a36c: 0xc073234  jal         func_1CC8D0
label_35a370:
    if (ctx->pc == 0x35A370u) {
        ctx->pc = 0x35A370u;
            // 0x35a370: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x35A374u;
        goto label_35a374;
    }
    ctx->pc = 0x35A36Cu;
    SET_GPR_U32(ctx, 31, 0x35A374u);
    ctx->pc = 0x35A370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A36Cu;
            // 0x35a370: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A374u; }
        if (ctx->pc != 0x35A374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A374u; }
        if (ctx->pc != 0x35A374u) { return; }
    }
    ctx->pc = 0x35A374u;
label_35a374:
    // 0x35a374: 0x8ea40d60  lw          $a0, 0xD60($s5)
    ctx->pc = 0x35a374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
label_35a378:
    // 0x35a378: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x35a378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_35a37c:
    // 0x35a37c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x35a37cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_35a380:
    // 0x35a380: 0x320f809  jalr        $t9
label_35a384:
    if (ctx->pc == 0x35A384u) {
        ctx->pc = 0x35A384u;
            // 0x35a384: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x35A388u;
        goto label_35a388;
    }
    ctx->pc = 0x35A380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35A388u);
        ctx->pc = 0x35A384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A380u;
            // 0x35a384: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35A388u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35A388u; }
            if (ctx->pc != 0x35A388u) { return; }
        }
        }
    }
    ctx->pc = 0x35A388u;
label_35a388:
    // 0x35a388: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x35a388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_35a38c:
    // 0x35a38c: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
label_35a390:
    if (ctx->pc == 0x35A390u) {
        ctx->pc = 0x35A390u;
            // 0x35a390: 0x2625fff8  addiu       $a1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->pc = 0x35A394u;
        goto label_35a394;
    }
    ctx->pc = 0x35A38Cu;
    {
        const bool branch_taken_0x35a38c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a38c) {
            ctx->pc = 0x35A390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A38Cu;
            // 0x35a390: 0x2625fff8  addiu       $a1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A3A8u;
            goto label_35a3a8;
        }
    }
    ctx->pc = 0x35A394u;
label_35a394:
    // 0x35a394: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35a394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35a398:
    // 0x35a398: 0xc075ecc  jal         func_1D7B30
label_35a39c:
    if (ctx->pc == 0x35A39Cu) {
        ctx->pc = 0x35A39Cu;
            // 0x35a39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35A3A0u;
        goto label_35a3a0;
    }
    ctx->pc = 0x35A398u;
    SET_GPR_U32(ctx, 31, 0x35A3A0u);
    ctx->pc = 0x35A39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A398u;
            // 0x35a39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A3A0u; }
        if (ctx->pc != 0x35A3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A3A0u; }
        if (ctx->pc != 0x35A3A0u) { return; }
    }
    ctx->pc = 0x35A3A0u;
label_35a3a0:
    // 0x35a3a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_35a3a4:
    if (ctx->pc == 0x35A3A4u) {
        ctx->pc = 0x35A3A4u;
            // 0x35a3a4: 0x26b60560  addiu       $s6, $s5, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 1376));
        ctx->pc = 0x35A3A8u;
        goto label_35a3a8;
    }
    ctx->pc = 0x35A3A0u;
    {
        const bool branch_taken_0x35a3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A3A0u;
            // 0x35a3a4: 0x26b60560  addiu       $s6, $s5, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a3a0) {
            ctx->pc = 0x35A3B8u;
            goto label_35a3b8;
        }
    }
    ctx->pc = 0x35A3A8u;
label_35a3a8:
    // 0x35a3a8: 0xc075ecc  jal         func_1D7B30
label_35a3ac:
    if (ctx->pc == 0x35A3ACu) {
        ctx->pc = 0x35A3ACu;
            // 0x35a3ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35A3B0u;
        goto label_35a3b0;
    }
    ctx->pc = 0x35A3A8u;
    SET_GPR_U32(ctx, 31, 0x35A3B0u);
    ctx->pc = 0x35A3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A3A8u;
            // 0x35a3ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A3B0u; }
        if (ctx->pc != 0x35A3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A3B0u; }
        if (ctx->pc != 0x35A3B0u) { return; }
    }
    ctx->pc = 0x35A3B0u;
label_35a3b0:
    // 0x35a3b0: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x35a3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_35a3b4:
    // 0x35a3b4: 0x26b60560  addiu       $s6, $s5, 0x560
    ctx->pc = 0x35a3b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 1376));
label_35a3b8:
    // 0x35a3b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35a3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35a3bc:
    // 0x35a3bc: 0xc04f278  jal         func_13C9E0
label_35a3c0:
    if (ctx->pc == 0x35A3C0u) {
        ctx->pc = 0x35A3C0u;
            // 0x35a3c0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35A3C4u;
        goto label_35a3c4;
    }
    ctx->pc = 0x35A3BCu;
    SET_GPR_U32(ctx, 31, 0x35A3C4u);
    ctx->pc = 0x35A3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A3BCu;
            // 0x35a3c0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A3C4u; }
        if (ctx->pc != 0x35A3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A3C4u; }
        if (ctx->pc != 0x35A3C4u) { return; }
    }
    ctx->pc = 0x35A3C4u;
label_35a3c4:
    // 0x35a3c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35a3c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35a3c8:
    // 0x35a3c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x35a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_35a3cc:
    // 0x35a3cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x35a3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_35a3d0:
    // 0x35a3d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x35a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_35a3d4:
    // 0x35a3d4: 0xc04cbd8  jal         func_132F60
label_35a3d8:
    if (ctx->pc == 0x35A3D8u) {
        ctx->pc = 0x35A3D8u;
            // 0x35a3d8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x35A3DCu;
        goto label_35a3dc;
    }
    ctx->pc = 0x35A3D4u;
    SET_GPR_U32(ctx, 31, 0x35A3DCu);
    ctx->pc = 0x35A3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A3D4u;
            // 0x35a3d8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A3DCu; }
        if (ctx->pc != 0x35A3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A3DCu; }
        if (ctx->pc != 0x35A3DCu) { return; }
    }
    ctx->pc = 0x35A3DCu;
label_35a3dc:
    // 0x35a3dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x35a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_35a3e0:
    // 0x35a3e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35a3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35a3e4:
    // 0x35a3e4: 0xc04cca0  jal         func_133280
label_35a3e8:
    if (ctx->pc == 0x35A3E8u) {
        ctx->pc = 0x35A3E8u;
            // 0x35a3e8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35A3ECu;
        goto label_35a3ec;
    }
    ctx->pc = 0x35A3E4u;
    SET_GPR_U32(ctx, 31, 0x35A3ECu);
    ctx->pc = 0x35A3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A3E4u;
            // 0x35a3e8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A3ECu; }
        if (ctx->pc != 0x35A3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A3ECu; }
        if (ctx->pc != 0x35A3ECu) { return; }
    }
    ctx->pc = 0x35A3ECu;
label_35a3ec:
    // 0x35a3ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x35a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_35a3f0:
    // 0x35a3f0: 0x26a502c0  addiu       $a1, $s5, 0x2C0
    ctx->pc = 0x35a3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 704));
label_35a3f4:
    // 0x35a3f4: 0xc04cbe0  jal         func_132F80
label_35a3f8:
    if (ctx->pc == 0x35A3F8u) {
        ctx->pc = 0x35A3F8u;
            // 0x35a3f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35A3FCu;
        goto label_35a3fc;
    }
    ctx->pc = 0x35A3F4u;
    SET_GPR_U32(ctx, 31, 0x35A3FCu);
    ctx->pc = 0x35A3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A3F4u;
            // 0x35a3f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A3FCu; }
        if (ctx->pc != 0x35A3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A3FCu; }
        if (ctx->pc != 0x35A3FCu) { return; }
    }
    ctx->pc = 0x35A3FCu;
label_35a3fc:
    // 0x35a3fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35a3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35a400:
    // 0x35a400: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x35a400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_35a404:
    // 0x35a404: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35a404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35a408:
    // 0x35a408: 0x1483005b  bne         $a0, $v1, . + 4 + (0x5B << 2)
label_35a40c:
    if (ctx->pc == 0x35A40Cu) {
        ctx->pc = 0x35A410u;
        goto label_35a410;
    }
    ctx->pc = 0x35A408u;
    {
        const bool branch_taken_0x35a408 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35a408) {
            ctx->pc = 0x35A578u;
            goto label_35a578;
        }
    }
    ctx->pc = 0x35A410u;
label_35a410:
    // 0x35a410: 0xc074740  jal         func_1D1D00
label_35a414:
    if (ctx->pc == 0x35A414u) {
        ctx->pc = 0x35A414u;
            // 0x35a414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35A418u;
        goto label_35a418;
    }
    ctx->pc = 0x35A410u;
    SET_GPR_U32(ctx, 31, 0x35A418u);
    ctx->pc = 0x35A414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A410u;
            // 0x35a414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A418u; }
        if (ctx->pc != 0x35A418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A418u; }
        if (ctx->pc != 0x35A418u) { return; }
    }
    ctx->pc = 0x35A418u;
label_35a418:
    // 0x35a418: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_35a41c:
    if (ctx->pc == 0x35A41Cu) {
        ctx->pc = 0x35A41Cu;
            // 0x35a41c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x35A420u;
        goto label_35a420;
    }
    ctx->pc = 0x35A418u;
    {
        const bool branch_taken_0x35a418 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35a418) {
            ctx->pc = 0x35A41Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A418u;
            // 0x35a41c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A42Cu;
            goto label_35a42c;
        }
    }
    ctx->pc = 0x35A420u;
label_35a420:
    // 0x35a420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35a420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a424:
    // 0x35a424: 0x10000007  b           . + 4 + (0x7 << 2)
label_35a428:
    if (ctx->pc == 0x35A428u) {
        ctx->pc = 0x35A428u;
            // 0x35a428: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x35A42Cu;
        goto label_35a42c;
    }
    ctx->pc = 0x35A424u;
    {
        const bool branch_taken_0x35a424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A424u;
            // 0x35a428: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a424) {
            ctx->pc = 0x35A444u;
            goto label_35a444;
        }
    }
    ctx->pc = 0x35A42Cu;
label_35a42c:
    // 0x35a42c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35a42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_35a430:
    // 0x35a430: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35a430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_35a434:
    // 0x35a434: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35a434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a438:
    // 0x35a438: 0x0  nop
    ctx->pc = 0x35a438u;
    // NOP
label_35a43c:
    // 0x35a43c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x35a43cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_35a440:
    // 0x35a440: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x35a440u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_35a444:
    // 0x35a444: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x35a444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_35a448:
    // 0x35a448: 0x3c024184  lui         $v0, 0x4184
    ctx->pc = 0x35a448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16772 << 16));
label_35a44c:
    // 0x35a44c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35a44cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a450:
    // 0x35a450: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35a450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35a454:
    // 0x35a454: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x35a454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_35a458:
    // 0x35a458: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x35a458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_35a45c:
    // 0x35a45c: 0x3c024104  lui         $v0, 0x4104
    ctx->pc = 0x35a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16644 << 16));
label_35a460:
    // 0x35a460: 0x3442cd36  ori         $v0, $v0, 0xCD36
    ctx->pc = 0x35a460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52534);
label_35a464:
    // 0x35a464: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35a464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a468:
    // 0x35a468: 0x0  nop
    ctx->pc = 0x35a468u;
    // NOP
label_35a46c:
    // 0x35a46c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x35a46cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_35a470:
    // 0x35a470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35a470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a474:
    // 0x35a474: 0x0  nop
    ctx->pc = 0x35a474u;
    // NOP
label_35a478:
    // 0x35a478: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x35a478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_35a47c:
    // 0x35a47c: 0xc074740  jal         func_1D1D00
label_35a480:
    if (ctx->pc == 0x35A480u) {
        ctx->pc = 0x35A480u;
            // 0x35a480: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->pc = 0x35A484u;
        goto label_35a484;
    }
    ctx->pc = 0x35A47Cu;
    SET_GPR_U32(ctx, 31, 0x35A484u);
    ctx->pc = 0x35A480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A47Cu;
            // 0x35a480: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A484u; }
        if (ctx->pc != 0x35A484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A484u; }
        if (ctx->pc != 0x35A484u) { return; }
    }
    ctx->pc = 0x35A484u;
label_35a484:
    // 0x35a484: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_35a488:
    if (ctx->pc == 0x35A488u) {
        ctx->pc = 0x35A488u;
            // 0x35a488: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x35A48Cu;
        goto label_35a48c;
    }
    ctx->pc = 0x35A484u;
    {
        const bool branch_taken_0x35a484 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35a484) {
            ctx->pc = 0x35A488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A484u;
            // 0x35a488: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A498u;
            goto label_35a498;
        }
    }
    ctx->pc = 0x35A48Cu;
label_35a48c:
    // 0x35a48c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35a48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a490:
    // 0x35a490: 0x10000007  b           . + 4 + (0x7 << 2)
label_35a494:
    if (ctx->pc == 0x35A494u) {
        ctx->pc = 0x35A494u;
            // 0x35a494: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x35A498u;
        goto label_35a498;
    }
    ctx->pc = 0x35A490u;
    {
        const bool branch_taken_0x35a490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A490u;
            // 0x35a494: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a490) {
            ctx->pc = 0x35A4B0u;
            goto label_35a4b0;
        }
    }
    ctx->pc = 0x35A498u;
label_35a498:
    // 0x35a498: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35a498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_35a49c:
    // 0x35a49c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35a49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_35a4a0:
    // 0x35a4a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35a4a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a4a4:
    // 0x35a4a4: 0x0  nop
    ctx->pc = 0x35a4a4u;
    // NOP
label_35a4a8:
    // 0x35a4a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x35a4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_35a4ac:
    // 0x35a4ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x35a4acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_35a4b0:
    // 0x35a4b0: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x35a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_35a4b4:
    // 0x35a4b4: 0x3c024104  lui         $v0, 0x4104
    ctx->pc = 0x35a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16644 << 16));
label_35a4b8:
    // 0x35a4b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35a4b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a4bc:
    // 0x35a4bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x35a4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_35a4c0:
    // 0x35a4c0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x35a4c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_35a4c4:
    // 0x35a4c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35a4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35a4c8:
    // 0x35a4c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35a4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a4cc:
    // 0x35a4cc: 0x0  nop
    ctx->pc = 0x35a4ccu;
    // NOP
label_35a4d0:
    // 0x35a4d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x35a4d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_35a4d4:
    // 0x35a4d4: 0xc074740  jal         func_1D1D00
label_35a4d8:
    if (ctx->pc == 0x35A4D8u) {
        ctx->pc = 0x35A4D8u;
            // 0x35a4d8: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->pc = 0x35A4DCu;
        goto label_35a4dc;
    }
    ctx->pc = 0x35A4D4u;
    SET_GPR_U32(ctx, 31, 0x35A4DCu);
    ctx->pc = 0x35A4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A4D4u;
            // 0x35a4d8: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A4DCu; }
        if (ctx->pc != 0x35A4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A4DCu; }
        if (ctx->pc != 0x35A4DCu) { return; }
    }
    ctx->pc = 0x35A4DCu;
label_35a4dc:
    // 0x35a4dc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_35a4e0:
    if (ctx->pc == 0x35A4E0u) {
        ctx->pc = 0x35A4E0u;
            // 0x35a4e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x35A4E4u;
        goto label_35a4e4;
    }
    ctx->pc = 0x35A4DCu;
    {
        const bool branch_taken_0x35a4dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35a4dc) {
            ctx->pc = 0x35A4E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A4DCu;
            // 0x35a4e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A4F0u;
            goto label_35a4f0;
        }
    }
    ctx->pc = 0x35A4E4u;
label_35a4e4:
    // 0x35a4e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35a4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a4e8:
    // 0x35a4e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_35a4ec:
    if (ctx->pc == 0x35A4ECu) {
        ctx->pc = 0x35A4ECu;
            // 0x35a4ec: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x35A4F0u;
        goto label_35a4f0;
    }
    ctx->pc = 0x35A4E8u;
    {
        const bool branch_taken_0x35a4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A4E8u;
            // 0x35a4ec: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a4e8) {
            ctx->pc = 0x35A508u;
            goto label_35a508;
        }
    }
    ctx->pc = 0x35A4F0u;
label_35a4f0:
    // 0x35a4f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35a4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_35a4f4:
    // 0x35a4f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35a4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_35a4f8:
    // 0x35a4f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35a4f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a4fc:
    // 0x35a4fc: 0x0  nop
    ctx->pc = 0x35a4fcu;
    // NOP
label_35a500:
    // 0x35a500: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x35a500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_35a504:
    // 0x35a504: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x35a504u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_35a508:
    // 0x35a508: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x35a508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_35a50c:
    // 0x35a50c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x35a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_35a510:
    // 0x35a510: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35a510u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a514:
    // 0x35a514: 0x3c024184  lui         $v0, 0x4184
    ctx->pc = 0x35a514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16772 << 16));
label_35a518:
    // 0x35a518: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x35a518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_35a51c:
    // 0x35a51c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x35a51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_35a520:
    // 0x35a520: 0x3c024104  lui         $v0, 0x4104
    ctx->pc = 0x35a520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16644 << 16));
label_35a524:
    // 0x35a524: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35a524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35a528:
    // 0x35a528: 0x3442cd36  ori         $v0, $v0, 0xCD36
    ctx->pc = 0x35a528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52534);
label_35a52c:
    // 0x35a52c: 0x26a60300  addiu       $a2, $s5, 0x300
    ctx->pc = 0x35a52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 768));
label_35a530:
    // 0x35a530: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35a530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a534:
    // 0x35a534: 0x0  nop
    ctx->pc = 0x35a534u;
    // NOP
label_35a538:
    // 0x35a538: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x35a538u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_35a53c:
    // 0x35a53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35a53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a540:
    // 0x35a540: 0x0  nop
    ctx->pc = 0x35a540u;
    // NOP
label_35a544:
    // 0x35a544: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x35a544u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_35a548:
    // 0x35a548: 0xc04cbe0  jal         func_132F80
label_35a54c:
    if (ctx->pc == 0x35A54Cu) {
        ctx->pc = 0x35A54Cu;
            // 0x35a54c: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x35A550u;
        goto label_35a550;
    }
    ctx->pc = 0x35A548u;
    SET_GPR_U32(ctx, 31, 0x35A550u);
    ctx->pc = 0x35A54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A548u;
            // 0x35a54c: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A550u; }
        if (ctx->pc != 0x35A550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A550u; }
        if (ctx->pc != 0x35A550u) { return; }
    }
    ctx->pc = 0x35A550u;
label_35a550:
    // 0x35a550: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x35a550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_35a554:
    // 0x35a554: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35a554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35a558:
    // 0x35a558: 0xc04cca0  jal         func_133280
label_35a55c:
    if (ctx->pc == 0x35A55Cu) {
        ctx->pc = 0x35A55Cu;
            // 0x35a55c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35A560u;
        goto label_35a560;
    }
    ctx->pc = 0x35A558u;
    SET_GPR_U32(ctx, 31, 0x35A560u);
    ctx->pc = 0x35A55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A558u;
            // 0x35a55c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A560u; }
        if (ctx->pc != 0x35A560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A560u; }
        if (ctx->pc != 0x35A560u) { return; }
    }
    ctx->pc = 0x35A560u;
label_35a560:
    // 0x35a560: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35a560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35a564:
    // 0x35a564: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x35a564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_35a568:
    // 0x35a568: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x35a568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_35a56c:
    // 0x35a56c: 0xc0d6f74  jal         func_35BDD0
label_35a570:
    if (ctx->pc == 0x35A570u) {
        ctx->pc = 0x35A570u;
            // 0x35a570: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x35A574u;
        goto label_35a574;
    }
    ctx->pc = 0x35A56Cu;
    SET_GPR_U32(ctx, 31, 0x35A574u);
    ctx->pc = 0x35A570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A56Cu;
            // 0x35a570: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35BDD0u;
    if (runtime->hasFunction(0x35BDD0u)) {
        auto targetFn = runtime->lookupFunction(0x35BDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A574u; }
        if (ctx->pc != 0x35A574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035BDD0_0x35bdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A574u; }
        if (ctx->pc != 0x35A574u) { return; }
    }
    ctx->pc = 0x35A574u;
label_35a574:
    // 0x35a574: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x35a574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_35a578:
    // 0x35a578: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35a578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_35a57c:
    // 0x35a57c: 0x2e030080  sltiu       $v1, $s0, 0x80
    ctx->pc = 0x35a57cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_35a580:
    // 0x35a580: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_35a584:
    if (ctx->pc == 0x35A584u) {
        ctx->pc = 0x35A584u;
            // 0x35a584: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->pc = 0x35A588u;
        goto label_35a588;
    }
    ctx->pc = 0x35A580u;
    {
        const bool branch_taken_0x35a580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A580u;
            // 0x35a584: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a580) {
            ctx->pc = 0x35A58Cu;
            goto label_35a58c;
        }
    }
    ctx->pc = 0x35A588u;
label_35a588:
    // 0x35a588: 0x11182b  sltu        $v1, $zero, $s1
    ctx->pc = 0x35a588u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_35a58c:
    // 0x35a58c: 0x5460ff9d  bnel        $v1, $zero, . + 4 + (-0x63 << 2)
label_35a590:
    if (ctx->pc == 0x35A590u) {
        ctx->pc = 0x35A590u;
            // 0x35a590: 0x8e840050  lw          $a0, 0x50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
        ctx->pc = 0x35A594u;
        goto label_35a594;
    }
    ctx->pc = 0x35A58Cu;
    {
        const bool branch_taken_0x35a58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a58c) {
            ctx->pc = 0x35A590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A58Cu;
            // 0x35a590: 0x8e840050  lw          $a0, 0x50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A404u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35a404;
        }
    }
    ctx->pc = 0x35A594u;
label_35a594:
    // 0x35a594: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x35a594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_35a598:
    // 0x35a598: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x35a598u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_35a59c:
    // 0x35a59c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35a59cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35a5a0:
    // 0x35a5a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35a5a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35a5a4:
    // 0x35a5a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35a5a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35a5a8:
    // 0x35a5a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35a5a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35a5ac:
    // 0x35a5ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35a5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35a5b0:
    // 0x35a5b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35a5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35a5b4:
    // 0x35a5b4: 0x3e00008  jr          $ra
label_35a5b8:
    if (ctx->pc == 0x35A5B8u) {
        ctx->pc = 0x35A5B8u;
            // 0x35a5b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x35A5BCu;
        goto label_35a5bc;
    }
    ctx->pc = 0x35A5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A5B4u;
            // 0x35a5b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35A5BCu;
label_35a5bc:
    // 0x35a5bc: 0x0  nop
    ctx->pc = 0x35a5bcu;
    // NOP
}
