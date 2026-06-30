#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055D430
// Address: 0x55d430 - 0x55d7a0
void sub_0055D430_0x55d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055D430_0x55d430");
#endif

    switch (ctx->pc) {
        case 0x55d430u: goto label_55d430;
        case 0x55d434u: goto label_55d434;
        case 0x55d438u: goto label_55d438;
        case 0x55d43cu: goto label_55d43c;
        case 0x55d440u: goto label_55d440;
        case 0x55d444u: goto label_55d444;
        case 0x55d448u: goto label_55d448;
        case 0x55d44cu: goto label_55d44c;
        case 0x55d450u: goto label_55d450;
        case 0x55d454u: goto label_55d454;
        case 0x55d458u: goto label_55d458;
        case 0x55d45cu: goto label_55d45c;
        case 0x55d460u: goto label_55d460;
        case 0x55d464u: goto label_55d464;
        case 0x55d468u: goto label_55d468;
        case 0x55d46cu: goto label_55d46c;
        case 0x55d470u: goto label_55d470;
        case 0x55d474u: goto label_55d474;
        case 0x55d478u: goto label_55d478;
        case 0x55d47cu: goto label_55d47c;
        case 0x55d480u: goto label_55d480;
        case 0x55d484u: goto label_55d484;
        case 0x55d488u: goto label_55d488;
        case 0x55d48cu: goto label_55d48c;
        case 0x55d490u: goto label_55d490;
        case 0x55d494u: goto label_55d494;
        case 0x55d498u: goto label_55d498;
        case 0x55d49cu: goto label_55d49c;
        case 0x55d4a0u: goto label_55d4a0;
        case 0x55d4a4u: goto label_55d4a4;
        case 0x55d4a8u: goto label_55d4a8;
        case 0x55d4acu: goto label_55d4ac;
        case 0x55d4b0u: goto label_55d4b0;
        case 0x55d4b4u: goto label_55d4b4;
        case 0x55d4b8u: goto label_55d4b8;
        case 0x55d4bcu: goto label_55d4bc;
        case 0x55d4c0u: goto label_55d4c0;
        case 0x55d4c4u: goto label_55d4c4;
        case 0x55d4c8u: goto label_55d4c8;
        case 0x55d4ccu: goto label_55d4cc;
        case 0x55d4d0u: goto label_55d4d0;
        case 0x55d4d4u: goto label_55d4d4;
        case 0x55d4d8u: goto label_55d4d8;
        case 0x55d4dcu: goto label_55d4dc;
        case 0x55d4e0u: goto label_55d4e0;
        case 0x55d4e4u: goto label_55d4e4;
        case 0x55d4e8u: goto label_55d4e8;
        case 0x55d4ecu: goto label_55d4ec;
        case 0x55d4f0u: goto label_55d4f0;
        case 0x55d4f4u: goto label_55d4f4;
        case 0x55d4f8u: goto label_55d4f8;
        case 0x55d4fcu: goto label_55d4fc;
        case 0x55d500u: goto label_55d500;
        case 0x55d504u: goto label_55d504;
        case 0x55d508u: goto label_55d508;
        case 0x55d50cu: goto label_55d50c;
        case 0x55d510u: goto label_55d510;
        case 0x55d514u: goto label_55d514;
        case 0x55d518u: goto label_55d518;
        case 0x55d51cu: goto label_55d51c;
        case 0x55d520u: goto label_55d520;
        case 0x55d524u: goto label_55d524;
        case 0x55d528u: goto label_55d528;
        case 0x55d52cu: goto label_55d52c;
        case 0x55d530u: goto label_55d530;
        case 0x55d534u: goto label_55d534;
        case 0x55d538u: goto label_55d538;
        case 0x55d53cu: goto label_55d53c;
        case 0x55d540u: goto label_55d540;
        case 0x55d544u: goto label_55d544;
        case 0x55d548u: goto label_55d548;
        case 0x55d54cu: goto label_55d54c;
        case 0x55d550u: goto label_55d550;
        case 0x55d554u: goto label_55d554;
        case 0x55d558u: goto label_55d558;
        case 0x55d55cu: goto label_55d55c;
        case 0x55d560u: goto label_55d560;
        case 0x55d564u: goto label_55d564;
        case 0x55d568u: goto label_55d568;
        case 0x55d56cu: goto label_55d56c;
        case 0x55d570u: goto label_55d570;
        case 0x55d574u: goto label_55d574;
        case 0x55d578u: goto label_55d578;
        case 0x55d57cu: goto label_55d57c;
        case 0x55d580u: goto label_55d580;
        case 0x55d584u: goto label_55d584;
        case 0x55d588u: goto label_55d588;
        case 0x55d58cu: goto label_55d58c;
        case 0x55d590u: goto label_55d590;
        case 0x55d594u: goto label_55d594;
        case 0x55d598u: goto label_55d598;
        case 0x55d59cu: goto label_55d59c;
        case 0x55d5a0u: goto label_55d5a0;
        case 0x55d5a4u: goto label_55d5a4;
        case 0x55d5a8u: goto label_55d5a8;
        case 0x55d5acu: goto label_55d5ac;
        case 0x55d5b0u: goto label_55d5b0;
        case 0x55d5b4u: goto label_55d5b4;
        case 0x55d5b8u: goto label_55d5b8;
        case 0x55d5bcu: goto label_55d5bc;
        case 0x55d5c0u: goto label_55d5c0;
        case 0x55d5c4u: goto label_55d5c4;
        case 0x55d5c8u: goto label_55d5c8;
        case 0x55d5ccu: goto label_55d5cc;
        case 0x55d5d0u: goto label_55d5d0;
        case 0x55d5d4u: goto label_55d5d4;
        case 0x55d5d8u: goto label_55d5d8;
        case 0x55d5dcu: goto label_55d5dc;
        case 0x55d5e0u: goto label_55d5e0;
        case 0x55d5e4u: goto label_55d5e4;
        case 0x55d5e8u: goto label_55d5e8;
        case 0x55d5ecu: goto label_55d5ec;
        case 0x55d5f0u: goto label_55d5f0;
        case 0x55d5f4u: goto label_55d5f4;
        case 0x55d5f8u: goto label_55d5f8;
        case 0x55d5fcu: goto label_55d5fc;
        case 0x55d600u: goto label_55d600;
        case 0x55d604u: goto label_55d604;
        case 0x55d608u: goto label_55d608;
        case 0x55d60cu: goto label_55d60c;
        case 0x55d610u: goto label_55d610;
        case 0x55d614u: goto label_55d614;
        case 0x55d618u: goto label_55d618;
        case 0x55d61cu: goto label_55d61c;
        case 0x55d620u: goto label_55d620;
        case 0x55d624u: goto label_55d624;
        case 0x55d628u: goto label_55d628;
        case 0x55d62cu: goto label_55d62c;
        case 0x55d630u: goto label_55d630;
        case 0x55d634u: goto label_55d634;
        case 0x55d638u: goto label_55d638;
        case 0x55d63cu: goto label_55d63c;
        case 0x55d640u: goto label_55d640;
        case 0x55d644u: goto label_55d644;
        case 0x55d648u: goto label_55d648;
        case 0x55d64cu: goto label_55d64c;
        case 0x55d650u: goto label_55d650;
        case 0x55d654u: goto label_55d654;
        case 0x55d658u: goto label_55d658;
        case 0x55d65cu: goto label_55d65c;
        case 0x55d660u: goto label_55d660;
        case 0x55d664u: goto label_55d664;
        case 0x55d668u: goto label_55d668;
        case 0x55d66cu: goto label_55d66c;
        case 0x55d670u: goto label_55d670;
        case 0x55d674u: goto label_55d674;
        case 0x55d678u: goto label_55d678;
        case 0x55d67cu: goto label_55d67c;
        case 0x55d680u: goto label_55d680;
        case 0x55d684u: goto label_55d684;
        case 0x55d688u: goto label_55d688;
        case 0x55d68cu: goto label_55d68c;
        case 0x55d690u: goto label_55d690;
        case 0x55d694u: goto label_55d694;
        case 0x55d698u: goto label_55d698;
        case 0x55d69cu: goto label_55d69c;
        case 0x55d6a0u: goto label_55d6a0;
        case 0x55d6a4u: goto label_55d6a4;
        case 0x55d6a8u: goto label_55d6a8;
        case 0x55d6acu: goto label_55d6ac;
        case 0x55d6b0u: goto label_55d6b0;
        case 0x55d6b4u: goto label_55d6b4;
        case 0x55d6b8u: goto label_55d6b8;
        case 0x55d6bcu: goto label_55d6bc;
        case 0x55d6c0u: goto label_55d6c0;
        case 0x55d6c4u: goto label_55d6c4;
        case 0x55d6c8u: goto label_55d6c8;
        case 0x55d6ccu: goto label_55d6cc;
        case 0x55d6d0u: goto label_55d6d0;
        case 0x55d6d4u: goto label_55d6d4;
        case 0x55d6d8u: goto label_55d6d8;
        case 0x55d6dcu: goto label_55d6dc;
        case 0x55d6e0u: goto label_55d6e0;
        case 0x55d6e4u: goto label_55d6e4;
        case 0x55d6e8u: goto label_55d6e8;
        case 0x55d6ecu: goto label_55d6ec;
        case 0x55d6f0u: goto label_55d6f0;
        case 0x55d6f4u: goto label_55d6f4;
        case 0x55d6f8u: goto label_55d6f8;
        case 0x55d6fcu: goto label_55d6fc;
        case 0x55d700u: goto label_55d700;
        case 0x55d704u: goto label_55d704;
        case 0x55d708u: goto label_55d708;
        case 0x55d70cu: goto label_55d70c;
        case 0x55d710u: goto label_55d710;
        case 0x55d714u: goto label_55d714;
        case 0x55d718u: goto label_55d718;
        case 0x55d71cu: goto label_55d71c;
        case 0x55d720u: goto label_55d720;
        case 0x55d724u: goto label_55d724;
        case 0x55d728u: goto label_55d728;
        case 0x55d72cu: goto label_55d72c;
        case 0x55d730u: goto label_55d730;
        case 0x55d734u: goto label_55d734;
        case 0x55d738u: goto label_55d738;
        case 0x55d73cu: goto label_55d73c;
        case 0x55d740u: goto label_55d740;
        case 0x55d744u: goto label_55d744;
        case 0x55d748u: goto label_55d748;
        case 0x55d74cu: goto label_55d74c;
        case 0x55d750u: goto label_55d750;
        case 0x55d754u: goto label_55d754;
        case 0x55d758u: goto label_55d758;
        case 0x55d75cu: goto label_55d75c;
        case 0x55d760u: goto label_55d760;
        case 0x55d764u: goto label_55d764;
        case 0x55d768u: goto label_55d768;
        case 0x55d76cu: goto label_55d76c;
        case 0x55d770u: goto label_55d770;
        case 0x55d774u: goto label_55d774;
        case 0x55d778u: goto label_55d778;
        case 0x55d77cu: goto label_55d77c;
        case 0x55d780u: goto label_55d780;
        case 0x55d784u: goto label_55d784;
        case 0x55d788u: goto label_55d788;
        case 0x55d78cu: goto label_55d78c;
        case 0x55d790u: goto label_55d790;
        case 0x55d794u: goto label_55d794;
        case 0x55d798u: goto label_55d798;
        case 0x55d79cu: goto label_55d79c;
        default: break;
    }

    ctx->pc = 0x55d430u;

label_55d430:
    // 0x55d430: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x55d430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_55d434:
    // 0x55d434: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x55d434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_55d438:
    // 0x55d438: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x55d438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_55d43c:
    // 0x55d43c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x55d43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_55d440:
    // 0x55d440: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x55d440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_55d444:
    // 0x55d444: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x55d444u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_55d448:
    // 0x55d448: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x55d448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_55d44c:
    // 0x55d44c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x55d44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_55d450:
    // 0x55d450: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x55d450u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55d454:
    // 0x55d454: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x55d454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_55d458:
    // 0x55d458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x55d458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_55d45c:
    // 0x55d45c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55d45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_55d460:
    // 0x55d460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55d460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55d464:
    // 0x55d464: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x55d464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_55d468:
    // 0x55d468: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x55d468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_55d46c:
    // 0x55d46c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x55d46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_55d470:
    // 0x55d470: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x55d470u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_55d474:
    // 0x55d474: 0x102000bc  beqz        $at, . + 4 + (0xBC << 2)
label_55d478:
    if (ctx->pc == 0x55D478u) {
        ctx->pc = 0x55D478u;
            // 0x55d478: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D47Cu;
        goto label_55d47c;
    }
    ctx->pc = 0x55D474u;
    {
        const bool branch_taken_0x55d474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x55D478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D474u;
            // 0x55d478: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55d474) {
            ctx->pc = 0x55D768u;
            goto label_55d768;
        }
    }
    ctx->pc = 0x55D47Cu;
label_55d47c:
    // 0x55d47c: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x55d47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_55d480:
    // 0x55d480: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x55d480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_55d484:
    // 0x55d484: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x55d484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_55d488:
    // 0x55d488: 0x8c631160  lw          $v1, 0x1160($v1)
    ctx->pc = 0x55d488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4448)));
label_55d48c:
    // 0x55d48c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x55d48cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_55d490:
    // 0x55d490: 0x502000b6  beql        $at, $zero, . + 4 + (0xB6 << 2)
label_55d494:
    if (ctx->pc == 0x55D494u) {
        ctx->pc = 0x55D494u;
            // 0x55d494: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x55D498u;
        goto label_55d498;
    }
    ctx->pc = 0x55D490u;
    {
        const bool branch_taken_0x55d490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d490) {
            ctx->pc = 0x55D494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D490u;
            // 0x55d494: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D76Cu;
            goto label_55d76c;
        }
    }
    ctx->pc = 0x55D498u;
label_55d498:
    // 0x55d498: 0x8cbe0004  lw          $fp, 0x4($a1)
    ctx->pc = 0x55d498u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_55d49c:
    // 0x55d49c: 0x26a20060  addiu       $v0, $s5, 0x60
    ctx->pc = 0x55d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_55d4a0:
    // 0x55d4a0: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x55d4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_55d4a4:
    // 0x55d4a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55d4a8:
    // 0x55d4a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55d4ac:
    // 0x55d4ac: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x55d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_55d4b0:
    // 0x55d4b0: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x55d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_55d4b4:
    // 0x55d4b4: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x55d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_55d4b8:
    // 0x55d4b8: 0xc04e738  jal         func_139CE0
label_55d4bc:
    if (ctx->pc == 0x55D4BCu) {
        ctx->pc = 0x55D4BCu;
            // 0x55d4bc: 0x27d00008  addiu       $s0, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->pc = 0x55D4C0u;
        goto label_55d4c0;
    }
    ctx->pc = 0x55D4B8u;
    SET_GPR_U32(ctx, 31, 0x55D4C0u);
    ctx->pc = 0x55D4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D4B8u;
            // 0x55d4bc: 0x27d00008  addiu       $s0, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D4C0u; }
        if (ctx->pc != 0x55D4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D4C0u; }
        if (ctx->pc != 0x55D4C0u) { return; }
    }
    ctx->pc = 0x55D4C0u;
label_55d4c0:
    // 0x55d4c0: 0x24160009  addiu       $s6, $zero, 0x9
    ctx->pc = 0x55d4c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_55d4c4:
    // 0x55d4c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55d4c8:
    // 0x55d4c8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x55d4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_55d4cc:
    // 0x55d4cc: 0x8c47e3c0  lw          $a3, -0x1C40($v0)
    ctx->pc = 0x55d4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_55d4d0:
    // 0x55d4d0: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x55d4d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_55d4d4:
    // 0x55d4d4: 0x8c84e3b0  lw          $a0, -0x1C50($a0)
    ctx->pc = 0x55d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960048)));
label_55d4d8:
    // 0x55d4d8: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x55d4d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_55d4dc:
    // 0x55d4dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x55d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_55d4e0:
    // 0x55d4e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55d4e4:
    // 0x55d4e4: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x55d4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_55d4e8:
    // 0x55d4e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55d4ec:
    // 0x55d4ec: 0x8c45e360  lw          $a1, -0x1CA0($v0)
    ctx->pc = 0x55d4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_55d4f0:
    // 0x55d4f0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x55d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_55d4f4:
    // 0x55d4f4: 0x63980  sll         $a3, $a2, 6
    ctx->pc = 0x55d4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_55d4f8:
    // 0x55d4f8: 0xa7a021  addu        $s4, $a1, $a3
    ctx->pc = 0x55d4f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_55d4fc:
    // 0x55d4fc: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x55d4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_55d500:
    // 0x55d500: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x55d500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_55d504:
    // 0x55d504: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x55d504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_55d508:
    // 0x55d508: 0xacf40000  sw          $s4, 0x0($a3)
    ctx->pc = 0x55d508u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 20));
label_55d50c:
    // 0x55d50c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x55d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_55d510:
    // 0x55d510: 0x8cc6e3d8  lw          $a2, -0x1C28($a2)
    ctx->pc = 0x55d510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960088)));
label_55d514:
    // 0x55d514: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x55d514u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_55d518:
    // 0x55d518: 0x8caae378  lw          $t2, -0x1C88($a1)
    ctx->pc = 0x55d518u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294959992)));
label_55d51c:
    // 0x55d51c: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x55d51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_55d520:
    // 0x55d520: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x55d520u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_55d524:
    // 0x55d524: 0x14b9821  addu        $s3, $t2, $t3
    ctx->pc = 0x55d524u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_55d528:
    // 0x55d528: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x55d528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_55d52c:
    // 0x55d52c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x55d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_55d530:
    // 0x55d530: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x55d530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55d534:
    // 0x55d534: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x55d534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_55d538:
    // 0x55d538: 0x8c6a0028  lw          $t2, 0x28($v1)
    ctx->pc = 0x55d538u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_55d53c:
    // 0x55d53c: 0x8ce2e3c0  lw          $v0, -0x1C40($a3)
    ctx->pc = 0x55d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960064)));
label_55d540:
    // 0x55d540: 0x8d23e3d8  lw          $v1, -0x1C28($t1)
    ctx->pc = 0x55d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960088)));
label_55d544:
    // 0x55d544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x55d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_55d548:
    // 0x55d548: 0xaca2e3c0  sw          $v0, -0x1C40($a1)
    ctx->pc = 0x55d548u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960064), GPR_U32(ctx, 2));
label_55d54c:
    // 0x55d54c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x55d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_55d550:
    // 0x55d550: 0xad03e3d8  sw          $v1, -0x1C28($t0)
    ctx->pc = 0x55d550u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294960088), GPR_U32(ctx, 3));
label_55d554:
    // 0x55d554: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x55d554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_55d558:
    // 0x55d558: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x55d558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_55d55c:
    // 0x55d55c: 0xc04e4a4  jal         func_139290
label_55d560:
    if (ctx->pc == 0x55D560u) {
        ctx->pc = 0x55D560u;
            // 0x55d560: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D564u;
        goto label_55d564;
    }
    ctx->pc = 0x55D55Cu;
    SET_GPR_U32(ctx, 31, 0x55D564u);
    ctx->pc = 0x55D560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D55Cu;
            // 0x55d560: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D564u; }
        if (ctx->pc != 0x55D564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D564u; }
        if (ctx->pc != 0x55D564u) { return; }
    }
    ctx->pc = 0x55D564u;
label_55d564:
    // 0x55d564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x55d564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55d568:
    // 0x55d568: 0xc04f278  jal         func_13C9E0
label_55d56c:
    if (ctx->pc == 0x55D56Cu) {
        ctx->pc = 0x55D56Cu;
            // 0x55d56c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x55D570u;
        goto label_55d570;
    }
    ctx->pc = 0x55D568u;
    SET_GPR_U32(ctx, 31, 0x55D570u);
    ctx->pc = 0x55D56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D568u;
            // 0x55d56c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D570u; }
        if (ctx->pc != 0x55D570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D570u; }
        if (ctx->pc != 0x55D570u) { return; }
    }
    ctx->pc = 0x55D570u;
label_55d570:
    // 0x55d570: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x55d570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_55d574:
    // 0x55d574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x55d574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55d578:
    // 0x55d578: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55d578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55d57c:
    // 0x55d57c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x55d57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55d580:
    // 0x55d580: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x55d580u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_55d584:
    // 0x55d584: 0xc04ce50  jal         func_133940
label_55d588:
    if (ctx->pc == 0x55D588u) {
        ctx->pc = 0x55D588u;
            // 0x55d588: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x55D58Cu;
        goto label_55d58c;
    }
    ctx->pc = 0x55D584u;
    SET_GPR_U32(ctx, 31, 0x55D58Cu);
    ctx->pc = 0x55D588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D584u;
            // 0x55d588: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D58Cu; }
        if (ctx->pc != 0x55D58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D58Cu; }
        if (ctx->pc != 0x55D58Cu) { return; }
    }
    ctx->pc = 0x55D58Cu;
label_55d58c:
    // 0x55d58c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x55d58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55d590:
    // 0x55d590: 0xc04ce80  jal         func_133A00
label_55d594:
    if (ctx->pc == 0x55D594u) {
        ctx->pc = 0x55D594u;
            // 0x55d594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D598u;
        goto label_55d598;
    }
    ctx->pc = 0x55D590u;
    SET_GPR_U32(ctx, 31, 0x55D598u);
    ctx->pc = 0x55D594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D590u;
            // 0x55d594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D598u; }
        if (ctx->pc != 0x55D598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D598u; }
        if (ctx->pc != 0x55D598u) { return; }
    }
    ctx->pc = 0x55D598u;
label_55d598:
    // 0x55d598: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x55d598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55d59c:
    // 0x55d59c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x55d59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_55d5a0:
    // 0x55d5a0: 0xc04cd60  jal         func_133580
label_55d5a4:
    if (ctx->pc == 0x55D5A4u) {
        ctx->pc = 0x55D5A4u;
            // 0x55d5a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D5A8u;
        goto label_55d5a8;
    }
    ctx->pc = 0x55D5A0u;
    SET_GPR_U32(ctx, 31, 0x55D5A8u);
    ctx->pc = 0x55D5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D5A0u;
            // 0x55d5a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D5A8u; }
        if (ctx->pc != 0x55D5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D5A8u; }
        if (ctx->pc != 0x55D5A8u) { return; }
    }
    ctx->pc = 0x55D5A8u;
label_55d5a8:
    // 0x55d5a8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x55d5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_55d5ac:
    // 0x55d5ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x55d5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_55d5b0:
    // 0x55d5b0: 0x320f809  jalr        $t9
label_55d5b4:
    if (ctx->pc == 0x55D5B4u) {
        ctx->pc = 0x55D5B4u;
            // 0x55d5b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D5B8u;
        goto label_55d5b8;
    }
    ctx->pc = 0x55D5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55D5B8u);
        ctx->pc = 0x55D5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D5B0u;
            // 0x55d5b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55D5B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55D5B8u; }
            if (ctx->pc != 0x55D5B8u) { return; }
        }
        }
    }
    ctx->pc = 0x55D5B8u;
label_55d5b8:
    // 0x55d5b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x55d5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_55d5bc:
    // 0x55d5bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x55d5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55d5c0:
    // 0x55d5c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x55d5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55d5c4:
    // 0x55d5c4: 0xc054fd4  jal         func_153F50
label_55d5c8:
    if (ctx->pc == 0x55D5C8u) {
        ctx->pc = 0x55D5C8u;
            // 0x55d5c8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D5CCu;
        goto label_55d5cc;
    }
    ctx->pc = 0x55D5C4u;
    SET_GPR_U32(ctx, 31, 0x55D5CCu);
    ctx->pc = 0x55D5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D5C4u;
            // 0x55d5c8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D5CCu; }
        if (ctx->pc != 0x55D5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D5CCu; }
        if (ctx->pc != 0x55D5CCu) { return; }
    }
    ctx->pc = 0x55D5CCu;
label_55d5cc:
    // 0x55d5cc: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x55d5ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_55d5d0:
    // 0x55d5d0: 0x16c0ffbc  bnez        $s6, . + 4 + (-0x44 << 2)
label_55d5d4:
    if (ctx->pc == 0x55D5D4u) {
        ctx->pc = 0x55D5D4u;
            // 0x55d5d4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x55D5D8u;
        goto label_55d5d8;
    }
    ctx->pc = 0x55D5D0u;
    {
        const bool branch_taken_0x55d5d0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x55D5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D5D0u;
            // 0x55d5d4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55d5d0) {
            ctx->pc = 0x55D4C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55d4c4;
        }
    }
    ctx->pc = 0x55D5D8u;
label_55d5d8:
    // 0x55d5d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55d5dc:
    // 0x55d5dc: 0x8c42e3c0  lw          $v0, -0x1C40($v0)
    ctx->pc = 0x55d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_55d5e0:
    // 0x55d5e0: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
label_55d5e4:
    if (ctx->pc == 0x55D5E4u) {
        ctx->pc = 0x55D5E4u;
            // 0x55d5e4: 0x8fc40004  lw          $a0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->pc = 0x55D5E8u;
        goto label_55d5e8;
    }
    ctx->pc = 0x55D5E0u;
    {
        const bool branch_taken_0x55d5e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x55d5e0) {
            ctx->pc = 0x55D5E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D5E0u;
            // 0x55d5e4: 0x8fc40004  lw          $a0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D620u;
            goto label_55d620;
        }
    }
    ctx->pc = 0x55D5E8u;
label_55d5e8:
    // 0x55d5e8: 0xc04e738  jal         func_139CE0
label_55d5ec:
    if (ctx->pc == 0x55D5ECu) {
        ctx->pc = 0x55D5ECu;
            // 0x55d5ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x55D5F0u;
        goto label_55d5f0;
    }
    ctx->pc = 0x55D5E8u;
    SET_GPR_U32(ctx, 31, 0x55D5F0u);
    ctx->pc = 0x55D5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D5E8u;
            // 0x55d5ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D5F0u; }
        if (ctx->pc != 0x55D5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D5F0u; }
        if (ctx->pc != 0x55D5F0u) { return; }
    }
    ctx->pc = 0x55D5F0u;
label_55d5f0:
    // 0x55d5f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55d5f4:
    // 0x55d5f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x55d5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_55d5f8:
    // 0x55d5f8: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x55d5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_55d5fc:
    // 0x55d5fc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x55d5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_55d600:
    // 0x55d600: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x55d600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_55d604:
    // 0x55d604: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55d604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55d608:
    // 0x55d608: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x55d608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_55d60c:
    // 0x55d60c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55d610:
    // 0x55d610: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x55d610u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_55d614:
    // 0x55d614: 0xc055ea8  jal         func_157AA0
label_55d618:
    if (ctx->pc == 0x55D618u) {
        ctx->pc = 0x55D618u;
            // 0x55d618: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D61Cu;
        goto label_55d61c;
    }
    ctx->pc = 0x55D614u;
    SET_GPR_U32(ctx, 31, 0x55D61Cu);
    ctx->pc = 0x55D618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D614u;
            // 0x55d618: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D61Cu; }
        if (ctx->pc != 0x55D61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D61Cu; }
        if (ctx->pc != 0x55D61Cu) { return; }
    }
    ctx->pc = 0x55D61Cu;
label_55d61c:
    // 0x55d61c: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x55d61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_55d620:
    // 0x55d620: 0xc04e738  jal         func_139CE0
label_55d624:
    if (ctx->pc == 0x55D624u) {
        ctx->pc = 0x55D628u;
        goto label_55d628;
    }
    ctx->pc = 0x55D620u;
    SET_GPR_U32(ctx, 31, 0x55D628u);
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D628u; }
        if (ctx->pc != 0x55D628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D628u; }
        if (ctx->pc != 0x55D628u) { return; }
    }
    ctx->pc = 0x55D628u;
label_55d628:
    // 0x55d628: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55d628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55d62c:
    // 0x55d62c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x55d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_55d630:
    // 0x55d630: 0x8c47e3c0  lw          $a3, -0x1C40($v0)
    ctx->pc = 0x55d630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_55d634:
    // 0x55d634: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x55d634u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_55d638:
    // 0x55d638: 0x8c84e3b0  lw          $a0, -0x1C50($a0)
    ctx->pc = 0x55d638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960048)));
label_55d63c:
    // 0x55d63c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x55d63cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_55d640:
    // 0x55d640: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x55d640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_55d644:
    // 0x55d644: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55d644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55d648:
    // 0x55d648: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x55d648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_55d64c:
    // 0x55d64c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55d650:
    // 0x55d650: 0x8c45e360  lw          $a1, -0x1CA0($v0)
    ctx->pc = 0x55d650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_55d654:
    // 0x55d654: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x55d654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_55d658:
    // 0x55d658: 0x63980  sll         $a3, $a2, 6
    ctx->pc = 0x55d658u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_55d65c:
    // 0x55d65c: 0xa78021  addu        $s0, $a1, $a3
    ctx->pc = 0x55d65cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_55d660:
    // 0x55d660: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x55d660u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_55d664:
    // 0x55d664: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x55d664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_55d668:
    // 0x55d668: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x55d668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_55d66c:
    // 0x55d66c: 0xacf00000  sw          $s0, 0x0($a3)
    ctx->pc = 0x55d66cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 16));
label_55d670:
    // 0x55d670: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x55d670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_55d674:
    // 0x55d674: 0x8cc6e3d8  lw          $a2, -0x1C28($a2)
    ctx->pc = 0x55d674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960088)));
label_55d678:
    // 0x55d678: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x55d678u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_55d67c:
    // 0x55d67c: 0x8caae378  lw          $t2, -0x1C88($a1)
    ctx->pc = 0x55d67cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294959992)));
label_55d680:
    // 0x55d680: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x55d680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_55d684:
    // 0x55d684: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x55d684u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_55d688:
    // 0x55d688: 0x14b9821  addu        $s3, $t2, $t3
    ctx->pc = 0x55d688u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_55d68c:
    // 0x55d68c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x55d68cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_55d690:
    // 0x55d690: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x55d690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_55d694:
    // 0x55d694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x55d694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55d698:
    // 0x55d698: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x55d698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_55d69c:
    // 0x55d69c: 0x8c6a0028  lw          $t2, 0x28($v1)
    ctx->pc = 0x55d69cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_55d6a0:
    // 0x55d6a0: 0x8ce2e3c0  lw          $v0, -0x1C40($a3)
    ctx->pc = 0x55d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960064)));
label_55d6a4:
    // 0x55d6a4: 0x8d23e3d8  lw          $v1, -0x1C28($t1)
    ctx->pc = 0x55d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960088)));
label_55d6a8:
    // 0x55d6a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x55d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_55d6ac:
    // 0x55d6ac: 0xaca2e3c0  sw          $v0, -0x1C40($a1)
    ctx->pc = 0x55d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960064), GPR_U32(ctx, 2));
label_55d6b0:
    // 0x55d6b0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x55d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_55d6b4:
    // 0x55d6b4: 0xad03e3d8  sw          $v1, -0x1C28($t0)
    ctx->pc = 0x55d6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294960088), GPR_U32(ctx, 3));
label_55d6b8:
    // 0x55d6b8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x55d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_55d6bc:
    // 0x55d6bc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x55d6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_55d6c0:
    // 0x55d6c0: 0xc04e4a4  jal         func_139290
label_55d6c4:
    if (ctx->pc == 0x55D6C4u) {
        ctx->pc = 0x55D6C4u;
            // 0x55d6c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D6C8u;
        goto label_55d6c8;
    }
    ctx->pc = 0x55D6C0u;
    SET_GPR_U32(ctx, 31, 0x55D6C8u);
    ctx->pc = 0x55D6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D6C0u;
            // 0x55d6c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D6C8u; }
        if (ctx->pc != 0x55D6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D6C8u; }
        if (ctx->pc != 0x55D6C8u) { return; }
    }
    ctx->pc = 0x55D6C8u;
label_55d6c8:
    // 0x55d6c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x55d6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55d6cc:
    // 0x55d6cc: 0xc04f278  jal         func_13C9E0
label_55d6d0:
    if (ctx->pc == 0x55D6D0u) {
        ctx->pc = 0x55D6D0u;
            // 0x55d6d0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x55D6D4u;
        goto label_55d6d4;
    }
    ctx->pc = 0x55D6CCu;
    SET_GPR_U32(ctx, 31, 0x55D6D4u);
    ctx->pc = 0x55D6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D6CCu;
            // 0x55d6d0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D6D4u; }
        if (ctx->pc != 0x55D6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D6D4u; }
        if (ctx->pc != 0x55D6D4u) { return; }
    }
    ctx->pc = 0x55D6D4u;
label_55d6d4:
    // 0x55d6d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x55d6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55d6d8:
    // 0x55d6d8: 0xc04ce80  jal         func_133A00
label_55d6dc:
    if (ctx->pc == 0x55D6DCu) {
        ctx->pc = 0x55D6DCu;
            // 0x55d6dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D6E0u;
        goto label_55d6e0;
    }
    ctx->pc = 0x55D6D8u;
    SET_GPR_U32(ctx, 31, 0x55D6E0u);
    ctx->pc = 0x55D6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D6D8u;
            // 0x55d6dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D6E0u; }
        if (ctx->pc != 0x55D6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D6E0u; }
        if (ctx->pc != 0x55D6E0u) { return; }
    }
    ctx->pc = 0x55D6E0u;
label_55d6e0:
    // 0x55d6e0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x55d6e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_55d6e4:
    // 0x55d6e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x55d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_55d6e8:
    // 0x55d6e8: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
label_55d6ec:
    if (ctx->pc == 0x55D6ECu) {
        ctx->pc = 0x55D6ECu;
            // 0x55d6ec: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D6F0u;
        goto label_55d6f0;
    }
    ctx->pc = 0x55D6E8u;
    {
        const bool branch_taken_0x55d6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x55d6e8) {
            ctx->pc = 0x55D6ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D6E8u;
            // 0x55d6ec: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D720u;
            goto label_55d720;
        }
    }
    ctx->pc = 0x55D6F0u;
label_55d6f0:
    // 0x55d6f0: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x55d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
label_55d6f4:
    // 0x55d6f4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x55d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_55d6f8:
    // 0x55d6f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x55d6f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55d6fc:
    // 0x55d6fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x55d6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_55d700:
    // 0x55d700: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x55d700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_55d704:
    // 0x55d704: 0xc04f3fc  jal         func_13CFF0
label_55d708:
    if (ctx->pc == 0x55D708u) {
        ctx->pc = 0x55D708u;
            // 0x55d708: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x55D70Cu;
        goto label_55d70c;
    }
    ctx->pc = 0x55D704u;
    SET_GPR_U32(ctx, 31, 0x55D70Cu);
    ctx->pc = 0x55D708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D704u;
            // 0x55d708: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D70Cu; }
        if (ctx->pc != 0x55D70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D70Cu; }
        if (ctx->pc != 0x55D70Cu) { return; }
    }
    ctx->pc = 0x55D70Cu;
label_55d70c:
    // 0x55d70c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x55d70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55d710:
    // 0x55d710: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x55d710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55d714:
    // 0x55d714: 0xc04cd60  jal         func_133580
label_55d718:
    if (ctx->pc == 0x55D718u) {
        ctx->pc = 0x55D718u;
            // 0x55d718: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x55D71Cu;
        goto label_55d71c;
    }
    ctx->pc = 0x55D714u;
    SET_GPR_U32(ctx, 31, 0x55D71Cu);
    ctx->pc = 0x55D718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D714u;
            // 0x55d718: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D71Cu; }
        if (ctx->pc != 0x55D71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D71Cu; }
        if (ctx->pc != 0x55D71Cu) { return; }
    }
    ctx->pc = 0x55D71Cu;
label_55d71c:
    // 0x55d71c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x55d71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_55d720:
    // 0x55d720: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x55d720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55d724:
    // 0x55d724: 0xc04cd60  jal         func_133580
label_55d728:
    if (ctx->pc == 0x55D728u) {
        ctx->pc = 0x55D728u;
            // 0x55d728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D72Cu;
        goto label_55d72c;
    }
    ctx->pc = 0x55D724u;
    SET_GPR_U32(ctx, 31, 0x55D72Cu);
    ctx->pc = 0x55D728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D724u;
            // 0x55d728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D72Cu; }
        if (ctx->pc != 0x55D72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D72Cu; }
        if (ctx->pc != 0x55D72Cu) { return; }
    }
    ctx->pc = 0x55D72Cu;
label_55d72c:
    // 0x55d72c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x55d72cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_55d730:
    // 0x55d730: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x55d730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_55d734:
    // 0x55d734: 0x320f809  jalr        $t9
label_55d738:
    if (ctx->pc == 0x55D738u) {
        ctx->pc = 0x55D738u;
            // 0x55d738: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D73Cu;
        goto label_55d73c;
    }
    ctx->pc = 0x55D734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55D73Cu);
        ctx->pc = 0x55D738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D734u;
            // 0x55d738: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55D73Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55D73Cu; }
            if (ctx->pc != 0x55D73Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55D73Cu;
label_55d73c:
    // 0x55d73c: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x55d73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_55d740:
    // 0x55d740: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x55d740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55d744:
    // 0x55d744: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x55d744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55d748:
    // 0x55d748: 0xc054fd4  jal         func_153F50
label_55d74c:
    if (ctx->pc == 0x55D74Cu) {
        ctx->pc = 0x55D74Cu;
            // 0x55d74c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D750u;
        goto label_55d750;
    }
    ctx->pc = 0x55D748u;
    SET_GPR_U32(ctx, 31, 0x55D750u);
    ctx->pc = 0x55D74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D748u;
            // 0x55d74c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D750u; }
        if (ctx->pc != 0x55D750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D750u; }
        if (ctx->pc != 0x55D750u) { return; }
    }
    ctx->pc = 0x55D750u;
label_55d750:
    // 0x55d750: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x55d750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_55d754:
    // 0x55d754: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55d754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55d758:
    // 0x55d758: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x55d758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55d75c:
    // 0x55d75c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x55d75cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_55d760:
    // 0x55d760: 0xc055234  jal         func_1548D0
label_55d764:
    if (ctx->pc == 0x55D764u) {
        ctx->pc = 0x55D764u;
            // 0x55d764: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x55D768u;
        goto label_55d768;
    }
    ctx->pc = 0x55D760u;
    SET_GPR_U32(ctx, 31, 0x55D768u);
    ctx->pc = 0x55D764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D760u;
            // 0x55d764: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D768u; }
        if (ctx->pc != 0x55D768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D768u; }
        if (ctx->pc != 0x55D768u) { return; }
    }
    ctx->pc = 0x55D768u;
label_55d768:
    // 0x55d768: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x55d768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_55d76c:
    // 0x55d76c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x55d76cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_55d770:
    // 0x55d770: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x55d770u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_55d774:
    // 0x55d774: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x55d774u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55d778:
    // 0x55d778: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x55d778u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55d77c:
    // 0x55d77c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x55d77cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55d780:
    // 0x55d780: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x55d780u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55d784:
    // 0x55d784: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x55d784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55d788:
    // 0x55d788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55d788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55d78c:
    // 0x55d78c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55d78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55d790:
    // 0x55d790: 0x3e00008  jr          $ra
label_55d794:
    if (ctx->pc == 0x55D794u) {
        ctx->pc = 0x55D794u;
            // 0x55d794: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x55D798u;
        goto label_55d798;
    }
    ctx->pc = 0x55D790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55D794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D790u;
            // 0x55d794: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55D798u;
label_55d798:
    // 0x55d798: 0x0  nop
    ctx->pc = 0x55d798u;
    // NOP
label_55d79c:
    // 0x55d79c: 0x0  nop
    ctx->pc = 0x55d79cu;
    // NOP
}
