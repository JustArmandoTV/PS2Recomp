#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00269E40
// Address: 0x269e40 - 0x26a1a0
void sub_00269E40_0x269e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269E40_0x269e40");
#endif

    switch (ctx->pc) {
        case 0x269e90u: goto label_269e90;
        case 0x269ec0u: goto label_269ec0;
        default: break;
    }

    ctx->pc = 0x269e40u;

    // 0x269e40: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x269e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
    // 0x269e44: 0x3469ffee  ori         $t1, $v1, 0xFFEE
    ctx->pc = 0x269e44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
    // 0x269e48: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x269e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x269e4c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x269e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x269e50: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x269e50u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x269e54: 0x246effff  addiu       $t6, $v1, -0x1
    ctx->pc = 0x269e54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x269e58: 0x5c00081  bltz        $t6, . + 4 + (0x81 << 2)
    ctx->pc = 0x269E58u;
    {
        const bool branch_taken_0x269e58 = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x269E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269E58u;
            // 0x269e5c: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e58) {
            ctx->pc = 0x26A060u;
            goto label_26a060;
        }
    }
    ctx->pc = 0x269E60u;
    // 0x269e60: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x269e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x269e64: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x269e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x269e68: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x269e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x269e6c: 0x835021  addu        $t2, $a0, $v1
    ctx->pc = 0x269e6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x269e70: 0x3c093400  lui         $t1, 0x3400
    ctx->pc = 0x269e70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)13312 << 16));
    // 0x269e74: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x269e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x269e78: 0x44893000  mtc1        $t1, $f6
    ctx->pc = 0x269e78u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x269e7c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x269e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x269e80: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x269e80u;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
    // 0x269e84: 0x3c09bf00  lui         $t1, 0xBF00
    ctx->pc = 0x269e84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)48896 << 16));
    // 0x269e88: 0x44893800  mtc1        $t1, $f7
    ctx->pc = 0x269e88u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x269e8c: 0x0  nop
    ctx->pc = 0x269e8cu;
    // NOP
label_269e90:
    // 0x269e90: 0xc5400fb0  lwc1        $f0, 0xFB0($t2)
    ctx->pc = 0x269e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269e94: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x269e94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x269e98: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x269e98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269e9c: 0x4500006c  bc1f        . + 4 + (0x6C << 2)
    ctx->pc = 0x269E9Cu;
    {
        const bool branch_taken_0x269e9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269E9Cu;
            // 0x269ea0: 0x254d0f70  addiu       $t5, $t2, 0xF70 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 3952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e9c) {
            ctx->pc = 0x26A050u;
            goto label_26a050;
        }
    }
    ctx->pc = 0x269EA4u;
    // 0x269ea4: 0x8ca90010  lw          $t1, 0x10($a1)
    ctx->pc = 0x269ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x269ea8: 0x252cffff  addiu       $t4, $t1, -0x1
    ctx->pc = 0x269ea8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x269eac: 0x19800068  blez        $t4, . + 4 + (0x68 << 2)
    ctx->pc = 0x269EACu;
    {
        const bool branch_taken_0x269eac = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x269EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269EACu;
            // 0x269eb0: 0xc4880  sll         $t1, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269eac) {
            ctx->pc = 0x26A050u;
            goto label_26a050;
        }
    }
    ctx->pc = 0x269EB4u;
    // 0x269eb4: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x269eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x269eb8: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x269eb8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x269ebc: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x269ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_269ec0:
    // 0x269ec0: 0xc52c0fb0  lwc1        $f12, 0xFB0($t1)
    ctx->pc = 0x269ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x269ec4: 0x460c6382  mul.s       $f14, $f12, $f12
    ctx->pc = 0x269ec4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x269ec8: 0x46037036  c.le.s      $f14, $f3
    ctx->pc = 0x269ec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269ecc: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
    ctx->pc = 0x269ECCu;
    {
        const bool branch_taken_0x269ecc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269ECCu;
            // 0x269ed0: 0x252b0f70  addiu       $t3, $t1, 0xF70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 3952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ecc) {
            ctx->pc = 0x26A040u;
            goto label_26a040;
        }
    }
    ctx->pc = 0x269ED4u;
    // 0x269ed4: 0xc5ab0004  lwc1        $f11, 0x4($t5)
    ctx->pc = 0x269ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x269ed8: 0xc56a0004  lwc1        $f10, 0x4($t3)
    ctx->pc = 0x269ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x269edc: 0xc5a90000  lwc1        $f9, 0x0($t5)
    ctx->pc = 0x269edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x269ee0: 0xc5680000  lwc1        $f8, 0x0($t3)
    ctx->pc = 0x269ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x269ee4: 0xc5a50008  lwc1        $f5, 0x8($t5)
    ctx->pc = 0x269ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x269ee8: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x269ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269eec: 0x460a5a82  mul.s       $f10, $f11, $f10
    ctx->pc = 0x269eecu;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x269ef0: 0x46084a02  mul.s       $f8, $f9, $f8
    ctx->pc = 0x269ef0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x269ef4: 0x460a4018  adda.s      $f8, $f10
    ctx->pc = 0x269ef4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
    // 0x269ef8: 0x46002a5c  madd.s      $f9, $f5, $f0
    ctx->pc = 0x269ef8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
    // 0x269efc: 0x46074834  c.lt.s      $f9, $f7
    ctx->pc = 0x269efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269f00: 0x4501004f  bc1t        . + 4 + (0x4F << 2)
    ctx->pc = 0x269F00u;
    {
        const bool branch_taken_0x269f00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269f00) {
            ctx->pc = 0x26A040u;
            goto label_26a040;
        }
    }
    ctx->pc = 0x269F08u;
    // 0x269f08: 0xc5aa0040  lwc1        $f10, 0x40($t5)
    ctx->pc = 0x269f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x269f0c: 0x46096002  mul.s       $f0, $f12, $f9
    ctx->pc = 0x269f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[9]);
    // 0x269f10: 0x46005141  sub.s       $f5, $f10, $f0
    ctx->pc = 0x269f10u;
    ctx->f[5] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x269f14: 0x46095002  mul.s       $f0, $f10, $f9
    ctx->pc = 0x269f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x269f18: 0x46062836  c.le.s      $f5, $f6
    ctx->pc = 0x269f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269f1c: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x269F1Cu;
    {
        const bool branch_taken_0x269f1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x269F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269F1Cu;
            // 0x269f20: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f1c) {
            ctx->pc = 0x269FE8u;
            goto label_269fe8;
        }
    }
    ctx->pc = 0x269F24u;
    // 0x269f24: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x269f24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269f28: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x269F28u;
    {
        const bool branch_taken_0x269f28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269f28) {
            ctx->pc = 0x269FB8u;
            goto label_269fb8;
        }
    }
    ctx->pc = 0x269F30u;
    // 0x269f30: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x269f30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269f34: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x269F34u;
    {
        const bool branch_taken_0x269f34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269f34) {
            ctx->pc = 0x269F70u;
            goto label_269f70;
        }
    }
    ctx->pc = 0x269F3Cu;
    // 0x269f3c: 0x0  nop
    ctx->pc = 0x269f3cu;
    // NOP
    // 0x269f40: 0x0  nop
    ctx->pc = 0x269f40u;
    // NOP
    // 0x269f44: 0x46050143  div.s       $f5, $f0, $f5
    ctx->pc = 0x269f44u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[5];
    // 0x269f48: 0x46092802  mul.s       $f0, $f5, $f9
    ctx->pc = 0x269f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x269f4c: 0x44844000  mtc1        $a0, $f8
    ctx->pc = 0x269f4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x269f50: 0x0  nop
    ctx->pc = 0x269f50u;
    // NOP
    // 0x269f54: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x269f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x269f58: 0x460052c3  div.s       $f11, $f10, $f0
    ctx->pc = 0x269f58u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[11] = copysignf(INFINITY, ctx->f[10] * 0.0f); } else ctx->f[11] = ctx->f[10] / ctx->f[0];
    // 0x269f5c: 0x46004343  div.s       $f13, $f8, $f0
    ctx->pc = 0x269f5cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[13] = ctx->f[8] / ctx->f[0];
    // 0x269f60: 0x0  nop
    ctx->pc = 0x269f60u;
    // NOP
    // 0x269f64: 0x460d2b02  mul.s       $f12, $f5, $f13
    ctx->pc = 0x269f64u;
    ctx->f[12] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
    // 0x269f68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x269F68u;
    {
        const bool branch_taken_0x269f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269F68u;
            // 0x269f6c: 0x460b2a82  mul.s       $f10, $f5, $f11 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f68) {
            ctx->pc = 0x269F98u;
            goto label_269f98;
        }
    }
    ctx->pc = 0x269F70u;
label_269f70:
    // 0x269f70: 0x0  nop
    ctx->pc = 0x269f70u;
    // NOP
    // 0x269f74: 0x46002943  div.s       $f5, $f5, $f0
    ctx->pc = 0x269f74u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[0];
    // 0x269f78: 0x46092802  mul.s       $f0, $f5, $f9
    ctx->pc = 0x269f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x269f7c: 0x44844000  mtc1        $a0, $f8
    ctx->pc = 0x269f7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x269f80: 0x0  nop
    ctx->pc = 0x269f80u;
    // NOP
    // 0x269f84: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x269f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x269f88: 0x46006283  div.s       $f10, $f12, $f0
    ctx->pc = 0x269f88u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[10] = ctx->f[12] / ctx->f[0];
    // 0x269f8c: 0x46004303  div.s       $f12, $f8, $f0
    ctx->pc = 0x269f8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[12] = ctx->f[8] / ctx->f[0];
    // 0x269f90: 0x460c2b42  mul.s       $f13, $f5, $f12
    ctx->pc = 0x269f90u;
    ctx->f[13] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x269f94: 0x460a2ac2  mul.s       $f11, $f5, $f10
    ctx->pc = 0x269f94u;
    ctx->f[11] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
label_269f98:
    // 0x269f98: 0x46094802  mul.s       $f0, $f9, $f9
    ctx->pc = 0x269f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x269f9c: 0x46004001  sub.s       $f0, $f8, $f0
    ctx->pc = 0x269f9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x269fa0: 0x46095142  mul.s       $f5, $f10, $f9
    ctx->pc = 0x269fa0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x269fa4: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x269fa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x269fa8: 0x46055ac0  add.s       $f11, $f11, $f5
    ctx->pc = 0x269fa8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[5]);
    // 0x269fac: 0x4600501a  mula.s      $f10, $f0
    ctx->pc = 0x269facu;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x269fb0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x269FB0u;
    {
        const bool branch_taken_0x269fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269FB0u;
            // 0x269fb4: 0x460b5b9c  madd.s      $f14, $f11, $f11 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[11]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fb0) {
            ctx->pc = 0x26A020u;
            goto label_26a020;
        }
    }
    ctx->pc = 0x269FB8u;
label_269fb8:
    // 0x269fb8: 0x46046036  c.le.s      $f12, $f4
    ctx->pc = 0x269fb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269fbc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x269FBCu;
    {
        const bool branch_taken_0x269fbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x269FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269FBCu;
            // 0x269fc0: 0x460a5382  mul.s       $f14, $f10, $f10 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fbc) {
            ctx->pc = 0x269FD0u;
            goto label_269fd0;
        }
    }
    ctx->pc = 0x269FC4u;
    // 0x269fc4: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x269fc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x269fc8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x269FC8u;
    {
        const bool branch_taken_0x269fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269FC8u;
            // 0x269fcc: 0x46002306  mov.s       $f12, $f4 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fc8) {
            ctx->pc = 0x26A020u;
            goto label_26a020;
        }
    }
    ctx->pc = 0x269FD0u;
label_269fd0:
    // 0x269fd0: 0x46004807  neg.s       $f0, $f9
    ctx->pc = 0x269fd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[9]);
    // 0x269fd4: 0x46090382  mul.s       $f14, $f0, $f9
    ctx->pc = 0x269fd4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x269fd8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x269fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x269fdc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x269FDCu;
    {
        const bool branch_taken_0x269fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269FDCu;
            // 0x269fe0: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fdc) {
            ctx->pc = 0x26A020u;
            goto label_26a020;
        }
    }
    ctx->pc = 0x269FE4u;
    // 0x269fe4: 0x0  nop
    ctx->pc = 0x269fe4u;
    // NOP
label_269fe8:
    // 0x269fe8: 0x46065036  c.le.s      $f10, $f6
    ctx->pc = 0x269fe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269fec: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x269FECu;
    {
        const bool branch_taken_0x269fec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269fec) {
            ctx->pc = 0x26A008u;
            goto label_26a008;
        }
    }
    ctx->pc = 0x269FF4u;
    // 0x269ff4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x269ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x269ff8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x269ff8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x269ffc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x269FFCu;
    {
        const bool branch_taken_0x269ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269ffc) {
            ctx->pc = 0x26A020u;
            goto label_26a020;
        }
    }
    ctx->pc = 0x26A004u;
    // 0x26a004: 0x0  nop
    ctx->pc = 0x26a004u;
    // NOP
label_26a008:
    // 0x26a008: 0x46004807  neg.s       $f0, $f9
    ctx->pc = 0x26a008u;
    ctx->f[0] = FPU_NEG_S(ctx->f[9]);
    // 0x26a00c: 0x46090382  mul.s       $f14, $f0, $f9
    ctx->pc = 0x26a00cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x26a010: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x26a010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26a014: 0x0  nop
    ctx->pc = 0x26a014u;
    // NOP
    // 0x26a018: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x26a018u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x26a01c: 0x0  nop
    ctx->pc = 0x26a01cu;
    // NOP
label_26a020:
    // 0x26a020: 0x46037034  c.lt.s      $f14, $f3
    ctx->pc = 0x26a020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a024: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x26A024u;
    {
        const bool branch_taken_0x26a024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a024) {
            ctx->pc = 0x26A040u;
            goto label_26a040;
        }
    }
    ctx->pc = 0x26A02Cu;
    // 0x26a02c: 0xaced0000  sw          $t5, 0x0($a3)
    ctx->pc = 0x26a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 13));
    // 0x26a030: 0x46006886  mov.s       $f2, $f13
    ctx->pc = 0x26a030u;
    ctx->f[2] = FPU_MOV_S(ctx->f[13]);
    // 0x26a034: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x26a034u;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x26a038: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x26a038u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x26a03c: 0x460070c6  mov.s       $f3, $f14
    ctx->pc = 0x26a03cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[14]);
label_26a040:
    // 0x26a040: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x26a040u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x26a044: 0x1d80ff9e  bgtz        $t4, . + 4 + (-0x62 << 2)
    ctx->pc = 0x26A044u;
    {
        const bool branch_taken_0x26a044 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x26A048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A044u;
            // 0x26a048: 0x2529ffb0  addiu       $t1, $t1, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a044) {
            ctx->pc = 0x269EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269ec0;
        }
    }
    ctx->pc = 0x26A04Cu;
    // 0x26a04c: 0x0  nop
    ctx->pc = 0x26a04cu;
    // NOP
label_26a050:
    // 0x26a050: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x26a050u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x26a054: 0x5c1ff8e  bgez        $t6, . + 4 + (-0x72 << 2)
    ctx->pc = 0x26A054u;
    {
        const bool branch_taken_0x26a054 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x26A058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A054u;
            // 0x26a058: 0x254affb0  addiu       $t2, $t2, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a054) {
            ctx->pc = 0x269E90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269e90;
        }
    }
    ctx->pc = 0x26A05Cu;
    // 0x26a05c: 0x0  nop
    ctx->pc = 0x26a05cu;
    // NOP
label_26a060:
    // 0x26a060: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x26a060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x26a064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26a064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a068: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x26a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26a06c: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x26a06cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x26a070: 0xe4c40000  swc1        $f4, 0x0($a2)
    ctx->pc = 0x26a070u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x26a074: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x26a074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26a078: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x26a078u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x26a07c: 0xe4c40004  swc1        $f4, 0x4($a2)
    ctx->pc = 0x26a07cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x26a080: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x26a080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26a084: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x26a084u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x26a088: 0xe4c40008  swc1        $f4, 0x8($a2)
    ctx->pc = 0x26a088u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x26a08c: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x26a08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26a090: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x26a090u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x26a094: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x26a094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x26a098: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x26a098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x26a09c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x26a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a0a0: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x26a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26a0a4: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x26a0a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x26a0a8: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x26a0a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x26a0ac: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x26a0acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x26a0b0: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x26a0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26a0b4: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x26a0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a0b8: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x26a0b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x26a0bc: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x26a0bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x26a0c0: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x26a0c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x26a0c4: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x26a0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26a0c8: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x26a0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a0cc: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x26a0ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x26a0d0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x26a0d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x26a0d4: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x26a0d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x26a0d8: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x26a0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26a0dc: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x26a0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a0e0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x26a0e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x26a0e4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x26a0e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x26a0e8: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x26a0e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x26a0ec: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x26a0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a0f0: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x26a0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a0f4: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x26a0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26a0f8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x26a0f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26a0fc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x26a0fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26a100: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x26a100u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x26a104: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x26a104u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x26a108: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x26a108u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a10c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x26A10Cu;
    {
        const bool branch_taken_0x26a10c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A10Cu;
            // 0x26a110: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a10c) {
            ctx->pc = 0x26A130u;
            goto label_26a130;
        }
    }
    ctx->pc = 0x26A114u;
    // 0x26a114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26a114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a118: 0x0  nop
    ctx->pc = 0x26a118u;
    // NOP
    // 0x26a11c: 0x46010016  rsqrt.s     $f0, $f0, $f1
    ctx->pc = 0x26a11cu;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x26a120: 0x0  nop
    ctx->pc = 0x26a120u;
    // NOP
    // 0x26a124: 0x0  nop
    ctx->pc = 0x26a124u;
    // NOP
    // 0x26a128: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x26A128u;
    {
        const bool branch_taken_0x26a128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a128) {
            ctx->pc = 0x26A130u;
            goto label_26a130;
        }
    }
    ctx->pc = 0x26A130u;
label_26a130:
    // 0x26a130: 0x24c3000c  addiu       $v1, $a2, 0xC
    ctx->pc = 0x26a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x26a134: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x26a134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a138: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26a138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a13c: 0x0  nop
    ctx->pc = 0x26a13cu;
    // NOP
    // 0x26a140: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x26a140u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a144: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26a144u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a148: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x26a148u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x26a14c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x26a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a150: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26a150u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a154: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x26a154u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x26a158: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x26a158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a15c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26a15cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a160: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x26a160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x26a164: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x26a164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a168: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26a168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a16c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x26A16Cu;
    {
        const bool branch_taken_0x26a16c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A16Cu;
            // 0x26a170: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a16c) {
            ctx->pc = 0x26A180u;
            goto label_26a180;
        }
    }
    ctx->pc = 0x26A174u;
    // 0x26a174: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26A174u;
    {
        const bool branch_taken_0x26a174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A174u;
            // 0x26a178: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a174) {
            ctx->pc = 0x26A180u;
            goto label_26a180;
        }
    }
    ctx->pc = 0x26A17Cu;
    // 0x26a17c: 0x0  nop
    ctx->pc = 0x26a17cu;
    // NOP
label_26a180:
    // 0x26a180: 0x0  nop
    ctx->pc = 0x26a180u;
    // NOP
    // 0x26a184: 0x46030004  c1          0x30004
    ctx->pc = 0x26a184u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x26a188: 0x0  nop
    ctx->pc = 0x26a188u;
    // NOP
    // 0x26a18c: 0x0  nop
    ctx->pc = 0x26a18cu;
    // NOP
    // 0x26a190: 0x3e00008  jr          $ra
    ctx->pc = 0x26A190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A190u;
            // 0x26a194: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A198u;
    // 0x26a198: 0x0  nop
    ctx->pc = 0x26a198u;
    // NOP
    // 0x26a19c: 0x0  nop
    ctx->pc = 0x26a19cu;
    // NOP
}
