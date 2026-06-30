#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0056A390
// Address: 0x56a390 - 0x56a5e0
void sub_0056A390_0x56a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0056A390_0x56a390");
#endif

    switch (ctx->pc) {
        case 0x56a390u: goto label_56a390;
        case 0x56a394u: goto label_56a394;
        case 0x56a398u: goto label_56a398;
        case 0x56a39cu: goto label_56a39c;
        case 0x56a3a0u: goto label_56a3a0;
        case 0x56a3a4u: goto label_56a3a4;
        case 0x56a3a8u: goto label_56a3a8;
        case 0x56a3acu: goto label_56a3ac;
        case 0x56a3b0u: goto label_56a3b0;
        case 0x56a3b4u: goto label_56a3b4;
        case 0x56a3b8u: goto label_56a3b8;
        case 0x56a3bcu: goto label_56a3bc;
        case 0x56a3c0u: goto label_56a3c0;
        case 0x56a3c4u: goto label_56a3c4;
        case 0x56a3c8u: goto label_56a3c8;
        case 0x56a3ccu: goto label_56a3cc;
        case 0x56a3d0u: goto label_56a3d0;
        case 0x56a3d4u: goto label_56a3d4;
        case 0x56a3d8u: goto label_56a3d8;
        case 0x56a3dcu: goto label_56a3dc;
        case 0x56a3e0u: goto label_56a3e0;
        case 0x56a3e4u: goto label_56a3e4;
        case 0x56a3e8u: goto label_56a3e8;
        case 0x56a3ecu: goto label_56a3ec;
        case 0x56a3f0u: goto label_56a3f0;
        case 0x56a3f4u: goto label_56a3f4;
        case 0x56a3f8u: goto label_56a3f8;
        case 0x56a3fcu: goto label_56a3fc;
        case 0x56a400u: goto label_56a400;
        case 0x56a404u: goto label_56a404;
        case 0x56a408u: goto label_56a408;
        case 0x56a40cu: goto label_56a40c;
        case 0x56a410u: goto label_56a410;
        case 0x56a414u: goto label_56a414;
        case 0x56a418u: goto label_56a418;
        case 0x56a41cu: goto label_56a41c;
        case 0x56a420u: goto label_56a420;
        case 0x56a424u: goto label_56a424;
        case 0x56a428u: goto label_56a428;
        case 0x56a42cu: goto label_56a42c;
        case 0x56a430u: goto label_56a430;
        case 0x56a434u: goto label_56a434;
        case 0x56a438u: goto label_56a438;
        case 0x56a43cu: goto label_56a43c;
        case 0x56a440u: goto label_56a440;
        case 0x56a444u: goto label_56a444;
        case 0x56a448u: goto label_56a448;
        case 0x56a44cu: goto label_56a44c;
        case 0x56a450u: goto label_56a450;
        case 0x56a454u: goto label_56a454;
        case 0x56a458u: goto label_56a458;
        case 0x56a45cu: goto label_56a45c;
        case 0x56a460u: goto label_56a460;
        case 0x56a464u: goto label_56a464;
        case 0x56a468u: goto label_56a468;
        case 0x56a46cu: goto label_56a46c;
        case 0x56a470u: goto label_56a470;
        case 0x56a474u: goto label_56a474;
        case 0x56a478u: goto label_56a478;
        case 0x56a47cu: goto label_56a47c;
        case 0x56a480u: goto label_56a480;
        case 0x56a484u: goto label_56a484;
        case 0x56a488u: goto label_56a488;
        case 0x56a48cu: goto label_56a48c;
        case 0x56a490u: goto label_56a490;
        case 0x56a494u: goto label_56a494;
        case 0x56a498u: goto label_56a498;
        case 0x56a49cu: goto label_56a49c;
        case 0x56a4a0u: goto label_56a4a0;
        case 0x56a4a4u: goto label_56a4a4;
        case 0x56a4a8u: goto label_56a4a8;
        case 0x56a4acu: goto label_56a4ac;
        case 0x56a4b0u: goto label_56a4b0;
        case 0x56a4b4u: goto label_56a4b4;
        case 0x56a4b8u: goto label_56a4b8;
        case 0x56a4bcu: goto label_56a4bc;
        case 0x56a4c0u: goto label_56a4c0;
        case 0x56a4c4u: goto label_56a4c4;
        case 0x56a4c8u: goto label_56a4c8;
        case 0x56a4ccu: goto label_56a4cc;
        case 0x56a4d0u: goto label_56a4d0;
        case 0x56a4d4u: goto label_56a4d4;
        case 0x56a4d8u: goto label_56a4d8;
        case 0x56a4dcu: goto label_56a4dc;
        case 0x56a4e0u: goto label_56a4e0;
        case 0x56a4e4u: goto label_56a4e4;
        case 0x56a4e8u: goto label_56a4e8;
        case 0x56a4ecu: goto label_56a4ec;
        case 0x56a4f0u: goto label_56a4f0;
        case 0x56a4f4u: goto label_56a4f4;
        case 0x56a4f8u: goto label_56a4f8;
        case 0x56a4fcu: goto label_56a4fc;
        case 0x56a500u: goto label_56a500;
        case 0x56a504u: goto label_56a504;
        case 0x56a508u: goto label_56a508;
        case 0x56a50cu: goto label_56a50c;
        case 0x56a510u: goto label_56a510;
        case 0x56a514u: goto label_56a514;
        case 0x56a518u: goto label_56a518;
        case 0x56a51cu: goto label_56a51c;
        case 0x56a520u: goto label_56a520;
        case 0x56a524u: goto label_56a524;
        case 0x56a528u: goto label_56a528;
        case 0x56a52cu: goto label_56a52c;
        case 0x56a530u: goto label_56a530;
        case 0x56a534u: goto label_56a534;
        case 0x56a538u: goto label_56a538;
        case 0x56a53cu: goto label_56a53c;
        case 0x56a540u: goto label_56a540;
        case 0x56a544u: goto label_56a544;
        case 0x56a548u: goto label_56a548;
        case 0x56a54cu: goto label_56a54c;
        case 0x56a550u: goto label_56a550;
        case 0x56a554u: goto label_56a554;
        case 0x56a558u: goto label_56a558;
        case 0x56a55cu: goto label_56a55c;
        case 0x56a560u: goto label_56a560;
        case 0x56a564u: goto label_56a564;
        case 0x56a568u: goto label_56a568;
        case 0x56a56cu: goto label_56a56c;
        case 0x56a570u: goto label_56a570;
        case 0x56a574u: goto label_56a574;
        case 0x56a578u: goto label_56a578;
        case 0x56a57cu: goto label_56a57c;
        case 0x56a580u: goto label_56a580;
        case 0x56a584u: goto label_56a584;
        case 0x56a588u: goto label_56a588;
        case 0x56a58cu: goto label_56a58c;
        case 0x56a590u: goto label_56a590;
        case 0x56a594u: goto label_56a594;
        case 0x56a598u: goto label_56a598;
        case 0x56a59cu: goto label_56a59c;
        case 0x56a5a0u: goto label_56a5a0;
        case 0x56a5a4u: goto label_56a5a4;
        case 0x56a5a8u: goto label_56a5a8;
        case 0x56a5acu: goto label_56a5ac;
        case 0x56a5b0u: goto label_56a5b0;
        case 0x56a5b4u: goto label_56a5b4;
        case 0x56a5b8u: goto label_56a5b8;
        case 0x56a5bcu: goto label_56a5bc;
        case 0x56a5c0u: goto label_56a5c0;
        case 0x56a5c4u: goto label_56a5c4;
        case 0x56a5c8u: goto label_56a5c8;
        case 0x56a5ccu: goto label_56a5cc;
        case 0x56a5d0u: goto label_56a5d0;
        case 0x56a5d4u: goto label_56a5d4;
        case 0x56a5d8u: goto label_56a5d8;
        case 0x56a5dcu: goto label_56a5dc;
        default: break;
    }

    ctx->pc = 0x56a390u;

label_56a390:
    // 0x56a390: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x56a390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_56a394:
    // 0x56a394: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x56a394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_56a398:
    // 0x56a398: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x56a398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_56a39c:
    // 0x56a39c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x56a39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_56a3a0:
    // 0x56a3a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x56a3a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_56a3a4:
    // 0x56a3a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x56a3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_56a3a8:
    // 0x56a3a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x56a3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_56a3ac:
    // 0x56a3ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56a3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_56a3b0:
    // 0x56a3b0: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x56a3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_56a3b4:
    // 0x56a3b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x56a3b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_56a3b8:
    // 0x56a3b8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x56a3b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_56a3bc:
    // 0x56a3bc: 0x320f809  jalr        $t9
label_56a3c0:
    if (ctx->pc == 0x56A3C0u) {
        ctx->pc = 0x56A3C0u;
            // 0x56a3c0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56A3C4u;
        goto label_56a3c4;
    }
    ctx->pc = 0x56A3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56A3C4u);
        ctx->pc = 0x56A3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A3BCu;
            // 0x56a3c0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56A3C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56A3C4u; }
            if (ctx->pc != 0x56A3C4u) { return; }
        }
        }
    }
    ctx->pc = 0x56A3C4u;
label_56a3c4:
    // 0x56a3c4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x56a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_56a3c8:
    // 0x56a3c8: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_56a3cc:
    if (ctx->pc == 0x56A3CCu) {
        ctx->pc = 0x56A3CCu;
            // 0x56a3cc: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->pc = 0x56A3D0u;
        goto label_56a3d0;
    }
    ctx->pc = 0x56A3C8u;
    {
        const bool branch_taken_0x56a3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a3c8) {
            ctx->pc = 0x56A3CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56A3C8u;
            // 0x56a3cc: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56A430u;
            goto label_56a430;
        }
    }
    ctx->pc = 0x56A3D0u;
label_56a3d0:
    // 0x56a3d0: 0x8e700014  lw          $s0, 0x14($s3)
    ctx->pc = 0x56a3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_56a3d4:
    // 0x56a3d4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x56a3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_56a3d8:
    // 0x56a3d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x56a3d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_56a3dc:
    // 0x56a3dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x56a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_56a3e0:
    // 0x56a3e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_56a3e4:
    if (ctx->pc == 0x56A3E4u) {
        ctx->pc = 0x56A3E8u;
        goto label_56a3e8;
    }
    ctx->pc = 0x56A3E0u;
    {
        const bool branch_taken_0x56a3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a3e0) {
            ctx->pc = 0x56A3F8u;
            goto label_56a3f8;
        }
    }
    ctx->pc = 0x56A3E8u;
label_56a3e8:
    // 0x56a3e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x56a3e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_56a3ec:
    // 0x56a3ec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x56a3ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_56a3f0:
    // 0x56a3f0: 0x320f809  jalr        $t9
label_56a3f4:
    if (ctx->pc == 0x56A3F4u) {
        ctx->pc = 0x56A3F4u;
            // 0x56a3f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x56A3F8u;
        goto label_56a3f8;
    }
    ctx->pc = 0x56A3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56A3F8u);
        ctx->pc = 0x56A3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A3F0u;
            // 0x56a3f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56A3F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56A3F8u; }
            if (ctx->pc != 0x56A3F8u) { return; }
        }
        }
    }
    ctx->pc = 0x56A3F8u;
label_56a3f8:
    // 0x56a3f8: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x56a3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_56a3fc:
    // 0x56a3fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x56a3fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_56a400:
    // 0x56a400: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x56a400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_56a404:
    // 0x56a404: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x56a404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_56a408:
    // 0x56a408: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x56a408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_56a40c:
    // 0x56a40c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x56a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_56a410:
    // 0x56a410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x56a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_56a414:
    // 0x56a414: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x56a414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_56a418:
    // 0x56a418: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x56a418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_56a41c:
    // 0x56a41c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x56a41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_56a420:
    // 0x56a420: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_56a424:
    if (ctx->pc == 0x56A424u) {
        ctx->pc = 0x56A424u;
            // 0x56a424: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x56A428u;
        goto label_56a428;
    }
    ctx->pc = 0x56A420u;
    {
        const bool branch_taken_0x56a420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x56a420) {
            ctx->pc = 0x56A424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56A420u;
            // 0x56a424: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56A3D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_56a3d8;
        }
    }
    ctx->pc = 0x56A428u;
label_56a428:
    // 0x56a428: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x56a428u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_56a42c:
    // 0x56a42c: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x56a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_56a430:
    // 0x56a430: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x56a430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_56a434:
    // 0x56a434: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x56a434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_56a438:
    // 0x56a438: 0x320f809  jalr        $t9
label_56a43c:
    if (ctx->pc == 0x56A43Cu) {
        ctx->pc = 0x56A440u;
        goto label_56a440;
    }
    ctx->pc = 0x56A438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56A440u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x56A440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56A440u; }
            if (ctx->pc != 0x56A440u) { return; }
        }
        }
    }
    ctx->pc = 0x56A440u;
label_56a440:
    // 0x56a440: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x56a440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_56a444:
    // 0x56a444: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x56a444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_56a448:
    // 0x56a448: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x56a448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_56a44c:
    // 0x56a44c: 0x320f809  jalr        $t9
label_56a450:
    if (ctx->pc == 0x56A450u) {
        ctx->pc = 0x56A454u;
        goto label_56a454;
    }
    ctx->pc = 0x56A44Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56A454u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x56A454u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56A454u; }
            if (ctx->pc != 0x56A454u) { return; }
        }
        }
    }
    ctx->pc = 0x56A454u;
label_56a454:
    // 0x56a454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x56a454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_56a458:
    // 0x56a458: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x56a458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_56a45c:
    // 0x56a45c: 0xa2620028  sb          $v0, 0x28($s3)
    ctx->pc = 0x56a45cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 2));
label_56a460:
    // 0x56a460: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x56a460u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
label_56a464:
    // 0x56a464: 0x96820012  lhu         $v0, 0x12($s4)
    ctx->pc = 0x56a464u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
label_56a468:
    // 0x56a468: 0x2838021  addu        $s0, $s4, $v1
    ctx->pc = 0x56a468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_56a46c:
    // 0x56a46c: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x56a46cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_56a470:
    // 0x56a470: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x56a470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_56a474:
    // 0x56a474: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x56a474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_56a478:
    // 0x56a478: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_56a47c:
    if (ctx->pc == 0x56A47Cu) {
        ctx->pc = 0x56A47Cu;
            // 0x56a47c: 0x2831821  addu        $v1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->pc = 0x56A480u;
        goto label_56a480;
    }
    ctx->pc = 0x56A478u;
    {
        const bool branch_taken_0x56a478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A478u;
            // 0x56a47c: 0x2831821  addu        $v1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a478) {
            ctx->pc = 0x56A488u;
            goto label_56a488;
        }
    }
    ctx->pc = 0x56A480u;
label_56a480:
    // 0x56a480: 0x10000043  b           . + 4 + (0x43 << 2)
label_56a484:
    if (ctx->pc == 0x56A484u) {
        ctx->pc = 0x56A488u;
        goto label_56a488;
    }
    ctx->pc = 0x56A480u;
    {
        const bool branch_taken_0x56a480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a480) {
            ctx->pc = 0x56A590u;
            goto label_56a590;
        }
    }
    ctx->pc = 0x56A488u;
label_56a488:
    // 0x56a488: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x56a488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_56a48c:
    // 0x56a48c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x56a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_56a490:
    // 0x56a490: 0x24429de0  addiu       $v0, $v0, -0x6220
    ctx->pc = 0x56a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942176));
label_56a494:
    // 0x56a494: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x56a494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_56a498:
    // 0x56a498: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x56a498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_56a49c:
    // 0x56a49c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x56a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_56a4a0:
    // 0x56a4a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x56a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_56a4a4:
    // 0x56a4a4: 0xa3a40065  sb          $a0, 0x65($sp)
    ctx->pc = 0x56a4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 101), (uint8_t)GPR_U32(ctx, 4));
label_56a4a8:
    // 0x56a4a8: 0xa3a30064  sb          $v1, 0x64($sp)
    ctx->pc = 0x56a4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 100), (uint8_t)GPR_U32(ctx, 3));
label_56a4ac:
    // 0x56a4ac: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x56a4acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_56a4b0:
    // 0x56a4b0: 0xa21804  sllv        $v1, $v0, $a1
    ctx->pc = 0x56a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_56a4b4:
    // 0x56a4b4: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x56a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_56a4b8:
    // 0x56a4b8: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x56a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_56a4bc:
    // 0x56a4bc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x56a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_56a4c0:
    // 0x56a4c0: 0xa3a40066  sb          $a0, 0x66($sp)
    ctx->pc = 0x56a4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 102), (uint8_t)GPR_U32(ctx, 4));
label_56a4c4:
    // 0x56a4c4: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x56a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_56a4c8:
    // 0x56a4c8: 0xa3a30067  sb          $v1, 0x67($sp)
    ctx->pc = 0x56a4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 103), (uint8_t)GPR_U32(ctx, 3));
label_56a4cc:
    // 0x56a4cc: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x56a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_56a4d0:
    // 0x56a4d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_56a4d4:
    if (ctx->pc == 0x56A4D4u) {
        ctx->pc = 0x56A4D4u;
            // 0x56a4d4: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->pc = 0x56A4D8u;
        goto label_56a4d8;
    }
    ctx->pc = 0x56A4D0u;
    {
        const bool branch_taken_0x56a4d0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x56A4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A4D0u;
            // 0x56a4d4: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a4d0) {
            ctx->pc = 0x56A4E0u;
            goto label_56a4e0;
        }
    }
    ctx->pc = 0x56A4D8u;
label_56a4d8:
    // 0x56a4d8: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x56a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_56a4dc:
    // 0x56a4dc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x56a4dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_56a4e0:
    // 0x56a4e0: 0xa3a20068  sb          $v0, 0x68($sp)
    ctx->pc = 0x56a4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 2));
label_56a4e4:
    // 0x56a4e4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x56a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_56a4e8:
    // 0x56a4e8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x56a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_56a4ec:
    // 0x56a4ec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x56a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_56a4f0:
    // 0x56a4f0: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x56a4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_56a4f4:
    // 0x56a4f4: 0xa3a20069  sb          $v0, 0x69($sp)
    ctx->pc = 0x56a4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 105), (uint8_t)GPR_U32(ctx, 2));
label_56a4f8:
    // 0x56a4f8: 0xc0fe54c  jal         func_3F9530
label_56a4fc:
    if (ctx->pc == 0x56A4FCu) {
        ctx->pc = 0x56A4FCu;
            // 0x56a4fc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x56A500u;
        goto label_56a500;
    }
    ctx->pc = 0x56A4F8u;
    SET_GPR_U32(ctx, 31, 0x56A500u);
    ctx->pc = 0x56A4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A4F8u;
            // 0x56a4fc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A500u; }
        if (ctx->pc != 0x56A500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A500u; }
        if (ctx->pc != 0x56A500u) { return; }
    }
    ctx->pc = 0x56A500u;
label_56a500:
    // 0x56a500: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_56a504:
    if (ctx->pc == 0x56A504u) {
        ctx->pc = 0x56A508u;
        goto label_56a508;
    }
    ctx->pc = 0x56A500u;
    {
        const bool branch_taken_0x56a500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a500) {
            ctx->pc = 0x56A560u;
            goto label_56a560;
        }
    }
    ctx->pc = 0x56A508u;
label_56a508:
    // 0x56a508: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x56a508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_56a50c:
    // 0x56a50c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x56a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_56a510:
    // 0x56a510: 0x2463fcd0  addiu       $v1, $v1, -0x330
    ctx->pc = 0x56a510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966480));
label_56a514:
    // 0x56a514: 0x24849c10  addiu       $a0, $a0, -0x63F0
    ctx->pc = 0x56a514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941712));
label_56a518:
    // 0x56a518: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x56a518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_56a51c:
    // 0x56a51c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x56a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_56a520:
    // 0x56a520: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x56a520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_56a524:
    // 0x56a524: 0x24639de0  addiu       $v1, $v1, -0x6220
    ctx->pc = 0x56a524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942176));
label_56a528:
    // 0x56a528: 0x93a50064  lbu         $a1, 0x64($sp)
    ctx->pc = 0x56a528u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 100)));
label_56a52c:
    // 0x56a52c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x56a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_56a530:
    // 0x56a530: 0x93a40065  lbu         $a0, 0x65($sp)
    ctx->pc = 0x56a530u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 101)));
label_56a534:
    // 0x56a534: 0xa0450004  sb          $a1, 0x4($v0)
    ctx->pc = 0x56a534u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 5));
label_56a538:
    // 0x56a538: 0x93a30066  lbu         $v1, 0x66($sp)
    ctx->pc = 0x56a538u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 102)));
label_56a53c:
    // 0x56a53c: 0xa0440005  sb          $a0, 0x5($v0)
    ctx->pc = 0x56a53cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 4));
label_56a540:
    // 0x56a540: 0x93a50067  lbu         $a1, 0x67($sp)
    ctx->pc = 0x56a540u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 103)));
label_56a544:
    // 0x56a544: 0xa0430006  sb          $v1, 0x6($v0)
    ctx->pc = 0x56a544u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 3));
label_56a548:
    // 0x56a548: 0x93a40068  lbu         $a0, 0x68($sp)
    ctx->pc = 0x56a548u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
label_56a54c:
    // 0x56a54c: 0xa0450007  sb          $a1, 0x7($v0)
    ctx->pc = 0x56a54cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 5));
label_56a550:
    // 0x56a550: 0x93a30069  lbu         $v1, 0x69($sp)
    ctx->pc = 0x56a550u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 105)));
label_56a554:
    // 0x56a554: 0xa0440008  sb          $a0, 0x8($v0)
    ctx->pc = 0x56a554u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 4));
label_56a558:
    // 0x56a558: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x56a558u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 3));
label_56a55c:
    // 0x56a55c: 0x0  nop
    ctx->pc = 0x56a55cu;
    // NOP
label_56a560:
    // 0x56a560: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x56a560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_56a564:
    // 0x56a564: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x56a564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_56a568:
    // 0x56a568: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x56a568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_56a56c:
    // 0x56a56c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x56a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_56a570:
    // 0x56a570: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x56a570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_56a574:
    // 0x56a574: 0x27a700b8  addiu       $a3, $sp, 0xB8
    ctx->pc = 0x56a574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_56a578:
    // 0x56a578: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x56a578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_56a57c:
    // 0x56a57c: 0xc0b4904  jal         func_2D2410
label_56a580:
    if (ctx->pc == 0x56A580u) {
        ctx->pc = 0x56A580u;
            // 0x56a580: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x56A584u;
        goto label_56a584;
    }
    ctx->pc = 0x56A57Cu;
    SET_GPR_U32(ctx, 31, 0x56A584u);
    ctx->pc = 0x56A580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A57Cu;
            // 0x56a580: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A584u; }
        if (ctx->pc != 0x56A584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A584u; }
        if (ctx->pc != 0x56A584u) { return; }
    }
    ctx->pc = 0x56A584u;
label_56a584:
    // 0x56a584: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x56a584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_56a588:
    // 0x56a588: 0x2442fcd0  addiu       $v0, $v0, -0x330
    ctx->pc = 0x56a588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966480));
label_56a58c:
    // 0x56a58c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x56a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_56a590:
    // 0x56a590: 0x92820014  lbu         $v0, 0x14($s4)
    ctx->pc = 0x56a590u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
label_56a594:
    // 0x56a594: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x56a594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_56a598:
    // 0x56a598: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x56a598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_56a59c:
    // 0x56a59c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x56a59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_56a5a0:
    // 0x56a5a0: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_56a5a4:
    if (ctx->pc == 0x56A5A4u) {
        ctx->pc = 0x56A5A4u;
            // 0x56a5a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x56A5A8u;
        goto label_56a5a8;
    }
    ctx->pc = 0x56A5A0u;
    {
        const bool branch_taken_0x56a5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x56A5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A5A0u;
            // 0x56a5a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a5a0) {
            ctx->pc = 0x56A470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_56a470;
        }
    }
    ctx->pc = 0x56A5A8u;
label_56a5a8:
    // 0x56a5a8: 0xa2600028  sb          $zero, 0x28($s3)
    ctx->pc = 0x56a5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 0));
label_56a5ac:
    // 0x56a5ac: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x56a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_56a5b0:
    // 0x56a5b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x56a5b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_56a5b4:
    // 0x56a5b4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x56a5b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_56a5b8:
    // 0x56a5b8: 0x320f809  jalr        $t9
label_56a5bc:
    if (ctx->pc == 0x56A5BCu) {
        ctx->pc = 0x56A5C0u;
        goto label_56a5c0;
    }
    ctx->pc = 0x56A5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56A5C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x56A5C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56A5C0u; }
            if (ctx->pc != 0x56A5C0u) { return; }
        }
        }
    }
    ctx->pc = 0x56A5C0u;
label_56a5c0:
    // 0x56a5c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x56a5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_56a5c4:
    // 0x56a5c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x56a5c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_56a5c8:
    // 0x56a5c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x56a5c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_56a5cc:
    // 0x56a5cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x56a5ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_56a5d0:
    // 0x56a5d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x56a5d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_56a5d4:
    // 0x56a5d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x56a5d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_56a5d8:
    // 0x56a5d8: 0x3e00008  jr          $ra
label_56a5dc:
    if (ctx->pc == 0x56A5DCu) {
        ctx->pc = 0x56A5DCu;
            // 0x56a5dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x56A5E0u;
        goto label_fallthrough_0x56a5d8;
    }
    ctx->pc = 0x56A5D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56A5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A5D8u;
            // 0x56a5dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x56a5d8:
    ctx->pc = 0x56A5E0u;
}
