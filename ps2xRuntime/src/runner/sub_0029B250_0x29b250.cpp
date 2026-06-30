#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029B250
// Address: 0x29b250 - 0x29b760
void sub_0029B250_0x29b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B250_0x29b250");
#endif

    switch (ctx->pc) {
        case 0x29b250u: goto label_29b250;
        case 0x29b254u: goto label_29b254;
        case 0x29b258u: goto label_29b258;
        case 0x29b25cu: goto label_29b25c;
        case 0x29b260u: goto label_29b260;
        case 0x29b264u: goto label_29b264;
        case 0x29b268u: goto label_29b268;
        case 0x29b26cu: goto label_29b26c;
        case 0x29b270u: goto label_29b270;
        case 0x29b274u: goto label_29b274;
        case 0x29b278u: goto label_29b278;
        case 0x29b27cu: goto label_29b27c;
        case 0x29b280u: goto label_29b280;
        case 0x29b284u: goto label_29b284;
        case 0x29b288u: goto label_29b288;
        case 0x29b28cu: goto label_29b28c;
        case 0x29b290u: goto label_29b290;
        case 0x29b294u: goto label_29b294;
        case 0x29b298u: goto label_29b298;
        case 0x29b29cu: goto label_29b29c;
        case 0x29b2a0u: goto label_29b2a0;
        case 0x29b2a4u: goto label_29b2a4;
        case 0x29b2a8u: goto label_29b2a8;
        case 0x29b2acu: goto label_29b2ac;
        case 0x29b2b0u: goto label_29b2b0;
        case 0x29b2b4u: goto label_29b2b4;
        case 0x29b2b8u: goto label_29b2b8;
        case 0x29b2bcu: goto label_29b2bc;
        case 0x29b2c0u: goto label_29b2c0;
        case 0x29b2c4u: goto label_29b2c4;
        case 0x29b2c8u: goto label_29b2c8;
        case 0x29b2ccu: goto label_29b2cc;
        case 0x29b2d0u: goto label_29b2d0;
        case 0x29b2d4u: goto label_29b2d4;
        case 0x29b2d8u: goto label_29b2d8;
        case 0x29b2dcu: goto label_29b2dc;
        case 0x29b2e0u: goto label_29b2e0;
        case 0x29b2e4u: goto label_29b2e4;
        case 0x29b2e8u: goto label_29b2e8;
        case 0x29b2ecu: goto label_29b2ec;
        case 0x29b2f0u: goto label_29b2f0;
        case 0x29b2f4u: goto label_29b2f4;
        case 0x29b2f8u: goto label_29b2f8;
        case 0x29b2fcu: goto label_29b2fc;
        case 0x29b300u: goto label_29b300;
        case 0x29b304u: goto label_29b304;
        case 0x29b308u: goto label_29b308;
        case 0x29b30cu: goto label_29b30c;
        case 0x29b310u: goto label_29b310;
        case 0x29b314u: goto label_29b314;
        case 0x29b318u: goto label_29b318;
        case 0x29b31cu: goto label_29b31c;
        case 0x29b320u: goto label_29b320;
        case 0x29b324u: goto label_29b324;
        case 0x29b328u: goto label_29b328;
        case 0x29b32cu: goto label_29b32c;
        case 0x29b330u: goto label_29b330;
        case 0x29b334u: goto label_29b334;
        case 0x29b338u: goto label_29b338;
        case 0x29b33cu: goto label_29b33c;
        case 0x29b340u: goto label_29b340;
        case 0x29b344u: goto label_29b344;
        case 0x29b348u: goto label_29b348;
        case 0x29b34cu: goto label_29b34c;
        case 0x29b350u: goto label_29b350;
        case 0x29b354u: goto label_29b354;
        case 0x29b358u: goto label_29b358;
        case 0x29b35cu: goto label_29b35c;
        case 0x29b360u: goto label_29b360;
        case 0x29b364u: goto label_29b364;
        case 0x29b368u: goto label_29b368;
        case 0x29b36cu: goto label_29b36c;
        case 0x29b370u: goto label_29b370;
        case 0x29b374u: goto label_29b374;
        case 0x29b378u: goto label_29b378;
        case 0x29b37cu: goto label_29b37c;
        case 0x29b380u: goto label_29b380;
        case 0x29b384u: goto label_29b384;
        case 0x29b388u: goto label_29b388;
        case 0x29b38cu: goto label_29b38c;
        case 0x29b390u: goto label_29b390;
        case 0x29b394u: goto label_29b394;
        case 0x29b398u: goto label_29b398;
        case 0x29b39cu: goto label_29b39c;
        case 0x29b3a0u: goto label_29b3a0;
        case 0x29b3a4u: goto label_29b3a4;
        case 0x29b3a8u: goto label_29b3a8;
        case 0x29b3acu: goto label_29b3ac;
        case 0x29b3b0u: goto label_29b3b0;
        case 0x29b3b4u: goto label_29b3b4;
        case 0x29b3b8u: goto label_29b3b8;
        case 0x29b3bcu: goto label_29b3bc;
        case 0x29b3c0u: goto label_29b3c0;
        case 0x29b3c4u: goto label_29b3c4;
        case 0x29b3c8u: goto label_29b3c8;
        case 0x29b3ccu: goto label_29b3cc;
        case 0x29b3d0u: goto label_29b3d0;
        case 0x29b3d4u: goto label_29b3d4;
        case 0x29b3d8u: goto label_29b3d8;
        case 0x29b3dcu: goto label_29b3dc;
        case 0x29b3e0u: goto label_29b3e0;
        case 0x29b3e4u: goto label_29b3e4;
        case 0x29b3e8u: goto label_29b3e8;
        case 0x29b3ecu: goto label_29b3ec;
        case 0x29b3f0u: goto label_29b3f0;
        case 0x29b3f4u: goto label_29b3f4;
        case 0x29b3f8u: goto label_29b3f8;
        case 0x29b3fcu: goto label_29b3fc;
        case 0x29b400u: goto label_29b400;
        case 0x29b404u: goto label_29b404;
        case 0x29b408u: goto label_29b408;
        case 0x29b40cu: goto label_29b40c;
        case 0x29b410u: goto label_29b410;
        case 0x29b414u: goto label_29b414;
        case 0x29b418u: goto label_29b418;
        case 0x29b41cu: goto label_29b41c;
        case 0x29b420u: goto label_29b420;
        case 0x29b424u: goto label_29b424;
        case 0x29b428u: goto label_29b428;
        case 0x29b42cu: goto label_29b42c;
        case 0x29b430u: goto label_29b430;
        case 0x29b434u: goto label_29b434;
        case 0x29b438u: goto label_29b438;
        case 0x29b43cu: goto label_29b43c;
        case 0x29b440u: goto label_29b440;
        case 0x29b444u: goto label_29b444;
        case 0x29b448u: goto label_29b448;
        case 0x29b44cu: goto label_29b44c;
        case 0x29b450u: goto label_29b450;
        case 0x29b454u: goto label_29b454;
        case 0x29b458u: goto label_29b458;
        case 0x29b45cu: goto label_29b45c;
        case 0x29b460u: goto label_29b460;
        case 0x29b464u: goto label_29b464;
        case 0x29b468u: goto label_29b468;
        case 0x29b46cu: goto label_29b46c;
        case 0x29b470u: goto label_29b470;
        case 0x29b474u: goto label_29b474;
        case 0x29b478u: goto label_29b478;
        case 0x29b47cu: goto label_29b47c;
        case 0x29b480u: goto label_29b480;
        case 0x29b484u: goto label_29b484;
        case 0x29b488u: goto label_29b488;
        case 0x29b48cu: goto label_29b48c;
        case 0x29b490u: goto label_29b490;
        case 0x29b494u: goto label_29b494;
        case 0x29b498u: goto label_29b498;
        case 0x29b49cu: goto label_29b49c;
        case 0x29b4a0u: goto label_29b4a0;
        case 0x29b4a4u: goto label_29b4a4;
        case 0x29b4a8u: goto label_29b4a8;
        case 0x29b4acu: goto label_29b4ac;
        case 0x29b4b0u: goto label_29b4b0;
        case 0x29b4b4u: goto label_29b4b4;
        case 0x29b4b8u: goto label_29b4b8;
        case 0x29b4bcu: goto label_29b4bc;
        case 0x29b4c0u: goto label_29b4c0;
        case 0x29b4c4u: goto label_29b4c4;
        case 0x29b4c8u: goto label_29b4c8;
        case 0x29b4ccu: goto label_29b4cc;
        case 0x29b4d0u: goto label_29b4d0;
        case 0x29b4d4u: goto label_29b4d4;
        case 0x29b4d8u: goto label_29b4d8;
        case 0x29b4dcu: goto label_29b4dc;
        case 0x29b4e0u: goto label_29b4e0;
        case 0x29b4e4u: goto label_29b4e4;
        case 0x29b4e8u: goto label_29b4e8;
        case 0x29b4ecu: goto label_29b4ec;
        case 0x29b4f0u: goto label_29b4f0;
        case 0x29b4f4u: goto label_29b4f4;
        case 0x29b4f8u: goto label_29b4f8;
        case 0x29b4fcu: goto label_29b4fc;
        case 0x29b500u: goto label_29b500;
        case 0x29b504u: goto label_29b504;
        case 0x29b508u: goto label_29b508;
        case 0x29b50cu: goto label_29b50c;
        case 0x29b510u: goto label_29b510;
        case 0x29b514u: goto label_29b514;
        case 0x29b518u: goto label_29b518;
        case 0x29b51cu: goto label_29b51c;
        case 0x29b520u: goto label_29b520;
        case 0x29b524u: goto label_29b524;
        case 0x29b528u: goto label_29b528;
        case 0x29b52cu: goto label_29b52c;
        case 0x29b530u: goto label_29b530;
        case 0x29b534u: goto label_29b534;
        case 0x29b538u: goto label_29b538;
        case 0x29b53cu: goto label_29b53c;
        case 0x29b540u: goto label_29b540;
        case 0x29b544u: goto label_29b544;
        case 0x29b548u: goto label_29b548;
        case 0x29b54cu: goto label_29b54c;
        case 0x29b550u: goto label_29b550;
        case 0x29b554u: goto label_29b554;
        case 0x29b558u: goto label_29b558;
        case 0x29b55cu: goto label_29b55c;
        case 0x29b560u: goto label_29b560;
        case 0x29b564u: goto label_29b564;
        case 0x29b568u: goto label_29b568;
        case 0x29b56cu: goto label_29b56c;
        case 0x29b570u: goto label_29b570;
        case 0x29b574u: goto label_29b574;
        case 0x29b578u: goto label_29b578;
        case 0x29b57cu: goto label_29b57c;
        case 0x29b580u: goto label_29b580;
        case 0x29b584u: goto label_29b584;
        case 0x29b588u: goto label_29b588;
        case 0x29b58cu: goto label_29b58c;
        case 0x29b590u: goto label_29b590;
        case 0x29b594u: goto label_29b594;
        case 0x29b598u: goto label_29b598;
        case 0x29b59cu: goto label_29b59c;
        case 0x29b5a0u: goto label_29b5a0;
        case 0x29b5a4u: goto label_29b5a4;
        case 0x29b5a8u: goto label_29b5a8;
        case 0x29b5acu: goto label_29b5ac;
        case 0x29b5b0u: goto label_29b5b0;
        case 0x29b5b4u: goto label_29b5b4;
        case 0x29b5b8u: goto label_29b5b8;
        case 0x29b5bcu: goto label_29b5bc;
        case 0x29b5c0u: goto label_29b5c0;
        case 0x29b5c4u: goto label_29b5c4;
        case 0x29b5c8u: goto label_29b5c8;
        case 0x29b5ccu: goto label_29b5cc;
        case 0x29b5d0u: goto label_29b5d0;
        case 0x29b5d4u: goto label_29b5d4;
        case 0x29b5d8u: goto label_29b5d8;
        case 0x29b5dcu: goto label_29b5dc;
        case 0x29b5e0u: goto label_29b5e0;
        case 0x29b5e4u: goto label_29b5e4;
        case 0x29b5e8u: goto label_29b5e8;
        case 0x29b5ecu: goto label_29b5ec;
        case 0x29b5f0u: goto label_29b5f0;
        case 0x29b5f4u: goto label_29b5f4;
        case 0x29b5f8u: goto label_29b5f8;
        case 0x29b5fcu: goto label_29b5fc;
        case 0x29b600u: goto label_29b600;
        case 0x29b604u: goto label_29b604;
        case 0x29b608u: goto label_29b608;
        case 0x29b60cu: goto label_29b60c;
        case 0x29b610u: goto label_29b610;
        case 0x29b614u: goto label_29b614;
        case 0x29b618u: goto label_29b618;
        case 0x29b61cu: goto label_29b61c;
        case 0x29b620u: goto label_29b620;
        case 0x29b624u: goto label_29b624;
        case 0x29b628u: goto label_29b628;
        case 0x29b62cu: goto label_29b62c;
        case 0x29b630u: goto label_29b630;
        case 0x29b634u: goto label_29b634;
        case 0x29b638u: goto label_29b638;
        case 0x29b63cu: goto label_29b63c;
        case 0x29b640u: goto label_29b640;
        case 0x29b644u: goto label_29b644;
        case 0x29b648u: goto label_29b648;
        case 0x29b64cu: goto label_29b64c;
        case 0x29b650u: goto label_29b650;
        case 0x29b654u: goto label_29b654;
        case 0x29b658u: goto label_29b658;
        case 0x29b65cu: goto label_29b65c;
        case 0x29b660u: goto label_29b660;
        case 0x29b664u: goto label_29b664;
        case 0x29b668u: goto label_29b668;
        case 0x29b66cu: goto label_29b66c;
        case 0x29b670u: goto label_29b670;
        case 0x29b674u: goto label_29b674;
        case 0x29b678u: goto label_29b678;
        case 0x29b67cu: goto label_29b67c;
        case 0x29b680u: goto label_29b680;
        case 0x29b684u: goto label_29b684;
        case 0x29b688u: goto label_29b688;
        case 0x29b68cu: goto label_29b68c;
        case 0x29b690u: goto label_29b690;
        case 0x29b694u: goto label_29b694;
        case 0x29b698u: goto label_29b698;
        case 0x29b69cu: goto label_29b69c;
        case 0x29b6a0u: goto label_29b6a0;
        case 0x29b6a4u: goto label_29b6a4;
        case 0x29b6a8u: goto label_29b6a8;
        case 0x29b6acu: goto label_29b6ac;
        case 0x29b6b0u: goto label_29b6b0;
        case 0x29b6b4u: goto label_29b6b4;
        case 0x29b6b8u: goto label_29b6b8;
        case 0x29b6bcu: goto label_29b6bc;
        case 0x29b6c0u: goto label_29b6c0;
        case 0x29b6c4u: goto label_29b6c4;
        case 0x29b6c8u: goto label_29b6c8;
        case 0x29b6ccu: goto label_29b6cc;
        case 0x29b6d0u: goto label_29b6d0;
        case 0x29b6d4u: goto label_29b6d4;
        case 0x29b6d8u: goto label_29b6d8;
        case 0x29b6dcu: goto label_29b6dc;
        case 0x29b6e0u: goto label_29b6e0;
        case 0x29b6e4u: goto label_29b6e4;
        case 0x29b6e8u: goto label_29b6e8;
        case 0x29b6ecu: goto label_29b6ec;
        case 0x29b6f0u: goto label_29b6f0;
        case 0x29b6f4u: goto label_29b6f4;
        case 0x29b6f8u: goto label_29b6f8;
        case 0x29b6fcu: goto label_29b6fc;
        case 0x29b700u: goto label_29b700;
        case 0x29b704u: goto label_29b704;
        case 0x29b708u: goto label_29b708;
        case 0x29b70cu: goto label_29b70c;
        case 0x29b710u: goto label_29b710;
        case 0x29b714u: goto label_29b714;
        case 0x29b718u: goto label_29b718;
        case 0x29b71cu: goto label_29b71c;
        case 0x29b720u: goto label_29b720;
        case 0x29b724u: goto label_29b724;
        case 0x29b728u: goto label_29b728;
        case 0x29b72cu: goto label_29b72c;
        case 0x29b730u: goto label_29b730;
        case 0x29b734u: goto label_29b734;
        case 0x29b738u: goto label_29b738;
        case 0x29b73cu: goto label_29b73c;
        case 0x29b740u: goto label_29b740;
        case 0x29b744u: goto label_29b744;
        case 0x29b748u: goto label_29b748;
        case 0x29b74cu: goto label_29b74c;
        case 0x29b750u: goto label_29b750;
        case 0x29b754u: goto label_29b754;
        case 0x29b758u: goto label_29b758;
        case 0x29b75cu: goto label_29b75c;
        default: break;
    }

    ctx->pc = 0x29b250u;

label_29b250:
    // 0x29b250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29b254:
    // 0x29b254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29b258:
    // 0x29b258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29b25c:
    // 0x29b25c: 0xc0a7b54  jal         func_29ED50
label_29b260:
    if (ctx->pc == 0x29B260u) {
        ctx->pc = 0x29B260u;
            // 0x29b260: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B264u;
        goto label_29b264;
    }
    ctx->pc = 0x29B25Cu;
    SET_GPR_U32(ctx, 31, 0x29B264u);
    ctx->pc = 0x29B260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B25Cu;
            // 0x29b260: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29ED50u;
    if (runtime->hasFunction(0x29ED50u)) {
        auto targetFn = runtime->lookupFunction(0x29ED50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B264u; }
        if (ctx->pc != 0x29B264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029ED50_0x29ed50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B264u; }
        if (ctx->pc != 0x29B264u) { return; }
    }
    ctx->pc = 0x29B264u;
label_29b264:
    // 0x29b264: 0xc0a7b40  jal         func_29ED00
label_29b268:
    if (ctx->pc == 0x29B268u) {
        ctx->pc = 0x29B268u;
            // 0x29b268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B26Cu;
        goto label_29b26c;
    }
    ctx->pc = 0x29B264u;
    SET_GPR_U32(ctx, 31, 0x29B26Cu);
    ctx->pc = 0x29B268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B264u;
            // 0x29b268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29ED00u;
    if (runtime->hasFunction(0x29ED00u)) {
        auto targetFn = runtime->lookupFunction(0x29ED00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B26Cu; }
        if (ctx->pc != 0x29B26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029ED00_0x29ed00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B26Cu; }
        if (ctx->pc != 0x29B26Cu) { return; }
    }
    ctx->pc = 0x29B26Cu;
label_29b26c:
    // 0x29b26c: 0xc0a7b9c  jal         func_29EE70
label_29b270:
    if (ctx->pc == 0x29B270u) {
        ctx->pc = 0x29B274u;
        goto label_29b274;
    }
    ctx->pc = 0x29B26Cu;
    SET_GPR_U32(ctx, 31, 0x29B274u);
    ctx->pc = 0x29EE70u;
    if (runtime->hasFunction(0x29EE70u)) {
        auto targetFn = runtime->lookupFunction(0x29EE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B274u; }
        if (ctx->pc != 0x29B274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EE70_0x29ee70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B274u; }
        if (ctx->pc != 0x29B274u) { return; }
    }
    ctx->pc = 0x29B274u;
label_29b274:
    // 0x29b274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29b278:
    // 0x29b278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b27c:
    // 0x29b27c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29b280:
    // 0x29b280: 0x3e00008  jr          $ra
label_29b284:
    if (ctx->pc == 0x29B284u) {
        ctx->pc = 0x29B284u;
            // 0x29b284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29B288u;
        goto label_29b288;
    }
    ctx->pc = 0x29B280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B280u;
            // 0x29b284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B288u;
label_29b288:
    // 0x29b288: 0x0  nop
    ctx->pc = 0x29b288u;
    // NOP
label_29b28c:
    // 0x29b28c: 0x0  nop
    ctx->pc = 0x29b28cu;
    // NOP
label_29b290:
    // 0x29b290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29b290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29b294:
    // 0x29b294: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b298:
    // 0x29b298: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29b298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_29b29c:
    // 0x29b29c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29b29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29b2a0:
    // 0x29b2a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29b2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29b2a4:
    // 0x29b2a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29b2a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b2a8:
    // 0x29b2a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29b2ac:
    // 0x29b2ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29b2acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29b2b0:
    // 0x29b2b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29b2b4:
    // 0x29b2b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x29b2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29b2b8:
    // 0x29b2b8: 0x8042e9f8  lb          $v0, -0x1608($v0)
    ctx->pc = 0x29b2b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961656)));
label_29b2bc:
    // 0x29b2bc: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x29b2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_29b2c0:
    // 0x29b2c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x29b2c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29b2c4:
    // 0x29b2c4: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_29b2c8:
    if (ctx->pc == 0x29B2C8u) {
        ctx->pc = 0x29B2C8u;
            // 0x29b2c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B2CCu;
        goto label_29b2cc;
    }
    ctx->pc = 0x29B2C4u;
    {
        const bool branch_taken_0x29b2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2C4u;
            // 0x29b2c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2c4) {
            ctx->pc = 0x29B50Cu;
            goto label_29b50c;
        }
    }
    ctx->pc = 0x29B2CCu;
label_29b2cc:
    // 0x29b2cc: 0x5260001a  beql        $s3, $zero, . + 4 + (0x1A << 2)
label_29b2d0:
    if (ctx->pc == 0x29B2D0u) {
        ctx->pc = 0x29B2D0u;
            // 0x29b2d0: 0xac000000  sw          $zero, 0x0($zero) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 0), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x29B2D4u;
        goto label_29b2d4;
    }
    ctx->pc = 0x29B2CCu;
    {
        const bool branch_taken_0x29b2cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b2cc) {
            ctx->pc = 0x29B2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2CCu;
            // 0x29b2d0: 0xac000000  sw          $zero, 0x0($zero) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 0), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B338u;
            goto label_29b338;
        }
    }
    ctx->pc = 0x29B2D4u;
label_29b2d4:
    // 0x29b2d4: 0xc0a76dc  jal         func_29DB70
label_29b2d8:
    if (ctx->pc == 0x29B2D8u) {
        ctx->pc = 0x29B2DCu;
        goto label_29b2dc;
    }
    ctx->pc = 0x29B2D4u;
    SET_GPR_U32(ctx, 31, 0x29B2DCu);
    ctx->pc = 0x29DB70u;
    if (runtime->hasFunction(0x29DB70u)) {
        auto targetFn = runtime->lookupFunction(0x29DB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B2DCu; }
        if (ctx->pc != 0x29B2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029DB70_0x29db70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B2DCu; }
        if (ctx->pc != 0x29B2DCu) { return; }
    }
    ctx->pc = 0x29B2DCu;
label_29b2dc:
    // 0x29b2dc: 0x56000012  bnel        $s0, $zero, . + 4 + (0x12 << 2)
label_29b2e0:
    if (ctx->pc == 0x29B2E0u) {
        ctx->pc = 0x29B2E0u;
            // 0x29b2e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B2E4u;
        goto label_29b2e4;
    }
    ctx->pc = 0x29B2DCu;
    {
        const bool branch_taken_0x29b2dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b2dc) {
            ctx->pc = 0x29B2E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2DCu;
            // 0x29b2e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B328u;
            goto label_29b328;
        }
    }
    ctx->pc = 0x29B2E4u;
label_29b2e4:
    // 0x29b2e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x29b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_29b2e8:
    // 0x29b2e8: 0x24040314  addiu       $a0, $zero, 0x314
    ctx->pc = 0x29b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 788));
label_29b2ec:
    // 0x29b2ec: 0x8c42d9f8  lw          $v0, -0x2608($v0)
    ctx->pc = 0x29b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957560)));
label_29b2f0:
    // 0x29b2f0: 0x40f809  jalr        $v0
label_29b2f4:
    if (ctx->pc == 0x29B2F4u) {
        ctx->pc = 0x29B2F4u;
            // 0x29b2f4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x29B2F8u;
        goto label_29b2f8;
    }
    ctx->pc = 0x29B2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29B2F8u);
        ctx->pc = 0x29B2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2F0u;
            // 0x29b2f4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29B2F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29B2F8u; }
            if (ctx->pc != 0x29B2F8u) { return; }
        }
        }
    }
    ctx->pc = 0x29B2F8u;
label_29b2f8:
    // 0x29b2f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29b2fc:
    if (ctx->pc == 0x29B2FCu) {
        ctx->pc = 0x29B2FCu;
            // 0x29b2fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B300u;
        goto label_29b300;
    }
    ctx->pc = 0x29B2F8u;
    {
        const bool branch_taken_0x29b2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2F8u;
            // 0x29b2fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2f8) {
            ctx->pc = 0x29B310u;
            goto label_29b310;
        }
    }
    ctx->pc = 0x29B300u;
label_29b300:
    // 0x29b300: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29b304:
    // 0x29b304: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29b304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29b308:
    // 0x29b308: 0xc0a77f8  jal         func_29DFE0
label_29b30c:
    if (ctx->pc == 0x29B30Cu) {
        ctx->pc = 0x29B30Cu;
            // 0x29b30c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x29B310u;
        goto label_29b310;
    }
    ctx->pc = 0x29B308u;
    SET_GPR_U32(ctx, 31, 0x29B310u);
    ctx->pc = 0x29B30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B308u;
            // 0x29b30c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFE0u;
    if (runtime->hasFunction(0x29DFE0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B310u; }
        if (ctx->pc != 0x29B310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029DFE0_0x29dfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B310u; }
        if (ctx->pc != 0x29B310u) { return; }
    }
    ctx->pc = 0x29B310u;
label_29b310:
    // 0x29b310: 0xc0a6c94  jal         func_29B250
label_29b314:
    if (ctx->pc == 0x29B314u) {
        ctx->pc = 0x29B314u;
            // 0x29b314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B318u;
        goto label_29b318;
    }
    ctx->pc = 0x29B310u;
    SET_GPR_U32(ctx, 31, 0x29B318u);
    ctx->pc = 0x29B314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B310u;
            // 0x29b314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B250u;
    goto label_29b250;
    ctx->pc = 0x29B318u;
label_29b318:
    // 0x29b318: 0xc0a79ac  jal         func_29E6B0
label_29b31c:
    if (ctx->pc == 0x29B31Cu) {
        ctx->pc = 0x29B31Cu;
            // 0x29b31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B320u;
        goto label_29b320;
    }
    ctx->pc = 0x29B318u;
    SET_GPR_U32(ctx, 31, 0x29B320u);
    ctx->pc = 0x29B31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B318u;
            // 0x29b31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E6B0u;
    if (runtime->hasFunction(0x29E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B320u; }
        if (ctx->pc != 0x29B320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E6B0_0x29e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B320u; }
        if (ctx->pc != 0x29B320u) { return; }
    }
    ctx->pc = 0x29B320u;
label_29b320:
    // 0x29b320: 0x10000007  b           . + 4 + (0x7 << 2)
label_29b324:
    if (ctx->pc == 0x29B324u) {
        ctx->pc = 0x29B328u;
        goto label_29b328;
    }
    ctx->pc = 0x29B320u;
    {
        const bool branch_taken_0x29b320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b320) {
            ctx->pc = 0x29B340u;
            goto label_29b340;
        }
    }
    ctx->pc = 0x29B328u;
label_29b328:
    // 0x29b328: 0xc0a6c94  jal         func_29B250
label_29b32c:
    if (ctx->pc == 0x29B32Cu) {
        ctx->pc = 0x29B330u;
        goto label_29b330;
    }
    ctx->pc = 0x29B328u;
    SET_GPR_U32(ctx, 31, 0x29B330u);
    ctx->pc = 0x29B250u;
    goto label_29b250;
    ctx->pc = 0x29B330u;
label_29b330:
    // 0x29b330: 0x10000003  b           . + 4 + (0x3 << 2)
label_29b334:
    if (ctx->pc == 0x29B334u) {
        ctx->pc = 0x29B338u;
        goto label_29b338;
    }
    ctx->pc = 0x29B330u;
    {
        const bool branch_taken_0x29b330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b330) {
            ctx->pc = 0x29B340u;
            goto label_29b340;
        }
    }
    ctx->pc = 0x29B338u;
label_29b338:
    // 0x29b338: 0x10000075  b           . + 4 + (0x75 << 2)
label_29b33c:
    if (ctx->pc == 0x29B33Cu) {
        ctx->pc = 0x29B33Cu;
            // 0x29b33c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29B340u;
        goto label_29b340;
    }
    ctx->pc = 0x29B338u;
    {
        const bool branch_taken_0x29b338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B338u;
            // 0x29b33c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b338) {
            ctx->pc = 0x29B510u;
            goto label_29b510;
        }
    }
    ctx->pc = 0x29B340u;
label_29b340:
    // 0x29b340: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b344:
    // 0x29b344: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x29b344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_29b348:
    // 0x29b348: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29b348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29b34c:
    // 0x29b34c: 0xc0a7a88  jal         func_29EA20
label_29b350:
    if (ctx->pc == 0x29B350u) {
        ctx->pc = 0x29B350u;
            // 0x29b350: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29B354u;
        goto label_29b354;
    }
    ctx->pc = 0x29B34Cu;
    SET_GPR_U32(ctx, 31, 0x29B354u);
    ctx->pc = 0x29B350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B34Cu;
            // 0x29b350: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B354u; }
        if (ctx->pc != 0x29B354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B354u; }
        if (ctx->pc != 0x29B354u) { return; }
    }
    ctx->pc = 0x29B354u;
label_29b354:
    // 0x29b354: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x29b354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_29b358:
    // 0x29b358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29b358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29b35c:
    // 0x29b35c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_29b360:
    if (ctx->pc == 0x29B360u) {
        ctx->pc = 0x29B360u;
            // 0x29b360: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29B364u;
        goto label_29b364;
    }
    ctx->pc = 0x29B35Cu;
    {
        const bool branch_taken_0x29b35c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B35Cu;
            // 0x29b360: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b35c) {
            ctx->pc = 0x29B3A8u;
            goto label_29b3a8;
        }
    }
    ctx->pc = 0x29B364u;
label_29b364:
    // 0x29b364: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29b364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29b368:
    // 0x29b368: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b36c:
    // 0x29b36c: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x29b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_29b370:
    // 0x29b370: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29b374:
    // 0x29b374: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29b374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_29b378:
    // 0x29b378: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29b378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29b37c:
    // 0x29b37c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29b380:
    // 0x29b380: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b384:
    // 0x29b384: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x29b384u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_29b388:
    // 0x29b388: 0x2442f6c0  addiu       $v0, $v0, -0x940
    ctx->pc = 0x29b388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964928));
label_29b38c:
    // 0x29b38c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29b390:
    // 0x29b390: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29b390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29b394:
    // 0x29b394: 0x2463f6a0  addiu       $v1, $v1, -0x960
    ctx->pc = 0x29b394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964896));
label_29b398:
    // 0x29b398: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b39c:
    // 0x29b39c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_29b3a0:
    // 0x29b3a0: 0x2442f610  addiu       $v0, $v0, -0x9F0
    ctx->pc = 0x29b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964752));
label_29b3a4:
    // 0x29b3a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29b3a8:
    // 0x29b3a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b3ac:
    // 0x29b3ac: 0x8c44eaa8  lw          $a0, -0x1558($v0)
    ctx->pc = 0x29b3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961832)));
label_29b3b0:
    // 0x29b3b0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_29b3b4:
    if (ctx->pc == 0x29B3B4u) {
        ctx->pc = 0x29B3B8u;
        goto label_29b3b8;
    }
    ctx->pc = 0x29B3B0u;
    {
        const bool branch_taken_0x29b3b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b3b0) {
            ctx->pc = 0x29B3F8u;
            goto label_29b3f8;
        }
    }
    ctx->pc = 0x29B3B8u;
label_29b3b8:
    // 0x29b3b8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x29b3b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_29b3bc:
    // 0x29b3bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_29b3c0:
    if (ctx->pc == 0x29B3C0u) {
        ctx->pc = 0x29B3C4u;
        goto label_29b3c4;
    }
    ctx->pc = 0x29B3BCu;
    {
        const bool branch_taken_0x29b3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b3bc) {
            ctx->pc = 0x29B3F8u;
            goto label_29b3f8;
        }
    }
    ctx->pc = 0x29B3C4u;
label_29b3c4:
    // 0x29b3c4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x29b3c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_29b3c8:
    // 0x29b3c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29b3cc:
    // 0x29b3cc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x29b3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_29b3d0:
    // 0x29b3d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29b3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_29b3d4:
    // 0x29b3d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29b3d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29b3d8:
    // 0x29b3d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_29b3dc:
    if (ctx->pc == 0x29B3DCu) {
        ctx->pc = 0x29B3E0u;
        goto label_29b3e0;
    }
    ctx->pc = 0x29B3D8u;
    {
        const bool branch_taken_0x29b3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b3d8) {
            ctx->pc = 0x29B3F8u;
            goto label_29b3f8;
        }
    }
    ctx->pc = 0x29B3E0u;
label_29b3e0:
    // 0x29b3e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_29b3e4:
    if (ctx->pc == 0x29B3E4u) {
        ctx->pc = 0x29B3E8u;
        goto label_29b3e8;
    }
    ctx->pc = 0x29B3E0u;
    {
        const bool branch_taken_0x29b3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b3e0) {
            ctx->pc = 0x29B3F8u;
            goto label_29b3f8;
        }
    }
    ctx->pc = 0x29B3E8u;
label_29b3e8:
    // 0x29b3e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29b3e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29b3ec:
    // 0x29b3ec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29b3ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29b3f0:
    // 0x29b3f0: 0x320f809  jalr        $t9
label_29b3f4:
    if (ctx->pc == 0x29B3F4u) {
        ctx->pc = 0x29B3F4u;
            // 0x29b3f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29B3F8u;
        goto label_29b3f8;
    }
    ctx->pc = 0x29B3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29B3F8u);
        ctx->pc = 0x29B3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B3F0u;
            // 0x29b3f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29B3F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29B3F8u; }
            if (ctx->pc != 0x29B3F8u) { return; }
        }
        }
    }
    ctx->pc = 0x29B3F8u;
label_29b3f8:
    // 0x29b3f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b3fc:
    // 0x29b3fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_29b400:
    // 0x29b400: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29b400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29b404:
    // 0x29b404: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x29b404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_29b408:
    // 0x29b408: 0xac70eaa8  sw          $s0, -0x1558($v1)
    ctx->pc = 0x29b408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961832), GPR_U32(ctx, 16));
label_29b40c:
    // 0x29b40c: 0xc0a7a88  jal         func_29EA20
label_29b410:
    if (ctx->pc == 0x29B410u) {
        ctx->pc = 0x29B410u;
            // 0x29b410: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29B414u;
        goto label_29b414;
    }
    ctx->pc = 0x29B40Cu;
    SET_GPR_U32(ctx, 31, 0x29B414u);
    ctx->pc = 0x29B410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B40Cu;
            // 0x29b410: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B414u; }
        if (ctx->pc != 0x29B414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B414u; }
        if (ctx->pc != 0x29B414u) { return; }
    }
    ctx->pc = 0x29B414u;
label_29b414:
    // 0x29b414: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x29b414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_29b418:
    // 0x29b418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29b418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29b41c:
    // 0x29b41c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_29b420:
    if (ctx->pc == 0x29B420u) {
        ctx->pc = 0x29B420u;
            // 0x29b420: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29B424u;
        goto label_29b424;
    }
    ctx->pc = 0x29B41Cu;
    {
        const bool branch_taken_0x29b41c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B41Cu;
            // 0x29b420: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b41c) {
            ctx->pc = 0x29B488u;
            goto label_29b488;
        }
    }
    ctx->pc = 0x29B424u;
label_29b424:
    // 0x29b424: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b428:
    // 0x29b428: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x29b428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_29b42c:
    // 0x29b42c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29b430:
    // 0x29b430: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29b430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29b434:
    // 0x29b434: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b438:
    // 0x29b438: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29b43c:
    // 0x29b43c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29b440:
    // 0x29b440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29b440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29b444:
    // 0x29b444: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x29b444u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_29b448:
    // 0x29b448: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b44c:
    // 0x29b44c: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x29b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
label_29b450:
    // 0x29b450: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29b450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29b454:
    // 0x29b454: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b458:
    // 0x29b458: 0x2442f5d0  addiu       $v0, $v0, -0xA30
    ctx->pc = 0x29b458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964688));
label_29b45c:
    // 0x29b45c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29b45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29b460:
    // 0x29b460: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b464:
    // 0x29b464: 0x2442f5a0  addiu       $v0, $v0, -0xA60
    ctx->pc = 0x29b464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964640));
label_29b468:
    // 0x29b468: 0xc0a748c  jal         func_29D230
label_29b46c:
    if (ctx->pc == 0x29B46Cu) {
        ctx->pc = 0x29B46Cu;
            // 0x29b46c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29B470u;
        goto label_29b470;
    }
    ctx->pc = 0x29B468u;
    SET_GPR_U32(ctx, 31, 0x29B470u);
    ctx->pc = 0x29B46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B468u;
            // 0x29b46c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D230u;
    if (runtime->hasFunction(0x29D230u)) {
        auto targetFn = runtime->lookupFunction(0x29D230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B470u; }
        if (ctx->pc != 0x29B470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D230_0x29d230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B470u; }
        if (ctx->pc != 0x29B470u) { return; }
    }
    ctx->pc = 0x29B470u;
label_29b470:
    // 0x29b470: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x29b470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_29b474:
    // 0x29b474: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29b474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_29b478:
    // 0x29b478: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x29b478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_29b47c:
    // 0x29b47c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x29b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_29b480:
    // 0x29b480: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x29b480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
label_29b484:
    // 0x29b484: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x29b484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
label_29b488:
    // 0x29b488: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b48c:
    // 0x29b48c: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x29b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
label_29b490:
    // 0x29b490: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_29b494:
    if (ctx->pc == 0x29B494u) {
        ctx->pc = 0x29B498u;
        goto label_29b498;
    }
    ctx->pc = 0x29B490u;
    {
        const bool branch_taken_0x29b490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b490) {
            ctx->pc = 0x29B4D8u;
            goto label_29b4d8;
        }
    }
    ctx->pc = 0x29B498u;
label_29b498:
    // 0x29b498: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x29b498u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_29b49c:
    // 0x29b49c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_29b4a0:
    if (ctx->pc == 0x29B4A0u) {
        ctx->pc = 0x29B4A4u;
        goto label_29b4a4;
    }
    ctx->pc = 0x29B49Cu;
    {
        const bool branch_taken_0x29b49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b49c) {
            ctx->pc = 0x29B4D8u;
            goto label_29b4d8;
        }
    }
    ctx->pc = 0x29B4A4u;
label_29b4a4:
    // 0x29b4a4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x29b4a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_29b4a8:
    // 0x29b4a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29b4ac:
    // 0x29b4ac: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x29b4acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_29b4b0:
    // 0x29b4b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29b4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_29b4b4:
    // 0x29b4b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29b4b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29b4b8:
    // 0x29b4b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_29b4bc:
    if (ctx->pc == 0x29B4BCu) {
        ctx->pc = 0x29B4C0u;
        goto label_29b4c0;
    }
    ctx->pc = 0x29B4B8u;
    {
        const bool branch_taken_0x29b4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b4b8) {
            ctx->pc = 0x29B4D8u;
            goto label_29b4d8;
        }
    }
    ctx->pc = 0x29B4C0u;
label_29b4c0:
    // 0x29b4c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_29b4c4:
    if (ctx->pc == 0x29B4C4u) {
        ctx->pc = 0x29B4C8u;
        goto label_29b4c8;
    }
    ctx->pc = 0x29B4C0u;
    {
        const bool branch_taken_0x29b4c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b4c0) {
            ctx->pc = 0x29B4D8u;
            goto label_29b4d8;
        }
    }
    ctx->pc = 0x29B4C8u;
label_29b4c8:
    // 0x29b4c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29b4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29b4cc:
    // 0x29b4cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29b4ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29b4d0:
    // 0x29b4d0: 0x320f809  jalr        $t9
label_29b4d4:
    if (ctx->pc == 0x29B4D4u) {
        ctx->pc = 0x29B4D4u;
            // 0x29b4d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29B4D8u;
        goto label_29b4d8;
    }
    ctx->pc = 0x29B4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29B4D8u);
        ctx->pc = 0x29B4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B4D0u;
            // 0x29b4d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29B4D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29B4D8u; }
            if (ctx->pc != 0x29B4D8u) { return; }
        }
        }
    }
    ctx->pc = 0x29B4D8u;
label_29b4d8:
    // 0x29b4d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b4dc:
    // 0x29b4dc: 0xc0a6bc8  jal         func_29AF20
label_29b4e0:
    if (ctx->pc == 0x29B4E0u) {
        ctx->pc = 0x29B4E0u;
            // 0x29b4e0: 0xac50ea18  sw          $s0, -0x15E8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961688), GPR_U32(ctx, 16));
        ctx->pc = 0x29B4E4u;
        goto label_29b4e4;
    }
    ctx->pc = 0x29B4DCu;
    SET_GPR_U32(ctx, 31, 0x29B4E4u);
    ctx->pc = 0x29B4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B4DCu;
            // 0x29b4e0: 0xac50ea18  sw          $s0, -0x15E8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961688), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AF20u;
    if (runtime->hasFunction(0x29AF20u)) {
        auto targetFn = runtime->lookupFunction(0x29AF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B4E4u; }
        if (ctx->pc != 0x29B4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029AF20_0x29af20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B4E4u; }
        if (ctx->pc != 0x29B4E4u) { return; }
    }
    ctx->pc = 0x29B4E4u;
label_29b4e4:
    // 0x29b4e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b4e8:
    // 0x29b4e8: 0x8c44ea00  lw          $a0, -0x1600($v0)
    ctx->pc = 0x29b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961664)));
label_29b4ec:
    // 0x29b4ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29b4ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29b4f0:
    // 0x29b4f0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x29b4f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_29b4f4:
    // 0x29b4f4: 0x320f809  jalr        $t9
label_29b4f8:
    if (ctx->pc == 0x29B4F8u) {
        ctx->pc = 0x29B4FCu;
        goto label_29b4fc;
    }
    ctx->pc = 0x29B4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29B4FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29B4FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29B4FCu; }
            if (ctx->pc != 0x29B4FCu) { return; }
        }
        }
    }
    ctx->pc = 0x29B4FCu;
label_29b4fc:
    // 0x29b4fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29b500:
    // 0x29b500: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b504:
    // 0x29b504: 0xc0a6bc4  jal         func_29AF10
label_29b508:
    if (ctx->pc == 0x29B508u) {
        ctx->pc = 0x29B508u;
            // 0x29b508: 0xa043e9f8  sb          $v1, -0x1608($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961656), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29B50Cu;
        goto label_29b50c;
    }
    ctx->pc = 0x29B504u;
    SET_GPR_U32(ctx, 31, 0x29B50Cu);
    ctx->pc = 0x29B508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B504u;
            // 0x29b508: 0xa043e9f8  sb          $v1, -0x1608($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961656), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AF10u;
    if (runtime->hasFunction(0x29AF10u)) {
        auto targetFn = runtime->lookupFunction(0x29AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B50Cu; }
        if (ctx->pc != 0x29B50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029AF10_0x29af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B50Cu; }
        if (ctx->pc != 0x29B50Cu) { return; }
    }
    ctx->pc = 0x29B50Cu;
label_29b50c:
    // 0x29b50c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b510:
    // 0x29b510: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29b510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29b514:
    // 0x29b514: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29b514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29b518:
    // 0x29b518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29b518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29b51c:
    // 0x29b51c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29b520:
    // 0x29b520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29b524:
    // 0x29b524: 0x3e00008  jr          $ra
label_29b528:
    if (ctx->pc == 0x29B528u) {
        ctx->pc = 0x29B528u;
            // 0x29b528: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x29B52Cu;
        goto label_29b52c;
    }
    ctx->pc = 0x29B524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B524u;
            // 0x29b528: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B52Cu;
label_29b52c:
    // 0x29b52c: 0x0  nop
    ctx->pc = 0x29b52cu;
    // NOP
label_29b530:
    // 0x29b530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29b534:
    // 0x29b534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29b538:
    // 0x29b538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29b53c:
    // 0x29b53c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b540:
    // 0x29b540: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_29b544:
    if (ctx->pc == 0x29B544u) {
        ctx->pc = 0x29B544u;
            // 0x29b544: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B548u;
        goto label_29b548;
    }
    ctx->pc = 0x29B540u;
    {
        const bool branch_taken_0x29b540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b540) {
            ctx->pc = 0x29B544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B540u;
            // 0x29b544: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B5B0u;
            goto label_29b5b0;
        }
    }
    ctx->pc = 0x29B548u;
label_29b548:
    // 0x29b548: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b54c:
    // 0x29b54c: 0x2442f5d0  addiu       $v0, $v0, -0xA30
    ctx->pc = 0x29b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964688));
label_29b550:
    // 0x29b550: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_29b554:
    if (ctx->pc == 0x29B554u) {
        ctx->pc = 0x29B554u;
            // 0x29b554: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29B558u;
        goto label_29b558;
    }
    ctx->pc = 0x29B550u;
    {
        const bool branch_taken_0x29b550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B550u;
            // 0x29b554: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b550) {
            ctx->pc = 0x29B584u;
            goto label_29b584;
        }
    }
    ctx->pc = 0x29B558u;
label_29b558:
    // 0x29b558: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b55c:
    // 0x29b55c: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x29b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
label_29b560:
    // 0x29b560: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_29b564:
    if (ctx->pc == 0x29B564u) {
        ctx->pc = 0x29B564u;
            // 0x29b564: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29B568u;
        goto label_29b568;
    }
    ctx->pc = 0x29B560u;
    {
        const bool branch_taken_0x29b560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B560u;
            // 0x29b564: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b560) {
            ctx->pc = 0x29B584u;
            goto label_29b584;
        }
    }
    ctx->pc = 0x29B568u;
label_29b568:
    // 0x29b568: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b56c:
    // 0x29b56c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29b570:
    // 0x29b570: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29b574:
    if (ctx->pc == 0x29B574u) {
        ctx->pc = 0x29B574u;
            // 0x29b574: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29B578u;
        goto label_29b578;
    }
    ctx->pc = 0x29B570u;
    {
        const bool branch_taken_0x29b570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B570u;
            // 0x29b574: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b570) {
            ctx->pc = 0x29B584u;
            goto label_29b584;
        }
    }
    ctx->pc = 0x29B578u;
label_29b578:
    // 0x29b578: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b57c:
    // 0x29b57c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29b580:
    // 0x29b580: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29b580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29b584:
    // 0x29b584: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x29b584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_29b588:
    // 0x29b588: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29b588u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29b58c:
    // 0x29b58c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_29b590:
    if (ctx->pc == 0x29B590u) {
        ctx->pc = 0x29B594u;
        goto label_29b594;
    }
    ctx->pc = 0x29B58Cu;
    {
        const bool branch_taken_0x29b58c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29b58c) {
            ctx->pc = 0x29B5ACu;
            goto label_29b5ac;
        }
    }
    ctx->pc = 0x29B594u;
label_29b594:
    // 0x29b594: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b598:
    // 0x29b598: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x29b598u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_29b59c:
    // 0x29b59c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29b59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29b5a0:
    // 0x29b5a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29b5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b5a4:
    // 0x29b5a4: 0xc0a7ab4  jal         func_29EAD0
label_29b5a8:
    if (ctx->pc == 0x29B5A8u) {
        ctx->pc = 0x29B5A8u;
            // 0x29b5a8: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29B5ACu;
        goto label_29b5ac;
    }
    ctx->pc = 0x29B5A4u;
    SET_GPR_U32(ctx, 31, 0x29B5ACu);
    ctx->pc = 0x29B5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B5A4u;
            // 0x29b5a8: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B5ACu; }
        if (ctx->pc != 0x29B5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B5ACu; }
        if (ctx->pc != 0x29B5ACu) { return; }
    }
    ctx->pc = 0x29B5ACu;
label_29b5ac:
    // 0x29b5ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b5b0:
    // 0x29b5b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29b5b4:
    // 0x29b5b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29b5b8:
    // 0x29b5b8: 0x3e00008  jr          $ra
label_29b5bc:
    if (ctx->pc == 0x29B5BCu) {
        ctx->pc = 0x29B5BCu;
            // 0x29b5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29B5C0u;
        goto label_29b5c0;
    }
    ctx->pc = 0x29B5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B5B8u;
            // 0x29b5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B5C0u;
label_29b5c0:
    // 0x29b5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29b5c4:
    // 0x29b5c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29b5c8:
    // 0x29b5c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29b5cc:
    // 0x29b5cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b5d0:
    // 0x29b5d0: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_29b5d4:
    if (ctx->pc == 0x29B5D4u) {
        ctx->pc = 0x29B5D4u;
            // 0x29b5d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B5D8u;
        goto label_29b5d8;
    }
    ctx->pc = 0x29B5D0u;
    {
        const bool branch_taken_0x29b5d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b5d0) {
            ctx->pc = 0x29B5D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B5D0u;
            // 0x29b5d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B630u;
            goto label_29b630;
        }
    }
    ctx->pc = 0x29B5D8u;
label_29b5d8:
    // 0x29b5d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b5dc:
    // 0x29b5dc: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x29b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
label_29b5e0:
    // 0x29b5e0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_29b5e4:
    if (ctx->pc == 0x29B5E4u) {
        ctx->pc = 0x29B5E4u;
            // 0x29b5e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29B5E8u;
        goto label_29b5e8;
    }
    ctx->pc = 0x29B5E0u;
    {
        const bool branch_taken_0x29b5e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B5E0u;
            // 0x29b5e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b5e0) {
            ctx->pc = 0x29B604u;
            goto label_29b604;
        }
    }
    ctx->pc = 0x29B5E8u;
label_29b5e8:
    // 0x29b5e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b5ec:
    // 0x29b5ec: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29b5f0:
    // 0x29b5f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29b5f4:
    if (ctx->pc == 0x29B5F4u) {
        ctx->pc = 0x29B5F4u;
            // 0x29b5f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29B5F8u;
        goto label_29b5f8;
    }
    ctx->pc = 0x29B5F0u;
    {
        const bool branch_taken_0x29b5f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B5F0u;
            // 0x29b5f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b5f0) {
            ctx->pc = 0x29B604u;
            goto label_29b604;
        }
    }
    ctx->pc = 0x29B5F8u;
label_29b5f8:
    // 0x29b5f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b5fc:
    // 0x29b5fc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29b600:
    // 0x29b600: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29b600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29b604:
    // 0x29b604: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x29b604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_29b608:
    // 0x29b608: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29b608u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29b60c:
    // 0x29b60c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_29b610:
    if (ctx->pc == 0x29B610u) {
        ctx->pc = 0x29B614u;
        goto label_29b614;
    }
    ctx->pc = 0x29B60Cu;
    {
        const bool branch_taken_0x29b60c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29b60c) {
            ctx->pc = 0x29B62Cu;
            goto label_29b62c;
        }
    }
    ctx->pc = 0x29B614u;
label_29b614:
    // 0x29b614: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b618:
    // 0x29b618: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x29b618u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_29b61c:
    // 0x29b61c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29b620:
    // 0x29b620: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29b620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b624:
    // 0x29b624: 0xc0a7ab4  jal         func_29EAD0
label_29b628:
    if (ctx->pc == 0x29B628u) {
        ctx->pc = 0x29B628u;
            // 0x29b628: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29B62Cu;
        goto label_29b62c;
    }
    ctx->pc = 0x29B624u;
    SET_GPR_U32(ctx, 31, 0x29B62Cu);
    ctx->pc = 0x29B628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B624u;
            // 0x29b628: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B62Cu; }
        if (ctx->pc != 0x29B62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B62Cu; }
        if (ctx->pc != 0x29B62Cu) { return; }
    }
    ctx->pc = 0x29B62Cu;
label_29b62c:
    // 0x29b62c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b62cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b630:
    // 0x29b630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29b634:
    // 0x29b634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29b638:
    // 0x29b638: 0x3e00008  jr          $ra
label_29b63c:
    if (ctx->pc == 0x29B63Cu) {
        ctx->pc = 0x29B63Cu;
            // 0x29b63c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29B640u;
        goto label_29b640;
    }
    ctx->pc = 0x29B638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B638u;
            // 0x29b63c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B640u;
label_29b640:
    // 0x29b640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29b644:
    // 0x29b644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29b648:
    // 0x29b648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29b64c:
    // 0x29b64c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b64cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b650:
    // 0x29b650: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_29b654:
    if (ctx->pc == 0x29B654u) {
        ctx->pc = 0x29B654u;
            // 0x29b654: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B658u;
        goto label_29b658;
    }
    ctx->pc = 0x29B650u;
    {
        const bool branch_taken_0x29b650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b650) {
            ctx->pc = 0x29B654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B650u;
            // 0x29b654: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B6C0u;
            goto label_29b6c0;
        }
    }
    ctx->pc = 0x29B658u;
label_29b658:
    // 0x29b658: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b65c:
    // 0x29b65c: 0x2442f6a0  addiu       $v0, $v0, -0x960
    ctx->pc = 0x29b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964896));
label_29b660:
    // 0x29b660: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_29b664:
    if (ctx->pc == 0x29B664u) {
        ctx->pc = 0x29B664u;
            // 0x29b664: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29B668u;
        goto label_29b668;
    }
    ctx->pc = 0x29B660u;
    {
        const bool branch_taken_0x29b660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B660u;
            // 0x29b664: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b660) {
            ctx->pc = 0x29B694u;
            goto label_29b694;
        }
    }
    ctx->pc = 0x29B668u;
label_29b668:
    // 0x29b668: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b66c:
    // 0x29b66c: 0x2442f6c0  addiu       $v0, $v0, -0x940
    ctx->pc = 0x29b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964928));
label_29b670:
    // 0x29b670: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_29b674:
    if (ctx->pc == 0x29B674u) {
        ctx->pc = 0x29B674u;
            // 0x29b674: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29B678u;
        goto label_29b678;
    }
    ctx->pc = 0x29B670u;
    {
        const bool branch_taken_0x29b670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B670u;
            // 0x29b674: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b670) {
            ctx->pc = 0x29B694u;
            goto label_29b694;
        }
    }
    ctx->pc = 0x29B678u;
label_29b678:
    // 0x29b678: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b67c:
    // 0x29b67c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29b680:
    // 0x29b680: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29b684:
    if (ctx->pc == 0x29B684u) {
        ctx->pc = 0x29B684u;
            // 0x29b684: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29B688u;
        goto label_29b688;
    }
    ctx->pc = 0x29B680u;
    {
        const bool branch_taken_0x29b680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B680u;
            // 0x29b684: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b680) {
            ctx->pc = 0x29B694u;
            goto label_29b694;
        }
    }
    ctx->pc = 0x29B688u;
label_29b688:
    // 0x29b688: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b68c:
    // 0x29b68c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29b690:
    // 0x29b690: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29b690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29b694:
    // 0x29b694: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x29b694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_29b698:
    // 0x29b698: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29b698u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29b69c:
    // 0x29b69c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_29b6a0:
    if (ctx->pc == 0x29B6A0u) {
        ctx->pc = 0x29B6A4u;
        goto label_29b6a4;
    }
    ctx->pc = 0x29B69Cu;
    {
        const bool branch_taken_0x29b69c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29b69c) {
            ctx->pc = 0x29B6BCu;
            goto label_29b6bc;
        }
    }
    ctx->pc = 0x29B6A4u;
label_29b6a4:
    // 0x29b6a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b6a8:
    // 0x29b6a8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x29b6a8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_29b6ac:
    // 0x29b6ac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29b6b0:
    // 0x29b6b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29b6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b6b4:
    // 0x29b6b4: 0xc0a7ab4  jal         func_29EAD0
label_29b6b8:
    if (ctx->pc == 0x29B6B8u) {
        ctx->pc = 0x29B6B8u;
            // 0x29b6b8: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29B6BCu;
        goto label_29b6bc;
    }
    ctx->pc = 0x29B6B4u;
    SET_GPR_U32(ctx, 31, 0x29B6BCu);
    ctx->pc = 0x29B6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B6B4u;
            // 0x29b6b8: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B6BCu; }
        if (ctx->pc != 0x29B6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B6BCu; }
        if (ctx->pc != 0x29B6BCu) { return; }
    }
    ctx->pc = 0x29B6BCu;
label_29b6bc:
    // 0x29b6bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b6c0:
    // 0x29b6c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29b6c4:
    // 0x29b6c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b6c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29b6c8:
    // 0x29b6c8: 0x3e00008  jr          $ra
label_29b6cc:
    if (ctx->pc == 0x29B6CCu) {
        ctx->pc = 0x29B6CCu;
            // 0x29b6cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29B6D0u;
        goto label_29b6d0;
    }
    ctx->pc = 0x29B6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B6C8u;
            // 0x29b6cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B6D0u;
label_29b6d0:
    // 0x29b6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29b6d4:
    // 0x29b6d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29b6d8:
    // 0x29b6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29b6dc:
    // 0x29b6dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b6e0:
    // 0x29b6e0: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_29b6e4:
    if (ctx->pc == 0x29B6E4u) {
        ctx->pc = 0x29B6E4u;
            // 0x29b6e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B6E8u;
        goto label_29b6e8;
    }
    ctx->pc = 0x29B6E0u;
    {
        const bool branch_taken_0x29b6e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b6e0) {
            ctx->pc = 0x29B6E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B6E0u;
            // 0x29b6e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B740u;
            goto label_29b740;
        }
    }
    ctx->pc = 0x29B6E8u;
label_29b6e8:
    // 0x29b6e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b6ec:
    // 0x29b6ec: 0x2442f6c0  addiu       $v0, $v0, -0x940
    ctx->pc = 0x29b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964928));
label_29b6f0:
    // 0x29b6f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_29b6f4:
    if (ctx->pc == 0x29B6F4u) {
        ctx->pc = 0x29B6F4u;
            // 0x29b6f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29B6F8u;
        goto label_29b6f8;
    }
    ctx->pc = 0x29B6F0u;
    {
        const bool branch_taken_0x29b6f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B6F0u;
            // 0x29b6f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6f0) {
            ctx->pc = 0x29B714u;
            goto label_29b714;
        }
    }
    ctx->pc = 0x29B6F8u;
label_29b6f8:
    // 0x29b6f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b6fc:
    // 0x29b6fc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29b700:
    // 0x29b700: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29b704:
    if (ctx->pc == 0x29B704u) {
        ctx->pc = 0x29B704u;
            // 0x29b704: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29B708u;
        goto label_29b708;
    }
    ctx->pc = 0x29B700u;
    {
        const bool branch_taken_0x29b700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B700u;
            // 0x29b704: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b700) {
            ctx->pc = 0x29B714u;
            goto label_29b714;
        }
    }
    ctx->pc = 0x29B708u;
label_29b708:
    // 0x29b708: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b70c:
    // 0x29b70c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29b710:
    // 0x29b710: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29b710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29b714:
    // 0x29b714: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x29b714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_29b718:
    // 0x29b718: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29b718u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29b71c:
    // 0x29b71c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_29b720:
    if (ctx->pc == 0x29B720u) {
        ctx->pc = 0x29B724u;
        goto label_29b724;
    }
    ctx->pc = 0x29B71Cu;
    {
        const bool branch_taken_0x29b71c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29b71c) {
            ctx->pc = 0x29B73Cu;
            goto label_29b73c;
        }
    }
    ctx->pc = 0x29B724u;
label_29b724:
    // 0x29b724: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b728:
    // 0x29b728: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x29b728u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_29b72c:
    // 0x29b72c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29b730:
    // 0x29b730: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29b730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b734:
    // 0x29b734: 0xc0a7ab4  jal         func_29EAD0
label_29b738:
    if (ctx->pc == 0x29B738u) {
        ctx->pc = 0x29B738u;
            // 0x29b738: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29B73Cu;
        goto label_29b73c;
    }
    ctx->pc = 0x29B734u;
    SET_GPR_U32(ctx, 31, 0x29B73Cu);
    ctx->pc = 0x29B738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B734u;
            // 0x29b738: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B73Cu; }
        if (ctx->pc != 0x29B73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B73Cu; }
        if (ctx->pc != 0x29B73Cu) { return; }
    }
    ctx->pc = 0x29B73Cu;
label_29b73c:
    // 0x29b73c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b73cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b740:
    // 0x29b740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29b744:
    // 0x29b744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29b748:
    // 0x29b748: 0x3e00008  jr          $ra
label_29b74c:
    if (ctx->pc == 0x29B74Cu) {
        ctx->pc = 0x29B74Cu;
            // 0x29b74c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29B750u;
        goto label_29b750;
    }
    ctx->pc = 0x29B748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B748u;
            // 0x29b74c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B750u;
label_29b750:
    // 0x29b750: 0x3e00008  jr          $ra
label_29b754:
    if (ctx->pc == 0x29B754u) {
        ctx->pc = 0x29B758u;
        goto label_29b758;
    }
    ctx->pc = 0x29B750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B758u;
label_29b758:
    // 0x29b758: 0x0  nop
    ctx->pc = 0x29b758u;
    // NOP
label_29b75c:
    // 0x29b75c: 0x0  nop
    ctx->pc = 0x29b75cu;
    // NOP
}
