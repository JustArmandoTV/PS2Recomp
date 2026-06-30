#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F03A0
// Address: 0x3f03a0 - 0x3f06b0
void sub_003F03A0_0x3f03a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F03A0_0x3f03a0");
#endif

    switch (ctx->pc) {
        case 0x3f03a0u: goto label_3f03a0;
        case 0x3f03a4u: goto label_3f03a4;
        case 0x3f03a8u: goto label_3f03a8;
        case 0x3f03acu: goto label_3f03ac;
        case 0x3f03b0u: goto label_3f03b0;
        case 0x3f03b4u: goto label_3f03b4;
        case 0x3f03b8u: goto label_3f03b8;
        case 0x3f03bcu: goto label_3f03bc;
        case 0x3f03c0u: goto label_3f03c0;
        case 0x3f03c4u: goto label_3f03c4;
        case 0x3f03c8u: goto label_3f03c8;
        case 0x3f03ccu: goto label_3f03cc;
        case 0x3f03d0u: goto label_3f03d0;
        case 0x3f03d4u: goto label_3f03d4;
        case 0x3f03d8u: goto label_3f03d8;
        case 0x3f03dcu: goto label_3f03dc;
        case 0x3f03e0u: goto label_3f03e0;
        case 0x3f03e4u: goto label_3f03e4;
        case 0x3f03e8u: goto label_3f03e8;
        case 0x3f03ecu: goto label_3f03ec;
        case 0x3f03f0u: goto label_3f03f0;
        case 0x3f03f4u: goto label_3f03f4;
        case 0x3f03f8u: goto label_3f03f8;
        case 0x3f03fcu: goto label_3f03fc;
        case 0x3f0400u: goto label_3f0400;
        case 0x3f0404u: goto label_3f0404;
        case 0x3f0408u: goto label_3f0408;
        case 0x3f040cu: goto label_3f040c;
        case 0x3f0410u: goto label_3f0410;
        case 0x3f0414u: goto label_3f0414;
        case 0x3f0418u: goto label_3f0418;
        case 0x3f041cu: goto label_3f041c;
        case 0x3f0420u: goto label_3f0420;
        case 0x3f0424u: goto label_3f0424;
        case 0x3f0428u: goto label_3f0428;
        case 0x3f042cu: goto label_3f042c;
        case 0x3f0430u: goto label_3f0430;
        case 0x3f0434u: goto label_3f0434;
        case 0x3f0438u: goto label_3f0438;
        case 0x3f043cu: goto label_3f043c;
        case 0x3f0440u: goto label_3f0440;
        case 0x3f0444u: goto label_3f0444;
        case 0x3f0448u: goto label_3f0448;
        case 0x3f044cu: goto label_3f044c;
        case 0x3f0450u: goto label_3f0450;
        case 0x3f0454u: goto label_3f0454;
        case 0x3f0458u: goto label_3f0458;
        case 0x3f045cu: goto label_3f045c;
        case 0x3f0460u: goto label_3f0460;
        case 0x3f0464u: goto label_3f0464;
        case 0x3f0468u: goto label_3f0468;
        case 0x3f046cu: goto label_3f046c;
        case 0x3f0470u: goto label_3f0470;
        case 0x3f0474u: goto label_3f0474;
        case 0x3f0478u: goto label_3f0478;
        case 0x3f047cu: goto label_3f047c;
        case 0x3f0480u: goto label_3f0480;
        case 0x3f0484u: goto label_3f0484;
        case 0x3f0488u: goto label_3f0488;
        case 0x3f048cu: goto label_3f048c;
        case 0x3f0490u: goto label_3f0490;
        case 0x3f0494u: goto label_3f0494;
        case 0x3f0498u: goto label_3f0498;
        case 0x3f049cu: goto label_3f049c;
        case 0x3f04a0u: goto label_3f04a0;
        case 0x3f04a4u: goto label_3f04a4;
        case 0x3f04a8u: goto label_3f04a8;
        case 0x3f04acu: goto label_3f04ac;
        case 0x3f04b0u: goto label_3f04b0;
        case 0x3f04b4u: goto label_3f04b4;
        case 0x3f04b8u: goto label_3f04b8;
        case 0x3f04bcu: goto label_3f04bc;
        case 0x3f04c0u: goto label_3f04c0;
        case 0x3f04c4u: goto label_3f04c4;
        case 0x3f04c8u: goto label_3f04c8;
        case 0x3f04ccu: goto label_3f04cc;
        case 0x3f04d0u: goto label_3f04d0;
        case 0x3f04d4u: goto label_3f04d4;
        case 0x3f04d8u: goto label_3f04d8;
        case 0x3f04dcu: goto label_3f04dc;
        case 0x3f04e0u: goto label_3f04e0;
        case 0x3f04e4u: goto label_3f04e4;
        case 0x3f04e8u: goto label_3f04e8;
        case 0x3f04ecu: goto label_3f04ec;
        case 0x3f04f0u: goto label_3f04f0;
        case 0x3f04f4u: goto label_3f04f4;
        case 0x3f04f8u: goto label_3f04f8;
        case 0x3f04fcu: goto label_3f04fc;
        case 0x3f0500u: goto label_3f0500;
        case 0x3f0504u: goto label_3f0504;
        case 0x3f0508u: goto label_3f0508;
        case 0x3f050cu: goto label_3f050c;
        case 0x3f0510u: goto label_3f0510;
        case 0x3f0514u: goto label_3f0514;
        case 0x3f0518u: goto label_3f0518;
        case 0x3f051cu: goto label_3f051c;
        case 0x3f0520u: goto label_3f0520;
        case 0x3f0524u: goto label_3f0524;
        case 0x3f0528u: goto label_3f0528;
        case 0x3f052cu: goto label_3f052c;
        case 0x3f0530u: goto label_3f0530;
        case 0x3f0534u: goto label_3f0534;
        case 0x3f0538u: goto label_3f0538;
        case 0x3f053cu: goto label_3f053c;
        case 0x3f0540u: goto label_3f0540;
        case 0x3f0544u: goto label_3f0544;
        case 0x3f0548u: goto label_3f0548;
        case 0x3f054cu: goto label_3f054c;
        case 0x3f0550u: goto label_3f0550;
        case 0x3f0554u: goto label_3f0554;
        case 0x3f0558u: goto label_3f0558;
        case 0x3f055cu: goto label_3f055c;
        case 0x3f0560u: goto label_3f0560;
        case 0x3f0564u: goto label_3f0564;
        case 0x3f0568u: goto label_3f0568;
        case 0x3f056cu: goto label_3f056c;
        case 0x3f0570u: goto label_3f0570;
        case 0x3f0574u: goto label_3f0574;
        case 0x3f0578u: goto label_3f0578;
        case 0x3f057cu: goto label_3f057c;
        case 0x3f0580u: goto label_3f0580;
        case 0x3f0584u: goto label_3f0584;
        case 0x3f0588u: goto label_3f0588;
        case 0x3f058cu: goto label_3f058c;
        case 0x3f0590u: goto label_3f0590;
        case 0x3f0594u: goto label_3f0594;
        case 0x3f0598u: goto label_3f0598;
        case 0x3f059cu: goto label_3f059c;
        case 0x3f05a0u: goto label_3f05a0;
        case 0x3f05a4u: goto label_3f05a4;
        case 0x3f05a8u: goto label_3f05a8;
        case 0x3f05acu: goto label_3f05ac;
        case 0x3f05b0u: goto label_3f05b0;
        case 0x3f05b4u: goto label_3f05b4;
        case 0x3f05b8u: goto label_3f05b8;
        case 0x3f05bcu: goto label_3f05bc;
        case 0x3f05c0u: goto label_3f05c0;
        case 0x3f05c4u: goto label_3f05c4;
        case 0x3f05c8u: goto label_3f05c8;
        case 0x3f05ccu: goto label_3f05cc;
        case 0x3f05d0u: goto label_3f05d0;
        case 0x3f05d4u: goto label_3f05d4;
        case 0x3f05d8u: goto label_3f05d8;
        case 0x3f05dcu: goto label_3f05dc;
        case 0x3f05e0u: goto label_3f05e0;
        case 0x3f05e4u: goto label_3f05e4;
        case 0x3f05e8u: goto label_3f05e8;
        case 0x3f05ecu: goto label_3f05ec;
        case 0x3f05f0u: goto label_3f05f0;
        case 0x3f05f4u: goto label_3f05f4;
        case 0x3f05f8u: goto label_3f05f8;
        case 0x3f05fcu: goto label_3f05fc;
        case 0x3f0600u: goto label_3f0600;
        case 0x3f0604u: goto label_3f0604;
        case 0x3f0608u: goto label_3f0608;
        case 0x3f060cu: goto label_3f060c;
        case 0x3f0610u: goto label_3f0610;
        case 0x3f0614u: goto label_3f0614;
        case 0x3f0618u: goto label_3f0618;
        case 0x3f061cu: goto label_3f061c;
        case 0x3f0620u: goto label_3f0620;
        case 0x3f0624u: goto label_3f0624;
        case 0x3f0628u: goto label_3f0628;
        case 0x3f062cu: goto label_3f062c;
        case 0x3f0630u: goto label_3f0630;
        case 0x3f0634u: goto label_3f0634;
        case 0x3f0638u: goto label_3f0638;
        case 0x3f063cu: goto label_3f063c;
        case 0x3f0640u: goto label_3f0640;
        case 0x3f0644u: goto label_3f0644;
        case 0x3f0648u: goto label_3f0648;
        case 0x3f064cu: goto label_3f064c;
        case 0x3f0650u: goto label_3f0650;
        case 0x3f0654u: goto label_3f0654;
        case 0x3f0658u: goto label_3f0658;
        case 0x3f065cu: goto label_3f065c;
        case 0x3f0660u: goto label_3f0660;
        case 0x3f0664u: goto label_3f0664;
        case 0x3f0668u: goto label_3f0668;
        case 0x3f066cu: goto label_3f066c;
        case 0x3f0670u: goto label_3f0670;
        case 0x3f0674u: goto label_3f0674;
        case 0x3f0678u: goto label_3f0678;
        case 0x3f067cu: goto label_3f067c;
        case 0x3f0680u: goto label_3f0680;
        case 0x3f0684u: goto label_3f0684;
        case 0x3f0688u: goto label_3f0688;
        case 0x3f068cu: goto label_3f068c;
        case 0x3f0690u: goto label_3f0690;
        case 0x3f0694u: goto label_3f0694;
        case 0x3f0698u: goto label_3f0698;
        case 0x3f069cu: goto label_3f069c;
        case 0x3f06a0u: goto label_3f06a0;
        case 0x3f06a4u: goto label_3f06a4;
        case 0x3f06a8u: goto label_3f06a8;
        case 0x3f06acu: goto label_3f06ac;
        default: break;
    }

    ctx->pc = 0x3f03a0u;

label_3f03a0:
    // 0x3f03a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f03a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3f03a4:
    // 0x3f03a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3f03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3f03a8:
    // 0x3f03a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f03a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f03ac:
    // 0x3f03ac: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3f03acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f03b0:
    // 0x3f03b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f03b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f03b4:
    // 0x3f03b4: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x3f03b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_3f03b8:
    // 0x3f03b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f03b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f03bc:
    // 0x3f03bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f03bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f03c0:
    // 0x3f03c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f03c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f03c4:
    // 0x3f03c4: 0xc0aeaf4  jal         func_2BABD0
label_3f03c8:
    if (ctx->pc == 0x3F03C8u) {
        ctx->pc = 0x3F03C8u;
            // 0x3f03c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3F03CCu;
        goto label_3f03cc;
    }
    ctx->pc = 0x3F03C4u;
    SET_GPR_U32(ctx, 31, 0x3F03CCu);
    ctx->pc = 0x3F03C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F03C4u;
            // 0x3f03c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F03CCu; }
        if (ctx->pc != 0x3F03CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F03CCu; }
        if (ctx->pc != 0x3F03CCu) { return; }
    }
    ctx->pc = 0x3F03CCu;
label_3f03cc:
    // 0x3f03cc: 0xc0fc204  jal         func_3F0810
label_3f03d0:
    if (ctx->pc == 0x3F03D0u) {
        ctx->pc = 0x3F03D0u;
            // 0x3f03d0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3F03D4u;
        goto label_3f03d4;
    }
    ctx->pc = 0x3F03CCu;
    SET_GPR_U32(ctx, 31, 0x3F03D4u);
    ctx->pc = 0x3F03D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F03CCu;
            // 0x3f03d0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F0810u;
    if (runtime->hasFunction(0x3F0810u)) {
        auto targetFn = runtime->lookupFunction(0x3F0810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F03D4u; }
        if (ctx->pc != 0x3F03D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F0810_0x3f0810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F03D4u; }
        if (ctx->pc != 0x3F03D4u) { return; }
    }
    ctx->pc = 0x3F03D4u;
label_3f03d4:
    // 0x3f03d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f03d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f03d8:
    // 0x3f03d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f03dc:
    // 0x3f03dc: 0x24639f50  addiu       $v1, $v1, -0x60B0
    ctx->pc = 0x3f03dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942544));
label_3f03e0:
    // 0x3f03e0: 0x24429f88  addiu       $v0, $v0, -0x6078
    ctx->pc = 0x3f03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942600));
label_3f03e4:
    // 0x3f03e4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3f03e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3f03e8:
    // 0x3f03e8: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x3f03e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3f03ec:
    // 0x3f03ec: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3f03ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3f03f0:
    // 0x3f03f0: 0xc0fc1fc  jal         func_3F07F0
label_3f03f4:
    if (ctx->pc == 0x3F03F4u) {
        ctx->pc = 0x3F03F4u;
            // 0x3f03f4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x3F03F8u;
        goto label_3f03f8;
    }
    ctx->pc = 0x3F03F0u;
    SET_GPR_U32(ctx, 31, 0x3F03F8u);
    ctx->pc = 0x3F03F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F03F0u;
            // 0x3f03f4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F07F0u;
    if (runtime->hasFunction(0x3F07F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F07F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F03F8u; }
        if (ctx->pc != 0x3F03F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F07F0_0x3f07f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F03F8u; }
        if (ctx->pc != 0x3F03F8u) { return; }
    }
    ctx->pc = 0x3F03F8u;
label_3f03f8:
    // 0x3f03f8: 0xc0fc1fc  jal         func_3F07F0
label_3f03fc:
    if (ctx->pc == 0x3F03FCu) {
        ctx->pc = 0x3F03FCu;
            // 0x3f03fc: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3F0400u;
        goto label_3f0400;
    }
    ctx->pc = 0x3F03F8u;
    SET_GPR_U32(ctx, 31, 0x3F0400u);
    ctx->pc = 0x3F03FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F03F8u;
            // 0x3f03fc: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F07F0u;
    if (runtime->hasFunction(0x3F07F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F07F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0400u; }
        if (ctx->pc != 0x3F0400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F07F0_0x3f07f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0400u; }
        if (ctx->pc != 0x3F0400u) { return; }
    }
    ctx->pc = 0x3F0400u;
label_3f0400:
    // 0x3f0400: 0xc0fc1f4  jal         func_3F07D0
label_3f0404:
    if (ctx->pc == 0x3F0404u) {
        ctx->pc = 0x3F0404u;
            // 0x3f0404: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x3F0408u;
        goto label_3f0408;
    }
    ctx->pc = 0x3F0400u;
    SET_GPR_U32(ctx, 31, 0x3F0408u);
    ctx->pc = 0x3F0404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0400u;
            // 0x3f0404: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F07D0u;
    if (runtime->hasFunction(0x3F07D0u)) {
        auto targetFn = runtime->lookupFunction(0x3F07D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0408u; }
        if (ctx->pc != 0x3F0408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F07D0_0x3f07d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0408u; }
        if (ctx->pc != 0x3F0408u) { return; }
    }
    ctx->pc = 0x3F0408u;
label_3f0408:
    // 0x3f0408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f0408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f040c:
    // 0x3f040c: 0xc0aeac0  jal         func_2BAB00
label_3f0410:
    if (ctx->pc == 0x3F0410u) {
        ctx->pc = 0x3F0410u;
            // 0x3f0410: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->pc = 0x3F0414u;
        goto label_3f0414;
    }
    ctx->pc = 0x3F040Cu;
    SET_GPR_U32(ctx, 31, 0x3F0414u);
    ctx->pc = 0x3F0410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F040Cu;
            // 0x3f0410: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0414u; }
        if (ctx->pc != 0x3F0414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0414u; }
        if (ctx->pc != 0x3F0414u) { return; }
    }
    ctx->pc = 0x3F0414u;
label_3f0414:
    // 0x3f0414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f0414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0418:
    // 0x3f0418: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_3f041c:
    if (ctx->pc == 0x3F041Cu) {
        ctx->pc = 0x3F0420u;
        goto label_3f0420;
    }
    ctx->pc = 0x3F0418u;
    {
        const bool branch_taken_0x3f0418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0418) {
            ctx->pc = 0x3F04A0u;
            goto label_3f04a0;
        }
    }
    ctx->pc = 0x3F0420u;
label_3f0420:
    // 0x3f0420: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3f0420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3f0424:
    // 0x3f0424: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3f0424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3f0428:
    // 0x3f0428: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3f0428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3f042c:
    // 0x3f042c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3f042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3f0430:
    // 0x3f0430: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3f0430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3f0434:
    // 0x3f0434: 0xc040138  jal         func_1004E0
label_3f0438:
    if (ctx->pc == 0x3F0438u) {
        ctx->pc = 0x3F0438u;
            // 0x3f0438: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3F043Cu;
        goto label_3f043c;
    }
    ctx->pc = 0x3F0434u;
    SET_GPR_U32(ctx, 31, 0x3F043Cu);
    ctx->pc = 0x3F0438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0434u;
            // 0x3f0438: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F043Cu; }
        if (ctx->pc != 0x3F043Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F043Cu; }
        if (ctx->pc != 0x3F043Cu) { return; }
    }
    ctx->pc = 0x3F043Cu;
label_3f043c:
    // 0x3f043c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x3f043cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_3f0440:
    // 0x3f0440: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x3f0440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
label_3f0444:
    // 0x3f0444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0448:
    // 0x3f0448: 0x24a506e0  addiu       $a1, $a1, 0x6E0
    ctx->pc = 0x3f0448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1760));
label_3f044c:
    // 0x3f044c: 0x24c6f580  addiu       $a2, $a2, -0xA80
    ctx->pc = 0x3f044cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964608));
label_3f0450:
    // 0x3f0450: 0x24070160  addiu       $a3, $zero, 0x160
    ctx->pc = 0x3f0450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_3f0454:
    // 0x3f0454: 0xc040840  jal         func_102100
label_3f0458:
    if (ctx->pc == 0x3F0458u) {
        ctx->pc = 0x3F0458u;
            // 0x3f0458: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F045Cu;
        goto label_3f045c;
    }
    ctx->pc = 0x3F0454u;
    SET_GPR_U32(ctx, 31, 0x3F045Cu);
    ctx->pc = 0x3F0458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0454u;
            // 0x3f0458: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F045Cu; }
        if (ctx->pc != 0x3F045Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F045Cu; }
        if (ctx->pc != 0x3F045Cu) { return; }
    }
    ctx->pc = 0x3F045Cu;
label_3f045c:
    // 0x3f045c: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x3f045cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_3f0460:
    // 0x3f0460: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f0460u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0464:
    // 0x3f0464: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x3f0464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3f0468:
    // 0x3f0468: 0xc0fc1b4  jal         func_3F06D0
label_3f046c:
    if (ctx->pc == 0x3F046Cu) {
        ctx->pc = 0x3F046Cu;
            // 0x3f046c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0470u;
        goto label_3f0470;
    }
    ctx->pc = 0x3F0468u;
    SET_GPR_U32(ctx, 31, 0x3F0470u);
    ctx->pc = 0x3F046Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0468u;
            // 0x3f046c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F06D0u;
    if (runtime->hasFunction(0x3F06D0u)) {
        auto targetFn = runtime->lookupFunction(0x3F06D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0470u; }
        if (ctx->pc != 0x3F0470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F06D0_0x3f06d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0470u; }
        if (ctx->pc != 0x3F0470u) { return; }
    }
    ctx->pc = 0x3F0470u;
label_3f0470:
    // 0x3f0470: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x3f0470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3f0474:
    // 0x3f0474: 0xc0fc1b4  jal         func_3F06D0
label_3f0478:
    if (ctx->pc == 0x3F0478u) {
        ctx->pc = 0x3F0478u;
            // 0x3f0478: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F047Cu;
        goto label_3f047c;
    }
    ctx->pc = 0x3F0474u;
    SET_GPR_U32(ctx, 31, 0x3F047Cu);
    ctx->pc = 0x3F0478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0474u;
            // 0x3f0478: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F06D0u;
    if (runtime->hasFunction(0x3F06D0u)) {
        auto targetFn = runtime->lookupFunction(0x3F06D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F047Cu; }
        if (ctx->pc != 0x3F047Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F06D0_0x3f06d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F047Cu; }
        if (ctx->pc != 0x3F047Cu) { return; }
    }
    ctx->pc = 0x3F047Cu;
label_3f047c:
    // 0x3f047c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f047cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0480:
    // 0x3f0480: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x3f0480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3f0484:
    // 0x3f0484: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x3f0484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_3f0488:
    // 0x3f0488: 0xc0fc1ac  jal         func_3F06B0
label_3f048c:
    if (ctx->pc == 0x3F048Cu) {
        ctx->pc = 0x3F048Cu;
            // 0x3f048c: 0xafb3006c  sw          $s3, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
        ctx->pc = 0x3F0490u;
        goto label_3f0490;
    }
    ctx->pc = 0x3F0488u;
    SET_GPR_U32(ctx, 31, 0x3F0490u);
    ctx->pc = 0x3F048Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0488u;
            // 0x3f048c: 0xafb3006c  sw          $s3, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F06B0u;
    if (runtime->hasFunction(0x3F06B0u)) {
        auto targetFn = runtime->lookupFunction(0x3F06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0490u; }
        if (ctx->pc != 0x3F0490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F06B0_0x3f06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0490u; }
        if (ctx->pc != 0x3F0490u) { return; }
    }
    ctx->pc = 0x3F0490u;
label_3f0490:
    // 0x3f0490: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3f0490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3f0494:
    // 0x3f0494: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3f0494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3f0498:
    // 0x3f0498: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_3f049c:
    if (ctx->pc == 0x3F049Cu) {
        ctx->pc = 0x3F049Cu;
            // 0x3f049c: 0x26730160  addiu       $s3, $s3, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
        ctx->pc = 0x3F04A0u;
        goto label_3f04a0;
    }
    ctx->pc = 0x3F0498u;
    {
        const bool branch_taken_0x3f0498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F049Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0498u;
            // 0x3f049c: 0x26730160  addiu       $s3, $s3, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0498) {
            ctx->pc = 0x3F0480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f0480;
        }
    }
    ctx->pc = 0x3F04A0u;
label_3f04a0:
    // 0x3f04a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f04a4:
    // 0x3f04a4: 0x24429ef0  addiu       $v0, $v0, -0x6110
    ctx->pc = 0x3f04a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942448));
label_3f04a8:
    // 0x3f04a8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3f04a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3f04ac:
    // 0x3f04ac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3f04acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3f04b0:
    // 0x3f04b0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3f04b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3f04b4:
    // 0x3f04b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f04b8:
    // 0x3f04b8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3f04b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3f04bc:
    // 0x3f04bc: 0x24429f28  addiu       $v0, $v0, -0x60D8
    ctx->pc = 0x3f04bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942504));
label_3f04c0:
    // 0x3f04c0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3f04c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3f04c4:
    // 0x3f04c4: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x3f04c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_3f04c8:
    // 0x3f04c8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3f04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_3f04cc:
    // 0x3f04cc: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x3f04ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_3f04d0:
    // 0x3f04d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f04d4:
    // 0x3f04d4: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x3f04d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_3f04d8:
    // 0x3f04d8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3f04d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3f04dc:
    // 0x3f04dc: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x3f04dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_3f04e0:
    // 0x3f04e0: 0xc0a7a88  jal         func_29EA20
label_3f04e4:
    if (ctx->pc == 0x3F04E4u) {
        ctx->pc = 0x3F04E4u;
            // 0x3f04e4: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x3F04E8u;
        goto label_3f04e8;
    }
    ctx->pc = 0x3F04E0u;
    SET_GPR_U32(ctx, 31, 0x3F04E8u);
    ctx->pc = 0x3F04E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F04E0u;
            // 0x3f04e4: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F04E8u; }
        if (ctx->pc != 0x3F04E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F04E8u; }
        if (ctx->pc != 0x3F04E8u) { return; }
    }
    ctx->pc = 0x3F04E8u;
label_3f04e8:
    // 0x3f04e8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3f04e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3f04ec:
    // 0x3f04ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f04ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f04f0:
    // 0x3f04f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3f04f4:
    if (ctx->pc == 0x3F04F4u) {
        ctx->pc = 0x3F04F4u;
            // 0x3f04f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3F04F8u;
        goto label_3f04f8;
    }
    ctx->pc = 0x3F04F0u;
    {
        const bool branch_taken_0x3f04f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F04F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F04F0u;
            // 0x3f04f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f04f0) {
            ctx->pc = 0x3F0508u;
            goto label_3f0508;
        }
    }
    ctx->pc = 0x3F04F8u;
label_3f04f8:
    // 0x3f04f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3f04f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f04fc:
    // 0x3f04fc: 0xc0804bc  jal         func_2012F0
label_3f0500:
    if (ctx->pc == 0x3F0500u) {
        ctx->pc = 0x3F0500u;
            // 0x3f0500: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F0504u;
        goto label_3f0504;
    }
    ctx->pc = 0x3F04FCu;
    SET_GPR_U32(ctx, 31, 0x3F0504u);
    ctx->pc = 0x3F0500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F04FCu;
            // 0x3f0500: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0504u; }
        if (ctx->pc != 0x3F0504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0504u; }
        if (ctx->pc != 0x3F0504u) { return; }
    }
    ctx->pc = 0x3F0504u;
label_3f0504:
    // 0x3f0504: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0508:
    // 0x3f0508: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x3f0508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_3f050c:
    // 0x3f050c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3f050cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f0510:
    // 0x3f0510: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f0510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f0514:
    // 0x3f0514: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f0514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f0518:
    // 0x3f0518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f0518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f051c:
    // 0x3f051c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f051cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0520:
    // 0x3f0520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f0520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f0524:
    // 0x3f0524: 0x3e00008  jr          $ra
label_3f0528:
    if (ctx->pc == 0x3F0528u) {
        ctx->pc = 0x3F0528u;
            // 0x3f0528: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3F052Cu;
        goto label_3f052c;
    }
    ctx->pc = 0x3F0524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0524u;
            // 0x3f0528: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F052Cu;
label_3f052c:
    // 0x3f052c: 0x0  nop
    ctx->pc = 0x3f052cu;
    // NOP
label_3f0530:
    // 0x3f0530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f0530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f0534:
    // 0x3f0534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f0534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f0538:
    // 0x3f0538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f0538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f053c:
    // 0x3f053c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f053cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f0540:
    // 0x3f0540: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f0540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f0544:
    // 0x3f0544: 0x12200054  beqz        $s1, . + 4 + (0x54 << 2)
label_3f0548:
    if (ctx->pc == 0x3F0548u) {
        ctx->pc = 0x3F0548u;
            // 0x3f0548: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F054Cu;
        goto label_3f054c;
    }
    ctx->pc = 0x3F0544u;
    {
        const bool branch_taken_0x3f0544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0544u;
            // 0x3f0548: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0544) {
            ctx->pc = 0x3F0698u;
            goto label_3f0698;
        }
    }
    ctx->pc = 0x3F054Cu;
label_3f054c:
    // 0x3f054c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f054cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f0550:
    // 0x3f0550: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f0550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f0554:
    // 0x3f0554: 0x24639f50  addiu       $v1, $v1, -0x60B0
    ctx->pc = 0x3f0554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942544));
label_3f0558:
    // 0x3f0558: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x3f0558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_3f055c:
    // 0x3f055c: 0x24429f88  addiu       $v0, $v0, -0x6078
    ctx->pc = 0x3f055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942600));
label_3f0560:
    // 0x3f0560: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3f0560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3f0564:
    // 0x3f0564: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3f0564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3f0568:
    // 0x3f0568: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3f0568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3f056c:
    // 0x3f056c: 0xc0407c0  jal         func_101F00
label_3f0570:
    if (ctx->pc == 0x3F0570u) {
        ctx->pc = 0x3F0570u;
            // 0x3f0570: 0x24a5f580  addiu       $a1, $a1, -0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964608));
        ctx->pc = 0x3F0574u;
        goto label_3f0574;
    }
    ctx->pc = 0x3F056Cu;
    SET_GPR_U32(ctx, 31, 0x3F0574u);
    ctx->pc = 0x3F0570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F056Cu;
            // 0x3f0570: 0x24a5f580  addiu       $a1, $a1, -0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0574u; }
        if (ctx->pc != 0x3F0574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0574u; }
        if (ctx->pc != 0x3F0574u) { return; }
    }
    ctx->pc = 0x3F0574u;
label_3f0574:
    // 0x3f0574: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3f0574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3f0578:
    // 0x3f0578: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3f057c:
    if (ctx->pc == 0x3F057Cu) {
        ctx->pc = 0x3F057Cu;
            // 0x3f057c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3F0580u;
        goto label_3f0580;
    }
    ctx->pc = 0x3F0578u;
    {
        const bool branch_taken_0x3f0578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0578) {
            ctx->pc = 0x3F057Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0578u;
            // 0x3f057c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F05ACu;
            goto label_3f05ac;
        }
    }
    ctx->pc = 0x3F0580u;
label_3f0580:
    // 0x3f0580: 0x2622008c  addiu       $v0, $s1, 0x8C
    ctx->pc = 0x3f0580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
label_3f0584:
    // 0x3f0584: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3f0588:
    if (ctx->pc == 0x3F0588u) {
        ctx->pc = 0x3F0588u;
            // 0x3f0588: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x3F058Cu;
        goto label_3f058c;
    }
    ctx->pc = 0x3F0584u;
    {
        const bool branch_taken_0x3f0584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0584) {
            ctx->pc = 0x3F0588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0584u;
            // 0x3f0588: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F0598u;
            goto label_3f0598;
        }
    }
    ctx->pc = 0x3F058Cu;
label_3f058c:
    // 0x3f058c: 0xc07507c  jal         func_1D41F0
label_3f0590:
    if (ctx->pc == 0x3F0590u) {
        ctx->pc = 0x3F0590u;
            // 0x3f0590: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->pc = 0x3F0594u;
        goto label_3f0594;
    }
    ctx->pc = 0x3F058Cu;
    SET_GPR_U32(ctx, 31, 0x3F0594u);
    ctx->pc = 0x3F0590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F058Cu;
            // 0x3f0590: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0594u; }
        if (ctx->pc != 0x3F0594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0594u; }
        if (ctx->pc != 0x3F0594u) { return; }
    }
    ctx->pc = 0x3F0594u;
label_3f0594:
    // 0x3f0594: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3f0594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3f0598:
    // 0x3f0598: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3f059c:
    if (ctx->pc == 0x3F059Cu) {
        ctx->pc = 0x3F05A0u;
        goto label_3f05a0;
    }
    ctx->pc = 0x3F0598u;
    {
        const bool branch_taken_0x3f0598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0598) {
            ctx->pc = 0x3F05A8u;
            goto label_3f05a8;
        }
    }
    ctx->pc = 0x3F05A0u;
label_3f05a0:
    // 0x3f05a0: 0xc07507c  jal         func_1D41F0
label_3f05a4:
    if (ctx->pc == 0x3F05A4u) {
        ctx->pc = 0x3F05A4u;
            // 0x3f05a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x3F05A8u;
        goto label_3f05a8;
    }
    ctx->pc = 0x3F05A0u;
    SET_GPR_U32(ctx, 31, 0x3F05A8u);
    ctx->pc = 0x3F05A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F05A0u;
            // 0x3f05a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F05A8u; }
        if (ctx->pc != 0x3F05A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F05A8u; }
        if (ctx->pc != 0x3F05A8u) { return; }
    }
    ctx->pc = 0x3F05A8u;
label_3f05a8:
    // 0x3f05a8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3f05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3f05ac:
    // 0x3f05ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3f05b0:
    if (ctx->pc == 0x3F05B0u) {
        ctx->pc = 0x3F05B0u;
            // 0x3f05b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3F05B4u;
        goto label_3f05b4;
    }
    ctx->pc = 0x3F05ACu;
    {
        const bool branch_taken_0x3f05ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f05ac) {
            ctx->pc = 0x3F05B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F05ACu;
            // 0x3f05b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F05DCu;
            goto label_3f05dc;
        }
    }
    ctx->pc = 0x3F05B4u;
label_3f05b4:
    // 0x3f05b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3f05b8:
    if (ctx->pc == 0x3F05B8u) {
        ctx->pc = 0x3F05BCu;
        goto label_3f05bc;
    }
    ctx->pc = 0x3F05B4u;
    {
        const bool branch_taken_0x3f05b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f05b4) {
            ctx->pc = 0x3F05D8u;
            goto label_3f05d8;
        }
    }
    ctx->pc = 0x3F05BCu;
label_3f05bc:
    // 0x3f05bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3f05c0:
    if (ctx->pc == 0x3F05C0u) {
        ctx->pc = 0x3F05C4u;
        goto label_3f05c4;
    }
    ctx->pc = 0x3F05BCu;
    {
        const bool branch_taken_0x3f05bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f05bc) {
            ctx->pc = 0x3F05D8u;
            goto label_3f05d8;
        }
    }
    ctx->pc = 0x3F05C4u;
label_3f05c4:
    // 0x3f05c4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3f05c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3f05c8:
    // 0x3f05c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3f05cc:
    if (ctx->pc == 0x3F05CCu) {
        ctx->pc = 0x3F05D0u;
        goto label_3f05d0;
    }
    ctx->pc = 0x3F05C8u;
    {
        const bool branch_taken_0x3f05c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f05c8) {
            ctx->pc = 0x3F05D8u;
            goto label_3f05d8;
        }
    }
    ctx->pc = 0x3F05D0u;
label_3f05d0:
    // 0x3f05d0: 0xc0400a8  jal         func_1002A0
label_3f05d4:
    if (ctx->pc == 0x3F05D4u) {
        ctx->pc = 0x3F05D8u;
        goto label_3f05d8;
    }
    ctx->pc = 0x3F05D0u;
    SET_GPR_U32(ctx, 31, 0x3F05D8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F05D8u; }
        if (ctx->pc != 0x3F05D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F05D8u; }
        if (ctx->pc != 0x3F05D8u) { return; }
    }
    ctx->pc = 0x3F05D8u;
label_3f05d8:
    // 0x3f05d8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x3f05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3f05dc:
    // 0x3f05dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3f05e0:
    if (ctx->pc == 0x3F05E0u) {
        ctx->pc = 0x3F05E0u;
            // 0x3f05e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3F05E4u;
        goto label_3f05e4;
    }
    ctx->pc = 0x3F05DCu;
    {
        const bool branch_taken_0x3f05dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f05dc) {
            ctx->pc = 0x3F05E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F05DCu;
            // 0x3f05e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F060Cu;
            goto label_3f060c;
        }
    }
    ctx->pc = 0x3F05E4u;
label_3f05e4:
    // 0x3f05e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3f05e8:
    if (ctx->pc == 0x3F05E8u) {
        ctx->pc = 0x3F05ECu;
        goto label_3f05ec;
    }
    ctx->pc = 0x3F05E4u;
    {
        const bool branch_taken_0x3f05e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f05e4) {
            ctx->pc = 0x3F0608u;
            goto label_3f0608;
        }
    }
    ctx->pc = 0x3F05ECu;
label_3f05ec:
    // 0x3f05ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3f05f0:
    if (ctx->pc == 0x3F05F0u) {
        ctx->pc = 0x3F05F4u;
        goto label_3f05f4;
    }
    ctx->pc = 0x3F05ECu;
    {
        const bool branch_taken_0x3f05ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f05ec) {
            ctx->pc = 0x3F0608u;
            goto label_3f0608;
        }
    }
    ctx->pc = 0x3F05F4u;
label_3f05f4:
    // 0x3f05f4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x3f05f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3f05f8:
    // 0x3f05f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3f05fc:
    if (ctx->pc == 0x3F05FCu) {
        ctx->pc = 0x3F0600u;
        goto label_3f0600;
    }
    ctx->pc = 0x3F05F8u;
    {
        const bool branch_taken_0x3f05f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f05f8) {
            ctx->pc = 0x3F0608u;
            goto label_3f0608;
        }
    }
    ctx->pc = 0x3F0600u;
label_3f0600:
    // 0x3f0600: 0xc0400a8  jal         func_1002A0
label_3f0604:
    if (ctx->pc == 0x3F0604u) {
        ctx->pc = 0x3F0608u;
        goto label_3f0608;
    }
    ctx->pc = 0x3F0600u;
    SET_GPR_U32(ctx, 31, 0x3F0608u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0608u; }
        if (ctx->pc != 0x3F0608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0608u; }
        if (ctx->pc != 0x3F0608u) { return; }
    }
    ctx->pc = 0x3F0608u;
label_3f0608:
    // 0x3f0608: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x3f0608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3f060c:
    // 0x3f060c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3f0610:
    if (ctx->pc == 0x3F0610u) {
        ctx->pc = 0x3F0614u;
        goto label_3f0614;
    }
    ctx->pc = 0x3F060Cu;
    {
        const bool branch_taken_0x3f060c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f060c) {
            ctx->pc = 0x3F0628u;
            goto label_3f0628;
        }
    }
    ctx->pc = 0x3F0614u;
label_3f0614:
    // 0x3f0614: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f0614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f0618:
    // 0x3f0618: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f0618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f061c:
    // 0x3f061c: 0x24639f38  addiu       $v1, $v1, -0x60C8
    ctx->pc = 0x3f061cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942520));
label_3f0620:
    // 0x3f0620: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x3f0620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_3f0624:
    // 0x3f0624: 0xac406f08  sw          $zero, 0x6F08($v0)
    ctx->pc = 0x3f0624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28424), GPR_U32(ctx, 0));
label_3f0628:
    // 0x3f0628: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_3f062c:
    if (ctx->pc == 0x3F062Cu) {
        ctx->pc = 0x3F062Cu;
            // 0x3f062c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3F0630u;
        goto label_3f0630;
    }
    ctx->pc = 0x3F0628u;
    {
        const bool branch_taken_0x3f0628 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0628) {
            ctx->pc = 0x3F062Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0628u;
            // 0x3f062c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F0684u;
            goto label_3f0684;
        }
    }
    ctx->pc = 0x3F0630u;
label_3f0630:
    // 0x3f0630: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f0630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f0634:
    // 0x3f0634: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3f0634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3f0638:
    // 0x3f0638: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3f0638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3f063c:
    // 0x3f063c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3f063cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3f0640:
    // 0x3f0640: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f0644:
    if (ctx->pc == 0x3F0644u) {
        ctx->pc = 0x3F0644u;
            // 0x3f0644: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3F0648u;
        goto label_3f0648;
    }
    ctx->pc = 0x3F0640u;
    {
        const bool branch_taken_0x3f0640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0640) {
            ctx->pc = 0x3F0644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0640u;
            // 0x3f0644: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F065Cu;
            goto label_3f065c;
        }
    }
    ctx->pc = 0x3F0648u;
label_3f0648:
    // 0x3f0648: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f0648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f064c:
    // 0x3f064c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f064cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f0650:
    // 0x3f0650: 0x320f809  jalr        $t9
label_3f0654:
    if (ctx->pc == 0x3F0654u) {
        ctx->pc = 0x3F0654u;
            // 0x3f0654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F0658u;
        goto label_3f0658;
    }
    ctx->pc = 0x3F0650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F0658u);
        ctx->pc = 0x3F0654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0650u;
            // 0x3f0654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F0658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F0658u; }
            if (ctx->pc != 0x3F0658u) { return; }
        }
        }
    }
    ctx->pc = 0x3F0658u;
label_3f0658:
    // 0x3f0658: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3f0658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3f065c:
    // 0x3f065c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f0660:
    if (ctx->pc == 0x3F0660u) {
        ctx->pc = 0x3F0660u;
            // 0x3f0660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0664u;
        goto label_3f0664;
    }
    ctx->pc = 0x3F065Cu;
    {
        const bool branch_taken_0x3f065c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f065c) {
            ctx->pc = 0x3F0660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F065Cu;
            // 0x3f0660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F0678u;
            goto label_3f0678;
        }
    }
    ctx->pc = 0x3F0664u;
label_3f0664:
    // 0x3f0664: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f0664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f0668:
    // 0x3f0668: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f0668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f066c:
    // 0x3f066c: 0x320f809  jalr        $t9
label_3f0670:
    if (ctx->pc == 0x3F0670u) {
        ctx->pc = 0x3F0670u;
            // 0x3f0670: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F0674u;
        goto label_3f0674;
    }
    ctx->pc = 0x3F066Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F0674u);
        ctx->pc = 0x3F0670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F066Cu;
            // 0x3f0670: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F0674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F0674u; }
            if (ctx->pc != 0x3F0674u) { return; }
        }
        }
    }
    ctx->pc = 0x3F0674u;
label_3f0674:
    // 0x3f0674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f0674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f0678:
    // 0x3f0678: 0xc075bf8  jal         func_1D6FE0
label_3f067c:
    if (ctx->pc == 0x3F067Cu) {
        ctx->pc = 0x3F067Cu;
            // 0x3f067c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0680u;
        goto label_3f0680;
    }
    ctx->pc = 0x3F0678u;
    SET_GPR_U32(ctx, 31, 0x3F0680u);
    ctx->pc = 0x3F067Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0678u;
            // 0x3f067c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0680u; }
        if (ctx->pc != 0x3F0680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0680u; }
        if (ctx->pc != 0x3F0680u) { return; }
    }
    ctx->pc = 0x3F0680u;
label_3f0680:
    // 0x3f0680: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3f0680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3f0684:
    // 0x3f0684: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f0684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f0688:
    // 0x3f0688: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3f068c:
    if (ctx->pc == 0x3F068Cu) {
        ctx->pc = 0x3F068Cu;
            // 0x3f068c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0690u;
        goto label_3f0690;
    }
    ctx->pc = 0x3F0688u;
    {
        const bool branch_taken_0x3f0688 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f0688) {
            ctx->pc = 0x3F068Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0688u;
            // 0x3f068c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F069Cu;
            goto label_3f069c;
        }
    }
    ctx->pc = 0x3F0690u;
label_3f0690:
    // 0x3f0690: 0xc0400a8  jal         func_1002A0
label_3f0694:
    if (ctx->pc == 0x3F0694u) {
        ctx->pc = 0x3F0694u;
            // 0x3f0694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0698u;
        goto label_3f0698;
    }
    ctx->pc = 0x3F0690u;
    SET_GPR_U32(ctx, 31, 0x3F0698u);
    ctx->pc = 0x3F0694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0690u;
            // 0x3f0694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0698u; }
        if (ctx->pc != 0x3F0698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0698u; }
        if (ctx->pc != 0x3F0698u) { return; }
    }
    ctx->pc = 0x3F0698u;
label_3f0698:
    // 0x3f0698: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3f0698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f069c:
    // 0x3f069c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f069cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f06a0:
    // 0x3f06a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f06a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f06a4:
    // 0x3f06a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f06a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f06a8:
    // 0x3f06a8: 0x3e00008  jr          $ra
label_3f06ac:
    if (ctx->pc == 0x3F06ACu) {
        ctx->pc = 0x3F06ACu;
            // 0x3f06ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F06B0u;
        goto label_fallthrough_0x3f06a8;
    }
    ctx->pc = 0x3F06A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F06ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F06A8u;
            // 0x3f06ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3f06a8:
    ctx->pc = 0x3F06B0u;
}
