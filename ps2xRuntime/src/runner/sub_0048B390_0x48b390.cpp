#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048B390
// Address: 0x48b390 - 0x48b4b0
void sub_0048B390_0x48b390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B390_0x48b390");
#endif

    switch (ctx->pc) {
        case 0x48b390u: goto label_48b390;
        case 0x48b394u: goto label_48b394;
        case 0x48b398u: goto label_48b398;
        case 0x48b39cu: goto label_48b39c;
        case 0x48b3a0u: goto label_48b3a0;
        case 0x48b3a4u: goto label_48b3a4;
        case 0x48b3a8u: goto label_48b3a8;
        case 0x48b3acu: goto label_48b3ac;
        case 0x48b3b0u: goto label_48b3b0;
        case 0x48b3b4u: goto label_48b3b4;
        case 0x48b3b8u: goto label_48b3b8;
        case 0x48b3bcu: goto label_48b3bc;
        case 0x48b3c0u: goto label_48b3c0;
        case 0x48b3c4u: goto label_48b3c4;
        case 0x48b3c8u: goto label_48b3c8;
        case 0x48b3ccu: goto label_48b3cc;
        case 0x48b3d0u: goto label_48b3d0;
        case 0x48b3d4u: goto label_48b3d4;
        case 0x48b3d8u: goto label_48b3d8;
        case 0x48b3dcu: goto label_48b3dc;
        case 0x48b3e0u: goto label_48b3e0;
        case 0x48b3e4u: goto label_48b3e4;
        case 0x48b3e8u: goto label_48b3e8;
        case 0x48b3ecu: goto label_48b3ec;
        case 0x48b3f0u: goto label_48b3f0;
        case 0x48b3f4u: goto label_48b3f4;
        case 0x48b3f8u: goto label_48b3f8;
        case 0x48b3fcu: goto label_48b3fc;
        case 0x48b400u: goto label_48b400;
        case 0x48b404u: goto label_48b404;
        case 0x48b408u: goto label_48b408;
        case 0x48b40cu: goto label_48b40c;
        case 0x48b410u: goto label_48b410;
        case 0x48b414u: goto label_48b414;
        case 0x48b418u: goto label_48b418;
        case 0x48b41cu: goto label_48b41c;
        case 0x48b420u: goto label_48b420;
        case 0x48b424u: goto label_48b424;
        case 0x48b428u: goto label_48b428;
        case 0x48b42cu: goto label_48b42c;
        case 0x48b430u: goto label_48b430;
        case 0x48b434u: goto label_48b434;
        case 0x48b438u: goto label_48b438;
        case 0x48b43cu: goto label_48b43c;
        case 0x48b440u: goto label_48b440;
        case 0x48b444u: goto label_48b444;
        case 0x48b448u: goto label_48b448;
        case 0x48b44cu: goto label_48b44c;
        case 0x48b450u: goto label_48b450;
        case 0x48b454u: goto label_48b454;
        case 0x48b458u: goto label_48b458;
        case 0x48b45cu: goto label_48b45c;
        case 0x48b460u: goto label_48b460;
        case 0x48b464u: goto label_48b464;
        case 0x48b468u: goto label_48b468;
        case 0x48b46cu: goto label_48b46c;
        case 0x48b470u: goto label_48b470;
        case 0x48b474u: goto label_48b474;
        case 0x48b478u: goto label_48b478;
        case 0x48b47cu: goto label_48b47c;
        case 0x48b480u: goto label_48b480;
        case 0x48b484u: goto label_48b484;
        case 0x48b488u: goto label_48b488;
        case 0x48b48cu: goto label_48b48c;
        case 0x48b490u: goto label_48b490;
        case 0x48b494u: goto label_48b494;
        case 0x48b498u: goto label_48b498;
        case 0x48b49cu: goto label_48b49c;
        case 0x48b4a0u: goto label_48b4a0;
        case 0x48b4a4u: goto label_48b4a4;
        case 0x48b4a8u: goto label_48b4a8;
        case 0x48b4acu: goto label_48b4ac;
        default: break;
    }

    ctx->pc = 0x48b390u;

label_48b390:
    // 0x48b390: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x48b390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_48b394:
    // 0x48b394: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x48b394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_48b398:
    // 0x48b398: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x48b398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_48b39c:
    // 0x48b39c: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x48b39cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_48b3a0:
    // 0x48b3a0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x48b3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_48b3a4:
    // 0x48b3a4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x48b3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_48b3a8:
    // 0x48b3a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x48b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_48b3ac:
    // 0x48b3ac: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x48b3acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_48b3b0:
    // 0x48b3b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x48b3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_48b3b4:
    // 0x48b3b4: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x48b3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_48b3b8:
    // 0x48b3b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48b3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48b3bc:
    // 0x48b3bc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x48b3bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b3c0:
    // 0x48b3c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48b3c4:
    // 0x48b3c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x48b3c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48b3c8:
    // 0x48b3c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48b3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48b3cc:
    // 0x48b3cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48b3ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b3d0:
    // 0x48b3d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48b3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48b3d4:
    // 0x48b3d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48b3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48b3d8:
    // 0x48b3d8: 0x8c7089e8  lw          $s0, -0x7618($v1)
    ctx->pc = 0x48b3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_48b3dc:
    // 0x48b3dc: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x48b3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48b3e0:
    // 0x48b3e0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x48b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_48b3e4:
    // 0x48b3e4: 0x8c7ed120  lw          $fp, -0x2EE0($v1)
    ctx->pc = 0x48b3e4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_48b3e8:
    // 0x48b3e8: 0xa69021  addu        $s2, $a1, $a2
    ctx->pc = 0x48b3e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_48b3ec:
    // 0x48b3ec: 0x2656000c  addiu       $s6, $s2, 0xC
    ctx->pc = 0x48b3ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_48b3f0:
    // 0x48b3f0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x48b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_48b3f4:
    // 0x48b3f4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x48b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_48b3f8:
    // 0x48b3f8: 0x8c630780  lw          $v1, 0x780($v1)
    ctx->pc = 0x48b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
label_48b3fc:
    // 0x48b3fc: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x48b3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_48b400:
    // 0x48b400: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48b400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48b404:
    // 0x48b404: 0xe38804  sllv        $s1, $v1, $a3
    ctx->pc = 0x48b404u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_48b408:
    // 0x48b408: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x48b408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_48b40c:
    // 0x48b40c: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x48b40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_48b410:
    // 0x48b410: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_48b414:
    if (ctx->pc == 0x48B414u) {
        ctx->pc = 0x48B418u;
        goto label_48b418;
    }
    ctx->pc = 0x48B410u;
    {
        const bool branch_taken_0x48b410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b410) {
            ctx->pc = 0x48B458u;
            goto label_48b458;
        }
    }
    ctx->pc = 0x48B418u;
label_48b418:
    // 0x48b418: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x48b418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_48b41c:
    // 0x48b41c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x48b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_48b420:
    // 0x48b420: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48b420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_48b424:
    // 0x48b424: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_48b428:
    if (ctx->pc == 0x48B428u) {
        ctx->pc = 0x48B42Cu;
        goto label_48b42c;
    }
    ctx->pc = 0x48B424u;
    {
        const bool branch_taken_0x48b424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x48b424) {
            ctx->pc = 0x48B458u;
            goto label_48b458;
        }
    }
    ctx->pc = 0x48B42Cu;
label_48b42c:
    // 0x48b42c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x48b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_48b430:
    // 0x48b430: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x48b430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_48b434:
    // 0x48b434: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x48b434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_48b438:
    // 0x48b438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48b438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48b43c:
    // 0x48b43c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x48b43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_48b440:
    // 0x48b440: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x48b440u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_48b444:
    // 0x48b444: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x48b444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_48b448:
    // 0x48b448: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48b448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48b44c:
    // 0x48b44c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x48b44cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_48b450:
    // 0x48b450: 0x320f809  jalr        $t9
label_48b454:
    if (ctx->pc == 0x48B454u) {
        ctx->pc = 0x48B454u;
            // 0x48b454: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x48B458u;
        goto label_48b458;
    }
    ctx->pc = 0x48B450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48B458u);
        ctx->pc = 0x48B454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B450u;
            // 0x48b454: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48B458u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48B458u; }
            if (ctx->pc != 0x48B458u) { return; }
        }
        }
    }
    ctx->pc = 0x48B458u;
label_48b458:
    // 0x48b458: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x48b458u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_48b45c:
    // 0x48b45c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x48b45cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_48b460:
    // 0x48b460: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x48b460u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_48b464:
    // 0x48b464: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x48b464u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_48b468:
    // 0x48b468: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x48b468u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_48b46c:
    // 0x48b46c: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_48b470:
    if (ctx->pc == 0x48B470u) {
        ctx->pc = 0x48B470u;
            // 0x48b470: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x48B474u;
        goto label_48b474;
    }
    ctx->pc = 0x48B46Cu;
    {
        const bool branch_taken_0x48b46c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B46Cu;
            // 0x48b470: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b46c) {
            ctx->pc = 0x48B408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48b408;
        }
    }
    ctx->pc = 0x48B474u;
label_48b474:
    // 0x48b474: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x48b474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_48b478:
    // 0x48b478: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x48b478u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_48b47c:
    // 0x48b47c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x48b47cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_48b480:
    // 0x48b480: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x48b480u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_48b484:
    // 0x48b484: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x48b484u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48b488:
    // 0x48b488: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48b488u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48b48c:
    // 0x48b48c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48b48cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48b490:
    // 0x48b490: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48b490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48b494:
    // 0x48b494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48b494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48b498:
    // 0x48b498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48b498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48b49c:
    // 0x48b49c: 0x3e00008  jr          $ra
label_48b4a0:
    if (ctx->pc == 0x48B4A0u) {
        ctx->pc = 0x48B4A0u;
            // 0x48b4a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x48B4A4u;
        goto label_48b4a4;
    }
    ctx->pc = 0x48B49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B49Cu;
            // 0x48b4a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48B4A4u;
label_48b4a4:
    // 0x48b4a4: 0x0  nop
    ctx->pc = 0x48b4a4u;
    // NOP
label_48b4a8:
    // 0x48b4a8: 0x0  nop
    ctx->pc = 0x48b4a8u;
    // NOP
label_48b4ac:
    // 0x48b4ac: 0x0  nop
    ctx->pc = 0x48b4acu;
    // NOP
}
