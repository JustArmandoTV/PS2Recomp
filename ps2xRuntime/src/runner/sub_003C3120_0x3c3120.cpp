#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3120
// Address: 0x3c3120 - 0x3c3330
void sub_003C3120_0x3c3120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3120_0x3c3120");
#endif

    ctx->pc = 0x3c3120u;

    // 0x3c3120: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3c3120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3c3124: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3c3124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3c3128: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x3c3128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c312c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c312cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c3130: 0x0  nop
    ctx->pc = 0x3c3130u;
    // NOP
    // 0x3c3134: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x3c3134u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c3138: 0x4503002d  bc1tl       . + 4 + (0x2D << 2)
    ctx->pc = 0x3C3138u;
    {
        const bool branch_taken_0x3c3138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c3138) {
            ctx->pc = 0x3C313Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3138u;
            // 0x3c313c: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C31F0u;
            goto label_3c31f0;
        }
    }
    ctx->pc = 0x3C3140u;
    // 0x3c3140: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x3c3140u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x3c3144: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x3c3144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x3c3148: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x3c3148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3c314c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c314cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3c3150: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3c3150u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c3154: 0x0  nop
    ctx->pc = 0x3c3154u;
    // NOP
    // 0x3c3158: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3c3158u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x3c315c: 0x0  nop
    ctx->pc = 0x3c315cu;
    // NOP
    // 0x3c3160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c3160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c3164: 0x0  nop
    ctx->pc = 0x3c3164u;
    // NOP
    // 0x3c3168: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c3168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c316c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3C316Cu;
    {
        const bool branch_taken_0x3c316c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c316c) {
            ctx->pc = 0x3C3170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C316Cu;
            // 0x3c3170: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3184u;
            goto label_3c3184;
        }
    }
    ctx->pc = 0x3C3174u;
    // 0x3c3174: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c3174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c3178: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3c3178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3c317c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C317Cu;
    {
        const bool branch_taken_0x3c317c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c317c) {
            ctx->pc = 0x3C3198u;
            goto label_3c3198;
        }
    }
    ctx->pc = 0x3C3184u;
label_3c3184:
    // 0x3c3184: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c3184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3c3188: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c3188u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c318c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3c318cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3c3190: 0x0  nop
    ctx->pc = 0x3c3190u;
    // NOP
    // 0x3c3194: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c3194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3c3198:
    // 0x3c3198: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3198u;
    {
        const bool branch_taken_0x3c3198 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x3c3198) {
            ctx->pc = 0x3C319Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3198u;
            // 0x3c319c: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C31ACu;
            goto label_3c31ac;
        }
    }
    ctx->pc = 0x3C31A0u;
    // 0x3c31a0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3c31a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c31a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C31A4u;
    {
        const bool branch_taken_0x3c31a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C31A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C31A4u;
            // 0x3c31a8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c31a4) {
            ctx->pc = 0x3C31C4u;
            goto label_3c31c4;
        }
    }
    ctx->pc = 0x3C31ACu;
label_3c31ac:
    // 0x3c31ac: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x3c31acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3c31b0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3c31b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3c31b4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3c31b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c31b8: 0x0  nop
    ctx->pc = 0x3c31b8u;
    // NOP
    // 0x3c31bc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3c31bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3c31c0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3c31c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3c31c4:
    // 0x3c31c4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x3c31c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x3c31c8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3c31c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3c31cc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c31ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c31d0: 0x0  nop
    ctx->pc = 0x3c31d0u;
    // NOP
    // 0x3c31d4: 0x46022841  sub.s       $f1, $f5, $f2
    ctx->pc = 0x3c31d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x3c31d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c31d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c31dc: 0x0  nop
    ctx->pc = 0x3c31dcu;
    // NOP
    // 0x3c31e0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3c31e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c31e4: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x3c31e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3c31e8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3C31E8u;
    {
        const bool branch_taken_0x3c31e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C31ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C31E8u;
            // 0x3c31ec: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c31e8) {
            ctx->pc = 0x3C3320u;
            goto label_3c3320;
        }
    }
    ctx->pc = 0x3C31F0u;
label_3c31f0:
    // 0x3c31f0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3c31f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3c31f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c31f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c31f8: 0x0  nop
    ctx->pc = 0x3c31f8u;
    // NOP
    // 0x3c31fc: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x3c31fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c3200: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x3C3200u;
    {
        const bool branch_taken_0x3c3200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c3200) {
            ctx->pc = 0x3C3320u;
            goto label_3c3320;
        }
    }
    ctx->pc = 0x3C3208u;
    // 0x3c3208: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3c3208u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x3c320c: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x3c320cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x3c3210: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x3c3210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3c3214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c3214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3218: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3c3218u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c321c: 0x0  nop
    ctx->pc = 0x3c321cu;
    // NOP
    // 0x3c3220: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x3c3220u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[6] = ctx->f[1] / ctx->f[0];
    // 0x3c3224: 0x0  nop
    ctx->pc = 0x3c3224u;
    // NOP
    // 0x3c3228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c3228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c322c: 0x0  nop
    ctx->pc = 0x3c322cu;
    // NOP
    // 0x3c3230: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x3c3230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c3234: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3234u;
    {
        const bool branch_taken_0x3c3234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c3234) {
            ctx->pc = 0x3C3240u;
            goto label_3c3240;
        }
    }
    ctx->pc = 0x3C323Cu;
    // 0x3c323c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3c323cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3240:
    // 0x3c3240: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3240u;
    {
        const bool branch_taken_0x3c3240 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3c3240) {
            ctx->pc = 0x3C3244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3240u;
            // 0x3c3244: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3254u;
            goto label_3c3254;
        }
    }
    ctx->pc = 0x3C3248u;
    // 0x3c3248: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c3248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c324c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C324Cu;
    {
        const bool branch_taken_0x3c324c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C324Cu;
            // 0x3c3250: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c324c) {
            ctx->pc = 0x3C326Cu;
            goto label_3c326c;
        }
    }
    ctx->pc = 0x3C3254u;
label_3c3254:
    // 0x3c3254: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3c3254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3c3258: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3c3258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3c325c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3c325cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c3260: 0x0  nop
    ctx->pc = 0x3c3260u;
    // NOP
    // 0x3c3264: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x3c3264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3c3268: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x3c3268u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_3c326c:
    // 0x3c326c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3c326cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x3c3270: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3c3270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3c3274: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3c3274u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c3278: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c3278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c327c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3c327cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c3280: 0x0  nop
    ctx->pc = 0x3c3280u;
    // NOP
    // 0x3c3284: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3c3284u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3c3288: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c3288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3c328c: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x3c328cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x3c3290: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x3c3290u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x3c3294: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c3294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c3298: 0x0  nop
    ctx->pc = 0x3c3298u;
    // NOP
    // 0x3c329c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c329cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c32a0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3C32A0u;
    {
        const bool branch_taken_0x3c32a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c32a0) {
            ctx->pc = 0x3C32A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C32A0u;
            // 0x3c32a4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C32B8u;
            goto label_3c32b8;
        }
    }
    ctx->pc = 0x3C32A8u;
    // 0x3c32a8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c32a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c32ac: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3c32acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3c32b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C32B0u;
    {
        const bool branch_taken_0x3c32b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c32b0) {
            ctx->pc = 0x3C32CCu;
            goto label_3c32cc;
        }
    }
    ctx->pc = 0x3C32B8u;
label_3c32b8:
    // 0x3c32b8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c32b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3c32bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c32bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c32c0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3c32c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3c32c4: 0x0  nop
    ctx->pc = 0x3c32c4u;
    // NOP
    // 0x3c32c8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3c32c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3c32cc:
    // 0x3c32cc: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C32CCu;
    {
        const bool branch_taken_0x3c32cc = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x3c32cc) {
            ctx->pc = 0x3C32D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C32CCu;
            // 0x3c32d0: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C32E0u;
            goto label_3c32e0;
        }
    }
    ctx->pc = 0x3C32D4u;
    // 0x3c32d4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3c32d4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c32d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C32D8u;
    {
        const bool branch_taken_0x3c32d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C32DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C32D8u;
            // 0x3c32dc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c32d8) {
            ctx->pc = 0x3C32F8u;
            goto label_3c32f8;
        }
    }
    ctx->pc = 0x3C32E0u;
label_3c32e0:
    // 0x3c32e0: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x3c32e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3c32e4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3c32e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3c32e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3c32e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c32ec: 0x0  nop
    ctx->pc = 0x3c32ecu;
    // NOP
    // 0x3c32f0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3c32f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3c32f4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3c32f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3c32f8:
    // 0x3c32f8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x3c32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x3c32fc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3c32fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3c3300: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c3300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c3304: 0x0  nop
    ctx->pc = 0x3c3304u;
    // NOP
    // 0x3c3308: 0x46051040  add.s       $f1, $f2, $f5
    ctx->pc = 0x3c3308u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x3c330c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c330cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c3310: 0x0  nop
    ctx->pc = 0x3c3310u;
    // NOP
    // 0x3c3314: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3c3314u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c3318: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x3c3318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3c331c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3c331cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_3c3320:
    // 0x3c3320: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3328u;
    // 0x3c3328: 0x0  nop
    ctx->pc = 0x3c3328u;
    // NOP
    // 0x3c332c: 0x0  nop
    ctx->pc = 0x3c332cu;
    // NOP
}
