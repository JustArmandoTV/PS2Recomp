#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A9160
// Address: 0x4a9160 - 0x4a9400
void sub_004A9160_0x4a9160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9160_0x4a9160");
#endif

    switch (ctx->pc) {
        case 0x4a93bcu: goto label_4a93bc;
        case 0x4a93c8u: goto label_4a93c8;
        case 0x4a93e0u: goto label_4a93e0;
        case 0x4a93e8u: goto label_4a93e8;
        case 0x4a93f0u: goto label_4a93f0;
        default: break;
    }

    ctx->pc = 0x4a9160u;

    // 0x4a9160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a9160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a9164: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a9164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a9168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a9168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a916c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a916cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4a9170: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x4a9170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a9174: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A9174u;
    {
        const bool branch_taken_0x4a9174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a9174) {
            ctx->pc = 0x4A9178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9174u;
            // 0x4a9178: 0x9082001c  lbu         $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A91CCu;
            goto label_4a91cc;
        }
    }
    ctx->pc = 0x4A917Cu;
    // 0x4a917c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9180: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A9180u;
    {
        const bool branch_taken_0x4a9180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a9180) {
            ctx->pc = 0x4A9184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9180u;
            // 0x4a9184: 0xc4810004  lwc1        $f1, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A91B0u;
            goto label_4a91b0;
        }
    }
    ctx->pc = 0x4A9188u;
    // 0x4a9188: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9188u;
    {
        const bool branch_taken_0x4a9188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9188) {
            ctx->pc = 0x4A918Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9188u;
            // 0x4a918c: 0xc4810008  lwc1        $f1, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9198u;
            goto label_4a9198;
        }
    }
    ctx->pc = 0x4A9190u;
    // 0x4a9190: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x4A9190u;
    {
        const bool branch_taken_0x4a9190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9190) {
            ctx->pc = 0x4A923Cu;
            goto label_4a923c;
        }
    }
    ctx->pc = 0x4A9198u;
label_4a9198:
    // 0x4a9198: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x4a9198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a919c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x4a919cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x4a91a0: 0x0  nop
    ctx->pc = 0x4a91a0u;
    // NOP
    // 0x4a91a4: 0x0  nop
    ctx->pc = 0x4a91a4u;
    // NOP
    // 0x4a91a8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x4A91A8u;
    {
        const bool branch_taken_0x4a91a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a91a8) {
            ctx->pc = 0x4A923Cu;
            goto label_4a923c;
        }
    }
    ctx->pc = 0x4A91B0u;
label_4a91b0:
    // 0x4a91b0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x4a91b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a91b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4a91b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4a91b8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x4a91b8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x4a91bc: 0x0  nop
    ctx->pc = 0x4a91bcu;
    // NOP
    // 0x4a91c0: 0x0  nop
    ctx->pc = 0x4a91c0u;
    // NOP
    // 0x4a91c4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4A91C4u;
    {
        const bool branch_taken_0x4a91c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a91c4) {
            ctx->pc = 0x4A923Cu;
            goto label_4a923c;
        }
    }
    ctx->pc = 0x4A91CCu;
label_4a91cc:
    // 0x4a91cc: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A91CCu;
    {
        const bool branch_taken_0x4a91cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a91cc) {
            ctx->pc = 0x4A91D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A91CCu;
            // 0x4a91d0: 0xc4830004  lwc1        $f3, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A921Cu;
            goto label_4a921c;
        }
    }
    ctx->pc = 0x4A91D4u;
    // 0x4a91d4: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x4a91d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4a91d8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4a91d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x4a91dc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4a91dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a91e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4a91e4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x4a91e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a91e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a91e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a91ec: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4a91ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x4a91f0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x4a91f0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x4a91f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a91f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a91f8: 0x0  nop
    ctx->pc = 0x4a91f8u;
    // NOP
    // 0x4a91fc: 0x0  nop
    ctx->pc = 0x4a91fcu;
    // NOP
    // 0x4a9200: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4a9200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a9204: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x4A9204u;
    {
        const bool branch_taken_0x4a9204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a9204) {
            ctx->pc = 0x4A9208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9204u;
            // 0x4a9208: 0xa083001c  sb          $v1, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A923Cu;
            goto label_4a923c;
        }
    }
    ctx->pc = 0x4A920Cu;
    // 0x4a920c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a920cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9210: 0xa083001c  sb          $v1, 0x1C($a0)
    ctx->pc = 0x4a9210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x4a9214: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4A9214u;
    {
        const bool branch_taken_0x4a9214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9214) {
            ctx->pc = 0x4A923Cu;
            goto label_4a923c;
        }
    }
    ctx->pc = 0x4A921Cu;
label_4a921c:
    // 0x4a921c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4a921cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x4a9220: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x4a9220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4a9224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4a9224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a9228: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a9228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a922c: 0x0  nop
    ctx->pc = 0x4a922cu;
    // NOP
    // 0x4a9230: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x4a9230u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x4a9234: 0x4602081d  msub.s      $f0, $f1, $f2
    ctx->pc = 0x4a9234u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x4a9238: 0x46030043  div.s       $f1, $f0, $f3
    ctx->pc = 0x4a9238u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[3];
label_4a923c:
    // 0x4a923c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a923cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4a9240: 0x8c650e50  lw          $a1, 0xE50($v1)
    ctx->pc = 0x4a9240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3664)));
    // 0x4a9244: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4a9244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a9248: 0x8cb00058  lw          $s0, 0x58($a1)
    ctx->pc = 0x4a9248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x4a924c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4a924cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a9250: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A9250u;
    {
        const bool branch_taken_0x4a9250 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A9254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9250u;
            // 0x4a9254: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9250) {
            ctx->pc = 0x4A9264u;
            goto label_4a9264;
        }
    }
    ctx->pc = 0x4A9258u;
    // 0x4a9258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a9258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a925c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A925Cu;
    {
        const bool branch_taken_0x4a925c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A925Cu;
            // 0x4a9260: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a925c) {
            ctx->pc = 0x4A9280u;
            goto label_4a9280;
        }
    }
    ctx->pc = 0x4A9264u;
label_4a9264:
    // 0x4a9264: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x4a9264u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x4a9268: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4a9268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4a926c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4a926cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4a9270: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4a9270u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a9274: 0x0  nop
    ctx->pc = 0x4a9274u;
    // NOP
    // 0x4a9278: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a9278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a927c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a927cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4a9280:
    // 0x4a9280: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x4a9280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x4a9284: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x4a9284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x4a9288: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4a9288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a928c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x4a928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a9290: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A9290u;
    {
        const bool branch_taken_0x4a9290 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4a9290) {
            ctx->pc = 0x4A9294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9290u;
            // 0x4a9294: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A92A4u;
            goto label_4a92a4;
        }
    }
    ctx->pc = 0x4A9298u;
    // 0x4a9298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a9298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a929c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A929Cu;
    {
        const bool branch_taken_0x4a929c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A92A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A929Cu;
            // 0x4a92a0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a929c) {
            ctx->pc = 0x4A92BCu;
            goto label_4a92bc;
        }
    }
    ctx->pc = 0x4A92A4u;
label_4a92a4:
    // 0x4a92a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4a92a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4a92a8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4a92a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4a92ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4a92acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a92b0: 0x0  nop
    ctx->pc = 0x4a92b0u;
    // NOP
    // 0x4a92b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a92b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a92b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a92b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4a92bc:
    // 0x4a92bc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x4a92bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x4a92c0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x4a92c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x4a92c4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4a92c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a92c8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x4a92c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a92cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a92ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a92d0: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A92D0u;
    {
        const bool branch_taken_0x4a92d0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4a92d0) {
            ctx->pc = 0x4A92D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A92D0u;
            // 0x4a92d4: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A92E4u;
            goto label_4a92e4;
        }
    }
    ctx->pc = 0x4A92D8u;
    // 0x4a92d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a92d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a92dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A92DCu;
    {
        const bool branch_taken_0x4a92dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A92E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A92DCu;
            // 0x4a92e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a92dc) {
            ctx->pc = 0x4A92FCu;
            goto label_4a92fc;
        }
    }
    ctx->pc = 0x4A92E4u;
label_4a92e4:
    // 0x4a92e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4a92e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4a92e8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4a92e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4a92ec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4a92ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a92f0: 0x0  nop
    ctx->pc = 0x4a92f0u;
    // NOP
    // 0x4a92f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a92f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a92f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a92f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4a92fc:
    // 0x4a92fc: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x4a92fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x4a9300: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x4a9300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x4a9304: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4a9304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a9308: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4a9308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4a930c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a930cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a9310: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A9310u;
    {
        const bool branch_taken_0x4a9310 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4a9310) {
            ctx->pc = 0x4A9314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9310u;
            // 0x4a9314: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9324u;
            goto label_4a9324;
        }
    }
    ctx->pc = 0x4A9318u;
    // 0x4a9318: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a9318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a931c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A931Cu;
    {
        const bool branch_taken_0x4a931c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A931Cu;
            // 0x4a9320: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a931c) {
            ctx->pc = 0x4A933Cu;
            goto label_4a933c;
        }
    }
    ctx->pc = 0x4A9324u;
label_4a9324:
    // 0x4a9324: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4a9324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4a9328: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4a9328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4a932c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a932cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a9330: 0x0  nop
    ctx->pc = 0x4a9330u;
    // NOP
    // 0x4a9334: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a9334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a9338: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a9338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4a933c:
    // 0x4a933c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x4a933cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x4a9340: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x4a9340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x4a9344: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x4a9344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x4a9348: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4a9348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x4a934c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a934cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a9350: 0x0  nop
    ctx->pc = 0x4a9350u;
    // NOP
    // 0x4a9354: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4a9354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a9358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a9358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a935c: 0x0  nop
    ctx->pc = 0x4a935cu;
    // NOP
    // 0x4a9360: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4a9360u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a9364: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x4A9364u;
    {
        const bool branch_taken_0x4a9364 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a9364) {
            ctx->pc = 0x4A9368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9364u;
            // 0x4a9368: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A937Cu;
            goto label_4a937c;
        }
    }
    ctx->pc = 0x4A936Cu;
    // 0x4a936c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a936cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a9370: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4a9370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4a9374: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A9374u;
    {
        const bool branch_taken_0x4a9374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9374u;
            // 0x4a9378: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9374) {
            ctx->pc = 0x4A9394u;
            goto label_4a9394;
        }
    }
    ctx->pc = 0x4A937Cu;
label_4a937c:
    // 0x4a937c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x4a937cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x4a9380: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a9380u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a9384: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4a9384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4a9388: 0x0  nop
    ctx->pc = 0x4a9388u;
    // NOP
    // 0x4a938c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4a938cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4a9390: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4a9390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4a9394:
    // 0x4a9394: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4a9394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a9398: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x4a9398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4a939c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a939cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a93a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a93a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a93a4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a93a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a93a8: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x4a93a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x4a93ac: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x4a93acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x4a93b0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x4a93b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x4a93b4: 0xc05068c  jal         func_141A30
    ctx->pc = 0x4A93B4u;
    SET_GPR_U32(ctx, 31, 0x4A93BCu);
    ctx->pc = 0x4A93B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A93B4u;
            // 0x4a93b8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A93BCu; }
        if (ctx->pc != 0x4A93BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A93BCu; }
        if (ctx->pc != 0x4A93BCu) { return; }
    }
    ctx->pc = 0x4A93BCu;
label_4a93bc:
    // 0x4a93bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4a93bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a93c0: 0xc0506cc  jal         func_141B30
    ctx->pc = 0x4A93C0u;
    SET_GPR_U32(ctx, 31, 0x4A93C8u);
    ctx->pc = 0x4A93C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A93C0u;
            // 0x4a93c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141B30u;
    if (runtime->hasFunction(0x141B30u)) {
        auto targetFn = runtime->lookupFunction(0x141B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A93C8u; }
        if (ctx->pc != 0x4A93C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141B30_0x141b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A93C8u; }
        if (ctx->pc != 0x4A93C8u) { return; }
    }
    ctx->pc = 0x4A93C8u;
label_4a93c8:
    // 0x4a93c8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4a93cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a93ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a93d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a93d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4a93d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4a93d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a93d8: 0xc050780  jal         func_141E00
    ctx->pc = 0x4A93D8u;
    SET_GPR_U32(ctx, 31, 0x4A93E0u);
    ctx->pc = 0x4A93DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A93D8u;
            // 0x4a93dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    if (runtime->hasFunction(0x141E00u)) {
        auto targetFn = runtime->lookupFunction(0x141E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A93E0u; }
        if (ctx->pc != 0x4A93E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141E00_0x141e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A93E0u; }
        if (ctx->pc != 0x4A93E0u) { return; }
    }
    ctx->pc = 0x4A93E0u;
label_4a93e0:
    // 0x4a93e0: 0xc0508a4  jal         func_142290
    ctx->pc = 0x4A93E0u;
    SET_GPR_U32(ctx, 31, 0x4A93E8u);
    ctx->pc = 0x142290u;
    if (runtime->hasFunction(0x142290u)) {
        auto targetFn = runtime->lookupFunction(0x142290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A93E8u; }
        if (ctx->pc != 0x4A93E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142290_0x142290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A93E8u; }
        if (ctx->pc != 0x4A93E8u) { return; }
    }
    ctx->pc = 0x4A93E8u;
label_4a93e8:
    // 0x4a93e8: 0xc05068c  jal         func_141A30
    ctx->pc = 0x4A93E8u;
    SET_GPR_U32(ctx, 31, 0x4A93F0u);
    ctx->pc = 0x4A93ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A93E8u;
            // 0x4a93ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A93F0u; }
        if (ctx->pc != 0x4A93F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A93F0u; }
        if (ctx->pc != 0x4A93F0u) { return; }
    }
    ctx->pc = 0x4A93F0u;
label_4a93f0:
    // 0x4a93f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a93f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a93f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a93f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a93f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A93F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A93FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A93F8u;
            // 0x4a93fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A9400u;
}
