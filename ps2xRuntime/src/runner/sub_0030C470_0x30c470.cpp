#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030C470
// Address: 0x30c470 - 0x30c790
void sub_0030C470_0x30c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C470_0x30c470");
#endif

    switch (ctx->pc) {
        case 0x30c470u: goto label_30c470;
        case 0x30c474u: goto label_30c474;
        case 0x30c478u: goto label_30c478;
        case 0x30c47cu: goto label_30c47c;
        case 0x30c480u: goto label_30c480;
        case 0x30c484u: goto label_30c484;
        case 0x30c488u: goto label_30c488;
        case 0x30c48cu: goto label_30c48c;
        case 0x30c490u: goto label_30c490;
        case 0x30c494u: goto label_30c494;
        case 0x30c498u: goto label_30c498;
        case 0x30c49cu: goto label_30c49c;
        case 0x30c4a0u: goto label_30c4a0;
        case 0x30c4a4u: goto label_30c4a4;
        case 0x30c4a8u: goto label_30c4a8;
        case 0x30c4acu: goto label_30c4ac;
        case 0x30c4b0u: goto label_30c4b0;
        case 0x30c4b4u: goto label_30c4b4;
        case 0x30c4b8u: goto label_30c4b8;
        case 0x30c4bcu: goto label_30c4bc;
        case 0x30c4c0u: goto label_30c4c0;
        case 0x30c4c4u: goto label_30c4c4;
        case 0x30c4c8u: goto label_30c4c8;
        case 0x30c4ccu: goto label_30c4cc;
        case 0x30c4d0u: goto label_30c4d0;
        case 0x30c4d4u: goto label_30c4d4;
        case 0x30c4d8u: goto label_30c4d8;
        case 0x30c4dcu: goto label_30c4dc;
        case 0x30c4e0u: goto label_30c4e0;
        case 0x30c4e4u: goto label_30c4e4;
        case 0x30c4e8u: goto label_30c4e8;
        case 0x30c4ecu: goto label_30c4ec;
        case 0x30c4f0u: goto label_30c4f0;
        case 0x30c4f4u: goto label_30c4f4;
        case 0x30c4f8u: goto label_30c4f8;
        case 0x30c4fcu: goto label_30c4fc;
        case 0x30c500u: goto label_30c500;
        case 0x30c504u: goto label_30c504;
        case 0x30c508u: goto label_30c508;
        case 0x30c50cu: goto label_30c50c;
        case 0x30c510u: goto label_30c510;
        case 0x30c514u: goto label_30c514;
        case 0x30c518u: goto label_30c518;
        case 0x30c51cu: goto label_30c51c;
        case 0x30c520u: goto label_30c520;
        case 0x30c524u: goto label_30c524;
        case 0x30c528u: goto label_30c528;
        case 0x30c52cu: goto label_30c52c;
        case 0x30c530u: goto label_30c530;
        case 0x30c534u: goto label_30c534;
        case 0x30c538u: goto label_30c538;
        case 0x30c53cu: goto label_30c53c;
        case 0x30c540u: goto label_30c540;
        case 0x30c544u: goto label_30c544;
        case 0x30c548u: goto label_30c548;
        case 0x30c54cu: goto label_30c54c;
        case 0x30c550u: goto label_30c550;
        case 0x30c554u: goto label_30c554;
        case 0x30c558u: goto label_30c558;
        case 0x30c55cu: goto label_30c55c;
        case 0x30c560u: goto label_30c560;
        case 0x30c564u: goto label_30c564;
        case 0x30c568u: goto label_30c568;
        case 0x30c56cu: goto label_30c56c;
        case 0x30c570u: goto label_30c570;
        case 0x30c574u: goto label_30c574;
        case 0x30c578u: goto label_30c578;
        case 0x30c57cu: goto label_30c57c;
        case 0x30c580u: goto label_30c580;
        case 0x30c584u: goto label_30c584;
        case 0x30c588u: goto label_30c588;
        case 0x30c58cu: goto label_30c58c;
        case 0x30c590u: goto label_30c590;
        case 0x30c594u: goto label_30c594;
        case 0x30c598u: goto label_30c598;
        case 0x30c59cu: goto label_30c59c;
        case 0x30c5a0u: goto label_30c5a0;
        case 0x30c5a4u: goto label_30c5a4;
        case 0x30c5a8u: goto label_30c5a8;
        case 0x30c5acu: goto label_30c5ac;
        case 0x30c5b0u: goto label_30c5b0;
        case 0x30c5b4u: goto label_30c5b4;
        case 0x30c5b8u: goto label_30c5b8;
        case 0x30c5bcu: goto label_30c5bc;
        case 0x30c5c0u: goto label_30c5c0;
        case 0x30c5c4u: goto label_30c5c4;
        case 0x30c5c8u: goto label_30c5c8;
        case 0x30c5ccu: goto label_30c5cc;
        case 0x30c5d0u: goto label_30c5d0;
        case 0x30c5d4u: goto label_30c5d4;
        case 0x30c5d8u: goto label_30c5d8;
        case 0x30c5dcu: goto label_30c5dc;
        case 0x30c5e0u: goto label_30c5e0;
        case 0x30c5e4u: goto label_30c5e4;
        case 0x30c5e8u: goto label_30c5e8;
        case 0x30c5ecu: goto label_30c5ec;
        case 0x30c5f0u: goto label_30c5f0;
        case 0x30c5f4u: goto label_30c5f4;
        case 0x30c5f8u: goto label_30c5f8;
        case 0x30c5fcu: goto label_30c5fc;
        case 0x30c600u: goto label_30c600;
        case 0x30c604u: goto label_30c604;
        case 0x30c608u: goto label_30c608;
        case 0x30c60cu: goto label_30c60c;
        case 0x30c610u: goto label_30c610;
        case 0x30c614u: goto label_30c614;
        case 0x30c618u: goto label_30c618;
        case 0x30c61cu: goto label_30c61c;
        case 0x30c620u: goto label_30c620;
        case 0x30c624u: goto label_30c624;
        case 0x30c628u: goto label_30c628;
        case 0x30c62cu: goto label_30c62c;
        case 0x30c630u: goto label_30c630;
        case 0x30c634u: goto label_30c634;
        case 0x30c638u: goto label_30c638;
        case 0x30c63cu: goto label_30c63c;
        case 0x30c640u: goto label_30c640;
        case 0x30c644u: goto label_30c644;
        case 0x30c648u: goto label_30c648;
        case 0x30c64cu: goto label_30c64c;
        case 0x30c650u: goto label_30c650;
        case 0x30c654u: goto label_30c654;
        case 0x30c658u: goto label_30c658;
        case 0x30c65cu: goto label_30c65c;
        case 0x30c660u: goto label_30c660;
        case 0x30c664u: goto label_30c664;
        case 0x30c668u: goto label_30c668;
        case 0x30c66cu: goto label_30c66c;
        case 0x30c670u: goto label_30c670;
        case 0x30c674u: goto label_30c674;
        case 0x30c678u: goto label_30c678;
        case 0x30c67cu: goto label_30c67c;
        case 0x30c680u: goto label_30c680;
        case 0x30c684u: goto label_30c684;
        case 0x30c688u: goto label_30c688;
        case 0x30c68cu: goto label_30c68c;
        case 0x30c690u: goto label_30c690;
        case 0x30c694u: goto label_30c694;
        case 0x30c698u: goto label_30c698;
        case 0x30c69cu: goto label_30c69c;
        case 0x30c6a0u: goto label_30c6a0;
        case 0x30c6a4u: goto label_30c6a4;
        case 0x30c6a8u: goto label_30c6a8;
        case 0x30c6acu: goto label_30c6ac;
        case 0x30c6b0u: goto label_30c6b0;
        case 0x30c6b4u: goto label_30c6b4;
        case 0x30c6b8u: goto label_30c6b8;
        case 0x30c6bcu: goto label_30c6bc;
        case 0x30c6c0u: goto label_30c6c0;
        case 0x30c6c4u: goto label_30c6c4;
        case 0x30c6c8u: goto label_30c6c8;
        case 0x30c6ccu: goto label_30c6cc;
        case 0x30c6d0u: goto label_30c6d0;
        case 0x30c6d4u: goto label_30c6d4;
        case 0x30c6d8u: goto label_30c6d8;
        case 0x30c6dcu: goto label_30c6dc;
        case 0x30c6e0u: goto label_30c6e0;
        case 0x30c6e4u: goto label_30c6e4;
        case 0x30c6e8u: goto label_30c6e8;
        case 0x30c6ecu: goto label_30c6ec;
        case 0x30c6f0u: goto label_30c6f0;
        case 0x30c6f4u: goto label_30c6f4;
        case 0x30c6f8u: goto label_30c6f8;
        case 0x30c6fcu: goto label_30c6fc;
        case 0x30c700u: goto label_30c700;
        case 0x30c704u: goto label_30c704;
        case 0x30c708u: goto label_30c708;
        case 0x30c70cu: goto label_30c70c;
        case 0x30c710u: goto label_30c710;
        case 0x30c714u: goto label_30c714;
        case 0x30c718u: goto label_30c718;
        case 0x30c71cu: goto label_30c71c;
        case 0x30c720u: goto label_30c720;
        case 0x30c724u: goto label_30c724;
        case 0x30c728u: goto label_30c728;
        case 0x30c72cu: goto label_30c72c;
        case 0x30c730u: goto label_30c730;
        case 0x30c734u: goto label_30c734;
        case 0x30c738u: goto label_30c738;
        case 0x30c73cu: goto label_30c73c;
        case 0x30c740u: goto label_30c740;
        case 0x30c744u: goto label_30c744;
        case 0x30c748u: goto label_30c748;
        case 0x30c74cu: goto label_30c74c;
        case 0x30c750u: goto label_30c750;
        case 0x30c754u: goto label_30c754;
        case 0x30c758u: goto label_30c758;
        case 0x30c75cu: goto label_30c75c;
        case 0x30c760u: goto label_30c760;
        case 0x30c764u: goto label_30c764;
        case 0x30c768u: goto label_30c768;
        case 0x30c76cu: goto label_30c76c;
        case 0x30c770u: goto label_30c770;
        case 0x30c774u: goto label_30c774;
        case 0x30c778u: goto label_30c778;
        case 0x30c77cu: goto label_30c77c;
        case 0x30c780u: goto label_30c780;
        case 0x30c784u: goto label_30c784;
        case 0x30c788u: goto label_30c788;
        case 0x30c78cu: goto label_30c78c;
        default: break;
    }

    ctx->pc = 0x30c470u;

label_30c470:
    // 0x30c470: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x30c470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30c474:
    // 0x30c474: 0x24423da8  addiu       $v0, $v0, 0x3DA8
    ctx->pc = 0x30c474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15784));
label_30c478:
    // 0x30c478: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30c478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_30c47c:
    // 0x30c47c: 0x3e00008  jr          $ra
label_30c480:
    if (ctx->pc == 0x30C480u) {
        ctx->pc = 0x30C480u;
            // 0x30c480: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x30C484u;
        goto label_30c484;
    }
    ctx->pc = 0x30C47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C47Cu;
            // 0x30c480: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C484u;
label_30c484:
    // 0x30c484: 0x0  nop
    ctx->pc = 0x30c484u;
    // NOP
label_30c488:
    // 0x30c488: 0x0  nop
    ctx->pc = 0x30c488u;
    // NOP
label_30c48c:
    // 0x30c48c: 0x0  nop
    ctx->pc = 0x30c48cu;
    // NOP
label_30c490:
    // 0x30c490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30c490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30c494:
    // 0x30c494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30c494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_30c498:
    // 0x30c498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30c49c:
    // 0x30c49c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30c4a0:
    // 0x30c4a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30c4a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30c4a4:
    // 0x30c4a4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_30c4a8:
    if (ctx->pc == 0x30C4A8u) {
        ctx->pc = 0x30C4A8u;
            // 0x30c4a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C4ACu;
        goto label_30c4ac;
    }
    ctx->pc = 0x30C4A4u;
    {
        const bool branch_taken_0x30c4a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C4A4u;
            // 0x30c4a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4a4) {
            ctx->pc = 0x30C510u;
            goto label_30c510;
        }
    }
    ctx->pc = 0x30C4ACu;
label_30c4ac:
    // 0x30c4ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30c4b0:
    // 0x30c4b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30c4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c4b4:
    // 0x30c4b4: 0x24424160  addiu       $v0, $v0, 0x4160
    ctx->pc = 0x30c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16736));
label_30c4b8:
    // 0x30c4b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x30c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_30c4bc:
    // 0x30c4bc: 0x8e2600b8  lw          $a2, 0xB8($s1)
    ctx->pc = 0x30c4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_30c4c0:
    // 0x30c4c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x30c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30c4c4:
    // 0x30c4c4: 0x90433db0  lbu         $v1, 0x3DB0($v0)
    ctx->pc = 0x30c4c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15792)));
label_30c4c8:
    // 0x30c4c8: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x30c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_30c4cc:
    // 0x30c4cc: 0xa02827  not         $a1, $a1
    ctx->pc = 0x30c4ccu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_30c4d0:
    // 0x30c4d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x30c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30c4d4:
    // 0x30c4d4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x30c4d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_30c4d8:
    // 0x30c4d8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x30c4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_30c4dc:
    // 0x30c4dc: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_30c4e0:
    if (ctx->pc == 0x30C4E0u) {
        ctx->pc = 0x30C4E0u;
            // 0x30c4e0: 0xa0433db0  sb          $v1, 0x3DB0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 15792), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x30C4E4u;
        goto label_30c4e4;
    }
    ctx->pc = 0x30C4DCu;
    {
        const bool branch_taken_0x30c4dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C4DCu;
            // 0x30c4e0: 0xa0433db0  sb          $v1, 0x3DB0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 15792), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4dc) {
            ctx->pc = 0x30C4F8u;
            goto label_30c4f8;
        }
    }
    ctx->pc = 0x30C4E4u;
label_30c4e4:
    // 0x30c4e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30c4e8:
    // 0x30c4e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30c4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c4ec:
    // 0x30c4ec: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x30c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
label_30c4f0:
    // 0x30c4f0: 0xc075bf8  jal         func_1D6FE0
label_30c4f4:
    if (ctx->pc == 0x30C4F4u) {
        ctx->pc = 0x30C4F4u;
            // 0x30c4f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30C4F8u;
        goto label_30c4f8;
    }
    ctx->pc = 0x30C4F0u;
    SET_GPR_U32(ctx, 31, 0x30C4F8u);
    ctx->pc = 0x30C4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C4F0u;
            // 0x30c4f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C4F8u; }
        if (ctx->pc != 0x30C4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C4F8u; }
        if (ctx->pc != 0x30C4F8u) { return; }
    }
    ctx->pc = 0x30C4F8u;
label_30c4f8:
    // 0x30c4f8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x30c4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_30c4fc:
    // 0x30c4fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30c4fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_30c500:
    // 0x30c500: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_30c504:
    if (ctx->pc == 0x30C504u) {
        ctx->pc = 0x30C504u;
            // 0x30c504: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C508u;
        goto label_30c508;
    }
    ctx->pc = 0x30C500u;
    {
        const bool branch_taken_0x30c500 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30c500) {
            ctx->pc = 0x30C504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C500u;
            // 0x30c504: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C514u;
            goto label_30c514;
        }
    }
    ctx->pc = 0x30C508u;
label_30c508:
    // 0x30c508: 0xc0400a8  jal         func_1002A0
label_30c50c:
    if (ctx->pc == 0x30C50Cu) {
        ctx->pc = 0x30C50Cu;
            // 0x30c50c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C510u;
        goto label_30c510;
    }
    ctx->pc = 0x30C508u;
    SET_GPR_U32(ctx, 31, 0x30C510u);
    ctx->pc = 0x30C50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C508u;
            // 0x30c50c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C510u; }
        if (ctx->pc != 0x30C510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C510u; }
        if (ctx->pc != 0x30C510u) { return; }
    }
    ctx->pc = 0x30C510u;
label_30c510:
    // 0x30c510: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30c510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30c514:
    // 0x30c514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30c514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30c518:
    // 0x30c518: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30c51c:
    // 0x30c51c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30c520:
    // 0x30c520: 0x3e00008  jr          $ra
label_30c524:
    if (ctx->pc == 0x30C524u) {
        ctx->pc = 0x30C524u;
            // 0x30c524: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x30C528u;
        goto label_30c528;
    }
    ctx->pc = 0x30C520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C520u;
            // 0x30c524: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C528u;
label_30c528:
    // 0x30c528: 0x0  nop
    ctx->pc = 0x30c528u;
    // NOP
label_30c52c:
    // 0x30c52c: 0x0  nop
    ctx->pc = 0x30c52cu;
    // NOP
label_30c530:
    // 0x30c530: 0x80b93ac  j           func_2E4EB0
label_30c534:
    if (ctx->pc == 0x30C534u) {
        ctx->pc = 0x30C538u;
        goto label_30c538;
    }
    ctx->pc = 0x30C530u;
    ctx->pc = 0x2E4EB0u;
    if (runtime->hasFunction(0x2E4EB0u)) {
        auto targetFn = runtime->lookupFunction(0x2E4EB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002E4EB0_0x2e4eb0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x30C538u;
label_30c538:
    // 0x30c538: 0x0  nop
    ctx->pc = 0x30c538u;
    // NOP
label_30c53c:
    // 0x30c53c: 0x0  nop
    ctx->pc = 0x30c53cu;
    // NOP
label_30c540:
    // 0x30c540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30c540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30c544:
    // 0x30c544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30c544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_30c548:
    // 0x30c548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30c54c:
    // 0x30c54c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30c550:
    // 0x30c550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30c550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30c554:
    // 0x30c554: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_30c558:
    if (ctx->pc == 0x30C558u) {
        ctx->pc = 0x30C558u;
            // 0x30c558: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C55Cu;
        goto label_30c55c;
    }
    ctx->pc = 0x30C554u;
    {
        const bool branch_taken_0x30c554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C554u;
            // 0x30c558: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c554) {
            ctx->pc = 0x30C598u;
            goto label_30c598;
        }
    }
    ctx->pc = 0x30C55Cu;
label_30c55c:
    // 0x30c55c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30c560:
    // 0x30c560: 0x24424190  addiu       $v0, $v0, 0x4190
    ctx->pc = 0x30c560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16784));
label_30c564:
    // 0x30c564: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_30c568:
    if (ctx->pc == 0x30C568u) {
        ctx->pc = 0x30C568u;
            // 0x30c568: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30C56Cu;
        goto label_30c56c;
    }
    ctx->pc = 0x30C564u;
    {
        const bool branch_taken_0x30c564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C564u;
            // 0x30c568: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c564) {
            ctx->pc = 0x30C580u;
            goto label_30c580;
        }
    }
    ctx->pc = 0x30C56Cu;
label_30c56c:
    // 0x30c56c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30c570:
    // 0x30c570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30c570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c574:
    // 0x30c574: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x30c574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_30c578:
    // 0x30c578: 0xc057a68  jal         func_15E9A0
label_30c57c:
    if (ctx->pc == 0x30C57Cu) {
        ctx->pc = 0x30C57Cu;
            // 0x30c57c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30C580u;
        goto label_30c580;
    }
    ctx->pc = 0x30C578u;
    SET_GPR_U32(ctx, 31, 0x30C580u);
    ctx->pc = 0x30C57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C578u;
            // 0x30c57c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C580u; }
        if (ctx->pc != 0x30C580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C580u; }
        if (ctx->pc != 0x30C580u) { return; }
    }
    ctx->pc = 0x30C580u;
label_30c580:
    // 0x30c580: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x30c580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_30c584:
    // 0x30c584: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30c584u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_30c588:
    // 0x30c588: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_30c58c:
    if (ctx->pc == 0x30C58Cu) {
        ctx->pc = 0x30C58Cu;
            // 0x30c58c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C590u;
        goto label_30c590;
    }
    ctx->pc = 0x30C588u;
    {
        const bool branch_taken_0x30c588 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30c588) {
            ctx->pc = 0x30C58Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C588u;
            // 0x30c58c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C59Cu;
            goto label_30c59c;
        }
    }
    ctx->pc = 0x30C590u;
label_30c590:
    // 0x30c590: 0xc0400a8  jal         func_1002A0
label_30c594:
    if (ctx->pc == 0x30C594u) {
        ctx->pc = 0x30C594u;
            // 0x30c594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C598u;
        goto label_30c598;
    }
    ctx->pc = 0x30C590u;
    SET_GPR_U32(ctx, 31, 0x30C598u);
    ctx->pc = 0x30C594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C590u;
            // 0x30c594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C598u; }
        if (ctx->pc != 0x30C598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C598u; }
        if (ctx->pc != 0x30C598u) { return; }
    }
    ctx->pc = 0x30C598u;
label_30c598:
    // 0x30c598: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30c598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30c59c:
    // 0x30c59c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30c59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30c5a0:
    // 0x30c5a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c5a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30c5a4:
    // 0x30c5a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30c5a8:
    // 0x30c5a8: 0x3e00008  jr          $ra
label_30c5ac:
    if (ctx->pc == 0x30C5ACu) {
        ctx->pc = 0x30C5ACu;
            // 0x30c5ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x30C5B0u;
        goto label_30c5b0;
    }
    ctx->pc = 0x30C5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C5A8u;
            // 0x30c5ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C5B0u;
label_30c5b0:
    // 0x30c5b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30c5b4:
    // 0x30c5b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30c5b8:
    // 0x30c5b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30c5bc:
    // 0x30c5bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30c5c0:
    // 0x30c5c0: 0x8c50e3e8  lw          $s0, -0x1C18($v0)
    ctx->pc = 0x30c5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_30c5c4:
    // 0x30c5c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x30c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_30c5c8:
    // 0x30c5c8: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x30c5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_30c5cc:
    // 0x30c5cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x30c5ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30c5d0:
    // 0x30c5d0: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x30c5d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_30c5d4:
    // 0x30c5d4: 0x320f809  jalr        $t9
label_30c5d8:
    if (ctx->pc == 0x30C5D8u) {
        ctx->pc = 0x30C5DCu;
        goto label_30c5dc;
    }
    ctx->pc = 0x30C5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30C5DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x30C5DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30C5DCu; }
            if (ctx->pc != 0x30C5DCu) { return; }
        }
        }
    }
    ctx->pc = 0x30C5DCu;
label_30c5dc:
    // 0x30c5dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x30c5dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30c5e0:
    // 0x30c5e0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x30c5e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_30c5e4:
    // 0x30c5e4: 0x320f809  jalr        $t9
label_30c5e8:
    if (ctx->pc == 0x30C5E8u) {
        ctx->pc = 0x30C5E8u;
            // 0x30c5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C5ECu;
        goto label_30c5ec;
    }
    ctx->pc = 0x30C5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30C5ECu);
        ctx->pc = 0x30C5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C5E4u;
            // 0x30c5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30C5ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30C5ECu; }
            if (ctx->pc != 0x30C5ECu) { return; }
        }
        }
    }
    ctx->pc = 0x30C5ECu;
label_30c5ec:
    // 0x30c5ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30c5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30c5f0:
    // 0x30c5f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30c5f4:
    // 0x30c5f4: 0x3e00008  jr          $ra
label_30c5f8:
    if (ctx->pc == 0x30C5F8u) {
        ctx->pc = 0x30C5F8u;
            // 0x30c5f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x30C5FCu;
        goto label_30c5fc;
    }
    ctx->pc = 0x30C5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C5F4u;
            // 0x30c5f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C5FCu;
label_30c5fc:
    // 0x30c5fc: 0x0  nop
    ctx->pc = 0x30c5fcu;
    // NOP
label_30c600:
    // 0x30c600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30c604:
    // 0x30c604: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30c604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30c608:
    // 0x30c608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30c60c:
    // 0x30c60c: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x30c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_30c610:
    // 0x30c610: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x30c610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30c614:
    // 0x30c614: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x30c614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_30c618:
    // 0x30c618: 0x320f809  jalr        $t9
label_30c61c:
    if (ctx->pc == 0x30C61Cu) {
        ctx->pc = 0x30C620u;
        goto label_30c620;
    }
    ctx->pc = 0x30C618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30C620u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x30C620u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30C620u; }
            if (ctx->pc != 0x30C620u) { return; }
        }
        }
    }
    ctx->pc = 0x30C620u;
label_30c620:
    // 0x30c620: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x30c620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_30c624:
    // 0x30c624: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x30c624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_30c628:
    // 0x30c628: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x30c628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30c62c:
    // 0x30c62c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x30c62cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_30c630:
    // 0x30c630: 0x320f809  jalr        $t9
label_30c634:
    if (ctx->pc == 0x30C634u) {
        ctx->pc = 0x30C634u;
            // 0x30c634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C638u;
        goto label_30c638;
    }
    ctx->pc = 0x30C630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30C638u);
        ctx->pc = 0x30C634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C630u;
            // 0x30c634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30C638u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30C638u; }
            if (ctx->pc != 0x30C638u) { return; }
        }
        }
    }
    ctx->pc = 0x30C638u;
label_30c638:
    // 0x30c638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30c63c:
    // 0x30c63c: 0x3e00008  jr          $ra
label_30c640:
    if (ctx->pc == 0x30C640u) {
        ctx->pc = 0x30C640u;
            // 0x30c640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x30C644u;
        goto label_30c644;
    }
    ctx->pc = 0x30C63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C63Cu;
            // 0x30c640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C644u;
label_30c644:
    // 0x30c644: 0x0  nop
    ctx->pc = 0x30c644u;
    // NOP
label_30c648:
    // 0x30c648: 0x0  nop
    ctx->pc = 0x30c648u;
    // NOP
label_30c64c:
    // 0x30c64c: 0x0  nop
    ctx->pc = 0x30c64cu;
    // NOP
label_30c650:
    // 0x30c650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30c654:
    // 0x30c654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30c654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c658:
    // 0x30c658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30c658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30c65c:
    // 0x30c65c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30c660:
    // 0x30c660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30c660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30c664:
    // 0x30c664: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x30c664u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_30c668:
    // 0x30c668: 0x50830043  beql        $a0, $v1, . + 4 + (0x43 << 2)
label_30c66c:
    if (ctx->pc == 0x30C66Cu) {
        ctx->pc = 0x30C66Cu;
            // 0x30c66c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x30C670u;
        goto label_30c670;
    }
    ctx->pc = 0x30C668u;
    {
        const bool branch_taken_0x30c668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30c668) {
            ctx->pc = 0x30C66Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C668u;
            // 0x30c66c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C778u;
            goto label_30c778;
        }
    }
    ctx->pc = 0x30C670u;
label_30c670:
    // 0x30c670: 0x10800040  beqz        $a0, . + 4 + (0x40 << 2)
label_30c674:
    if (ctx->pc == 0x30C674u) {
        ctx->pc = 0x30C678u;
        goto label_30c678;
    }
    ctx->pc = 0x30C670u;
    {
        const bool branch_taken_0x30c670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c670) {
            ctx->pc = 0x30C774u;
            goto label_30c774;
        }
    }
    ctx->pc = 0x30C678u;
label_30c678:
    // 0x30c678: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30c678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30c67c:
    // 0x30c67c: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_30c680:
    if (ctx->pc == 0x30C680u) {
        ctx->pc = 0x30C680u;
            // 0x30c680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C684u;
        goto label_30c684;
    }
    ctx->pc = 0x30C67Cu;
    {
        const bool branch_taken_0x30c67c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30c67c) {
            ctx->pc = 0x30C680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C67Cu;
            // 0x30c680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C69Cu;
            goto label_30c69c;
        }
    }
    ctx->pc = 0x30C684u;
label_30c684:
    // 0x30c684: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30c684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30c688:
    // 0x30c688: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_30c68c:
    if (ctx->pc == 0x30C68Cu) {
        ctx->pc = 0x30C690u;
        goto label_30c690;
    }
    ctx->pc = 0x30C688u;
    {
        const bool branch_taken_0x30c688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30c688) {
            ctx->pc = 0x30C698u;
            goto label_30c698;
        }
    }
    ctx->pc = 0x30C690u;
label_30c690:
    // 0x30c690: 0x10000038  b           . + 4 + (0x38 << 2)
label_30c694:
    if (ctx->pc == 0x30C694u) {
        ctx->pc = 0x30C698u;
        goto label_30c698;
    }
    ctx->pc = 0x30C690u;
    {
        const bool branch_taken_0x30c690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c690) {
            ctx->pc = 0x30C774u;
            goto label_30c774;
        }
    }
    ctx->pc = 0x30C698u;
label_30c698:
    // 0x30c698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30c698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30c69c:
    // 0x30c69c: 0xc0c3890  jal         func_30E240
label_30c6a0:
    if (ctx->pc == 0x30C6A0u) {
        ctx->pc = 0x30C6A4u;
        goto label_30c6a4;
    }
    ctx->pc = 0x30C69Cu;
    SET_GPR_U32(ctx, 31, 0x30C6A4u);
    ctx->pc = 0x30E240u;
    if (runtime->hasFunction(0x30E240u)) {
        auto targetFn = runtime->lookupFunction(0x30E240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C6A4u; }
        if (ctx->pc != 0x30C6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030E240_0x30e240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C6A4u; }
        if (ctx->pc != 0x30C6A4u) { return; }
    }
    ctx->pc = 0x30C6A4u;
label_30c6a4:
    // 0x30c6a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x30c6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_30c6a8:
    // 0x30c6a8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x30c6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_30c6ac:
    // 0x30c6ac: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_30c6b0:
    if (ctx->pc == 0x30C6B0u) {
        ctx->pc = 0x30C6B4u;
        goto label_30c6b4;
    }
    ctx->pc = 0x30C6ACu;
    {
        const bool branch_taken_0x30c6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c6ac) {
            ctx->pc = 0x30C774u;
            goto label_30c774;
        }
    }
    ctx->pc = 0x30C6B4u;
label_30c6b4:
    // 0x30c6b4: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x30c6b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_30c6b8:
    // 0x30c6b8: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x30c6b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_30c6bc:
    // 0x30c6bc: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
label_30c6c0:
    if (ctx->pc == 0x30C6C0u) {
        ctx->pc = 0x30C6C4u;
        goto label_30c6c4;
    }
    ctx->pc = 0x30C6BCu;
    {
        const bool branch_taken_0x30c6bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c6bc) {
            ctx->pc = 0x30C774u;
            goto label_30c774;
        }
    }
    ctx->pc = 0x30C6C4u;
label_30c6c4:
    // 0x30c6c4: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x30c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_30c6c8:
    // 0x30c6c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30c6cc:
    // 0x30c6cc: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30c6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
label_30c6d0:
    // 0x30c6d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30c6d4:
    // 0x30c6d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30c6d8:
    // 0x30c6d8: 0x600008  jr          $v1
label_30c6dc:
    if (ctx->pc == 0x30C6DCu) {
        ctx->pc = 0x30C6E0u;
        goto label_30c6e0;
    }
    ctx->pc = 0x30C6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30C6E0u: goto label_30c6e0;
            case 0x30C714u: goto label_30c714;
            case 0x30C73Cu: goto label_30c73c;
            case 0x30C74Cu: goto label_30c74c;
            case 0x30C75Cu: goto label_30c75c;
            case 0x30C76Cu: goto label_30c76c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x30C6E0u;
label_30c6e0:
    // 0x30c6e0: 0xc0c3890  jal         func_30E240
label_30c6e4:
    if (ctx->pc == 0x30C6E4u) {
        ctx->pc = 0x30C6E4u;
            // 0x30c6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C6E8u;
        goto label_30c6e8;
    }
    ctx->pc = 0x30C6E0u;
    SET_GPR_U32(ctx, 31, 0x30C6E8u);
    ctx->pc = 0x30C6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C6E0u;
            // 0x30c6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E240u;
    if (runtime->hasFunction(0x30E240u)) {
        auto targetFn = runtime->lookupFunction(0x30E240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C6E8u; }
        if (ctx->pc != 0x30C6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030E240_0x30e240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C6E8u; }
        if (ctx->pc != 0x30C6E8u) { return; }
    }
    ctx->pc = 0x30C6E8u;
label_30c6e8:
    // 0x30c6e8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x30c6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_30c6ec:
    // 0x30c6ec: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x30c6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_30c6f0:
    // 0x30c6f0: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_30c6f4:
    if (ctx->pc == 0x30C6F4u) {
        ctx->pc = 0x30C6F8u;
        goto label_30c6f8;
    }
    ctx->pc = 0x30C6F0u;
    {
        const bool branch_taken_0x30c6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c6f0) {
            ctx->pc = 0x30C774u;
            goto label_30c774;
        }
    }
    ctx->pc = 0x30C6F8u;
label_30c6f8:
    // 0x30c6f8: 0xc0c35b4  jal         func_30D6D0
label_30c6fc:
    if (ctx->pc == 0x30C6FCu) {
        ctx->pc = 0x30C6FCu;
            // 0x30c6fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C700u;
        goto label_30c700;
    }
    ctx->pc = 0x30C6F8u;
    SET_GPR_U32(ctx, 31, 0x30C700u);
    ctx->pc = 0x30C6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C6F8u;
            // 0x30c6fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30D6D0u;
    if (runtime->hasFunction(0x30D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x30D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C700u; }
        if (ctx->pc != 0x30C700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030D6D0_0x30d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C700u; }
        if (ctx->pc != 0x30C700u) { return; }
    }
    ctx->pc = 0x30C700u;
label_30c700:
    // 0x30c700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30c700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30c704:
    // 0x30c704: 0xc0772c8  jal         func_1DCB20
label_30c708:
    if (ctx->pc == 0x30C708u) {
        ctx->pc = 0x30C708u;
            // 0x30c708: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x30C70Cu;
        goto label_30c70c;
    }
    ctx->pc = 0x30C704u;
    SET_GPR_U32(ctx, 31, 0x30C70Cu);
    ctx->pc = 0x30C708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C704u;
            // 0x30c708: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB20u;
    if (runtime->hasFunction(0x1DCB20u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C70Cu; }
        if (ctx->pc != 0x30C70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB20_0x1dcb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C70Cu; }
        if (ctx->pc != 0x30C70Cu) { return; }
    }
    ctx->pc = 0x30C70Cu;
label_30c70c:
    // 0x30c70c: 0x10000019  b           . + 4 + (0x19 << 2)
label_30c710:
    if (ctx->pc == 0x30C710u) {
        ctx->pc = 0x30C714u;
        goto label_30c714;
    }
    ctx->pc = 0x30C70Cu;
    {
        const bool branch_taken_0x30c70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c70c) {
            ctx->pc = 0x30C774u;
            goto label_30c774;
        }
    }
    ctx->pc = 0x30C714u;
label_30c714:
    // 0x30c714: 0xc0c3890  jal         func_30E240
label_30c718:
    if (ctx->pc == 0x30C718u) {
        ctx->pc = 0x30C718u;
            // 0x30c718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C71Cu;
        goto label_30c71c;
    }
    ctx->pc = 0x30C714u;
    SET_GPR_U32(ctx, 31, 0x30C71Cu);
    ctx->pc = 0x30C718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C714u;
            // 0x30c718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E240u;
    if (runtime->hasFunction(0x30E240u)) {
        auto targetFn = runtime->lookupFunction(0x30E240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C71Cu; }
        if (ctx->pc != 0x30C71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030E240_0x30e240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C71Cu; }
        if (ctx->pc != 0x30C71Cu) { return; }
    }
    ctx->pc = 0x30C71Cu;
label_30c71c:
    // 0x30c71c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x30c71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_30c720:
    // 0x30c720: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x30c720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_30c724:
    // 0x30c724: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_30c728:
    if (ctx->pc == 0x30C728u) {
        ctx->pc = 0x30C72Cu;
        goto label_30c72c;
    }
    ctx->pc = 0x30C724u;
    {
        const bool branch_taken_0x30c724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c724) {
            ctx->pc = 0x30C774u;
            goto label_30c774;
        }
    }
    ctx->pc = 0x30C72Cu;
label_30c72c:
    // 0x30c72c: 0xc0c3510  jal         func_30D440
label_30c730:
    if (ctx->pc == 0x30C730u) {
        ctx->pc = 0x30C730u;
            // 0x30c730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C734u;
        goto label_30c734;
    }
    ctx->pc = 0x30C72Cu;
    SET_GPR_U32(ctx, 31, 0x30C734u);
    ctx->pc = 0x30C730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C72Cu;
            // 0x30c730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30D440u;
    if (runtime->hasFunction(0x30D440u)) {
        auto targetFn = runtime->lookupFunction(0x30D440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C734u; }
        if (ctx->pc != 0x30C734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030D440_0x30d440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C734u; }
        if (ctx->pc != 0x30C734u) { return; }
    }
    ctx->pc = 0x30C734u;
label_30c734:
    // 0x30c734: 0x1000000f  b           . + 4 + (0xF << 2)
label_30c738:
    if (ctx->pc == 0x30C738u) {
        ctx->pc = 0x30C73Cu;
        goto label_30c73c;
    }
    ctx->pc = 0x30C734u;
    {
        const bool branch_taken_0x30c734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c734) {
            ctx->pc = 0x30C774u;
            goto label_30c774;
        }
    }
    ctx->pc = 0x30C73Cu;
label_30c73c:
    // 0x30c73c: 0xc0c33a8  jal         func_30CEA0
label_30c740:
    if (ctx->pc == 0x30C740u) {
        ctx->pc = 0x30C740u;
            // 0x30c740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C744u;
        goto label_30c744;
    }
    ctx->pc = 0x30C73Cu;
    SET_GPR_U32(ctx, 31, 0x30C744u);
    ctx->pc = 0x30C740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C73Cu;
            // 0x30c740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30CEA0u;
    if (runtime->hasFunction(0x30CEA0u)) {
        auto targetFn = runtime->lookupFunction(0x30CEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C744u; }
        if (ctx->pc != 0x30C744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030CEA0_0x30cea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C744u; }
        if (ctx->pc != 0x30C744u) { return; }
    }
    ctx->pc = 0x30C744u;
label_30c744:
    // 0x30c744: 0x1000000b  b           . + 4 + (0xB << 2)
label_30c748:
    if (ctx->pc == 0x30C748u) {
        ctx->pc = 0x30C74Cu;
        goto label_30c74c;
    }
    ctx->pc = 0x30C744u;
    {
        const bool branch_taken_0x30c744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c744) {
            ctx->pc = 0x30C774u;
            goto label_30c774;
        }
    }
    ctx->pc = 0x30C74Cu;
label_30c74c:
    // 0x30c74c: 0xc0c33a4  jal         func_30CE90
label_30c750:
    if (ctx->pc == 0x30C750u) {
        ctx->pc = 0x30C750u;
            // 0x30c750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C754u;
        goto label_30c754;
    }
    ctx->pc = 0x30C74Cu;
    SET_GPR_U32(ctx, 31, 0x30C754u);
    ctx->pc = 0x30C750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C74Cu;
            // 0x30c750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30CE90u;
    if (runtime->hasFunction(0x30CE90u)) {
        auto targetFn = runtime->lookupFunction(0x30CE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C754u; }
        if (ctx->pc != 0x30C754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030CE90_0x30ce90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C754u; }
        if (ctx->pc != 0x30C754u) { return; }
    }
    ctx->pc = 0x30C754u;
label_30c754:
    // 0x30c754: 0x10000007  b           . + 4 + (0x7 << 2)
label_30c758:
    if (ctx->pc == 0x30C758u) {
        ctx->pc = 0x30C75Cu;
        goto label_30c75c;
    }
    ctx->pc = 0x30C754u;
    {
        const bool branch_taken_0x30c754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c754) {
            ctx->pc = 0x30C774u;
            goto label_30c774;
        }
    }
    ctx->pc = 0x30C75Cu;
label_30c75c:
    // 0x30c75c: 0xc0c32c4  jal         func_30CB10
label_30c760:
    if (ctx->pc == 0x30C760u) {
        ctx->pc = 0x30C760u;
            // 0x30c760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C764u;
        goto label_30c764;
    }
    ctx->pc = 0x30C75Cu;
    SET_GPR_U32(ctx, 31, 0x30C764u);
    ctx->pc = 0x30C760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C75Cu;
            // 0x30c760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30CB10u;
    if (runtime->hasFunction(0x30CB10u)) {
        auto targetFn = runtime->lookupFunction(0x30CB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C764u; }
        if (ctx->pc != 0x30C764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030CB10_0x30cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C764u; }
        if (ctx->pc != 0x30C764u) { return; }
    }
    ctx->pc = 0x30C764u;
label_30c764:
    // 0x30c764: 0x10000003  b           . + 4 + (0x3 << 2)
label_30c768:
    if (ctx->pc == 0x30C768u) {
        ctx->pc = 0x30C76Cu;
        goto label_30c76c;
    }
    ctx->pc = 0x30C764u;
    {
        const bool branch_taken_0x30c764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c764) {
            ctx->pc = 0x30C774u;
            goto label_30c774;
        }
    }
    ctx->pc = 0x30C76Cu;
label_30c76c:
    // 0x30c76c: 0xc0c31e4  jal         func_30C790
label_30c770:
    if (ctx->pc == 0x30C770u) {
        ctx->pc = 0x30C770u;
            // 0x30c770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C774u;
        goto label_30c774;
    }
    ctx->pc = 0x30C76Cu;
    SET_GPR_U32(ctx, 31, 0x30C774u);
    ctx->pc = 0x30C770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C76Cu;
            // 0x30c770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30C790u;
    if (runtime->hasFunction(0x30C790u)) {
        auto targetFn = runtime->lookupFunction(0x30C790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C774u; }
        if (ctx->pc != 0x30C774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030C790_0x30c790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C774u; }
        if (ctx->pc != 0x30C774u) { return; }
    }
    ctx->pc = 0x30C774u;
label_30c774:
    // 0x30c774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30c774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30c778:
    // 0x30c778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30c77c:
    // 0x30c77c: 0x3e00008  jr          $ra
label_30c780:
    if (ctx->pc == 0x30C780u) {
        ctx->pc = 0x30C780u;
            // 0x30c780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x30C784u;
        goto label_30c784;
    }
    ctx->pc = 0x30C77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C77Cu;
            // 0x30c780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C784u;
label_30c784:
    // 0x30c784: 0x0  nop
    ctx->pc = 0x30c784u;
    // NOP
label_30c788:
    // 0x30c788: 0x0  nop
    ctx->pc = 0x30c788u;
    // NOP
label_30c78c:
    // 0x30c78c: 0x0  nop
    ctx->pc = 0x30c78cu;
    // NOP
}
