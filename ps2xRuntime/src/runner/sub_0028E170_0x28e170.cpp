#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028E170
// Address: 0x28e170 - 0x28e2e0
void sub_0028E170_0x28e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E170_0x28e170");
#endif

    ctx->pc = 0x28e170u;

    // 0x28e170: 0xc4ab0004  lwc1        $f11, 0x4($a1)
    ctx->pc = 0x28e170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x28e174: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28e174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28e178: 0xc4aa0000  lwc1        $f10, 0x0($a1)
    ctx->pc = 0x28e178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x28e17c: 0xc4a90008  lwc1        $f9, 0x8($a1)
    ctx->pc = 0x28e17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x28e180: 0x460b581a  mula.s      $f11, $f11
    ctx->pc = 0x28e180u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x28e184: 0x460a501e  madda.s     $f10, $f10
    ctx->pc = 0x28e184u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
    // 0x28e188: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x28e188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x28e18c: 0x4609481c  madd.s      $f0, $f9, $f9
    ctx->pc = 0x28e18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[9]));
    // 0x28e190: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x28e190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x28e194: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x28e194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x28e198: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x28e198u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x28e19c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x28e19cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e1a0: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x28E1A0u;
    {
        const bool branch_taken_0x28e1a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28e1a0) {
            ctx->pc = 0x28E1A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E1A0u;
            // 0x28e1a4: 0xc4a60014  lwc1        $f6, 0x14($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E1B0u;
            goto label_28e1b0;
        }
    }
    ctx->pc = 0x28E1A8u;
    // 0x28e1a8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x28E1A8u;
    {
        const bool branch_taken_0x28e1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E1A8u;
            // 0x28e1ac: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1a8) {
            ctx->pc = 0x28E2CCu;
            goto label_28e2cc;
        }
    }
    ctx->pc = 0x28E1B0u;
label_28e1b0:
    // 0x28e1b0: 0xc4a50010  lwc1        $f5, 0x10($a1)
    ctx->pc = 0x28e1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28e1b4: 0xc4a40018  lwc1        $f4, 0x18($a1)
    ctx->pc = 0x28e1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28e1b8: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x28e1b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x28e1bc: 0x46004018  adda.s      $f8, $f0
    ctx->pc = 0x28e1bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x28e1c0: 0x4605281c  madd.s      $f0, $f5, $f5
    ctx->pc = 0x28e1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x28e1c4: 0x46004018  adda.s      $f8, $f0
    ctx->pc = 0x28e1c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x28e1c8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x28e1c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x28e1cc: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x28e1ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x28e1d0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x28e1d0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x28e1d4: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x28e1d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e1d8: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x28E1D8u;
    {
        const bool branch_taken_0x28e1d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28e1d8) {
            ctx->pc = 0x28E1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E1D8u;
            // 0x28e1dc: 0xc4a30024  lwc1        $f3, 0x24($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E1E8u;
            goto label_28e1e8;
        }
    }
    ctx->pc = 0x28E1E0u;
    // 0x28e1e0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x28E1E0u;
    {
        const bool branch_taken_0x28e1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E1E0u;
            // 0x28e1e4: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1e0) {
            ctx->pc = 0x28E2CCu;
            goto label_28e2cc;
        }
    }
    ctx->pc = 0x28E1E8u;
label_28e1e8:
    // 0x28e1e8: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x28e1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e1ec: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x28e1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e1f0: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x28e1f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x28e1f4: 0x46004018  adda.s      $f8, $f0
    ctx->pc = 0x28e1f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x28e1f8: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x28e1f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x28e1fc: 0x46004018  adda.s      $f8, $f0
    ctx->pc = 0x28e1fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x28e200: 0x4601081c  madd.s      $f0, $f1, $f1
    ctx->pc = 0x28e200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x28e204: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x28e204u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x28e208: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x28e208u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x28e20c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x28e20cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e210: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x28E210u;
    {
        const bool branch_taken_0x28e210 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28e210) {
            ctx->pc = 0x28E214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E210u;
            // 0x28e214: 0x46045802  mul.s       $f0, $f11, $f4 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E220u;
            goto label_28e220;
        }
    }
    ctx->pc = 0x28E218u;
    // 0x28e218: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x28E218u;
    {
        const bool branch_taken_0x28e218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E218u;
            // 0x28e21c: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e218) {
            ctx->pc = 0x28E2CCu;
            goto label_28e2cc;
        }
    }
    ctx->pc = 0x28E220u;
label_28e220:
    // 0x28e220: 0x46004018  adda.s      $f8, $f0
    ctx->pc = 0x28e220u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x28e224: 0x4606481d  msub.s      $f0, $f9, $f6
    ctx->pc = 0x28e224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[6]));
    // 0x28e228: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28e228u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x28e22c: 0x460001c5  abs.s       $f7, $f0
    ctx->pc = 0x28e22cu;
    ctx->f[7] = FPU_ABS_S(ctx->f[0]);
    // 0x28e230: 0x46054802  mul.s       $f0, $f9, $f5
    ctx->pc = 0x28e230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x28e234: 0x46004018  adda.s      $f8, $f0
    ctx->pc = 0x28e234u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x28e238: 0x4604501d  msub.s      $f0, $f10, $f4
    ctx->pc = 0x28e238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[4]));
    // 0x28e23c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x28e23cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x28e240: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x28e240u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x28e244: 0x46065002  mul.s       $f0, $f10, $f6
    ctx->pc = 0x28e244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x28e248: 0x46004018  adda.s      $f8, $f0
    ctx->pc = 0x28e248u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x28e24c: 0x4605581d  msub.s      $f0, $f11, $f5
    ctx->pc = 0x28e24cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[5]));
    // 0x28e250: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28e250u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28e254: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x28e254u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x28e258: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x28e258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e25c: 0x46004001  sub.s       $f0, $f8, $f0
    ctx->pc = 0x28e25cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x28e260: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x28e260u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x28e264: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x28e264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e268: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E268u;
    {
        const bool branch_taken_0x28e268 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E268u;
            // 0x28e26c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e268) {
            ctx->pc = 0x28E274u;
            goto label_28e274;
        }
    }
    ctx->pc = 0x28E270u;
    // 0x28e270: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28e270u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e274:
    // 0x28e274: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x28e274u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e278: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28E278u;
    {
        const bool branch_taken_0x28e278 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E278u;
            // 0x28e27c: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e278) {
            ctx->pc = 0x28E288u;
            goto label_28e288;
        }
    }
    ctx->pc = 0x28E280u;
    // 0x28e280: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28E280u;
    {
        const bool branch_taken_0x28e280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E280u;
            // 0x28e284: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e280) {
            ctx->pc = 0x28E28Cu;
            goto label_28e28c;
        }
    }
    ctx->pc = 0x28E288u;
label_28e288:
    // 0x28e288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28e288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e28c:
    // 0x28e28c: 0x460c3836  c.le.s      $f7, $f12
    ctx->pc = 0x28e28cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e290: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x28E290u;
    {
        const bool branch_taken_0x28e290 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28e290) {
            ctx->pc = 0x28E294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E290u;
            // 0x28e294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E29Cu;
            goto label_28e29c;
        }
    }
    ctx->pc = 0x28E298u;
    // 0x28e298: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x28e298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_28e29c:
    // 0x28e29c: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x28e29cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e2a0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x28E2A0u;
    {
        const bool branch_taken_0x28e2a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28e2a0) {
            ctx->pc = 0x28E2A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E2A0u;
            // 0x28e2a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E2ACu;
            goto label_28e2ac;
        }
    }
    ctx->pc = 0x28E2A8u;
    // 0x28e2a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28e2ac:
    // 0x28e2ac: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x28e2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x28e2b0: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x28e2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x28e2b4: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x28e2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x28e2b8: 0x3063000e  andi        $v1, $v1, 0xE
    ctx->pc = 0x28e2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)14);
    // 0x28e2bc: 0x3863000e  xori        $v1, $v1, 0xE
    ctx->pc = 0x28e2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)14);
    // 0x28e2c0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x28e2c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x28e2c4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28e2c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28e2c8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x28e2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_28e2cc:
    // 0x28e2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x28E2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28E2D4u;
    // 0x28e2d4: 0x0  nop
    ctx->pc = 0x28e2d4u;
    // NOP
    // 0x28e2d8: 0x0  nop
    ctx->pc = 0x28e2d8u;
    // NOP
    // 0x28e2dc: 0x0  nop
    ctx->pc = 0x28e2dcu;
    // NOP
}
