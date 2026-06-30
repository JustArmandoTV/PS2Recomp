#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304220
// Address: 0x304220 - 0x304310
void sub_00304220_0x304220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304220_0x304220");
#endif

    switch (ctx->pc) {
        case 0x304254u: goto label_304254;
        default: break;
    }

    ctx->pc = 0x304220u;

    // 0x304220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x304224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x304228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30422c: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x30422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
    // 0x304230: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x304230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x304234: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x304234u;
    {
        const bool branch_taken_0x304234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304234u;
            // 0x304238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304234) {
            ctx->pc = 0x30424Cu;
            goto label_30424c;
        }
    }
    ctx->pc = 0x30423Cu;
    // 0x30423c: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x30423cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
    // 0x304240: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x304240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x304244: 0x5083002f  beql        $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x304244u;
    {
        const bool branch_taken_0x304244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304244) {
            ctx->pc = 0x304248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304244u;
            // 0x304248: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304304u;
            goto label_304304;
        }
    }
    ctx->pc = 0x30424Cu;
label_30424c:
    // 0x30424c: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x30424Cu;
    SET_GPR_U32(ctx, 31, 0x304254u);
    ctx->pc = 0x304250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30424Cu;
            // 0x304250: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304254u; }
        if (ctx->pc != 0x304254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304254u; }
        if (ctx->pc != 0x304254u) { return; }
    }
    ctx->pc = 0x304254u;
label_304254:
    // 0x304254: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x304254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
    // 0x304258: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x304258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x30425c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30425cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304260: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x304260u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x304264: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x304264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304268: 0x0  nop
    ctx->pc = 0x304268u;
    // NOP
    // 0x30426c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30426cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x304270: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x304270u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x304274: 0x0  nop
    ctx->pc = 0x304274u;
    // NOP
    // 0x304278: 0x0  nop
    ctx->pc = 0x304278u;
    // NOP
    // 0x30427c: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x30427Cu;
    {
        const bool branch_taken_0x30427c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x30427c) {
            ctx->pc = 0x3042D8u;
            goto label_3042d8;
        }
    }
    ctx->pc = 0x304284u;
    // 0x304284: 0xc6000de0  lwc1        $f0, 0xDE0($s0)
    ctx->pc = 0x304284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304288: 0xc6010de4  lwc1        $f1, 0xDE4($s0)
    ctx->pc = 0x304288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30428c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30428cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x304290: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x304290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304294: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x304294u;
    {
        const bool branch_taken_0x304294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304294) {
            ctx->pc = 0x304298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304294u;
            // 0x304298: 0xae000de8  sw          $zero, 0xDE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304300u;
            goto label_304300;
        }
    }
    ctx->pc = 0x30429Cu;
    // 0x30429c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30429cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3042a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3042a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3042a4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3042A4u;
    {
        const bool branch_taken_0x3042a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3042a4) {
            ctx->pc = 0x3042A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3042A4u;
            // 0x3042a8: 0xc4400004  lwc1        $f0, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3042B8u;
            goto label_3042b8;
        }
    }
    ctx->pc = 0x3042ACu;
    // 0x3042ac: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3042acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3042b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3042B0u;
    {
        const bool branch_taken_0x3042b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3042B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3042B0u;
            // 0x3042b4: 0xe6000de8  swc1        $f0, 0xDE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042b0) {
            ctx->pc = 0x304300u;
            goto label_304300;
        }
    }
    ctx->pc = 0x3042B8u;
label_3042b8:
    // 0x3042b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3042b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3042bc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3042BCu;
    {
        const bool branch_taken_0x3042bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3042bc) {
            ctx->pc = 0x3042C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3042BCu;
            // 0x3042c0: 0xc4400014  lwc1        $f0, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3042D0u;
            goto label_3042d0;
        }
    }
    ctx->pc = 0x3042C4u;
    // 0x3042c4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x3042c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3042c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3042C8u;
    {
        const bool branch_taken_0x3042c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3042CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3042C8u;
            // 0x3042cc: 0xe6000de8  swc1        $f0, 0xDE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042c8) {
            ctx->pc = 0x304300u;
            goto label_304300;
        }
    }
    ctx->pc = 0x3042D0u;
label_3042d0:
    // 0x3042d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3042D0u;
    {
        const bool branch_taken_0x3042d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3042D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3042D0u;
            // 0x3042d4: 0xe6000de8  swc1        $f0, 0xDE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042d0) {
            ctx->pc = 0x304300u;
            goto label_304300;
        }
    }
    ctx->pc = 0x3042D8u;
label_3042d8:
    // 0x3042d8: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x3042d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
    // 0x3042dc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3042dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3042e0: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3042E0u;
    {
        const bool branch_taken_0x3042e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3042e0) {
            ctx->pc = 0x3042E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3042E0u;
            // 0x3042e4: 0x3c03bc08  lui         $v1, 0xBC08 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48136 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3042F8u;
            goto label_3042f8;
        }
    }
    ctx->pc = 0x3042E8u;
    // 0x3042e8: 0x3c03bb88  lui         $v1, 0xBB88
    ctx->pc = 0x3042e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48008 << 16));
    // 0x3042ec: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3042ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3042f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3042F0u;
    {
        const bool branch_taken_0x3042f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3042F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3042F0u;
            // 0x3042f4: 0xae030de8  sw          $v1, 0xDE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042f0) {
            ctx->pc = 0x304300u;
            goto label_304300;
        }
    }
    ctx->pc = 0x3042F8u;
label_3042f8:
    // 0x3042f8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3042f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3042fc: 0xae030de8  sw          $v1, 0xDE8($s0)
    ctx->pc = 0x3042fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 3));
label_304300:
    // 0x304300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x304300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_304304:
    // 0x304304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x304304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304308: 0x3e00008  jr          $ra
    ctx->pc = 0x304308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30430Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304308u;
            // 0x30430c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304310u;
}
