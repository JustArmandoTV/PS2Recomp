#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051B180
// Address: 0x51b180 - 0x51b540
void sub_0051B180_0x51b180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051B180_0x51b180");
#endif

    switch (ctx->pc) {
        case 0x51b180u: goto label_51b180;
        case 0x51b184u: goto label_51b184;
        case 0x51b188u: goto label_51b188;
        case 0x51b18cu: goto label_51b18c;
        case 0x51b190u: goto label_51b190;
        case 0x51b194u: goto label_51b194;
        case 0x51b198u: goto label_51b198;
        case 0x51b19cu: goto label_51b19c;
        case 0x51b1a0u: goto label_51b1a0;
        case 0x51b1a4u: goto label_51b1a4;
        case 0x51b1a8u: goto label_51b1a8;
        case 0x51b1acu: goto label_51b1ac;
        case 0x51b1b0u: goto label_51b1b0;
        case 0x51b1b4u: goto label_51b1b4;
        case 0x51b1b8u: goto label_51b1b8;
        case 0x51b1bcu: goto label_51b1bc;
        case 0x51b1c0u: goto label_51b1c0;
        case 0x51b1c4u: goto label_51b1c4;
        case 0x51b1c8u: goto label_51b1c8;
        case 0x51b1ccu: goto label_51b1cc;
        case 0x51b1d0u: goto label_51b1d0;
        case 0x51b1d4u: goto label_51b1d4;
        case 0x51b1d8u: goto label_51b1d8;
        case 0x51b1dcu: goto label_51b1dc;
        case 0x51b1e0u: goto label_51b1e0;
        case 0x51b1e4u: goto label_51b1e4;
        case 0x51b1e8u: goto label_51b1e8;
        case 0x51b1ecu: goto label_51b1ec;
        case 0x51b1f0u: goto label_51b1f0;
        case 0x51b1f4u: goto label_51b1f4;
        case 0x51b1f8u: goto label_51b1f8;
        case 0x51b1fcu: goto label_51b1fc;
        case 0x51b200u: goto label_51b200;
        case 0x51b204u: goto label_51b204;
        case 0x51b208u: goto label_51b208;
        case 0x51b20cu: goto label_51b20c;
        case 0x51b210u: goto label_51b210;
        case 0x51b214u: goto label_51b214;
        case 0x51b218u: goto label_51b218;
        case 0x51b21cu: goto label_51b21c;
        case 0x51b220u: goto label_51b220;
        case 0x51b224u: goto label_51b224;
        case 0x51b228u: goto label_51b228;
        case 0x51b22cu: goto label_51b22c;
        case 0x51b230u: goto label_51b230;
        case 0x51b234u: goto label_51b234;
        case 0x51b238u: goto label_51b238;
        case 0x51b23cu: goto label_51b23c;
        case 0x51b240u: goto label_51b240;
        case 0x51b244u: goto label_51b244;
        case 0x51b248u: goto label_51b248;
        case 0x51b24cu: goto label_51b24c;
        case 0x51b250u: goto label_51b250;
        case 0x51b254u: goto label_51b254;
        case 0x51b258u: goto label_51b258;
        case 0x51b25cu: goto label_51b25c;
        case 0x51b260u: goto label_51b260;
        case 0x51b264u: goto label_51b264;
        case 0x51b268u: goto label_51b268;
        case 0x51b26cu: goto label_51b26c;
        case 0x51b270u: goto label_51b270;
        case 0x51b274u: goto label_51b274;
        case 0x51b278u: goto label_51b278;
        case 0x51b27cu: goto label_51b27c;
        case 0x51b280u: goto label_51b280;
        case 0x51b284u: goto label_51b284;
        case 0x51b288u: goto label_51b288;
        case 0x51b28cu: goto label_51b28c;
        case 0x51b290u: goto label_51b290;
        case 0x51b294u: goto label_51b294;
        case 0x51b298u: goto label_51b298;
        case 0x51b29cu: goto label_51b29c;
        case 0x51b2a0u: goto label_51b2a0;
        case 0x51b2a4u: goto label_51b2a4;
        case 0x51b2a8u: goto label_51b2a8;
        case 0x51b2acu: goto label_51b2ac;
        case 0x51b2b0u: goto label_51b2b0;
        case 0x51b2b4u: goto label_51b2b4;
        case 0x51b2b8u: goto label_51b2b8;
        case 0x51b2bcu: goto label_51b2bc;
        case 0x51b2c0u: goto label_51b2c0;
        case 0x51b2c4u: goto label_51b2c4;
        case 0x51b2c8u: goto label_51b2c8;
        case 0x51b2ccu: goto label_51b2cc;
        case 0x51b2d0u: goto label_51b2d0;
        case 0x51b2d4u: goto label_51b2d4;
        case 0x51b2d8u: goto label_51b2d8;
        case 0x51b2dcu: goto label_51b2dc;
        case 0x51b2e0u: goto label_51b2e0;
        case 0x51b2e4u: goto label_51b2e4;
        case 0x51b2e8u: goto label_51b2e8;
        case 0x51b2ecu: goto label_51b2ec;
        case 0x51b2f0u: goto label_51b2f0;
        case 0x51b2f4u: goto label_51b2f4;
        case 0x51b2f8u: goto label_51b2f8;
        case 0x51b2fcu: goto label_51b2fc;
        case 0x51b300u: goto label_51b300;
        case 0x51b304u: goto label_51b304;
        case 0x51b308u: goto label_51b308;
        case 0x51b30cu: goto label_51b30c;
        case 0x51b310u: goto label_51b310;
        case 0x51b314u: goto label_51b314;
        case 0x51b318u: goto label_51b318;
        case 0x51b31cu: goto label_51b31c;
        case 0x51b320u: goto label_51b320;
        case 0x51b324u: goto label_51b324;
        case 0x51b328u: goto label_51b328;
        case 0x51b32cu: goto label_51b32c;
        case 0x51b330u: goto label_51b330;
        case 0x51b334u: goto label_51b334;
        case 0x51b338u: goto label_51b338;
        case 0x51b33cu: goto label_51b33c;
        case 0x51b340u: goto label_51b340;
        case 0x51b344u: goto label_51b344;
        case 0x51b348u: goto label_51b348;
        case 0x51b34cu: goto label_51b34c;
        case 0x51b350u: goto label_51b350;
        case 0x51b354u: goto label_51b354;
        case 0x51b358u: goto label_51b358;
        case 0x51b35cu: goto label_51b35c;
        case 0x51b360u: goto label_51b360;
        case 0x51b364u: goto label_51b364;
        case 0x51b368u: goto label_51b368;
        case 0x51b36cu: goto label_51b36c;
        case 0x51b370u: goto label_51b370;
        case 0x51b374u: goto label_51b374;
        case 0x51b378u: goto label_51b378;
        case 0x51b37cu: goto label_51b37c;
        case 0x51b380u: goto label_51b380;
        case 0x51b384u: goto label_51b384;
        case 0x51b388u: goto label_51b388;
        case 0x51b38cu: goto label_51b38c;
        case 0x51b390u: goto label_51b390;
        case 0x51b394u: goto label_51b394;
        case 0x51b398u: goto label_51b398;
        case 0x51b39cu: goto label_51b39c;
        case 0x51b3a0u: goto label_51b3a0;
        case 0x51b3a4u: goto label_51b3a4;
        case 0x51b3a8u: goto label_51b3a8;
        case 0x51b3acu: goto label_51b3ac;
        case 0x51b3b0u: goto label_51b3b0;
        case 0x51b3b4u: goto label_51b3b4;
        case 0x51b3b8u: goto label_51b3b8;
        case 0x51b3bcu: goto label_51b3bc;
        case 0x51b3c0u: goto label_51b3c0;
        case 0x51b3c4u: goto label_51b3c4;
        case 0x51b3c8u: goto label_51b3c8;
        case 0x51b3ccu: goto label_51b3cc;
        case 0x51b3d0u: goto label_51b3d0;
        case 0x51b3d4u: goto label_51b3d4;
        case 0x51b3d8u: goto label_51b3d8;
        case 0x51b3dcu: goto label_51b3dc;
        case 0x51b3e0u: goto label_51b3e0;
        case 0x51b3e4u: goto label_51b3e4;
        case 0x51b3e8u: goto label_51b3e8;
        case 0x51b3ecu: goto label_51b3ec;
        case 0x51b3f0u: goto label_51b3f0;
        case 0x51b3f4u: goto label_51b3f4;
        case 0x51b3f8u: goto label_51b3f8;
        case 0x51b3fcu: goto label_51b3fc;
        case 0x51b400u: goto label_51b400;
        case 0x51b404u: goto label_51b404;
        case 0x51b408u: goto label_51b408;
        case 0x51b40cu: goto label_51b40c;
        case 0x51b410u: goto label_51b410;
        case 0x51b414u: goto label_51b414;
        case 0x51b418u: goto label_51b418;
        case 0x51b41cu: goto label_51b41c;
        case 0x51b420u: goto label_51b420;
        case 0x51b424u: goto label_51b424;
        case 0x51b428u: goto label_51b428;
        case 0x51b42cu: goto label_51b42c;
        case 0x51b430u: goto label_51b430;
        case 0x51b434u: goto label_51b434;
        case 0x51b438u: goto label_51b438;
        case 0x51b43cu: goto label_51b43c;
        case 0x51b440u: goto label_51b440;
        case 0x51b444u: goto label_51b444;
        case 0x51b448u: goto label_51b448;
        case 0x51b44cu: goto label_51b44c;
        case 0x51b450u: goto label_51b450;
        case 0x51b454u: goto label_51b454;
        case 0x51b458u: goto label_51b458;
        case 0x51b45cu: goto label_51b45c;
        case 0x51b460u: goto label_51b460;
        case 0x51b464u: goto label_51b464;
        case 0x51b468u: goto label_51b468;
        case 0x51b46cu: goto label_51b46c;
        case 0x51b470u: goto label_51b470;
        case 0x51b474u: goto label_51b474;
        case 0x51b478u: goto label_51b478;
        case 0x51b47cu: goto label_51b47c;
        case 0x51b480u: goto label_51b480;
        case 0x51b484u: goto label_51b484;
        case 0x51b488u: goto label_51b488;
        case 0x51b48cu: goto label_51b48c;
        case 0x51b490u: goto label_51b490;
        case 0x51b494u: goto label_51b494;
        case 0x51b498u: goto label_51b498;
        case 0x51b49cu: goto label_51b49c;
        case 0x51b4a0u: goto label_51b4a0;
        case 0x51b4a4u: goto label_51b4a4;
        case 0x51b4a8u: goto label_51b4a8;
        case 0x51b4acu: goto label_51b4ac;
        case 0x51b4b0u: goto label_51b4b0;
        case 0x51b4b4u: goto label_51b4b4;
        case 0x51b4b8u: goto label_51b4b8;
        case 0x51b4bcu: goto label_51b4bc;
        case 0x51b4c0u: goto label_51b4c0;
        case 0x51b4c4u: goto label_51b4c4;
        case 0x51b4c8u: goto label_51b4c8;
        case 0x51b4ccu: goto label_51b4cc;
        case 0x51b4d0u: goto label_51b4d0;
        case 0x51b4d4u: goto label_51b4d4;
        case 0x51b4d8u: goto label_51b4d8;
        case 0x51b4dcu: goto label_51b4dc;
        case 0x51b4e0u: goto label_51b4e0;
        case 0x51b4e4u: goto label_51b4e4;
        case 0x51b4e8u: goto label_51b4e8;
        case 0x51b4ecu: goto label_51b4ec;
        case 0x51b4f0u: goto label_51b4f0;
        case 0x51b4f4u: goto label_51b4f4;
        case 0x51b4f8u: goto label_51b4f8;
        case 0x51b4fcu: goto label_51b4fc;
        case 0x51b500u: goto label_51b500;
        case 0x51b504u: goto label_51b504;
        case 0x51b508u: goto label_51b508;
        case 0x51b50cu: goto label_51b50c;
        case 0x51b510u: goto label_51b510;
        case 0x51b514u: goto label_51b514;
        case 0x51b518u: goto label_51b518;
        case 0x51b51cu: goto label_51b51c;
        case 0x51b520u: goto label_51b520;
        case 0x51b524u: goto label_51b524;
        case 0x51b528u: goto label_51b528;
        case 0x51b52cu: goto label_51b52c;
        case 0x51b530u: goto label_51b530;
        case 0x51b534u: goto label_51b534;
        case 0x51b538u: goto label_51b538;
        case 0x51b53cu: goto label_51b53c;
        default: break;
    }

    ctx->pc = 0x51b180u;

label_51b180:
    // 0x51b180: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x51b180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_51b184:
    // 0x51b184: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51b184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_51b188:
    // 0x51b188: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x51b188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_51b18c:
    // 0x51b18c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x51b18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_51b190:
    // 0x51b190: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x51b190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_51b194:
    // 0x51b194: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x51b194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_51b198:
    // 0x51b198: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x51b198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_51b19c:
    // 0x51b19c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51b19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51b1a0:
    // 0x51b1a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51b1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51b1a4:
    // 0x51b1a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51b1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51b1a8:
    // 0x51b1a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51b1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51b1ac:
    // 0x51b1ac: 0xc0c7538  jal         func_31D4E0
label_51b1b0:
    if (ctx->pc == 0x51B1B0u) {
        ctx->pc = 0x51B1B0u;
            // 0x51b1b0: 0x8c518a08  lw          $s1, -0x75F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
        ctx->pc = 0x51B1B4u;
        goto label_51b1b4;
    }
    ctx->pc = 0x51B1ACu;
    SET_GPR_U32(ctx, 31, 0x51B1B4u);
    ctx->pc = 0x51B1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B1ACu;
            // 0x51b1b0: 0x8c518a08  lw          $s1, -0x75F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4E0u;
    if (runtime->hasFunction(0x31D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B1B4u; }
        if (ctx->pc != 0x51B1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4E0_0x31d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B1B4u; }
        if (ctx->pc != 0x51B1B4u) { return; }
    }
    ctx->pc = 0x51B1B4u;
label_51b1b4:
    // 0x51b1b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x51b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_51b1b8:
    // 0x51b1b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_51b1bc:
    // 0x51b1bc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x51b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_51b1c0:
    // 0x51b1c0: 0xa0600082  sb          $zero, 0x82($v1)
    ctx->pc = 0x51b1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 130), (uint8_t)GPR_U32(ctx, 0));
label_51b1c4:
    // 0x51b1c4: 0x8c5089e8  lw          $s0, -0x7618($v0)
    ctx->pc = 0x51b1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_51b1c8:
    // 0x51b1c8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x51b1c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_51b1cc:
    // 0x51b1cc: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x51b1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_51b1d0:
    // 0x51b1d0: 0x320f809  jalr        $t9
label_51b1d4:
    if (ctx->pc == 0x51B1D4u) {
        ctx->pc = 0x51B1D4u;
            // 0x51b1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51B1D8u;
        goto label_51b1d8;
    }
    ctx->pc = 0x51B1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51B1D8u);
        ctx->pc = 0x51B1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B1D0u;
            // 0x51b1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51B1D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51B1D8u; }
            if (ctx->pc != 0x51B1D8u) { return; }
        }
        }
    }
    ctx->pc = 0x51B1D8u;
label_51b1d8:
    // 0x51b1d8: 0xc074708  jal         func_1D1C20
label_51b1dc:
    if (ctx->pc == 0x51B1DCu) {
        ctx->pc = 0x51B1DCu;
            // 0x51b1dc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x51B1E0u;
        goto label_51b1e0;
    }
    ctx->pc = 0x51B1D8u;
    SET_GPR_U32(ctx, 31, 0x51B1E0u);
    ctx->pc = 0x51B1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B1D8u;
            // 0x51b1dc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C20u;
    if (runtime->hasFunction(0x1D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x1D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B1E0u; }
        if (ctx->pc != 0x51B1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1C20_0x1d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B1E0u; }
        if (ctx->pc != 0x51B1E0u) { return; }
    }
    ctx->pc = 0x51B1E0u;
label_51b1e0:
    // 0x51b1e0: 0x92220078  lbu         $v0, 0x78($s1)
    ctx->pc = 0x51b1e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 120)));
label_51b1e4:
    // 0x51b1e4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_51b1e8:
    if (ctx->pc == 0x51B1E8u) {
        ctx->pc = 0x51B1E8u;
            // 0x51b1e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x51B1ECu;
        goto label_51b1ec;
    }
    ctx->pc = 0x51B1E4u;
    {
        const bool branch_taken_0x51b1e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x51b1e4) {
            ctx->pc = 0x51B1E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51B1E4u;
            // 0x51b1e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51B1F8u;
            goto label_51b1f8;
        }
    }
    ctx->pc = 0x51B1ECu;
label_51b1ec:
    // 0x51b1ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51b1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51b1f0:
    // 0x51b1f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_51b1f4:
    if (ctx->pc == 0x51B1F4u) {
        ctx->pc = 0x51B1F4u;
            // 0x51b1f4: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x51B1F8u;
        goto label_51b1f8;
    }
    ctx->pc = 0x51B1F0u;
    {
        const bool branch_taken_0x51b1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51B1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B1F0u;
            // 0x51b1f4: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x51b1f0) {
            ctx->pc = 0x51B210u;
            goto label_51b210;
        }
    }
    ctx->pc = 0x51B1F8u;
label_51b1f8:
    // 0x51b1f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x51b1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_51b1fc:
    // 0x51b1fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x51b1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_51b200:
    // 0x51b200: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x51b200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51b204:
    // 0x51b204: 0x0  nop
    ctx->pc = 0x51b204u;
    // NOP
label_51b208:
    // 0x51b208: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x51b208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_51b20c:
    // 0x51b20c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x51b20cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_51b210:
    // 0x51b210: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x51b210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_51b214:
    // 0x51b214: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x51b214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_51b218:
    // 0x51b218: 0x0  nop
    ctx->pc = 0x51b218u;
    // NOP
label_51b21c:
    // 0x51b21c: 0x460408c3  div.s       $f3, $f1, $f4
    ctx->pc = 0x51b21cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[4];
label_51b220:
    // 0x51b220: 0x3c024682  lui         $v0, 0x4682
    ctx->pc = 0x51b220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18050 << 16));
label_51b224:
    // 0x51b224: 0x34433555  ori         $v1, $v0, 0x3555
    ctx->pc = 0x51b224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13653);
label_51b228:
    // 0x51b228: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x51b228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_51b22c:
    // 0x51b22c: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x51b22cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[1];
label_51b230:
    // 0x51b230: 0xe6240014  swc1        $f4, 0x14($s1)
    ctx->pc = 0x51b230u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_51b234:
    // 0x51b234: 0xe6230018  swc1        $f3, 0x18($s1)
    ctx->pc = 0x51b234u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_51b238:
    // 0x51b238: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x51b238u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_51b23c:
    // 0x51b23c: 0xe623001c  swc1        $f3, 0x1C($s1)
    ctx->pc = 0x51b23cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_51b240:
    // 0x51b240: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x51b240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_51b244:
    // 0x51b244: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x51b244u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_51b248:
    // 0x51b248: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x51b248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_51b24c:
    // 0x51b24c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x51b24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51b250:
    // 0x51b250: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x51b250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_51b254:
    // 0x51b254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51b254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51b258:
    // 0x51b258: 0x0  nop
    ctx->pc = 0x51b258u;
    // NOP
label_51b25c:
    // 0x51b25c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x51b25cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_51b260:
    // 0x51b260: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x51b260u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_51b264:
    // 0x51b264: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x51b264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_51b268:
    // 0x51b268: 0x0  nop
    ctx->pc = 0x51b268u;
    // NOP
label_51b26c:
    // 0x51b26c: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x51b26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_51b270:
    // 0x51b270: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x51b270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51b274:
    // 0x51b274: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_51b278:
    if (ctx->pc == 0x51B278u) {
        ctx->pc = 0x51B278u;
            // 0x51b278: 0x92240078  lbu         $a0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->pc = 0x51B27Cu;
        goto label_51b27c;
    }
    ctx->pc = 0x51B274u;
    {
        const bool branch_taken_0x51b274 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x51B278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B274u;
            // 0x51b278: 0x92240078  lbu         $a0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51b274) {
            ctx->pc = 0x51B28Cu;
            goto label_51b28c;
        }
    }
    ctx->pc = 0x51B27Cu;
label_51b27c:
    // 0x51b27c: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x51b27cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_51b280:
    // 0x51b280: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x51b280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_51b284:
    // 0x51b284: 0x10000008  b           . + 4 + (0x8 << 2)
label_51b288:
    if (ctx->pc == 0x51B288u) {
        ctx->pc = 0x51B288u;
            // 0x51b288: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x51B28Cu;
        goto label_51b28c;
    }
    ctx->pc = 0x51B284u;
    {
        const bool branch_taken_0x51b284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51B288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B284u;
            // 0x51b288: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x51b284) {
            ctx->pc = 0x51B2A8u;
            goto label_51b2a8;
        }
    }
    ctx->pc = 0x51B28Cu;
label_51b28c:
    // 0x51b28c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x51b28cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_51b290:
    // 0x51b290: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x51b290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_51b294:
    // 0x51b294: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x51b294u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_51b298:
    // 0x51b298: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x51b298u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_51b29c:
    // 0x51b29c: 0x0  nop
    ctx->pc = 0x51b29cu;
    // NOP
label_51b2a0:
    // 0x51b2a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x51b2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_51b2a4:
    // 0x51b2a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x51b2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_51b2a8:
    // 0x51b2a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x51b2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_51b2ac:
    // 0x51b2ac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_51b2b0:
    // 0x51b2b0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x51b2b0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_51b2b4:
    // 0x51b2b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51b2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51b2b8:
    // 0x51b2b8: 0x0  nop
    ctx->pc = 0x51b2b8u;
    // NOP
label_51b2bc:
    // 0x51b2bc: 0x1812  mflo        $v1
    ctx->pc = 0x51b2bcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_51b2c0:
    // 0x51b2c0: 0xa2230079  sb          $v1, 0x79($s1)
    ctx->pc = 0x51b2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 3));
label_51b2c4:
    // 0x51b2c4: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x51b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_51b2c8:
    // 0x51b2c8: 0xc0a8a40  jal         func_2A2900
label_51b2cc:
    if (ctx->pc == 0x51B2CCu) {
        ctx->pc = 0x51B2CCu;
            // 0x51b2cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51B2D0u;
        goto label_51b2d0;
    }
    ctx->pc = 0x51B2C8u;
    SET_GPR_U32(ctx, 31, 0x51B2D0u);
    ctx->pc = 0x51B2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B2C8u;
            // 0x51b2cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2900u;
    if (runtime->hasFunction(0x2A2900u)) {
        auto targetFn = runtime->lookupFunction(0x2A2900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B2D0u; }
        if (ctx->pc != 0x51B2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2900_0x2a2900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B2D0u; }
        if (ctx->pc != 0x51B2D0u) { return; }
    }
    ctx->pc = 0x51B2D0u;
label_51b2d0:
    // 0x51b2d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51b2d4:
    // 0x51b2d4: 0xac40e3a8  sw          $zero, -0x1C58($v0)
    ctx->pc = 0x51b2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960040), GPR_U32(ctx, 0));
label_51b2d8:
    // 0x51b2d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x51b2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51b2dc:
    // 0x51b2dc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x51b2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_51b2e0:
    // 0x51b2e0: 0x320f809  jalr        $t9
label_51b2e4:
    if (ctx->pc == 0x51B2E4u) {
        ctx->pc = 0x51B2E4u;
            // 0x51b2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51B2E8u;
        goto label_51b2e8;
    }
    ctx->pc = 0x51B2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51B2E8u);
        ctx->pc = 0x51B2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B2E0u;
            // 0x51b2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51B2E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51B2E8u; }
            if (ctx->pc != 0x51B2E8u) { return; }
        }
        }
    }
    ctx->pc = 0x51B2E8u;
label_51b2e8:
    // 0x51b2e8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x51b2e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51b2ec:
    // 0x51b2ec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x51b2ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_51b2f0:
    // 0x51b2f0: 0x320f809  jalr        $t9
label_51b2f4:
    if (ctx->pc == 0x51B2F4u) {
        ctx->pc = 0x51B2F4u;
            // 0x51b2f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51B2F8u;
        goto label_51b2f8;
    }
    ctx->pc = 0x51B2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51B2F8u);
        ctx->pc = 0x51B2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B2F0u;
            // 0x51b2f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51B2F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51B2F8u; }
            if (ctx->pc != 0x51B2F8u) { return; }
        }
        }
    }
    ctx->pc = 0x51B2F8u;
label_51b2f8:
    // 0x51b2f8: 0xc147224  jal         func_51C890
label_51b2fc:
    if (ctx->pc == 0x51B2FCu) {
        ctx->pc = 0x51B300u;
        goto label_51b300;
    }
    ctx->pc = 0x51B2F8u;
    SET_GPR_U32(ctx, 31, 0x51B300u);
    ctx->pc = 0x51C890u;
    if (runtime->hasFunction(0x51C890u)) {
        auto targetFn = runtime->lookupFunction(0x51C890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B300u; }
        if (ctx->pc != 0x51B300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C890_0x51c890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B300u; }
        if (ctx->pc != 0x51B300u) { return; }
    }
    ctx->pc = 0x51B300u;
label_51b300:
    // 0x51b300: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x51b300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_51b304:
    // 0x51b304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51b304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51b308:
    // 0x51b308: 0xc04a576  jal         func_1295D8
label_51b30c:
    if (ctx->pc == 0x51B30Cu) {
        ctx->pc = 0x51B30Cu;
            // 0x51b30c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x51B310u;
        goto label_51b310;
    }
    ctx->pc = 0x51B308u;
    SET_GPR_U32(ctx, 31, 0x51B310u);
    ctx->pc = 0x51B30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B308u;
            // 0x51b30c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B310u; }
        if (ctx->pc != 0x51B310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B310u; }
        if (ctx->pc != 0x51B310u) { return; }
    }
    ctx->pc = 0x51B310u;
label_51b310:
    // 0x51b310: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x51b310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51b314:
    // 0x51b314: 0xc0576f4  jal         func_15DBD0
label_51b318:
    if (ctx->pc == 0x51B318u) {
        ctx->pc = 0x51B31Cu;
        goto label_51b31c;
    }
    ctx->pc = 0x51B314u;
    SET_GPR_U32(ctx, 31, 0x51B31Cu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B31Cu; }
        if (ctx->pc != 0x51B31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B31Cu; }
        if (ctx->pc != 0x51B31Cu) { return; }
    }
    ctx->pc = 0x51B31Cu;
label_51b31c:
    // 0x51b31c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x51b31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51b320:
    // 0x51b320: 0x240402a0  addiu       $a0, $zero, 0x2A0
    ctx->pc = 0x51b320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
label_51b324:
    // 0x51b324: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x51b324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_51b328:
    // 0x51b328: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x51b328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_51b32c:
    // 0x51b32c: 0xc040140  jal         func_100500
label_51b330:
    if (ctx->pc == 0x51B330u) {
        ctx->pc = 0x51B330u;
            // 0x51b330: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51B334u;
        goto label_51b334;
    }
    ctx->pc = 0x51B32Cu;
    SET_GPR_U32(ctx, 31, 0x51B334u);
    ctx->pc = 0x51B330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B32Cu;
            // 0x51b330: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B334u; }
        if (ctx->pc != 0x51B334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B334u; }
        if (ctx->pc != 0x51B334u) { return; }
    }
    ctx->pc = 0x51B334u;
label_51b334:
    // 0x51b334: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_51b338:
    if (ctx->pc == 0x51B338u) {
        ctx->pc = 0x51B33Cu;
        goto label_51b33c;
    }
    ctx->pc = 0x51B334u;
    {
        const bool branch_taken_0x51b334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51b334) {
            ctx->pc = 0x51B348u;
            goto label_51b348;
        }
    }
    ctx->pc = 0x51B33Cu;
label_51b33c:
    // 0x51b33c: 0xc0a9698  jal         func_2A5A60
label_51b340:
    if (ctx->pc == 0x51B340u) {
        ctx->pc = 0x51B340u;
            // 0x51b340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51B344u;
        goto label_51b344;
    }
    ctx->pc = 0x51B33Cu;
    SET_GPR_U32(ctx, 31, 0x51B344u);
    ctx->pc = 0x51B340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B33Cu;
            // 0x51b340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5A60u;
    if (runtime->hasFunction(0x2A5A60u)) {
        auto targetFn = runtime->lookupFunction(0x2A5A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B344u; }
        if (ctx->pc != 0x51B344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5A60_0x2a5a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B344u; }
        if (ctx->pc != 0x51B344u) { return; }
    }
    ctx->pc = 0x51B344u;
label_51b344:
    // 0x51b344: 0x0  nop
    ctx->pc = 0x51b344u;
    // NOP
label_51b348:
    // 0x51b348: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x51b348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_51b34c:
    // 0x51b34c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x51b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_51b350:
    // 0x51b350: 0xc147254  jal         func_51C950
label_51b354:
    if (ctx->pc == 0x51B354u) {
        ctx->pc = 0x51B354u;
            // 0x51b354: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->pc = 0x51B358u;
        goto label_51b358;
    }
    ctx->pc = 0x51B350u;
    SET_GPR_U32(ctx, 31, 0x51B358u);
    ctx->pc = 0x51B354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B350u;
            // 0x51b354: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C950u;
    if (runtime->hasFunction(0x51C950u)) {
        auto targetFn = runtime->lookupFunction(0x51C950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B358u; }
        if (ctx->pc != 0x51B358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C950_0x51c950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B358u; }
        if (ctx->pc != 0x51B358u) { return; }
    }
    ctx->pc = 0x51B358u;
label_51b358:
    // 0x51b358: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x51b358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_51b35c:
    // 0x51b35c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x51b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_51b360:
    // 0x51b360: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51b360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51b364:
    // 0x51b364: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x51b364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_51b368:
    // 0x51b368: 0x320f809  jalr        $t9
label_51b36c:
    if (ctx->pc == 0x51B36Cu) {
        ctx->pc = 0x51B36Cu;
            // 0x51b36c: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x51B370u;
        goto label_51b370;
    }
    ctx->pc = 0x51B368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51B370u);
        ctx->pc = 0x51B36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B368u;
            // 0x51b36c: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51B370u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51B370u; }
            if (ctx->pc != 0x51B370u) { return; }
        }
        }
    }
    ctx->pc = 0x51B370u;
label_51b370:
    // 0x51b370: 0xc0a992c  jal         func_2A64B0
label_51b374:
    if (ctx->pc == 0x51B374u) {
        ctx->pc = 0x51B374u;
            // 0x51b374: 0x8fb0009c  lw          $s0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->pc = 0x51B378u;
        goto label_51b378;
    }
    ctx->pc = 0x51B370u;
    SET_GPR_U32(ctx, 31, 0x51B378u);
    ctx->pc = 0x51B374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B370u;
            // 0x51b374: 0x8fb0009c  lw          $s0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A64B0u;
    if (runtime->hasFunction(0x2A64B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A64B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B378u; }
        if (ctx->pc != 0x51B378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A64B0_0x2a64b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B378u; }
        if (ctx->pc != 0x51B378u) { return; }
    }
    ctx->pc = 0x51B378u;
label_51b378:
    // 0x51b378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51b378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51b37c:
    // 0x51b37c: 0xc0a9594  jal         func_2A5650
label_51b380:
    if (ctx->pc == 0x51B380u) {
        ctx->pc = 0x51B380u;
            // 0x51b380: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51B384u;
        goto label_51b384;
    }
    ctx->pc = 0x51B37Cu;
    SET_GPR_U32(ctx, 31, 0x51B384u);
    ctx->pc = 0x51B380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B37Cu;
            // 0x51b380: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5650u;
    if (runtime->hasFunction(0x2A5650u)) {
        auto targetFn = runtime->lookupFunction(0x2A5650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B384u; }
        if (ctx->pc != 0x51B384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5650_0x2a5650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B384u; }
        if (ctx->pc != 0x51B384u) { return; }
    }
    ctx->pc = 0x51B384u;
label_51b384:
    // 0x51b384: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x51b384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_51b388:
    // 0x51b388: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x51b388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_51b38c:
    // 0x51b38c: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_51b390:
    if (ctx->pc == 0x51B390u) {
        ctx->pc = 0x51B394u;
        goto label_51b394;
    }
    ctx->pc = 0x51B38Cu;
    {
        const bool branch_taken_0x51b38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x51b38c) {
            ctx->pc = 0x51B314u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51b314;
        }
    }
    ctx->pc = 0x51B394u;
label_51b394:
    // 0x51b394: 0xc0576f4  jal         func_15DBD0
label_51b398:
    if (ctx->pc == 0x51B398u) {
        ctx->pc = 0x51B39Cu;
        goto label_51b39c;
    }
    ctx->pc = 0x51B394u;
    SET_GPR_U32(ctx, 31, 0x51B39Cu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B39Cu; }
        if (ctx->pc != 0x51B39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B39Cu; }
        if (ctx->pc != 0x51B39Cu) { return; }
    }
    ctx->pc = 0x51B39Cu;
label_51b39c:
    // 0x51b39c: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x51b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_51b3a0:
    // 0x51b3a0: 0xc0576fc  jal         func_15DBF0
label_51b3a4:
    if (ctx->pc == 0x51B3A4u) {
        ctx->pc = 0x51B3A4u;
            // 0x51b3a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51B3A8u;
        goto label_51b3a8;
    }
    ctx->pc = 0x51B3A0u;
    SET_GPR_U32(ctx, 31, 0x51B3A8u);
    ctx->pc = 0x51B3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B3A0u;
            // 0x51b3a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DBF0u;
    if (runtime->hasFunction(0x15DBF0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B3A8u; }
        if (ctx->pc != 0x51B3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBF0_0x15dbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B3A8u; }
        if (ctx->pc != 0x51B3A8u) { return; }
    }
    ctx->pc = 0x51B3A8u;
label_51b3a8:
    // 0x51b3a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x51b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_51b3ac:
    // 0x51b3ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51b3acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51b3b0:
    // 0x51b3b0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x51b3b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_51b3b4:
    // 0x51b3b4: 0x320f809  jalr        $t9
label_51b3b8:
    if (ctx->pc == 0x51B3B8u) {
        ctx->pc = 0x51B3BCu;
        goto label_51b3bc;
    }
    ctx->pc = 0x51B3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51B3BCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x51B3BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51B3BCu; }
            if (ctx->pc != 0x51B3BCu) { return; }
        }
        }
    }
    ctx->pc = 0x51B3BCu;
label_51b3bc:
    // 0x51b3bc: 0xc0a97c8  jal         func_2A5F20
label_51b3c0:
    if (ctx->pc == 0x51B3C0u) {
        ctx->pc = 0x51B3C0u;
            // 0x51b3c0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51B3C4u;
        goto label_51b3c4;
    }
    ctx->pc = 0x51B3BCu;
    SET_GPR_U32(ctx, 31, 0x51B3C4u);
    ctx->pc = 0x51B3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B3BCu;
            // 0x51b3c0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5F20u;
    if (runtime->hasFunction(0x2A5F20u)) {
        auto targetFn = runtime->lookupFunction(0x2A5F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B3C4u; }
        if (ctx->pc != 0x51B3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5F20_0x2a5f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B3C4u; }
        if (ctx->pc != 0x51B3C4u) { return; }
    }
    ctx->pc = 0x51B3C4u;
label_51b3c4:
    // 0x51b3c4: 0xc0a97c8  jal         func_2A5F20
label_51b3c8:
    if (ctx->pc == 0x51B3C8u) {
        ctx->pc = 0x51B3C8u;
            // 0x51b3c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51B3CCu;
        goto label_51b3cc;
    }
    ctx->pc = 0x51B3C4u;
    SET_GPR_U32(ctx, 31, 0x51B3CCu);
    ctx->pc = 0x51B3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B3C4u;
            // 0x51b3c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5F20u;
    if (runtime->hasFunction(0x2A5F20u)) {
        auto targetFn = runtime->lookupFunction(0x2A5F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B3CCu; }
        if (ctx->pc != 0x51B3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5F20_0x2a5f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B3CCu; }
        if (ctx->pc != 0x51B3CCu) { return; }
    }
    ctx->pc = 0x51B3CCu;
label_51b3cc:
    // 0x51b3cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51b3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51b3d0:
    // 0x51b3d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x51b3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51b3d4:
    // 0x51b3d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x51b3d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51b3d8:
    // 0x51b3d8: 0xc0a92e0  jal         func_2A4B80
label_51b3dc:
    if (ctx->pc == 0x51B3DCu) {
        ctx->pc = 0x51B3DCu;
            // 0x51b3dc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x51B3E0u;
        goto label_51b3e0;
    }
    ctx->pc = 0x51B3D8u;
    SET_GPR_U32(ctx, 31, 0x51B3E0u);
    ctx->pc = 0x51B3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B3D8u;
            // 0x51b3dc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B80u;
    if (runtime->hasFunction(0x2A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x2A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B3E0u; }
        if (ctx->pc != 0x51B3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4B80_0x2a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B3E0u; }
        if (ctx->pc != 0x51B3E0u) { return; }
    }
    ctx->pc = 0x51B3E0u;
label_51b3e0:
    // 0x51b3e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x51b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_51b3e4:
    // 0x51b3e4: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x51b3e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_51b3e8:
    // 0x51b3e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x51b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51b3ec:
    // 0x51b3ec: 0xa223007c  sb          $v1, 0x7C($s1)
    ctx->pc = 0x51b3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 3));
label_51b3f0:
    // 0x51b3f0: 0xa222007a  sb          $v0, 0x7A($s1)
    ctx->pc = 0x51b3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 2));
label_51b3f4:
    // 0x51b3f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x51b3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51b3f8:
    // 0x51b3f8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x51b3f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51b3fc:
    // 0x51b3fc: 0xa222007b  sb          $v0, 0x7B($s1)
    ctx->pc = 0x51b3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 2));
label_51b400:
    // 0x51b400: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x51b400u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51b404:
    // 0x51b404: 0x2673eb70  addiu       $s3, $s3, -0x1490
    ctx->pc = 0x51b404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962032));
label_51b408:
    // 0x51b408: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x51b408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51b40c:
    // 0x51b40c: 0xc147250  jal         func_51C940
label_51b410:
    if (ctx->pc == 0x51B410u) {
        ctx->pc = 0x51B410u;
            // 0x51b410: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51B414u;
        goto label_51b414;
    }
    ctx->pc = 0x51B40Cu;
    SET_GPR_U32(ctx, 31, 0x51B414u);
    ctx->pc = 0x51B410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B40Cu;
            // 0x51b410: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C940u;
    if (runtime->hasFunction(0x51C940u)) {
        auto targetFn = runtime->lookupFunction(0x51C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B414u; }
        if (ctx->pc != 0x51B414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C940_0x51c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B414u; }
        if (ctx->pc != 0x51B414u) { return; }
    }
    ctx->pc = 0x51B414u;
label_51b414:
    // 0x51b414: 0x90430029  lbu         $v1, 0x29($v0)
    ctx->pc = 0x51b414u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_51b418:
    // 0x51b418: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x51b418u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51b41c:
    // 0x51b41c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x51b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_51b420:
    // 0x51b420: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x51b420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_51b424:
    // 0x51b424: 0x2e32021  addu        $a0, $s7, $v1
    ctx->pc = 0x51b424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_51b428:
    // 0x51b428: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x51b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
label_51b42c:
    // 0x51b42c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x51b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_51b430:
    // 0x51b430: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x51b430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_51b434:
    // 0x51b434: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x51b434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_51b438:
    // 0x51b438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_51b43c:
    // 0x51b43c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x51b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_51b440:
    // 0x51b440: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x51b440u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_51b444:
    // 0x51b444: 0xc147250  jal         func_51C940
label_51b448:
    if (ctx->pc == 0x51B448u) {
        ctx->pc = 0x51B448u;
            // 0x51b448: 0xae930064  sw          $s3, 0x64($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 19));
        ctx->pc = 0x51B44Cu;
        goto label_51b44c;
    }
    ctx->pc = 0x51B444u;
    SET_GPR_U32(ctx, 31, 0x51B44Cu);
    ctx->pc = 0x51B448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B444u;
            // 0x51b448: 0xae930064  sw          $s3, 0x64($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C940u;
    if (runtime->hasFunction(0x51C940u)) {
        auto targetFn = runtime->lookupFunction(0x51C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B44Cu; }
        if (ctx->pc != 0x51B44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C940_0x51c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B44Cu; }
        if (ctx->pc != 0x51B44Cu) { return; }
    }
    ctx->pc = 0x51B44Cu;
label_51b44c:
    // 0x51b44c: 0x90430029  lbu         $v1, 0x29($v0)
    ctx->pc = 0x51b44cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_51b450:
    // 0x51b450: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x51b450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_51b454:
    // 0x51b454: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x51b454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51b458:
    // 0x51b458: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x51b458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_51b45c:
    // 0x51b45c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x51b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_51b460:
    // 0x51b460: 0x2c33021  addu        $a2, $s6, $v1
    ctx->pc = 0x51b460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_51b464:
    // 0x51b464: 0x2442e7b0  addiu       $v0, $v0, -0x1850
    ctx->pc = 0x51b464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961072));
label_51b468:
    // 0x51b468: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x51b468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_51b46c:
    // 0x51b46c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x51b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_51b470:
    // 0x51b470: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x51b470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_51b474:
    // 0x51b474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_51b478:
    // 0x51b478: 0xc0575cc  jal         func_15D730
label_51b47c:
    if (ctx->pc == 0x51B47Cu) {
        ctx->pc = 0x51B47Cu;
            // 0x51b47c: 0x2423021  addu        $a2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x51B480u;
        goto label_51b480;
    }
    ctx->pc = 0x51B478u;
    SET_GPR_U32(ctx, 31, 0x51B480u);
    ctx->pc = 0x51B47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B478u;
            // 0x51b47c: 0x2423021  addu        $a2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B480u; }
        if (ctx->pc != 0x51B480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B480u; }
        if (ctx->pc != 0x51B480u) { return; }
    }
    ctx->pc = 0x51B480u;
label_51b480:
    // 0x51b480: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x51b480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_51b484:
    // 0x51b484: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x51b484u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_51b488:
    // 0x51b488: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x51b488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_51b48c:
    // 0x51b48c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x51b48cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_51b490:
    // 0x51b490: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x51b490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_51b494:
    // 0x51b494: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_51b498:
    if (ctx->pc == 0x51B498u) {
        ctx->pc = 0x51B498u;
            // 0x51b498: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->pc = 0x51B49Cu;
        goto label_51b49c;
    }
    ctx->pc = 0x51B494u;
    {
        const bool branch_taken_0x51b494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x51B498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B494u;
            // 0x51b498: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51b494) {
            ctx->pc = 0x51B40Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51b40c;
        }
    }
    ctx->pc = 0x51B49Cu;
label_51b49c:
    // 0x51b49c: 0xc040180  jal         func_100600
label_51b4a0:
    if (ctx->pc == 0x51B4A0u) {
        ctx->pc = 0x51B4A0u;
            // 0x51b4a0: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x51B4A4u;
        goto label_51b4a4;
    }
    ctx->pc = 0x51B49Cu;
    SET_GPR_U32(ctx, 31, 0x51B4A4u);
    ctx->pc = 0x51B4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B49Cu;
            // 0x51b4a0: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B4A4u; }
        if (ctx->pc != 0x51B4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B4A4u; }
        if (ctx->pc != 0x51B4A4u) { return; }
    }
    ctx->pc = 0x51B4A4u;
label_51b4a4:
    // 0x51b4a4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_51b4a8:
    if (ctx->pc == 0x51B4A8u) {
        ctx->pc = 0x51B4A8u;
            // 0x51b4a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51B4ACu;
        goto label_51b4ac;
    }
    ctx->pc = 0x51B4A4u;
    {
        const bool branch_taken_0x51b4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x51B4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B4A4u;
            // 0x51b4a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51b4a4) {
            ctx->pc = 0x51B508u;
            goto label_51b508;
        }
    }
    ctx->pc = 0x51B4ACu;
label_51b4ac:
    // 0x51b4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51b4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51b4b0:
    // 0x51b4b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x51b4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_51b4b4:
    // 0x51b4b4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x51b4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_51b4b8:
    // 0x51b4b8: 0xc10ca68  jal         func_4329A0
label_51b4bc:
    if (ctx->pc == 0x51B4BCu) {
        ctx->pc = 0x51B4BCu;
            // 0x51b4bc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x51B4C0u;
        goto label_51b4c0;
    }
    ctx->pc = 0x51B4B8u;
    SET_GPR_U32(ctx, 31, 0x51B4C0u);
    ctx->pc = 0x51B4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B4B8u;
            // 0x51b4bc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B4C0u; }
        if (ctx->pc != 0x51B4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B4C0u; }
        if (ctx->pc != 0x51B4C0u) { return; }
    }
    ctx->pc = 0x51B4C0u;
label_51b4c0:
    // 0x51b4c0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x51b4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_51b4c4:
    // 0x51b4c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_51b4c8:
    // 0x51b4c8: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x51b4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_51b4cc:
    // 0x51b4cc: 0x2463d330  addiu       $v1, $v1, -0x2CD0
    ctx->pc = 0x51b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955824));
label_51b4d0:
    // 0x51b4d0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x51b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_51b4d4:
    // 0x51b4d4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x51b4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_51b4d8:
    // 0x51b4d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_51b4dc:
    // 0x51b4dc: 0x2484d300  addiu       $a0, $a0, -0x2D00
    ctx->pc = 0x51b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955776));
label_51b4e0:
    // 0x51b4e0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x51b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_51b4e4:
    // 0x51b4e4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x51b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_51b4e8:
    // 0x51b4e8: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x51b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_51b4ec:
    // 0x51b4ec: 0xa6000060  sh          $zero, 0x60($s0)
    ctx->pc = 0x51b4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_51b4f0:
    // 0x51b4f0: 0xa2000062  sb          $zero, 0x62($s0)
    ctx->pc = 0x51b4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 0));
label_51b4f4:
    // 0x51b4f4: 0x8c6389f0  lw          $v1, -0x7610($v1)
    ctx->pc = 0x51b4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_51b4f8:
    // 0x51b4f8: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x51b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_51b4fc:
    // 0x51b4fc: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x51b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_51b500:
    // 0x51b500: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x51b500u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_51b504:
    // 0x51b504: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x51b504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_51b508:
    // 0x51b508: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x51b508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_51b50c:
    // 0x51b50c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x51b50cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_51b510:
    // 0x51b510: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x51b510u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_51b514:
    // 0x51b514: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x51b514u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_51b518:
    // 0x51b518: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x51b518u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_51b51c:
    // 0x51b51c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51b51cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51b520:
    // 0x51b520: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51b520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51b524:
    // 0x51b524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51b524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51b528:
    // 0x51b528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51b528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51b52c:
    // 0x51b52c: 0x3e00008  jr          $ra
label_51b530:
    if (ctx->pc == 0x51B530u) {
        ctx->pc = 0x51B530u;
            // 0x51b530: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x51B534u;
        goto label_51b534;
    }
    ctx->pc = 0x51B52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B52Cu;
            // 0x51b530: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B534u;
label_51b534:
    // 0x51b534: 0x0  nop
    ctx->pc = 0x51b534u;
    // NOP
label_51b538:
    // 0x51b538: 0x0  nop
    ctx->pc = 0x51b538u;
    // NOP
label_51b53c:
    // 0x51b53c: 0x0  nop
    ctx->pc = 0x51b53cu;
    // NOP
}
