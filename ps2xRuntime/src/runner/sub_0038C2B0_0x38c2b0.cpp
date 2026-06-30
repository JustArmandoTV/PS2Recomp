#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038C2B0
// Address: 0x38c2b0 - 0x38c580
void sub_0038C2B0_0x38c2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C2B0_0x38c2b0");
#endif

    switch (ctx->pc) {
        case 0x38c2b0u: goto label_38c2b0;
        case 0x38c2b4u: goto label_38c2b4;
        case 0x38c2b8u: goto label_38c2b8;
        case 0x38c2bcu: goto label_38c2bc;
        case 0x38c2c0u: goto label_38c2c0;
        case 0x38c2c4u: goto label_38c2c4;
        case 0x38c2c8u: goto label_38c2c8;
        case 0x38c2ccu: goto label_38c2cc;
        case 0x38c2d0u: goto label_38c2d0;
        case 0x38c2d4u: goto label_38c2d4;
        case 0x38c2d8u: goto label_38c2d8;
        case 0x38c2dcu: goto label_38c2dc;
        case 0x38c2e0u: goto label_38c2e0;
        case 0x38c2e4u: goto label_38c2e4;
        case 0x38c2e8u: goto label_38c2e8;
        case 0x38c2ecu: goto label_38c2ec;
        case 0x38c2f0u: goto label_38c2f0;
        case 0x38c2f4u: goto label_38c2f4;
        case 0x38c2f8u: goto label_38c2f8;
        case 0x38c2fcu: goto label_38c2fc;
        case 0x38c300u: goto label_38c300;
        case 0x38c304u: goto label_38c304;
        case 0x38c308u: goto label_38c308;
        case 0x38c30cu: goto label_38c30c;
        case 0x38c310u: goto label_38c310;
        case 0x38c314u: goto label_38c314;
        case 0x38c318u: goto label_38c318;
        case 0x38c31cu: goto label_38c31c;
        case 0x38c320u: goto label_38c320;
        case 0x38c324u: goto label_38c324;
        case 0x38c328u: goto label_38c328;
        case 0x38c32cu: goto label_38c32c;
        case 0x38c330u: goto label_38c330;
        case 0x38c334u: goto label_38c334;
        case 0x38c338u: goto label_38c338;
        case 0x38c33cu: goto label_38c33c;
        case 0x38c340u: goto label_38c340;
        case 0x38c344u: goto label_38c344;
        case 0x38c348u: goto label_38c348;
        case 0x38c34cu: goto label_38c34c;
        case 0x38c350u: goto label_38c350;
        case 0x38c354u: goto label_38c354;
        case 0x38c358u: goto label_38c358;
        case 0x38c35cu: goto label_38c35c;
        case 0x38c360u: goto label_38c360;
        case 0x38c364u: goto label_38c364;
        case 0x38c368u: goto label_38c368;
        case 0x38c36cu: goto label_38c36c;
        case 0x38c370u: goto label_38c370;
        case 0x38c374u: goto label_38c374;
        case 0x38c378u: goto label_38c378;
        case 0x38c37cu: goto label_38c37c;
        case 0x38c380u: goto label_38c380;
        case 0x38c384u: goto label_38c384;
        case 0x38c388u: goto label_38c388;
        case 0x38c38cu: goto label_38c38c;
        case 0x38c390u: goto label_38c390;
        case 0x38c394u: goto label_38c394;
        case 0x38c398u: goto label_38c398;
        case 0x38c39cu: goto label_38c39c;
        case 0x38c3a0u: goto label_38c3a0;
        case 0x38c3a4u: goto label_38c3a4;
        case 0x38c3a8u: goto label_38c3a8;
        case 0x38c3acu: goto label_38c3ac;
        case 0x38c3b0u: goto label_38c3b0;
        case 0x38c3b4u: goto label_38c3b4;
        case 0x38c3b8u: goto label_38c3b8;
        case 0x38c3bcu: goto label_38c3bc;
        case 0x38c3c0u: goto label_38c3c0;
        case 0x38c3c4u: goto label_38c3c4;
        case 0x38c3c8u: goto label_38c3c8;
        case 0x38c3ccu: goto label_38c3cc;
        case 0x38c3d0u: goto label_38c3d0;
        case 0x38c3d4u: goto label_38c3d4;
        case 0x38c3d8u: goto label_38c3d8;
        case 0x38c3dcu: goto label_38c3dc;
        case 0x38c3e0u: goto label_38c3e0;
        case 0x38c3e4u: goto label_38c3e4;
        case 0x38c3e8u: goto label_38c3e8;
        case 0x38c3ecu: goto label_38c3ec;
        case 0x38c3f0u: goto label_38c3f0;
        case 0x38c3f4u: goto label_38c3f4;
        case 0x38c3f8u: goto label_38c3f8;
        case 0x38c3fcu: goto label_38c3fc;
        case 0x38c400u: goto label_38c400;
        case 0x38c404u: goto label_38c404;
        case 0x38c408u: goto label_38c408;
        case 0x38c40cu: goto label_38c40c;
        case 0x38c410u: goto label_38c410;
        case 0x38c414u: goto label_38c414;
        case 0x38c418u: goto label_38c418;
        case 0x38c41cu: goto label_38c41c;
        case 0x38c420u: goto label_38c420;
        case 0x38c424u: goto label_38c424;
        case 0x38c428u: goto label_38c428;
        case 0x38c42cu: goto label_38c42c;
        case 0x38c430u: goto label_38c430;
        case 0x38c434u: goto label_38c434;
        case 0x38c438u: goto label_38c438;
        case 0x38c43cu: goto label_38c43c;
        case 0x38c440u: goto label_38c440;
        case 0x38c444u: goto label_38c444;
        case 0x38c448u: goto label_38c448;
        case 0x38c44cu: goto label_38c44c;
        case 0x38c450u: goto label_38c450;
        case 0x38c454u: goto label_38c454;
        case 0x38c458u: goto label_38c458;
        case 0x38c45cu: goto label_38c45c;
        case 0x38c460u: goto label_38c460;
        case 0x38c464u: goto label_38c464;
        case 0x38c468u: goto label_38c468;
        case 0x38c46cu: goto label_38c46c;
        case 0x38c470u: goto label_38c470;
        case 0x38c474u: goto label_38c474;
        case 0x38c478u: goto label_38c478;
        case 0x38c47cu: goto label_38c47c;
        case 0x38c480u: goto label_38c480;
        case 0x38c484u: goto label_38c484;
        case 0x38c488u: goto label_38c488;
        case 0x38c48cu: goto label_38c48c;
        case 0x38c490u: goto label_38c490;
        case 0x38c494u: goto label_38c494;
        case 0x38c498u: goto label_38c498;
        case 0x38c49cu: goto label_38c49c;
        case 0x38c4a0u: goto label_38c4a0;
        case 0x38c4a4u: goto label_38c4a4;
        case 0x38c4a8u: goto label_38c4a8;
        case 0x38c4acu: goto label_38c4ac;
        case 0x38c4b0u: goto label_38c4b0;
        case 0x38c4b4u: goto label_38c4b4;
        case 0x38c4b8u: goto label_38c4b8;
        case 0x38c4bcu: goto label_38c4bc;
        case 0x38c4c0u: goto label_38c4c0;
        case 0x38c4c4u: goto label_38c4c4;
        case 0x38c4c8u: goto label_38c4c8;
        case 0x38c4ccu: goto label_38c4cc;
        case 0x38c4d0u: goto label_38c4d0;
        case 0x38c4d4u: goto label_38c4d4;
        case 0x38c4d8u: goto label_38c4d8;
        case 0x38c4dcu: goto label_38c4dc;
        case 0x38c4e0u: goto label_38c4e0;
        case 0x38c4e4u: goto label_38c4e4;
        case 0x38c4e8u: goto label_38c4e8;
        case 0x38c4ecu: goto label_38c4ec;
        case 0x38c4f0u: goto label_38c4f0;
        case 0x38c4f4u: goto label_38c4f4;
        case 0x38c4f8u: goto label_38c4f8;
        case 0x38c4fcu: goto label_38c4fc;
        case 0x38c500u: goto label_38c500;
        case 0x38c504u: goto label_38c504;
        case 0x38c508u: goto label_38c508;
        case 0x38c50cu: goto label_38c50c;
        case 0x38c510u: goto label_38c510;
        case 0x38c514u: goto label_38c514;
        case 0x38c518u: goto label_38c518;
        case 0x38c51cu: goto label_38c51c;
        case 0x38c520u: goto label_38c520;
        case 0x38c524u: goto label_38c524;
        case 0x38c528u: goto label_38c528;
        case 0x38c52cu: goto label_38c52c;
        case 0x38c530u: goto label_38c530;
        case 0x38c534u: goto label_38c534;
        case 0x38c538u: goto label_38c538;
        case 0x38c53cu: goto label_38c53c;
        case 0x38c540u: goto label_38c540;
        case 0x38c544u: goto label_38c544;
        case 0x38c548u: goto label_38c548;
        case 0x38c54cu: goto label_38c54c;
        case 0x38c550u: goto label_38c550;
        case 0x38c554u: goto label_38c554;
        case 0x38c558u: goto label_38c558;
        case 0x38c55cu: goto label_38c55c;
        case 0x38c560u: goto label_38c560;
        case 0x38c564u: goto label_38c564;
        case 0x38c568u: goto label_38c568;
        case 0x38c56cu: goto label_38c56c;
        case 0x38c570u: goto label_38c570;
        case 0x38c574u: goto label_38c574;
        case 0x38c578u: goto label_38c578;
        case 0x38c57cu: goto label_38c57c;
        default: break;
    }

    ctx->pc = 0x38c2b0u;

label_38c2b0:
    // 0x38c2b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x38c2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_38c2b4:
    // 0x38c2b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x38c2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_38c2b8:
    // 0x38c2b8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x38c2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_38c2bc:
    // 0x38c2bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x38c2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_38c2c0:
    // 0x38c2c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x38c2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_38c2c4:
    // 0x38c2c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x38c2c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38c2c8:
    // 0x38c2c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38c2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_38c2cc:
    // 0x38c2cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x38c2ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38c2d0:
    // 0x38c2d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38c2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38c2d4:
    // 0x38c2d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38c2d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38c2d8:
    // 0x38c2d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38c2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38c2dc:
    // 0x38c2dc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x38c2dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_38c2e0:
    // 0x38c2e0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x38c2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38c2e4:
    // 0x38c2e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38c2e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_38c2e8:
    // 0x38c2e8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x38c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_38c2ec:
    // 0x38c2ec: 0xc454010c  lwc1        $f20, 0x10C($v0)
    ctx->pc = 0x38c2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38c2f0:
    // 0x38c2f0: 0xc04ccf4  jal         func_1333D0
label_38c2f4:
    if (ctx->pc == 0x38C2F4u) {
        ctx->pc = 0x38C2F4u;
            // 0x38c2f4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x38C2F8u;
        goto label_38c2f8;
    }
    ctx->pc = 0x38C2F0u;
    SET_GPR_U32(ctx, 31, 0x38C2F8u);
    ctx->pc = 0x38C2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C2F0u;
            // 0x38c2f4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C2F8u; }
        if (ctx->pc != 0x38C2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C2F8u; }
        if (ctx->pc != 0x38C2F8u) { return; }
    }
    ctx->pc = 0x38C2F8u;
label_38c2f8:
    // 0x38c2f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38c2f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38c2fc:
    // 0x38c2fc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x38c2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_38c300:
    // 0x38c300: 0xc04cca0  jal         func_133280
label_38c304:
    if (ctx->pc == 0x38C304u) {
        ctx->pc = 0x38C304u;
            // 0x38c304: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x38C308u;
        goto label_38c308;
    }
    ctx->pc = 0x38C300u;
    SET_GPR_U32(ctx, 31, 0x38C308u);
    ctx->pc = 0x38C304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C300u;
            // 0x38c304: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C308u; }
        if (ctx->pc != 0x38C308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C308u; }
        if (ctx->pc != 0x38C308u) { return; }
    }
    ctx->pc = 0x38C308u;
label_38c308:
    // 0x38c308: 0xc04cc2c  jal         func_1330B0
label_38c30c:
    if (ctx->pc == 0x38C30Cu) {
        ctx->pc = 0x38C30Cu;
            // 0x38c30c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x38C310u;
        goto label_38c310;
    }
    ctx->pc = 0x38C308u;
    SET_GPR_U32(ctx, 31, 0x38C310u);
    ctx->pc = 0x38C30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C308u;
            // 0x38c30c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C310u; }
        if (ctx->pc != 0x38C310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C310u; }
        if (ctx->pc != 0x38C310u) { return; }
    }
    ctx->pc = 0x38C310u;
label_38c310:
    // 0x38c310: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x38c310u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38c314:
    // 0x38c314: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_38c318:
    if (ctx->pc == 0x38C318u) {
        ctx->pc = 0x38C318u;
            // 0x38c318: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x38C31Cu;
        goto label_38c31c;
    }
    ctx->pc = 0x38C314u;
    {
        const bool branch_taken_0x38c314 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38c314) {
            ctx->pc = 0x38C318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38C314u;
            // 0x38c318: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x38C320u;
            goto label_38c320;
        }
    }
    ctx->pc = 0x38C31Cu;
label_38c31c:
    // 0x38c31c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x38c31cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_38c320:
    // 0x38c320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38c324:
    // 0x38c324: 0xa2820020  sb          $v0, 0x20($s4)
    ctx->pc = 0x38c324u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 32), (uint8_t)GPR_U32(ctx, 2));
label_38c328:
    // 0x38c328: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x38c328u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_38c32c:
    // 0x38c32c: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x38c32cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_38c330:
    // 0x38c330: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38c330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38c334:
    // 0x38c334: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x38c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_38c338:
    // 0x38c338: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x38c338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_38c33c:
    // 0x38c33c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x38c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_38c340:
    // 0x38c340: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x38c340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_38c344:
    // 0x38c344: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x38c344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_38c348:
    // 0x38c348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38c348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38c34c:
    // 0x38c34c: 0xc44c0070  lwc1        $f12, 0x70($v0)
    ctx->pc = 0x38c34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38c350:
    // 0x38c350: 0xc44d0074  lwc1        $f13, 0x74($v0)
    ctx->pc = 0x38c350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_38c354:
    // 0x38c354: 0xc44e0078  lwc1        $f14, 0x78($v0)
    ctx->pc = 0x38c354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_38c358:
    // 0x38c358: 0xc04cbd8  jal         func_132F60
label_38c35c:
    if (ctx->pc == 0x38C35Cu) {
        ctx->pc = 0x38C35Cu;
            // 0x38c35c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x38C360u;
        goto label_38c360;
    }
    ctx->pc = 0x38C358u;
    SET_GPR_U32(ctx, 31, 0x38C360u);
    ctx->pc = 0x38C35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C358u;
            // 0x38c35c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C360u; }
        if (ctx->pc != 0x38C360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C360u; }
        if (ctx->pc != 0x38C360u) { return; }
    }
    ctx->pc = 0x38C360u;
label_38c360:
    // 0x38c360: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x38c360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_38c364:
    // 0x38c364: 0xc04cc34  jal         func_1330D0
label_38c368:
    if (ctx->pc == 0x38C368u) {
        ctx->pc = 0x38C368u;
            // 0x38c368: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x38C36Cu;
        goto label_38c36c;
    }
    ctx->pc = 0x38C364u;
    SET_GPR_U32(ctx, 31, 0x38C36Cu);
    ctx->pc = 0x38C368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C364u;
            // 0x38c368: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C36Cu; }
        if (ctx->pc != 0x38C36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C36Cu; }
        if (ctx->pc != 0x38C36Cu) { return; }
    }
    ctx->pc = 0x38C36Cu;
label_38c36c:
    // 0x38c36c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x38c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38c370:
    // 0x38c370: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38c370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38c374:
    // 0x38c374: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x38c374u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_38c378:
    // 0x38c378: 0xc04cca0  jal         func_133280
label_38c37c:
    if (ctx->pc == 0x38C37Cu) {
        ctx->pc = 0x38C37Cu;
            // 0x38c37c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38C380u;
        goto label_38c380;
    }
    ctx->pc = 0x38C378u;
    SET_GPR_U32(ctx, 31, 0x38C380u);
    ctx->pc = 0x38C37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C378u;
            // 0x38c37c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C380u; }
        if (ctx->pc != 0x38C380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C380u; }
        if (ctx->pc != 0x38C380u) { return; }
    }
    ctx->pc = 0x38C380u;
label_38c380:
    // 0x38c380: 0xc04ab66  jal         func_12AD98
label_38c384:
    if (ctx->pc == 0x38C384u) {
        ctx->pc = 0x38C388u;
        goto label_38c388;
    }
    ctx->pc = 0x38C380u;
    SET_GPR_U32(ctx, 31, 0x38C388u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C388u; }
        if (ctx->pc != 0x38C388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C388u; }
        if (ctx->pc != 0x38C388u) { return; }
    }
    ctx->pc = 0x38C388u;
label_38c388:
    // 0x38c388: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38c388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_38c38c:
    // 0x38c38c: 0xc04ab66  jal         func_12AD98
label_38c390:
    if (ctx->pc == 0x38C390u) {
        ctx->pc = 0x38C390u;
            // 0x38c390: 0x2af40  sll         $s5, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x38C394u;
        goto label_38c394;
    }
    ctx->pc = 0x38C38Cu;
    SET_GPR_U32(ctx, 31, 0x38C394u);
    ctx->pc = 0x38C390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C38Cu;
            // 0x38c390: 0x2af40  sll         $s5, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C394u; }
        if (ctx->pc != 0x38C394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C394u; }
        if (ctx->pc != 0x38C394u) { return; }
    }
    ctx->pc = 0x38C394u;
label_38c394:
    // 0x38c394: 0x552025  or          $a0, $v0, $s5
    ctx->pc = 0x38c394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_38c398:
    // 0x38c398: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x38c398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_38c39c:
    // 0x38c39c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38c39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38c3a0:
    // 0x38c3a0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_38c3a4:
    if (ctx->pc == 0x38C3A4u) {
        ctx->pc = 0x38C3A4u;
            // 0x38c3a4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x38C3A8u;
        goto label_38c3a8;
    }
    ctx->pc = 0x38C3A0u;
    {
        const bool branch_taken_0x38c3a0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x38c3a0) {
            ctx->pc = 0x38C3A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38C3A0u;
            // 0x38c3a4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38C3B4u;
            goto label_38c3b4;
        }
    }
    ctx->pc = 0x38C3A8u;
label_38c3a8:
    // 0x38c3a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38c3a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c3ac:
    // 0x38c3ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_38c3b0:
    if (ctx->pc == 0x38C3B0u) {
        ctx->pc = 0x38C3B0u;
            // 0x38c3b0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38C3B4u;
        goto label_38c3b4;
    }
    ctx->pc = 0x38C3ACu;
    {
        const bool branch_taken_0x38c3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C3ACu;
            // 0x38c3b0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c3ac) {
            ctx->pc = 0x38C3CCu;
            goto label_38c3cc;
        }
    }
    ctx->pc = 0x38C3B4u;
label_38c3b4:
    // 0x38c3b4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x38c3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_38c3b8:
    // 0x38c3b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38c3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38c3bc:
    // 0x38c3bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c3bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c3c0:
    // 0x38c3c0: 0x0  nop
    ctx->pc = 0x38c3c0u;
    // NOP
label_38c3c4:
    // 0x38c3c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x38c3c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_38c3c8:
    // 0x38c3c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x38c3c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_38c3cc:
    // 0x38c3cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x38c3ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38c3d0:
    // 0x38c3d0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x38c3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_38c3d4:
    // 0x38c3d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_38c3d8:
    // 0x38c3d8: 0x34430347  ori         $v1, $v0, 0x347
    ctx->pc = 0x38c3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)839);
label_38c3dc:
    // 0x38c3dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38c3dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c3e0:
    // 0x38c3e0: 0x0  nop
    ctx->pc = 0x38c3e0u;
    // NOP
label_38c3e4:
    // 0x38c3e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x38c3e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38c3e8:
    // 0x38c3e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c3e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c3ec:
    // 0x38c3ec: 0x0  nop
    ctx->pc = 0x38c3ecu;
    // NOP
label_38c3f0:
    // 0x38c3f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38c3f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38c3f4:
    // 0x38c3f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38c3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c3f8:
    // 0x38c3f8: 0x0  nop
    ctx->pc = 0x38c3f8u;
    // NOP
label_38c3fc:
    // 0x38c3fc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x38c3fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_38c400:
    // 0x38c400: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x38c400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38c404:
    // 0x38c404: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38c404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38c408:
    // 0x38c408: 0xc04ab66  jal         func_12AD98
label_38c40c:
    if (ctx->pc == 0x38C40Cu) {
        ctx->pc = 0x38C40Cu;
            // 0x38c40c: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->pc = 0x38C410u;
        goto label_38c410;
    }
    ctx->pc = 0x38C408u;
    SET_GPR_U32(ctx, 31, 0x38C410u);
    ctx->pc = 0x38C40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C408u;
            // 0x38c40c: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C410u; }
        if (ctx->pc != 0x38C410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C410u; }
        if (ctx->pc != 0x38C410u) { return; }
    }
    ctx->pc = 0x38C410u;
label_38c410:
    // 0x38c410: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38c410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_38c414:
    // 0x38c414: 0xc04ab66  jal         func_12AD98
label_38c418:
    if (ctx->pc == 0x38C418u) {
        ctx->pc = 0x38C418u;
            // 0x38c418: 0x2af40  sll         $s5, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x38C41Cu;
        goto label_38c41c;
    }
    ctx->pc = 0x38C414u;
    SET_GPR_U32(ctx, 31, 0x38C41Cu);
    ctx->pc = 0x38C418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C414u;
            // 0x38c418: 0x2af40  sll         $s5, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C41Cu; }
        if (ctx->pc != 0x38C41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C41Cu; }
        if (ctx->pc != 0x38C41Cu) { return; }
    }
    ctx->pc = 0x38C41Cu;
label_38c41c:
    // 0x38c41c: 0x552025  or          $a0, $v0, $s5
    ctx->pc = 0x38c41cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_38c420:
    // 0x38c420: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x38c420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_38c424:
    // 0x38c424: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38c424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38c428:
    // 0x38c428: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_38c42c:
    if (ctx->pc == 0x38C42Cu) {
        ctx->pc = 0x38C42Cu;
            // 0x38c42c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x38C430u;
        goto label_38c430;
    }
    ctx->pc = 0x38C428u;
    {
        const bool branch_taken_0x38c428 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x38c428) {
            ctx->pc = 0x38C42Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38C428u;
            // 0x38c42c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38C43Cu;
            goto label_38c43c;
        }
    }
    ctx->pc = 0x38C430u;
label_38c430:
    // 0x38c430: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38c430u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c434:
    // 0x38c434: 0x10000007  b           . + 4 + (0x7 << 2)
label_38c438:
    if (ctx->pc == 0x38C438u) {
        ctx->pc = 0x38C438u;
            // 0x38c438: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38C43Cu;
        goto label_38c43c;
    }
    ctx->pc = 0x38C434u;
    {
        const bool branch_taken_0x38c434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C434u;
            // 0x38c438: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c434) {
            ctx->pc = 0x38C454u;
            goto label_38c454;
        }
    }
    ctx->pc = 0x38C43Cu;
label_38c43c:
    // 0x38c43c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x38c43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_38c440:
    // 0x38c440: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38c440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38c444:
    // 0x38c444: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c448:
    // 0x38c448: 0x0  nop
    ctx->pc = 0x38c448u;
    // NOP
label_38c44c:
    // 0x38c44c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x38c44cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_38c450:
    // 0x38c450: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x38c450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_38c454:
    // 0x38c454: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x38c454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38c458:
    // 0x38c458: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x38c458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_38c45c:
    // 0x38c45c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_38c460:
    // 0x38c460: 0x34430347  ori         $v1, $v0, 0x347
    ctx->pc = 0x38c460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)839);
label_38c464:
    // 0x38c464: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38c464u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c468:
    // 0x38c468: 0x0  nop
    ctx->pc = 0x38c468u;
    // NOP
label_38c46c:
    // 0x38c46c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x38c46cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38c470:
    // 0x38c470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c474:
    // 0x38c474: 0x0  nop
    ctx->pc = 0x38c474u;
    // NOP
label_38c478:
    // 0x38c478: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38c478u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38c47c:
    // 0x38c47c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38c47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c480:
    // 0x38c480: 0x0  nop
    ctx->pc = 0x38c480u;
    // NOP
label_38c484:
    // 0x38c484: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x38c484u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_38c488:
    // 0x38c488: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x38c488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38c48c:
    // 0x38c48c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38c48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38c490:
    // 0x38c490: 0xc04ab66  jal         func_12AD98
label_38c494:
    if (ctx->pc == 0x38C494u) {
        ctx->pc = 0x38C494u;
            // 0x38c494: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->pc = 0x38C498u;
        goto label_38c498;
    }
    ctx->pc = 0x38C490u;
    SET_GPR_U32(ctx, 31, 0x38C498u);
    ctx->pc = 0x38C494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C490u;
            // 0x38c494: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C498u; }
        if (ctx->pc != 0x38C498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C498u; }
        if (ctx->pc != 0x38C498u) { return; }
    }
    ctx->pc = 0x38C498u;
label_38c498:
    // 0x38c498: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38c498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_38c49c:
    // 0x38c49c: 0xc04ab66  jal         func_12AD98
label_38c4a0:
    if (ctx->pc == 0x38C4A0u) {
        ctx->pc = 0x38C4A0u;
            // 0x38c4a0: 0x2af40  sll         $s5, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x38C4A4u;
        goto label_38c4a4;
    }
    ctx->pc = 0x38C49Cu;
    SET_GPR_U32(ctx, 31, 0x38C4A4u);
    ctx->pc = 0x38C4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C49Cu;
            // 0x38c4a0: 0x2af40  sll         $s5, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C4A4u; }
        if (ctx->pc != 0x38C4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C4A4u; }
        if (ctx->pc != 0x38C4A4u) { return; }
    }
    ctx->pc = 0x38C4A4u;
label_38c4a4:
    // 0x38c4a4: 0x552025  or          $a0, $v0, $s5
    ctx->pc = 0x38c4a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_38c4a8:
    // 0x38c4a8: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x38c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_38c4ac:
    // 0x38c4ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38c4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38c4b0:
    // 0x38c4b0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_38c4b4:
    if (ctx->pc == 0x38C4B4u) {
        ctx->pc = 0x38C4B4u;
            // 0x38c4b4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x38C4B8u;
        goto label_38c4b8;
    }
    ctx->pc = 0x38C4B0u;
    {
        const bool branch_taken_0x38c4b0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x38c4b0) {
            ctx->pc = 0x38C4B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38C4B0u;
            // 0x38c4b4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38C4C4u;
            goto label_38c4c4;
        }
    }
    ctx->pc = 0x38C4B8u;
label_38c4b8:
    // 0x38c4b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38c4b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c4bc:
    // 0x38c4bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_38c4c0:
    if (ctx->pc == 0x38C4C0u) {
        ctx->pc = 0x38C4C0u;
            // 0x38c4c0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38C4C4u;
        goto label_38c4c4;
    }
    ctx->pc = 0x38C4BCu;
    {
        const bool branch_taken_0x38c4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C4BCu;
            // 0x38c4c0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c4bc) {
            ctx->pc = 0x38C4DCu;
            goto label_38c4dc;
        }
    }
    ctx->pc = 0x38C4C4u;
label_38c4c4:
    // 0x38c4c4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x38c4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_38c4c8:
    // 0x38c4c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38c4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38c4cc:
    // 0x38c4cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c4ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c4d0:
    // 0x38c4d0: 0x0  nop
    ctx->pc = 0x38c4d0u;
    // NOP
label_38c4d4:
    // 0x38c4d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x38c4d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_38c4d8:
    // 0x38c4d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x38c4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_38c4dc:
    // 0x38c4dc: 0x4614ab03  div.s       $f12, $f21, $f20
    ctx->pc = 0x38c4dcu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[12] = ctx->f[21] / ctx->f[20];
label_38c4e0:
    // 0x38c4e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_38c4e4:
    // 0x38c4e4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x38c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_38c4e8:
    // 0x38c4e8: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x38c4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_38c4ec:
    // 0x38c4ec: 0x34430347  ori         $v1, $v0, 0x347
    ctx->pc = 0x38c4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)839);
label_38c4f0:
    // 0x38c4f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38c4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38c4f4:
    // 0x38c4f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x38c4f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38c4f8:
    // 0x38c4f8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x38c4f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c4fc:
    // 0x38c4fc: 0x0  nop
    ctx->pc = 0x38c4fcu;
    // NOP
label_38c500:
    // 0x38c500: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x38c500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38c504:
    // 0x38c504: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c508:
    // 0x38c508: 0x0  nop
    ctx->pc = 0x38c508u;
    // NOP
label_38c50c:
    // 0x38c50c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38c50cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38c510:
    // 0x38c510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38c510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c514:
    // 0x38c514: 0x0  nop
    ctx->pc = 0x38c514u;
    // NOP
label_38c518:
    // 0x38c518: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x38c518u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_38c51c:
    // 0x38c51c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x38c51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38c520:
    // 0x38c520: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38c520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38c524:
    // 0x38c524: 0xc04cc70  jal         func_1331C0
label_38c528:
    if (ctx->pc == 0x38C528u) {
        ctx->pc = 0x38C528u;
            // 0x38c528: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x38C52Cu;
        goto label_38c52c;
    }
    ctx->pc = 0x38C524u;
    SET_GPR_U32(ctx, 31, 0x38C52Cu);
    ctx->pc = 0x38C528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C524u;
            // 0x38c528: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C52Cu; }
        if (ctx->pc != 0x38C52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C52Cu; }
        if (ctx->pc != 0x38C52Cu) { return; }
    }
    ctx->pc = 0x38C52Cu;
label_38c52c:
    // 0x38c52c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x38c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38c530:
    // 0x38c530: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x38c530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38c534:
    // 0x38c534: 0x8c990024  lw          $t9, 0x24($a0)
    ctx->pc = 0x38c534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_38c538:
    // 0x38c538: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x38c538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_38c53c:
    // 0x38c53c: 0x320f809  jalr        $t9
label_38c540:
    if (ctx->pc == 0x38C540u) {
        ctx->pc = 0x38C540u;
            // 0x38c540: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x38C544u;
        goto label_38c544;
    }
    ctx->pc = 0x38C53Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38C544u);
        ctx->pc = 0x38C540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C53Cu;
            // 0x38c540: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38C544u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38C544u; }
            if (ctx->pc != 0x38C544u) { return; }
        }
        }
    }
    ctx->pc = 0x38C544u;
label_38c544:
    // 0x38c544: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x38c544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_38c548:
    // 0x38c548: 0x1e00ff79  bgtz        $s0, . + 4 + (-0x87 << 2)
label_38c54c:
    if (ctx->pc == 0x38C54Cu) {
        ctx->pc = 0x38C54Cu;
            // 0x38c54c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x38C550u;
        goto label_38c550;
    }
    ctx->pc = 0x38C548u;
    {
        const bool branch_taken_0x38c548 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x38C54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C548u;
            // 0x38c54c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c548) {
            ctx->pc = 0x38C330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38c330;
        }
    }
    ctx->pc = 0x38C550u;
label_38c550:
    // 0x38c550: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x38c550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_38c554:
    // 0x38c554: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x38c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_38c558:
    // 0x38c558: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x38c558u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38c55c:
    // 0x38c55c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38c55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38c560:
    // 0x38c560: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x38c560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38c564:
    // 0x38c564: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x38c564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38c568:
    // 0x38c568: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38c568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38c56c:
    // 0x38c56c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38c56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38c570:
    // 0x38c570: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38c570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38c574:
    // 0x38c574: 0x3e00008  jr          $ra
label_38c578:
    if (ctx->pc == 0x38C578u) {
        ctx->pc = 0x38C578u;
            // 0x38c578: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x38C57Cu;
        goto label_38c57c;
    }
    ctx->pc = 0x38C574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C574u;
            // 0x38c578: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38C57Cu;
label_38c57c:
    // 0x38c57c: 0x0  nop
    ctx->pc = 0x38c57cu;
    // NOP
}
