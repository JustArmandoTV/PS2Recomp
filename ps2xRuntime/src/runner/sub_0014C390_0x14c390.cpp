#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014C390
// Address: 0x14c390 - 0x14c740
void sub_0014C390_0x14c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C390_0x14c390");
#endif

    switch (ctx->pc) {
        case 0x14c390u: goto label_14c390;
        case 0x14c394u: goto label_14c394;
        case 0x14c398u: goto label_14c398;
        case 0x14c39cu: goto label_14c39c;
        case 0x14c3a0u: goto label_14c3a0;
        case 0x14c3a4u: goto label_14c3a4;
        case 0x14c3a8u: goto label_14c3a8;
        case 0x14c3acu: goto label_14c3ac;
        case 0x14c3b0u: goto label_14c3b0;
        case 0x14c3b4u: goto label_14c3b4;
        case 0x14c3b8u: goto label_14c3b8;
        case 0x14c3bcu: goto label_14c3bc;
        case 0x14c3c0u: goto label_14c3c0;
        case 0x14c3c4u: goto label_14c3c4;
        case 0x14c3c8u: goto label_14c3c8;
        case 0x14c3ccu: goto label_14c3cc;
        case 0x14c3d0u: goto label_14c3d0;
        case 0x14c3d4u: goto label_14c3d4;
        case 0x14c3d8u: goto label_14c3d8;
        case 0x14c3dcu: goto label_14c3dc;
        case 0x14c3e0u: goto label_14c3e0;
        case 0x14c3e4u: goto label_14c3e4;
        case 0x14c3e8u: goto label_14c3e8;
        case 0x14c3ecu: goto label_14c3ec;
        case 0x14c3f0u: goto label_14c3f0;
        case 0x14c3f4u: goto label_14c3f4;
        case 0x14c3f8u: goto label_14c3f8;
        case 0x14c3fcu: goto label_14c3fc;
        case 0x14c400u: goto label_14c400;
        case 0x14c404u: goto label_14c404;
        case 0x14c408u: goto label_14c408;
        case 0x14c40cu: goto label_14c40c;
        case 0x14c410u: goto label_14c410;
        case 0x14c414u: goto label_14c414;
        case 0x14c418u: goto label_14c418;
        case 0x14c41cu: goto label_14c41c;
        case 0x14c420u: goto label_14c420;
        case 0x14c424u: goto label_14c424;
        case 0x14c428u: goto label_14c428;
        case 0x14c42cu: goto label_14c42c;
        case 0x14c430u: goto label_14c430;
        case 0x14c434u: goto label_14c434;
        case 0x14c438u: goto label_14c438;
        case 0x14c43cu: goto label_14c43c;
        case 0x14c440u: goto label_14c440;
        case 0x14c444u: goto label_14c444;
        case 0x14c448u: goto label_14c448;
        case 0x14c44cu: goto label_14c44c;
        case 0x14c450u: goto label_14c450;
        case 0x14c454u: goto label_14c454;
        case 0x14c458u: goto label_14c458;
        case 0x14c45cu: goto label_14c45c;
        case 0x14c460u: goto label_14c460;
        case 0x14c464u: goto label_14c464;
        case 0x14c468u: goto label_14c468;
        case 0x14c46cu: goto label_14c46c;
        case 0x14c470u: goto label_14c470;
        case 0x14c474u: goto label_14c474;
        case 0x14c478u: goto label_14c478;
        case 0x14c47cu: goto label_14c47c;
        case 0x14c480u: goto label_14c480;
        case 0x14c484u: goto label_14c484;
        case 0x14c488u: goto label_14c488;
        case 0x14c48cu: goto label_14c48c;
        case 0x14c490u: goto label_14c490;
        case 0x14c494u: goto label_14c494;
        case 0x14c498u: goto label_14c498;
        case 0x14c49cu: goto label_14c49c;
        case 0x14c4a0u: goto label_14c4a0;
        case 0x14c4a4u: goto label_14c4a4;
        case 0x14c4a8u: goto label_14c4a8;
        case 0x14c4acu: goto label_14c4ac;
        case 0x14c4b0u: goto label_14c4b0;
        case 0x14c4b4u: goto label_14c4b4;
        case 0x14c4b8u: goto label_14c4b8;
        case 0x14c4bcu: goto label_14c4bc;
        case 0x14c4c0u: goto label_14c4c0;
        case 0x14c4c4u: goto label_14c4c4;
        case 0x14c4c8u: goto label_14c4c8;
        case 0x14c4ccu: goto label_14c4cc;
        case 0x14c4d0u: goto label_14c4d0;
        case 0x14c4d4u: goto label_14c4d4;
        case 0x14c4d8u: goto label_14c4d8;
        case 0x14c4dcu: goto label_14c4dc;
        case 0x14c4e0u: goto label_14c4e0;
        case 0x14c4e4u: goto label_14c4e4;
        case 0x14c4e8u: goto label_14c4e8;
        case 0x14c4ecu: goto label_14c4ec;
        case 0x14c4f0u: goto label_14c4f0;
        case 0x14c4f4u: goto label_14c4f4;
        case 0x14c4f8u: goto label_14c4f8;
        case 0x14c4fcu: goto label_14c4fc;
        case 0x14c500u: goto label_14c500;
        case 0x14c504u: goto label_14c504;
        case 0x14c508u: goto label_14c508;
        case 0x14c50cu: goto label_14c50c;
        case 0x14c510u: goto label_14c510;
        case 0x14c514u: goto label_14c514;
        case 0x14c518u: goto label_14c518;
        case 0x14c51cu: goto label_14c51c;
        case 0x14c520u: goto label_14c520;
        case 0x14c524u: goto label_14c524;
        case 0x14c528u: goto label_14c528;
        case 0x14c52cu: goto label_14c52c;
        case 0x14c530u: goto label_14c530;
        case 0x14c534u: goto label_14c534;
        case 0x14c538u: goto label_14c538;
        case 0x14c53cu: goto label_14c53c;
        case 0x14c540u: goto label_14c540;
        case 0x14c544u: goto label_14c544;
        case 0x14c548u: goto label_14c548;
        case 0x14c54cu: goto label_14c54c;
        case 0x14c550u: goto label_14c550;
        case 0x14c554u: goto label_14c554;
        case 0x14c558u: goto label_14c558;
        case 0x14c55cu: goto label_14c55c;
        case 0x14c560u: goto label_14c560;
        case 0x14c564u: goto label_14c564;
        case 0x14c568u: goto label_14c568;
        case 0x14c56cu: goto label_14c56c;
        case 0x14c570u: goto label_14c570;
        case 0x14c574u: goto label_14c574;
        case 0x14c578u: goto label_14c578;
        case 0x14c57cu: goto label_14c57c;
        case 0x14c580u: goto label_14c580;
        case 0x14c584u: goto label_14c584;
        case 0x14c588u: goto label_14c588;
        case 0x14c58cu: goto label_14c58c;
        case 0x14c590u: goto label_14c590;
        case 0x14c594u: goto label_14c594;
        case 0x14c598u: goto label_14c598;
        case 0x14c59cu: goto label_14c59c;
        case 0x14c5a0u: goto label_14c5a0;
        case 0x14c5a4u: goto label_14c5a4;
        case 0x14c5a8u: goto label_14c5a8;
        case 0x14c5acu: goto label_14c5ac;
        case 0x14c5b0u: goto label_14c5b0;
        case 0x14c5b4u: goto label_14c5b4;
        case 0x14c5b8u: goto label_14c5b8;
        case 0x14c5bcu: goto label_14c5bc;
        case 0x14c5c0u: goto label_14c5c0;
        case 0x14c5c4u: goto label_14c5c4;
        case 0x14c5c8u: goto label_14c5c8;
        case 0x14c5ccu: goto label_14c5cc;
        case 0x14c5d0u: goto label_14c5d0;
        case 0x14c5d4u: goto label_14c5d4;
        case 0x14c5d8u: goto label_14c5d8;
        case 0x14c5dcu: goto label_14c5dc;
        case 0x14c5e0u: goto label_14c5e0;
        case 0x14c5e4u: goto label_14c5e4;
        case 0x14c5e8u: goto label_14c5e8;
        case 0x14c5ecu: goto label_14c5ec;
        case 0x14c5f0u: goto label_14c5f0;
        case 0x14c5f4u: goto label_14c5f4;
        case 0x14c5f8u: goto label_14c5f8;
        case 0x14c5fcu: goto label_14c5fc;
        case 0x14c600u: goto label_14c600;
        case 0x14c604u: goto label_14c604;
        case 0x14c608u: goto label_14c608;
        case 0x14c60cu: goto label_14c60c;
        case 0x14c610u: goto label_14c610;
        case 0x14c614u: goto label_14c614;
        case 0x14c618u: goto label_14c618;
        case 0x14c61cu: goto label_14c61c;
        case 0x14c620u: goto label_14c620;
        case 0x14c624u: goto label_14c624;
        case 0x14c628u: goto label_14c628;
        case 0x14c62cu: goto label_14c62c;
        case 0x14c630u: goto label_14c630;
        case 0x14c634u: goto label_14c634;
        case 0x14c638u: goto label_14c638;
        case 0x14c63cu: goto label_14c63c;
        case 0x14c640u: goto label_14c640;
        case 0x14c644u: goto label_14c644;
        case 0x14c648u: goto label_14c648;
        case 0x14c64cu: goto label_14c64c;
        case 0x14c650u: goto label_14c650;
        case 0x14c654u: goto label_14c654;
        case 0x14c658u: goto label_14c658;
        case 0x14c65cu: goto label_14c65c;
        case 0x14c660u: goto label_14c660;
        case 0x14c664u: goto label_14c664;
        case 0x14c668u: goto label_14c668;
        case 0x14c66cu: goto label_14c66c;
        case 0x14c670u: goto label_14c670;
        case 0x14c674u: goto label_14c674;
        case 0x14c678u: goto label_14c678;
        case 0x14c67cu: goto label_14c67c;
        case 0x14c680u: goto label_14c680;
        case 0x14c684u: goto label_14c684;
        case 0x14c688u: goto label_14c688;
        case 0x14c68cu: goto label_14c68c;
        case 0x14c690u: goto label_14c690;
        case 0x14c694u: goto label_14c694;
        case 0x14c698u: goto label_14c698;
        case 0x14c69cu: goto label_14c69c;
        case 0x14c6a0u: goto label_14c6a0;
        case 0x14c6a4u: goto label_14c6a4;
        case 0x14c6a8u: goto label_14c6a8;
        case 0x14c6acu: goto label_14c6ac;
        case 0x14c6b0u: goto label_14c6b0;
        case 0x14c6b4u: goto label_14c6b4;
        case 0x14c6b8u: goto label_14c6b8;
        case 0x14c6bcu: goto label_14c6bc;
        case 0x14c6c0u: goto label_14c6c0;
        case 0x14c6c4u: goto label_14c6c4;
        case 0x14c6c8u: goto label_14c6c8;
        case 0x14c6ccu: goto label_14c6cc;
        case 0x14c6d0u: goto label_14c6d0;
        case 0x14c6d4u: goto label_14c6d4;
        case 0x14c6d8u: goto label_14c6d8;
        case 0x14c6dcu: goto label_14c6dc;
        case 0x14c6e0u: goto label_14c6e0;
        case 0x14c6e4u: goto label_14c6e4;
        case 0x14c6e8u: goto label_14c6e8;
        case 0x14c6ecu: goto label_14c6ec;
        case 0x14c6f0u: goto label_14c6f0;
        case 0x14c6f4u: goto label_14c6f4;
        case 0x14c6f8u: goto label_14c6f8;
        case 0x14c6fcu: goto label_14c6fc;
        case 0x14c700u: goto label_14c700;
        case 0x14c704u: goto label_14c704;
        case 0x14c708u: goto label_14c708;
        case 0x14c70cu: goto label_14c70c;
        case 0x14c710u: goto label_14c710;
        case 0x14c714u: goto label_14c714;
        case 0x14c718u: goto label_14c718;
        case 0x14c71cu: goto label_14c71c;
        case 0x14c720u: goto label_14c720;
        case 0x14c724u: goto label_14c724;
        case 0x14c728u: goto label_14c728;
        case 0x14c72cu: goto label_14c72c;
        case 0x14c730u: goto label_14c730;
        case 0x14c734u: goto label_14c734;
        case 0x14c738u: goto label_14c738;
        case 0x14c73cu: goto label_14c73c;
        default: break;
    }

    ctx->pc = 0x14c390u;

label_14c390:
    // 0x14c390: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14c390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_14c394:
    // 0x14c394: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14c394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_14c398:
    // 0x14c398: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14c398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_14c39c:
    // 0x14c39c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14c39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_14c3a0:
    // 0x14c3a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14c3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_14c3a4:
    // 0x14c3a4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14c3a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_14c3a8:
    // 0x14c3a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14c3a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_14c3ac:
    // 0x14c3ac: 0x8f828158  lw          $v0, -0x7EA8($gp)
    ctx->pc = 0x14c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
label_14c3b0:
    // 0x14c3b0: 0x94900006  lhu         $s0, 0x6($a0)
    ctx->pc = 0x14c3b0u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_14c3b4:
    // 0x14c3b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_14c3b8:
    if (ctx->pc == 0x14C3B8u) {
        ctx->pc = 0x14C3B8u;
            // 0x14c3b8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C3BCu;
        goto label_14c3bc;
    }
    ctx->pc = 0x14C3B4u;
    {
        const bool branch_taken_0x14c3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C3B4u;
            // 0x14c3b8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c3b4) {
            ctx->pc = 0x14C3C4u;
            goto label_14c3c4;
        }
    }
    ctx->pc = 0x14C3BCu;
label_14c3bc:
    // 0x14c3bc: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_14c3c0:
    if (ctx->pc == 0x14C3C0u) {
        ctx->pc = 0x14C3C0u;
            // 0x14c3c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x14C3C4u;
        goto label_14c3c4;
    }
    ctx->pc = 0x14C3BCu;
    {
        const bool branch_taken_0x14c3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C3BCu;
            // 0x14c3c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c3bc) {
            ctx->pc = 0x14C720u;
            goto label_14c720;
        }
    }
    ctx->pc = 0x14C3C4u;
label_14c3c4:
    // 0x14c3c4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14c3c8:
    // 0x14c3c8: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_14c3cc:
    if (ctx->pc == 0x14C3CCu) {
        ctx->pc = 0x14C3CCu;
            // 0x14c3cc: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x14C3D0u;
        goto label_14c3d0;
    }
    ctx->pc = 0x14C3C8u;
    {
        const bool branch_taken_0x14c3c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c3c8) {
            ctx->pc = 0x14C3CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C3C8u;
            // 0x14c3cc: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C3D8u;
            goto label_14c3d8;
        }
    }
    ctx->pc = 0x14C3D0u;
label_14c3d0:
    // 0x14c3d0: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_14c3d4:
    if (ctx->pc == 0x14C3D4u) {
        ctx->pc = 0x14C3D4u;
            // 0x14c3d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x14C3D8u;
        goto label_14c3d8;
    }
    ctx->pc = 0x14C3D0u;
    {
        const bool branch_taken_0x14c3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C3D0u;
            // 0x14c3d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c3d0) {
            ctx->pc = 0x14C720u;
            goto label_14c720;
        }
    }
    ctx->pc = 0x14C3D8u;
label_14c3d8:
    // 0x14c3d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14c3dc:
    // 0x14c3dc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x14c3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_14c3e0:
    // 0x14c3e0: 0x8c425808  lw          $v0, 0x5808($v0)
    ctx->pc = 0x14c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22536)));
label_14c3e4:
    // 0x14c3e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_14c3e8:
    // 0x14c3e8: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x14c3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_14c3ec:
    // 0x14c3ec: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_14c3f0:
    if (ctx->pc == 0x14C3F0u) {
        ctx->pc = 0x14C3F0u;
            // 0x14c3f0: 0xafb1006c  sw          $s1, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 17));
        ctx->pc = 0x14C3F4u;
        goto label_14c3f4;
    }
    ctx->pc = 0x14C3ECu;
    {
        const bool branch_taken_0x14c3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C3ECu;
            // 0x14c3f0: 0xafb1006c  sw          $s1, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c3ec) {
            ctx->pc = 0x14C448u;
            goto label_14c448;
        }
    }
    ctx->pc = 0x14C3F4u;
label_14c3f4:
    // 0x14c3f4: 0x92230008  lbu         $v1, 0x8($s1)
    ctx->pc = 0x14c3f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_14c3f8:
    // 0x14c3f8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14c3fc:
    // 0x14c3fc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_14c400:
    if (ctx->pc == 0x14C400u) {
        ctx->pc = 0x14C404u;
        goto label_14c404;
    }
    ctx->pc = 0x14C3FCu;
    {
        const bool branch_taken_0x14c3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c3fc) {
            ctx->pc = 0x14C43Cu;
            goto label_14c43c;
        }
    }
    ctx->pc = 0x14C404u;
label_14c404:
    // 0x14c404: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x14c404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_14c408:
    // 0x14c408: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_14c40c:
    if (ctx->pc == 0x14C40Cu) {
        ctx->pc = 0x14C410u;
        goto label_14c410;
    }
    ctx->pc = 0x14C408u;
    {
        const bool branch_taken_0x14c408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c408) {
            ctx->pc = 0x14C430u;
            goto label_14c430;
        }
    }
    ctx->pc = 0x14C410u;
label_14c410:
    // 0x14c410: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x14c410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14c414:
    // 0x14c414: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_14c418:
    if (ctx->pc == 0x14C418u) {
        ctx->pc = 0x14C41Cu;
        goto label_14c41c;
    }
    ctx->pc = 0x14C414u;
    {
        const bool branch_taken_0x14c414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c414) {
            ctx->pc = 0x14C424u;
            goto label_14c424;
        }
    }
    ctx->pc = 0x14C41Cu;
label_14c41c:
    // 0x14c41c: 0x10000007  b           . + 4 + (0x7 << 2)
label_14c420:
    if (ctx->pc == 0x14C420u) {
        ctx->pc = 0x14C424u;
        goto label_14c424;
    }
    ctx->pc = 0x14C41Cu;
    {
        const bool branch_taken_0x14c41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c41c) {
            ctx->pc = 0x14C43Cu;
            goto label_14c43c;
        }
    }
    ctx->pc = 0x14C424u;
label_14c424:
    // 0x14c424: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x14c424u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
label_14c428:
    // 0x14c428: 0x10000023  b           . + 4 + (0x23 << 2)
label_14c42c:
    if (ctx->pc == 0x14C42Cu) {
        ctx->pc = 0x14C42Cu;
            // 0x14c42c: 0x26314f10  addiu       $s1, $s1, 0x4F10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20240));
        ctx->pc = 0x14C430u;
        goto label_14c430;
    }
    ctx->pc = 0x14C428u;
    {
        const bool branch_taken_0x14c428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C428u;
            // 0x14c42c: 0x26314f10  addiu       $s1, $s1, 0x4F10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c428) {
            ctx->pc = 0x14C4B8u;
            goto label_14c4b8;
        }
    }
    ctx->pc = 0x14C430u;
label_14c430:
    // 0x14c430: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x14c430u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
label_14c434:
    // 0x14c434: 0x10000020  b           . + 4 + (0x20 << 2)
label_14c438:
    if (ctx->pc == 0x14C438u) {
        ctx->pc = 0x14C438u;
            // 0x14c438: 0x26314f40  addiu       $s1, $s1, 0x4F40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20288));
        ctx->pc = 0x14C43Cu;
        goto label_14c43c;
    }
    ctx->pc = 0x14C434u;
    {
        const bool branch_taken_0x14c434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C434u;
            // 0x14c438: 0x26314f40  addiu       $s1, $s1, 0x4F40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c434) {
            ctx->pc = 0x14C4B8u;
            goto label_14c4b8;
        }
    }
    ctx->pc = 0x14C43Cu;
label_14c43c:
    // 0x14c43c: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x14c43cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
label_14c440:
    // 0x14c440: 0x1000001d  b           . + 4 + (0x1D << 2)
label_14c444:
    if (ctx->pc == 0x14C444u) {
        ctx->pc = 0x14C444u;
            // 0x14c444: 0x26314f10  addiu       $s1, $s1, 0x4F10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20240));
        ctx->pc = 0x14C448u;
        goto label_14c448;
    }
    ctx->pc = 0x14C440u;
    {
        const bool branch_taken_0x14c440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C440u;
            // 0x14c444: 0x26314f10  addiu       $s1, $s1, 0x4F10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c440) {
            ctx->pc = 0x14C4B8u;
            goto label_14c4b8;
        }
    }
    ctx->pc = 0x14C448u;
label_14c448:
    // 0x14c448: 0x8f83819c  lw          $v1, -0x7E64($gp)
    ctx->pc = 0x14c448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934940)));
label_14c44c:
    // 0x14c44c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_14c450:
    if (ctx->pc == 0x14C450u) {
        ctx->pc = 0x14C454u;
        goto label_14c454;
    }
    ctx->pc = 0x14C44Cu;
    {
        const bool branch_taken_0x14c44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c44c) {
            ctx->pc = 0x14C4A4u;
            goto label_14c4a4;
        }
    }
    ctx->pc = 0x14C454u;
label_14c454:
    // 0x14c454: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14c458:
    // 0x14c458: 0x8c425854  lw          $v0, 0x5854($v0)
    ctx->pc = 0x14c458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22612)));
label_14c45c:
    // 0x14c45c: 0x10500011  beq         $v0, $s0, . + 4 + (0x11 << 2)
label_14c460:
    if (ctx->pc == 0x14C460u) {
        ctx->pc = 0x14C464u;
        goto label_14c464;
    }
    ctx->pc = 0x14C45Cu;
    {
        const bool branch_taken_0x14c45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x14c45c) {
            ctx->pc = 0x14C4A4u;
            goto label_14c4a4;
        }
    }
    ctx->pc = 0x14C464u;
label_14c464:
    // 0x14c464: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x14c464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_14c468:
    // 0x14c468: 0x60f809  jalr        $v1
label_14c46c:
    if (ctx->pc == 0x14C46Cu) {
        ctx->pc = 0x14C46Cu;
            // 0x14c46c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x14C470u;
        goto label_14c470;
    }
    ctx->pc = 0x14C468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14C470u);
        ctx->pc = 0x14C46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C468u;
            // 0x14c46c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14C470u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14C470u; }
            if (ctx->pc != 0x14C470u) { return; }
        }
        }
    }
    ctx->pc = 0x14C470u;
label_14c470:
    // 0x14c470: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_14c474:
    if (ctx->pc == 0x14C474u) {
        ctx->pc = 0x14C474u;
            // 0x14c474: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x14C478u;
        goto label_14c478;
    }
    ctx->pc = 0x14C470u;
    {
        const bool branch_taken_0x14c470 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14c470) {
            ctx->pc = 0x14C474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C470u;
            // 0x14c474: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C480u;
            goto label_14c480;
        }
    }
    ctx->pc = 0x14C478u;
label_14c478:
    // 0x14c478: 0x100000aa  b           . + 4 + (0xAA << 2)
label_14c47c:
    if (ctx->pc == 0x14C47Cu) {
        ctx->pc = 0x14C47Cu;
            // 0x14c47c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x14C480u;
        goto label_14c480;
    }
    ctx->pc = 0x14C478u;
    {
        const bool branch_taken_0x14c478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C478u;
            // 0x14c47c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c478) {
            ctx->pc = 0x14C724u;
            goto label_14c724;
        }
    }
    ctx->pc = 0x14C480u;
label_14c480:
    // 0x14c480: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_14c484:
    if (ctx->pc == 0x14C484u) {
        ctx->pc = 0x14C488u;
        goto label_14c488;
    }
    ctx->pc = 0x14C480u;
    {
        const bool branch_taken_0x14c480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14c480) {
            ctx->pc = 0x14C4A4u;
            goto label_14c4a4;
        }
    }
    ctx->pc = 0x14C488u;
label_14c488:
    // 0x14c488: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14c488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_14c48c:
    // 0x14c48c: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x14c48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_14c490:
    // 0x14c490: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14c490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_14c494:
    // 0x14c494: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14c494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c498:
    // 0x14c498: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14c498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14c49c:
    // 0x14c49c: 0xc057540  jal         func_15D500
label_14c4a0:
    if (ctx->pc == 0x14C4A0u) {
        ctx->pc = 0x14C4A0u;
            // 0x14c4a0: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->pc = 0x14C4A4u;
        goto label_14c4a4;
    }
    ctx->pc = 0x14C49Cu;
    SET_GPR_U32(ctx, 31, 0x14C4A4u);
    ctx->pc = 0x14C4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C49Cu;
            // 0x14c4a0: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4A4u; }
        if (ctx->pc != 0x14C4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4A4u; }
        if (ctx->pc != 0x14C4A4u) { return; }
    }
    ctx->pc = 0x14C4A4u;
label_14c4a4:
    // 0x14c4a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14c4a8:
    // 0x14c4a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14c4ac:
    // 0x14c4ac: 0xac505854  sw          $s0, 0x5854($v0)
    ctx->pc = 0x14c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22612), GPR_U32(ctx, 16));
label_14c4b0:
    // 0x14c4b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14c4b4:
    // 0x14c4b4: 0xac435858  sw          $v1, 0x5858($v0)
    ctx->pc = 0x14c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22616), GPR_U32(ctx, 3));
label_14c4b8:
    // 0x14c4b8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14c4bc:
    // 0x14c4bc: 0xde250018  ld          $a1, 0x18($s1)
    ctx->pc = 0x14c4bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_14c4c0:
    // 0x14c4c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x14c4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_14c4c4:
    // 0x14c4c4: 0x9e440010  lwu         $a0, 0x10($s2)
    ctx->pc = 0x14c4c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_14c4c8:
    // 0x14c4c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14c4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_14c4cc:
    // 0x14c4cc: 0xde260010  ld          $a2, 0x10($s1)
    ctx->pc = 0x14c4ccu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_14c4d0:
    // 0x14c4d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14c4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14c4d4:
    // 0x14c4d4: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x14c4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
label_14c4d8:
    // 0x14c4d8: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x14c4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
label_14c4dc:
    // 0x14c4dc: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14c4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_14c4e0:
    // 0x14c4e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x14c4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_14c4e4:
    // 0x14c4e4: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x14c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
label_14c4e8:
    // 0x14c4e8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x14c4e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14c4ec:
    // 0x14c4ec: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_14c4f0:
    // 0x14c4f0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14c4f4:
    // 0x14c4f4: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x14c4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_14c4f8:
    // 0x14c4f8: 0xc057540  jal         func_15D500
label_14c4fc:
    if (ctx->pc == 0x14C4FCu) {
        ctx->pc = 0x14C4FCu;
            // 0x14c4fc: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->pc = 0x14C500u;
        goto label_14c500;
    }
    ctx->pc = 0x14C4F8u;
    SET_GPR_U32(ctx, 31, 0x14C500u);
    ctx->pc = 0x14C4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C4F8u;
            // 0x14c4fc: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C500u; }
        if (ctx->pc != 0x14C500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C500u; }
        if (ctx->pc != 0x14C500u) { return; }
    }
    ctx->pc = 0x14C500u;
label_14c500:
    // 0x14c500: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c504:
    // 0x14c504: 0xc0531d0  jal         func_14C740
label_14c508:
    if (ctx->pc == 0x14C508u) {
        ctx->pc = 0x14C508u;
            // 0x14c508: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C50Cu;
        goto label_14c50c;
    }
    ctx->pc = 0x14C504u;
    SET_GPR_U32(ctx, 31, 0x14C50Cu);
    ctx->pc = 0x14C508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C504u;
            // 0x14c508: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C740u;
    if (runtime->hasFunction(0x14C740u)) {
        auto targetFn = runtime->lookupFunction(0x14C740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C50Cu; }
        if (ctx->pc != 0x14C50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C740_0x14c740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C50Cu; }
        if (ctx->pc != 0x14C50Cu) { return; }
    }
    ctx->pc = 0x14C50Cu;
label_14c50c:
    // 0x14c50c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c510:
    // 0x14c510: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x14c510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_14c514:
    // 0x14c514: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_14c518:
    if (ctx->pc == 0x14C518u) {
        ctx->pc = 0x14C518u;
            // 0x14c518: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x14C51Cu;
        goto label_14c51c;
    }
    ctx->pc = 0x14C514u;
    {
        const bool branch_taken_0x14c514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c514) {
            ctx->pc = 0x14C518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C514u;
            // 0x14c518: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C53Cu;
            goto label_14c53c;
        }
    }
    ctx->pc = 0x14C51Cu;
label_14c51c:
    // 0x14c51c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x14c51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_14c520:
    // 0x14c520: 0x93a4005c  lbu         $a0, 0x5C($sp)
    ctx->pc = 0x14c520u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
label_14c524:
    // 0x14c524: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14c524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14c528:
    // 0x14c528: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x14c528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_14c52c:
    // 0x14c52c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14c52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14c530:
    // 0x14c530: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14c530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14c534:
    // 0x14c534: 0xa3a2005c  sb          $v0, 0x5C($sp)
    ctx->pc = 0x14c534u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 92), (uint8_t)GPR_U32(ctx, 2));
label_14c538:
    // 0x14c538: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14c538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c53c:
    // 0x14c53c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x14c53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_14c540:
    // 0x14c540: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_14c544:
    if (ctx->pc == 0x14C544u) {
        ctx->pc = 0x14C544u;
            // 0x14c544: 0x93a30060  lbu         $v1, 0x60($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x14C548u;
        goto label_14c548;
    }
    ctx->pc = 0x14C540u;
    {
        const bool branch_taken_0x14c540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c540) {
            ctx->pc = 0x14C544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C540u;
            // 0x14c544: 0x93a30060  lbu         $v1, 0x60($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C590u;
            goto label_14c590;
        }
    }
    ctx->pc = 0x14C548u;
label_14c548:
    // 0x14c548: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x14c548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_14c54c:
    // 0x14c54c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14c550:
    // 0x14c550: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_14c554:
    if (ctx->pc == 0x14C554u) {
        ctx->pc = 0x14C554u;
            // 0x14c554: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x14C558u;
        goto label_14c558;
    }
    ctx->pc = 0x14C550u;
    {
        const bool branch_taken_0x14c550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C550u;
            // 0x14c554: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c550) {
            ctx->pc = 0x14C56Cu;
            goto label_14c56c;
        }
    }
    ctx->pc = 0x14C558u;
label_14c558:
    // 0x14c558: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14c558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14c55c:
    // 0x14c55c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_14c560:
    if (ctx->pc == 0x14C560u) {
        ctx->pc = 0x14C560u;
            // 0x14c560: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x14C564u;
        goto label_14c564;
    }
    ctx->pc = 0x14C55Cu;
    {
        const bool branch_taken_0x14c55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c55c) {
            ctx->pc = 0x14C560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C55Cu;
            // 0x14c560: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C570u;
            goto label_14c570;
        }
    }
    ctx->pc = 0x14C564u;
label_14c564:
    // 0x14c564: 0x10000003  b           . + 4 + (0x3 << 2)
label_14c568:
    if (ctx->pc == 0x14C568u) {
        ctx->pc = 0x14C568u;
            // 0x14c568: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x14C56Cu;
        goto label_14c56c;
    }
    ctx->pc = 0x14C564u;
    {
        const bool branch_taken_0x14c564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C564u;
            // 0x14c568: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c564) {
            ctx->pc = 0x14C574u;
            goto label_14c574;
        }
    }
    ctx->pc = 0x14C56Cu;
label_14c56c:
    // 0x14c56c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14c570:
    // 0x14c570: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x14c570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_14c574:
    // 0x14c574: 0x93a4005c  lbu         $a0, 0x5C($sp)
    ctx->pc = 0x14c574u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
label_14c578:
    // 0x14c578: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x14c578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_14c57c:
    // 0x14c57c: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x14c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_14c580:
    // 0x14c580: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14c580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14c584:
    // 0x14c584: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14c584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14c588:
    // 0x14c588: 0xa3a2005c  sb          $v0, 0x5C($sp)
    ctx->pc = 0x14c588u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 92), (uint8_t)GPR_U32(ctx, 2));
label_14c58c:
    // 0x14c58c: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x14c58cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
label_14c590:
    // 0x14c590: 0x316fc  dsll32      $v0, $v1, 27
    ctx->pc = 0x14c590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 27));
label_14c594:
    // 0x14c594: 0x2177e  dsrl32      $v0, $v0, 29
    ctx->pc = 0x14c594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 29));
label_14c598:
    // 0x14c598: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_14c59c:
    if (ctx->pc == 0x14C59Cu) {
        ctx->pc = 0x14C59Cu;
            // 0x14c59c: 0x8f8581d4  lw          $a1, -0x7E2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
        ctx->pc = 0x14C5A0u;
        goto label_14c5a0;
    }
    ctx->pc = 0x14C598u;
    {
        const bool branch_taken_0x14c598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c598) {
            ctx->pc = 0x14C59Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C598u;
            // 0x14c59c: 0x8f8581d4  lw          $a1, -0x7E2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C614u;
            goto label_14c614;
        }
    }
    ctx->pc = 0x14C5A0u;
label_14c5a0:
    // 0x14c5a0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x14c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_14c5a4:
    // 0x14c5a4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x14c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_14c5a8:
    // 0x14c5a8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x14c5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_14c5ac:
    // 0x14c5ac: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_14c5b0:
    if (ctx->pc == 0x14C5B0u) {
        ctx->pc = 0x14C5B4u;
        goto label_14c5b4;
    }
    ctx->pc = 0x14C5ACu;
    {
        const bool branch_taken_0x14c5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c5ac) {
            ctx->pc = 0x14C610u;
            goto label_14c610;
        }
    }
    ctx->pc = 0x14C5B4u;
label_14c5b4:
    // 0x14c5b4: 0x96440014  lhu         $a0, 0x14($s2)
    ctx->pc = 0x14c5b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_14c5b8:
    // 0x14c5b8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x14c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_14c5bc:
    // 0x14c5bc: 0x93a50062  lbu         $a1, 0x62($sp)
    ctx->pc = 0x14c5bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 98)));
label_14c5c0:
    // 0x14c5c0: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x14c5c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14c5c4:
    // 0x14c5c4: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x14c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_14c5c8:
    // 0x14c5c8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x14c5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c5cc:
    // 0x14c5cc: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x14c5ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_14c5d0:
    // 0x14c5d0: 0x86420016  lh          $v0, 0x16($s2)
    ctx->pc = 0x14c5d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
label_14c5d4:
    // 0x14c5d4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x14c5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_14c5d8:
    // 0x14c5d8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x14c5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_14c5dc:
    // 0x14c5dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x14c5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_14c5e0:
    // 0x14c5e0: 0x30e70040  andi        $a3, $a3, 0x40
    ctx->pc = 0x14c5e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
label_14c5e4:
    // 0x14c5e4: 0xa3a30062  sb          $v1, 0x62($sp)
    ctx->pc = 0x14c5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 98), (uint8_t)GPR_U32(ctx, 3));
label_14c5e8:
    // 0x14c5e8: 0x73982  srl         $a3, $a3, 6
    ctx->pc = 0x14c5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
label_14c5ec:
    // 0x14c5ec: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x14c5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_14c5f0:
    // 0x14c5f0: 0x97a40064  lhu         $a0, 0x64($sp)
    ctx->pc = 0x14c5f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 100)));
label_14c5f4:
    // 0x14c5f4: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x14c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_14c5f8:
    // 0x14c5f8: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x14c5f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_14c5fc:
    // 0x14c5fc: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x14c5fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_14c600:
    // 0x14c600: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14c600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14c604:
    // 0x14c604: 0xa3a50060  sb          $a1, 0x60($sp)
    ctx->pc = 0x14c604u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 5));
label_14c608:
    // 0x14c608: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14c608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14c60c:
    // 0x14c60c: 0xa7a20064  sh          $v0, 0x64($sp)
    ctx->pc = 0x14c60cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 2));
label_14c610:
    // 0x14c610: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14c610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_14c614:
    // 0x14c614: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x14c614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_14c618:
    // 0x14c618: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14c618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_14c61c:
    // 0x14c61c: 0xdfa70060  ld          $a3, 0x60($sp)
    ctx->pc = 0x14c61cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_14c620:
    // 0x14c620: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14c620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14c624:
    // 0x14c624: 0xc057540  jal         func_15D500
label_14c628:
    if (ctx->pc == 0x14C628u) {
        ctx->pc = 0x14C628u;
            // 0x14c628: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->pc = 0x14C62Cu;
        goto label_14c62c;
    }
    ctx->pc = 0x14C624u;
    SET_GPR_U32(ctx, 31, 0x14C62Cu);
    ctx->pc = 0x14C628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C624u;
            // 0x14c628: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C62Cu; }
        if (ctx->pc != 0x14C62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C62Cu; }
        if (ctx->pc != 0x14C62Cu) { return; }
    }
    ctx->pc = 0x14C62Cu;
label_14c62c:
    // 0x14c62c: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14c62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_14c630:
    // 0x14c630: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x14c630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14c634:
    // 0x14c634: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14c634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_14c638:
    // 0x14c638: 0xdfa70058  ld          $a3, 0x58($sp)
    ctx->pc = 0x14c638u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_14c63c:
    // 0x14c63c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14c640:
    // 0x14c640: 0xc057540  jal         func_15D500
label_14c644:
    if (ctx->pc == 0x14C644u) {
        ctx->pc = 0x14C644u;
            // 0x14c644: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->pc = 0x14C648u;
        goto label_14c648;
    }
    ctx->pc = 0x14C640u;
    SET_GPR_U32(ctx, 31, 0x14C648u);
    ctx->pc = 0x14C644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C640u;
            // 0x14c644: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C648u; }
        if (ctx->pc != 0x14C648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C648u; }
        if (ctx->pc != 0x14C648u) { return; }
    }
    ctx->pc = 0x14C648u;
label_14c648:
    // 0x14c648: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14c648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c64c:
    // 0x14c64c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_14c650:
    // 0x14c650: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14c650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14c654:
    // 0x14c654: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_14c658:
    if (ctx->pc == 0x14C658u) {
        ctx->pc = 0x14C658u;
            // 0x14c658: 0xc6540008  lwc1        $f20, 0x8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x14C65Cu;
        goto label_14c65c;
    }
    ctx->pc = 0x14C654u;
    {
        const bool branch_taken_0x14c654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c654) {
            ctx->pc = 0x14C658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C654u;
            // 0x14c658: 0xc6540008  lwc1        $f20, 0x8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C668u;
            goto label_14c668;
        }
    }
    ctx->pc = 0x14C65Cu;
label_14c65c:
    // 0x14c65c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x14c65cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_14c660:
    // 0x14c660: 0x10000002  b           . + 4 + (0x2 << 2)
label_14c664:
    if (ctx->pc == 0x14C664u) {
        ctx->pc = 0x14C664u;
            // 0x14c664: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x14C668u;
        goto label_14c668;
    }
    ctx->pc = 0x14C660u;
    {
        const bool branch_taken_0x14c660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C660u;
            // 0x14c664: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c660) {
            ctx->pc = 0x14C66Cu;
            goto label_14c66c;
        }
    }
    ctx->pc = 0x14C668u;
label_14c668:
    // 0x14c668: 0xc655000c  lwc1        $f21, 0xC($s2)
    ctx->pc = 0x14c668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_14c66c:
    // 0x14c66c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14c670:
    // 0x14c670: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x14c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_14c674:
    // 0x14c674: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x14c674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
label_14c678:
    // 0x14c678: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_14c67c:
    if (ctx->pc == 0x14C67Cu) {
        ctx->pc = 0x14C67Cu;
            // 0x14c67c: 0xaf8081a8  sw          $zero, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 0));
        ctx->pc = 0x14C680u;
        goto label_14c680;
    }
    ctx->pc = 0x14C678u;
    {
        const bool branch_taken_0x14c678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C678u;
            // 0x14c67c: 0xaf8081a8  sw          $zero, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c678) {
            ctx->pc = 0x14C6F8u;
            goto label_14c6f8;
        }
    }
    ctx->pc = 0x14C680u;
label_14c680:
    // 0x14c680: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14c684:
    // 0x14c684: 0xc4405864  lwc1        $f0, 0x5864($v0)
    ctx->pc = 0x14c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c688:
    // 0x14c688: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x14c688u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c68c:
    // 0x14c68c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_14c690:
    if (ctx->pc == 0x14C690u) {
        ctx->pc = 0x14C690u;
            // 0x14c690: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x14C694u;
        goto label_14c694;
    }
    ctx->pc = 0x14C68Cu;
    {
        const bool branch_taken_0x14c68c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c68c) {
            ctx->pc = 0x14C690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C68Cu;
            // 0x14c690: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C6ACu;
            goto label_14c6ac;
        }
    }
    ctx->pc = 0x14C694u;
label_14c694:
    // 0x14c694: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14c698:
    // 0x14c698: 0xc4405868  lwc1        $f0, 0x5868($v0)
    ctx->pc = 0x14c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c69c:
    // 0x14c69c: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x14c69cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c6a0:
    // 0x14c6a0: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_14c6a4:
    if (ctx->pc == 0x14C6A4u) {
        ctx->pc = 0x14C6A4u;
            // 0x14c6a4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x14C6A8u;
        goto label_14c6a8;
    }
    ctx->pc = 0x14C6A0u;
    {
        const bool branch_taken_0x14c6a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c6a0) {
            ctx->pc = 0x14C6A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6A0u;
            // 0x14c6a4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C6DCu;
            goto label_14c6dc;
        }
    }
    ctx->pc = 0x14C6A8u;
label_14c6a8:
    // 0x14c6a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14c6ac:
    // 0x14c6ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14c6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_14c6b0:
    // 0x14c6b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14c6b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_14c6b4:
    // 0x14c6b4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x14c6b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_14c6b8:
    // 0x14c6b8: 0xc057470  jal         func_15D1C0
label_14c6bc:
    if (ctx->pc == 0x14C6BCu) {
        ctx->pc = 0x14C6BCu;
            // 0x14c6bc: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x14C6C0u;
        goto label_14c6c0;
    }
    ctx->pc = 0x14C6B8u;
    SET_GPR_U32(ctx, 31, 0x14C6C0u);
    ctx->pc = 0x14C6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6B8u;
            // 0x14c6bc: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D1C0u;
    if (runtime->hasFunction(0x15D1C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6C0u; }
        if (ctx->pc != 0x14C6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D1C0_0x15d1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6C0u; }
        if (ctx->pc != 0x14C6C0u) { return; }
    }
    ctx->pc = 0x14C6C0u;
label_14c6c0:
    // 0x14c6c0: 0xc057480  jal         func_15D200
label_14c6c4:
    if (ctx->pc == 0x14C6C4u) {
        ctx->pc = 0x14C6C8u;
        goto label_14c6c8;
    }
    ctx->pc = 0x14C6C0u;
    SET_GPR_U32(ctx, 31, 0x14C6C8u);
    ctx->pc = 0x15D200u;
    if (runtime->hasFunction(0x15D200u)) {
        auto targetFn = runtime->lookupFunction(0x15D200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6C8u; }
        if (ctx->pc != 0x14C6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D200_0x15d200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6C8u; }
        if (ctx->pc != 0x14C6C8u) { return; }
    }
    ctx->pc = 0x14C6C8u;
label_14c6c8:
    // 0x14c6c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14c6cc:
    // 0x14c6cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14c6d0:
    // 0x14c6d0: 0xe4745864  swc1        $f20, 0x5864($v1)
    ctx->pc = 0x14c6d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 22628), bits); }
label_14c6d4:
    // 0x14c6d4: 0xe4555868  swc1        $f21, 0x5868($v0)
    ctx->pc = 0x14c6d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 22632), bits); }
label_14c6d8:
    // 0x14c6d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c6dc:
    // 0x14c6dc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_14c6e0:
    // 0x14c6e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14c6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14c6e4:
    // 0x14c6e4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_14c6e8:
    if (ctx->pc == 0x14C6E8u) {
        ctx->pc = 0x14C6E8u;
            // 0x14c6e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x14C6ECu;
        goto label_14c6ec;
    }
    ctx->pc = 0x14C6E4u;
    {
        const bool branch_taken_0x14c6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c6e4) {
            ctx->pc = 0x14C6E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6E4u;
            // 0x14c6e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C720u;
            goto label_14c720;
        }
    }
    ctx->pc = 0x14C6ECu;
label_14c6ec:
    // 0x14c6ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c6f0:
    // 0x14c6f0: 0x1000000a  b           . + 4 + (0xA << 2)
label_14c6f4:
    if (ctx->pc == 0x14C6F4u) {
        ctx->pc = 0x14C6F4u;
            // 0x14c6f4: 0xaf8281a8  sw          $v0, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 2));
        ctx->pc = 0x14C6F8u;
        goto label_14c6f8;
    }
    ctx->pc = 0x14C6F0u;
    {
        const bool branch_taken_0x14c6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6F0u;
            // 0x14c6f4: 0xaf8281a8  sw          $v0, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6f0) {
            ctx->pc = 0x14C71Cu;
            goto label_14c71c;
        }
    }
    ctx->pc = 0x14C6F8u;
label_14c6f8:
    // 0x14c6f8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x14c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_14c6fc:
    // 0x14c6fc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_14c700:
    // 0x14c700: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14c700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14c704:
    // 0x14c704: 0x0  nop
    ctx->pc = 0x14c704u;
    // NOP
label_14c708:
    // 0x14c708: 0x46140800  add.s       $f0, $f1, $f20
    ctx->pc = 0x14c708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_14c70c:
    // 0x14c70c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_14c710:
    // 0x14c710: 0xe4604e00  swc1        $f0, 0x4E00($v1)
    ctx->pc = 0x14c710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 19968), bits); }
label_14c714:
    // 0x14c714: 0x46150800  add.s       $f0, $f1, $f21
    ctx->pc = 0x14c714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_14c718:
    // 0x14c718: 0xe4404e04  swc1        $f0, 0x4E04($v0)
    ctx->pc = 0x14c718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 19972), bits); }
label_14c71c:
    // 0x14c71c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c720:
    // 0x14c720: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14c720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_14c724:
    // 0x14c724: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14c724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_14c728:
    // 0x14c728: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14c728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14c72c:
    // 0x14c72c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14c72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_14c730:
    // 0x14c730: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14c730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14c734:
    // 0x14c734: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14c734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14c738:
    // 0x14c738: 0x3e00008  jr          $ra
label_14c73c:
    if (ctx->pc == 0x14C73Cu) {
        ctx->pc = 0x14C73Cu;
            // 0x14c73c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x14C740u;
        goto label_fallthrough_0x14c738;
    }
    ctx->pc = 0x14C738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C738u;
            // 0x14c73c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x14c738:
    ctx->pc = 0x14C740u;
}
