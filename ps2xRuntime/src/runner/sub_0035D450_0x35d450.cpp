#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035D450
// Address: 0x35d450 - 0x35d710
void sub_0035D450_0x35d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D450_0x35d450");
#endif

    switch (ctx->pc) {
        case 0x35d450u: goto label_35d450;
        case 0x35d454u: goto label_35d454;
        case 0x35d458u: goto label_35d458;
        case 0x35d45cu: goto label_35d45c;
        case 0x35d460u: goto label_35d460;
        case 0x35d464u: goto label_35d464;
        case 0x35d468u: goto label_35d468;
        case 0x35d46cu: goto label_35d46c;
        case 0x35d470u: goto label_35d470;
        case 0x35d474u: goto label_35d474;
        case 0x35d478u: goto label_35d478;
        case 0x35d47cu: goto label_35d47c;
        case 0x35d480u: goto label_35d480;
        case 0x35d484u: goto label_35d484;
        case 0x35d488u: goto label_35d488;
        case 0x35d48cu: goto label_35d48c;
        case 0x35d490u: goto label_35d490;
        case 0x35d494u: goto label_35d494;
        case 0x35d498u: goto label_35d498;
        case 0x35d49cu: goto label_35d49c;
        case 0x35d4a0u: goto label_35d4a0;
        case 0x35d4a4u: goto label_35d4a4;
        case 0x35d4a8u: goto label_35d4a8;
        case 0x35d4acu: goto label_35d4ac;
        case 0x35d4b0u: goto label_35d4b0;
        case 0x35d4b4u: goto label_35d4b4;
        case 0x35d4b8u: goto label_35d4b8;
        case 0x35d4bcu: goto label_35d4bc;
        case 0x35d4c0u: goto label_35d4c0;
        case 0x35d4c4u: goto label_35d4c4;
        case 0x35d4c8u: goto label_35d4c8;
        case 0x35d4ccu: goto label_35d4cc;
        case 0x35d4d0u: goto label_35d4d0;
        case 0x35d4d4u: goto label_35d4d4;
        case 0x35d4d8u: goto label_35d4d8;
        case 0x35d4dcu: goto label_35d4dc;
        case 0x35d4e0u: goto label_35d4e0;
        case 0x35d4e4u: goto label_35d4e4;
        case 0x35d4e8u: goto label_35d4e8;
        case 0x35d4ecu: goto label_35d4ec;
        case 0x35d4f0u: goto label_35d4f0;
        case 0x35d4f4u: goto label_35d4f4;
        case 0x35d4f8u: goto label_35d4f8;
        case 0x35d4fcu: goto label_35d4fc;
        case 0x35d500u: goto label_35d500;
        case 0x35d504u: goto label_35d504;
        case 0x35d508u: goto label_35d508;
        case 0x35d50cu: goto label_35d50c;
        case 0x35d510u: goto label_35d510;
        case 0x35d514u: goto label_35d514;
        case 0x35d518u: goto label_35d518;
        case 0x35d51cu: goto label_35d51c;
        case 0x35d520u: goto label_35d520;
        case 0x35d524u: goto label_35d524;
        case 0x35d528u: goto label_35d528;
        case 0x35d52cu: goto label_35d52c;
        case 0x35d530u: goto label_35d530;
        case 0x35d534u: goto label_35d534;
        case 0x35d538u: goto label_35d538;
        case 0x35d53cu: goto label_35d53c;
        case 0x35d540u: goto label_35d540;
        case 0x35d544u: goto label_35d544;
        case 0x35d548u: goto label_35d548;
        case 0x35d54cu: goto label_35d54c;
        case 0x35d550u: goto label_35d550;
        case 0x35d554u: goto label_35d554;
        case 0x35d558u: goto label_35d558;
        case 0x35d55cu: goto label_35d55c;
        case 0x35d560u: goto label_35d560;
        case 0x35d564u: goto label_35d564;
        case 0x35d568u: goto label_35d568;
        case 0x35d56cu: goto label_35d56c;
        case 0x35d570u: goto label_35d570;
        case 0x35d574u: goto label_35d574;
        case 0x35d578u: goto label_35d578;
        case 0x35d57cu: goto label_35d57c;
        case 0x35d580u: goto label_35d580;
        case 0x35d584u: goto label_35d584;
        case 0x35d588u: goto label_35d588;
        case 0x35d58cu: goto label_35d58c;
        case 0x35d590u: goto label_35d590;
        case 0x35d594u: goto label_35d594;
        case 0x35d598u: goto label_35d598;
        case 0x35d59cu: goto label_35d59c;
        case 0x35d5a0u: goto label_35d5a0;
        case 0x35d5a4u: goto label_35d5a4;
        case 0x35d5a8u: goto label_35d5a8;
        case 0x35d5acu: goto label_35d5ac;
        case 0x35d5b0u: goto label_35d5b0;
        case 0x35d5b4u: goto label_35d5b4;
        case 0x35d5b8u: goto label_35d5b8;
        case 0x35d5bcu: goto label_35d5bc;
        case 0x35d5c0u: goto label_35d5c0;
        case 0x35d5c4u: goto label_35d5c4;
        case 0x35d5c8u: goto label_35d5c8;
        case 0x35d5ccu: goto label_35d5cc;
        case 0x35d5d0u: goto label_35d5d0;
        case 0x35d5d4u: goto label_35d5d4;
        case 0x35d5d8u: goto label_35d5d8;
        case 0x35d5dcu: goto label_35d5dc;
        case 0x35d5e0u: goto label_35d5e0;
        case 0x35d5e4u: goto label_35d5e4;
        case 0x35d5e8u: goto label_35d5e8;
        case 0x35d5ecu: goto label_35d5ec;
        case 0x35d5f0u: goto label_35d5f0;
        case 0x35d5f4u: goto label_35d5f4;
        case 0x35d5f8u: goto label_35d5f8;
        case 0x35d5fcu: goto label_35d5fc;
        case 0x35d600u: goto label_35d600;
        case 0x35d604u: goto label_35d604;
        case 0x35d608u: goto label_35d608;
        case 0x35d60cu: goto label_35d60c;
        case 0x35d610u: goto label_35d610;
        case 0x35d614u: goto label_35d614;
        case 0x35d618u: goto label_35d618;
        case 0x35d61cu: goto label_35d61c;
        case 0x35d620u: goto label_35d620;
        case 0x35d624u: goto label_35d624;
        case 0x35d628u: goto label_35d628;
        case 0x35d62cu: goto label_35d62c;
        case 0x35d630u: goto label_35d630;
        case 0x35d634u: goto label_35d634;
        case 0x35d638u: goto label_35d638;
        case 0x35d63cu: goto label_35d63c;
        case 0x35d640u: goto label_35d640;
        case 0x35d644u: goto label_35d644;
        case 0x35d648u: goto label_35d648;
        case 0x35d64cu: goto label_35d64c;
        case 0x35d650u: goto label_35d650;
        case 0x35d654u: goto label_35d654;
        case 0x35d658u: goto label_35d658;
        case 0x35d65cu: goto label_35d65c;
        case 0x35d660u: goto label_35d660;
        case 0x35d664u: goto label_35d664;
        case 0x35d668u: goto label_35d668;
        case 0x35d66cu: goto label_35d66c;
        case 0x35d670u: goto label_35d670;
        case 0x35d674u: goto label_35d674;
        case 0x35d678u: goto label_35d678;
        case 0x35d67cu: goto label_35d67c;
        case 0x35d680u: goto label_35d680;
        case 0x35d684u: goto label_35d684;
        case 0x35d688u: goto label_35d688;
        case 0x35d68cu: goto label_35d68c;
        case 0x35d690u: goto label_35d690;
        case 0x35d694u: goto label_35d694;
        case 0x35d698u: goto label_35d698;
        case 0x35d69cu: goto label_35d69c;
        case 0x35d6a0u: goto label_35d6a0;
        case 0x35d6a4u: goto label_35d6a4;
        case 0x35d6a8u: goto label_35d6a8;
        case 0x35d6acu: goto label_35d6ac;
        case 0x35d6b0u: goto label_35d6b0;
        case 0x35d6b4u: goto label_35d6b4;
        case 0x35d6b8u: goto label_35d6b8;
        case 0x35d6bcu: goto label_35d6bc;
        case 0x35d6c0u: goto label_35d6c0;
        case 0x35d6c4u: goto label_35d6c4;
        case 0x35d6c8u: goto label_35d6c8;
        case 0x35d6ccu: goto label_35d6cc;
        case 0x35d6d0u: goto label_35d6d0;
        case 0x35d6d4u: goto label_35d6d4;
        case 0x35d6d8u: goto label_35d6d8;
        case 0x35d6dcu: goto label_35d6dc;
        case 0x35d6e0u: goto label_35d6e0;
        case 0x35d6e4u: goto label_35d6e4;
        case 0x35d6e8u: goto label_35d6e8;
        case 0x35d6ecu: goto label_35d6ec;
        case 0x35d6f0u: goto label_35d6f0;
        case 0x35d6f4u: goto label_35d6f4;
        case 0x35d6f8u: goto label_35d6f8;
        case 0x35d6fcu: goto label_35d6fc;
        case 0x35d700u: goto label_35d700;
        case 0x35d704u: goto label_35d704;
        case 0x35d708u: goto label_35d708;
        case 0x35d70cu: goto label_35d70c;
        default: break;
    }

    ctx->pc = 0x35d450u;

label_35d450:
    // 0x35d450: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35d450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35d454:
    // 0x35d454: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x35d454u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_35d458:
    // 0x35d458: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x35d458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_35d45c:
    // 0x35d45c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35d460:
    // 0x35d460: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x35d460u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_35d464:
    // 0x35d464: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x35d464u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_35d468:
    // 0x35d468: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35d468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35d46c:
    // 0x35d46c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x35d46cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_35d470:
    // 0x35d470: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35d470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35d474:
    // 0x35d474: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x35d474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_35d478:
    // 0x35d478: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x35d478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_35d47c:
    // 0x35d47c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x35d47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_35d480:
    // 0x35d480: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x35d480u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_35d484:
    // 0x35d484: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x35d484u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_35d488:
    // 0x35d488: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x35d488u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_35d48c:
    // 0x35d48c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35d490:
    // 0x35d490: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x35d490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_35d494:
    // 0x35d494: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x35d494u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_35d498:
    // 0x35d498: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x35d498u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_35d49c:
    // 0x35d49c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x35d49cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_35d4a0:
    // 0x35d4a0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x35d4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_35d4a4:
    // 0x35d4a4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x35d4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_35d4a8:
    // 0x35d4a8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x35d4a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_35d4ac:
    // 0x35d4ac: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x35d4acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_35d4b0:
    // 0x35d4b0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x35d4b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_35d4b4:
    // 0x35d4b4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x35d4b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_35d4b8:
    // 0x35d4b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35d4bc:
    // 0x35d4bc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x35d4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_35d4c0:
    // 0x35d4c0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x35d4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_35d4c4:
    // 0x35d4c4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x35d4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_35d4c8:
    // 0x35d4c8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x35d4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_35d4cc:
    // 0x35d4cc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x35d4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_35d4d0:
    // 0x35d4d0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x35d4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_35d4d4:
    // 0x35d4d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_35d4d8:
    // 0x35d4d8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x35d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_35d4dc:
    // 0x35d4dc: 0x3e00008  jr          $ra
label_35d4e0:
    if (ctx->pc == 0x35D4E0u) {
        ctx->pc = 0x35D4E0u;
            // 0x35d4e0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x35D4E4u;
        goto label_35d4e4;
    }
    ctx->pc = 0x35D4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D4DCu;
            // 0x35d4e0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35D4E4u;
label_35d4e4:
    // 0x35d4e4: 0x0  nop
    ctx->pc = 0x35d4e4u;
    // NOP
label_35d4e8:
    // 0x35d4e8: 0x0  nop
    ctx->pc = 0x35d4e8u;
    // NOP
label_35d4ec:
    // 0x35d4ec: 0x0  nop
    ctx->pc = 0x35d4ecu;
    // NOP
label_35d4f0:
    // 0x35d4f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x35d4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_35d4f4:
    // 0x35d4f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35d4f8:
    // 0x35d4f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x35d4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_35d4fc:
    // 0x35d4fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35d4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_35d500:
    // 0x35d500: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35d500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_35d504:
    // 0x35d504: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35d504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35d508:
    // 0x35d508: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35d508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35d50c:
    // 0x35d50c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35d50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35d510:
    // 0x35d510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35d510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35d514:
    // 0x35d514: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x35d514u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_35d518:
    // 0x35d518: 0x10a3002d  beq         $a1, $v1, . + 4 + (0x2D << 2)
label_35d51c:
    if (ctx->pc == 0x35D51Cu) {
        ctx->pc = 0x35D51Cu;
            // 0x35d51c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35D520u;
        goto label_35d520;
    }
    ctx->pc = 0x35D518u;
    {
        const bool branch_taken_0x35d518 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x35D51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D518u;
            // 0x35d51c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d518) {
            ctx->pc = 0x35D5D0u;
            goto label_35d5d0;
        }
    }
    ctx->pc = 0x35D520u;
label_35d520:
    // 0x35d520: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35d520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35d524:
    // 0x35d524: 0x50a30027  beql        $a1, $v1, . + 4 + (0x27 << 2)
label_35d528:
    if (ctx->pc == 0x35D528u) {
        ctx->pc = 0x35D528u;
            // 0x35d528: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x35D52Cu;
        goto label_35d52c;
    }
    ctx->pc = 0x35D524u;
    {
        const bool branch_taken_0x35d524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35d524) {
            ctx->pc = 0x35D528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35D524u;
            // 0x35d528: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35D5C4u;
            goto label_35d5c4;
        }
    }
    ctx->pc = 0x35D52Cu;
label_35d52c:
    // 0x35d52c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35d530:
    // 0x35d530: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_35d534:
    if (ctx->pc == 0x35D534u) {
        ctx->pc = 0x35D538u;
        goto label_35d538;
    }
    ctx->pc = 0x35D530u;
    {
        const bool branch_taken_0x35d530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35d530) {
            ctx->pc = 0x35D540u;
            goto label_35d540;
        }
    }
    ctx->pc = 0x35D538u;
label_35d538:
    // 0x35d538: 0x10000069  b           . + 4 + (0x69 << 2)
label_35d53c:
    if (ctx->pc == 0x35D53Cu) {
        ctx->pc = 0x35D540u;
        goto label_35d540;
    }
    ctx->pc = 0x35D538u;
    {
        const bool branch_taken_0x35d538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d538) {
            ctx->pc = 0x35D6E0u;
            goto label_35d6e0;
        }
    }
    ctx->pc = 0x35D540u;
label_35d540:
    // 0x35d540: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x35d540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_35d544:
    // 0x35d544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35d544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35d548:
    // 0x35d548: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x35d548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_35d54c:
    // 0x35d54c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x35d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_35d550:
    // 0x35d550: 0x10640063  beq         $v1, $a0, . + 4 + (0x63 << 2)
label_35d554:
    if (ctx->pc == 0x35D554u) {
        ctx->pc = 0x35D558u;
        goto label_35d558;
    }
    ctx->pc = 0x35D550u;
    {
        const bool branch_taken_0x35d550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x35d550) {
            ctx->pc = 0x35D6E0u;
            goto label_35d6e0;
        }
    }
    ctx->pc = 0x35D558u;
label_35d558:
    // 0x35d558: 0x8ea70084  lw          $a3, 0x84($s5)
    ctx->pc = 0x35d558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_35d55c:
    // 0x35d55c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x35d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_35d560:
    // 0x35d560: 0x8c661810  lw          $a2, 0x1810($v1)
    ctx->pc = 0x35d560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6160)));
label_35d564:
    // 0x35d564: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x35d564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_35d568:
    // 0x35d568: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x35d568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_35d56c:
    // 0x35d56c: 0x8ce80030  lw          $t0, 0x30($a3)
    ctx->pc = 0x35d56cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_35d570:
    // 0x35d570: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x35d570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_35d574:
    // 0x35d574: 0xc03827  not         $a3, $a2
    ctx->pc = 0x35d574u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
label_35d578:
    // 0x35d578: 0x8d060120  lw          $a2, 0x120($t0)
    ctx->pc = 0x35d578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 288)));
label_35d57c:
    // 0x35d57c: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x35d57cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
label_35d580:
    // 0x35d580: 0xad060120  sw          $a2, 0x120($t0)
    ctx->pc = 0x35d580u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 288), GPR_U32(ctx, 6));
label_35d584:
    // 0x35d584: 0x8ca61818  lw          $a2, 0x1818($a1)
    ctx->pc = 0x35d584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6168)));
label_35d588:
    // 0x35d588: 0x8d050240  lw          $a1, 0x240($t0)
    ctx->pc = 0x35d588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 576)));
label_35d58c:
    // 0x35d58c: 0xc03027  not         $a2, $a2
    ctx->pc = 0x35d58cu;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
label_35d590:
    // 0x35d590: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x35d590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_35d594:
    // 0x35d594: 0xad050240  sw          $a1, 0x240($t0)
    ctx->pc = 0x35d594u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 576), GPR_U32(ctx, 5));
label_35d598:
    // 0x35d598: 0x8c851820  lw          $a1, 0x1820($a0)
    ctx->pc = 0x35d598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6176)));
label_35d59c:
    // 0x35d59c: 0x8d040360  lw          $a0, 0x360($t0)
    ctx->pc = 0x35d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 864)));
label_35d5a0:
    // 0x35d5a0: 0xa02827  not         $a1, $a1
    ctx->pc = 0x35d5a0u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_35d5a4:
    // 0x35d5a4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x35d5a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_35d5a8:
    // 0x35d5a8: 0xad040360  sw          $a0, 0x360($t0)
    ctx->pc = 0x35d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 864), GPR_U32(ctx, 4));
label_35d5ac:
    // 0x35d5ac: 0x8c641828  lw          $a0, 0x1828($v1)
    ctx->pc = 0x35d5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6184)));
label_35d5b0:
    // 0x35d5b0: 0x8d0303f0  lw          $v1, 0x3F0($t0)
    ctx->pc = 0x35d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1008)));
label_35d5b4:
    // 0x35d5b4: 0x802027  not         $a0, $a0
    ctx->pc = 0x35d5b4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_35d5b8:
    // 0x35d5b8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x35d5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_35d5bc:
    // 0x35d5bc: 0x10000048  b           . + 4 + (0x48 << 2)
label_35d5c0:
    if (ctx->pc == 0x35D5C0u) {
        ctx->pc = 0x35D5C0u;
            // 0x35d5c0: 0xad0303f0  sw          $v1, 0x3F0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1008), GPR_U32(ctx, 3));
        ctx->pc = 0x35D5C4u;
        goto label_35d5c4;
    }
    ctx->pc = 0x35D5BCu;
    {
        const bool branch_taken_0x35d5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D5BCu;
            // 0x35d5c0: 0xad0303f0  sw          $v1, 0x3F0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1008), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d5bc) {
            ctx->pc = 0x35D6E0u;
            goto label_35d6e0;
        }
    }
    ctx->pc = 0x35D5C4u;
label_35d5c4:
    // 0x35d5c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x35d5c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_35d5c8:
    // 0x35d5c8: 0x320f809  jalr        $t9
label_35d5cc:
    if (ctx->pc == 0x35D5CCu) {
        ctx->pc = 0x35D5D0u;
        goto label_35d5d0;
    }
    ctx->pc = 0x35D5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35D5D0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x35D5D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35D5D0u; }
            if (ctx->pc != 0x35D5D0u) { return; }
        }
        }
    }
    ctx->pc = 0x35D5D0u;
label_35d5d0:
    // 0x35d5d0: 0x8ea30084  lw          $v1, 0x84($s5)
    ctx->pc = 0x35d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_35d5d4:
    // 0x35d5d4: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x35d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_35d5d8:
    // 0x35d5d8: 0x8c83040c  lw          $v1, 0x40C($a0)
    ctx->pc = 0x35d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1036)));
label_35d5dc:
    // 0x35d5dc: 0x2463016c  addiu       $v1, $v1, 0x16C
    ctx->pc = 0x35d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 364));
label_35d5e0:
    // 0x35d5e0: 0xac83040c  sw          $v1, 0x40C($a0)
    ctx->pc = 0x35d5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1036), GPR_U32(ctx, 3));
label_35d5e4:
    // 0x35d5e4: 0x8eb20070  lw          $s2, 0x70($s5)
    ctx->pc = 0x35d5e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_35d5e8:
    // 0x35d5e8: 0x1240003d  beqz        $s2, . + 4 + (0x3D << 2)
label_35d5ec:
    if (ctx->pc == 0x35D5ECu) {
        ctx->pc = 0x35D5F0u;
        goto label_35d5f0;
    }
    ctx->pc = 0x35D5E8u;
    {
        const bool branch_taken_0x35d5e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d5e8) {
            ctx->pc = 0x35D6E0u;
            goto label_35d6e0;
        }
    }
    ctx->pc = 0x35D5F0u;
label_35d5f0:
    // 0x35d5f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x35d5f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35d5f4:
    // 0x35d5f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35d5f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35d5f8:
    // 0x35d5f8: 0x8ea40074  lw          $a0, 0x74($s5)
    ctx->pc = 0x35d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_35d5fc:
    // 0x35d5fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35d600:
    // 0x35d600: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x35d600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_35d604:
    // 0x35d604: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x35d604u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35d608:
    // 0x35d608: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x35d608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_35d60c:
    // 0x35d60c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_35d610:
    if (ctx->pc == 0x35D610u) {
        ctx->pc = 0x35D614u;
        goto label_35d614;
    }
    ctx->pc = 0x35D60Cu;
    {
        const bool branch_taken_0x35d60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35d60c) {
            ctx->pc = 0x35D638u;
            goto label_35d638;
        }
    }
    ctx->pc = 0x35D614u;
label_35d614:
    // 0x35d614: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_35d618:
    if (ctx->pc == 0x35D618u) {
        ctx->pc = 0x35D61Cu;
        goto label_35d61c;
    }
    ctx->pc = 0x35D614u;
    {
        const bool branch_taken_0x35d614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d614) {
            ctx->pc = 0x35D628u;
            goto label_35d628;
        }
    }
    ctx->pc = 0x35D61Cu;
label_35d61c:
    // 0x35d61c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_35d620:
    if (ctx->pc == 0x35D620u) {
        ctx->pc = 0x35D624u;
        goto label_35d624;
    }
    ctx->pc = 0x35D61Cu;
    {
        const bool branch_taken_0x35d61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d61c) {
            ctx->pc = 0x35D6D0u;
            goto label_35d6d0;
        }
    }
    ctx->pc = 0x35D624u;
label_35d624:
    // 0x35d624: 0x0  nop
    ctx->pc = 0x35d624u;
    // NOP
label_35d628:
    // 0x35d628: 0xc0d75c4  jal         func_35D710
label_35d62c:
    if (ctx->pc == 0x35D62Cu) {
        ctx->pc = 0x35D62Cu;
            // 0x35d62c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35D630u;
        goto label_35d630;
    }
    ctx->pc = 0x35D628u;
    SET_GPR_U32(ctx, 31, 0x35D630u);
    ctx->pc = 0x35D62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D628u;
            // 0x35d62c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35D710u;
    if (runtime->hasFunction(0x35D710u)) {
        auto targetFn = runtime->lookupFunction(0x35D710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D630u; }
        if (ctx->pc != 0x35D630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035D710_0x35d710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D630u; }
        if (ctx->pc != 0x35D630u) { return; }
    }
    ctx->pc = 0x35D630u;
label_35d630:
    // 0x35d630: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35d630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35d634:
    // 0x35d634: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x35d634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
label_35d638:
    // 0x35d638: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x35d638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_35d63c:
    // 0x35d63c: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x35d63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35d640:
    // 0x35d640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35d640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35d644:
    // 0x35d644: 0x0  nop
    ctx->pc = 0x35d644u;
    // NOP
label_35d648:
    // 0x35d648: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35d648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35d64c:
    // 0x35d64c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_35d650:
    if (ctx->pc == 0x35D650u) {
        ctx->pc = 0x35D650u;
            // 0x35d650: 0x26300064  addiu       $s0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x35D654u;
        goto label_35d654;
    }
    ctx->pc = 0x35D64Cu;
    {
        const bool branch_taken_0x35d64c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35D650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D64Cu;
            // 0x35d650: 0x26300064  addiu       $s0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d64c) {
            ctx->pc = 0x35D6D0u;
            goto label_35d6d0;
        }
    }
    ctx->pc = 0x35D654u;
label_35d654:
    // 0x35d654: 0xc0775b8  jal         func_1DD6E0
label_35d658:
    if (ctx->pc == 0x35D658u) {
        ctx->pc = 0x35D65Cu;
        goto label_35d65c;
    }
    ctx->pc = 0x35D654u;
    SET_GPR_U32(ctx, 31, 0x35D65Cu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D65Cu; }
        if (ctx->pc != 0x35D65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D65Cu; }
        if (ctx->pc != 0x35D65Cu) { return; }
    }
    ctx->pc = 0x35D65Cu;
label_35d65c:
    // 0x35d65c: 0xc0775b4  jal         func_1DD6D0
label_35d660:
    if (ctx->pc == 0x35D660u) {
        ctx->pc = 0x35D660u;
            // 0x35d660: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x35D664u;
        goto label_35d664;
    }
    ctx->pc = 0x35D65Cu;
    SET_GPR_U32(ctx, 31, 0x35D664u);
    ctx->pc = 0x35D660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D65Cu;
            // 0x35d660: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D664u; }
        if (ctx->pc != 0x35D664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D664u; }
        if (ctx->pc != 0x35D664u) { return; }
    }
    ctx->pc = 0x35D664u;
label_35d664:
    // 0x35d664: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x35d664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_35d668:
    // 0x35d668: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x35d668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_35d66c:
    // 0x35d66c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x35d66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_35d670:
    // 0x35d670: 0x26250074  addiu       $a1, $s1, 0x74
    ctx->pc = 0x35d670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_35d674:
    // 0x35d674: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35d674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35d678:
    // 0x35d678: 0x0  nop
    ctx->pc = 0x35d678u;
    // NOP
label_35d67c:
    // 0x35d67c: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x35d67cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_35d680:
    // 0x35d680: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x35d680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35d684:
    // 0x35d684: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35d684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35d688:
    // 0x35d688: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x35d688u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_35d68c:
    // 0x35d68c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x35d68cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_35d690:
    // 0x35d690: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x35d690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_35d694:
    // 0x35d694: 0x4603001c  madd.s      $f0, $f0, $f3
    ctx->pc = 0x35d694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_35d698:
    // 0x35d698: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x35d698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_35d69c:
    // 0x35d69c: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x35d69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_35d6a0:
    // 0x35d6a0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x35d6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_35d6a4:
    // 0x35d6a4: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x35d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
label_35d6a8:
    // 0x35d6a8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x35d6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35d6ac:
    // 0x35d6ac: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x35d6acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35d6b0:
    // 0x35d6b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_35d6b4:
    if (ctx->pc == 0x35D6B4u) {
        ctx->pc = 0x35D6B4u;
            // 0x35d6b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35D6B8u;
        goto label_35d6b8;
    }
    ctx->pc = 0x35D6B0u;
    {
        const bool branch_taken_0x35d6b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35D6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D6B0u;
            // 0x35d6b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d6b0) {
            ctx->pc = 0x35D6BCu;
            goto label_35d6bc;
        }
    }
    ctx->pc = 0x35D6B8u;
label_35d6b8:
    // 0x35d6b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x35d6b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35d6bc:
    // 0x35d6bc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35d6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_35d6c0:
    // 0x35d6c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x35d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_35d6c4:
    // 0x35d6c4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x35d6c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_35d6c8:
    // 0x35d6c8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x35d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_35d6cc:
    // 0x35d6cc: 0x0  nop
    ctx->pc = 0x35d6ccu;
    // NOP
label_35d6d0:
    // 0x35d6d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x35d6d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_35d6d4:
    // 0x35d6d4: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x35d6d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_35d6d8:
    // 0x35d6d8: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
label_35d6dc:
    if (ctx->pc == 0x35D6DCu) {
        ctx->pc = 0x35D6DCu;
            // 0x35d6dc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x35D6E0u;
        goto label_35d6e0;
    }
    ctx->pc = 0x35D6D8u;
    {
        const bool branch_taken_0x35d6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D6D8u;
            // 0x35d6dc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d6d8) {
            ctx->pc = 0x35D5F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35d5f8;
        }
    }
    ctx->pc = 0x35D6E0u;
label_35d6e0:
    // 0x35d6e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x35d6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_35d6e4:
    // 0x35d6e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35d6e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35d6e8:
    // 0x35d6e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35d6e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35d6ec:
    // 0x35d6ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35d6ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35d6f0:
    // 0x35d6f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35d6f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35d6f4:
    // 0x35d6f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35d6f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35d6f8:
    // 0x35d6f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35d6f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35d6fc:
    // 0x35d6fc: 0x3e00008  jr          $ra
label_35d700:
    if (ctx->pc == 0x35D700u) {
        ctx->pc = 0x35D700u;
            // 0x35d700: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x35D704u;
        goto label_35d704;
    }
    ctx->pc = 0x35D6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D6FCu;
            // 0x35d700: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35D704u;
label_35d704:
    // 0x35d704: 0x0  nop
    ctx->pc = 0x35d704u;
    // NOP
label_35d708:
    // 0x35d708: 0x0  nop
    ctx->pc = 0x35d708u;
    // NOP
label_35d70c:
    // 0x35d70c: 0x0  nop
    ctx->pc = 0x35d70cu;
    // NOP
}
