#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00327210
// Address: 0x327210 - 0x3273b0
void sub_00327210_0x327210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327210_0x327210");
#endif

    switch (ctx->pc) {
        case 0x3272d4u: goto label_3272d4;
        case 0x3272e4u: goto label_3272e4;
        case 0x3272f8u: goto label_3272f8;
        case 0x327300u: goto label_327300;
        case 0x327314u: goto label_327314;
        case 0x32733cu: goto label_32733c;
        case 0x327350u: goto label_327350;
        case 0x327368u: goto label_327368;
        case 0x327380u: goto label_327380;
        case 0x327394u: goto label_327394;
        default: break;
    }

    ctx->pc = 0x327210u;

    // 0x327210: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x327210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x327214: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x327214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x327218: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x327218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32721c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32721cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x327220: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x327220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x327224: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x327224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x327228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32722c: 0x8c900668  lw          $s0, 0x668($a0)
    ctx->pc = 0x32722cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1640)));
    // 0x327230: 0x8c73e378  lw          $s3, -0x1C88($v1)
    ctx->pc = 0x327230u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x327234: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x327234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x327238: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x327238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x32723c: 0x8c71d120  lw          $s1, -0x2EE0($v1)
    ctx->pc = 0x32723cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x327240: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x327240u;
    {
        const bool branch_taken_0x327240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x327244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327240u;
            // 0x327244: 0x8c92e370  lw          $s2, -0x1C90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327240) {
            ctx->pc = 0x327394u;
            goto label_327394;
        }
    }
    ctx->pc = 0x327248u;
    // 0x327248: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x327248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x32724c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32724cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x327250: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x327250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x327254: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x327254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327258: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x327258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32725c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32725cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x327260: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x327260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x327264: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x327264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x327268: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x327268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32726c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x32726cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327270: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x327270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x327274: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x327274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x327278: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x327278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x32727c: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x32727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327280: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x327280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327284: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x327284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x327288: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x327288u;
    {
        const bool branch_taken_0x327288 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x327288) {
            ctx->pc = 0x32728Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327288u;
            // 0x32728c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32729Cu;
            goto label_32729c;
        }
    }
    ctx->pc = 0x327290u;
    // 0x327290: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x327290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x327294: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x327294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x327298: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x327298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32729c:
    // 0x32729c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x32729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3272a0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3272a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3272a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3272a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3272a8: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3272A8u;
    {
        const bool branch_taken_0x3272a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3272a8) {
            ctx->pc = 0x3272ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3272A8u;
            // 0x3272ac: 0x3c0243fa  lui         $v0, 0x43FA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3272BCu;
            goto label_3272bc;
        }
    }
    ctx->pc = 0x3272B0u;
    // 0x3272b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3272b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3272b4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3272b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x3272b8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3272b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_3272bc:
    // 0x3272bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3272bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3272c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3272c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3272c4: 0x0  nop
    ctx->pc = 0x3272c4u;
    // NOP
    // 0x3272c8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3272c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3272cc: 0xc04f3f4  jal         func_13CFD0
    ctx->pc = 0x3272CCu;
    SET_GPR_U32(ctx, 31, 0x3272D4u);
    ctx->pc = 0x3272D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3272CCu;
            // 0x3272d0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3272D4u; }
        if (ctx->pc != 0x3272D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3272D4u; }
        if (ctx->pc != 0x3272D4u) { return; }
    }
    ctx->pc = 0x3272D4u;
label_3272d4:
    // 0x3272d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3272d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3272d8: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x3272d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3272dc: 0xc04cdd0  jal         func_133740
    ctx->pc = 0x3272DCu;
    SET_GPR_U32(ctx, 31, 0x3272E4u);
    ctx->pc = 0x3272E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3272DCu;
            // 0x3272e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3272E4u; }
        if (ctx->pc != 0x3272E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3272E4u; }
        if (ctx->pc != 0x3272E4u) { return; }
    }
    ctx->pc = 0x3272E4u;
label_3272e4:
    // 0x3272e4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3272e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3272e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3272e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3272ec: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3272ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3272f0: 0xc04f674  jal         func_13D9D0
    ctx->pc = 0x3272F0u;
    SET_GPR_U32(ctx, 31, 0x3272F8u);
    ctx->pc = 0x3272F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3272F0u;
            // 0x3272f4: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D9D0u;
    if (runtime->hasFunction(0x13D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3272F8u; }
        if (ctx->pc != 0x3272F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D9D0_0x13d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3272F8u; }
        if (ctx->pc != 0x3272F8u) { return; }
    }
    ctx->pc = 0x3272F8u;
label_3272f8:
    // 0x3272f8: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x3272F8u;
    SET_GPR_U32(ctx, 31, 0x327300u);
    ctx->pc = 0x3272FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3272F8u;
            // 0x3272fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327300u; }
        if (ctx->pc != 0x327300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327300u; }
        if (ctx->pc != 0x327300u) { return; }
    }
    ctx->pc = 0x327300u;
label_327300:
    // 0x327300: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x327300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x327304: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327308: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x327308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x32730c: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x32730Cu;
    SET_GPR_U32(ctx, 31, 0x327314u);
    ctx->pc = 0x327310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32730Cu;
            // 0x327310: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327314u; }
        if (ctx->pc != 0x327314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327314u; }
        if (ctx->pc != 0x327314u) { return; }
    }
    ctx->pc = 0x327314u;
label_327314:
    // 0x327314: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x327314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x327318: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x327318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32731c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x32731cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x327320: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x327320u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x327324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327328: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x327328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32732c: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x32732cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x327330: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x327330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
    // 0x327334: 0xc04cff4  jal         func_133FD0
    ctx->pc = 0x327334u;
    SET_GPR_U32(ctx, 31, 0x32733Cu);
    ctx->pc = 0x327338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327334u;
            // 0x327338: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32733Cu; }
        if (ctx->pc != 0x32733Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32733Cu; }
        if (ctx->pc != 0x32733Cu) { return; }
    }
    ctx->pc = 0x32733Cu;
label_32733c:
    // 0x32733c: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x32733cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x327340: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x327340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x327344: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x327344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x327348: 0xc0525e0  jal         func_149780
    ctx->pc = 0x327348u;
    SET_GPR_U32(ctx, 31, 0x327350u);
    ctx->pc = 0x32734Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327348u;
            // 0x32734c: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149780u;
    if (runtime->hasFunction(0x149780u)) {
        auto targetFn = runtime->lookupFunction(0x149780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327350u; }
        if (ctx->pc != 0x327350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149780_0x149780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327350u; }
        if (ctx->pc != 0x327350u) { return; }
    }
    ctx->pc = 0x327350u;
label_327350:
    // 0x327350: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x327350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x327354: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x327354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x327358: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x327358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x32735c: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x32735cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x327360: 0xc052398  jal         func_148E60
    ctx->pc = 0x327360u;
    SET_GPR_U32(ctx, 31, 0x327368u);
    ctx->pc = 0x327364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327360u;
            // 0x327364: 0x240803ff  addiu       $t0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148E60u;
    if (runtime->hasFunction(0x148E60u)) {
        auto targetFn = runtime->lookupFunction(0x148E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327368u; }
        if (ctx->pc != 0x327368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00148E60_0x148e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327368u; }
        if (ctx->pc != 0x327368u) { return; }
    }
    ctx->pc = 0x327368u;
label_327368:
    // 0x327368: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x327368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x32736c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32736cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327370: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x327370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327374: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x327374u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x327378: 0xc0525a4  jal         func_149690
    ctx->pc = 0x327378u;
    SET_GPR_U32(ctx, 31, 0x327380u);
    ctx->pc = 0x32737Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327378u;
            // 0x32737c: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149690u;
    if (runtime->hasFunction(0x149690u)) {
        auto targetFn = runtime->lookupFunction(0x149690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327380u; }
        if (ctx->pc != 0x327380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149690_0x149690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327380u; }
        if (ctx->pc != 0x327380u) { return; }
    }
    ctx->pc = 0x327380u;
label_327380:
    // 0x327380: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x327380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x327384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327388: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x327388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32738c: 0xc04f674  jal         func_13D9D0
    ctx->pc = 0x32738Cu;
    SET_GPR_U32(ctx, 31, 0x327394u);
    ctx->pc = 0x327390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32738Cu;
            // 0x327390: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D9D0u;
    if (runtime->hasFunction(0x13D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327394u; }
        if (ctx->pc != 0x327394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D9D0_0x13d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327394u; }
        if (ctx->pc != 0x327394u) { return; }
    }
    ctx->pc = 0x327394u;
label_327394:
    // 0x327394: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x327394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x327398: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x327398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32739c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32739cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3273a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3273a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3273a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3273a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3273a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3273A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3273ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3273A8u;
            // 0x3273ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3273B0u;
}
