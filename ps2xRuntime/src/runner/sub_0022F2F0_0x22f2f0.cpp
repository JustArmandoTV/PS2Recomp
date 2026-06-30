#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022F2F0
// Address: 0x22f2f0 - 0x22f5a0
void sub_0022F2F0_0x22f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F2F0_0x22f2f0");
#endif

    switch (ctx->pc) {
        case 0x22f2f0u: goto label_22f2f0;
        case 0x22f2f4u: goto label_22f2f4;
        case 0x22f2f8u: goto label_22f2f8;
        case 0x22f2fcu: goto label_22f2fc;
        case 0x22f300u: goto label_22f300;
        case 0x22f304u: goto label_22f304;
        case 0x22f308u: goto label_22f308;
        case 0x22f30cu: goto label_22f30c;
        case 0x22f310u: goto label_22f310;
        case 0x22f314u: goto label_22f314;
        case 0x22f318u: goto label_22f318;
        case 0x22f31cu: goto label_22f31c;
        case 0x22f320u: goto label_22f320;
        case 0x22f324u: goto label_22f324;
        case 0x22f328u: goto label_22f328;
        case 0x22f32cu: goto label_22f32c;
        case 0x22f330u: goto label_22f330;
        case 0x22f334u: goto label_22f334;
        case 0x22f338u: goto label_22f338;
        case 0x22f33cu: goto label_22f33c;
        case 0x22f340u: goto label_22f340;
        case 0x22f344u: goto label_22f344;
        case 0x22f348u: goto label_22f348;
        case 0x22f34cu: goto label_22f34c;
        case 0x22f350u: goto label_22f350;
        case 0x22f354u: goto label_22f354;
        case 0x22f358u: goto label_22f358;
        case 0x22f35cu: goto label_22f35c;
        case 0x22f360u: goto label_22f360;
        case 0x22f364u: goto label_22f364;
        case 0x22f368u: goto label_22f368;
        case 0x22f36cu: goto label_22f36c;
        case 0x22f370u: goto label_22f370;
        case 0x22f374u: goto label_22f374;
        case 0x22f378u: goto label_22f378;
        case 0x22f37cu: goto label_22f37c;
        case 0x22f380u: goto label_22f380;
        case 0x22f384u: goto label_22f384;
        case 0x22f388u: goto label_22f388;
        case 0x22f38cu: goto label_22f38c;
        case 0x22f390u: goto label_22f390;
        case 0x22f394u: goto label_22f394;
        case 0x22f398u: goto label_22f398;
        case 0x22f39cu: goto label_22f39c;
        case 0x22f3a0u: goto label_22f3a0;
        case 0x22f3a4u: goto label_22f3a4;
        case 0x22f3a8u: goto label_22f3a8;
        case 0x22f3acu: goto label_22f3ac;
        case 0x22f3b0u: goto label_22f3b0;
        case 0x22f3b4u: goto label_22f3b4;
        case 0x22f3b8u: goto label_22f3b8;
        case 0x22f3bcu: goto label_22f3bc;
        case 0x22f3c0u: goto label_22f3c0;
        case 0x22f3c4u: goto label_22f3c4;
        case 0x22f3c8u: goto label_22f3c8;
        case 0x22f3ccu: goto label_22f3cc;
        case 0x22f3d0u: goto label_22f3d0;
        case 0x22f3d4u: goto label_22f3d4;
        case 0x22f3d8u: goto label_22f3d8;
        case 0x22f3dcu: goto label_22f3dc;
        case 0x22f3e0u: goto label_22f3e0;
        case 0x22f3e4u: goto label_22f3e4;
        case 0x22f3e8u: goto label_22f3e8;
        case 0x22f3ecu: goto label_22f3ec;
        case 0x22f3f0u: goto label_22f3f0;
        case 0x22f3f4u: goto label_22f3f4;
        case 0x22f3f8u: goto label_22f3f8;
        case 0x22f3fcu: goto label_22f3fc;
        case 0x22f400u: goto label_22f400;
        case 0x22f404u: goto label_22f404;
        case 0x22f408u: goto label_22f408;
        case 0x22f40cu: goto label_22f40c;
        case 0x22f410u: goto label_22f410;
        case 0x22f414u: goto label_22f414;
        case 0x22f418u: goto label_22f418;
        case 0x22f41cu: goto label_22f41c;
        case 0x22f420u: goto label_22f420;
        case 0x22f424u: goto label_22f424;
        case 0x22f428u: goto label_22f428;
        case 0x22f42cu: goto label_22f42c;
        case 0x22f430u: goto label_22f430;
        case 0x22f434u: goto label_22f434;
        case 0x22f438u: goto label_22f438;
        case 0x22f43cu: goto label_22f43c;
        case 0x22f440u: goto label_22f440;
        case 0x22f444u: goto label_22f444;
        case 0x22f448u: goto label_22f448;
        case 0x22f44cu: goto label_22f44c;
        case 0x22f450u: goto label_22f450;
        case 0x22f454u: goto label_22f454;
        case 0x22f458u: goto label_22f458;
        case 0x22f45cu: goto label_22f45c;
        case 0x22f460u: goto label_22f460;
        case 0x22f464u: goto label_22f464;
        case 0x22f468u: goto label_22f468;
        case 0x22f46cu: goto label_22f46c;
        case 0x22f470u: goto label_22f470;
        case 0x22f474u: goto label_22f474;
        case 0x22f478u: goto label_22f478;
        case 0x22f47cu: goto label_22f47c;
        case 0x22f480u: goto label_22f480;
        case 0x22f484u: goto label_22f484;
        case 0x22f488u: goto label_22f488;
        case 0x22f48cu: goto label_22f48c;
        case 0x22f490u: goto label_22f490;
        case 0x22f494u: goto label_22f494;
        case 0x22f498u: goto label_22f498;
        case 0x22f49cu: goto label_22f49c;
        case 0x22f4a0u: goto label_22f4a0;
        case 0x22f4a4u: goto label_22f4a4;
        case 0x22f4a8u: goto label_22f4a8;
        case 0x22f4acu: goto label_22f4ac;
        case 0x22f4b0u: goto label_22f4b0;
        case 0x22f4b4u: goto label_22f4b4;
        case 0x22f4b8u: goto label_22f4b8;
        case 0x22f4bcu: goto label_22f4bc;
        case 0x22f4c0u: goto label_22f4c0;
        case 0x22f4c4u: goto label_22f4c4;
        case 0x22f4c8u: goto label_22f4c8;
        case 0x22f4ccu: goto label_22f4cc;
        case 0x22f4d0u: goto label_22f4d0;
        case 0x22f4d4u: goto label_22f4d4;
        case 0x22f4d8u: goto label_22f4d8;
        case 0x22f4dcu: goto label_22f4dc;
        case 0x22f4e0u: goto label_22f4e0;
        case 0x22f4e4u: goto label_22f4e4;
        case 0x22f4e8u: goto label_22f4e8;
        case 0x22f4ecu: goto label_22f4ec;
        case 0x22f4f0u: goto label_22f4f0;
        case 0x22f4f4u: goto label_22f4f4;
        case 0x22f4f8u: goto label_22f4f8;
        case 0x22f4fcu: goto label_22f4fc;
        case 0x22f500u: goto label_22f500;
        case 0x22f504u: goto label_22f504;
        case 0x22f508u: goto label_22f508;
        case 0x22f50cu: goto label_22f50c;
        case 0x22f510u: goto label_22f510;
        case 0x22f514u: goto label_22f514;
        case 0x22f518u: goto label_22f518;
        case 0x22f51cu: goto label_22f51c;
        case 0x22f520u: goto label_22f520;
        case 0x22f524u: goto label_22f524;
        case 0x22f528u: goto label_22f528;
        case 0x22f52cu: goto label_22f52c;
        case 0x22f530u: goto label_22f530;
        case 0x22f534u: goto label_22f534;
        case 0x22f538u: goto label_22f538;
        case 0x22f53cu: goto label_22f53c;
        case 0x22f540u: goto label_22f540;
        case 0x22f544u: goto label_22f544;
        case 0x22f548u: goto label_22f548;
        case 0x22f54cu: goto label_22f54c;
        case 0x22f550u: goto label_22f550;
        case 0x22f554u: goto label_22f554;
        case 0x22f558u: goto label_22f558;
        case 0x22f55cu: goto label_22f55c;
        case 0x22f560u: goto label_22f560;
        case 0x22f564u: goto label_22f564;
        case 0x22f568u: goto label_22f568;
        case 0x22f56cu: goto label_22f56c;
        case 0x22f570u: goto label_22f570;
        case 0x22f574u: goto label_22f574;
        case 0x22f578u: goto label_22f578;
        case 0x22f57cu: goto label_22f57c;
        case 0x22f580u: goto label_22f580;
        case 0x22f584u: goto label_22f584;
        case 0x22f588u: goto label_22f588;
        case 0x22f58cu: goto label_22f58c;
        case 0x22f590u: goto label_22f590;
        case 0x22f594u: goto label_22f594;
        case 0x22f598u: goto label_22f598;
        case 0x22f59cu: goto label_22f59c;
        default: break;
    }

    ctx->pc = 0x22f2f0u;

label_22f2f0:
    // 0x22f2f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22f2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22f2f4:
    // 0x22f2f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22f2f8:
    // 0x22f2f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22f2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22f2fc:
    // 0x22f2fc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x22f2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_22f300:
    // 0x22f300: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22f300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22f304:
    // 0x22f304: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22f304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22f308:
    // 0x22f308: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22f308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22f30c:
    // 0x22f30c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22f30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22f310:
    // 0x22f310: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22f314:
    // 0x22f314: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22f318:
    // 0x22f318: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22f318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22f31c:
    // 0x22f31c: 0xc0a7a88  jal         func_29EA20
label_22f320:
    if (ctx->pc == 0x22F320u) {
        ctx->pc = 0x22F320u;
            // 0x22f320: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x22F324u;
        goto label_22f324;
    }
    ctx->pc = 0x22F31Cu;
    SET_GPR_U32(ctx, 31, 0x22F324u);
    ctx->pc = 0x22F320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F31Cu;
            // 0x22f320: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F324u; }
        if (ctx->pc != 0x22F324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F324u; }
        if (ctx->pc != 0x22F324u) { return; }
    }
    ctx->pc = 0x22F324u;
label_22f324:
    // 0x22f324: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22f324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_22f328:
    // 0x22f328: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22f328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f32c:
    // 0x22f32c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_22f330:
    if (ctx->pc == 0x22F330u) {
        ctx->pc = 0x22F330u;
            // 0x22f330: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22F334u;
        goto label_22f334;
    }
    ctx->pc = 0x22F32Cu;
    {
        const bool branch_taken_0x22f32c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F32Cu;
            // 0x22f330: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f32c) {
            ctx->pc = 0x22F340u;
            goto label_22f340;
        }
    }
    ctx->pc = 0x22F334u;
label_22f334:
    // 0x22f334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22f338:
    // 0x22f338: 0xc0871d0  jal         func_21C740
label_22f33c:
    if (ctx->pc == 0x22F33Cu) {
        ctx->pc = 0x22F33Cu;
            // 0x22f33c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F340u;
        goto label_22f340;
    }
    ctx->pc = 0x22F338u;
    SET_GPR_U32(ctx, 31, 0x22F340u);
    ctx->pc = 0x22F33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F338u;
            // 0x22f33c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C740u;
    if (runtime->hasFunction(0x21C740u)) {
        auto targetFn = runtime->lookupFunction(0x21C740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F340u; }
        if (ctx->pc != 0x22F340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021C740_0x21c740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F340u; }
        if (ctx->pc != 0x22F340u) { return; }
    }
    ctx->pc = 0x22F340u;
label_22f340:
    // 0x22f340: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22f340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22f344:
    // 0x22f344: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x22f344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_22f348:
    // 0x22f348: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22f348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22f34c:
    // 0x22f34c: 0xc0a7a88  jal         func_29EA20
label_22f350:
    if (ctx->pc == 0x22F350u) {
        ctx->pc = 0x22F350u;
            // 0x22f350: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x22F354u;
        goto label_22f354;
    }
    ctx->pc = 0x22F34Cu;
    SET_GPR_U32(ctx, 31, 0x22F354u);
    ctx->pc = 0x22F350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F34Cu;
            // 0x22f350: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F354u; }
        if (ctx->pc != 0x22F354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F354u; }
        if (ctx->pc != 0x22F354u) { return; }
    }
    ctx->pc = 0x22F354u;
label_22f354:
    // 0x22f354: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22f354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_22f358:
    // 0x22f358: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22f358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f35c:
    // 0x22f35c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_22f360:
    if (ctx->pc == 0x22F360u) {
        ctx->pc = 0x22F360u;
            // 0x22f360: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22F364u;
        goto label_22f364;
    }
    ctx->pc = 0x22F35Cu;
    {
        const bool branch_taken_0x22f35c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F35Cu;
            // 0x22f360: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f35c) {
            ctx->pc = 0x22F370u;
            goto label_22f370;
        }
    }
    ctx->pc = 0x22F364u;
label_22f364:
    // 0x22f364: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22f364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f368:
    // 0x22f368: 0xc086c3c  jal         func_21B0F0
label_22f36c:
    if (ctx->pc == 0x22F36Cu) {
        ctx->pc = 0x22F36Cu;
            // 0x22f36c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F370u;
        goto label_22f370;
    }
    ctx->pc = 0x22F368u;
    SET_GPR_U32(ctx, 31, 0x22F370u);
    ctx->pc = 0x22F36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F368u;
            // 0x22f36c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21B0F0u;
    if (runtime->hasFunction(0x21B0F0u)) {
        auto targetFn = runtime->lookupFunction(0x21B0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F370u; }
        if (ctx->pc != 0x22F370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021B0F0_0x21b0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F370u; }
        if (ctx->pc != 0x22F370u) { return; }
    }
    ctx->pc = 0x22F370u;
label_22f370:
    // 0x22f370: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22f370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22f374:
    // 0x22f374: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x22f374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_22f378:
    // 0x22f378: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22f378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22f37c:
    // 0x22f37c: 0xc0a7a88  jal         func_29EA20
label_22f380:
    if (ctx->pc == 0x22F380u) {
        ctx->pc = 0x22F380u;
            // 0x22f380: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x22F384u;
        goto label_22f384;
    }
    ctx->pc = 0x22F37Cu;
    SET_GPR_U32(ctx, 31, 0x22F384u);
    ctx->pc = 0x22F380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F37Cu;
            // 0x22f380: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F384u; }
        if (ctx->pc != 0x22F384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F384u; }
        if (ctx->pc != 0x22F384u) { return; }
    }
    ctx->pc = 0x22F384u;
label_22f384:
    // 0x22f384: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x22f384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_22f388:
    // 0x22f388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22f388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f38c:
    // 0x22f38c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_22f390:
    if (ctx->pc == 0x22F390u) {
        ctx->pc = 0x22F390u;
            // 0x22f390: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22F394u;
        goto label_22f394;
    }
    ctx->pc = 0x22F38Cu;
    {
        const bool branch_taken_0x22f38c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F38Cu;
            // 0x22f390: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f38c) {
            ctx->pc = 0x22F3F8u;
            goto label_22f3f8;
        }
    }
    ctx->pc = 0x22F394u;
label_22f394:
    // 0x22f394: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x22f394u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_22f398:
    // 0x22f398: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x22f398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_22f39c:
    // 0x22f39c: 0x24e7d420  addiu       $a3, $a3, -0x2BE0
    ctx->pc = 0x22f39cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956064));
label_22f3a0:
    // 0x22f3a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x22f3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_22f3a4:
    // 0x22f3a4: 0x24c6d430  addiu       $a2, $a2, -0x2BD0
    ctx->pc = 0x22f3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956080));
label_22f3a8:
    // 0x22f3a8: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x22f3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
label_22f3ac:
    // 0x22f3ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22f3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f3b0:
    // 0x22f3b0: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x22f3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_22f3b4:
    // 0x22f3b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f3b8:
    // 0x22f3b8: 0x2463e6d0  addiu       $v1, $v1, -0x1930
    ctx->pc = 0x22f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960848));
label_22f3bc:
    // 0x22f3bc: 0xa6050006  sh          $a1, 0x6($s0)
    ctx->pc = 0x22f3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 5));
label_22f3c0:
    // 0x22f3c0: 0x2442f0c0  addiu       $v0, $v0, -0xF40
    ctx->pc = 0x22f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963392));
label_22f3c4:
    // 0x22f3c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x22f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_22f3c8:
    // 0x22f3c8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x22f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_22f3cc:
    // 0x22f3cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22f3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_22f3d0:
    // 0x22f3d0: 0x2484d830  addiu       $a0, $a0, -0x27D0
    ctx->pc = 0x22f3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957104));
label_22f3d4:
    // 0x22f3d4: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x22f3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_22f3d8:
    // 0x22f3d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f3dc:
    // 0x22f3dc: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x22f3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_22f3e0:
    // 0x22f3e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22f3e4:
    // 0x22f3e4: 0xa605000e  sh          $a1, 0xE($s0)
    ctx->pc = 0x22f3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 5));
label_22f3e8:
    // 0x22f3e8: 0x2442f090  addiu       $v0, $v0, -0xF70
    ctx->pc = 0x22f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963344));
label_22f3ec:
    // 0x22f3ec: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x22f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_22f3f0:
    // 0x22f3f0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x22f3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_22f3f4:
    // 0x22f3f4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x22f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_22f3f8:
    // 0x22f3f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22f3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22f3fc:
    // 0x22f3fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22f3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22f400:
    // 0x22f400: 0xc0801a0  jal         func_200680
label_22f404:
    if (ctx->pc == 0x22F404u) {
        ctx->pc = 0x22F404u;
            // 0x22f404: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22F408u;
        goto label_22f408;
    }
    ctx->pc = 0x22F400u;
    SET_GPR_U32(ctx, 31, 0x22F408u);
    ctx->pc = 0x22F404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F400u;
            // 0x22f404: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200680u;
    if (runtime->hasFunction(0x200680u)) {
        auto targetFn = runtime->lookupFunction(0x200680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F408u; }
        if (ctx->pc != 0x22F408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200680_0x200680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F408u; }
        if (ctx->pc != 0x22F408u) { return; }
    }
    ctx->pc = 0x22F408u;
label_22f408:
    // 0x22f408: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22f408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22f40c:
    // 0x22f40c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22f410:
    // 0x22f410: 0xc0801a0  jal         func_200680
label_22f414:
    if (ctx->pc == 0x22F414u) {
        ctx->pc = 0x22F414u;
            // 0x22f414: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x22F418u;
        goto label_22f418;
    }
    ctx->pc = 0x22F410u;
    SET_GPR_U32(ctx, 31, 0x22F418u);
    ctx->pc = 0x22F414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F410u;
            // 0x22f414: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200680u;
    if (runtime->hasFunction(0x200680u)) {
        auto targetFn = runtime->lookupFunction(0x200680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F418u; }
        if (ctx->pc != 0x22F418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200680_0x200680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F418u; }
        if (ctx->pc != 0x22F418u) { return; }
    }
    ctx->pc = 0x22F418u;
label_22f418:
    // 0x22f418: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22f418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22f41c:
    // 0x22f41c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22f41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f420:
    // 0x22f420: 0xc0801a0  jal         func_200680
label_22f424:
    if (ctx->pc == 0x22F424u) {
        ctx->pc = 0x22F424u;
            // 0x22f424: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x22F428u;
        goto label_22f428;
    }
    ctx->pc = 0x22F420u;
    SET_GPR_U32(ctx, 31, 0x22F428u);
    ctx->pc = 0x22F424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F420u;
            // 0x22f424: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200680u;
    if (runtime->hasFunction(0x200680u)) {
        auto targetFn = runtime->lookupFunction(0x200680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F428u; }
        if (ctx->pc != 0x22F428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200680_0x200680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F428u; }
        if (ctx->pc != 0x22F428u) { return; }
    }
    ctx->pc = 0x22F428u;
label_22f428:
    // 0x22f428: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x22f428u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_22f42c:
    // 0x22f42c: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_22f430:
    if (ctx->pc == 0x22F430u) {
        ctx->pc = 0x22F430u;
            // 0x22f430: 0x96230004  lhu         $v1, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x22F434u;
        goto label_22f434;
    }
    ctx->pc = 0x22F42Cu;
    {
        const bool branch_taken_0x22f42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f42c) {
            ctx->pc = 0x22F430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F42Cu;
            // 0x22f430: 0x96230004  lhu         $v1, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F470u;
            goto label_22f470;
        }
    }
    ctx->pc = 0x22F434u;
label_22f434:
    // 0x22f434: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x22f434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_22f438:
    // 0x22f438: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22f438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22f43c:
    // 0x22f43c: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x22f43cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
label_22f440:
    // 0x22f440: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x22f440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_22f444:
    // 0x22f444: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22f444u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_22f448:
    // 0x22f448: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_22f44c:
    if (ctx->pc == 0x22F44Cu) {
        ctx->pc = 0x22F450u;
        goto label_22f450;
    }
    ctx->pc = 0x22F448u;
    {
        const bool branch_taken_0x22f448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f448) {
            ctx->pc = 0x22F46Cu;
            goto label_22f46c;
        }
    }
    ctx->pc = 0x22F450u;
label_22f450:
    // 0x22f450: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_22f454:
    if (ctx->pc == 0x22F454u) {
        ctx->pc = 0x22F458u;
        goto label_22f458;
    }
    ctx->pc = 0x22F450u;
    {
        const bool branch_taken_0x22f450 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f450) {
            ctx->pc = 0x22F46Cu;
            goto label_22f46c;
        }
    }
    ctx->pc = 0x22F458u;
label_22f458:
    // 0x22f458: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x22f458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22f45c:
    // 0x22f45c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22f460:
    // 0x22f460: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22f460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22f464:
    // 0x22f464: 0x320f809  jalr        $t9
label_22f468:
    if (ctx->pc == 0x22F468u) {
        ctx->pc = 0x22F468u;
            // 0x22f468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22F46Cu;
        goto label_22f46c;
    }
    ctx->pc = 0x22F464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22F46Cu);
        ctx->pc = 0x22F468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F464u;
            // 0x22f468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22F46Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22F46Cu; }
            if (ctx->pc != 0x22F46Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22F46Cu;
label_22f46c:
    // 0x22f46c: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x22f46cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_22f470:
    // 0x22f470: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_22f474:
    if (ctx->pc == 0x22F474u) {
        ctx->pc = 0x22F474u;
            // 0x22f474: 0x96030004  lhu         $v1, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x22F478u;
        goto label_22f478;
    }
    ctx->pc = 0x22F470u;
    {
        const bool branch_taken_0x22f470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f470) {
            ctx->pc = 0x22F474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F470u;
            // 0x22f474: 0x96030004  lhu         $v1, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F4B4u;
            goto label_22f4b4;
        }
    }
    ctx->pc = 0x22F478u;
label_22f478:
    // 0x22f478: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x22f478u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_22f47c:
    // 0x22f47c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22f480:
    // 0x22f480: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x22f480u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
label_22f484:
    // 0x22f484: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x22f484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_22f488:
    // 0x22f488: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22f488u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_22f48c:
    // 0x22f48c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_22f490:
    if (ctx->pc == 0x22F490u) {
        ctx->pc = 0x22F494u;
        goto label_22f494;
    }
    ctx->pc = 0x22F48Cu;
    {
        const bool branch_taken_0x22f48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f48c) {
            ctx->pc = 0x22F4B0u;
            goto label_22f4b0;
        }
    }
    ctx->pc = 0x22F494u;
label_22f494:
    // 0x22f494: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_22f498:
    if (ctx->pc == 0x22F498u) {
        ctx->pc = 0x22F49Cu;
        goto label_22f49c;
    }
    ctx->pc = 0x22F494u;
    {
        const bool branch_taken_0x22f494 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f494) {
            ctx->pc = 0x22F4B0u;
            goto label_22f4b0;
        }
    }
    ctx->pc = 0x22F49Cu;
label_22f49c:
    // 0x22f49c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x22f49cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22f4a0:
    // 0x22f4a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22f4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22f4a4:
    // 0x22f4a4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22f4a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22f4a8:
    // 0x22f4a8: 0x320f809  jalr        $t9
label_22f4ac:
    if (ctx->pc == 0x22F4ACu) {
        ctx->pc = 0x22F4ACu;
            // 0x22f4ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22F4B0u;
        goto label_22f4b0;
    }
    ctx->pc = 0x22F4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22F4B0u);
        ctx->pc = 0x22F4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F4A8u;
            // 0x22f4ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22F4B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22F4B0u; }
            if (ctx->pc != 0x22F4B0u) { return; }
        }
        }
    }
    ctx->pc = 0x22F4B0u;
label_22f4b0:
    // 0x22f4b0: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x22f4b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_22f4b4:
    // 0x22f4b4: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_22f4b8:
    if (ctx->pc == 0x22F4B8u) {
        ctx->pc = 0x22F4B8u;
            // 0x22f4b8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x22F4BCu;
        goto label_22f4bc;
    }
    ctx->pc = 0x22F4B4u;
    {
        const bool branch_taken_0x22f4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f4b4) {
            ctx->pc = 0x22F4B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F4B4u;
            // 0x22f4b8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F4F8u;
            goto label_22f4f8;
        }
    }
    ctx->pc = 0x22F4BCu;
label_22f4bc:
    // 0x22f4bc: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x22f4bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_22f4c0:
    // 0x22f4c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22f4c4:
    // 0x22f4c4: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x22f4c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_22f4c8:
    // 0x22f4c8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x22f4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_22f4cc:
    // 0x22f4cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22f4ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_22f4d0:
    // 0x22f4d0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_22f4d4:
    if (ctx->pc == 0x22F4D4u) {
        ctx->pc = 0x22F4D8u;
        goto label_22f4d8;
    }
    ctx->pc = 0x22F4D0u;
    {
        const bool branch_taken_0x22f4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f4d0) {
            ctx->pc = 0x22F4F4u;
            goto label_22f4f4;
        }
    }
    ctx->pc = 0x22F4D8u;
label_22f4d8:
    // 0x22f4d8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_22f4dc:
    if (ctx->pc == 0x22F4DCu) {
        ctx->pc = 0x22F4E0u;
        goto label_22f4e0;
    }
    ctx->pc = 0x22F4D8u;
    {
        const bool branch_taken_0x22f4d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f4d8) {
            ctx->pc = 0x22F4F4u;
            goto label_22f4f4;
        }
    }
    ctx->pc = 0x22F4E0u;
label_22f4e0:
    // 0x22f4e0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x22f4e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22f4e4:
    // 0x22f4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f4e8:
    // 0x22f4e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22f4e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22f4ec:
    // 0x22f4ec: 0x320f809  jalr        $t9
label_22f4f0:
    if (ctx->pc == 0x22F4F0u) {
        ctx->pc = 0x22F4F0u;
            // 0x22f4f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22F4F4u;
        goto label_22f4f4;
    }
    ctx->pc = 0x22F4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22F4F4u);
        ctx->pc = 0x22F4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F4ECu;
            // 0x22f4f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22F4F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22F4F4u; }
            if (ctx->pc != 0x22F4F4u) { return; }
        }
        }
    }
    ctx->pc = 0x22F4F4u;
label_22f4f4:
    // 0x22f4f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22f4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22f4f8:
    // 0x22f4f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22f4f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22f4fc:
    // 0x22f4fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22f4fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22f500:
    // 0x22f500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22f500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22f504:
    // 0x22f504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22f508:
    // 0x22f508: 0x3e00008  jr          $ra
label_22f50c:
    if (ctx->pc == 0x22F50Cu) {
        ctx->pc = 0x22F50Cu;
            // 0x22f50c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x22F510u;
        goto label_22f510;
    }
    ctx->pc = 0x22F508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F508u;
            // 0x22f50c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22F510u;
label_22f510:
    // 0x22f510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22f510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22f514:
    // 0x22f514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22f518:
    // 0x22f518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22f51c:
    // 0x22f51c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22f520:
    // 0x22f520: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_22f524:
    if (ctx->pc == 0x22F524u) {
        ctx->pc = 0x22F524u;
            // 0x22f524: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F528u;
        goto label_22f528;
    }
    ctx->pc = 0x22F520u;
    {
        const bool branch_taken_0x22f520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f520) {
            ctx->pc = 0x22F524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F520u;
            // 0x22f524: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F590u;
            goto label_22f590;
        }
    }
    ctx->pc = 0x22F528u;
label_22f528:
    // 0x22f528: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f52c:
    // 0x22f52c: 0x2442f090  addiu       $v0, $v0, -0xF70
    ctx->pc = 0x22f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963344));
label_22f530:
    // 0x22f530: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_22f534:
    if (ctx->pc == 0x22F534u) {
        ctx->pc = 0x22F534u;
            // 0x22f534: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22F538u;
        goto label_22f538;
    }
    ctx->pc = 0x22F530u;
    {
        const bool branch_taken_0x22f530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F530u;
            // 0x22f534: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f530) {
            ctx->pc = 0x22F564u;
            goto label_22f564;
        }
    }
    ctx->pc = 0x22F538u;
label_22f538:
    // 0x22f538: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f53c:
    // 0x22f53c: 0x2442d830  addiu       $v0, $v0, -0x27D0
    ctx->pc = 0x22f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957104));
label_22f540:
    // 0x22f540: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_22f544:
    if (ctx->pc == 0x22F544u) {
        ctx->pc = 0x22F544u;
            // 0x22f544: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22F548u;
        goto label_22f548;
    }
    ctx->pc = 0x22F540u;
    {
        const bool branch_taken_0x22f540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F540u;
            // 0x22f544: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f540) {
            ctx->pc = 0x22F564u;
            goto label_22f564;
        }
    }
    ctx->pc = 0x22F548u;
label_22f548:
    // 0x22f548: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f54c:
    // 0x22f54c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_22f550:
    // 0x22f550: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_22f554:
    if (ctx->pc == 0x22F554u) {
        ctx->pc = 0x22F554u;
            // 0x22f554: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22F558u;
        goto label_22f558;
    }
    ctx->pc = 0x22F550u;
    {
        const bool branch_taken_0x22f550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F550u;
            // 0x22f554: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f550) {
            ctx->pc = 0x22F564u;
            goto label_22f564;
        }
    }
    ctx->pc = 0x22F558u;
label_22f558:
    // 0x22f558: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f55c:
    // 0x22f55c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_22f560:
    // 0x22f560: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22f560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_22f564:
    // 0x22f564: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x22f564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_22f568:
    // 0x22f568: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22f568u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22f56c:
    // 0x22f56c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_22f570:
    if (ctx->pc == 0x22F570u) {
        ctx->pc = 0x22F574u;
        goto label_22f574;
    }
    ctx->pc = 0x22F56Cu;
    {
        const bool branch_taken_0x22f56c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22f56c) {
            ctx->pc = 0x22F58Cu;
            goto label_22f58c;
        }
    }
    ctx->pc = 0x22F574u;
label_22f574:
    // 0x22f574: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22f574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22f578:
    // 0x22f578: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x22f578u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_22f57c:
    // 0x22f57c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22f57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22f580:
    // 0x22f580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22f580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f584:
    // 0x22f584: 0xc0a7ab4  jal         func_29EAD0
label_22f588:
    if (ctx->pc == 0x22F588u) {
        ctx->pc = 0x22F588u;
            // 0x22f588: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x22F58Cu;
        goto label_22f58c;
    }
    ctx->pc = 0x22F584u;
    SET_GPR_U32(ctx, 31, 0x22F58Cu);
    ctx->pc = 0x22F588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F584u;
            // 0x22f588: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F58Cu; }
        if (ctx->pc != 0x22F58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F58Cu; }
        if (ctx->pc != 0x22F58Cu) { return; }
    }
    ctx->pc = 0x22F58Cu;
label_22f58c:
    // 0x22f58c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22f58cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f590:
    // 0x22f590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22f590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22f594:
    // 0x22f594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22f598:
    // 0x22f598: 0x3e00008  jr          $ra
label_22f59c:
    if (ctx->pc == 0x22F59Cu) {
        ctx->pc = 0x22F59Cu;
            // 0x22f59c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22F5A0u;
        goto label_fallthrough_0x22f598;
    }
    ctx->pc = 0x22F598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F598u;
            // 0x22f59c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x22f598:
    ctx->pc = 0x22F5A0u;
}
