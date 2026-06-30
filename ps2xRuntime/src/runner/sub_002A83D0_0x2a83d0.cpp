#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A83D0
// Address: 0x2a83d0 - 0x2a88e0
void sub_002A83D0_0x2a83d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A83D0_0x2a83d0");
#endif

    switch (ctx->pc) {
        case 0x2a8418u: goto label_2a8418;
        case 0x2a8760u: goto label_2a8760;
        case 0x2a8878u: goto label_2a8878;
        case 0x2a8888u: goto label_2a8888;
        case 0x2a88b0u: goto label_2a88b0;
        case 0x2a88c0u: goto label_2a88c0;
        case 0x2a88c8u: goto label_2a88c8;
        default: break;
    }

    ctx->pc = 0x2a83d0u;

    // 0x2a83d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a83d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2a83d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a83d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a83d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a83d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a83dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a83dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a83e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a83e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a83e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a83e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a83e8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2a83e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a83ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2a83ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a83f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a83f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a83f4: 0x8c9000ac  lw          $s0, 0xAC($a0)
    ctx->pc = 0x2a83f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x2a83f8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A83F8u;
    {
        const bool branch_taken_0x2a83f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A83FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A83F8u;
            // 0x2a83fc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a83f8) {
            ctx->pc = 0x2A8408u;
            goto label_2a8408;
        }
    }
    ctx->pc = 0x2A8400u;
    // 0x2a8400: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A8400u;
    {
        const bool branch_taken_0x2a8400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8400) {
            ctx->pc = 0x2A841Cu;
            goto label_2a841c;
        }
    }
    ctx->pc = 0x2A8408u;
label_2a8408:
    // 0x2a8408: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a8408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a840c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a840cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8410: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2A8410u;
    SET_GPR_U32(ctx, 31, 0x2A8418u);
    ctx->pc = 0x2A8414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8410u;
            // 0x2a8414: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8418u; }
        if (ctx->pc != 0x2A8418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8418u; }
        if (ctx->pc != 0x2A8418u) { return; }
    }
    ctx->pc = 0x2A8418u;
label_2a8418:
    // 0x2a8418: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2a8418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a841c:
    // 0x2a841c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a841cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2a8420: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2a8420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2a8424: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2a8424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2a8428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a842c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2a842cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8430: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a8430u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8434: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8434u;
    {
        const bool branch_taken_0x2a8434 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8434) {
            ctx->pc = 0x2A8438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8434u;
            // 0x2a8438: 0x3c024248  lui         $v0, 0x4248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8448u;
            goto label_2a8448;
        }
    }
    ctx->pc = 0x2A843Cu;
    // 0x2a843c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2a843cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2a8440: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2A8440u;
    {
        const bool branch_taken_0x2a8440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8440u;
            // 0x2a8444: 0x8e44003c  lw          $a0, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8440) {
            ctx->pc = 0x2A84B8u;
            goto label_2a84b8;
        }
    }
    ctx->pc = 0x2A8448u;
label_2a8448:
    // 0x2a8448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a844c: 0x0  nop
    ctx->pc = 0x2a844cu;
    // NOP
    // 0x2a8450: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a8450u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8454: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2A8454u;
    {
        const bool branch_taken_0x2a8454 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8454) {
            ctx->pc = 0x2A8458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8454u;
            // 0x2a8458: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8470u;
            goto label_2a8470;
        }
    }
    ctx->pc = 0x2A845Cu;
    // 0x2a845c: 0x3c023ea8  lui         $v0, 0x3EA8
    ctx->pc = 0x2a845cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16040 << 16));
    // 0x2a8460: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x2a8460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x2a8464: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x2a8464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2a8468: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2A8468u;
    {
        const bool branch_taken_0x2a8468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8468) {
            ctx->pc = 0x2A84B4u;
            goto label_2a84b4;
        }
    }
    ctx->pc = 0x2A8470u;
label_2a8470:
    // 0x2a8470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8474: 0x0  nop
    ctx->pc = 0x2a8474u;
    // NOP
    // 0x2a8478: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a8478u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a847c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2A847Cu;
    {
        const bool branch_taken_0x2a847c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a847c) {
            ctx->pc = 0x2A8480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A847Cu;
            // 0x2a8480: 0x3c0241c8  lui         $v0, 0x41C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8494u;
            goto label_2a8494;
        }
    }
    ctx->pc = 0x2A8484u;
    // 0x2a8484: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a8484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8488: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x2a8488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2a848c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A848Cu;
    {
        const bool branch_taken_0x2a848c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a848c) {
            ctx->pc = 0x2A84B4u;
            goto label_2a84b4;
        }
    }
    ctx->pc = 0x2A8494u;
label_2a8494:
    // 0x2a8494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8498: 0x0  nop
    ctx->pc = 0x2a8498u;
    // NOP
    // 0x2a849c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a849cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a84a0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A84A0u;
    {
        const bool branch_taken_0x2a84a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a84a0) {
            ctx->pc = 0x2A84B4u;
            goto label_2a84b4;
        }
    }
    ctx->pc = 0x2A84A8u;
    // 0x2a84a8: 0x3c023f95  lui         $v0, 0x3F95
    ctx->pc = 0x2a84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16277 << 16));
    // 0x2a84ac: 0x34423f7d  ori         $v0, $v0, 0x3F7D
    ctx->pc = 0x2a84acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16253);
    // 0x2a84b0: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x2a84b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2a84b4:
    // 0x2a84b4: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x2a84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2a84b8:
    // 0x2a84b8: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x2a84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
    // 0x2a84bc: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x2a84bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
    // 0x2a84c0: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2a84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2a84c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a84c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a84c8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x2a84c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a84cc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2a84ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a84d0: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x2a84d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2a84d4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2a84d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2a84d8: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x2a84d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
    // 0x2a84dc: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x2a84dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a84e0: 0x0  nop
    ctx->pc = 0x2a84e0u;
    // NOP
    // 0x2a84e4: 0x0  nop
    ctx->pc = 0x2a84e4u;
    // NOP
    // 0x2a84e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A84E8u;
    {
        const bool branch_taken_0x2a84e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a84e8) {
            ctx->pc = 0x2A84F8u;
            goto label_2a84f8;
        }
    }
    ctx->pc = 0x2A84F0u;
    // 0x2a84f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a84f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a84f4: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x2a84f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2a84f8:
    // 0x2a84f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a84f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a84fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a84fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8500: 0x0  nop
    ctx->pc = 0x2a8500u;
    // NOP
    // 0x2a8504: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2a8504u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8508: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8508u;
    {
        const bool branch_taken_0x2a8508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8508) {
            ctx->pc = 0x2A850Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8508u;
            // 0x2a850c: 0x8e4200a8  lw          $v0, 0xA8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8520u;
            goto label_2a8520;
        }
    }
    ctx->pc = 0x2A8510u;
    // 0x2a8510: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2a8510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2a8514: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2a8514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2a8518: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x2a8518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a851c: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x2a851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_2a8520:
    // 0x2a8520: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a8520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8524: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2a8524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a8528: 0x0  nop
    ctx->pc = 0x2a8528u;
    // NOP
    // 0x2a852c: 0x46151501  sub.s       $f20, $f2, $f21
    ctx->pc = 0x2a852cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x2a8530: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x2a8530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8534: 0xc6410084  lwc1        $f1, 0x84($s2)
    ctx->pc = 0x2a8534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8538: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2a8538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a853c: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x2a853cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a8540: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2a8540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x2a8544: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2a8544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2a8548: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x2a8548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x2a854c: 0xc6410080  lwc1        $f1, 0x80($s2)
    ctx->pc = 0x2a854cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8550: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2a8550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8554: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x2a8554u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a8558: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2a8558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x2a855c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2a855cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2a8560: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x2a8560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x2a8564: 0xc6410088  lwc1        $f1, 0x88($s2)
    ctx->pc = 0x2a8564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8568: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2a8568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a856c: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x2a856cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a8570: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2a8570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x2a8574: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2a8574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2a8578: 0x9242008d  lbu         $v0, 0x8D($s2)
    ctx->pc = 0x2a8578u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 141)));
    // 0x2a857c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A857Cu;
    {
        const bool branch_taken_0x2a857c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a857c) {
            ctx->pc = 0x2A8580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A857Cu;
            // 0x2a8580: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8590u;
            goto label_2a8590;
        }
    }
    ctx->pc = 0x2A8584u;
    // 0x2a8584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8588: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8588u;
    {
        const bool branch_taken_0x2a8588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A858Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8588u;
            // 0x2a858c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8588) {
            ctx->pc = 0x2A85A8u;
            goto label_2a85a8;
        }
    }
    ctx->pc = 0x2A8590u;
label_2a8590:
    // 0x2a8590: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a8590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a8594: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a8594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a8598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a859c: 0x0  nop
    ctx->pc = 0x2a859cu;
    // NOP
    // 0x2a85a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a85a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a85a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a85a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a85a8:
    // 0x2a85a8: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x2a85a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x2a85ac: 0x90420034  lbu         $v0, 0x34($v0)
    ctx->pc = 0x2a85acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2a85b0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A85B0u;
    {
        const bool branch_taken_0x2a85b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a85b0) {
            ctx->pc = 0x2A85B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A85B0u;
            // 0x2a85b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A85C4u;
            goto label_2a85c4;
        }
    }
    ctx->pc = 0x2A85B8u;
    // 0x2a85b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a85b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a85bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A85BCu;
    {
        const bool branch_taken_0x2a85bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A85C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A85BCu;
            // 0x2a85c0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a85bc) {
            ctx->pc = 0x2A85DCu;
            goto label_2a85dc;
        }
    }
    ctx->pc = 0x2A85C4u;
label_2a85c4:
    // 0x2a85c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a85c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a85c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a85c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a85cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a85ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a85d0: 0x0  nop
    ctx->pc = 0x2a85d0u;
    // NOP
    // 0x2a85d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a85d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a85d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a85d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a85dc:
    // 0x2a85dc: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x2a85dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a85e0: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2a85e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x2a85e4: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x2a85e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x2a85e8: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2a85e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2a85ec: 0x9242008c  lbu         $v0, 0x8C($s2)
    ctx->pc = 0x2a85ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x2a85f0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A85F0u;
    {
        const bool branch_taken_0x2a85f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a85f0) {
            ctx->pc = 0x2A85F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A85F0u;
            // 0x2a85f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8604u;
            goto label_2a8604;
        }
    }
    ctx->pc = 0x2A85F8u;
    // 0x2a85f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a85f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a85fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A85FCu;
    {
        const bool branch_taken_0x2a85fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A85FCu;
            // 0x2a8600: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a85fc) {
            ctx->pc = 0x2A861Cu;
            goto label_2a861c;
        }
    }
    ctx->pc = 0x2A8604u;
label_2a8604:
    // 0x2a8604: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a8604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a8608: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a8608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a860c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a860cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8610: 0x0  nop
    ctx->pc = 0x2a8610u;
    // NOP
    // 0x2a8614: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a8614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a8618: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a8618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a861c:
    // 0x2a861c: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x2a861cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x2a8620: 0x90420035  lbu         $v0, 0x35($v0)
    ctx->pc = 0x2a8620u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 53)));
    // 0x2a8624: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8624u;
    {
        const bool branch_taken_0x2a8624 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a8624) {
            ctx->pc = 0x2A8628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8624u;
            // 0x2a8628: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8638u;
            goto label_2a8638;
        }
    }
    ctx->pc = 0x2A862Cu;
    // 0x2a862c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a862cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8630: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8630u;
    {
        const bool branch_taken_0x2a8630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8630u;
            // 0x2a8634: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8630) {
            ctx->pc = 0x2A8650u;
            goto label_2a8650;
        }
    }
    ctx->pc = 0x2A8638u;
label_2a8638:
    // 0x2a8638: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a8638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a863c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a863cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a8640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8644: 0x0  nop
    ctx->pc = 0x2a8644u;
    // NOP
    // 0x2a8648: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a864c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a864cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a8650:
    // 0x2a8650: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x2a8650u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a8654: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2a8654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x2a8658: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x2a8658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x2a865c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2a865cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2a8660: 0x9242008e  lbu         $v0, 0x8E($s2)
    ctx->pc = 0x2a8660u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 142)));
    // 0x2a8664: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8664u;
    {
        const bool branch_taken_0x2a8664 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a8664) {
            ctx->pc = 0x2A8668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8664u;
            // 0x2a8668: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8678u;
            goto label_2a8678;
        }
    }
    ctx->pc = 0x2A866Cu;
    // 0x2a866c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a866cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8670: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8670u;
    {
        const bool branch_taken_0x2a8670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8670u;
            // 0x2a8674: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8670) {
            ctx->pc = 0x2A8690u;
            goto label_2a8690;
        }
    }
    ctx->pc = 0x2A8678u;
label_2a8678:
    // 0x2a8678: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a8678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a867c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a867cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a8680: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8684: 0x0  nop
    ctx->pc = 0x2a8684u;
    // NOP
    // 0x2a8688: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a8688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a868c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a868cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a8690:
    // 0x2a8690: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x2a8690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x2a8694: 0x90420036  lbu         $v0, 0x36($v0)
    ctx->pc = 0x2a8694u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x2a8698: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8698u;
    {
        const bool branch_taken_0x2a8698 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a8698) {
            ctx->pc = 0x2A869Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8698u;
            // 0x2a869c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A86ACu;
            goto label_2a86ac;
        }
    }
    ctx->pc = 0x2A86A0u;
    // 0x2a86a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a86a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a86a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A86A4u;
    {
        const bool branch_taken_0x2a86a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A86A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A86A4u;
            // 0x2a86a8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86a4) {
            ctx->pc = 0x2A86C4u;
            goto label_2a86c4;
        }
    }
    ctx->pc = 0x2A86ACu;
label_2a86ac:
    // 0x2a86ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a86acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a86b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a86b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a86b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a86b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a86b8: 0x0  nop
    ctx->pc = 0x2a86b8u;
    // NOP
    // 0x2a86bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a86bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a86c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a86c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a86c4:
    // 0x2a86c4: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x2a86c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a86c8: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2a86c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x2a86cc: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x2a86ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x2a86d0: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2a86d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2a86d4: 0x9242008f  lbu         $v0, 0x8F($s2)
    ctx->pc = 0x2a86d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 143)));
    // 0x2a86d8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A86D8u;
    {
        const bool branch_taken_0x2a86d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a86d8) {
            ctx->pc = 0x2A86DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A86D8u;
            // 0x2a86dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A86ECu;
            goto label_2a86ec;
        }
    }
    ctx->pc = 0x2A86E0u;
    // 0x2a86e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a86e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a86e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A86E4u;
    {
        const bool branch_taken_0x2a86e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A86E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A86E4u;
            // 0x2a86e8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86e4) {
            ctx->pc = 0x2A8704u;
            goto label_2a8704;
        }
    }
    ctx->pc = 0x2A86ECu;
label_2a86ec:
    // 0x2a86ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a86ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a86f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a86f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a86f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a86f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a86f8: 0x0  nop
    ctx->pc = 0x2a86f8u;
    // NOP
    // 0x2a86fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a86fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a8700: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a8700u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a8704:
    // 0x2a8704: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x2a8704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x2a8708: 0x90420037  lbu         $v0, 0x37($v0)
    ctx->pc = 0x2a8708u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 55)));
    // 0x2a870c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A870Cu;
    {
        const bool branch_taken_0x2a870c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a870c) {
            ctx->pc = 0x2A8710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A870Cu;
            // 0x2a8710: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8720u;
            goto label_2a8720;
        }
    }
    ctx->pc = 0x2A8714u;
    // 0x2a8714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8718: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8718u;
    {
        const bool branch_taken_0x2a8718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A871Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8718u;
            // 0x2a871c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8718) {
            ctx->pc = 0x2A8738u;
            goto label_2a8738;
        }
    }
    ctx->pc = 0x2A8720u;
label_2a8720:
    // 0x2a8720: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a8720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a8724: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a8724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a8728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a872c: 0x0  nop
    ctx->pc = 0x2a872cu;
    // NOP
    // 0x2a8730: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a8734: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a8734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a8738:
    // 0x2a8738: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x2a8738u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a873c: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2a873cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x2a8740: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x2a8740u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x2a8744: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2a8744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2a8748: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x2a8748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x2a874c: 0xc44c001c  lwc1        $f12, 0x1C($v0)
    ctx->pc = 0x2a874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8750: 0xc44d0020  lwc1        $f13, 0x20($v0)
    ctx->pc = 0x2a8750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a8754: 0xc44e0024  lwc1        $f14, 0x24($v0)
    ctx->pc = 0x2a8754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a8758: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2A8758u;
    SET_GPR_U32(ctx, 31, 0x2A8760u);
    ctx->pc = 0x2A875Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8758u;
            // 0x2a875c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8760u; }
        if (ctx->pc != 0x2A8760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8760u; }
        if (ctx->pc != 0x2A8760u) { return; }
    }
    ctx->pc = 0x2A8760u;
label_2a8760:
    // 0x2a8760: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x2a8760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8764: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a8764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8768: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a8768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a876c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2a876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8770: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2a8770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2a8774: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2a8774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2a8778: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x2a8778u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a877c: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x2a877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8780: 0x4614001c  madd.s      $f0, $f0, $f20
    ctx->pc = 0x2a8780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x2a8784: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2a8784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2a8788: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2a8788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a878c: 0xc6410074  lwc1        $f1, 0x74($s2)
    ctx->pc = 0x2a878cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8790: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x2a8790u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a8794: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2a8794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x2a8798: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x2a8798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2a879c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2a879cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a87a0: 0xc6410078  lwc1        $f1, 0x78($s2)
    ctx->pc = 0x2a87a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a87a4: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x2a87a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a87a8: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2a87a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x2a87ac: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x2a87acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2a87b0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x2a87b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a87b4: 0xc641007c  lwc1        $f1, 0x7C($s2)
    ctx->pc = 0x2a87b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a87b8: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x2a87b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a87bc: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2a87bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x2a87c0: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x2a87c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2a87c4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2a87c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a87c8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2a87c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a87cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a87ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a87d0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2a87d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2a87d4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2a87d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a87d8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2a87d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a87dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a87dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a87e0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2a87e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2a87e4: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2a87e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a87e8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2a87e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a87ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a87ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a87f0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2a87f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2a87f4: 0x8202001c  lb          $v0, 0x1C($s0)
    ctx->pc = 0x2a87f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2a87f8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2a87f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a87fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a87fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8800: 0x0  nop
    ctx->pc = 0x2a8800u;
    // NOP
    // 0x2a8804: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a8804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a8808: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a880c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2a880cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2a8810: 0x8202001d  lb          $v0, 0x1D($s0)
    ctx->pc = 0x2a8810u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x2a8814: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2a8814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8818: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a8818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a881c: 0x0  nop
    ctx->pc = 0x2a881cu;
    // NOP
    // 0x2a8820: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a8820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a8824: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8828: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2a8828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2a882c: 0x8202001e  lb          $v0, 0x1E($s0)
    ctx->pc = 0x2a882cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x2a8830: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2a8830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8834: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a8834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8838: 0x0  nop
    ctx->pc = 0x2a8838u;
    // NOP
    // 0x2a883c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a883cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a8840: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8844: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2a8844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2a8848: 0x8202001f  lb          $v0, 0x1F($s0)
    ctx->pc = 0x2a8848u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
    // 0x2a884c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2a884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8850: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a8850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8854: 0x0  nop
    ctx->pc = 0x2a8854u;
    // NOP
    // 0x2a8858: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a8858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a885c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a885cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8860: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2a8860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2a8864: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2a8864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8868: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2a8868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a886c: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2a886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a8870: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2A8870u;
    SET_GPR_U32(ctx, 31, 0x2A8878u);
    ctx->pc = 0x2A8874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8870u;
            // 0x2a8874: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8878u; }
        if (ctx->pc != 0x2A8878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8878u; }
        if (ctx->pc != 0x2A8878u) { return; }
    }
    ctx->pc = 0x2A8878u;
label_2a8878:
    // 0x2a8878: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2a8878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2a887c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a887cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8880: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x2A8880u;
    SET_GPR_U32(ctx, 31, 0x2A8888u);
    ctx->pc = 0x2A8884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8880u;
            // 0x2a8884: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8888u; }
        if (ctx->pc != 0x2A8888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8888u; }
        if (ctx->pc != 0x2A8888u) { return; }
    }
    ctx->pc = 0x2A8888u;
label_2a8888:
    // 0x2a8888: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a8888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a888c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2a888cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a8890: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a8890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8894: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2a8894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a8898: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a8898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a889c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a88a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a88a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a88a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A88A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A88A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A88A4u;
            // 0x2a88a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A88ACu;
    // 0x2a88ac: 0x0  nop
    ctx->pc = 0x2a88acu;
    // NOP
label_2a88b0:
    // 0x2a88b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a88b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a88b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a88b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a88b8: 0xc05b774  jal         func_16DDD0
    ctx->pc = 0x2A88B8u;
    SET_GPR_U32(ctx, 31, 0x2A88C0u);
    ctx->pc = 0x16DDD0u;
    if (runtime->hasFunction(0x16DDD0u)) {
        auto targetFn = runtime->lookupFunction(0x16DDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A88C0u; }
        if (ctx->pc != 0x2A88C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DDD0_0x16ddd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A88C0u; }
        if (ctx->pc != 0x2A88C0u) { return; }
    }
    ctx->pc = 0x2A88C0u;
label_2a88c0:
    // 0x2a88c0: 0xc05b7c6  jal         func_16DF18
    ctx->pc = 0x2A88C0u;
    SET_GPR_U32(ctx, 31, 0x2A88C8u);
    ctx->pc = 0x16DF18u;
    if (runtime->hasFunction(0x16DF18u)) {
        auto targetFn = runtime->lookupFunction(0x16DF18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A88C8u; }
        if (ctx->pc != 0x2A88C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DF18_0x16df18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A88C8u; }
        if (ctx->pc != 0x2A88C8u) { return; }
    }
    ctx->pc = 0x2A88C8u;
label_2a88c8:
    // 0x2a88c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a88c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a88cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A88CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A88D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A88CCu;
            // 0x2a88d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A88D4u;
    // 0x2a88d4: 0x0  nop
    ctx->pc = 0x2a88d4u;
    // NOP
    // 0x2a88d8: 0x0  nop
    ctx->pc = 0x2a88d8u;
    // NOP
    // 0x2a88dc: 0x0  nop
    ctx->pc = 0x2a88dcu;
    // NOP
}
