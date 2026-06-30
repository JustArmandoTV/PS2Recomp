#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041A380
// Address: 0x41a380 - 0x41a5b0
void sub_0041A380_0x41a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A380_0x41a380");
#endif

    switch (ctx->pc) {
        case 0x41a380u: goto label_41a380;
        case 0x41a384u: goto label_41a384;
        case 0x41a388u: goto label_41a388;
        case 0x41a38cu: goto label_41a38c;
        case 0x41a390u: goto label_41a390;
        case 0x41a394u: goto label_41a394;
        case 0x41a398u: goto label_41a398;
        case 0x41a39cu: goto label_41a39c;
        case 0x41a3a0u: goto label_41a3a0;
        case 0x41a3a4u: goto label_41a3a4;
        case 0x41a3a8u: goto label_41a3a8;
        case 0x41a3acu: goto label_41a3ac;
        case 0x41a3b0u: goto label_41a3b0;
        case 0x41a3b4u: goto label_41a3b4;
        case 0x41a3b8u: goto label_41a3b8;
        case 0x41a3bcu: goto label_41a3bc;
        case 0x41a3c0u: goto label_41a3c0;
        case 0x41a3c4u: goto label_41a3c4;
        case 0x41a3c8u: goto label_41a3c8;
        case 0x41a3ccu: goto label_41a3cc;
        case 0x41a3d0u: goto label_41a3d0;
        case 0x41a3d4u: goto label_41a3d4;
        case 0x41a3d8u: goto label_41a3d8;
        case 0x41a3dcu: goto label_41a3dc;
        case 0x41a3e0u: goto label_41a3e0;
        case 0x41a3e4u: goto label_41a3e4;
        case 0x41a3e8u: goto label_41a3e8;
        case 0x41a3ecu: goto label_41a3ec;
        case 0x41a3f0u: goto label_41a3f0;
        case 0x41a3f4u: goto label_41a3f4;
        case 0x41a3f8u: goto label_41a3f8;
        case 0x41a3fcu: goto label_41a3fc;
        case 0x41a400u: goto label_41a400;
        case 0x41a404u: goto label_41a404;
        case 0x41a408u: goto label_41a408;
        case 0x41a40cu: goto label_41a40c;
        case 0x41a410u: goto label_41a410;
        case 0x41a414u: goto label_41a414;
        case 0x41a418u: goto label_41a418;
        case 0x41a41cu: goto label_41a41c;
        case 0x41a420u: goto label_41a420;
        case 0x41a424u: goto label_41a424;
        case 0x41a428u: goto label_41a428;
        case 0x41a42cu: goto label_41a42c;
        case 0x41a430u: goto label_41a430;
        case 0x41a434u: goto label_41a434;
        case 0x41a438u: goto label_41a438;
        case 0x41a43cu: goto label_41a43c;
        case 0x41a440u: goto label_41a440;
        case 0x41a444u: goto label_41a444;
        case 0x41a448u: goto label_41a448;
        case 0x41a44cu: goto label_41a44c;
        case 0x41a450u: goto label_41a450;
        case 0x41a454u: goto label_41a454;
        case 0x41a458u: goto label_41a458;
        case 0x41a45cu: goto label_41a45c;
        case 0x41a460u: goto label_41a460;
        case 0x41a464u: goto label_41a464;
        case 0x41a468u: goto label_41a468;
        case 0x41a46cu: goto label_41a46c;
        case 0x41a470u: goto label_41a470;
        case 0x41a474u: goto label_41a474;
        case 0x41a478u: goto label_41a478;
        case 0x41a47cu: goto label_41a47c;
        case 0x41a480u: goto label_41a480;
        case 0x41a484u: goto label_41a484;
        case 0x41a488u: goto label_41a488;
        case 0x41a48cu: goto label_41a48c;
        case 0x41a490u: goto label_41a490;
        case 0x41a494u: goto label_41a494;
        case 0x41a498u: goto label_41a498;
        case 0x41a49cu: goto label_41a49c;
        case 0x41a4a0u: goto label_41a4a0;
        case 0x41a4a4u: goto label_41a4a4;
        case 0x41a4a8u: goto label_41a4a8;
        case 0x41a4acu: goto label_41a4ac;
        case 0x41a4b0u: goto label_41a4b0;
        case 0x41a4b4u: goto label_41a4b4;
        case 0x41a4b8u: goto label_41a4b8;
        case 0x41a4bcu: goto label_41a4bc;
        case 0x41a4c0u: goto label_41a4c0;
        case 0x41a4c4u: goto label_41a4c4;
        case 0x41a4c8u: goto label_41a4c8;
        case 0x41a4ccu: goto label_41a4cc;
        case 0x41a4d0u: goto label_41a4d0;
        case 0x41a4d4u: goto label_41a4d4;
        case 0x41a4d8u: goto label_41a4d8;
        case 0x41a4dcu: goto label_41a4dc;
        case 0x41a4e0u: goto label_41a4e0;
        case 0x41a4e4u: goto label_41a4e4;
        case 0x41a4e8u: goto label_41a4e8;
        case 0x41a4ecu: goto label_41a4ec;
        case 0x41a4f0u: goto label_41a4f0;
        case 0x41a4f4u: goto label_41a4f4;
        case 0x41a4f8u: goto label_41a4f8;
        case 0x41a4fcu: goto label_41a4fc;
        case 0x41a500u: goto label_41a500;
        case 0x41a504u: goto label_41a504;
        case 0x41a508u: goto label_41a508;
        case 0x41a50cu: goto label_41a50c;
        case 0x41a510u: goto label_41a510;
        case 0x41a514u: goto label_41a514;
        case 0x41a518u: goto label_41a518;
        case 0x41a51cu: goto label_41a51c;
        case 0x41a520u: goto label_41a520;
        case 0x41a524u: goto label_41a524;
        case 0x41a528u: goto label_41a528;
        case 0x41a52cu: goto label_41a52c;
        case 0x41a530u: goto label_41a530;
        case 0x41a534u: goto label_41a534;
        case 0x41a538u: goto label_41a538;
        case 0x41a53cu: goto label_41a53c;
        case 0x41a540u: goto label_41a540;
        case 0x41a544u: goto label_41a544;
        case 0x41a548u: goto label_41a548;
        case 0x41a54cu: goto label_41a54c;
        case 0x41a550u: goto label_41a550;
        case 0x41a554u: goto label_41a554;
        case 0x41a558u: goto label_41a558;
        case 0x41a55cu: goto label_41a55c;
        case 0x41a560u: goto label_41a560;
        case 0x41a564u: goto label_41a564;
        case 0x41a568u: goto label_41a568;
        case 0x41a56cu: goto label_41a56c;
        case 0x41a570u: goto label_41a570;
        case 0x41a574u: goto label_41a574;
        case 0x41a578u: goto label_41a578;
        case 0x41a57cu: goto label_41a57c;
        case 0x41a580u: goto label_41a580;
        case 0x41a584u: goto label_41a584;
        case 0x41a588u: goto label_41a588;
        case 0x41a58cu: goto label_41a58c;
        case 0x41a590u: goto label_41a590;
        case 0x41a594u: goto label_41a594;
        case 0x41a598u: goto label_41a598;
        case 0x41a59cu: goto label_41a59c;
        case 0x41a5a0u: goto label_41a5a0;
        case 0x41a5a4u: goto label_41a5a4;
        case 0x41a5a8u: goto label_41a5a8;
        case 0x41a5acu: goto label_41a5ac;
        default: break;
    }

    ctx->pc = 0x41a380u;

label_41a380:
    // 0x41a380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41a380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41a384:
    // 0x41a384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41a388:
    // 0x41a388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41a388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41a38c:
    // 0x41a38c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41a38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41a390:
    // 0x41a390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41a390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41a394:
    // 0x41a394: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_41a398:
    if (ctx->pc == 0x41A398u) {
        ctx->pc = 0x41A398u;
            // 0x41a398: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A39Cu;
        goto label_41a39c;
    }
    ctx->pc = 0x41A394u;
    {
        const bool branch_taken_0x41a394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A394u;
            // 0x41a398: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a394) {
            ctx->pc = 0x41A4C8u;
            goto label_41a4c8;
        }
    }
    ctx->pc = 0x41A39Cu;
label_41a39c:
    // 0x41a39c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41a3a0:
    // 0x41a3a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41a3a4:
    // 0x41a3a4: 0x2463b680  addiu       $v1, $v1, -0x4980
    ctx->pc = 0x41a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948480));
label_41a3a8:
    // 0x41a3a8: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x41a3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_41a3ac:
    // 0x41a3ac: 0x2442b6b8  addiu       $v0, $v0, -0x4948
    ctx->pc = 0x41a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948536));
label_41a3b0:
    // 0x41a3b0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x41a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_41a3b4:
    // 0x41a3b4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x41a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_41a3b8:
    // 0x41a3b8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x41a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_41a3bc:
    // 0x41a3bc: 0xc0407c0  jal         func_101F00
label_41a3c0:
    if (ctx->pc == 0x41A3C0u) {
        ctx->pc = 0x41A3C0u;
            // 0x41a3c0: 0x24a598f0  addiu       $a1, $a1, -0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940912));
        ctx->pc = 0x41A3C4u;
        goto label_41a3c4;
    }
    ctx->pc = 0x41A3BCu;
    SET_GPR_U32(ctx, 31, 0x41A3C4u);
    ctx->pc = 0x41A3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A3BCu;
            // 0x41a3c0: 0x24a598f0  addiu       $a1, $a1, -0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A3C4u; }
        if (ctx->pc != 0x41A3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A3C4u; }
        if (ctx->pc != 0x41A3C4u) { return; }
    }
    ctx->pc = 0x41A3C4u;
label_41a3c4:
    // 0x41a3c4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x41a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_41a3c8:
    // 0x41a3c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_41a3cc:
    if (ctx->pc == 0x41A3CCu) {
        ctx->pc = 0x41A3CCu;
            // 0x41a3cc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x41A3D0u;
        goto label_41a3d0;
    }
    ctx->pc = 0x41A3C8u;
    {
        const bool branch_taken_0x41a3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a3c8) {
            ctx->pc = 0x41A3CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41A3C8u;
            // 0x41a3cc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41A3DCu;
            goto label_41a3dc;
        }
    }
    ctx->pc = 0x41A3D0u;
label_41a3d0:
    // 0x41a3d0: 0xc07507c  jal         func_1D41F0
label_41a3d4:
    if (ctx->pc == 0x41A3D4u) {
        ctx->pc = 0x41A3D4u;
            // 0x41a3d4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x41A3D8u;
        goto label_41a3d8;
    }
    ctx->pc = 0x41A3D0u;
    SET_GPR_U32(ctx, 31, 0x41A3D8u);
    ctx->pc = 0x41A3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A3D0u;
            // 0x41a3d4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A3D8u; }
        if (ctx->pc != 0x41A3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A3D8u; }
        if (ctx->pc != 0x41A3D8u) { return; }
    }
    ctx->pc = 0x41A3D8u;
label_41a3d8:
    // 0x41a3d8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x41a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_41a3dc:
    // 0x41a3dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_41a3e0:
    if (ctx->pc == 0x41A3E0u) {
        ctx->pc = 0x41A3E0u;
            // 0x41a3e0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x41A3E4u;
        goto label_41a3e4;
    }
    ctx->pc = 0x41A3DCu;
    {
        const bool branch_taken_0x41a3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a3dc) {
            ctx->pc = 0x41A3E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41A3DCu;
            // 0x41a3e0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41A40Cu;
            goto label_41a40c;
        }
    }
    ctx->pc = 0x41A3E4u;
label_41a3e4:
    // 0x41a3e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_41a3e8:
    if (ctx->pc == 0x41A3E8u) {
        ctx->pc = 0x41A3ECu;
        goto label_41a3ec;
    }
    ctx->pc = 0x41A3E4u;
    {
        const bool branch_taken_0x41a3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a3e4) {
            ctx->pc = 0x41A408u;
            goto label_41a408;
        }
    }
    ctx->pc = 0x41A3ECu;
label_41a3ec:
    // 0x41a3ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41a3f0:
    if (ctx->pc == 0x41A3F0u) {
        ctx->pc = 0x41A3F4u;
        goto label_41a3f4;
    }
    ctx->pc = 0x41A3ECu;
    {
        const bool branch_taken_0x41a3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a3ec) {
            ctx->pc = 0x41A408u;
            goto label_41a408;
        }
    }
    ctx->pc = 0x41A3F4u;
label_41a3f4:
    // 0x41a3f4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x41a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_41a3f8:
    // 0x41a3f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_41a3fc:
    if (ctx->pc == 0x41A3FCu) {
        ctx->pc = 0x41A400u;
        goto label_41a400;
    }
    ctx->pc = 0x41A3F8u;
    {
        const bool branch_taken_0x41a3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a3f8) {
            ctx->pc = 0x41A408u;
            goto label_41a408;
        }
    }
    ctx->pc = 0x41A400u;
label_41a400:
    // 0x41a400: 0xc0400a8  jal         func_1002A0
label_41a404:
    if (ctx->pc == 0x41A404u) {
        ctx->pc = 0x41A408u;
        goto label_41a408;
    }
    ctx->pc = 0x41A400u;
    SET_GPR_U32(ctx, 31, 0x41A408u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A408u; }
        if (ctx->pc != 0x41A408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A408u; }
        if (ctx->pc != 0x41A408u) { return; }
    }
    ctx->pc = 0x41A408u;
label_41a408:
    // 0x41a408: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x41a408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_41a40c:
    // 0x41a40c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_41a410:
    if (ctx->pc == 0x41A410u) {
        ctx->pc = 0x41A410u;
            // 0x41a410: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x41A414u;
        goto label_41a414;
    }
    ctx->pc = 0x41A40Cu;
    {
        const bool branch_taken_0x41a40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a40c) {
            ctx->pc = 0x41A410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41A40Cu;
            // 0x41a410: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41A43Cu;
            goto label_41a43c;
        }
    }
    ctx->pc = 0x41A414u;
label_41a414:
    // 0x41a414: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_41a418:
    if (ctx->pc == 0x41A418u) {
        ctx->pc = 0x41A41Cu;
        goto label_41a41c;
    }
    ctx->pc = 0x41A414u;
    {
        const bool branch_taken_0x41a414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a414) {
            ctx->pc = 0x41A438u;
            goto label_41a438;
        }
    }
    ctx->pc = 0x41A41Cu;
label_41a41c:
    // 0x41a41c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41a420:
    if (ctx->pc == 0x41A420u) {
        ctx->pc = 0x41A424u;
        goto label_41a424;
    }
    ctx->pc = 0x41A41Cu;
    {
        const bool branch_taken_0x41a41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a41c) {
            ctx->pc = 0x41A438u;
            goto label_41a438;
        }
    }
    ctx->pc = 0x41A424u;
label_41a424:
    // 0x41a424: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x41a424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_41a428:
    // 0x41a428: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_41a42c:
    if (ctx->pc == 0x41A42Cu) {
        ctx->pc = 0x41A430u;
        goto label_41a430;
    }
    ctx->pc = 0x41A428u;
    {
        const bool branch_taken_0x41a428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a428) {
            ctx->pc = 0x41A438u;
            goto label_41a438;
        }
    }
    ctx->pc = 0x41A430u;
label_41a430:
    // 0x41a430: 0xc0400a8  jal         func_1002A0
label_41a434:
    if (ctx->pc == 0x41A434u) {
        ctx->pc = 0x41A438u;
        goto label_41a438;
    }
    ctx->pc = 0x41A430u;
    SET_GPR_U32(ctx, 31, 0x41A438u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A438u; }
        if (ctx->pc != 0x41A438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A438u; }
        if (ctx->pc != 0x41A438u) { return; }
    }
    ctx->pc = 0x41A438u;
label_41a438:
    // 0x41a438: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x41a438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_41a43c:
    // 0x41a43c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41a440:
    if (ctx->pc == 0x41A440u) {
        ctx->pc = 0x41A444u;
        goto label_41a444;
    }
    ctx->pc = 0x41A43Cu;
    {
        const bool branch_taken_0x41a43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a43c) {
            ctx->pc = 0x41A458u;
            goto label_41a458;
        }
    }
    ctx->pc = 0x41A444u;
label_41a444:
    // 0x41a444: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41a444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41a448:
    // 0x41a448: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41a448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41a44c:
    // 0x41a44c: 0x2463b670  addiu       $v1, $v1, -0x4990
    ctx->pc = 0x41a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948464));
label_41a450:
    // 0x41a450: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x41a450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_41a454:
    // 0x41a454: 0xac407328  sw          $zero, 0x7328($v0)
    ctx->pc = 0x41a454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29480), GPR_U32(ctx, 0));
label_41a458:
    // 0x41a458: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_41a45c:
    if (ctx->pc == 0x41A45Cu) {
        ctx->pc = 0x41A45Cu;
            // 0x41a45c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x41A460u;
        goto label_41a460;
    }
    ctx->pc = 0x41A458u;
    {
        const bool branch_taken_0x41a458 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a458) {
            ctx->pc = 0x41A45Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41A458u;
            // 0x41a45c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41A4B4u;
            goto label_41a4b4;
        }
    }
    ctx->pc = 0x41A460u;
label_41a460:
    // 0x41a460: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41a460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41a464:
    // 0x41a464: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x41a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_41a468:
    // 0x41a468: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x41a468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_41a46c:
    // 0x41a46c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x41a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_41a470:
    // 0x41a470: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41a474:
    if (ctx->pc == 0x41A474u) {
        ctx->pc = 0x41A474u;
            // 0x41a474: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x41A478u;
        goto label_41a478;
    }
    ctx->pc = 0x41A470u;
    {
        const bool branch_taken_0x41a470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a470) {
            ctx->pc = 0x41A474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41A470u;
            // 0x41a474: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41A48Cu;
            goto label_41a48c;
        }
    }
    ctx->pc = 0x41A478u;
label_41a478:
    // 0x41a478: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41a478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41a47c:
    // 0x41a47c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41a47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41a480:
    // 0x41a480: 0x320f809  jalr        $t9
label_41a484:
    if (ctx->pc == 0x41A484u) {
        ctx->pc = 0x41A484u;
            // 0x41a484: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41A488u;
        goto label_41a488;
    }
    ctx->pc = 0x41A480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41A488u);
        ctx->pc = 0x41A484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A480u;
            // 0x41a484: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41A488u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41A488u; }
            if (ctx->pc != 0x41A488u) { return; }
        }
        }
    }
    ctx->pc = 0x41A488u;
label_41a488:
    // 0x41a488: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x41a488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_41a48c:
    // 0x41a48c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41a490:
    if (ctx->pc == 0x41A490u) {
        ctx->pc = 0x41A490u;
            // 0x41a490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A494u;
        goto label_41a494;
    }
    ctx->pc = 0x41A48Cu;
    {
        const bool branch_taken_0x41a48c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a48c) {
            ctx->pc = 0x41A490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41A48Cu;
            // 0x41a490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41A4A8u;
            goto label_41a4a8;
        }
    }
    ctx->pc = 0x41A494u;
label_41a494:
    // 0x41a494: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41a494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41a498:
    // 0x41a498: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41a498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41a49c:
    // 0x41a49c: 0x320f809  jalr        $t9
label_41a4a0:
    if (ctx->pc == 0x41A4A0u) {
        ctx->pc = 0x41A4A0u;
            // 0x41a4a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41A4A4u;
        goto label_41a4a4;
    }
    ctx->pc = 0x41A49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41A4A4u);
        ctx->pc = 0x41A4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A49Cu;
            // 0x41a4a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41A4A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41A4A4u; }
            if (ctx->pc != 0x41A4A4u) { return; }
        }
        }
    }
    ctx->pc = 0x41A4A4u;
label_41a4a4:
    // 0x41a4a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41a4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a4a8:
    // 0x41a4a8: 0xc075bf8  jal         func_1D6FE0
label_41a4ac:
    if (ctx->pc == 0x41A4ACu) {
        ctx->pc = 0x41A4ACu;
            // 0x41a4ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A4B0u;
        goto label_41a4b0;
    }
    ctx->pc = 0x41A4A8u;
    SET_GPR_U32(ctx, 31, 0x41A4B0u);
    ctx->pc = 0x41A4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A4A8u;
            // 0x41a4ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A4B0u; }
        if (ctx->pc != 0x41A4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A4B0u; }
        if (ctx->pc != 0x41A4B0u) { return; }
    }
    ctx->pc = 0x41A4B0u;
label_41a4b0:
    // 0x41a4b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x41a4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_41a4b4:
    // 0x41a4b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41a4b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41a4b8:
    // 0x41a4b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_41a4bc:
    if (ctx->pc == 0x41A4BCu) {
        ctx->pc = 0x41A4BCu;
            // 0x41a4bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A4C0u;
        goto label_41a4c0;
    }
    ctx->pc = 0x41A4B8u;
    {
        const bool branch_taken_0x41a4b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41a4b8) {
            ctx->pc = 0x41A4BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41A4B8u;
            // 0x41a4bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41A4CCu;
            goto label_41a4cc;
        }
    }
    ctx->pc = 0x41A4C0u;
label_41a4c0:
    // 0x41a4c0: 0xc0400a8  jal         func_1002A0
label_41a4c4:
    if (ctx->pc == 0x41A4C4u) {
        ctx->pc = 0x41A4C4u;
            // 0x41a4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A4C8u;
        goto label_41a4c8;
    }
    ctx->pc = 0x41A4C0u;
    SET_GPR_U32(ctx, 31, 0x41A4C8u);
    ctx->pc = 0x41A4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A4C0u;
            // 0x41a4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A4C8u; }
        if (ctx->pc != 0x41A4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A4C8u; }
        if (ctx->pc != 0x41A4C8u) { return; }
    }
    ctx->pc = 0x41A4C8u;
label_41a4c8:
    // 0x41a4c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41a4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a4cc:
    // 0x41a4cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41a4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41a4d0:
    // 0x41a4d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41a4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41a4d4:
    // 0x41a4d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41a4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41a4d8:
    // 0x41a4d8: 0x3e00008  jr          $ra
label_41a4dc:
    if (ctx->pc == 0x41A4DCu) {
        ctx->pc = 0x41A4DCu;
            // 0x41a4dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41A4E0u;
        goto label_41a4e0;
    }
    ctx->pc = 0x41A4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A4D8u;
            // 0x41a4dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41A4E0u;
label_41a4e0:
    // 0x41a4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41a4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41a4e4:
    // 0x41a4e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41a4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41a4e8:
    // 0x41a4e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41a4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41a4ec:
    // 0x41a4ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41a4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41a4f0:
    // 0x41a4f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41a4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41a4f4:
    // 0x41a4f4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_41a4f8:
    if (ctx->pc == 0x41A4F8u) {
        ctx->pc = 0x41A4F8u;
            // 0x41a4f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A4FCu;
        goto label_41a4fc;
    }
    ctx->pc = 0x41A4F4u;
    {
        const bool branch_taken_0x41a4f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A4F4u;
            // 0x41a4f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a4f4) {
            ctx->pc = 0x41A558u;
            goto label_41a558;
        }
    }
    ctx->pc = 0x41A4FCu;
label_41a4fc:
    // 0x41a4fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41a500:
    // 0x41a500: 0x2442b770  addiu       $v0, $v0, -0x4890
    ctx->pc = 0x41a500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948720));
label_41a504:
    // 0x41a504: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_41a508:
    if (ctx->pc == 0x41A508u) {
        ctx->pc = 0x41A508u;
            // 0x41a508: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x41A50Cu;
        goto label_41a50c;
    }
    ctx->pc = 0x41A504u;
    {
        const bool branch_taken_0x41a504 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A504u;
            // 0x41a508: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a504) {
            ctx->pc = 0x41A540u;
            goto label_41a540;
        }
    }
    ctx->pc = 0x41A50Cu;
label_41a50c:
    // 0x41a50c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41a510:
    // 0x41a510: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x41a510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_41a514:
    // 0x41a514: 0xc0d37dc  jal         func_34DF70
label_41a518:
    if (ctx->pc == 0x41A518u) {
        ctx->pc = 0x41A518u;
            // 0x41a518: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x41A51Cu;
        goto label_41a51c;
    }
    ctx->pc = 0x41A514u;
    SET_GPR_U32(ctx, 31, 0x41A51Cu);
    ctx->pc = 0x41A518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A514u;
            // 0x41a518: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A51Cu; }
        if (ctx->pc != 0x41A51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A51Cu; }
        if (ctx->pc != 0x41A51Cu) { return; }
    }
    ctx->pc = 0x41A51Cu;
label_41a51c:
    // 0x41a51c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_41a520:
    if (ctx->pc == 0x41A520u) {
        ctx->pc = 0x41A520u;
            // 0x41a520: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x41A524u;
        goto label_41a524;
    }
    ctx->pc = 0x41A51Cu;
    {
        const bool branch_taken_0x41a51c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a51c) {
            ctx->pc = 0x41A520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41A51Cu;
            // 0x41a520: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41A544u;
            goto label_41a544;
        }
    }
    ctx->pc = 0x41A524u;
label_41a524:
    // 0x41a524: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41a524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41a528:
    // 0x41a528: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x41a528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_41a52c:
    // 0x41a52c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_41a530:
    if (ctx->pc == 0x41A530u) {
        ctx->pc = 0x41A530u;
            // 0x41a530: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x41A534u;
        goto label_41a534;
    }
    ctx->pc = 0x41A52Cu;
    {
        const bool branch_taken_0x41a52c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A52Cu;
            // 0x41a530: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a52c) {
            ctx->pc = 0x41A540u;
            goto label_41a540;
        }
    }
    ctx->pc = 0x41A534u;
label_41a534:
    // 0x41a534: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41a534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41a538:
    // 0x41a538: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x41a538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_41a53c:
    // 0x41a53c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x41a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_41a540:
    // 0x41a540: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x41a540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_41a544:
    // 0x41a544: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41a544u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41a548:
    // 0x41a548: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_41a54c:
    if (ctx->pc == 0x41A54Cu) {
        ctx->pc = 0x41A54Cu;
            // 0x41a54c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A550u;
        goto label_41a550;
    }
    ctx->pc = 0x41A548u;
    {
        const bool branch_taken_0x41a548 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41a548) {
            ctx->pc = 0x41A54Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41A548u;
            // 0x41a54c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41A55Cu;
            goto label_41a55c;
        }
    }
    ctx->pc = 0x41A550u;
label_41a550:
    // 0x41a550: 0xc0400a8  jal         func_1002A0
label_41a554:
    if (ctx->pc == 0x41A554u) {
        ctx->pc = 0x41A554u;
            // 0x41a554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A558u;
        goto label_41a558;
    }
    ctx->pc = 0x41A550u;
    SET_GPR_U32(ctx, 31, 0x41A558u);
    ctx->pc = 0x41A554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A550u;
            // 0x41a554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A558u; }
        if (ctx->pc != 0x41A558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A558u; }
        if (ctx->pc != 0x41A558u) { return; }
    }
    ctx->pc = 0x41A558u;
label_41a558:
    // 0x41a558: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41a558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a55c:
    // 0x41a55c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41a55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41a560:
    // 0x41a560: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41a560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41a564:
    // 0x41a564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41a564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41a568:
    // 0x41a568: 0x3e00008  jr          $ra
label_41a56c:
    if (ctx->pc == 0x41A56Cu) {
        ctx->pc = 0x41A56Cu;
            // 0x41a56c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41A570u;
        goto label_41a570;
    }
    ctx->pc = 0x41A568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A568u;
            // 0x41a56c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41A570u;
label_41a570:
    // 0x41a570: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41a570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41a574:
    // 0x41a574: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41a574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41a578:
    // 0x41a578: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x41a578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_41a57c:
    // 0x41a57c: 0x2463b770  addiu       $v1, $v1, -0x4890
    ctx->pc = 0x41a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948720));
label_41a580:
    // 0x41a580: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x41a580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_41a584:
    // 0x41a584: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41a584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41a588:
    // 0x41a588: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x41a588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_41a58c:
    // 0x41a58c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x41a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_41a590:
    // 0x41a590: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41a590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41a594:
    // 0x41a594: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x41a594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_41a598:
    // 0x41a598: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x41a598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_41a59c:
    // 0x41a59c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x41a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_41a5a0:
    // 0x41a5a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x41a5a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41a5a4:
    // 0x41a5a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x41a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_41a5a8:
    // 0x41a5a8: 0x3e00008  jr          $ra
label_41a5ac:
    if (ctx->pc == 0x41A5ACu) {
        ctx->pc = 0x41A5ACu;
            // 0x41a5ac: 0xa0800010  sb          $zero, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x41A5B0u;
        goto label_fallthrough_0x41a5a8;
    }
    ctx->pc = 0x41A5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A5A8u;
            // 0x41a5ac: 0xa0800010  sb          $zero, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x41a5a8:
    ctx->pc = 0x41A5B0u;
}
