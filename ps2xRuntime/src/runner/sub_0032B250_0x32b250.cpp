#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032B250
// Address: 0x32b250 - 0x32b5a0
void sub_0032B250_0x32b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032B250_0x32b250");
#endif

    switch (ctx->pc) {
        case 0x32b250u: goto label_32b250;
        case 0x32b254u: goto label_32b254;
        case 0x32b258u: goto label_32b258;
        case 0x32b25cu: goto label_32b25c;
        case 0x32b260u: goto label_32b260;
        case 0x32b264u: goto label_32b264;
        case 0x32b268u: goto label_32b268;
        case 0x32b26cu: goto label_32b26c;
        case 0x32b270u: goto label_32b270;
        case 0x32b274u: goto label_32b274;
        case 0x32b278u: goto label_32b278;
        case 0x32b27cu: goto label_32b27c;
        case 0x32b280u: goto label_32b280;
        case 0x32b284u: goto label_32b284;
        case 0x32b288u: goto label_32b288;
        case 0x32b28cu: goto label_32b28c;
        case 0x32b290u: goto label_32b290;
        case 0x32b294u: goto label_32b294;
        case 0x32b298u: goto label_32b298;
        case 0x32b29cu: goto label_32b29c;
        case 0x32b2a0u: goto label_32b2a0;
        case 0x32b2a4u: goto label_32b2a4;
        case 0x32b2a8u: goto label_32b2a8;
        case 0x32b2acu: goto label_32b2ac;
        case 0x32b2b0u: goto label_32b2b0;
        case 0x32b2b4u: goto label_32b2b4;
        case 0x32b2b8u: goto label_32b2b8;
        case 0x32b2bcu: goto label_32b2bc;
        case 0x32b2c0u: goto label_32b2c0;
        case 0x32b2c4u: goto label_32b2c4;
        case 0x32b2c8u: goto label_32b2c8;
        case 0x32b2ccu: goto label_32b2cc;
        case 0x32b2d0u: goto label_32b2d0;
        case 0x32b2d4u: goto label_32b2d4;
        case 0x32b2d8u: goto label_32b2d8;
        case 0x32b2dcu: goto label_32b2dc;
        case 0x32b2e0u: goto label_32b2e0;
        case 0x32b2e4u: goto label_32b2e4;
        case 0x32b2e8u: goto label_32b2e8;
        case 0x32b2ecu: goto label_32b2ec;
        case 0x32b2f0u: goto label_32b2f0;
        case 0x32b2f4u: goto label_32b2f4;
        case 0x32b2f8u: goto label_32b2f8;
        case 0x32b2fcu: goto label_32b2fc;
        case 0x32b300u: goto label_32b300;
        case 0x32b304u: goto label_32b304;
        case 0x32b308u: goto label_32b308;
        case 0x32b30cu: goto label_32b30c;
        case 0x32b310u: goto label_32b310;
        case 0x32b314u: goto label_32b314;
        case 0x32b318u: goto label_32b318;
        case 0x32b31cu: goto label_32b31c;
        case 0x32b320u: goto label_32b320;
        case 0x32b324u: goto label_32b324;
        case 0x32b328u: goto label_32b328;
        case 0x32b32cu: goto label_32b32c;
        case 0x32b330u: goto label_32b330;
        case 0x32b334u: goto label_32b334;
        case 0x32b338u: goto label_32b338;
        case 0x32b33cu: goto label_32b33c;
        case 0x32b340u: goto label_32b340;
        case 0x32b344u: goto label_32b344;
        case 0x32b348u: goto label_32b348;
        case 0x32b34cu: goto label_32b34c;
        case 0x32b350u: goto label_32b350;
        case 0x32b354u: goto label_32b354;
        case 0x32b358u: goto label_32b358;
        case 0x32b35cu: goto label_32b35c;
        case 0x32b360u: goto label_32b360;
        case 0x32b364u: goto label_32b364;
        case 0x32b368u: goto label_32b368;
        case 0x32b36cu: goto label_32b36c;
        case 0x32b370u: goto label_32b370;
        case 0x32b374u: goto label_32b374;
        case 0x32b378u: goto label_32b378;
        case 0x32b37cu: goto label_32b37c;
        case 0x32b380u: goto label_32b380;
        case 0x32b384u: goto label_32b384;
        case 0x32b388u: goto label_32b388;
        case 0x32b38cu: goto label_32b38c;
        case 0x32b390u: goto label_32b390;
        case 0x32b394u: goto label_32b394;
        case 0x32b398u: goto label_32b398;
        case 0x32b39cu: goto label_32b39c;
        case 0x32b3a0u: goto label_32b3a0;
        case 0x32b3a4u: goto label_32b3a4;
        case 0x32b3a8u: goto label_32b3a8;
        case 0x32b3acu: goto label_32b3ac;
        case 0x32b3b0u: goto label_32b3b0;
        case 0x32b3b4u: goto label_32b3b4;
        case 0x32b3b8u: goto label_32b3b8;
        case 0x32b3bcu: goto label_32b3bc;
        case 0x32b3c0u: goto label_32b3c0;
        case 0x32b3c4u: goto label_32b3c4;
        case 0x32b3c8u: goto label_32b3c8;
        case 0x32b3ccu: goto label_32b3cc;
        case 0x32b3d0u: goto label_32b3d0;
        case 0x32b3d4u: goto label_32b3d4;
        case 0x32b3d8u: goto label_32b3d8;
        case 0x32b3dcu: goto label_32b3dc;
        case 0x32b3e0u: goto label_32b3e0;
        case 0x32b3e4u: goto label_32b3e4;
        case 0x32b3e8u: goto label_32b3e8;
        case 0x32b3ecu: goto label_32b3ec;
        case 0x32b3f0u: goto label_32b3f0;
        case 0x32b3f4u: goto label_32b3f4;
        case 0x32b3f8u: goto label_32b3f8;
        case 0x32b3fcu: goto label_32b3fc;
        case 0x32b400u: goto label_32b400;
        case 0x32b404u: goto label_32b404;
        case 0x32b408u: goto label_32b408;
        case 0x32b40cu: goto label_32b40c;
        case 0x32b410u: goto label_32b410;
        case 0x32b414u: goto label_32b414;
        case 0x32b418u: goto label_32b418;
        case 0x32b41cu: goto label_32b41c;
        case 0x32b420u: goto label_32b420;
        case 0x32b424u: goto label_32b424;
        case 0x32b428u: goto label_32b428;
        case 0x32b42cu: goto label_32b42c;
        case 0x32b430u: goto label_32b430;
        case 0x32b434u: goto label_32b434;
        case 0x32b438u: goto label_32b438;
        case 0x32b43cu: goto label_32b43c;
        case 0x32b440u: goto label_32b440;
        case 0x32b444u: goto label_32b444;
        case 0x32b448u: goto label_32b448;
        case 0x32b44cu: goto label_32b44c;
        case 0x32b450u: goto label_32b450;
        case 0x32b454u: goto label_32b454;
        case 0x32b458u: goto label_32b458;
        case 0x32b45cu: goto label_32b45c;
        case 0x32b460u: goto label_32b460;
        case 0x32b464u: goto label_32b464;
        case 0x32b468u: goto label_32b468;
        case 0x32b46cu: goto label_32b46c;
        case 0x32b470u: goto label_32b470;
        case 0x32b474u: goto label_32b474;
        case 0x32b478u: goto label_32b478;
        case 0x32b47cu: goto label_32b47c;
        case 0x32b480u: goto label_32b480;
        case 0x32b484u: goto label_32b484;
        case 0x32b488u: goto label_32b488;
        case 0x32b48cu: goto label_32b48c;
        case 0x32b490u: goto label_32b490;
        case 0x32b494u: goto label_32b494;
        case 0x32b498u: goto label_32b498;
        case 0x32b49cu: goto label_32b49c;
        case 0x32b4a0u: goto label_32b4a0;
        case 0x32b4a4u: goto label_32b4a4;
        case 0x32b4a8u: goto label_32b4a8;
        case 0x32b4acu: goto label_32b4ac;
        case 0x32b4b0u: goto label_32b4b0;
        case 0x32b4b4u: goto label_32b4b4;
        case 0x32b4b8u: goto label_32b4b8;
        case 0x32b4bcu: goto label_32b4bc;
        case 0x32b4c0u: goto label_32b4c0;
        case 0x32b4c4u: goto label_32b4c4;
        case 0x32b4c8u: goto label_32b4c8;
        case 0x32b4ccu: goto label_32b4cc;
        case 0x32b4d0u: goto label_32b4d0;
        case 0x32b4d4u: goto label_32b4d4;
        case 0x32b4d8u: goto label_32b4d8;
        case 0x32b4dcu: goto label_32b4dc;
        case 0x32b4e0u: goto label_32b4e0;
        case 0x32b4e4u: goto label_32b4e4;
        case 0x32b4e8u: goto label_32b4e8;
        case 0x32b4ecu: goto label_32b4ec;
        case 0x32b4f0u: goto label_32b4f0;
        case 0x32b4f4u: goto label_32b4f4;
        case 0x32b4f8u: goto label_32b4f8;
        case 0x32b4fcu: goto label_32b4fc;
        case 0x32b500u: goto label_32b500;
        case 0x32b504u: goto label_32b504;
        case 0x32b508u: goto label_32b508;
        case 0x32b50cu: goto label_32b50c;
        case 0x32b510u: goto label_32b510;
        case 0x32b514u: goto label_32b514;
        case 0x32b518u: goto label_32b518;
        case 0x32b51cu: goto label_32b51c;
        case 0x32b520u: goto label_32b520;
        case 0x32b524u: goto label_32b524;
        case 0x32b528u: goto label_32b528;
        case 0x32b52cu: goto label_32b52c;
        case 0x32b530u: goto label_32b530;
        case 0x32b534u: goto label_32b534;
        case 0x32b538u: goto label_32b538;
        case 0x32b53cu: goto label_32b53c;
        case 0x32b540u: goto label_32b540;
        case 0x32b544u: goto label_32b544;
        case 0x32b548u: goto label_32b548;
        case 0x32b54cu: goto label_32b54c;
        case 0x32b550u: goto label_32b550;
        case 0x32b554u: goto label_32b554;
        case 0x32b558u: goto label_32b558;
        case 0x32b55cu: goto label_32b55c;
        case 0x32b560u: goto label_32b560;
        case 0x32b564u: goto label_32b564;
        case 0x32b568u: goto label_32b568;
        case 0x32b56cu: goto label_32b56c;
        case 0x32b570u: goto label_32b570;
        case 0x32b574u: goto label_32b574;
        case 0x32b578u: goto label_32b578;
        case 0x32b57cu: goto label_32b57c;
        case 0x32b580u: goto label_32b580;
        case 0x32b584u: goto label_32b584;
        case 0x32b588u: goto label_32b588;
        case 0x32b58cu: goto label_32b58c;
        case 0x32b590u: goto label_32b590;
        case 0x32b594u: goto label_32b594;
        case 0x32b598u: goto label_32b598;
        case 0x32b59cu: goto label_32b59c;
        default: break;
    }

    ctx->pc = 0x32b250u;

label_32b250:
    // 0x32b250: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x32b250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_32b254:
    // 0x32b254: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x32b254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_32b258:
    // 0x32b258: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x32b258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_32b25c:
    // 0x32b25c: 0x3e00008  jr          $ra
label_32b260:
    if (ctx->pc == 0x32B260u) {
        ctx->pc = 0x32B260u;
            // 0x32b260: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x32B264u;
        goto label_32b264;
    }
    ctx->pc = 0x32B25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B25Cu;
            // 0x32b260: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32B264u;
label_32b264:
    // 0x32b264: 0x0  nop
    ctx->pc = 0x32b264u;
    // NOP
label_32b268:
    // 0x32b268: 0x0  nop
    ctx->pc = 0x32b268u;
    // NOP
label_32b26c:
    // 0x32b26c: 0x0  nop
    ctx->pc = 0x32b26cu;
    // NOP
label_32b270:
    // 0x32b270: 0x3e00008  jr          $ra
label_32b274:
    if (ctx->pc == 0x32B274u) {
        ctx->pc = 0x32B274u;
            // 0x32b274: 0x24022bb9  addiu       $v0, $zero, 0x2BB9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11193));
        ctx->pc = 0x32B278u;
        goto label_32b278;
    }
    ctx->pc = 0x32B270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B270u;
            // 0x32b274: 0x24022bb9  addiu       $v0, $zero, 0x2BB9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11193));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32B278u;
label_32b278:
    // 0x32b278: 0x0  nop
    ctx->pc = 0x32b278u;
    // NOP
label_32b27c:
    // 0x32b27c: 0x0  nop
    ctx->pc = 0x32b27cu;
    // NOP
label_32b280:
    // 0x32b280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32b280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_32b284:
    // 0x32b284: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x32b284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_32b288:
    // 0x32b288: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32b288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_32b28c:
    // 0x32b28c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32b28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32b290:
    // 0x32b290: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x32b290u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32b294:
    // 0x32b294: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32b294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32b298:
    // 0x32b298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32b298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32b29c:
    // 0x32b29c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32b2a0:
    // 0x32b2a0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x32b2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_32b2a4:
    // 0x32b2a4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_32b2a8:
    if (ctx->pc == 0x32B2A8u) {
        ctx->pc = 0x32B2A8u;
            // 0x32b2a8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B2ACu;
        goto label_32b2ac;
    }
    ctx->pc = 0x32B2A4u;
    {
        const bool branch_taken_0x32b2a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B2A4u;
            // 0x32b2a8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b2a4) {
            ctx->pc = 0x32B2E8u;
            goto label_32b2e8;
        }
    }
    ctx->pc = 0x32B2ACu;
label_32b2ac:
    // 0x32b2ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32b2acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b2b0:
    // 0x32b2b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32b2b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b2b4:
    // 0x32b2b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32b2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b2b8:
    // 0x32b2b8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x32b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_32b2bc:
    // 0x32b2bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32b2c0:
    // 0x32b2c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b2c4:
    // 0x32b2c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32b2c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32b2c8:
    // 0x32b2c8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x32b2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_32b2cc:
    // 0x32b2cc: 0x320f809  jalr        $t9
label_32b2d0:
    if (ctx->pc == 0x32B2D0u) {
        ctx->pc = 0x32B2D4u;
        goto label_32b2d4;
    }
    ctx->pc = 0x32B2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32B2D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32B2D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32B2D4u; }
            if (ctx->pc != 0x32B2D4u) { return; }
        }
        }
    }
    ctx->pc = 0x32B2D4u;
label_32b2d4:
    // 0x32b2d4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x32b2d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_32b2d8:
    // 0x32b2d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32b2d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_32b2dc:
    // 0x32b2dc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x32b2dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_32b2e0:
    // 0x32b2e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_32b2e4:
    if (ctx->pc == 0x32B2E4u) {
        ctx->pc = 0x32B2E4u;
            // 0x32b2e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x32B2E8u;
        goto label_32b2e8;
    }
    ctx->pc = 0x32B2E0u;
    {
        const bool branch_taken_0x32b2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B2E0u;
            // 0x32b2e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b2e0) {
            ctx->pc = 0x32B2B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32b2b8;
        }
    }
    ctx->pc = 0x32B2E8u;
label_32b2e8:
    // 0x32b2e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x32b2e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32b2ec:
    // 0x32b2ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32b2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_32b2f0:
    // 0x32b2f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32b2f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32b2f4:
    // 0x32b2f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32b2f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32b2f8:
    // 0x32b2f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32b2f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32b2fc:
    // 0x32b2fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32b2fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32b300:
    // 0x32b300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32b304:
    // 0x32b304: 0x3e00008  jr          $ra
label_32b308:
    if (ctx->pc == 0x32B308u) {
        ctx->pc = 0x32B308u;
            // 0x32b308: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x32B30Cu;
        goto label_32b30c;
    }
    ctx->pc = 0x32B304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B304u;
            // 0x32b308: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32B30Cu;
label_32b30c:
    // 0x32b30c: 0x0  nop
    ctx->pc = 0x32b30cu;
    // NOP
label_32b310:
    // 0x32b310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32b310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32b314:
    // 0x32b314: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32b314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32b318:
    // 0x32b318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32b318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32b31c:
    // 0x32b31c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x32b31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_32b320:
    // 0x32b320: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32b324:
    // 0x32b324: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x32b324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_32b328:
    // 0x32b328: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32b328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32b32c:
    // 0x32b32c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x32b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_32b330:
    // 0x32b330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32b334:
    // 0x32b334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32b334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32b338:
    // 0x32b338: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x32b338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_32b33c:
    // 0x32b33c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x32b33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32b340:
    // 0x32b340: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x32b340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_32b344:
    // 0x32b344: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x32b344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_32b348:
    // 0x32b348: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x32b348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_32b34c:
    // 0x32b34c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x32b34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_32b350:
    // 0x32b350: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x32b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_32b354:
    // 0x32b354: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32b354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32b358:
    // 0x32b358: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x32b358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_32b35c:
    // 0x32b35c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x32b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_32b360:
    // 0x32b360: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x32b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_32b364:
    // 0x32b364: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32b368:
    // 0x32b368: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x32b368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32b36c:
    // 0x32b36c: 0xc0a997c  jal         func_2A65F0
label_32b370:
    if (ctx->pc == 0x32B370u) {
        ctx->pc = 0x32B370u;
            // 0x32b370: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x32B374u;
        goto label_32b374;
    }
    ctx->pc = 0x32B36Cu;
    SET_GPR_U32(ctx, 31, 0x32B374u);
    ctx->pc = 0x32B370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B36Cu;
            // 0x32b370: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B374u; }
        if (ctx->pc != 0x32B374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B374u; }
        if (ctx->pc != 0x32B374u) { return; }
    }
    ctx->pc = 0x32B374u;
label_32b374:
    // 0x32b374: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x32b374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_32b378:
    // 0x32b378: 0xc0d879c  jal         func_361E70
label_32b37c:
    if (ctx->pc == 0x32B37Cu) {
        ctx->pc = 0x32B37Cu;
            // 0x32b37c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B380u;
        goto label_32b380;
    }
    ctx->pc = 0x32B378u;
    SET_GPR_U32(ctx, 31, 0x32B380u);
    ctx->pc = 0x32B37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B378u;
            // 0x32b37c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B380u; }
        if (ctx->pc != 0x32B380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B380u; }
        if (ctx->pc != 0x32B380u) { return; }
    }
    ctx->pc = 0x32B380u;
label_32b380:
    // 0x32b380: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32b380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32b384:
    // 0x32b384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32b388:
    // 0x32b388: 0x3e00008  jr          $ra
label_32b38c:
    if (ctx->pc == 0x32B38Cu) {
        ctx->pc = 0x32B38Cu;
            // 0x32b38c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x32B390u;
        goto label_32b390;
    }
    ctx->pc = 0x32B388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B388u;
            // 0x32b38c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32B390u;
label_32b390:
    // 0x32b390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32b390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32b394:
    // 0x32b394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32b398:
    // 0x32b398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32b39c:
    // 0x32b39c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x32b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_32b3a0:
    // 0x32b3a0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_32b3a4:
    if (ctx->pc == 0x32B3A4u) {
        ctx->pc = 0x32B3A4u;
            // 0x32b3a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B3A8u;
        goto label_32b3a8;
    }
    ctx->pc = 0x32B3A0u;
    {
        const bool branch_taken_0x32b3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B3A0u;
            // 0x32b3a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3a0) {
            ctx->pc = 0x32B4C0u;
            goto label_32b4c0;
        }
    }
    ctx->pc = 0x32B3A8u;
label_32b3a8:
    // 0x32b3a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x32b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_32b3ac:
    // 0x32b3ac: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x32b3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_32b3b0:
    // 0x32b3b0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x32b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_32b3b4:
    // 0x32b3b4: 0xc075128  jal         func_1D44A0
label_32b3b8:
    if (ctx->pc == 0x32B3B8u) {
        ctx->pc = 0x32B3B8u;
            // 0x32b3b8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x32B3BCu;
        goto label_32b3bc;
    }
    ctx->pc = 0x32B3B4u;
    SET_GPR_U32(ctx, 31, 0x32B3BCu);
    ctx->pc = 0x32B3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B3B4u;
            // 0x32b3b8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B3BCu; }
        if (ctx->pc != 0x32B3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B3BCu; }
        if (ctx->pc != 0x32B3BCu) { return; }
    }
    ctx->pc = 0x32B3BCu;
label_32b3bc:
    // 0x32b3bc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x32b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_32b3c0:
    // 0x32b3c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32b3c4:
    // 0x32b3c4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x32b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_32b3c8:
    // 0x32b3c8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x32b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_32b3cc:
    // 0x32b3cc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x32b3ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_32b3d0:
    // 0x32b3d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_32b3d4:
    if (ctx->pc == 0x32B3D4u) {
        ctx->pc = 0x32B3D4u;
            // 0x32b3d4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x32B3D8u;
        goto label_32b3d8;
    }
    ctx->pc = 0x32B3D0u;
    {
        const bool branch_taken_0x32b3d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B3D0u;
            // 0x32b3d4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3d0) {
            ctx->pc = 0x32B3E0u;
            goto label_32b3e0;
        }
    }
    ctx->pc = 0x32B3D8u;
label_32b3d8:
    // 0x32b3d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32b3dc:
    // 0x32b3dc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x32b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_32b3e0:
    // 0x32b3e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32b3e4:
    // 0x32b3e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32b3e8:
    // 0x32b3e8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x32b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_32b3ec:
    // 0x32b3ec: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x32b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_32b3f0:
    // 0x32b3f0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x32b3f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_32b3f4:
    // 0x32b3f4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_32b3f8:
    if (ctx->pc == 0x32B3F8u) {
        ctx->pc = 0x32B3F8u;
            // 0x32b3f8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x32B3FCu;
        goto label_32b3fc;
    }
    ctx->pc = 0x32B3F4u;
    {
        const bool branch_taken_0x32b3f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b3f4) {
            ctx->pc = 0x32B3F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B3F4u;
            // 0x32b3f8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B408u;
            goto label_32b408;
        }
    }
    ctx->pc = 0x32B3FCu;
label_32b3fc:
    // 0x32b3fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32b400:
    // 0x32b400: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x32b400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_32b404:
    // 0x32b404: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32b404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32b408:
    // 0x32b408: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32b408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32b40c:
    // 0x32b40c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x32b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_32b410:
    // 0x32b410: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x32b410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_32b414:
    // 0x32b414: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x32b414u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_32b418:
    // 0x32b418: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_32b41c:
    if (ctx->pc == 0x32B41Cu) {
        ctx->pc = 0x32B41Cu;
            // 0x32b41c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x32B420u;
        goto label_32b420;
    }
    ctx->pc = 0x32B418u;
    {
        const bool branch_taken_0x32b418 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b418) {
            ctx->pc = 0x32B41Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B418u;
            // 0x32b41c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B42Cu;
            goto label_32b42c;
        }
    }
    ctx->pc = 0x32B420u;
label_32b420:
    // 0x32b420: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32b420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32b424:
    // 0x32b424: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x32b424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_32b428:
    // 0x32b428: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32b428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32b42c:
    // 0x32b42c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x32b42cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_32b430:
    // 0x32b430: 0x320f809  jalr        $t9
label_32b434:
    if (ctx->pc == 0x32B434u) {
        ctx->pc = 0x32B434u;
            // 0x32b434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B438u;
        goto label_32b438;
    }
    ctx->pc = 0x32B430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32B438u);
        ctx->pc = 0x32B434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B430u;
            // 0x32b434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32B438u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32B438u; }
            if (ctx->pc != 0x32B438u) { return; }
        }
        }
    }
    ctx->pc = 0x32B438u;
label_32b438:
    // 0x32b438: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x32b438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_32b43c:
    // 0x32b43c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32b440:
    // 0x32b440: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x32b440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_32b444:
    // 0x32b444: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x32b444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_32b448:
    // 0x32b448: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x32b448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_32b44c:
    // 0x32b44c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x32b44cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_32b450:
    // 0x32b450: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_32b454:
    if (ctx->pc == 0x32B454u) {
        ctx->pc = 0x32B454u;
            // 0x32b454: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x32B458u;
        goto label_32b458;
    }
    ctx->pc = 0x32B450u;
    {
        const bool branch_taken_0x32b450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b450) {
            ctx->pc = 0x32B454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B450u;
            // 0x32b454: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B464u;
            goto label_32b464;
        }
    }
    ctx->pc = 0x32B458u;
label_32b458:
    // 0x32b458: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32b458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32b45c:
    // 0x32b45c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x32b45cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_32b460:
    // 0x32b460: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x32b460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_32b464:
    // 0x32b464: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32b464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32b468:
    // 0x32b468: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x32b468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_32b46c:
    // 0x32b46c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x32b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_32b470:
    // 0x32b470: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x32b470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_32b474:
    // 0x32b474: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x32b474u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_32b478:
    // 0x32b478: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_32b47c:
    if (ctx->pc == 0x32B47Cu) {
        ctx->pc = 0x32B480u;
        goto label_32b480;
    }
    ctx->pc = 0x32B478u;
    {
        const bool branch_taken_0x32b478 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b478) {
            ctx->pc = 0x32B488u;
            goto label_32b488;
        }
    }
    ctx->pc = 0x32B480u;
label_32b480:
    // 0x32b480: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32b480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32b484:
    // 0x32b484: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x32b484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_32b488:
    // 0x32b488: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32b488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32b48c:
    // 0x32b48c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x32b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_32b490:
    // 0x32b490: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x32b490u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32b494:
    // 0x32b494: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_32b498:
    if (ctx->pc == 0x32B498u) {
        ctx->pc = 0x32B49Cu;
        goto label_32b49c;
    }
    ctx->pc = 0x32B494u;
    {
        const bool branch_taken_0x32b494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b494) {
            ctx->pc = 0x32B4A4u;
            goto label_32b4a4;
        }
    }
    ctx->pc = 0x32B49Cu;
label_32b49c:
    // 0x32b49c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32b4a0:
    // 0x32b4a0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x32b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_32b4a4:
    // 0x32b4a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32b4a8:
    // 0x32b4a8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x32b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_32b4ac:
    // 0x32b4ac: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x32b4acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32b4b0:
    // 0x32b4b0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_32b4b4:
    if (ctx->pc == 0x32B4B4u) {
        ctx->pc = 0x32B4B4u;
            // 0x32b4b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x32B4B8u;
        goto label_32b4b8;
    }
    ctx->pc = 0x32B4B0u;
    {
        const bool branch_taken_0x32b4b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b4b0) {
            ctx->pc = 0x32B4B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B4B0u;
            // 0x32b4b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B4C4u;
            goto label_32b4c4;
        }
    }
    ctx->pc = 0x32B4B8u;
label_32b4b8:
    // 0x32b4b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32b4bc:
    // 0x32b4bc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x32b4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_32b4c0:
    // 0x32b4c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32b4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32b4c4:
    // 0x32b4c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b4c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32b4c8:
    // 0x32b4c8: 0x3e00008  jr          $ra
label_32b4cc:
    if (ctx->pc == 0x32B4CCu) {
        ctx->pc = 0x32B4CCu;
            // 0x32b4cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x32B4D0u;
        goto label_32b4d0;
    }
    ctx->pc = 0x32B4C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B4C8u;
            // 0x32b4cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32B4D0u;
label_32b4d0:
    // 0x32b4d0: 0x80ca8b0  j           func_32A2C0
label_32b4d4:
    if (ctx->pc == 0x32B4D4u) {
        ctx->pc = 0x32B4D4u;
            // 0x32b4d4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x32B4D8u;
        goto label_32b4d8;
    }
    ctx->pc = 0x32B4D0u;
    ctx->pc = 0x32B4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B4D0u;
            // 0x32b4d4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32A2C0u;
    {
        auto targetFn = runtime->lookupFunction(0x32A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x32B4D8u;
label_32b4d8:
    // 0x32b4d8: 0x0  nop
    ctx->pc = 0x32b4d8u;
    // NOP
label_32b4dc:
    // 0x32b4dc: 0x0  nop
    ctx->pc = 0x32b4dcu;
    // NOP
label_32b4e0:
    // 0x32b4e0: 0x80ca9d0  j           func_32A740
label_32b4e4:
    if (ctx->pc == 0x32B4E4u) {
        ctx->pc = 0x32B4E4u;
            // 0x32b4e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x32B4E8u;
        goto label_32b4e8;
    }
    ctx->pc = 0x32B4E0u;
    ctx->pc = 0x32B4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B4E0u;
            // 0x32b4e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32A740u;
    {
        auto targetFn = runtime->lookupFunction(0x32A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x32B4E8u;
label_32b4e8:
    // 0x32b4e8: 0x0  nop
    ctx->pc = 0x32b4e8u;
    // NOP
label_32b4ec:
    // 0x32b4ec: 0x0  nop
    ctx->pc = 0x32b4ecu;
    // NOP
label_32b4f0:
    // 0x32b4f0: 0x80ca858  j           func_32A160
label_32b4f4:
    if (ctx->pc == 0x32B4F4u) {
        ctx->pc = 0x32B4F4u;
            // 0x32b4f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x32B4F8u;
        goto label_32b4f8;
    }
    ctx->pc = 0x32B4F0u;
    ctx->pc = 0x32B4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B4F0u;
            // 0x32b4f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32A160u;
    if (runtime->hasFunction(0x32A160u)) {
        auto targetFn = runtime->lookupFunction(0x32A160u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0032A160_0x32a160(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x32B4F8u;
label_32b4f8:
    // 0x32b4f8: 0x0  nop
    ctx->pc = 0x32b4f8u;
    // NOP
label_32b4fc:
    // 0x32b4fc: 0x0  nop
    ctx->pc = 0x32b4fcu;
    // NOP
label_32b500:
    // 0x32b500: 0x80ca834  j           func_32A0D0
label_32b504:
    if (ctx->pc == 0x32B504u) {
        ctx->pc = 0x32B504u;
            // 0x32b504: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x32B508u;
        goto label_32b508;
    }
    ctx->pc = 0x32B500u;
    ctx->pc = 0x32B504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B500u;
            // 0x32b504: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32A0D0u;
    {
        auto targetFn = runtime->lookupFunction(0x32A0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x32B508u;
label_32b508:
    // 0x32b508: 0x0  nop
    ctx->pc = 0x32b508u;
    // NOP
label_32b50c:
    // 0x32b50c: 0x0  nop
    ctx->pc = 0x32b50cu;
    // NOP
label_32b510:
    // 0x32b510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32b514:
    // 0x32b514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_32b518:
    // 0x32b518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32b518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32b51c:
    // 0x32b51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32b520:
    // 0x32b520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32b520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32b524:
    // 0x32b524: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_32b528:
    if (ctx->pc == 0x32B528u) {
        ctx->pc = 0x32B528u;
            // 0x32b528: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B52Cu;
        goto label_32b52c;
    }
    ctx->pc = 0x32B524u;
    {
        const bool branch_taken_0x32b524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B524u;
            // 0x32b528: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b524) {
            ctx->pc = 0x32B580u;
            goto label_32b580;
        }
    }
    ctx->pc = 0x32B52Cu;
label_32b52c:
    // 0x32b52c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32b530:
    // 0x32b530: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32b530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32b534:
    // 0x32b534: 0x24634850  addiu       $v1, $v1, 0x4850
    ctx->pc = 0x32b534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18512));
label_32b538:
    // 0x32b538: 0x24424888  addiu       $v0, $v0, 0x4888
    ctx->pc = 0x32b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18568));
label_32b53c:
    // 0x32b53c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_32b540:
    // 0x32b540: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_32b544:
    if (ctx->pc == 0x32B544u) {
        ctx->pc = 0x32B544u;
            // 0x32b544: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x32B548u;
        goto label_32b548;
    }
    ctx->pc = 0x32B540u;
    {
        const bool branch_taken_0x32b540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B540u;
            // 0x32b544: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b540) {
            ctx->pc = 0x32B568u;
            goto label_32b568;
        }
    }
    ctx->pc = 0x32B548u;
label_32b548:
    // 0x32b548: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32b548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32b54c:
    // 0x32b54c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32b550:
    // 0x32b550: 0x24634900  addiu       $v1, $v1, 0x4900
    ctx->pc = 0x32b550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18688));
label_32b554:
    // 0x32b554: 0x24424938  addiu       $v0, $v0, 0x4938
    ctx->pc = 0x32b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18744));
label_32b558:
    // 0x32b558: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32b558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_32b55c:
    // 0x32b55c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32b55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b560:
    // 0x32b560: 0xc0cad68  jal         func_32B5A0
label_32b564:
    if (ctx->pc == 0x32B564u) {
        ctx->pc = 0x32B564u;
            // 0x32b564: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x32B568u;
        goto label_32b568;
    }
    ctx->pc = 0x32B560u;
    SET_GPR_U32(ctx, 31, 0x32B568u);
    ctx->pc = 0x32B564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B560u;
            // 0x32b564: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B5A0u;
    if (runtime->hasFunction(0x32B5A0u)) {
        auto targetFn = runtime->lookupFunction(0x32B5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B568u; }
        if (ctx->pc != 0x32B568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B5A0_0x32b5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B568u; }
        if (ctx->pc != 0x32B568u) { return; }
    }
    ctx->pc = 0x32B568u;
label_32b568:
    // 0x32b568: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x32b568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_32b56c:
    // 0x32b56c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32b56cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_32b570:
    // 0x32b570: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_32b574:
    if (ctx->pc == 0x32B574u) {
        ctx->pc = 0x32B574u;
            // 0x32b574: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B578u;
        goto label_32b578;
    }
    ctx->pc = 0x32B570u;
    {
        const bool branch_taken_0x32b570 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x32b570) {
            ctx->pc = 0x32B574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B570u;
            // 0x32b574: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B584u;
            goto label_32b584;
        }
    }
    ctx->pc = 0x32B578u;
label_32b578:
    // 0x32b578: 0xc0400a8  jal         func_1002A0
label_32b57c:
    if (ctx->pc == 0x32B57Cu) {
        ctx->pc = 0x32B57Cu;
            // 0x32b57c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B580u;
        goto label_32b580;
    }
    ctx->pc = 0x32B578u;
    SET_GPR_U32(ctx, 31, 0x32B580u);
    ctx->pc = 0x32B57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B578u;
            // 0x32b57c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B580u; }
        if (ctx->pc != 0x32B580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B580u; }
        if (ctx->pc != 0x32B580u) { return; }
    }
    ctx->pc = 0x32B580u;
label_32b580:
    // 0x32b580: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32b580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b584:
    // 0x32b584: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32b584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32b588:
    // 0x32b588: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32b588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32b58c:
    // 0x32b58c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b58cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32b590:
    // 0x32b590: 0x3e00008  jr          $ra
label_32b594:
    if (ctx->pc == 0x32B594u) {
        ctx->pc = 0x32B594u;
            // 0x32b594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x32B598u;
        goto label_32b598;
    }
    ctx->pc = 0x32B590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B590u;
            // 0x32b594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32B598u;
label_32b598:
    // 0x32b598: 0x0  nop
    ctx->pc = 0x32b598u;
    // NOP
label_32b59c:
    // 0x32b59c: 0x0  nop
    ctx->pc = 0x32b59cu;
    // NOP
}
