#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029F2F0
// Address: 0x29f2f0 - 0x29f550
void sub_0029F2F0_0x29f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F2F0_0x29f2f0");
#endif

    switch (ctx->pc) {
        case 0x29f2f0u: goto label_29f2f0;
        case 0x29f2f4u: goto label_29f2f4;
        case 0x29f2f8u: goto label_29f2f8;
        case 0x29f2fcu: goto label_29f2fc;
        case 0x29f300u: goto label_29f300;
        case 0x29f304u: goto label_29f304;
        case 0x29f308u: goto label_29f308;
        case 0x29f30cu: goto label_29f30c;
        case 0x29f310u: goto label_29f310;
        case 0x29f314u: goto label_29f314;
        case 0x29f318u: goto label_29f318;
        case 0x29f31cu: goto label_29f31c;
        case 0x29f320u: goto label_29f320;
        case 0x29f324u: goto label_29f324;
        case 0x29f328u: goto label_29f328;
        case 0x29f32cu: goto label_29f32c;
        case 0x29f330u: goto label_29f330;
        case 0x29f334u: goto label_29f334;
        case 0x29f338u: goto label_29f338;
        case 0x29f33cu: goto label_29f33c;
        case 0x29f340u: goto label_29f340;
        case 0x29f344u: goto label_29f344;
        case 0x29f348u: goto label_29f348;
        case 0x29f34cu: goto label_29f34c;
        case 0x29f350u: goto label_29f350;
        case 0x29f354u: goto label_29f354;
        case 0x29f358u: goto label_29f358;
        case 0x29f35cu: goto label_29f35c;
        case 0x29f360u: goto label_29f360;
        case 0x29f364u: goto label_29f364;
        case 0x29f368u: goto label_29f368;
        case 0x29f36cu: goto label_29f36c;
        case 0x29f370u: goto label_29f370;
        case 0x29f374u: goto label_29f374;
        case 0x29f378u: goto label_29f378;
        case 0x29f37cu: goto label_29f37c;
        case 0x29f380u: goto label_29f380;
        case 0x29f384u: goto label_29f384;
        case 0x29f388u: goto label_29f388;
        case 0x29f38cu: goto label_29f38c;
        case 0x29f390u: goto label_29f390;
        case 0x29f394u: goto label_29f394;
        case 0x29f398u: goto label_29f398;
        case 0x29f39cu: goto label_29f39c;
        case 0x29f3a0u: goto label_29f3a0;
        case 0x29f3a4u: goto label_29f3a4;
        case 0x29f3a8u: goto label_29f3a8;
        case 0x29f3acu: goto label_29f3ac;
        case 0x29f3b0u: goto label_29f3b0;
        case 0x29f3b4u: goto label_29f3b4;
        case 0x29f3b8u: goto label_29f3b8;
        case 0x29f3bcu: goto label_29f3bc;
        case 0x29f3c0u: goto label_29f3c0;
        case 0x29f3c4u: goto label_29f3c4;
        case 0x29f3c8u: goto label_29f3c8;
        case 0x29f3ccu: goto label_29f3cc;
        case 0x29f3d0u: goto label_29f3d0;
        case 0x29f3d4u: goto label_29f3d4;
        case 0x29f3d8u: goto label_29f3d8;
        case 0x29f3dcu: goto label_29f3dc;
        case 0x29f3e0u: goto label_29f3e0;
        case 0x29f3e4u: goto label_29f3e4;
        case 0x29f3e8u: goto label_29f3e8;
        case 0x29f3ecu: goto label_29f3ec;
        case 0x29f3f0u: goto label_29f3f0;
        case 0x29f3f4u: goto label_29f3f4;
        case 0x29f3f8u: goto label_29f3f8;
        case 0x29f3fcu: goto label_29f3fc;
        case 0x29f400u: goto label_29f400;
        case 0x29f404u: goto label_29f404;
        case 0x29f408u: goto label_29f408;
        case 0x29f40cu: goto label_29f40c;
        case 0x29f410u: goto label_29f410;
        case 0x29f414u: goto label_29f414;
        case 0x29f418u: goto label_29f418;
        case 0x29f41cu: goto label_29f41c;
        case 0x29f420u: goto label_29f420;
        case 0x29f424u: goto label_29f424;
        case 0x29f428u: goto label_29f428;
        case 0x29f42cu: goto label_29f42c;
        case 0x29f430u: goto label_29f430;
        case 0x29f434u: goto label_29f434;
        case 0x29f438u: goto label_29f438;
        case 0x29f43cu: goto label_29f43c;
        case 0x29f440u: goto label_29f440;
        case 0x29f444u: goto label_29f444;
        case 0x29f448u: goto label_29f448;
        case 0x29f44cu: goto label_29f44c;
        case 0x29f450u: goto label_29f450;
        case 0x29f454u: goto label_29f454;
        case 0x29f458u: goto label_29f458;
        case 0x29f45cu: goto label_29f45c;
        case 0x29f460u: goto label_29f460;
        case 0x29f464u: goto label_29f464;
        case 0x29f468u: goto label_29f468;
        case 0x29f46cu: goto label_29f46c;
        case 0x29f470u: goto label_29f470;
        case 0x29f474u: goto label_29f474;
        case 0x29f478u: goto label_29f478;
        case 0x29f47cu: goto label_29f47c;
        case 0x29f480u: goto label_29f480;
        case 0x29f484u: goto label_29f484;
        case 0x29f488u: goto label_29f488;
        case 0x29f48cu: goto label_29f48c;
        case 0x29f490u: goto label_29f490;
        case 0x29f494u: goto label_29f494;
        case 0x29f498u: goto label_29f498;
        case 0x29f49cu: goto label_29f49c;
        case 0x29f4a0u: goto label_29f4a0;
        case 0x29f4a4u: goto label_29f4a4;
        case 0x29f4a8u: goto label_29f4a8;
        case 0x29f4acu: goto label_29f4ac;
        case 0x29f4b0u: goto label_29f4b0;
        case 0x29f4b4u: goto label_29f4b4;
        case 0x29f4b8u: goto label_29f4b8;
        case 0x29f4bcu: goto label_29f4bc;
        case 0x29f4c0u: goto label_29f4c0;
        case 0x29f4c4u: goto label_29f4c4;
        case 0x29f4c8u: goto label_29f4c8;
        case 0x29f4ccu: goto label_29f4cc;
        case 0x29f4d0u: goto label_29f4d0;
        case 0x29f4d4u: goto label_29f4d4;
        case 0x29f4d8u: goto label_29f4d8;
        case 0x29f4dcu: goto label_29f4dc;
        case 0x29f4e0u: goto label_29f4e0;
        case 0x29f4e4u: goto label_29f4e4;
        case 0x29f4e8u: goto label_29f4e8;
        case 0x29f4ecu: goto label_29f4ec;
        case 0x29f4f0u: goto label_29f4f0;
        case 0x29f4f4u: goto label_29f4f4;
        case 0x29f4f8u: goto label_29f4f8;
        case 0x29f4fcu: goto label_29f4fc;
        case 0x29f500u: goto label_29f500;
        case 0x29f504u: goto label_29f504;
        case 0x29f508u: goto label_29f508;
        case 0x29f50cu: goto label_29f50c;
        case 0x29f510u: goto label_29f510;
        case 0x29f514u: goto label_29f514;
        case 0x29f518u: goto label_29f518;
        case 0x29f51cu: goto label_29f51c;
        case 0x29f520u: goto label_29f520;
        case 0x29f524u: goto label_29f524;
        case 0x29f528u: goto label_29f528;
        case 0x29f52cu: goto label_29f52c;
        case 0x29f530u: goto label_29f530;
        case 0x29f534u: goto label_29f534;
        case 0x29f538u: goto label_29f538;
        case 0x29f53cu: goto label_29f53c;
        case 0x29f540u: goto label_29f540;
        case 0x29f544u: goto label_29f544;
        case 0x29f548u: goto label_29f548;
        case 0x29f54cu: goto label_29f54c;
        default: break;
    }

    ctx->pc = 0x29f2f0u;

label_29f2f0:
    // 0x29f2f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29f2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_29f2f4:
    // 0x29f2f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29f2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f2f8:
    // 0x29f2f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29f2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_29f2fc:
    // 0x29f2fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29f2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29f300:
    // 0x29f300: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29f300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29f304:
    // 0x29f304: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29f304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29f308:
    // 0x29f308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29f308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29f30c:
    // 0x29f30c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29f30cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29f310:
    // 0x29f310: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29f310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29f314:
    // 0x29f314: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29f314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29f318:
    // 0x29f318: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x29f318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_29f31c:
    // 0x29f31c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x29f31cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29f320:
    // 0x29f320: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x29f320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_29f324:
    // 0x29f324: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
label_29f328:
    if (ctx->pc == 0x29F328u) {
        ctx->pc = 0x29F328u;
            // 0x29f328: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F32Cu;
        goto label_29f32c;
    }
    ctx->pc = 0x29F324u;
    {
        const bool branch_taken_0x29f324 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F324u;
            // 0x29f328: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f324) {
            ctx->pc = 0x29F368u;
            goto label_29f368;
        }
    }
    ctx->pc = 0x29F32Cu;
label_29f32c:
    // 0x29f32c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x29f32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_29f330:
    // 0x29f330: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x29f330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_29f334:
    // 0x29f334: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x29f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29f338:
    // 0x29f338: 0xe2082a  slt         $at, $a3, $v0
    ctx->pc = 0x29f338u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_29f33c:
    // 0x29f33c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29f340:
    if (ctx->pc == 0x29F340u) {
        ctx->pc = 0x29F344u;
        goto label_29f344;
    }
    ctx->pc = 0x29F33Cu;
    {
        const bool branch_taken_0x29f33c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f33c) {
            ctx->pc = 0x29F350u;
            goto label_29f350;
        }
    }
    ctx->pc = 0x29F344u;
label_29f344:
    // 0x29f344: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x29f344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29f348:
    // 0x29f348: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29f348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29f34c:
    // 0x29f34c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x29f34cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29f350:
    // 0x29f350: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x29f350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_29f354:
    // 0x29f354: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x29f354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_29f358:
    // 0x29f358: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x29f358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_29f35c:
    // 0x29f35c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_29f360:
    if (ctx->pc == 0x29F360u) {
        ctx->pc = 0x29F360u;
            // 0x29f360: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x29F364u;
        goto label_29f364;
    }
    ctx->pc = 0x29F35Cu;
    {
        const bool branch_taken_0x29f35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F35Cu;
            // 0x29f360: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f35c) {
            ctx->pc = 0x29F334u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f334;
        }
    }
    ctx->pc = 0x29F364u;
label_29f364:
    // 0x29f364: 0x0  nop
    ctx->pc = 0x29f364u;
    // NOP
label_29f368:
    // 0x29f368: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_29f36c:
    if (ctx->pc == 0x29F36Cu) {
        ctx->pc = 0x29F36Cu;
            // 0x29f36c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x29F370u;
        goto label_29f370;
    }
    ctx->pc = 0x29F368u;
    {
        const bool branch_taken_0x29f368 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f368) {
            ctx->pc = 0x29F36Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F368u;
            // 0x29f36c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F378u;
            goto label_29f378;
        }
    }
    ctx->pc = 0x29F370u;
label_29f370:
    // 0x29f370: 0x1000006d  b           . + 4 + (0x6D << 2)
label_29f374:
    if (ctx->pc == 0x29F374u) {
        ctx->pc = 0x29F374u;
            // 0x29f374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F378u;
        goto label_29f378;
    }
    ctx->pc = 0x29F370u;
    {
        const bool branch_taken_0x29f370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F370u;
            // 0x29f374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f370) {
            ctx->pc = 0x29F528u;
            goto label_29f528;
        }
    }
    ctx->pc = 0x29F378u;
label_29f378:
    // 0x29f378: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x29f378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29f37c:
    // 0x29f37c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29f380:
    // 0x29f380: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x29f380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_29f384:
    // 0x29f384: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x29f384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_29f388:
    // 0x29f388: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x29f388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_29f38c:
    // 0x29f38c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x29f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_29f390:
    // 0x29f390: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x29f390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_29f394:
    // 0x29f394: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x29f394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_29f398:
    // 0x29f398: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x29f398u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_29f39c:
    // 0x29f39c: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_29f3a0:
    if (ctx->pc == 0x29F3A0u) {
        ctx->pc = 0x29F3A0u;
            // 0x29f3a0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x29F3A4u;
        goto label_29f3a4;
    }
    ctx->pc = 0x29F39Cu;
    {
        const bool branch_taken_0x29f39c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f39c) {
            ctx->pc = 0x29F3A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F39Cu;
            // 0x29f3a0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F3ACu;
            goto label_29f3ac;
        }
    }
    ctx->pc = 0x29F3A4u;
label_29f3a4:
    // 0x29f3a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_29f3a8:
    if (ctx->pc == 0x29F3A8u) {
        ctx->pc = 0x29F3A8u;
            // 0x29f3a8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x29F3ACu;
        goto label_29f3ac;
    }
    ctx->pc = 0x29F3A4u;
    {
        const bool branch_taken_0x29f3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F3A4u;
            // 0x29f3a8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f3a4) {
            ctx->pc = 0x29F3B8u;
            goto label_29f3b8;
        }
    }
    ctx->pc = 0x29F3ACu;
label_29f3ac:
    // 0x29f3ac: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x29f3acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_29f3b0:
    // 0x29f3b0: 0x320f809  jalr        $t9
label_29f3b4:
    if (ctx->pc == 0x29F3B4u) {
        ctx->pc = 0x29F3B8u;
        goto label_29f3b8;
    }
    ctx->pc = 0x29F3B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29F3B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29F3B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29F3B8u; }
            if (ctx->pc != 0x29F3B8u) { return; }
        }
        }
    }
    ctx->pc = 0x29F3B8u;
label_29f3b8:
    // 0x29f3b8: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x29f3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_29f3bc:
    // 0x29f3bc: 0x1a000030  blez        $s0, . + 4 + (0x30 << 2)
label_29f3c0:
    if (ctx->pc == 0x29F3C0u) {
        ctx->pc = 0x29F3C0u;
            // 0x29f3c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F3C4u;
        goto label_29f3c4;
    }
    ctx->pc = 0x29F3BCu;
    {
        const bool branch_taken_0x29f3bc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x29F3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F3BCu;
            // 0x29f3c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f3bc) {
            ctx->pc = 0x29F480u;
            goto label_29f480;
        }
    }
    ctx->pc = 0x29F3C4u;
label_29f3c4:
    // 0x29f3c4: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x29f3c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_29f3c8:
    // 0x29f3c8: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
label_29f3cc:
    if (ctx->pc == 0x29F3CCu) {
        ctx->pc = 0x29F3CCu;
            // 0x29f3cc: 0x2606fff8  addiu       $a2, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->pc = 0x29F3D0u;
        goto label_29f3d0;
    }
    ctx->pc = 0x29F3C8u;
    {
        const bool branch_taken_0x29f3c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F3C8u;
            // 0x29f3cc: 0x2606fff8  addiu       $a2, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f3c8) {
            ctx->pc = 0x29F450u;
            goto label_29f450;
        }
    }
    ctx->pc = 0x29F3D0u;
label_29f3d0:
    // 0x29f3d0: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
label_29f3d4:
    if (ctx->pc == 0x29F3D4u) {
        ctx->pc = 0x29F3D4u;
            // 0x29f3d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F3D8u;
        goto label_29f3d8;
    }
    ctx->pc = 0x29F3D0u;
    {
        const bool branch_taken_0x29f3d0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x29F3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F3D0u;
            // 0x29f3d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f3d0) {
            ctx->pc = 0x29F3F0u;
            goto label_29f3f0;
        }
    }
    ctx->pc = 0x29F3D8u;
label_29f3d8:
    // 0x29f3d8: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x29f3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_29f3dc:
    // 0x29f3dc: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x29f3dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_29f3e0:
    // 0x29f3e0: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x29f3e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_29f3e4:
    // 0x29f3e4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_29f3e8:
    if (ctx->pc == 0x29F3E8u) {
        ctx->pc = 0x29F3ECu;
        goto label_29f3ec;
    }
    ctx->pc = 0x29F3E4u;
    {
        const bool branch_taken_0x29f3e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f3e4) {
            ctx->pc = 0x29F3F0u;
            goto label_29f3f0;
        }
    }
    ctx->pc = 0x29F3ECu;
label_29f3ec:
    // 0x29f3ec: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x29f3ecu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_29f3f0:
    // 0x29f3f0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_29f3f4:
    if (ctx->pc == 0x29F3F4u) {
        ctx->pc = 0x29F3F8u;
        goto label_29f3f8;
    }
    ctx->pc = 0x29F3F0u;
    {
        const bool branch_taken_0x29f3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f3f0) {
            ctx->pc = 0x29F450u;
            goto label_29f450;
        }
    }
    ctx->pc = 0x29F3F8u;
label_29f3f8:
    // 0x29f3f8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x29f3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_29f3fc:
    // 0x29f3fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29f3fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f400:
    // 0x29f400: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x29f400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_29f404:
    // 0x29f404: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x29f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_29f408:
    // 0x29f408: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x29f408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_29f40c:
    // 0x29f40c: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x29f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_29f410:
    // 0x29f410: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x29f410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_29f414:
    // 0x29f414: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x29f414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_29f418:
    // 0x29f418: 0x25020003  addiu       $v0, $t0, 0x3
    ctx->pc = 0x29f418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_29f41c:
    // 0x29f41c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x29f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_29f420:
    // 0x29f420: 0x25030004  addiu       $v1, $t0, 0x4
    ctx->pc = 0x29f420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_29f424:
    // 0x29f424: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x29f424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_29f428:
    // 0x29f428: 0x25020005  addiu       $v0, $t0, 0x5
    ctx->pc = 0x29f428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
label_29f42c:
    // 0x29f42c: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x29f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_29f430:
    // 0x29f430: 0x25030006  addiu       $v1, $t0, 0x6
    ctx->pc = 0x29f430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
label_29f434:
    // 0x29f434: 0x25020007  addiu       $v0, $t0, 0x7
    ctx->pc = 0x29f434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
label_29f438:
    // 0x29f438: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x29f438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_29f43c:
    // 0x29f43c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x29f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_29f440:
    // 0x29f440: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x29f440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_29f444:
    // 0x29f444: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x29f444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_29f448:
    // 0x29f448: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_29f44c:
    if (ctx->pc == 0x29F44Cu) {
        ctx->pc = 0x29F44Cu;
            // 0x29f44c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->pc = 0x29F450u;
        goto label_29f450;
    }
    ctx->pc = 0x29F448u;
    {
        const bool branch_taken_0x29f448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F448u;
            // 0x29f44c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f448) {
            ctx->pc = 0x29F400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f400;
        }
    }
    ctx->pc = 0x29F450u;
label_29f450:
    // 0x29f450: 0x110082a  slt         $at, $t0, $s0
    ctx->pc = 0x29f450u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_29f454:
    // 0x29f454: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_29f458:
    if (ctx->pc == 0x29F458u) {
        ctx->pc = 0x29F45Cu;
        goto label_29f45c;
    }
    ctx->pc = 0x29F454u;
    {
        const bool branch_taken_0x29f454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f454) {
            ctx->pc = 0x29F480u;
            goto label_29f480;
        }
    }
    ctx->pc = 0x29F45Cu;
label_29f45c:
    // 0x29f45c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_29f460:
    // 0x29f460: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x29f460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_29f464:
    // 0x29f464: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x29f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29f468:
    // 0x29f468: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29f468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_29f46c:
    // 0x29f46c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x29f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_29f470:
    // 0x29f470: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x29f470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_29f474:
    // 0x29f474: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x29f474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_29f478:
    // 0x29f478: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_29f47c:
    if (ctx->pc == 0x29F47Cu) {
        ctx->pc = 0x29F480u;
        goto label_29f480;
    }
    ctx->pc = 0x29F478u;
    {
        const bool branch_taken_0x29f478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f478) {
            ctx->pc = 0x29F464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f464;
        }
    }
    ctx->pc = 0x29F480u;
label_29f480:
    // 0x29f480: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x29f480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_29f484:
    // 0x29f484: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x29f484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_29f488:
    // 0x29f488: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x29f488u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
label_29f48c:
    // 0x29f48c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x29f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_29f490:
    // 0x29f490: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29f490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_29f494:
    // 0x29f494: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x29f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29f498:
    // 0x29f498: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x29f498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29f49c:
    // 0x29f49c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29f4a0:
    // 0x29f4a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29f4a4:
    // 0x29f4a4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x29f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_29f4a8:
    // 0x29f4a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x29f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29f4ac:
    // 0x29f4ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_29f4b0:
    // 0x29f4b0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x29f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_29f4b4:
    // 0x29f4b4: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_29f4b8:
    if (ctx->pc == 0x29F4B8u) {
        ctx->pc = 0x29F4B8u;
            // 0x29f4b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F4BCu;
        goto label_29f4bc;
    }
    ctx->pc = 0x29F4B4u;
    {
        const bool branch_taken_0x29f4b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29F4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F4B4u;
            // 0x29f4b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f4b4) {
            ctx->pc = 0x29F4F8u;
            goto label_29f4f8;
        }
    }
    ctx->pc = 0x29F4BCu;
label_29f4bc:
    // 0x29f4bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29f4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f4c0:
    // 0x29f4c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x29f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_29f4c4:
    // 0x29f4c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x29f4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_29f4c8:
    // 0x29f4c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29f4cc:
    // 0x29f4cc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x29f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_29f4d0:
    // 0x29f4d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29f4d4:
    // 0x29f4d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29f4d8:
    // 0x29f4d8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x29f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_29f4dc:
    // 0x29f4dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29f4e0:
    // 0x29f4e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29f4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_29f4e4:
    // 0x29f4e4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x29f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_29f4e8:
    // 0x29f4e8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x29f4e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_29f4ec:
    // 0x29f4ec: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_29f4f0:
    if (ctx->pc == 0x29F4F0u) {
        ctx->pc = 0x29F4F0u;
            // 0x29f4f0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x29F4F4u;
        goto label_29f4f4;
    }
    ctx->pc = 0x29F4ECu;
    {
        const bool branch_taken_0x29f4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F4ECu;
            // 0x29f4f0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f4ec) {
            ctx->pc = 0x29F4C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f4c0;
        }
    }
    ctx->pc = 0x29F4F4u;
label_29f4f4:
    // 0x29f4f4: 0x0  nop
    ctx->pc = 0x29f4f4u;
    // NOP
label_29f4f8:
    // 0x29f4f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29f4fc:
    // 0x29f4fc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x29f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_29f500:
    // 0x29f500: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29f500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29f504:
    // 0x29f504: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x29f504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_29f508:
    // 0x29f508: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x29f508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_29f50c:
    // 0x29f50c: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
label_29f510:
    if (ctx->pc == 0x29F510u) {
        ctx->pc = 0x29F510u;
            // 0x29f510: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F514u;
        goto label_29f514;
    }
    ctx->pc = 0x29F50Cu;
    {
        const bool branch_taken_0x29f50c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x29f50c) {
            ctx->pc = 0x29F510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F50Cu;
            // 0x29f510: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F528u;
            goto label_29f528;
        }
    }
    ctx->pc = 0x29F514u;
label_29f514:
    // 0x29f514: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29f514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29f518:
    // 0x29f518: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x29f518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_29f51c:
    // 0x29f51c: 0x320f809  jalr        $t9
label_29f520:
    if (ctx->pc == 0x29F520u) {
        ctx->pc = 0x29F524u;
        goto label_29f524;
    }
    ctx->pc = 0x29F51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29F524u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29F524u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29F524u; }
            if (ctx->pc != 0x29F524u) { return; }
        }
        }
    }
    ctx->pc = 0x29F524u;
label_29f524:
    // 0x29f524: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29f524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29f528:
    // 0x29f528: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29f528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29f52c:
    // 0x29f52c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29f52cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29f530:
    // 0x29f530: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29f530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29f534:
    // 0x29f534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29f534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29f538:
    // 0x29f538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29f538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29f53c:
    // 0x29f53c: 0x3e00008  jr          $ra
label_29f540:
    if (ctx->pc == 0x29F540u) {
        ctx->pc = 0x29F540u;
            // 0x29f540: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x29F544u;
        goto label_29f544;
    }
    ctx->pc = 0x29F53Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F53Cu;
            // 0x29f540: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29F544u;
label_29f544:
    // 0x29f544: 0x0  nop
    ctx->pc = 0x29f544u;
    // NOP
label_29f548:
    // 0x29f548: 0x0  nop
    ctx->pc = 0x29f548u;
    // NOP
label_29f54c:
    // 0x29f54c: 0x0  nop
    ctx->pc = 0x29f54cu;
    // NOP
}
