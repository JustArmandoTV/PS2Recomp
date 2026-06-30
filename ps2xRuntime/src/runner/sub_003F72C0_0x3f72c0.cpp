#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F72C0
// Address: 0x3f72c0 - 0x3f7450
void sub_003F72C0_0x3f72c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F72C0_0x3f72c0");
#endif

    switch (ctx->pc) {
        case 0x3f72c0u: goto label_3f72c0;
        case 0x3f72c4u: goto label_3f72c4;
        case 0x3f72c8u: goto label_3f72c8;
        case 0x3f72ccu: goto label_3f72cc;
        case 0x3f72d0u: goto label_3f72d0;
        case 0x3f72d4u: goto label_3f72d4;
        case 0x3f72d8u: goto label_3f72d8;
        case 0x3f72dcu: goto label_3f72dc;
        case 0x3f72e0u: goto label_3f72e0;
        case 0x3f72e4u: goto label_3f72e4;
        case 0x3f72e8u: goto label_3f72e8;
        case 0x3f72ecu: goto label_3f72ec;
        case 0x3f72f0u: goto label_3f72f0;
        case 0x3f72f4u: goto label_3f72f4;
        case 0x3f72f8u: goto label_3f72f8;
        case 0x3f72fcu: goto label_3f72fc;
        case 0x3f7300u: goto label_3f7300;
        case 0x3f7304u: goto label_3f7304;
        case 0x3f7308u: goto label_3f7308;
        case 0x3f730cu: goto label_3f730c;
        case 0x3f7310u: goto label_3f7310;
        case 0x3f7314u: goto label_3f7314;
        case 0x3f7318u: goto label_3f7318;
        case 0x3f731cu: goto label_3f731c;
        case 0x3f7320u: goto label_3f7320;
        case 0x3f7324u: goto label_3f7324;
        case 0x3f7328u: goto label_3f7328;
        case 0x3f732cu: goto label_3f732c;
        case 0x3f7330u: goto label_3f7330;
        case 0x3f7334u: goto label_3f7334;
        case 0x3f7338u: goto label_3f7338;
        case 0x3f733cu: goto label_3f733c;
        case 0x3f7340u: goto label_3f7340;
        case 0x3f7344u: goto label_3f7344;
        case 0x3f7348u: goto label_3f7348;
        case 0x3f734cu: goto label_3f734c;
        case 0x3f7350u: goto label_3f7350;
        case 0x3f7354u: goto label_3f7354;
        case 0x3f7358u: goto label_3f7358;
        case 0x3f735cu: goto label_3f735c;
        case 0x3f7360u: goto label_3f7360;
        case 0x3f7364u: goto label_3f7364;
        case 0x3f7368u: goto label_3f7368;
        case 0x3f736cu: goto label_3f736c;
        case 0x3f7370u: goto label_3f7370;
        case 0x3f7374u: goto label_3f7374;
        case 0x3f7378u: goto label_3f7378;
        case 0x3f737cu: goto label_3f737c;
        case 0x3f7380u: goto label_3f7380;
        case 0x3f7384u: goto label_3f7384;
        case 0x3f7388u: goto label_3f7388;
        case 0x3f738cu: goto label_3f738c;
        case 0x3f7390u: goto label_3f7390;
        case 0x3f7394u: goto label_3f7394;
        case 0x3f7398u: goto label_3f7398;
        case 0x3f739cu: goto label_3f739c;
        case 0x3f73a0u: goto label_3f73a0;
        case 0x3f73a4u: goto label_3f73a4;
        case 0x3f73a8u: goto label_3f73a8;
        case 0x3f73acu: goto label_3f73ac;
        case 0x3f73b0u: goto label_3f73b0;
        case 0x3f73b4u: goto label_3f73b4;
        case 0x3f73b8u: goto label_3f73b8;
        case 0x3f73bcu: goto label_3f73bc;
        case 0x3f73c0u: goto label_3f73c0;
        case 0x3f73c4u: goto label_3f73c4;
        case 0x3f73c8u: goto label_3f73c8;
        case 0x3f73ccu: goto label_3f73cc;
        case 0x3f73d0u: goto label_3f73d0;
        case 0x3f73d4u: goto label_3f73d4;
        case 0x3f73d8u: goto label_3f73d8;
        case 0x3f73dcu: goto label_3f73dc;
        case 0x3f73e0u: goto label_3f73e0;
        case 0x3f73e4u: goto label_3f73e4;
        case 0x3f73e8u: goto label_3f73e8;
        case 0x3f73ecu: goto label_3f73ec;
        case 0x3f73f0u: goto label_3f73f0;
        case 0x3f73f4u: goto label_3f73f4;
        case 0x3f73f8u: goto label_3f73f8;
        case 0x3f73fcu: goto label_3f73fc;
        case 0x3f7400u: goto label_3f7400;
        case 0x3f7404u: goto label_3f7404;
        case 0x3f7408u: goto label_3f7408;
        case 0x3f740cu: goto label_3f740c;
        case 0x3f7410u: goto label_3f7410;
        case 0x3f7414u: goto label_3f7414;
        case 0x3f7418u: goto label_3f7418;
        case 0x3f741cu: goto label_3f741c;
        case 0x3f7420u: goto label_3f7420;
        case 0x3f7424u: goto label_3f7424;
        case 0x3f7428u: goto label_3f7428;
        case 0x3f742cu: goto label_3f742c;
        case 0x3f7430u: goto label_3f7430;
        case 0x3f7434u: goto label_3f7434;
        case 0x3f7438u: goto label_3f7438;
        case 0x3f743cu: goto label_3f743c;
        case 0x3f7440u: goto label_3f7440;
        case 0x3f7444u: goto label_3f7444;
        case 0x3f7448u: goto label_3f7448;
        case 0x3f744cu: goto label_3f744c;
        default: break;
    }

    ctx->pc = 0x3f72c0u;

label_3f72c0:
    // 0x3f72c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3f72c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3f72c4:
    // 0x3f72c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f72c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f72c8:
    // 0x3f72c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f72c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3f72cc:
    // 0x3f72cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f72ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f72d0:
    // 0x3f72d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f72d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3f72d4:
    // 0x3f72d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3f72d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3f72d8:
    // 0x3f72d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f72d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f72dc:
    // 0x3f72dc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3f72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f72e0:
    // 0x3f72e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f72e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f72e4:
    // 0x3f72e4: 0xc04cc08  jal         func_133020
label_3f72e8:
    if (ctx->pc == 0x3F72E8u) {
        ctx->pc = 0x3F72E8u;
            // 0x3f72e8: 0x244402e0  addiu       $a0, $v0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
        ctx->pc = 0x3F72ECu;
        goto label_3f72ec;
    }
    ctx->pc = 0x3F72E4u;
    SET_GPR_U32(ctx, 31, 0x3F72ECu);
    ctx->pc = 0x3F72E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F72E4u;
            // 0x3f72e8: 0x244402e0  addiu       $a0, $v0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F72ECu; }
        if (ctx->pc != 0x3F72ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F72ECu; }
        if (ctx->pc != 0x3F72ECu) { return; }
    }
    ctx->pc = 0x3F72ECu;
label_3f72ec:
    // 0x3f72ec: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x3f72ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f72f0:
    // 0x3f72f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3f72f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3f72f4:
    // 0x3f72f4: 0x264402c0  addiu       $a0, $s2, 0x2C0
    ctx->pc = 0x3f72f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_3f72f8:
    // 0x3f72f8: 0xc04cc04  jal         func_133010
label_3f72fc:
    if (ctx->pc == 0x3F72FCu) {
        ctx->pc = 0x3F72FCu;
            // 0x3f72fc: 0x264502d0  addiu       $a1, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->pc = 0x3F7300u;
        goto label_3f7300;
    }
    ctx->pc = 0x3F72F8u;
    SET_GPR_U32(ctx, 31, 0x3F7300u);
    ctx->pc = 0x3F72FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F72F8u;
            // 0x3f72fc: 0x264502d0  addiu       $a1, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7300u; }
        if (ctx->pc != 0x3F7300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7300u; }
        if (ctx->pc != 0x3F7300u) { return; }
    }
    ctx->pc = 0x3F7300u;
label_3f7300:
    // 0x3f7300: 0x8e510d74  lw          $s1, 0xD74($s2)
    ctx->pc = 0x3f7300u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_3f7304:
    // 0x3f7304: 0xc64202c8  lwc1        $f2, 0x2C8($s2)
    ctx->pc = 0x3f7304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f7308:
    // 0x3f7308: 0xc64102c4  lwc1        $f1, 0x2C4($s2)
    ctx->pc = 0x3f7308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f730c:
    // 0x3f730c: 0xc64002c0  lwc1        $f0, 0x2C0($s2)
    ctx->pc = 0x3f730cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f7310:
    // 0x3f7310: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3f7310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3f7314:
    // 0x3f7314: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3f7314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3f7318:
    // 0x3f7318: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3f7318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3f731c:
    // 0x3f731c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3f731cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3f7320:
    // 0x3f7320: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3f7320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f7324:
    // 0x3f7324: 0xc0a5444  jal         func_295110
label_3f7328:
    if (ctx->pc == 0x3F7328u) {
        ctx->pc = 0x3F7328u;
            // 0x3f7328: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F732Cu;
        goto label_3f732c;
    }
    ctx->pc = 0x3F7324u;
    SET_GPR_U32(ctx, 31, 0x3F732Cu);
    ctx->pc = 0x3F7328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7324u;
            // 0x3f7328: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F732Cu; }
        if (ctx->pc != 0x3F732Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F732Cu; }
        if (ctx->pc != 0x3F732Cu) { return; }
    }
    ctx->pc = 0x3F732Cu;
label_3f732c:
    // 0x3f732c: 0xae2002d0  sw          $zero, 0x2D0($s1)
    ctx->pc = 0x3f732cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 0));
label_3f7330:
    // 0x3f7330: 0xae2002d4  sw          $zero, 0x2D4($s1)
    ctx->pc = 0x3f7330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 0));
label_3f7334:
    // 0x3f7334: 0xae2002d8  sw          $zero, 0x2D8($s1)
    ctx->pc = 0x3f7334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 0));
label_3f7338:
    // 0x3f7338: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x3f7338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
label_3f733c:
    // 0x3f733c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7340:
    // 0x3f7340: 0x8c440d60  lw          $a0, 0xD60($v0)
    ctx->pc = 0x3f7340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_3f7344:
    // 0x3f7344: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3f7344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3f7348:
    // 0x3f7348: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3f7348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3f734c:
    // 0x3f734c: 0x320f809  jalr        $t9
label_3f7350:
    if (ctx->pc == 0x3F7350u) {
        ctx->pc = 0x3F7350u;
            // 0x3f7350: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x3F7354u;
        goto label_3f7354;
    }
    ctx->pc = 0x3F734Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F7354u);
        ctx->pc = 0x3F7350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F734Cu;
            // 0x3f7350: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F7354u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F7354u; }
            if (ctx->pc != 0x3F7354u) { return; }
        }
        }
    }
    ctx->pc = 0x3F7354u;
label_3f7354:
    // 0x3f7354: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7358:
    // 0x3f7358: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3f7358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f735c:
    // 0x3f735c: 0xac400dc4  sw          $zero, 0xDC4($v0)
    ctx->pc = 0x3f735cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3524), GPR_U32(ctx, 0));
label_3f7360:
    // 0x3f7360: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7364:
    // 0x3f7364: 0xac400dd8  sw          $zero, 0xDD8($v0)
    ctx->pc = 0x3f7364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3544), GPR_U32(ctx, 0));
label_3f7368:
    // 0x3f7368: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f736c:
    // 0x3f736c: 0xc04ccf4  jal         func_1333D0
label_3f7370:
    if (ctx->pc == 0x3F7370u) {
        ctx->pc = 0x3F7370u;
            // 0x3f7370: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->pc = 0x3F7374u;
        goto label_3f7374;
    }
    ctx->pc = 0x3F736Cu;
    SET_GPR_U32(ctx, 31, 0x3F7374u);
    ctx->pc = 0x3F7370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F736Cu;
            // 0x3f7370: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7374u; }
        if (ctx->pc != 0x3F7374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7374u; }
        if (ctx->pc != 0x3F7374u) { return; }
    }
    ctx->pc = 0x3F7374u;
label_3f7374:
    // 0x3f7374: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7378:
    // 0x3f7378: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3f7378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f737c:
    // 0x3f737c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3f737cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f7380:
    // 0x3f7380: 0xc04cca0  jal         func_133280
label_3f7384:
    if (ctx->pc == 0x3F7384u) {
        ctx->pc = 0x3F7384u;
            // 0x3f7384: 0x24460320  addiu       $a2, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->pc = 0x3F7388u;
        goto label_3f7388;
    }
    ctx->pc = 0x3F7380u;
    SET_GPR_U32(ctx, 31, 0x3F7388u);
    ctx->pc = 0x3F7384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7380u;
            // 0x3f7384: 0x24460320  addiu       $a2, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7388u; }
        if (ctx->pc != 0x3F7388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7388u; }
        if (ctx->pc != 0x3F7388u) { return; }
    }
    ctx->pc = 0x3F7388u;
label_3f7388:
    // 0x3f7388: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3f7388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_3f738c:
    // 0x3f738c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3f738cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f7390:
    // 0x3f7390: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3f7390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3f7394:
    // 0x3f7394: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7398:
    // 0x3f7398: 0x24440320  addiu       $a0, $v0, 0x320
    ctx->pc = 0x3f7398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
label_3f739c:
    // 0x3f739c: 0xc04cca0  jal         func_133280
label_3f73a0:
    if (ctx->pc == 0x3F73A0u) {
        ctx->pc = 0x3F73A0u;
            // 0x3f73a0: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->pc = 0x3F73A4u;
        goto label_3f73a4;
    }
    ctx->pc = 0x3F739Cu;
    SET_GPR_U32(ctx, 31, 0x3F73A4u);
    ctx->pc = 0x3F73A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F739Cu;
            // 0x3f73a0: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F73A4u; }
        if (ctx->pc != 0x3F73A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F73A4u; }
        if (ctx->pc != 0x3F73A4u) { return; }
    }
    ctx->pc = 0x3F73A4u;
label_3f73a4:
    // 0x3f73a4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x3f73a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f73a8:
    // 0x3f73a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f73a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f73ac:
    // 0x3f73ac: 0x8cc50d74  lw          $a1, 0xD74($a2)
    ctx->pc = 0x3f73acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3444)));
label_3f73b0:
    // 0x3f73b0: 0x90a302c5  lbu         $v1, 0x2C5($a1)
    ctx->pc = 0x3f73b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 709)));
label_3f73b4:
    // 0x3f73b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3f73b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3f73b8:
    // 0x3f73b8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3f73b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3f73bc:
    // 0x3f73bc: 0x90650281  lbu         $a1, 0x281($v1)
    ctx->pc = 0x3f73bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_3f73c0:
    // 0x3f73c0: 0x50a4000e  beql        $a1, $a0, . + 4 + (0xE << 2)
label_3f73c4:
    if (ctx->pc == 0x3F73C4u) {
        ctx->pc = 0x3F73C4u;
            // 0x3f73c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F73C8u;
        goto label_3f73c8;
    }
    ctx->pc = 0x3F73C0u;
    {
        const bool branch_taken_0x3f73c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3f73c0) {
            ctx->pc = 0x3F73C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F73C0u;
            // 0x3f73c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F73FCu;
            goto label_3f73fc;
        }
    }
    ctx->pc = 0x3F73C8u;
label_3f73c8:
    // 0x3f73c8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3f73c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3f73cc:
    // 0x3f73cc: 0x54a30005  bnel        $a1, $v1, . + 4 + (0x5 << 2)
label_3f73d0:
    if (ctx->pc == 0x3F73D0u) {
        ctx->pc = 0x3F73D0u;
            // 0x3f73d0: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x3F73D4u;
        goto label_3f73d4;
    }
    ctx->pc = 0x3F73CCu;
    {
        const bool branch_taken_0x3f73cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f73cc) {
            ctx->pc = 0x3F73D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F73CCu;
            // 0x3f73d0: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F73E4u;
            goto label_3f73e4;
        }
    }
    ctx->pc = 0x3F73D4u;
label_3f73d4:
    // 0x3f73d4: 0x8cc3069c  lw          $v1, 0x69C($a2)
    ctx->pc = 0x3f73d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1692)));
label_3f73d8:
    // 0x3f73d8: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
label_3f73dc:
    if (ctx->pc == 0x3F73DCu) {
        ctx->pc = 0x3F73E0u;
        goto label_3f73e0;
    }
    ctx->pc = 0x3F73D8u;
    {
        const bool branch_taken_0x3f73d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3f73d8) {
            ctx->pc = 0x3F73F8u;
            goto label_3f73f8;
        }
    }
    ctx->pc = 0x3F73E0u;
label_3f73e0:
    // 0x3f73e0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3f73e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3f73e4:
    // 0x3f73e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f73e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f73e8:
    // 0x3f73e8: 0x0  nop
    ctx->pc = 0x3f73e8u;
    // NOP
label_3f73ec:
    // 0x3f73ec: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3f73ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f73f0:
    // 0x3f73f0: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_3f73f4:
    if (ctx->pc == 0x3F73F4u) {
        ctx->pc = 0x3F73F4u;
            // 0x3f73f4: 0x3c03bf40  lui         $v1, 0xBF40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48960 << 16));
        ctx->pc = 0x3F73F8u;
        goto label_3f73f8;
    }
    ctx->pc = 0x3F73F0u;
    {
        const bool branch_taken_0x3f73f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f73f0) {
            ctx->pc = 0x3F73F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F73F0u;
            // 0x3f73f4: 0x3c03bf40  lui         $v1, 0xBF40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48960 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F740Cu;
            goto label_3f740c;
        }
    }
    ctx->pc = 0x3F73F8u;
label_3f73f8:
    // 0x3f73f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f73f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f73fc:
    // 0x3f73fc: 0xc0fda3c  jal         func_3F68F0
label_3f7400:
    if (ctx->pc == 0x3F7400u) {
        ctx->pc = 0x3F7404u;
        goto label_3f7404;
    }
    ctx->pc = 0x3F73FCu;
    SET_GPR_U32(ctx, 31, 0x3F7404u);
    ctx->pc = 0x3F68F0u;
    if (runtime->hasFunction(0x3F68F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F68F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7404u; }
        if (ctx->pc != 0x3F7404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F68F0_0x3f68f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7404u; }
        if (ctx->pc != 0x3F7404u) { return; }
    }
    ctx->pc = 0x3F7404u;
label_3f7404:
    // 0x3f7404: 0x10000009  b           . + 4 + (0x9 << 2)
label_3f7408:
    if (ctx->pc == 0x3F7408u) {
        ctx->pc = 0x3F7408u;
            // 0x3f7408: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3F740Cu;
        goto label_3f740c;
    }
    ctx->pc = 0x3F7404u;
    {
        const bool branch_taken_0x3f7404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7404u;
            // 0x3f7408: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7404) {
            ctx->pc = 0x3F742Cu;
            goto label_3f742c;
        }
    }
    ctx->pc = 0x3F740Cu;
label_3f740c:
    // 0x3f740c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f740cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7410:
    // 0x3f7410: 0x0  nop
    ctx->pc = 0x3f7410u;
    // NOP
label_3f7414:
    // 0x3f7414: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3f7414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f7418:
    // 0x3f7418: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3f741c:
    if (ctx->pc == 0x3F741Cu) {
        ctx->pc = 0x3F7420u;
        goto label_3f7420;
    }
    ctx->pc = 0x3F7418u;
    {
        const bool branch_taken_0x3f7418 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f7418) {
            ctx->pc = 0x3F7428u;
            goto label_3f7428;
        }
    }
    ctx->pc = 0x3F7420u;
label_3f7420:
    // 0x3f7420: 0xc0fdabc  jal         func_3F6AF0
label_3f7424:
    if (ctx->pc == 0x3F7424u) {
        ctx->pc = 0x3F7424u;
            // 0x3f7424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F7428u;
        goto label_3f7428;
    }
    ctx->pc = 0x3F7420u;
    SET_GPR_U32(ctx, 31, 0x3F7428u);
    ctx->pc = 0x3F7424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7420u;
            // 0x3f7424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F6AF0u;
    if (runtime->hasFunction(0x3F6AF0u)) {
        auto targetFn = runtime->lookupFunction(0x3F6AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7428u; }
        if (ctx->pc != 0x3F7428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F6AF0_0x3f6af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7428u; }
        if (ctx->pc != 0x3F7428u) { return; }
    }
    ctx->pc = 0x3F7428u;
label_3f7428:
    // 0x3f7428: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f7428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f742c:
    // 0x3f742c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3f742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f7430:
    // 0x3f7430: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f7430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f7434:
    // 0x3f7434: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f7434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7438:
    // 0x3f7438: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f7438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f743c:
    // 0x3f743c: 0x3e00008  jr          $ra
label_3f7440:
    if (ctx->pc == 0x3F7440u) {
        ctx->pc = 0x3F7440u;
            // 0x3f7440: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3F7444u;
        goto label_3f7444;
    }
    ctx->pc = 0x3F743Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F743Cu;
            // 0x3f7440: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F7444u;
label_3f7444:
    // 0x3f7444: 0x0  nop
    ctx->pc = 0x3f7444u;
    // NOP
label_3f7448:
    // 0x3f7448: 0x0  nop
    ctx->pc = 0x3f7448u;
    // NOP
label_3f744c:
    // 0x3f744c: 0x0  nop
    ctx->pc = 0x3f744cu;
    // NOP
}
