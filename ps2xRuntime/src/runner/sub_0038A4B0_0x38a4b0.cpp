#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038A4B0
// Address: 0x38a4b0 - 0x38a850
void sub_0038A4B0_0x38a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A4B0_0x38a4b0");
#endif

    switch (ctx->pc) {
        case 0x38a4b0u: goto label_38a4b0;
        case 0x38a4b4u: goto label_38a4b4;
        case 0x38a4b8u: goto label_38a4b8;
        case 0x38a4bcu: goto label_38a4bc;
        case 0x38a4c0u: goto label_38a4c0;
        case 0x38a4c4u: goto label_38a4c4;
        case 0x38a4c8u: goto label_38a4c8;
        case 0x38a4ccu: goto label_38a4cc;
        case 0x38a4d0u: goto label_38a4d0;
        case 0x38a4d4u: goto label_38a4d4;
        case 0x38a4d8u: goto label_38a4d8;
        case 0x38a4dcu: goto label_38a4dc;
        case 0x38a4e0u: goto label_38a4e0;
        case 0x38a4e4u: goto label_38a4e4;
        case 0x38a4e8u: goto label_38a4e8;
        case 0x38a4ecu: goto label_38a4ec;
        case 0x38a4f0u: goto label_38a4f0;
        case 0x38a4f4u: goto label_38a4f4;
        case 0x38a4f8u: goto label_38a4f8;
        case 0x38a4fcu: goto label_38a4fc;
        case 0x38a500u: goto label_38a500;
        case 0x38a504u: goto label_38a504;
        case 0x38a508u: goto label_38a508;
        case 0x38a50cu: goto label_38a50c;
        case 0x38a510u: goto label_38a510;
        case 0x38a514u: goto label_38a514;
        case 0x38a518u: goto label_38a518;
        case 0x38a51cu: goto label_38a51c;
        case 0x38a520u: goto label_38a520;
        case 0x38a524u: goto label_38a524;
        case 0x38a528u: goto label_38a528;
        case 0x38a52cu: goto label_38a52c;
        case 0x38a530u: goto label_38a530;
        case 0x38a534u: goto label_38a534;
        case 0x38a538u: goto label_38a538;
        case 0x38a53cu: goto label_38a53c;
        case 0x38a540u: goto label_38a540;
        case 0x38a544u: goto label_38a544;
        case 0x38a548u: goto label_38a548;
        case 0x38a54cu: goto label_38a54c;
        case 0x38a550u: goto label_38a550;
        case 0x38a554u: goto label_38a554;
        case 0x38a558u: goto label_38a558;
        case 0x38a55cu: goto label_38a55c;
        case 0x38a560u: goto label_38a560;
        case 0x38a564u: goto label_38a564;
        case 0x38a568u: goto label_38a568;
        case 0x38a56cu: goto label_38a56c;
        case 0x38a570u: goto label_38a570;
        case 0x38a574u: goto label_38a574;
        case 0x38a578u: goto label_38a578;
        case 0x38a57cu: goto label_38a57c;
        case 0x38a580u: goto label_38a580;
        case 0x38a584u: goto label_38a584;
        case 0x38a588u: goto label_38a588;
        case 0x38a58cu: goto label_38a58c;
        case 0x38a590u: goto label_38a590;
        case 0x38a594u: goto label_38a594;
        case 0x38a598u: goto label_38a598;
        case 0x38a59cu: goto label_38a59c;
        case 0x38a5a0u: goto label_38a5a0;
        case 0x38a5a4u: goto label_38a5a4;
        case 0x38a5a8u: goto label_38a5a8;
        case 0x38a5acu: goto label_38a5ac;
        case 0x38a5b0u: goto label_38a5b0;
        case 0x38a5b4u: goto label_38a5b4;
        case 0x38a5b8u: goto label_38a5b8;
        case 0x38a5bcu: goto label_38a5bc;
        case 0x38a5c0u: goto label_38a5c0;
        case 0x38a5c4u: goto label_38a5c4;
        case 0x38a5c8u: goto label_38a5c8;
        case 0x38a5ccu: goto label_38a5cc;
        case 0x38a5d0u: goto label_38a5d0;
        case 0x38a5d4u: goto label_38a5d4;
        case 0x38a5d8u: goto label_38a5d8;
        case 0x38a5dcu: goto label_38a5dc;
        case 0x38a5e0u: goto label_38a5e0;
        case 0x38a5e4u: goto label_38a5e4;
        case 0x38a5e8u: goto label_38a5e8;
        case 0x38a5ecu: goto label_38a5ec;
        case 0x38a5f0u: goto label_38a5f0;
        case 0x38a5f4u: goto label_38a5f4;
        case 0x38a5f8u: goto label_38a5f8;
        case 0x38a5fcu: goto label_38a5fc;
        case 0x38a600u: goto label_38a600;
        case 0x38a604u: goto label_38a604;
        case 0x38a608u: goto label_38a608;
        case 0x38a60cu: goto label_38a60c;
        case 0x38a610u: goto label_38a610;
        case 0x38a614u: goto label_38a614;
        case 0x38a618u: goto label_38a618;
        case 0x38a61cu: goto label_38a61c;
        case 0x38a620u: goto label_38a620;
        case 0x38a624u: goto label_38a624;
        case 0x38a628u: goto label_38a628;
        case 0x38a62cu: goto label_38a62c;
        case 0x38a630u: goto label_38a630;
        case 0x38a634u: goto label_38a634;
        case 0x38a638u: goto label_38a638;
        case 0x38a63cu: goto label_38a63c;
        case 0x38a640u: goto label_38a640;
        case 0x38a644u: goto label_38a644;
        case 0x38a648u: goto label_38a648;
        case 0x38a64cu: goto label_38a64c;
        case 0x38a650u: goto label_38a650;
        case 0x38a654u: goto label_38a654;
        case 0x38a658u: goto label_38a658;
        case 0x38a65cu: goto label_38a65c;
        case 0x38a660u: goto label_38a660;
        case 0x38a664u: goto label_38a664;
        case 0x38a668u: goto label_38a668;
        case 0x38a66cu: goto label_38a66c;
        case 0x38a670u: goto label_38a670;
        case 0x38a674u: goto label_38a674;
        case 0x38a678u: goto label_38a678;
        case 0x38a67cu: goto label_38a67c;
        case 0x38a680u: goto label_38a680;
        case 0x38a684u: goto label_38a684;
        case 0x38a688u: goto label_38a688;
        case 0x38a68cu: goto label_38a68c;
        case 0x38a690u: goto label_38a690;
        case 0x38a694u: goto label_38a694;
        case 0x38a698u: goto label_38a698;
        case 0x38a69cu: goto label_38a69c;
        case 0x38a6a0u: goto label_38a6a0;
        case 0x38a6a4u: goto label_38a6a4;
        case 0x38a6a8u: goto label_38a6a8;
        case 0x38a6acu: goto label_38a6ac;
        case 0x38a6b0u: goto label_38a6b0;
        case 0x38a6b4u: goto label_38a6b4;
        case 0x38a6b8u: goto label_38a6b8;
        case 0x38a6bcu: goto label_38a6bc;
        case 0x38a6c0u: goto label_38a6c0;
        case 0x38a6c4u: goto label_38a6c4;
        case 0x38a6c8u: goto label_38a6c8;
        case 0x38a6ccu: goto label_38a6cc;
        case 0x38a6d0u: goto label_38a6d0;
        case 0x38a6d4u: goto label_38a6d4;
        case 0x38a6d8u: goto label_38a6d8;
        case 0x38a6dcu: goto label_38a6dc;
        case 0x38a6e0u: goto label_38a6e0;
        case 0x38a6e4u: goto label_38a6e4;
        case 0x38a6e8u: goto label_38a6e8;
        case 0x38a6ecu: goto label_38a6ec;
        case 0x38a6f0u: goto label_38a6f0;
        case 0x38a6f4u: goto label_38a6f4;
        case 0x38a6f8u: goto label_38a6f8;
        case 0x38a6fcu: goto label_38a6fc;
        case 0x38a700u: goto label_38a700;
        case 0x38a704u: goto label_38a704;
        case 0x38a708u: goto label_38a708;
        case 0x38a70cu: goto label_38a70c;
        case 0x38a710u: goto label_38a710;
        case 0x38a714u: goto label_38a714;
        case 0x38a718u: goto label_38a718;
        case 0x38a71cu: goto label_38a71c;
        case 0x38a720u: goto label_38a720;
        case 0x38a724u: goto label_38a724;
        case 0x38a728u: goto label_38a728;
        case 0x38a72cu: goto label_38a72c;
        case 0x38a730u: goto label_38a730;
        case 0x38a734u: goto label_38a734;
        case 0x38a738u: goto label_38a738;
        case 0x38a73cu: goto label_38a73c;
        case 0x38a740u: goto label_38a740;
        case 0x38a744u: goto label_38a744;
        case 0x38a748u: goto label_38a748;
        case 0x38a74cu: goto label_38a74c;
        case 0x38a750u: goto label_38a750;
        case 0x38a754u: goto label_38a754;
        case 0x38a758u: goto label_38a758;
        case 0x38a75cu: goto label_38a75c;
        case 0x38a760u: goto label_38a760;
        case 0x38a764u: goto label_38a764;
        case 0x38a768u: goto label_38a768;
        case 0x38a76cu: goto label_38a76c;
        case 0x38a770u: goto label_38a770;
        case 0x38a774u: goto label_38a774;
        case 0x38a778u: goto label_38a778;
        case 0x38a77cu: goto label_38a77c;
        case 0x38a780u: goto label_38a780;
        case 0x38a784u: goto label_38a784;
        case 0x38a788u: goto label_38a788;
        case 0x38a78cu: goto label_38a78c;
        case 0x38a790u: goto label_38a790;
        case 0x38a794u: goto label_38a794;
        case 0x38a798u: goto label_38a798;
        case 0x38a79cu: goto label_38a79c;
        case 0x38a7a0u: goto label_38a7a0;
        case 0x38a7a4u: goto label_38a7a4;
        case 0x38a7a8u: goto label_38a7a8;
        case 0x38a7acu: goto label_38a7ac;
        case 0x38a7b0u: goto label_38a7b0;
        case 0x38a7b4u: goto label_38a7b4;
        case 0x38a7b8u: goto label_38a7b8;
        case 0x38a7bcu: goto label_38a7bc;
        case 0x38a7c0u: goto label_38a7c0;
        case 0x38a7c4u: goto label_38a7c4;
        case 0x38a7c8u: goto label_38a7c8;
        case 0x38a7ccu: goto label_38a7cc;
        case 0x38a7d0u: goto label_38a7d0;
        case 0x38a7d4u: goto label_38a7d4;
        case 0x38a7d8u: goto label_38a7d8;
        case 0x38a7dcu: goto label_38a7dc;
        case 0x38a7e0u: goto label_38a7e0;
        case 0x38a7e4u: goto label_38a7e4;
        case 0x38a7e8u: goto label_38a7e8;
        case 0x38a7ecu: goto label_38a7ec;
        case 0x38a7f0u: goto label_38a7f0;
        case 0x38a7f4u: goto label_38a7f4;
        case 0x38a7f8u: goto label_38a7f8;
        case 0x38a7fcu: goto label_38a7fc;
        case 0x38a800u: goto label_38a800;
        case 0x38a804u: goto label_38a804;
        case 0x38a808u: goto label_38a808;
        case 0x38a80cu: goto label_38a80c;
        case 0x38a810u: goto label_38a810;
        case 0x38a814u: goto label_38a814;
        case 0x38a818u: goto label_38a818;
        case 0x38a81cu: goto label_38a81c;
        case 0x38a820u: goto label_38a820;
        case 0x38a824u: goto label_38a824;
        case 0x38a828u: goto label_38a828;
        case 0x38a82cu: goto label_38a82c;
        case 0x38a830u: goto label_38a830;
        case 0x38a834u: goto label_38a834;
        case 0x38a838u: goto label_38a838;
        case 0x38a83cu: goto label_38a83c;
        case 0x38a840u: goto label_38a840;
        case 0x38a844u: goto label_38a844;
        case 0x38a848u: goto label_38a848;
        case 0x38a84cu: goto label_38a84c;
        default: break;
    }

    ctx->pc = 0x38a4b0u;

label_38a4b0:
    // 0x38a4b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_38a4b4:
    // 0x38a4b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x38a4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_38a4b8:
    // 0x38a4b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x38a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_38a4bc:
    // 0x38a4bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38a4c0:
    // 0x38a4c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x38a4c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38a4c4:
    // 0x38a4c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38a4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38a4c8:
    // 0x38a4c8: 0x2683000e  addiu       $v1, $s4, 0xE
    ctx->pc = 0x38a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 14));
label_38a4cc:
    // 0x38a4cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38a4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38a4d0:
    // 0x38a4d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x38a4d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38a4d4:
    // 0x38a4d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38a4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38a4d8:
    // 0x38a4d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38a4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38a4dc:
    // 0x38a4dc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x38a4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_38a4e0:
    // 0x38a4e0: 0x9083000e  lbu         $v1, 0xE($a0)
    ctx->pc = 0x38a4e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
label_38a4e4:
    // 0x38a4e4: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x38a4e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_38a4e8:
    // 0x38a4e8: 0x102000ce  beqz        $at, . + 4 + (0xCE << 2)
label_38a4ec:
    if (ctx->pc == 0x38A4ECu) {
        ctx->pc = 0x38A4ECu;
            // 0x38a4ec: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38A4F0u;
        goto label_38a4f0;
    }
    ctx->pc = 0x38A4E8u;
    {
        const bool branch_taken_0x38a4e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A4E8u;
            // 0x38a4ec: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a4e8) {
            ctx->pc = 0x38A824u;
            goto label_38a824;
        }
    }
    ctx->pc = 0x38A4F0u;
label_38a4f0:
    // 0x38a4f0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x38a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_38a4f4:
    // 0x38a4f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_38a4f8:
    // 0x38a4f8: 0x24845e40  addiu       $a0, $a0, 0x5E40
    ctx->pc = 0x38a4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24128));
label_38a4fc:
    // 0x38a4fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38a500:
    // 0x38a500: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38a500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38a504:
    // 0x38a504: 0x600008  jr          $v1
label_38a508:
    if (ctx->pc == 0x38A508u) {
        ctx->pc = 0x38A50Cu;
        goto label_38a50c;
    }
    ctx->pc = 0x38A504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38A50Cu: goto label_38a50c;
            case 0x38A678u: goto label_38a678;
            case 0x38A698u: goto label_38a698;
            case 0x38A6B4u: goto label_38a6b4;
            case 0x38A6E4u: goto label_38a6e4;
            case 0x38A824u: goto label_38a824;
            default: break;
        }
        return;
    }
    ctx->pc = 0x38A50Cu;
label_38a50c:
    // 0x38a50c: 0x8e2211d4  lw          $v0, 0x11D4($s1)
    ctx->pc = 0x38a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4564)));
label_38a510:
    // 0x38a510: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x38a510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_38a514:
    // 0x38a514: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x38a514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_38a518:
    // 0x38a518: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x38a518u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_38a51c:
    // 0x38a51c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x38a51cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_38a520:
    // 0x38a520: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x38a520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38a524:
    // 0x38a524: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_38a528:
    if (ctx->pc == 0x38A528u) {
        ctx->pc = 0x38A528u;
            // 0x38a528: 0x8e220d70  lw          $v0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->pc = 0x38A52Cu;
        goto label_38a52c;
    }
    ctx->pc = 0x38A524u;
    {
        const bool branch_taken_0x38a524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a524) {
            ctx->pc = 0x38A528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A524u;
            // 0x38a528: 0x8e220d70  lw          $v0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A544u;
            goto label_38a544;
        }
    }
    ctx->pc = 0x38A52Cu;
label_38a52c:
    // 0x38a52c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38a52cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38a530:
    // 0x38a530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38a534:
    // 0x38a534: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x38a534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_38a538:
    // 0x38a538: 0x320f809  jalr        $t9
label_38a53c:
    if (ctx->pc == 0x38A53Cu) {
        ctx->pc = 0x38A53Cu;
            // 0x38a53c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x38A540u;
        goto label_38a540;
    }
    ctx->pc = 0x38A538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A540u);
        ctx->pc = 0x38A53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A538u;
            // 0x38a53c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A540u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A540u; }
            if (ctx->pc != 0x38A540u) { return; }
        }
        }
    }
    ctx->pc = 0x38A540u;
label_38a540:
    // 0x38a540: 0x8e220d70  lw          $v0, 0xD70($s1)
    ctx->pc = 0x38a540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_38a544:
    // 0x38a544: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x38a544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_38a548:
    // 0x38a548: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_38a54c:
    if (ctx->pc == 0x38A54Cu) {
        ctx->pc = 0x38A54Cu;
            // 0x38a54c: 0x3c023eed  lui         $v0, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
        ctx->pc = 0x38A550u;
        goto label_38a550;
    }
    ctx->pc = 0x38A548u;
    {
        const bool branch_taken_0x38a548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a548) {
            ctx->pc = 0x38A54Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A548u;
            // 0x38a54c: 0x3c023eed  lui         $v0, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A5F8u;
            goto label_38a5f8;
        }
    }
    ctx->pc = 0x38A550u;
label_38a550:
    // 0x38a550: 0x8e230d6c  lw          $v1, 0xD6C($s1)
    ctx->pc = 0x38a550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_38a554:
    // 0x38a554: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x38a554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_38a558:
    // 0x38a558: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x38a558u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_38a55c:
    // 0x38a55c: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_38a560:
    if (ctx->pc == 0x38A560u) {
        ctx->pc = 0x38A564u;
        goto label_38a564;
    }
    ctx->pc = 0x38A55Cu;
    {
        const bool branch_taken_0x38a55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38a55c) {
            ctx->pc = 0x38A5F4u;
            goto label_38a5f4;
        }
    }
    ctx->pc = 0x38A564u;
label_38a564:
    // 0x38a564: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x38a564u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_38a568:
    // 0x38a568: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x38a568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_38a56c:
    // 0x38a56c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x38a56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_38a570:
    // 0x38a570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38a570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a574:
    // 0x38a574: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x38a574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38a578:
    // 0x38a578: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38a578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38a57c:
    // 0x38a57c: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x38a57cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_38a580:
    // 0x38a580: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38a580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38a584:
    // 0x38a584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a588:
    // 0x38a588: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x38a588u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38a58c:
    // 0x38a58c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x38a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_38a590:
    // 0x38a590: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38a594:
    // 0x38a594: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x38a594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_38a598:
    // 0x38a598: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x38a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_38a59c:
    // 0x38a59c: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x38a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_38a5a0:
    // 0x38a5a0: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x38a5a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_38a5a4:
    // 0x38a5a4: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x38a5a4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_38a5a8:
    // 0x38a5a8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x38a5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_38a5ac:
    // 0x38a5ac: 0x320f809  jalr        $t9
label_38a5b0:
    if (ctx->pc == 0x38A5B0u) {
        ctx->pc = 0x38A5B0u;
            // 0x38a5b0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x38A5B4u;
        goto label_38a5b4;
    }
    ctx->pc = 0x38A5ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A5B4u);
        ctx->pc = 0x38A5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A5ACu;
            // 0x38a5b0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A5B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A5B4u; }
            if (ctx->pc != 0x38A5B4u) { return; }
        }
        }
    }
    ctx->pc = 0x38A5B4u;
label_38a5b4:
    // 0x38a5b4: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x38a5b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_38a5b8:
    // 0x38a5b8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x38a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_38a5bc:
    // 0x38a5bc: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x38a5bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_38a5c0:
    // 0x38a5c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38a5c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38a5c4:
    // 0x38a5c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x38a5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_38a5c8:
    // 0x38a5c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a5cc:
    // 0x38a5cc: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x38a5ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_38a5d0:
    // 0x38a5d0: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x38a5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_38a5d4:
    // 0x38a5d4: 0x320f809  jalr        $t9
label_38a5d8:
    if (ctx->pc == 0x38A5D8u) {
        ctx->pc = 0x38A5D8u;
            // 0x38a5d8: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x38A5DCu;
        goto label_38a5dc;
    }
    ctx->pc = 0x38A5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A5DCu);
        ctx->pc = 0x38A5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A5D4u;
            // 0x38a5d8: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A5DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A5DCu; }
            if (ctx->pc != 0x38A5DCu) { return; }
        }
        }
    }
    ctx->pc = 0x38A5DCu;
label_38a5dc:
    // 0x38a5dc: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x38a5dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_38a5e0:
    // 0x38a5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a5e4:
    // 0x38a5e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x38a5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_38a5e8:
    // 0x38a5e8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x38a5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_38a5ec:
    // 0x38a5ec: 0x320f809  jalr        $t9
label_38a5f0:
    if (ctx->pc == 0x38A5F0u) {
        ctx->pc = 0x38A5F0u;
            // 0x38a5f0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38A5F4u;
        goto label_38a5f4;
    }
    ctx->pc = 0x38A5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A5F4u);
        ctx->pc = 0x38A5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A5ECu;
            // 0x38a5f0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A5F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A5F4u; }
            if (ctx->pc != 0x38A5F4u) { return; }
        }
        }
    }
    ctx->pc = 0x38A5F4u;
label_38a5f4:
    // 0x38a5f4: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x38a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_38a5f8:
    // 0x38a5f8: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x38a5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_38a5fc:
    // 0x38a5fc: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x38a5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38a600:
    // 0x38a600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38a600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a604:
    // 0x38a604: 0x0  nop
    ctx->pc = 0x38a604u;
    // NOP
label_38a608:
    // 0x38a608: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38a608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38a60c:
    // 0x38a60c: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_38a610:
    if (ctx->pc == 0x38A610u) {
        ctx->pc = 0x38A610u;
            // 0x38a610: 0x3c023e6d  lui         $v0, 0x3E6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
        ctx->pc = 0x38A614u;
        goto label_38a614;
    }
    ctx->pc = 0x38A60Cu;
    {
        const bool branch_taken_0x38a60c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38a60c) {
            ctx->pc = 0x38A610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A60Cu;
            // 0x38a610: 0x3c023e6d  lui         $v0, 0x3E6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A630u;
            goto label_38a630;
        }
    }
    ctx->pc = 0x38A614u;
label_38a614:
    // 0x38a614: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x38a614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_38a618:
    // 0x38a618: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x38a618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_38a61c:
    // 0x38a61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38a61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a620:
    // 0x38a620: 0x0  nop
    ctx->pc = 0x38a620u;
    // NOP
label_38a624:
    // 0x38a624: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x38a624u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38a628:
    // 0x38a628: 0x10000008  b           . + 4 + (0x8 << 2)
label_38a62c:
    if (ctx->pc == 0x38A62Cu) {
        ctx->pc = 0x38A62Cu;
            // 0x38a62c: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->pc = 0x38A630u;
        goto label_38a630;
    }
    ctx->pc = 0x38A628u;
    {
        const bool branch_taken_0x38a628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A628u;
            // 0x38a62c: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a628) {
            ctx->pc = 0x38A64Cu;
            goto label_38a64c;
        }
    }
    ctx->pc = 0x38A630u;
label_38a630:
    // 0x38a630: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x38a630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_38a634:
    // 0x38a634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38a634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a638:
    // 0x38a638: 0x0  nop
    ctx->pc = 0x38a638u;
    // NOP
label_38a63c:
    // 0x38a63c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38a63cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38a640:
    // 0x38a640: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_38a644:
    if (ctx->pc == 0x38A644u) {
        ctx->pc = 0x38A644u;
            // 0x38a644: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x38A648u;
        goto label_38a648;
    }
    ctx->pc = 0x38A640u;
    {
        const bool branch_taken_0x38a640 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38a640) {
            ctx->pc = 0x38A644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A640u;
            // 0x38a644: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A650u;
            goto label_38a650;
        }
    }
    ctx->pc = 0x38A648u;
label_38a648:
    // 0x38a648: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x38a648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_38a64c:
    // 0x38a64c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x38a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_38a650:
    // 0x38a650: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38a650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38a654:
    // 0x38a654: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x38a654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38a658:
    // 0x38a658: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x38a658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38a65c:
    // 0x38a65c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38a65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38a660:
    // 0x38a660: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x38a660u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_38a664:
    // 0x38a664: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x38a664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_38a668:
    // 0x38a668: 0xc0e26e0  jal         func_389B80
label_38a66c:
    if (ctx->pc == 0x38A66Cu) {
        ctx->pc = 0x38A66Cu;
            // 0x38a66c: 0x2c480001  sltiu       $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x38A670u;
        goto label_38a670;
    }
    ctx->pc = 0x38A668u;
    SET_GPR_U32(ctx, 31, 0x38A670u);
    ctx->pc = 0x38A66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38A668u;
            // 0x38a66c: 0x2c480001  sltiu       $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x389B80u;
    if (runtime->hasFunction(0x389B80u)) {
        auto targetFn = runtime->lookupFunction(0x389B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A670u; }
        if (ctx->pc != 0x38A670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00389B80_0x389b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A670u; }
        if (ctx->pc != 0x38A670u) { return; }
    }
    ctx->pc = 0x38A670u;
label_38a670:
    // 0x38a670: 0x1000006d  b           . + 4 + (0x6D << 2)
label_38a674:
    if (ctx->pc == 0x38A674u) {
        ctx->pc = 0x38A674u;
            // 0x38a674: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x38A678u;
        goto label_38a678;
    }
    ctx->pc = 0x38A670u;
    {
        const bool branch_taken_0x38a670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A670u;
            // 0x38a674: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a670) {
            ctx->pc = 0x38A828u;
            goto label_38a828;
        }
    }
    ctx->pc = 0x38A678u;
label_38a678:
    // 0x38a678: 0x8e230d70  lw          $v1, 0xD70($s1)
    ctx->pc = 0x38a678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_38a67c:
    // 0x38a67c: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x38a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_38a680:
    // 0x38a680: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
label_38a684:
    if (ctx->pc == 0x38A684u) {
        ctx->pc = 0x38A688u;
        goto label_38a688;
    }
    ctx->pc = 0x38A680u;
    {
        const bool branch_taken_0x38a680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a680) {
            ctx->pc = 0x38A824u;
            goto label_38a824;
        }
    }
    ctx->pc = 0x38A688u;
label_38a688:
    // 0x38a688: 0xc0c0da0  jal         func_303680
label_38a68c:
    if (ctx->pc == 0x38A68Cu) {
        ctx->pc = 0x38A68Cu;
            // 0x38a68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38A690u;
        goto label_38a690;
    }
    ctx->pc = 0x38A688u;
    SET_GPR_U32(ctx, 31, 0x38A690u);
    ctx->pc = 0x38A68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38A688u;
            // 0x38a68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303680u;
    if (runtime->hasFunction(0x303680u)) {
        auto targetFn = runtime->lookupFunction(0x303680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A690u; }
        if (ctx->pc != 0x38A690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303680_0x303680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A690u; }
        if (ctx->pc != 0x38A690u) { return; }
    }
    ctx->pc = 0x38A690u;
label_38a690:
    // 0x38a690: 0x10000064  b           . + 4 + (0x64 << 2)
label_38a694:
    if (ctx->pc == 0x38A694u) {
        ctx->pc = 0x38A698u;
        goto label_38a698;
    }
    ctx->pc = 0x38A690u;
    {
        const bool branch_taken_0x38a690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a690) {
            ctx->pc = 0x38A824u;
            goto label_38a824;
        }
    }
    ctx->pc = 0x38A698u;
label_38a698:
    // 0x38a698: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38a698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38a69c:
    // 0x38a69c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38a6a0:
    // 0x38a6a0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x38a6a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_38a6a4:
    // 0x38a6a4: 0x320f809  jalr        $t9
label_38a6a8:
    if (ctx->pc == 0x38A6A8u) {
        ctx->pc = 0x38A6A8u;
            // 0x38a6a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38A6ACu;
        goto label_38a6ac;
    }
    ctx->pc = 0x38A6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A6ACu);
        ctx->pc = 0x38A6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A6A4u;
            // 0x38a6a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A6ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A6ACu; }
            if (ctx->pc != 0x38A6ACu) { return; }
        }
        }
    }
    ctx->pc = 0x38A6ACu;
label_38a6ac:
    // 0x38a6ac: 0x1000005d  b           . + 4 + (0x5D << 2)
label_38a6b0:
    if (ctx->pc == 0x38A6B0u) {
        ctx->pc = 0x38A6B4u;
        goto label_38a6b4;
    }
    ctx->pc = 0x38A6ACu;
    {
        const bool branch_taken_0x38a6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a6ac) {
            ctx->pc = 0x38A824u;
            goto label_38a824;
        }
    }
    ctx->pc = 0x38A6B4u;
label_38a6b4:
    // 0x38a6b4: 0xc66c0010  lwc1        $f12, 0x10($s3)
    ctx->pc = 0x38a6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38a6b8:
    // 0x38a6b8: 0xc66d0014  lwc1        $f13, 0x14($s3)
    ctx->pc = 0x38a6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_38a6bc:
    // 0x38a6bc: 0xc66e0018  lwc1        $f14, 0x18($s3)
    ctx->pc = 0x38a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_38a6c0:
    // 0x38a6c0: 0xc04cbd8  jal         func_132F60
label_38a6c4:
    if (ctx->pc == 0x38A6C4u) {
        ctx->pc = 0x38A6C4u;
            // 0x38a6c4: 0x26240bc0  addiu       $a0, $s1, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3008));
        ctx->pc = 0x38A6C8u;
        goto label_38a6c8;
    }
    ctx->pc = 0x38A6C0u;
    SET_GPR_U32(ctx, 31, 0x38A6C8u);
    ctx->pc = 0x38A6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38A6C0u;
            // 0x38a6c4: 0x26240bc0  addiu       $a0, $s1, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A6C8u; }
        if (ctx->pc != 0x38A6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A6C8u; }
        if (ctx->pc != 0x38A6C8u) { return; }
    }
    ctx->pc = 0x38A6C8u;
label_38a6c8:
    // 0x38a6c8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38a6c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38a6cc:
    // 0x38a6cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38a6d0:
    // 0x38a6d0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x38a6d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_38a6d4:
    // 0x38a6d4: 0x320f809  jalr        $t9
label_38a6d8:
    if (ctx->pc == 0x38A6D8u) {
        ctx->pc = 0x38A6D8u;
            // 0x38a6d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x38A6DCu;
        goto label_38a6dc;
    }
    ctx->pc = 0x38A6D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A6DCu);
        ctx->pc = 0x38A6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A6D4u;
            // 0x38a6d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A6DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A6DCu; }
            if (ctx->pc != 0x38A6DCu) { return; }
        }
        }
    }
    ctx->pc = 0x38A6DCu;
label_38a6dc:
    // 0x38a6dc: 0x10000051  b           . + 4 + (0x51 << 2)
label_38a6e0:
    if (ctx->pc == 0x38A6E0u) {
        ctx->pc = 0x38A6E4u;
        goto label_38a6e4;
    }
    ctx->pc = 0x38A6DCu;
    {
        const bool branch_taken_0x38a6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a6dc) {
            ctx->pc = 0x38A824u;
            goto label_38a824;
        }
    }
    ctx->pc = 0x38A6E4u;
label_38a6e4:
    // 0x38a6e4: 0x8e2311d4  lw          $v1, 0x11D4($s1)
    ctx->pc = 0x38a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4564)));
label_38a6e8:
    // 0x38a6e8: 0x38640002  xori        $a0, $v1, 0x2
    ctx->pc = 0x38a6e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_38a6ec:
    // 0x38a6ec: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x38a6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_38a6f0:
    // 0x38a6f0: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x38a6f0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_38a6f4:
    // 0x38a6f4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x38a6f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_38a6f8:
    // 0x38a6f8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x38a6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_38a6fc:
    // 0x38a6fc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_38a700:
    if (ctx->pc == 0x38A700u) {
        ctx->pc = 0x38A700u;
            // 0x38a700: 0x8e230d70  lw          $v1, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->pc = 0x38A704u;
        goto label_38a704;
    }
    ctx->pc = 0x38A6FCu;
    {
        const bool branch_taken_0x38a6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a6fc) {
            ctx->pc = 0x38A700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A6FCu;
            // 0x38a700: 0x8e230d70  lw          $v1, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A71Cu;
            goto label_38a71c;
        }
    }
    ctx->pc = 0x38A704u;
label_38a704:
    // 0x38a704: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38a704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38a708:
    // 0x38a708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38a70c:
    // 0x38a70c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x38a70cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_38a710:
    // 0x38a710: 0x320f809  jalr        $t9
label_38a714:
    if (ctx->pc == 0x38A714u) {
        ctx->pc = 0x38A714u;
            // 0x38a714: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x38A718u;
        goto label_38a718;
    }
    ctx->pc = 0x38A710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A718u);
        ctx->pc = 0x38A714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A710u;
            // 0x38a714: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A718u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A718u; }
            if (ctx->pc != 0x38A718u) { return; }
        }
        }
    }
    ctx->pc = 0x38A718u;
label_38a718:
    // 0x38a718: 0x8e230d70  lw          $v1, 0xD70($s1)
    ctx->pc = 0x38a718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_38a71c:
    // 0x38a71c: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x38a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_38a720:
    // 0x38a720: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
label_38a724:
    if (ctx->pc == 0x38A724u) {
        ctx->pc = 0x38A724u;
            // 0x38a724: 0x3c033eed  lui         $v1, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
        ctx->pc = 0x38A728u;
        goto label_38a728;
    }
    ctx->pc = 0x38A720u;
    {
        const bool branch_taken_0x38a720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a720) {
            ctx->pc = 0x38A724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A720u;
            // 0x38a724: 0x3c033eed  lui         $v1, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A7D0u;
            goto label_38a7d0;
        }
    }
    ctx->pc = 0x38A728u;
label_38a728:
    // 0x38a728: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x38a728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_38a72c:
    // 0x38a72c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x38a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_38a730:
    // 0x38a730: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x38a730u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_38a734:
    // 0x38a734: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
label_38a738:
    if (ctx->pc == 0x38A738u) {
        ctx->pc = 0x38A73Cu;
        goto label_38a73c;
    }
    ctx->pc = 0x38A734u;
    {
        const bool branch_taken_0x38a734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38a734) {
            ctx->pc = 0x38A7CCu;
            goto label_38a7cc;
        }
    }
    ctx->pc = 0x38A73Cu;
label_38a73c:
    // 0x38a73c: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x38a73cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_38a740:
    // 0x38a740: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x38a740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_38a744:
    // 0x38a744: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x38a744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_38a748:
    // 0x38a748: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38a748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a74c:
    // 0x38a74c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x38a74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38a750:
    // 0x38a750: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38a750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38a754:
    // 0x38a754: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x38a754u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_38a758:
    // 0x38a758: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38a758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38a75c:
    // 0x38a75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a760:
    // 0x38a760: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x38a760u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38a764:
    // 0x38a764: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x38a764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_38a768:
    // 0x38a768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38a76c:
    // 0x38a76c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x38a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_38a770:
    // 0x38a770: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x38a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_38a774:
    // 0x38a774: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x38a774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_38a778:
    // 0x38a778: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x38a778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_38a77c:
    // 0x38a77c: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x38a77cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_38a780:
    // 0x38a780: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x38a780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_38a784:
    // 0x38a784: 0x320f809  jalr        $t9
label_38a788:
    if (ctx->pc == 0x38A788u) {
        ctx->pc = 0x38A788u;
            // 0x38a788: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x38A78Cu;
        goto label_38a78c;
    }
    ctx->pc = 0x38A784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A78Cu);
        ctx->pc = 0x38A788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A784u;
            // 0x38a788: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A78Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A78Cu; }
            if (ctx->pc != 0x38A78Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38A78Cu;
label_38a78c:
    // 0x38a78c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x38a78cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_38a790:
    // 0x38a790: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x38a790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_38a794:
    // 0x38a794: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x38a794u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_38a798:
    // 0x38a798: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38a798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38a79c:
    // 0x38a79c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x38a79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_38a7a0:
    // 0x38a7a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a7a4:
    // 0x38a7a4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x38a7a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_38a7a8:
    // 0x38a7a8: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x38a7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_38a7ac:
    // 0x38a7ac: 0x320f809  jalr        $t9
label_38a7b0:
    if (ctx->pc == 0x38A7B0u) {
        ctx->pc = 0x38A7B0u;
            // 0x38a7b0: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x38A7B4u;
        goto label_38a7b4;
    }
    ctx->pc = 0x38A7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A7B4u);
        ctx->pc = 0x38A7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A7ACu;
            // 0x38a7b0: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A7B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A7B4u; }
            if (ctx->pc != 0x38A7B4u) { return; }
        }
        }
    }
    ctx->pc = 0x38A7B4u;
label_38a7b4:
    // 0x38a7b4: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x38a7b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_38a7b8:
    // 0x38a7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a7bc:
    // 0x38a7bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x38a7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_38a7c0:
    // 0x38a7c0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x38a7c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_38a7c4:
    // 0x38a7c4: 0x320f809  jalr        $t9
label_38a7c8:
    if (ctx->pc == 0x38A7C8u) {
        ctx->pc = 0x38A7C8u;
            // 0x38a7c8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38A7CCu;
        goto label_38a7cc;
    }
    ctx->pc = 0x38A7C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A7CCu);
        ctx->pc = 0x38A7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A7C4u;
            // 0x38a7c8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A7CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A7CCu; }
            if (ctx->pc != 0x38A7CCu) { return; }
        }
        }
    }
    ctx->pc = 0x38A7CCu;
label_38a7cc:
    // 0x38a7cc: 0x3c033eed  lui         $v1, 0x3EED
    ctx->pc = 0x38a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
label_38a7d0:
    // 0x38a7d0: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x38a7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_38a7d4:
    // 0x38a7d4: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x38a7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38a7d8:
    // 0x38a7d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38a7d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a7dc:
    // 0x38a7dc: 0x0  nop
    ctx->pc = 0x38a7dcu;
    // NOP
label_38a7e0:
    // 0x38a7e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38a7e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38a7e4:
    // 0x38a7e4: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_38a7e8:
    if (ctx->pc == 0x38A7E8u) {
        ctx->pc = 0x38A7E8u;
            // 0x38a7e8: 0x3c033e6d  lui         $v1, 0x3E6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
        ctx->pc = 0x38A7ECu;
        goto label_38a7ec;
    }
    ctx->pc = 0x38A7E4u;
    {
        const bool branch_taken_0x38a7e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38a7e4) {
            ctx->pc = 0x38A7E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A7E4u;
            // 0x38a7e8: 0x3c033e6d  lui         $v1, 0x3E6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A808u;
            goto label_38a808;
        }
    }
    ctx->pc = 0x38A7ECu;
label_38a7ec:
    // 0x38a7ec: 0x3c033e6d  lui         $v1, 0x3E6D
    ctx->pc = 0x38a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
label_38a7f0:
    // 0x38a7f0: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x38a7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_38a7f4:
    // 0x38a7f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38a7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a7f8:
    // 0x38a7f8: 0x0  nop
    ctx->pc = 0x38a7f8u;
    // NOP
label_38a7fc:
    // 0x38a7fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x38a7fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38a800:
    // 0x38a800: 0x10000008  b           . + 4 + (0x8 << 2)
label_38a804:
    if (ctx->pc == 0x38A804u) {
        ctx->pc = 0x38A804u;
            // 0x38a804: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->pc = 0x38A808u;
        goto label_38a808;
    }
    ctx->pc = 0x38A800u;
    {
        const bool branch_taken_0x38a800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A800u;
            // 0x38a804: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a800) {
            ctx->pc = 0x38A824u;
            goto label_38a824;
        }
    }
    ctx->pc = 0x38A808u;
label_38a808:
    // 0x38a808: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x38a808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_38a80c:
    // 0x38a80c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38a80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a810:
    // 0x38a810: 0x0  nop
    ctx->pc = 0x38a810u;
    // NOP
label_38a814:
    // 0x38a814: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38a814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38a818:
    // 0x38a818: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_38a81c:
    if (ctx->pc == 0x38A81Cu) {
        ctx->pc = 0x38A820u;
        goto label_38a820;
    }
    ctx->pc = 0x38A818u;
    {
        const bool branch_taken_0x38a818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38a818) {
            ctx->pc = 0x38A824u;
            goto label_38a824;
        }
    }
    ctx->pc = 0x38A820u;
label_38a820:
    // 0x38a820: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x38a820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_38a824:
    // 0x38a824: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x38a824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_38a828:
    // 0x38a828: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38a828u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38a82c:
    // 0x38a82c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38a82cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38a830:
    // 0x38a830: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38a830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38a834:
    // 0x38a834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38a834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38a838:
    // 0x38a838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38a838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38a83c:
    // 0x38a83c: 0x3e00008  jr          $ra
label_38a840:
    if (ctx->pc == 0x38A840u) {
        ctx->pc = 0x38A840u;
            // 0x38a840: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x38A844u;
        goto label_38a844;
    }
    ctx->pc = 0x38A83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A83Cu;
            // 0x38a840: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38A844u;
label_38a844:
    // 0x38a844: 0x0  nop
    ctx->pc = 0x38a844u;
    // NOP
label_38a848:
    // 0x38a848: 0x0  nop
    ctx->pc = 0x38a848u;
    // NOP
label_38a84c:
    // 0x38a84c: 0x0  nop
    ctx->pc = 0x38a84cu;
    // NOP
}
