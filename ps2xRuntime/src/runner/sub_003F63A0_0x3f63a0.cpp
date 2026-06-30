#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F63A0
// Address: 0x3f63a0 - 0x3f6510
void sub_003F63A0_0x3f63a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F63A0_0x3f63a0");
#endif

    switch (ctx->pc) {
        case 0x3f63a0u: goto label_3f63a0;
        case 0x3f63a4u: goto label_3f63a4;
        case 0x3f63a8u: goto label_3f63a8;
        case 0x3f63acu: goto label_3f63ac;
        case 0x3f63b0u: goto label_3f63b0;
        case 0x3f63b4u: goto label_3f63b4;
        case 0x3f63b8u: goto label_3f63b8;
        case 0x3f63bcu: goto label_3f63bc;
        case 0x3f63c0u: goto label_3f63c0;
        case 0x3f63c4u: goto label_3f63c4;
        case 0x3f63c8u: goto label_3f63c8;
        case 0x3f63ccu: goto label_3f63cc;
        case 0x3f63d0u: goto label_3f63d0;
        case 0x3f63d4u: goto label_3f63d4;
        case 0x3f63d8u: goto label_3f63d8;
        case 0x3f63dcu: goto label_3f63dc;
        case 0x3f63e0u: goto label_3f63e0;
        case 0x3f63e4u: goto label_3f63e4;
        case 0x3f63e8u: goto label_3f63e8;
        case 0x3f63ecu: goto label_3f63ec;
        case 0x3f63f0u: goto label_3f63f0;
        case 0x3f63f4u: goto label_3f63f4;
        case 0x3f63f8u: goto label_3f63f8;
        case 0x3f63fcu: goto label_3f63fc;
        case 0x3f6400u: goto label_3f6400;
        case 0x3f6404u: goto label_3f6404;
        case 0x3f6408u: goto label_3f6408;
        case 0x3f640cu: goto label_3f640c;
        case 0x3f6410u: goto label_3f6410;
        case 0x3f6414u: goto label_3f6414;
        case 0x3f6418u: goto label_3f6418;
        case 0x3f641cu: goto label_3f641c;
        case 0x3f6420u: goto label_3f6420;
        case 0x3f6424u: goto label_3f6424;
        case 0x3f6428u: goto label_3f6428;
        case 0x3f642cu: goto label_3f642c;
        case 0x3f6430u: goto label_3f6430;
        case 0x3f6434u: goto label_3f6434;
        case 0x3f6438u: goto label_3f6438;
        case 0x3f643cu: goto label_3f643c;
        case 0x3f6440u: goto label_3f6440;
        case 0x3f6444u: goto label_3f6444;
        case 0x3f6448u: goto label_3f6448;
        case 0x3f644cu: goto label_3f644c;
        case 0x3f6450u: goto label_3f6450;
        case 0x3f6454u: goto label_3f6454;
        case 0x3f6458u: goto label_3f6458;
        case 0x3f645cu: goto label_3f645c;
        case 0x3f6460u: goto label_3f6460;
        case 0x3f6464u: goto label_3f6464;
        case 0x3f6468u: goto label_3f6468;
        case 0x3f646cu: goto label_3f646c;
        case 0x3f6470u: goto label_3f6470;
        case 0x3f6474u: goto label_3f6474;
        case 0x3f6478u: goto label_3f6478;
        case 0x3f647cu: goto label_3f647c;
        case 0x3f6480u: goto label_3f6480;
        case 0x3f6484u: goto label_3f6484;
        case 0x3f6488u: goto label_3f6488;
        case 0x3f648cu: goto label_3f648c;
        case 0x3f6490u: goto label_3f6490;
        case 0x3f6494u: goto label_3f6494;
        case 0x3f6498u: goto label_3f6498;
        case 0x3f649cu: goto label_3f649c;
        case 0x3f64a0u: goto label_3f64a0;
        case 0x3f64a4u: goto label_3f64a4;
        case 0x3f64a8u: goto label_3f64a8;
        case 0x3f64acu: goto label_3f64ac;
        case 0x3f64b0u: goto label_3f64b0;
        case 0x3f64b4u: goto label_3f64b4;
        case 0x3f64b8u: goto label_3f64b8;
        case 0x3f64bcu: goto label_3f64bc;
        case 0x3f64c0u: goto label_3f64c0;
        case 0x3f64c4u: goto label_3f64c4;
        case 0x3f64c8u: goto label_3f64c8;
        case 0x3f64ccu: goto label_3f64cc;
        case 0x3f64d0u: goto label_3f64d0;
        case 0x3f64d4u: goto label_3f64d4;
        case 0x3f64d8u: goto label_3f64d8;
        case 0x3f64dcu: goto label_3f64dc;
        case 0x3f64e0u: goto label_3f64e0;
        case 0x3f64e4u: goto label_3f64e4;
        case 0x3f64e8u: goto label_3f64e8;
        case 0x3f64ecu: goto label_3f64ec;
        case 0x3f64f0u: goto label_3f64f0;
        case 0x3f64f4u: goto label_3f64f4;
        case 0x3f64f8u: goto label_3f64f8;
        case 0x3f64fcu: goto label_3f64fc;
        case 0x3f6500u: goto label_3f6500;
        case 0x3f6504u: goto label_3f6504;
        case 0x3f6508u: goto label_3f6508;
        case 0x3f650cu: goto label_3f650c;
        default: break;
    }

    ctx->pc = 0x3f63a0u;

label_3f63a0:
    // 0x3f63a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f63a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f63a4:
    // 0x3f63a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3f63a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f63a8:
    // 0x3f63a8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3f63a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f63ac:
    // 0x3f63ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f63acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f63b0:
    // 0x3f63b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f63b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f63b4:
    // 0x3f63b4: 0xc04cca0  jal         func_133280
label_3f63b8:
    if (ctx->pc == 0x3F63B8u) {
        ctx->pc = 0x3F63B8u;
            // 0x3f63b8: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x3F63BCu;
        goto label_3f63bc;
    }
    ctx->pc = 0x3F63B4u;
    SET_GPR_U32(ctx, 31, 0x3F63BCu);
    ctx->pc = 0x3F63B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F63B4u;
            // 0x3f63b8: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F63BCu; }
        if (ctx->pc != 0x3F63BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F63BCu; }
        if (ctx->pc != 0x3F63BCu) { return; }
    }
    ctx->pc = 0x3F63BCu;
label_3f63bc:
    // 0x3f63bc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3f63bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f63c0:
    // 0x3f63c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3f63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3f63c4:
    // 0x3f63c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f63c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f63c8:
    // 0x3f63c8: 0x0  nop
    ctx->pc = 0x3f63c8u;
    // NOP
label_3f63cc:
    // 0x3f63cc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3f63ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f63d0:
    // 0x3f63d0: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
label_3f63d4:
    if (ctx->pc == 0x3F63D4u) {
        ctx->pc = 0x3F63D4u;
            // 0x3f63d4: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x3F63D8u;
        goto label_3f63d8;
    }
    ctx->pc = 0x3F63D0u;
    {
        const bool branch_taken_0x3f63d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f63d0) {
            ctx->pc = 0x3F63D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F63D0u;
            // 0x3f63d4: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6434u;
            goto label_3f6434;
        }
    }
    ctx->pc = 0x3F63D8u;
label_3f63d8:
    // 0x3f63d8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3f63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3f63dc:
    // 0x3f63dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f63dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f63e0:
    // 0x3f63e0: 0x0  nop
    ctx->pc = 0x3f63e0u;
    // NOP
label_3f63e4:
    // 0x3f63e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f63e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f63e8:
    // 0x3f63e8: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_3f63ec:
    if (ctx->pc == 0x3F63ECu) {
        ctx->pc = 0x3F63F0u;
        goto label_3f63f0;
    }
    ctx->pc = 0x3F63E8u;
    {
        const bool branch_taken_0x3f63e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f63e8) {
            ctx->pc = 0x3F6430u;
            goto label_3f6430;
        }
    }
    ctx->pc = 0x3F63F0u;
label_3f63f0:
    // 0x3f63f0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3f63f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f63f4:
    // 0x3f63f4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3f63f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f63f8:
    // 0x3f63f8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_3f63fc:
    if (ctx->pc == 0x3F63FCu) {
        ctx->pc = 0x3F6400u;
        goto label_3f6400;
    }
    ctx->pc = 0x3F63F8u;
    {
        const bool branch_taken_0x3f63f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f63f8) {
            ctx->pc = 0x3F6430u;
            goto label_3f6430;
        }
    }
    ctx->pc = 0x3F6400u;
label_3f6400:
    // 0x3f6400: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f6400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f6404:
    // 0x3f6404: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_3f6408:
    if (ctx->pc == 0x3F6408u) {
        ctx->pc = 0x3F640Cu;
        goto label_3f640c;
    }
    ctx->pc = 0x3F6404u;
    {
        const bool branch_taken_0x3f6404 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6404) {
            ctx->pc = 0x3F6430u;
            goto label_3f6430;
        }
    }
    ctx->pc = 0x3F640Cu;
label_3f640c:
    // 0x3f640c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3f640cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f6410:
    // 0x3f6410: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3f6410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f6414:
    // 0x3f6414: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3f6418:
    if (ctx->pc == 0x3F6418u) {
        ctx->pc = 0x3F641Cu;
        goto label_3f641c;
    }
    ctx->pc = 0x3F6414u;
    {
        const bool branch_taken_0x3f6414 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6414) {
            ctx->pc = 0x3F6430u;
            goto label_3f6430;
        }
    }
    ctx->pc = 0x3F641Cu;
label_3f641c:
    // 0x3f641c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3f641cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f6420:
    // 0x3f6420: 0x0  nop
    ctx->pc = 0x3f6420u;
    // NOP
label_3f6424:
    // 0x3f6424: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f6424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f6428:
    // 0x3f6428: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3f642c:
    if (ctx->pc == 0x3F642Cu) {
        ctx->pc = 0x3F6430u;
        goto label_3f6430;
    }
    ctx->pc = 0x3F6428u;
    {
        const bool branch_taken_0x3f6428 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6428) {
            ctx->pc = 0x3F6438u;
            goto label_3f6438;
        }
    }
    ctx->pc = 0x3F6430u;
label_3f6430:
    // 0x3f6430: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3f6430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3f6434:
    // 0x3f6434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f6434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6438:
    // 0x3f6438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f6438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f643c:
    // 0x3f643c: 0x3e00008  jr          $ra
label_3f6440:
    if (ctx->pc == 0x3F6440u) {
        ctx->pc = 0x3F6440u;
            // 0x3f6440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F6444u;
        goto label_3f6444;
    }
    ctx->pc = 0x3F643Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F643Cu;
            // 0x3f6440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F6444u;
label_3f6444:
    // 0x3f6444: 0x0  nop
    ctx->pc = 0x3f6444u;
    // NOP
label_3f6448:
    // 0x3f6448: 0x0  nop
    ctx->pc = 0x3f6448u;
    // NOP
label_3f644c:
    // 0x3f644c: 0x0  nop
    ctx->pc = 0x3f644cu;
    // NOP
label_3f6450:
    // 0x3f6450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f6450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f6454:
    // 0x3f6454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f6454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f6458:
    // 0x3f6458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f6458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f645c:
    // 0x3f645c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f645cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f6460:
    // 0x3f6460: 0x8c840230  lw          $a0, 0x230($a0)
    ctx->pc = 0x3f6460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
label_3f6464:
    // 0x3f6464: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f6468:
    if (ctx->pc == 0x3F6468u) {
        ctx->pc = 0x3F6468u;
            // 0x3f6468: 0xae000230  sw          $zero, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
        ctx->pc = 0x3F646Cu;
        goto label_3f646c;
    }
    ctx->pc = 0x3F6464u;
    {
        const bool branch_taken_0x3f6464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6464) {
            ctx->pc = 0x3F6468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6464u;
            // 0x3f6468: 0xae000230  sw          $zero, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6480u;
            goto label_3f6480;
        }
    }
    ctx->pc = 0x3F646Cu;
label_3f646c:
    // 0x3f646c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f646cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f6470:
    // 0x3f6470: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f6470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f6474:
    // 0x3f6474: 0x320f809  jalr        $t9
label_3f6478:
    if (ctx->pc == 0x3F6478u) {
        ctx->pc = 0x3F6478u;
            // 0x3f6478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F647Cu;
        goto label_3f647c;
    }
    ctx->pc = 0x3F6474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F647Cu);
        ctx->pc = 0x3F6478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6474u;
            // 0x3f6478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F647Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F647Cu; }
            if (ctx->pc != 0x3F647Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3F647Cu;
label_3f647c:
    // 0x3f647c: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x3f647cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
label_3f6480:
    // 0x3f6480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f6480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f6484:
    // 0x3f6484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f6484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f6488:
    // 0x3f6488: 0x3e00008  jr          $ra
label_3f648c:
    if (ctx->pc == 0x3F648Cu) {
        ctx->pc = 0x3F648Cu;
            // 0x3f648c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F6490u;
        goto label_3f6490;
    }
    ctx->pc = 0x3F6488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6488u;
            // 0x3f648c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F6490u;
label_3f6490:
    // 0x3f6490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f6490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f6494:
    // 0x3f6494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f6494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f6498:
    // 0x3f6498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f6498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f649c:
    // 0x3f649c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f649cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f64a0:
    // 0x3f64a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f64a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f64a4:
    // 0x3f64a4: 0xc040180  jal         func_100600
label_3f64a8:
    if (ctx->pc == 0x3F64A8u) {
        ctx->pc = 0x3F64A8u;
            // 0x3f64a8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3F64ACu;
        goto label_3f64ac;
    }
    ctx->pc = 0x3F64A4u;
    SET_GPR_U32(ctx, 31, 0x3F64ACu);
    ctx->pc = 0x3F64A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F64A4u;
            // 0x3f64a8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F64ACu; }
        if (ctx->pc != 0x3F64ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F64ACu; }
        if (ctx->pc != 0x3F64ACu) { return; }
    }
    ctx->pc = 0x3F64ACu;
label_3f64ac:
    // 0x3f64ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f64acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f64b0:
    // 0x3f64b0: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_3f64b4:
    if (ctx->pc == 0x3F64B4u) {
        ctx->pc = 0x3F64B4u;
            // 0x3f64b4: 0xae300230  sw          $s0, 0x230($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 16));
        ctx->pc = 0x3F64B8u;
        goto label_3f64b8;
    }
    ctx->pc = 0x3F64B0u;
    {
        const bool branch_taken_0x3f64b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f64b0) {
            ctx->pc = 0x3F64B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F64B0u;
            // 0x3f64b4: 0xae300230  sw          $s0, 0x230($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F64F4u;
            goto label_3f64f4;
        }
    }
    ctx->pc = 0x3F64B8u;
label_3f64b8:
    // 0x3f64b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3f64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3f64bc:
    // 0x3f64bc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3f64bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_3f64c0:
    // 0x3f64c0: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x3f64c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3f64c4:
    // 0x3f64c4: 0x34650ea9  ori         $a1, $v1, 0xEA9
    ctx->pc = 0x3f64c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3753);
label_3f64c8:
    // 0x3f64c8: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x3f64c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f64cc:
    // 0x3f64cc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3f64ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3f64d0:
    // 0x3f64d0: 0x320f809  jalr        $t9
label_3f64d4:
    if (ctx->pc == 0x3F64D4u) {
        ctx->pc = 0x3F64D4u;
            // 0x3f64d4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3F64D8u;
        goto label_3f64d8;
    }
    ctx->pc = 0x3F64D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F64D8u);
        ctx->pc = 0x3F64D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F64D0u;
            // 0x3f64d4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F64D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F64D8u; }
            if (ctx->pc != 0x3F64D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3F64D8u;
label_3f64d8:
    // 0x3f64d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f64d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f64dc:
    // 0x3f64dc: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x3f64dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_3f64e0:
    // 0x3f64e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3f64e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3f64e4:
    // 0x3f64e4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3f64e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3f64e8:
    // 0x3f64e8: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x3f64e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_3f64ec:
    // 0x3f64ec: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x3f64ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_3f64f0:
    // 0x3f64f0: 0xae300230  sw          $s0, 0x230($s1)
    ctx->pc = 0x3f64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 16));
label_3f64f4:
    // 0x3f64f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f64f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f64f8:
    // 0x3f64f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f64f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f64fc:
    // 0x3f64fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f64fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f6500:
    // 0x3f6500: 0x3e00008  jr          $ra
label_3f6504:
    if (ctx->pc == 0x3F6504u) {
        ctx->pc = 0x3F6504u;
            // 0x3f6504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F6508u;
        goto label_3f6508;
    }
    ctx->pc = 0x3F6500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6500u;
            // 0x3f6504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F6508u;
label_3f6508:
    // 0x3f6508: 0x0  nop
    ctx->pc = 0x3f6508u;
    // NOP
label_3f650c:
    // 0x3f650c: 0x0  nop
    ctx->pc = 0x3f650cu;
    // NOP
}
