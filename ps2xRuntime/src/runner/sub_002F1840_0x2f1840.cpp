#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1840
// Address: 0x2f1840 - 0x2f1a10
void sub_002F1840_0x2f1840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1840_0x2f1840");
#endif

    switch (ctx->pc) {
        case 0x2f1874u: goto label_2f1874;
        case 0x2f1880u: goto label_2f1880;
        case 0x2f188cu: goto label_2f188c;
        case 0x2f1918u: goto label_2f1918;
        case 0x2f193cu: goto label_2f193c;
        case 0x2f1954u: goto label_2f1954;
        case 0x2f19a4u: goto label_2f19a4;
        case 0x2f19b8u: goto label_2f19b8;
        case 0x2f19e8u: goto label_2f19e8;
        default: break;
    }

    ctx->pc = 0x2f1840u;

    // 0x2f1840: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f1840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f1844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f1844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f1848: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f1848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2f184c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f184cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f1850: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f1850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1854: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f1854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f1858: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f1858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f185c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f185cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1864: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2f1864u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f1868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f1868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f186c: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2F186Cu;
    SET_GPR_U32(ctx, 31, 0x2F1874u);
    ctx->pc = 0x2F1870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F186Cu;
            // 0x2f1870: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1874u; }
        if (ctx->pc != 0x2F1874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1874u; }
        if (ctx->pc != 0x2F1874u) { return; }
    }
    ctx->pc = 0x2F1874u;
label_2f1874:
    // 0x2f1874: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2f1874u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2f1878: 0xc04cc14  jal         func_133050
    ctx->pc = 0x2F1878u;
    SET_GPR_U32(ctx, 31, 0x2F1880u);
    ctx->pc = 0x2F187Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1878u;
            // 0x2f187c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1880u; }
        if (ctx->pc != 0x2F1880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1880u; }
        if (ctx->pc != 0x2F1880u) { return; }
    }
    ctx->pc = 0x2F1880u;
label_2f1880:
    // 0x2f1880: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f1880u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2f1884: 0xc04cc14  jal         func_133050
    ctx->pc = 0x2F1884u;
    SET_GPR_U32(ctx, 31, 0x2F188Cu);
    ctx->pc = 0x2F1888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1884u;
            // 0x2f1888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F188Cu; }
        if (ctx->pc != 0x2F188Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F188Cu; }
        if (ctx->pc != 0x2F188Cu) { return; }
    }
    ctx->pc = 0x2F188Cu;
label_2f188c:
    // 0x2f188c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2f188cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2f1890: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f1890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2f1894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f1894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1898: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x2f1898u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
    // 0x2f189c: 0x0  nop
    ctx->pc = 0x2f189cu;
    // NOP
    // 0x2f18a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f18a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f18a4: 0x0  nop
    ctx->pc = 0x2f18a4u;
    // NOP
    // 0x2f18a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f18a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f18ac: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2F18ACu;
    {
        const bool branch_taken_0x2f18ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f18ac) {
            ctx->pc = 0x2F18B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F18ACu;
            // 0x2f18b0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F18BCu;
            goto label_2f18bc;
        }
    }
    ctx->pc = 0x2F18B4u;
    // 0x2f18b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f18b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f18b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2f18bc:
    // 0x2f18bc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2f18bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f18c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f18c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f18c4: 0x0  nop
    ctx->pc = 0x2f18c4u;
    // NOP
    // 0x2f18c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f18c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f18cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F18CCu;
    {
        const bool branch_taken_0x2f18cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F18D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F18CCu;
            // 0x2f18d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f18cc) {
            ctx->pc = 0x2F18D8u;
            goto label_2f18d8;
        }
    }
    ctx->pc = 0x2F18D4u;
    // 0x2f18d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f18d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f18d8:
    // 0x2f18d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f18d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f18dc: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x2f18dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2f18e0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2f18e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2f18e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f18e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f18e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f18e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f18ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f18ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f18f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f18f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f18f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f18f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f18f8: 0x0  nop
    ctx->pc = 0x2f18f8u;
    // NOP
    // 0x2f18fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f18fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f1900: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f1900u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f1904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1908: 0x0  nop
    ctx->pc = 0x2f1908u;
    // NOP
    // 0x2f190c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f190cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f1910: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x2F1910u;
    SET_GPR_U32(ctx, 31, 0x2F1918u);
    ctx->pc = 0x2F1914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1910u;
            // 0x2f1914: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1918u; }
        if (ctx->pc != 0x2F1918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1918u; }
        if (ctx->pc != 0x2F1918u) { return; }
    }
    ctx->pc = 0x2F1918u;
label_2f1918:
    // 0x2f1918: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2f1918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x2f191c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2f191cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x2f1920: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1924: 0x0  nop
    ctx->pc = 0x2f1924u;
    // NOP
    // 0x2f1928: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f1928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f192c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F192Cu;
    {
        const bool branch_taken_0x2f192c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F1930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F192Cu;
            // 0x2f1930: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f192c) {
            ctx->pc = 0x2F1944u;
            goto label_2f1944;
        }
    }
    ctx->pc = 0x2F1934u;
    // 0x2f1934: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2F1934u;
    SET_GPR_U32(ctx, 31, 0x2F193Cu);
    ctx->pc = 0x2F1938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1934u;
            // 0x2f1938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F193Cu; }
        if (ctx->pc != 0x2F193Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F193Cu; }
        if (ctx->pc != 0x2F193Cu) { return; }
    }
    ctx->pc = 0x2F193Cu;
label_2f193c:
    // 0x2f193c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2F193Cu;
    {
        const bool branch_taken_0x2f193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F193Cu;
            // 0x2f1940: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f193c) {
            ctx->pc = 0x2F19ECu;
            goto label_2f19ec;
        }
    }
    ctx->pc = 0x2F1944u;
label_2f1944:
    // 0x2f1944: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f1944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1948: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f1948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f194c: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x2F194Cu;
    SET_GPR_U32(ctx, 31, 0x2F1954u);
    ctx->pc = 0x2F1950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F194Cu;
            // 0x2f1950: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1954u; }
        if (ctx->pc != 0x2F1954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1954u; }
        if (ctx->pc != 0x2F1954u) { return; }
    }
    ctx->pc = 0x2F1954u;
label_2f1954:
    // 0x2f1954: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2f1954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1958: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2f1958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f195c: 0x0  nop
    ctx->pc = 0x2f195cu;
    // NOP
    // 0x2f1960: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f1960u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1964: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x2F1964u;
    {
        const bool branch_taken_0x2f1964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1964) {
            ctx->pc = 0x2F1968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1964u;
            // 0x2f1968: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F19B0u;
            goto label_2f19b0;
        }
    }
    ctx->pc = 0x2F196Cu;
    // 0x2f196c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2f196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1970: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f1970u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1974: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2F1974u;
    {
        const bool branch_taken_0x2f1974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1974) {
            ctx->pc = 0x2F19ACu;
            goto label_2f19ac;
        }
    }
    ctx->pc = 0x2F197Cu;
    // 0x2f197c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2f197cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1980: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f1980u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1984: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1984u;
    {
        const bool branch_taken_0x2f1984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1984) {
            ctx->pc = 0x2F19ACu;
            goto label_2f19ac;
        }
    }
    ctx->pc = 0x2F198Cu;
    // 0x2f198c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x2f198cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x2f1990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1998: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f199c: 0xc04ca18  jal         func_132860
    ctx->pc = 0x2F199Cu;
    SET_GPR_U32(ctx, 31, 0x2F19A4u);
    ctx->pc = 0x2F19A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F199Cu;
            // 0x2f19a0: 0x3446a5dc  ori         $a2, $v0, 0xA5DC (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42460);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F19A4u; }
        if (ctx->pc != 0x2F19A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F19A4u; }
        if (ctx->pc != 0x2F19A4u) { return; }
    }
    ctx->pc = 0x2F19A4u;
label_2f19a4:
    // 0x2f19a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F19A4u;
    {
        const bool branch_taken_0x2f19a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f19a4) {
            ctx->pc = 0x2F19E8u;
            goto label_2f19e8;
        }
    }
    ctx->pc = 0x2F19ACu;
label_2f19ac:
    // 0x2f19ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f19acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f19b0:
    // 0x2f19b0: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2F19B0u;
    SET_GPR_U32(ctx, 31, 0x2F19B8u);
    ctx->pc = 0x2F19B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F19B0u;
            // 0x2f19b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F19B8u; }
        if (ctx->pc != 0x2F19B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F19B8u; }
        if (ctx->pc != 0x2F19B8u) { return; }
    }
    ctx->pc = 0x2F19B8u;
label_2f19b8:
    // 0x2f19b8: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2f19b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x2f19bc: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2f19bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x2f19c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f19c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f19c4: 0x0  nop
    ctx->pc = 0x2f19c4u;
    // NOP
    // 0x2f19c8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2f19c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2f19cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f19ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2f19d0: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x2f19d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f19d4: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x2f19d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2f19d8: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x2f19d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2f19dc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2f19dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2f19e0: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x2F19E0u;
    SET_GPR_U32(ctx, 31, 0x2F19E8u);
    ctx->pc = 0x2F19E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F19E0u;
            // 0x2f19e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F19E8u; }
        if (ctx->pc != 0x2F19E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F19E8u; }
        if (ctx->pc != 0x2F19E8u) { return; }
    }
    ctx->pc = 0x2F19E8u;
label_2f19e8:
    // 0x2f19e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f19e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f19ec:
    // 0x2f19ec: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2f19ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f19f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f19f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f19f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f19f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f19f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f19f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f19fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f19fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1a00: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1A00u;
            // 0x2f1a04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1A08u;
    // 0x2f1a08: 0x0  nop
    ctx->pc = 0x2f1a08u;
    // NOP
    // 0x2f1a0c: 0x0  nop
    ctx->pc = 0x2f1a0cu;
    // NOP
}
