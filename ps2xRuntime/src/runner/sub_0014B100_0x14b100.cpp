#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B100
// Address: 0x14b100 - 0x14b250
void sub_0014B100_0x14b100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B100_0x14b100");
#endif

    switch (ctx->pc) {
        case 0x14b1c0u: goto label_14b1c0;
        case 0x14b220u: goto label_14b220;
        default: break;
    }

    ctx->pc = 0x14b100u;

    // 0x14b100: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14b104: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14b104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x14b108: 0x460d6002  mul.s       $f0, $f12, $f13
    ctx->pc = 0x14b108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x14b10c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14b10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14b110: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14b110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14b114: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14b114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14b118: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14b118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b11c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14b11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14b120: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14b120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b124: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14b124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14b128: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14b128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b12c: 0x46000180  add.s       $f6, $f0, $f0
    ctx->pc = 0x14b12cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x14b130: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x14b130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b134: 0x460e6002  mul.s       $f0, $f12, $f14
    ctx->pc = 0x14b134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[14]);
    // 0x14b138: 0x460d68c2  mul.s       $f3, $f13, $f13
    ctx->pc = 0x14b138u;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x14b13c: 0x460c6102  mul.s       $f4, $f12, $f12
    ctx->pc = 0x14b13cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x14b140: 0x46000140  add.s       $f5, $f0, $f0
    ctx->pc = 0x14b140u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x14b144: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14b144u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14b148: 0x460e7082  mul.s       $f2, $f14, $f14
    ctx->pc = 0x14b148u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x14b14c: 0x46032000  add.s       $f0, $f4, $f3
    ctx->pc = 0x14b14cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x14b150: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x14b150u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x14b154: 0x46060543  div.s       $f21, $f0, $f6
    ctx->pc = 0x14b154u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[6];
    // 0x14b158: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x14b158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x14b15c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x14b15cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x14b160: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14b160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14b164: 0x46050503  div.s       $f20, $f0, $f5
    ctx->pc = 0x14b164u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[5];
    // 0x14b168: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14b168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14b16c: 0x0  nop
    ctx->pc = 0x14b16cu;
    // NOP
    // 0x14b170: 0x0  nop
    ctx->pc = 0x14b170u;
    // NOP
    // 0x14b174: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x14b174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b178: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x14B178u;
    {
        const bool branch_taken_0x14b178 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b178) {
            ctx->pc = 0x14B17Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B178u;
            // 0x14b17c: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B18Cu;
            goto label_14b18c;
        }
    }
    ctx->pc = 0x14B180u;
    // 0x14b180: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x14b180u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x14b184: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14B184u;
    {
        const bool branch_taken_0x14b184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B184u;
            // 0x14b188: 0x46000d46  mov.s       $f21, $f1 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b184) {
            ctx->pc = 0x14B1C4u;
            goto label_14b1c4;
        }
    }
    ctx->pc = 0x14B18Cu;
label_14b18c:
    // 0x14b18c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14b18cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b190: 0x0  nop
    ctx->pc = 0x14b190u;
    // NOP
    // 0x14b194: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x14b194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b198: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14B198u;
    {
        const bool branch_taken_0x14b198 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b198) {
            ctx->pc = 0x14B1ACu;
            goto label_14b1ac;
        }
    }
    ctx->pc = 0x14B1A0u;
    // 0x14b1a0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x14b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x14b1a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B1A4u;
    {
        const bool branch_taken_0x14b1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1A4u;
            // 0x14b1a8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1a4) {
            ctx->pc = 0x14B1C4u;
            goto label_14b1c4;
        }
    }
    ctx->pc = 0x14B1ACu;
label_14b1ac:
    // 0x14b1ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b1acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b1b0: 0x0  nop
    ctx->pc = 0x14b1b0u;
    // NOP
    // 0x14b1b4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x14b1b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14b1b8: 0xc04c710  jal         func_131C40
    ctx->pc = 0x14B1B8u;
    SET_GPR_U32(ctx, 31, 0x14B1C0u);
    ctx->pc = 0x14B1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1B8u;
            // 0x14b1bc: 0x4615ab1d  msub.s      $f12, $f21, $f21 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1C0u; }
        if (ctx->pc != 0x14B1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1C0u; }
        if (ctx->pc != 0x14B1C0u) { return; }
    }
    ctx->pc = 0x14B1C0u;
label_14b1c0:
    // 0x14b1c0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x14b1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_14b1c4:
    // 0x14b1c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x14b1c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14b1c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14b1cc: 0x0  nop
    ctx->pc = 0x14b1ccu;
    // NOP
    // 0x14b1d0: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x14b1d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b1d4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x14B1D4u;
    {
        const bool branch_taken_0x14b1d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14B1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1D4u;
            // 0x14b1d8: 0xe6550000  swc1        $f21, 0x0($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1d4) {
            ctx->pc = 0x14B1E8u;
            goto label_14b1e8;
        }
    }
    ctx->pc = 0x14B1DCu;
    // 0x14b1dc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x14b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x14b1e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14B1E0u;
    {
        const bool branch_taken_0x14b1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1E0u;
            // 0x14b1e4: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1e0) {
            ctx->pc = 0x14B224u;
            goto label_14b224;
        }
    }
    ctx->pc = 0x14B1E8u;
label_14b1e8:
    // 0x14b1e8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x14b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x14b1ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14b1ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b1f0: 0x0  nop
    ctx->pc = 0x14b1f0u;
    // NOP
    // 0x14b1f4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14b1f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b1f8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14B1F8u;
    {
        const bool branch_taken_0x14b1f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b1f8) {
            ctx->pc = 0x14B20Cu;
            goto label_14b20c;
        }
    }
    ctx->pc = 0x14B200u;
    // 0x14b200: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x14b200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x14b204: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B204u;
    {
        const bool branch_taken_0x14b204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B204u;
            // 0x14b208: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b204) {
            ctx->pc = 0x14B224u;
            goto label_14b224;
        }
    }
    ctx->pc = 0x14B20Cu;
label_14b20c:
    // 0x14b20c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b20cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b210: 0x0  nop
    ctx->pc = 0x14b210u;
    // NOP
    // 0x14b214: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x14b214u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14b218: 0xc04c710  jal         func_131C40
    ctx->pc = 0x14B218u;
    SET_GPR_U32(ctx, 31, 0x14B220u);
    ctx->pc = 0x14B21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B218u;
            // 0x14b21c: 0x4614a31d  msub.s      $f12, $f20, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[20]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B220u; }
        if (ctx->pc != 0x14B220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B220u; }
        if (ctx->pc != 0x14B220u) { return; }
    }
    ctx->pc = 0x14B220u;
label_14b220:
    // 0x14b220: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x14b220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_14b224:
    // 0x14b224: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x14b224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x14b228: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14b228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b22c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14b22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14b230: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14b230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b234: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14b234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14b238: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14b238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b23c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14b23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b240: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14b240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b244: 0x3e00008  jr          $ra
    ctx->pc = 0x14B244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B244u;
            // 0x14b248: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B24Cu;
    // 0x14b24c: 0x0  nop
    ctx->pc = 0x14b24cu;
    // NOP
}
