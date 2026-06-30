#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DF3B0
// Address: 0x4df3b0 - 0x4df820
void sub_004DF3B0_0x4df3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF3B0_0x4df3b0");
#endif

    switch (ctx->pc) {
        case 0x4df3b0u: goto label_4df3b0;
        case 0x4df3b4u: goto label_4df3b4;
        case 0x4df3b8u: goto label_4df3b8;
        case 0x4df3bcu: goto label_4df3bc;
        case 0x4df3c0u: goto label_4df3c0;
        case 0x4df3c4u: goto label_4df3c4;
        case 0x4df3c8u: goto label_4df3c8;
        case 0x4df3ccu: goto label_4df3cc;
        case 0x4df3d0u: goto label_4df3d0;
        case 0x4df3d4u: goto label_4df3d4;
        case 0x4df3d8u: goto label_4df3d8;
        case 0x4df3dcu: goto label_4df3dc;
        case 0x4df3e0u: goto label_4df3e0;
        case 0x4df3e4u: goto label_4df3e4;
        case 0x4df3e8u: goto label_4df3e8;
        case 0x4df3ecu: goto label_4df3ec;
        case 0x4df3f0u: goto label_4df3f0;
        case 0x4df3f4u: goto label_4df3f4;
        case 0x4df3f8u: goto label_4df3f8;
        case 0x4df3fcu: goto label_4df3fc;
        case 0x4df400u: goto label_4df400;
        case 0x4df404u: goto label_4df404;
        case 0x4df408u: goto label_4df408;
        case 0x4df40cu: goto label_4df40c;
        case 0x4df410u: goto label_4df410;
        case 0x4df414u: goto label_4df414;
        case 0x4df418u: goto label_4df418;
        case 0x4df41cu: goto label_4df41c;
        case 0x4df420u: goto label_4df420;
        case 0x4df424u: goto label_4df424;
        case 0x4df428u: goto label_4df428;
        case 0x4df42cu: goto label_4df42c;
        case 0x4df430u: goto label_4df430;
        case 0x4df434u: goto label_4df434;
        case 0x4df438u: goto label_4df438;
        case 0x4df43cu: goto label_4df43c;
        case 0x4df440u: goto label_4df440;
        case 0x4df444u: goto label_4df444;
        case 0x4df448u: goto label_4df448;
        case 0x4df44cu: goto label_4df44c;
        case 0x4df450u: goto label_4df450;
        case 0x4df454u: goto label_4df454;
        case 0x4df458u: goto label_4df458;
        case 0x4df45cu: goto label_4df45c;
        case 0x4df460u: goto label_4df460;
        case 0x4df464u: goto label_4df464;
        case 0x4df468u: goto label_4df468;
        case 0x4df46cu: goto label_4df46c;
        case 0x4df470u: goto label_4df470;
        case 0x4df474u: goto label_4df474;
        case 0x4df478u: goto label_4df478;
        case 0x4df47cu: goto label_4df47c;
        case 0x4df480u: goto label_4df480;
        case 0x4df484u: goto label_4df484;
        case 0x4df488u: goto label_4df488;
        case 0x4df48cu: goto label_4df48c;
        case 0x4df490u: goto label_4df490;
        case 0x4df494u: goto label_4df494;
        case 0x4df498u: goto label_4df498;
        case 0x4df49cu: goto label_4df49c;
        case 0x4df4a0u: goto label_4df4a0;
        case 0x4df4a4u: goto label_4df4a4;
        case 0x4df4a8u: goto label_4df4a8;
        case 0x4df4acu: goto label_4df4ac;
        case 0x4df4b0u: goto label_4df4b0;
        case 0x4df4b4u: goto label_4df4b4;
        case 0x4df4b8u: goto label_4df4b8;
        case 0x4df4bcu: goto label_4df4bc;
        case 0x4df4c0u: goto label_4df4c0;
        case 0x4df4c4u: goto label_4df4c4;
        case 0x4df4c8u: goto label_4df4c8;
        case 0x4df4ccu: goto label_4df4cc;
        case 0x4df4d0u: goto label_4df4d0;
        case 0x4df4d4u: goto label_4df4d4;
        case 0x4df4d8u: goto label_4df4d8;
        case 0x4df4dcu: goto label_4df4dc;
        case 0x4df4e0u: goto label_4df4e0;
        case 0x4df4e4u: goto label_4df4e4;
        case 0x4df4e8u: goto label_4df4e8;
        case 0x4df4ecu: goto label_4df4ec;
        case 0x4df4f0u: goto label_4df4f0;
        case 0x4df4f4u: goto label_4df4f4;
        case 0x4df4f8u: goto label_4df4f8;
        case 0x4df4fcu: goto label_4df4fc;
        case 0x4df500u: goto label_4df500;
        case 0x4df504u: goto label_4df504;
        case 0x4df508u: goto label_4df508;
        case 0x4df50cu: goto label_4df50c;
        case 0x4df510u: goto label_4df510;
        case 0x4df514u: goto label_4df514;
        case 0x4df518u: goto label_4df518;
        case 0x4df51cu: goto label_4df51c;
        case 0x4df520u: goto label_4df520;
        case 0x4df524u: goto label_4df524;
        case 0x4df528u: goto label_4df528;
        case 0x4df52cu: goto label_4df52c;
        case 0x4df530u: goto label_4df530;
        case 0x4df534u: goto label_4df534;
        case 0x4df538u: goto label_4df538;
        case 0x4df53cu: goto label_4df53c;
        case 0x4df540u: goto label_4df540;
        case 0x4df544u: goto label_4df544;
        case 0x4df548u: goto label_4df548;
        case 0x4df54cu: goto label_4df54c;
        case 0x4df550u: goto label_4df550;
        case 0x4df554u: goto label_4df554;
        case 0x4df558u: goto label_4df558;
        case 0x4df55cu: goto label_4df55c;
        case 0x4df560u: goto label_4df560;
        case 0x4df564u: goto label_4df564;
        case 0x4df568u: goto label_4df568;
        case 0x4df56cu: goto label_4df56c;
        case 0x4df570u: goto label_4df570;
        case 0x4df574u: goto label_4df574;
        case 0x4df578u: goto label_4df578;
        case 0x4df57cu: goto label_4df57c;
        case 0x4df580u: goto label_4df580;
        case 0x4df584u: goto label_4df584;
        case 0x4df588u: goto label_4df588;
        case 0x4df58cu: goto label_4df58c;
        case 0x4df590u: goto label_4df590;
        case 0x4df594u: goto label_4df594;
        case 0x4df598u: goto label_4df598;
        case 0x4df59cu: goto label_4df59c;
        case 0x4df5a0u: goto label_4df5a0;
        case 0x4df5a4u: goto label_4df5a4;
        case 0x4df5a8u: goto label_4df5a8;
        case 0x4df5acu: goto label_4df5ac;
        case 0x4df5b0u: goto label_4df5b0;
        case 0x4df5b4u: goto label_4df5b4;
        case 0x4df5b8u: goto label_4df5b8;
        case 0x4df5bcu: goto label_4df5bc;
        case 0x4df5c0u: goto label_4df5c0;
        case 0x4df5c4u: goto label_4df5c4;
        case 0x4df5c8u: goto label_4df5c8;
        case 0x4df5ccu: goto label_4df5cc;
        case 0x4df5d0u: goto label_4df5d0;
        case 0x4df5d4u: goto label_4df5d4;
        case 0x4df5d8u: goto label_4df5d8;
        case 0x4df5dcu: goto label_4df5dc;
        case 0x4df5e0u: goto label_4df5e0;
        case 0x4df5e4u: goto label_4df5e4;
        case 0x4df5e8u: goto label_4df5e8;
        case 0x4df5ecu: goto label_4df5ec;
        case 0x4df5f0u: goto label_4df5f0;
        case 0x4df5f4u: goto label_4df5f4;
        case 0x4df5f8u: goto label_4df5f8;
        case 0x4df5fcu: goto label_4df5fc;
        case 0x4df600u: goto label_4df600;
        case 0x4df604u: goto label_4df604;
        case 0x4df608u: goto label_4df608;
        case 0x4df60cu: goto label_4df60c;
        case 0x4df610u: goto label_4df610;
        case 0x4df614u: goto label_4df614;
        case 0x4df618u: goto label_4df618;
        case 0x4df61cu: goto label_4df61c;
        case 0x4df620u: goto label_4df620;
        case 0x4df624u: goto label_4df624;
        case 0x4df628u: goto label_4df628;
        case 0x4df62cu: goto label_4df62c;
        case 0x4df630u: goto label_4df630;
        case 0x4df634u: goto label_4df634;
        case 0x4df638u: goto label_4df638;
        case 0x4df63cu: goto label_4df63c;
        case 0x4df640u: goto label_4df640;
        case 0x4df644u: goto label_4df644;
        case 0x4df648u: goto label_4df648;
        case 0x4df64cu: goto label_4df64c;
        case 0x4df650u: goto label_4df650;
        case 0x4df654u: goto label_4df654;
        case 0x4df658u: goto label_4df658;
        case 0x4df65cu: goto label_4df65c;
        case 0x4df660u: goto label_4df660;
        case 0x4df664u: goto label_4df664;
        case 0x4df668u: goto label_4df668;
        case 0x4df66cu: goto label_4df66c;
        case 0x4df670u: goto label_4df670;
        case 0x4df674u: goto label_4df674;
        case 0x4df678u: goto label_4df678;
        case 0x4df67cu: goto label_4df67c;
        case 0x4df680u: goto label_4df680;
        case 0x4df684u: goto label_4df684;
        case 0x4df688u: goto label_4df688;
        case 0x4df68cu: goto label_4df68c;
        case 0x4df690u: goto label_4df690;
        case 0x4df694u: goto label_4df694;
        case 0x4df698u: goto label_4df698;
        case 0x4df69cu: goto label_4df69c;
        case 0x4df6a0u: goto label_4df6a0;
        case 0x4df6a4u: goto label_4df6a4;
        case 0x4df6a8u: goto label_4df6a8;
        case 0x4df6acu: goto label_4df6ac;
        case 0x4df6b0u: goto label_4df6b0;
        case 0x4df6b4u: goto label_4df6b4;
        case 0x4df6b8u: goto label_4df6b8;
        case 0x4df6bcu: goto label_4df6bc;
        case 0x4df6c0u: goto label_4df6c0;
        case 0x4df6c4u: goto label_4df6c4;
        case 0x4df6c8u: goto label_4df6c8;
        case 0x4df6ccu: goto label_4df6cc;
        case 0x4df6d0u: goto label_4df6d0;
        case 0x4df6d4u: goto label_4df6d4;
        case 0x4df6d8u: goto label_4df6d8;
        case 0x4df6dcu: goto label_4df6dc;
        case 0x4df6e0u: goto label_4df6e0;
        case 0x4df6e4u: goto label_4df6e4;
        case 0x4df6e8u: goto label_4df6e8;
        case 0x4df6ecu: goto label_4df6ec;
        case 0x4df6f0u: goto label_4df6f0;
        case 0x4df6f4u: goto label_4df6f4;
        case 0x4df6f8u: goto label_4df6f8;
        case 0x4df6fcu: goto label_4df6fc;
        case 0x4df700u: goto label_4df700;
        case 0x4df704u: goto label_4df704;
        case 0x4df708u: goto label_4df708;
        case 0x4df70cu: goto label_4df70c;
        case 0x4df710u: goto label_4df710;
        case 0x4df714u: goto label_4df714;
        case 0x4df718u: goto label_4df718;
        case 0x4df71cu: goto label_4df71c;
        case 0x4df720u: goto label_4df720;
        case 0x4df724u: goto label_4df724;
        case 0x4df728u: goto label_4df728;
        case 0x4df72cu: goto label_4df72c;
        case 0x4df730u: goto label_4df730;
        case 0x4df734u: goto label_4df734;
        case 0x4df738u: goto label_4df738;
        case 0x4df73cu: goto label_4df73c;
        case 0x4df740u: goto label_4df740;
        case 0x4df744u: goto label_4df744;
        case 0x4df748u: goto label_4df748;
        case 0x4df74cu: goto label_4df74c;
        case 0x4df750u: goto label_4df750;
        case 0x4df754u: goto label_4df754;
        case 0x4df758u: goto label_4df758;
        case 0x4df75cu: goto label_4df75c;
        case 0x4df760u: goto label_4df760;
        case 0x4df764u: goto label_4df764;
        case 0x4df768u: goto label_4df768;
        case 0x4df76cu: goto label_4df76c;
        case 0x4df770u: goto label_4df770;
        case 0x4df774u: goto label_4df774;
        case 0x4df778u: goto label_4df778;
        case 0x4df77cu: goto label_4df77c;
        case 0x4df780u: goto label_4df780;
        case 0x4df784u: goto label_4df784;
        case 0x4df788u: goto label_4df788;
        case 0x4df78cu: goto label_4df78c;
        case 0x4df790u: goto label_4df790;
        case 0x4df794u: goto label_4df794;
        case 0x4df798u: goto label_4df798;
        case 0x4df79cu: goto label_4df79c;
        case 0x4df7a0u: goto label_4df7a0;
        case 0x4df7a4u: goto label_4df7a4;
        case 0x4df7a8u: goto label_4df7a8;
        case 0x4df7acu: goto label_4df7ac;
        case 0x4df7b0u: goto label_4df7b0;
        case 0x4df7b4u: goto label_4df7b4;
        case 0x4df7b8u: goto label_4df7b8;
        case 0x4df7bcu: goto label_4df7bc;
        case 0x4df7c0u: goto label_4df7c0;
        case 0x4df7c4u: goto label_4df7c4;
        case 0x4df7c8u: goto label_4df7c8;
        case 0x4df7ccu: goto label_4df7cc;
        case 0x4df7d0u: goto label_4df7d0;
        case 0x4df7d4u: goto label_4df7d4;
        case 0x4df7d8u: goto label_4df7d8;
        case 0x4df7dcu: goto label_4df7dc;
        case 0x4df7e0u: goto label_4df7e0;
        case 0x4df7e4u: goto label_4df7e4;
        case 0x4df7e8u: goto label_4df7e8;
        case 0x4df7ecu: goto label_4df7ec;
        case 0x4df7f0u: goto label_4df7f0;
        case 0x4df7f4u: goto label_4df7f4;
        case 0x4df7f8u: goto label_4df7f8;
        case 0x4df7fcu: goto label_4df7fc;
        case 0x4df800u: goto label_4df800;
        case 0x4df804u: goto label_4df804;
        case 0x4df808u: goto label_4df808;
        case 0x4df80cu: goto label_4df80c;
        case 0x4df810u: goto label_4df810;
        case 0x4df814u: goto label_4df814;
        case 0x4df818u: goto label_4df818;
        case 0x4df81cu: goto label_4df81c;
        default: break;
    }

    ctx->pc = 0x4df3b0u;

label_4df3b0:
    // 0x4df3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4df3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4df3b4:
    // 0x4df3b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4df3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4df3b8:
    // 0x4df3b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4df3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4df3bc:
    // 0x4df3bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4df3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4df3c0:
    // 0x4df3c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4df3c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4df3c4:
    // 0x4df3c4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4df3c8:
    if (ctx->pc == 0x4DF3C8u) {
        ctx->pc = 0x4DF3C8u;
            // 0x4df3c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF3CCu;
        goto label_4df3cc;
    }
    ctx->pc = 0x4DF3C4u;
    {
        const bool branch_taken_0x4df3c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF3C4u;
            // 0x4df3c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df3c4) {
            ctx->pc = 0x4DF4F8u;
            goto label_4df4f8;
        }
    }
    ctx->pc = 0x4DF3CCu;
label_4df3cc:
    // 0x4df3cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4df3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4df3d0:
    // 0x4df3d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4df3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4df3d4:
    // 0x4df3d4: 0x24633210  addiu       $v1, $v1, 0x3210
    ctx->pc = 0x4df3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12816));
label_4df3d8:
    // 0x4df3d8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4df3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4df3dc:
    // 0x4df3dc: 0x24423248  addiu       $v0, $v0, 0x3248
    ctx->pc = 0x4df3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12872));
label_4df3e0:
    // 0x4df3e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4df3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4df3e4:
    // 0x4df3e4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4df3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4df3e8:
    // 0x4df3e8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4df3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4df3ec:
    // 0x4df3ec: 0xc0407c0  jal         func_101F00
label_4df3f0:
    if (ctx->pc == 0x4DF3F0u) {
        ctx->pc = 0x4DF3F0u;
            // 0x4df3f0: 0x24a5f510  addiu       $a1, $a1, -0xAF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964496));
        ctx->pc = 0x4DF3F4u;
        goto label_4df3f4;
    }
    ctx->pc = 0x4DF3ECu;
    SET_GPR_U32(ctx, 31, 0x4DF3F4u);
    ctx->pc = 0x4DF3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF3ECu;
            // 0x4df3f0: 0x24a5f510  addiu       $a1, $a1, -0xAF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF3F4u; }
        if (ctx->pc != 0x4DF3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF3F4u; }
        if (ctx->pc != 0x4DF3F4u) { return; }
    }
    ctx->pc = 0x4DF3F4u;
label_4df3f4:
    // 0x4df3f4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4df3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4df3f8:
    // 0x4df3f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4df3fc:
    if (ctx->pc == 0x4DF3FCu) {
        ctx->pc = 0x4DF3FCu;
            // 0x4df3fc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4DF400u;
        goto label_4df400;
    }
    ctx->pc = 0x4DF3F8u;
    {
        const bool branch_taken_0x4df3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df3f8) {
            ctx->pc = 0x4DF3FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF3F8u;
            // 0x4df3fc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DF40Cu;
            goto label_4df40c;
        }
    }
    ctx->pc = 0x4DF400u;
label_4df400:
    // 0x4df400: 0xc07507c  jal         func_1D41F0
label_4df404:
    if (ctx->pc == 0x4DF404u) {
        ctx->pc = 0x4DF404u;
            // 0x4df404: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4DF408u;
        goto label_4df408;
    }
    ctx->pc = 0x4DF400u;
    SET_GPR_U32(ctx, 31, 0x4DF408u);
    ctx->pc = 0x4DF404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF400u;
            // 0x4df404: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF408u; }
        if (ctx->pc != 0x4DF408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF408u; }
        if (ctx->pc != 0x4DF408u) { return; }
    }
    ctx->pc = 0x4DF408u;
label_4df408:
    // 0x4df408: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4df408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4df40c:
    // 0x4df40c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4df410:
    if (ctx->pc == 0x4DF410u) {
        ctx->pc = 0x4DF410u;
            // 0x4df410: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4DF414u;
        goto label_4df414;
    }
    ctx->pc = 0x4DF40Cu;
    {
        const bool branch_taken_0x4df40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df40c) {
            ctx->pc = 0x4DF410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF40Cu;
            // 0x4df410: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DF43Cu;
            goto label_4df43c;
        }
    }
    ctx->pc = 0x4DF414u;
label_4df414:
    // 0x4df414: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4df418:
    if (ctx->pc == 0x4DF418u) {
        ctx->pc = 0x4DF41Cu;
        goto label_4df41c;
    }
    ctx->pc = 0x4DF414u;
    {
        const bool branch_taken_0x4df414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df414) {
            ctx->pc = 0x4DF438u;
            goto label_4df438;
        }
    }
    ctx->pc = 0x4DF41Cu;
label_4df41c:
    // 0x4df41c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4df420:
    if (ctx->pc == 0x4DF420u) {
        ctx->pc = 0x4DF424u;
        goto label_4df424;
    }
    ctx->pc = 0x4DF41Cu;
    {
        const bool branch_taken_0x4df41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df41c) {
            ctx->pc = 0x4DF438u;
            goto label_4df438;
        }
    }
    ctx->pc = 0x4DF424u;
label_4df424:
    // 0x4df424: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4df424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4df428:
    // 0x4df428: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4df42c:
    if (ctx->pc == 0x4DF42Cu) {
        ctx->pc = 0x4DF430u;
        goto label_4df430;
    }
    ctx->pc = 0x4DF428u;
    {
        const bool branch_taken_0x4df428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df428) {
            ctx->pc = 0x4DF438u;
            goto label_4df438;
        }
    }
    ctx->pc = 0x4DF430u;
label_4df430:
    // 0x4df430: 0xc0400a8  jal         func_1002A0
label_4df434:
    if (ctx->pc == 0x4DF434u) {
        ctx->pc = 0x4DF438u;
        goto label_4df438;
    }
    ctx->pc = 0x4DF430u;
    SET_GPR_U32(ctx, 31, 0x4DF438u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF438u; }
        if (ctx->pc != 0x4DF438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF438u; }
        if (ctx->pc != 0x4DF438u) { return; }
    }
    ctx->pc = 0x4DF438u;
label_4df438:
    // 0x4df438: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4df438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4df43c:
    // 0x4df43c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4df440:
    if (ctx->pc == 0x4DF440u) {
        ctx->pc = 0x4DF440u;
            // 0x4df440: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4DF444u;
        goto label_4df444;
    }
    ctx->pc = 0x4DF43Cu;
    {
        const bool branch_taken_0x4df43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df43c) {
            ctx->pc = 0x4DF440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF43Cu;
            // 0x4df440: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DF46Cu;
            goto label_4df46c;
        }
    }
    ctx->pc = 0x4DF444u;
label_4df444:
    // 0x4df444: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4df448:
    if (ctx->pc == 0x4DF448u) {
        ctx->pc = 0x4DF44Cu;
        goto label_4df44c;
    }
    ctx->pc = 0x4DF444u;
    {
        const bool branch_taken_0x4df444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df444) {
            ctx->pc = 0x4DF468u;
            goto label_4df468;
        }
    }
    ctx->pc = 0x4DF44Cu;
label_4df44c:
    // 0x4df44c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4df450:
    if (ctx->pc == 0x4DF450u) {
        ctx->pc = 0x4DF454u;
        goto label_4df454;
    }
    ctx->pc = 0x4DF44Cu;
    {
        const bool branch_taken_0x4df44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df44c) {
            ctx->pc = 0x4DF468u;
            goto label_4df468;
        }
    }
    ctx->pc = 0x4DF454u;
label_4df454:
    // 0x4df454: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4df454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4df458:
    // 0x4df458: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4df45c:
    if (ctx->pc == 0x4DF45Cu) {
        ctx->pc = 0x4DF460u;
        goto label_4df460;
    }
    ctx->pc = 0x4DF458u;
    {
        const bool branch_taken_0x4df458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df458) {
            ctx->pc = 0x4DF468u;
            goto label_4df468;
        }
    }
    ctx->pc = 0x4DF460u;
label_4df460:
    // 0x4df460: 0xc0400a8  jal         func_1002A0
label_4df464:
    if (ctx->pc == 0x4DF464u) {
        ctx->pc = 0x4DF468u;
        goto label_4df468;
    }
    ctx->pc = 0x4DF460u;
    SET_GPR_U32(ctx, 31, 0x4DF468u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF468u; }
        if (ctx->pc != 0x4DF468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF468u; }
        if (ctx->pc != 0x4DF468u) { return; }
    }
    ctx->pc = 0x4DF468u;
label_4df468:
    // 0x4df468: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4df468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4df46c:
    // 0x4df46c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4df470:
    if (ctx->pc == 0x4DF470u) {
        ctx->pc = 0x4DF474u;
        goto label_4df474;
    }
    ctx->pc = 0x4DF46Cu;
    {
        const bool branch_taken_0x4df46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df46c) {
            ctx->pc = 0x4DF488u;
            goto label_4df488;
        }
    }
    ctx->pc = 0x4DF474u;
label_4df474:
    // 0x4df474: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4df474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4df478:
    // 0x4df478: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4df478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4df47c:
    // 0x4df47c: 0x246331f8  addiu       $v1, $v1, 0x31F8
    ctx->pc = 0x4df47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12792));
label_4df480:
    // 0x4df480: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4df480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4df484:
    // 0x4df484: 0xac40aa80  sw          $zero, -0x5580($v0)
    ctx->pc = 0x4df484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945408), GPR_U32(ctx, 0));
label_4df488:
    // 0x4df488: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4df48c:
    if (ctx->pc == 0x4DF48Cu) {
        ctx->pc = 0x4DF48Cu;
            // 0x4df48c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4DF490u;
        goto label_4df490;
    }
    ctx->pc = 0x4DF488u;
    {
        const bool branch_taken_0x4df488 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df488) {
            ctx->pc = 0x4DF48Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF488u;
            // 0x4df48c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DF4E4u;
            goto label_4df4e4;
        }
    }
    ctx->pc = 0x4DF490u;
label_4df490:
    // 0x4df490: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4df490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4df494:
    // 0x4df494: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4df494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4df498:
    // 0x4df498: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4df498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4df49c:
    // 0x4df49c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4df49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4df4a0:
    // 0x4df4a0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4df4a4:
    if (ctx->pc == 0x4DF4A4u) {
        ctx->pc = 0x4DF4A4u;
            // 0x4df4a4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4DF4A8u;
        goto label_4df4a8;
    }
    ctx->pc = 0x4DF4A0u;
    {
        const bool branch_taken_0x4df4a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df4a0) {
            ctx->pc = 0x4DF4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF4A0u;
            // 0x4df4a4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DF4BCu;
            goto label_4df4bc;
        }
    }
    ctx->pc = 0x4DF4A8u;
label_4df4a8:
    // 0x4df4a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4df4a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4df4ac:
    // 0x4df4ac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4df4acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4df4b0:
    // 0x4df4b0: 0x320f809  jalr        $t9
label_4df4b4:
    if (ctx->pc == 0x4DF4B4u) {
        ctx->pc = 0x4DF4B4u;
            // 0x4df4b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DF4B8u;
        goto label_4df4b8;
    }
    ctx->pc = 0x4DF4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DF4B8u);
        ctx->pc = 0x4DF4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF4B0u;
            // 0x4df4b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DF4B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DF4B8u; }
            if (ctx->pc != 0x4DF4B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4DF4B8u;
label_4df4b8:
    // 0x4df4b8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4df4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4df4bc:
    // 0x4df4bc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4df4c0:
    if (ctx->pc == 0x4DF4C0u) {
        ctx->pc = 0x4DF4C0u;
            // 0x4df4c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF4C4u;
        goto label_4df4c4;
    }
    ctx->pc = 0x4DF4BCu;
    {
        const bool branch_taken_0x4df4bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df4bc) {
            ctx->pc = 0x4DF4C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF4BCu;
            // 0x4df4c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DF4D8u;
            goto label_4df4d8;
        }
    }
    ctx->pc = 0x4DF4C4u;
label_4df4c4:
    // 0x4df4c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4df4c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4df4c8:
    // 0x4df4c8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4df4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4df4cc:
    // 0x4df4cc: 0x320f809  jalr        $t9
label_4df4d0:
    if (ctx->pc == 0x4DF4D0u) {
        ctx->pc = 0x4DF4D0u;
            // 0x4df4d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DF4D4u;
        goto label_4df4d4;
    }
    ctx->pc = 0x4DF4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DF4D4u);
        ctx->pc = 0x4DF4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF4CCu;
            // 0x4df4d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DF4D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DF4D4u; }
            if (ctx->pc != 0x4DF4D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4DF4D4u;
label_4df4d4:
    // 0x4df4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4df4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4df4d8:
    // 0x4df4d8: 0xc075bf8  jal         func_1D6FE0
label_4df4dc:
    if (ctx->pc == 0x4DF4DCu) {
        ctx->pc = 0x4DF4DCu;
            // 0x4df4dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF4E0u;
        goto label_4df4e0;
    }
    ctx->pc = 0x4DF4D8u;
    SET_GPR_U32(ctx, 31, 0x4DF4E0u);
    ctx->pc = 0x4DF4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF4D8u;
            // 0x4df4dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF4E0u; }
        if (ctx->pc != 0x4DF4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF4E0u; }
        if (ctx->pc != 0x4DF4E0u) { return; }
    }
    ctx->pc = 0x4DF4E0u;
label_4df4e0:
    // 0x4df4e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4df4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4df4e4:
    // 0x4df4e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4df4e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4df4e8:
    // 0x4df4e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4df4ec:
    if (ctx->pc == 0x4DF4ECu) {
        ctx->pc = 0x4DF4ECu;
            // 0x4df4ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF4F0u;
        goto label_4df4f0;
    }
    ctx->pc = 0x4DF4E8u;
    {
        const bool branch_taken_0x4df4e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4df4e8) {
            ctx->pc = 0x4DF4ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF4E8u;
            // 0x4df4ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DF4FCu;
            goto label_4df4fc;
        }
    }
    ctx->pc = 0x4DF4F0u;
label_4df4f0:
    // 0x4df4f0: 0xc0400a8  jal         func_1002A0
label_4df4f4:
    if (ctx->pc == 0x4DF4F4u) {
        ctx->pc = 0x4DF4F4u;
            // 0x4df4f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF4F8u;
        goto label_4df4f8;
    }
    ctx->pc = 0x4DF4F0u;
    SET_GPR_U32(ctx, 31, 0x4DF4F8u);
    ctx->pc = 0x4DF4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF4F0u;
            // 0x4df4f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF4F8u; }
        if (ctx->pc != 0x4DF4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF4F8u; }
        if (ctx->pc != 0x4DF4F8u) { return; }
    }
    ctx->pc = 0x4DF4F8u;
label_4df4f8:
    // 0x4df4f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4df4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4df4fc:
    // 0x4df4fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4df4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4df500:
    // 0x4df500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4df500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4df504:
    // 0x4df504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4df504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4df508:
    // 0x4df508: 0x3e00008  jr          $ra
label_4df50c:
    if (ctx->pc == 0x4DF50Cu) {
        ctx->pc = 0x4DF50Cu;
            // 0x4df50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DF510u;
        goto label_4df510;
    }
    ctx->pc = 0x4DF508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF508u;
            // 0x4df50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DF510u;
label_4df510:
    // 0x4df510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4df510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4df514:
    // 0x4df514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4df514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4df518:
    // 0x4df518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4df518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4df51c:
    // 0x4df51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4df51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4df520:
    // 0x4df520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4df520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4df524:
    // 0x4df524: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_4df528:
    if (ctx->pc == 0x4DF528u) {
        ctx->pc = 0x4DF528u;
            // 0x4df528: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF52Cu;
        goto label_4df52c;
    }
    ctx->pc = 0x4DF524u;
    {
        const bool branch_taken_0x4df524 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF524u;
            // 0x4df528: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df524) {
            ctx->pc = 0x4DF578u;
            goto label_4df578;
        }
    }
    ctx->pc = 0x4DF52Cu;
label_4df52c:
    // 0x4df52c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4df52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4df530:
    // 0x4df530: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4df530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4df534:
    // 0x4df534: 0x246332b0  addiu       $v1, $v1, 0x32B0
    ctx->pc = 0x4df534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12976));
label_4df538:
    // 0x4df538: 0x244232f0  addiu       $v0, $v0, 0x32F0
    ctx->pc = 0x4df538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13040));
label_4df53c:
    // 0x4df53c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4df53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4df540:
    // 0x4df540: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4df540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4df544:
    // 0x4df544: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4df544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4df548:
    // 0x4df548: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4df548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4df54c:
    // 0x4df54c: 0x320f809  jalr        $t9
label_4df550:
    if (ctx->pc == 0x4DF550u) {
        ctx->pc = 0x4DF554u;
        goto label_4df554;
    }
    ctx->pc = 0x4DF54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DF554u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DF554u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DF554u; }
            if (ctx->pc != 0x4DF554u) { return; }
        }
        }
    }
    ctx->pc = 0x4DF554u;
label_4df554:
    // 0x4df554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4df554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4df558:
    // 0x4df558: 0xc12e684  jal         func_4B9A10
label_4df55c:
    if (ctx->pc == 0x4DF55Cu) {
        ctx->pc = 0x4DF55Cu;
            // 0x4df55c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF560u;
        goto label_4df560;
    }
    ctx->pc = 0x4DF558u;
    SET_GPR_U32(ctx, 31, 0x4DF560u);
    ctx->pc = 0x4DF55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF558u;
            // 0x4df55c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF560u; }
        if (ctx->pc != 0x4DF560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF560u; }
        if (ctx->pc != 0x4DF560u) { return; }
    }
    ctx->pc = 0x4DF560u;
label_4df560:
    // 0x4df560: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4df560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4df564:
    // 0x4df564: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4df564u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4df568:
    // 0x4df568: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4df56c:
    if (ctx->pc == 0x4DF56Cu) {
        ctx->pc = 0x4DF56Cu;
            // 0x4df56c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF570u;
        goto label_4df570;
    }
    ctx->pc = 0x4DF568u;
    {
        const bool branch_taken_0x4df568 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4df568) {
            ctx->pc = 0x4DF56Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF568u;
            // 0x4df56c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DF57Cu;
            goto label_4df57c;
        }
    }
    ctx->pc = 0x4DF570u;
label_4df570:
    // 0x4df570: 0xc0400a8  jal         func_1002A0
label_4df574:
    if (ctx->pc == 0x4DF574u) {
        ctx->pc = 0x4DF574u;
            // 0x4df574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF578u;
        goto label_4df578;
    }
    ctx->pc = 0x4DF570u;
    SET_GPR_U32(ctx, 31, 0x4DF578u);
    ctx->pc = 0x4DF574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF570u;
            // 0x4df574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF578u; }
        if (ctx->pc != 0x4DF578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF578u; }
        if (ctx->pc != 0x4DF578u) { return; }
    }
    ctx->pc = 0x4DF578u;
label_4df578:
    // 0x4df578: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4df578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4df57c:
    // 0x4df57c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4df57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4df580:
    // 0x4df580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4df580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4df584:
    // 0x4df584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4df584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4df588:
    // 0x4df588: 0x3e00008  jr          $ra
label_4df58c:
    if (ctx->pc == 0x4DF58Cu) {
        ctx->pc = 0x4DF58Cu;
            // 0x4df58c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DF590u;
        goto label_4df590;
    }
    ctx->pc = 0x4DF588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF588u;
            // 0x4df58c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DF590u;
label_4df590:
    // 0x4df590: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x4df590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_4df594:
    // 0x4df594: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4df594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4df598:
    // 0x4df598: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4df598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4df59c:
    // 0x4df59c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4df59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4df5a0:
    // 0x4df5a0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4df5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4df5a4:
    // 0x4df5a4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4df5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4df5a8:
    // 0x4df5a8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4df5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4df5ac:
    // 0x4df5ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4df5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4df5b0:
    // 0x4df5b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4df5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4df5b4:
    // 0x4df5b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4df5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4df5b8:
    // 0x4df5b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4df5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4df5bc:
    // 0x4df5bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4df5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4df5c0:
    // 0x4df5c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4df5c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4df5c4:
    // 0x4df5c4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4df5c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4df5c8:
    // 0x4df5c8: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_4df5cc:
    if (ctx->pc == 0x4DF5CCu) {
        ctx->pc = 0x4DF5CCu;
            // 0x4df5cc: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF5D0u;
        goto label_4df5d0;
    }
    ctx->pc = 0x4DF5C8u;
    {
        const bool branch_taken_0x4df5c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4DF5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF5C8u;
            // 0x4df5cc: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df5c8) {
            ctx->pc = 0x4DF62Cu;
            goto label_4df62c;
        }
    }
    ctx->pc = 0x4DF5D0u;
label_4df5d0:
    // 0x4df5d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4df5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4df5d4:
    // 0x4df5d4: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_4df5d8:
    if (ctx->pc == 0x4DF5D8u) {
        ctx->pc = 0x4DF5D8u;
            // 0x4df5d8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4DF5DCu;
        goto label_4df5dc;
    }
    ctx->pc = 0x4DF5D4u;
    {
        const bool branch_taken_0x4df5d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4df5d4) {
            ctx->pc = 0x4DF5D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF5D4u;
            // 0x4df5d8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DF618u;
            goto label_4df618;
        }
    }
    ctx->pc = 0x4DF5DCu;
label_4df5dc:
    // 0x4df5dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4df5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4df5e0:
    // 0x4df5e0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4df5e4:
    if (ctx->pc == 0x4DF5E4u) {
        ctx->pc = 0x4DF5E8u;
        goto label_4df5e8;
    }
    ctx->pc = 0x4DF5E0u;
    {
        const bool branch_taken_0x4df5e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4df5e0) {
            ctx->pc = 0x4DF5F0u;
            goto label_4df5f0;
        }
    }
    ctx->pc = 0x4DF5E8u;
label_4df5e8:
    // 0x4df5e8: 0x1000007f  b           . + 4 + (0x7F << 2)
label_4df5ec:
    if (ctx->pc == 0x4DF5ECu) {
        ctx->pc = 0x4DF5ECu;
            // 0x4df5ec: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4DF5F0u;
        goto label_4df5f0;
    }
    ctx->pc = 0x4DF5E8u;
    {
        const bool branch_taken_0x4df5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF5E8u;
            // 0x4df5ec: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df5e8) {
            ctx->pc = 0x4DF7E8u;
            goto label_4df7e8;
        }
    }
    ctx->pc = 0x4DF5F0u;
label_4df5f0:
    // 0x4df5f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4df5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4df5f4:
    // 0x4df5f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4df5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4df5f8:
    // 0x4df5f8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4df5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4df5fc:
    // 0x4df5fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4df5fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4df600:
    // 0x4df600: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4df600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4df604:
    // 0x4df604: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4df604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4df608:
    // 0x4df608: 0x320f809  jalr        $t9
label_4df60c:
    if (ctx->pc == 0x4DF60Cu) {
        ctx->pc = 0x4DF60Cu;
            // 0x4df60c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4DF610u;
        goto label_4df610;
    }
    ctx->pc = 0x4DF608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DF610u);
        ctx->pc = 0x4DF60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF608u;
            // 0x4df60c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DF610u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DF610u; }
            if (ctx->pc != 0x4DF610u) { return; }
        }
        }
    }
    ctx->pc = 0x4DF610u;
label_4df610:
    // 0x4df610: 0x10000074  b           . + 4 + (0x74 << 2)
label_4df614:
    if (ctx->pc == 0x4DF614u) {
        ctx->pc = 0x4DF618u;
        goto label_4df618;
    }
    ctx->pc = 0x4DF610u;
    {
        const bool branch_taken_0x4df610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df610) {
            ctx->pc = 0x4DF7E4u;
            goto label_4df7e4;
        }
    }
    ctx->pc = 0x4DF618u;
label_4df618:
    // 0x4df618: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4df618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4df61c:
    // 0x4df61c: 0x320f809  jalr        $t9
label_4df620:
    if (ctx->pc == 0x4DF620u) {
        ctx->pc = 0x4DF624u;
        goto label_4df624;
    }
    ctx->pc = 0x4DF61Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DF624u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DF624u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DF624u; }
            if (ctx->pc != 0x4DF624u) { return; }
        }
        }
    }
    ctx->pc = 0x4DF624u;
label_4df624:
    // 0x4df624: 0x1000006f  b           . + 4 + (0x6F << 2)
label_4df628:
    if (ctx->pc == 0x4DF628u) {
        ctx->pc = 0x4DF62Cu;
        goto label_4df62c;
    }
    ctx->pc = 0x4DF624u;
    {
        const bool branch_taken_0x4df624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df624) {
            ctx->pc = 0x4DF7E4u;
            goto label_4df7e4;
        }
    }
    ctx->pc = 0x4DF62Cu;
label_4df62c:
    // 0x4df62c: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x4df62cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_4df630:
    // 0x4df630: 0x12e0006c  beqz        $s7, . + 4 + (0x6C << 2)
label_4df634:
    if (ctx->pc == 0x4DF634u) {
        ctx->pc = 0x4DF638u;
        goto label_4df638;
    }
    ctx->pc = 0x4DF630u;
    {
        const bool branch_taken_0x4df630 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df630) {
            ctx->pc = 0x4DF7E4u;
            goto label_4df7e4;
        }
    }
    ctx->pc = 0x4DF638u;
label_4df638:
    // 0x4df638: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4df638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4df63c:
    // 0x4df63c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4df63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4df640:
    // 0x4df640: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4df640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4df644:
    // 0x4df644: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4df644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4df648:
    // 0x4df648: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x4df648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4df64c:
    // 0x4df64c: 0x26d20084  addiu       $s2, $s6, 0x84
    ctx->pc = 0x4df64cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_4df650:
    // 0x4df650: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4df650u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4df654:
    // 0x4df654: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4df654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4df658:
    // 0x4df658: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x4df658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4df65c:
    // 0x4df65c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df660:
    // 0x4df660: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x4df660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4df664:
    // 0x4df664: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4df664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4df668:
    // 0x4df668: 0xc45480d0  lwc1        $f20, -0x7F30($v0)
    ctx->pc = 0x4df668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4df66c:
    // 0x4df66c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4df66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4df670:
    // 0x4df670: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4df670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4df674:
    // 0x4df674: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4df674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4df678:
    // 0x4df678: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x4df678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_4df67c:
    // 0x4df67c: 0x245e0010  addiu       $fp, $v0, 0x10
    ctx->pc = 0x4df67cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4df680:
    // 0x4df680: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x4df680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_4df684:
    // 0x4df684: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x4df684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_4df688:
    // 0x4df688: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x4df688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4df68c:
    // 0x4df68c: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x4df68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_4df690:
    // 0x4df690: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4df690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4df694:
    // 0x4df694: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x4df694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_4df698:
    // 0x4df698: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4df698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4df69c:
    // 0x4df69c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4df69cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4df6a0:
    // 0x4df6a0: 0xc0d639c  jal         func_358E70
label_4df6a4:
    if (ctx->pc == 0x4DF6A4u) {
        ctx->pc = 0x4DF6A4u;
            // 0x4df6a4: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x4DF6A8u;
        goto label_4df6a8;
    }
    ctx->pc = 0x4DF6A0u;
    SET_GPR_U32(ctx, 31, 0x4DF6A8u);
    ctx->pc = 0x4DF6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF6A0u;
            // 0x4df6a4: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6A8u; }
        if (ctx->pc != 0x4DF6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6A8u; }
        if (ctx->pc != 0x4DF6A8u) { return; }
    }
    ctx->pc = 0x4DF6A8u;
label_4df6a8:
    // 0x4df6a8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_4df6ac:
    if (ctx->pc == 0x4DF6ACu) {
        ctx->pc = 0x4DF6B0u;
        goto label_4df6b0;
    }
    ctx->pc = 0x4DF6A8u;
    {
        const bool branch_taken_0x4df6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df6a8) {
            ctx->pc = 0x4DF790u;
            goto label_4df790;
        }
    }
    ctx->pc = 0x4DF6B0u;
label_4df6b0:
    // 0x4df6b0: 0xc0d1c14  jal         func_347050
label_4df6b4:
    if (ctx->pc == 0x4DF6B4u) {
        ctx->pc = 0x4DF6B4u;
            // 0x4df6b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF6B8u;
        goto label_4df6b8;
    }
    ctx->pc = 0x4DF6B0u;
    SET_GPR_U32(ctx, 31, 0x4DF6B8u);
    ctx->pc = 0x4DF6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF6B0u;
            // 0x4df6b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6B8u; }
        if (ctx->pc != 0x4DF6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6B8u; }
        if (ctx->pc != 0x4DF6B8u) { return; }
    }
    ctx->pc = 0x4DF6B8u;
label_4df6b8:
    // 0x4df6b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4df6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4df6bc:
    // 0x4df6bc: 0xc04f278  jal         func_13C9E0
label_4df6c0:
    if (ctx->pc == 0x4DF6C0u) {
        ctx->pc = 0x4DF6C0u;
            // 0x4df6c0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4DF6C4u;
        goto label_4df6c4;
    }
    ctx->pc = 0x4DF6BCu;
    SET_GPR_U32(ctx, 31, 0x4DF6C4u);
    ctx->pc = 0x4DF6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF6BCu;
            // 0x4df6c0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6C4u; }
        if (ctx->pc != 0x4DF6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6C4u; }
        if (ctx->pc != 0x4DF6C4u) { return; }
    }
    ctx->pc = 0x4DF6C4u;
label_4df6c4:
    // 0x4df6c4: 0xc0d1c10  jal         func_347040
label_4df6c8:
    if (ctx->pc == 0x4DF6C8u) {
        ctx->pc = 0x4DF6C8u;
            // 0x4df6c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF6CCu;
        goto label_4df6cc;
    }
    ctx->pc = 0x4DF6C4u;
    SET_GPR_U32(ctx, 31, 0x4DF6CCu);
    ctx->pc = 0x4DF6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF6C4u;
            // 0x4df6c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6CCu; }
        if (ctx->pc != 0x4DF6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6CCu; }
        if (ctx->pc != 0x4DF6CCu) { return; }
    }
    ctx->pc = 0x4DF6CCu;
label_4df6cc:
    // 0x4df6cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4df6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4df6d0:
    // 0x4df6d0: 0xc04ce80  jal         func_133A00
label_4df6d4:
    if (ctx->pc == 0x4DF6D4u) {
        ctx->pc = 0x4DF6D4u;
            // 0x4df6d4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4DF6D8u;
        goto label_4df6d8;
    }
    ctx->pc = 0x4DF6D0u;
    SET_GPR_U32(ctx, 31, 0x4DF6D8u);
    ctx->pc = 0x4DF6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF6D0u;
            // 0x4df6d4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6D8u; }
        if (ctx->pc != 0x4DF6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6D8u; }
        if (ctx->pc != 0x4DF6D8u) { return; }
    }
    ctx->pc = 0x4DF6D8u;
label_4df6d8:
    // 0x4df6d8: 0xc0d4108  jal         func_350420
label_4df6dc:
    if (ctx->pc == 0x4DF6DCu) {
        ctx->pc = 0x4DF6E0u;
        goto label_4df6e0;
    }
    ctx->pc = 0x4DF6D8u;
    SET_GPR_U32(ctx, 31, 0x4DF6E0u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6E0u; }
        if (ctx->pc != 0x4DF6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6E0u; }
        if (ctx->pc != 0x4DF6E0u) { return; }
    }
    ctx->pc = 0x4DF6E0u;
label_4df6e0:
    // 0x4df6e0: 0xc0b36b4  jal         func_2CDAD0
label_4df6e4:
    if (ctx->pc == 0x4DF6E4u) {
        ctx->pc = 0x4DF6E4u;
            // 0x4df6e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF6E8u;
        goto label_4df6e8;
    }
    ctx->pc = 0x4DF6E0u;
    SET_GPR_U32(ctx, 31, 0x4DF6E8u);
    ctx->pc = 0x4DF6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF6E0u;
            // 0x4df6e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6E8u; }
        if (ctx->pc != 0x4DF6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6E8u; }
        if (ctx->pc != 0x4DF6E8u) { return; }
    }
    ctx->pc = 0x4DF6E8u;
label_4df6e8:
    // 0x4df6e8: 0xc0b9c64  jal         func_2E7190
label_4df6ec:
    if (ctx->pc == 0x4DF6ECu) {
        ctx->pc = 0x4DF6ECu;
            // 0x4df6ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF6F0u;
        goto label_4df6f0;
    }
    ctx->pc = 0x4DF6E8u;
    SET_GPR_U32(ctx, 31, 0x4DF6F0u);
    ctx->pc = 0x4DF6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF6E8u;
            // 0x4df6ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6F0u; }
        if (ctx->pc != 0x4DF6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6F0u; }
        if (ctx->pc != 0x4DF6F0u) { return; }
    }
    ctx->pc = 0x4DF6F0u;
label_4df6f0:
    // 0x4df6f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4df6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4df6f4:
    // 0x4df6f4: 0xc0d4104  jal         func_350410
label_4df6f8:
    if (ctx->pc == 0x4DF6F8u) {
        ctx->pc = 0x4DF6F8u;
            // 0x4df6f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF6FCu;
        goto label_4df6fc;
    }
    ctx->pc = 0x4DF6F4u;
    SET_GPR_U32(ctx, 31, 0x4DF6FCu);
    ctx->pc = 0x4DF6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF6F4u;
            // 0x4df6f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6FCu; }
        if (ctx->pc != 0x4DF6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF6FCu; }
        if (ctx->pc != 0x4DF6FCu) { return; }
    }
    ctx->pc = 0x4DF6FCu;
label_4df6fc:
    // 0x4df6fc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4df6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4df700:
    // 0x4df700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4df700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4df704:
    // 0x4df704: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4df704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4df708:
    // 0x4df708: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x4df708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4df70c:
    // 0x4df70c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4df70cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4df710:
    // 0x4df710: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4df710u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4df714:
    // 0x4df714: 0xc0d40ac  jal         func_3502B0
label_4df718:
    if (ctx->pc == 0x4DF718u) {
        ctx->pc = 0x4DF718u;
            // 0x4df718: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4DF71Cu;
        goto label_4df71c;
    }
    ctx->pc = 0x4DF714u;
    SET_GPR_U32(ctx, 31, 0x4DF71Cu);
    ctx->pc = 0x4DF718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF714u;
            // 0x4df718: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF71Cu; }
        if (ctx->pc != 0x4DF71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF71Cu; }
        if (ctx->pc != 0x4DF71Cu) { return; }
    }
    ctx->pc = 0x4DF71Cu;
label_4df71c:
    // 0x4df71c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4df71cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4df720:
    // 0x4df720: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_4df724:
    if (ctx->pc == 0x4DF724u) {
        ctx->pc = 0x4DF724u;
            // 0x4df724: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4DF728u;
        goto label_4df728;
    }
    ctx->pc = 0x4DF720u;
    {
        const bool branch_taken_0x4df720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF720u;
            // 0x4df724: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df720) {
            ctx->pc = 0x4DF790u;
            goto label_4df790;
        }
    }
    ctx->pc = 0x4DF728u;
label_4df728:
    // 0x4df728: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4df728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4df72c:
    // 0x4df72c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4df72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4df730:
    // 0x4df730: 0xc137e08  jal         func_4DF820
label_4df734:
    if (ctx->pc == 0x4DF734u) {
        ctx->pc = 0x4DF734u;
            // 0x4df734: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->pc = 0x4DF738u;
        goto label_4df738;
    }
    ctx->pc = 0x4DF730u;
    SET_GPR_U32(ctx, 31, 0x4DF738u);
    ctx->pc = 0x4DF734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF730u;
            // 0x4df734: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DF820u;
    if (runtime->hasFunction(0x4DF820u)) {
        auto targetFn = runtime->lookupFunction(0x4DF820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF738u; }
        if (ctx->pc != 0x4DF738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DF820_0x4df820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF738u; }
        if (ctx->pc != 0x4DF738u) { return; }
    }
    ctx->pc = 0x4DF738u;
label_4df738:
    // 0x4df738: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4df738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4df73c:
    // 0x4df73c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4df73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4df740:
    // 0x4df740: 0xc04cd60  jal         func_133580
label_4df744:
    if (ctx->pc == 0x4DF744u) {
        ctx->pc = 0x4DF744u;
            // 0x4df744: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4DF748u;
        goto label_4df748;
    }
    ctx->pc = 0x4DF740u;
    SET_GPR_U32(ctx, 31, 0x4DF748u);
    ctx->pc = 0x4DF744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF740u;
            // 0x4df744: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF748u; }
        if (ctx->pc != 0x4DF748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF748u; }
        if (ctx->pc != 0x4DF748u) { return; }
    }
    ctx->pc = 0x4DF748u;
label_4df748:
    // 0x4df748: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4df748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4df74c:
    // 0x4df74c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x4df74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4df750:
    // 0x4df750: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4df750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4df754:
    // 0x4df754: 0xc04e4a4  jal         func_139290
label_4df758:
    if (ctx->pc == 0x4DF758u) {
        ctx->pc = 0x4DF758u;
            // 0x4df758: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF75Cu;
        goto label_4df75c;
    }
    ctx->pc = 0x4DF754u;
    SET_GPR_U32(ctx, 31, 0x4DF75Cu);
    ctx->pc = 0x4DF758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF754u;
            // 0x4df758: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF75Cu; }
        if (ctx->pc != 0x4DF75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF75Cu; }
        if (ctx->pc != 0x4DF75Cu) { return; }
    }
    ctx->pc = 0x4DF75Cu;
label_4df75c:
    // 0x4df75c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4df75cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4df760:
    // 0x4df760: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4df760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4df764:
    // 0x4df764: 0x320f809  jalr        $t9
label_4df768:
    if (ctx->pc == 0x4DF768u) {
        ctx->pc = 0x4DF768u;
            // 0x4df768: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF76Cu;
        goto label_4df76c;
    }
    ctx->pc = 0x4DF764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DF76Cu);
        ctx->pc = 0x4DF768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF764u;
            // 0x4df768: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DF76Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DF76Cu; }
            if (ctx->pc != 0x4DF76Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4DF76Cu;
label_4df76c:
    // 0x4df76c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4df76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4df770:
    // 0x4df770: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4df770u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4df774:
    // 0x4df774: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x4df774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4df778:
    // 0x4df778: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x4df778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4df77c:
    // 0x4df77c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4df77cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4df780:
    // 0x4df780: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4df780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4df784:
    // 0x4df784: 0xc04cfcc  jal         func_133F30
label_4df788:
    if (ctx->pc == 0x4DF788u) {
        ctx->pc = 0x4DF788u;
            // 0x4df788: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF78Cu;
        goto label_4df78c;
    }
    ctx->pc = 0x4DF784u;
    SET_GPR_U32(ctx, 31, 0x4DF78Cu);
    ctx->pc = 0x4DF788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF784u;
            // 0x4df788: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF78Cu; }
        if (ctx->pc != 0x4DF78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF78Cu; }
        if (ctx->pc != 0x4DF78Cu) { return; }
    }
    ctx->pc = 0x4DF78Cu;
label_4df78c:
    // 0x4df78c: 0x0  nop
    ctx->pc = 0x4df78cu;
    // NOP
label_4df790:
    // 0x4df790: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4df790u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4df794:
    // 0x4df794: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x4df794u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4df798:
    // 0x4df798: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_4df79c:
    if (ctx->pc == 0x4DF79Cu) {
        ctx->pc = 0x4DF79Cu;
            // 0x4df79c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4DF7A0u;
        goto label_4df7a0;
    }
    ctx->pc = 0x4DF798u;
    {
        const bool branch_taken_0x4df798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DF79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF798u;
            // 0x4df79c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df798) {
            ctx->pc = 0x4DF684u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4df684;
        }
    }
    ctx->pc = 0x4DF7A0u;
label_4df7a0:
    // 0x4df7a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df7a4:
    // 0x4df7a4: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4df7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4df7a8:
    // 0x4df7a8: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_4df7ac:
    if (ctx->pc == 0x4DF7ACu) {
        ctx->pc = 0x4DF7B0u;
        goto label_4df7b0;
    }
    ctx->pc = 0x4DF7A8u;
    {
        const bool branch_taken_0x4df7a8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4df7a8) {
            ctx->pc = 0x4DF7E4u;
            goto label_4df7e4;
        }
    }
    ctx->pc = 0x4DF7B0u;
label_4df7b0:
    // 0x4df7b0: 0xc04e738  jal         func_139CE0
label_4df7b4:
    if (ctx->pc == 0x4DF7B4u) {
        ctx->pc = 0x4DF7B4u;
            // 0x4df7b4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x4DF7B8u;
        goto label_4df7b8;
    }
    ctx->pc = 0x4DF7B0u;
    SET_GPR_U32(ctx, 31, 0x4DF7B8u);
    ctx->pc = 0x4DF7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF7B0u;
            // 0x4df7b4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF7B8u; }
        if (ctx->pc != 0x4DF7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF7B8u; }
        if (ctx->pc != 0x4DF7B8u) { return; }
    }
    ctx->pc = 0x4DF7B8u;
label_4df7b8:
    // 0x4df7b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4df7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4df7bc:
    // 0x4df7bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4df7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4df7c0:
    // 0x4df7c0: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4df7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4df7c4:
    // 0x4df7c4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4df7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4df7c8:
    // 0x4df7c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4df7c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4df7cc:
    // 0x4df7cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4df7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4df7d0:
    // 0x4df7d0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4df7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4df7d4:
    // 0x4df7d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4df7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4df7d8:
    // 0x4df7d8: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4df7d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4df7dc:
    // 0x4df7dc: 0xc055d28  jal         func_1574A0
label_4df7e0:
    if (ctx->pc == 0x4DF7E0u) {
        ctx->pc = 0x4DF7E0u;
            // 0x4df7e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF7E4u;
        goto label_4df7e4;
    }
    ctx->pc = 0x4DF7DCu;
    SET_GPR_U32(ctx, 31, 0x4DF7E4u);
    ctx->pc = 0x4DF7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF7DCu;
            // 0x4df7e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF7E4u; }
        if (ctx->pc != 0x4DF7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF7E4u; }
        if (ctx->pc != 0x4DF7E4u) { return; }
    }
    ctx->pc = 0x4DF7E4u;
label_4df7e4:
    // 0x4df7e4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4df7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4df7e8:
    // 0x4df7e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4df7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4df7ec:
    // 0x4df7ec: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4df7ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4df7f0:
    // 0x4df7f0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4df7f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4df7f4:
    // 0x4df7f4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4df7f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4df7f8:
    // 0x4df7f8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4df7f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4df7fc:
    // 0x4df7fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4df7fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4df800:
    // 0x4df800: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4df800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4df804:
    // 0x4df804: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4df804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4df808:
    // 0x4df808: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4df808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4df80c:
    // 0x4df80c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4df80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4df810:
    // 0x4df810: 0x3e00008  jr          $ra
label_4df814:
    if (ctx->pc == 0x4DF814u) {
        ctx->pc = 0x4DF814u;
            // 0x4df814: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x4DF818u;
        goto label_4df818;
    }
    ctx->pc = 0x4DF810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF810u;
            // 0x4df814: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DF818u;
label_4df818:
    // 0x4df818: 0x0  nop
    ctx->pc = 0x4df818u;
    // NOP
label_4df81c:
    // 0x4df81c: 0x0  nop
    ctx->pc = 0x4df81cu;
    // NOP
}
