#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BB220
// Address: 0x3bb220 - 0x3bb320
void sub_003BB220_0x3bb220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB220_0x3bb220");
#endif

    ctx->pc = 0x3bb220u;

    // 0x3bb220: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3bb220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bb224: 0x50a3002f  beql        $a1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3BB224u;
    {
        const bool branch_taken_0x3bb224 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bb224) {
            ctx->pc = 0x3BB228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB224u;
            // 0x3bb228: 0xa41821  addu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB2E4u;
            goto label_3bb2e4;
        }
    }
    ctx->pc = 0x3BB22Cu;
    // 0x3bb22c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3bb22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bb230: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3BB230u;
    {
        const bool branch_taken_0x3bb230 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bb230) {
            ctx->pc = 0x3BB2E0u;
            goto label_3bb2e0;
        }
    }
    ctx->pc = 0x3BB238u;
    // 0x3bb238: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3bb238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb23c: 0x10a70028  beq         $a1, $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x3BB23Cu;
    {
        const bool branch_taken_0x3bb23c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x3bb23c) {
            ctx->pc = 0x3BB2E0u;
            goto label_3bb2e0;
        }
    }
    ctx->pc = 0x3BB244u;
    // 0x3bb244: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB244u;
    {
        const bool branch_taken_0x3bb244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb244) {
            ctx->pc = 0x3BB248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB244u;
            // 0x3bb248: 0xc4c10dd4  lwc1        $f1, 0xDD4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB254u;
            goto label_3bb254;
        }
    }
    ctx->pc = 0x3BB24Cu;
    // 0x3bb24c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3BB24Cu;
    {
        const bool branch_taken_0x3bb24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb24c) {
            ctx->pc = 0x3BB30Cu;
            goto label_3bb30c;
        }
    }
    ctx->pc = 0x3BB254u;
label_3bb254:
    // 0x3bb254: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x3bb254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x3bb258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3bb258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bb25c: 0x0  nop
    ctx->pc = 0x3bb25cu;
    // NOP
    // 0x3bb260: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3bb260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bb264: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BB264u;
    {
        const bool branch_taken_0x3bb264 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bb264) {
            ctx->pc = 0x3BB270u;
            goto label_3bb270;
        }
    }
    ctx->pc = 0x3BB26Cu;
    // 0x3bb26c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bb26cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bb270:
    // 0x3bb270: 0x54e0000b  bnel        $a3, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3BB270u;
    {
        const bool branch_taken_0x3bb270 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb270) {
            ctx->pc = 0x3BB274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB270u;
            // 0x3bb274: 0xa41821  addu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB2A0u;
            goto label_3bb2a0;
        }
    }
    ctx->pc = 0x3BB278u;
    // 0x3bb278: 0x3c033f05  lui         $v1, 0x3F05
    ctx->pc = 0x3bb278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16133 << 16));
    // 0x3bb27c: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x3bb27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7864);
    // 0x3bb280: 0xc4c10dc4  lwc1        $f1, 0xDC4($a2)
    ctx->pc = 0x3bb280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bb284: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3bb284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bb288: 0x0  nop
    ctx->pc = 0x3bb288u;
    // NOP
    // 0x3bb28c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3bb28cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bb290: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BB290u;
    {
        const bool branch_taken_0x3bb290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BB294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB290u;
            // 0x3bb294: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb290) {
            ctx->pc = 0x3BB29Cu;
            goto label_3bb29c;
        }
    }
    ctx->pc = 0x3BB298u;
    // 0x3bb298: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bb298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bb29c:
    // 0x3bb29c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x3bb29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3bb2a0:
    // 0x3bb2a0: 0x3c043f02  lui         $a0, 0x3F02
    ctx->pc = 0x3bb2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16130 << 16));
    // 0x3bb2a4: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x3bb2a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3bb2a8: 0x34848f5c  ori         $a0, $a0, 0x8F5C
    ctx->pc = 0x3bb2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36700);
    // 0x3bb2ac: 0xc4c10dc0  lwc1        $f1, 0xDC0($a2)
    ctx->pc = 0x3bb2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bb2b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3bb2b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bb2b4: 0x0  nop
    ctx->pc = 0x3bb2b4u;
    // NOP
    // 0x3bb2b8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3bb2b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x3bb2bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bb2bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bb2c0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3bb2c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3bb2c4: 0x0  nop
    ctx->pc = 0x3bb2c4u;
    // NOP
    // 0x3bb2c8: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x3bb2c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x3bb2cc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3bb2ccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x3bb2d0: 0x42023  negu        $a0, $a0
    ctx->pc = 0x3bb2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x3bb2d4: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x3bb2d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3bb2d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3BB2D8u;
    {
        const bool branch_taken_0x3bb2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB2D8u;
            // 0x3bb2dc: 0xa06400a4  sb          $a0, 0xA4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 164), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb2d8) {
            ctx->pc = 0x3BB30Cu;
            goto label_3bb30c;
        }
    }
    ctx->pc = 0x3BB2E0u;
label_3bb2e0:
    // 0x3bb2e0: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x3bb2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3bb2e4:
    // 0x3bb2e4: 0x8cc50d60  lw          $a1, 0xD60($a2)
    ctx->pc = 0x3bb2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3424)));
    // 0x3bb2e8: 0x3c041b4e  lui         $a0, 0x1B4E
    ctx->pc = 0x3bb2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6990 << 16));
    // 0x3bb2ec: 0x348481b5  ori         $a0, $a0, 0x81B5
    ctx->pc = 0x3bb2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33205);
    // 0x3bb2f0: 0x80a50004  lb          $a1, 0x4($a1)
    ctx->pc = 0x3bb2f0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3bb2f4: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x3bb2f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3bb2f8: 0x2010  mfhi        $a0
    ctx->pc = 0x3bb2f8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3bb2fc: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x3bb2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3bb300: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x3bb300u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x3bb304: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3bb304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3bb308: 0xa06400a4  sb          $a0, 0xA4($v1)
    ctx->pc = 0x3bb308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 164), (uint8_t)GPR_U32(ctx, 4));
label_3bb30c:
    // 0x3bb30c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BB314u;
    // 0x3bb314: 0x0  nop
    ctx->pc = 0x3bb314u;
    // NOP
    // 0x3bb318: 0x0  nop
    ctx->pc = 0x3bb318u;
    // NOP
    // 0x3bb31c: 0x0  nop
    ctx->pc = 0x3bb31cu;
    // NOP
}
