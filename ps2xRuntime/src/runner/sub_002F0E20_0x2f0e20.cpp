#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0E20
// Address: 0x2f0e20 - 0x2f1260
void sub_002F0E20_0x2f0e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0E20_0x2f0e20");
#endif

    switch (ctx->pc) {
        case 0x2f0f08u: goto label_2f0f08;
        case 0x2f0f80u: goto label_2f0f80;
        case 0x2f0fc0u: goto label_2f0fc0;
        case 0x2f1160u: goto label_2f1160;
        case 0x2f11f8u: goto label_2f11f8;
        default: break;
    }

    ctx->pc = 0x2f0e20u;

label_2f0e20:
    // 0x2f0e20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f0e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f0e24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f0e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f0e28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f0e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2f0e2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f0e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f0e30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f0e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f0e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f0e38: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2f0e38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2f0e3c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2f0e3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f0e40: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f0e40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f0e44: 0x12400060  beqz        $s2, . + 4 + (0x60 << 2)
    ctx->pc = 0x2F0E44u;
    {
        const bool branch_taken_0x2f0e44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0E44u;
            // 0x2f0e48: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e44) {
            ctx->pc = 0x2F0FC8u;
            goto label_2f0fc8;
        }
    }
    ctx->pc = 0x2F0E4Cu;
    // 0x2f0e4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2f0e50: 0x8c461cf0  lw          $a2, 0x1CF0($v0)
    ctx->pc = 0x2f0e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7408)));
    // 0x2f0e54: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0E54u;
    {
        const bool branch_taken_0x2f0e54 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x2f0e54) {
            ctx->pc = 0x2F0E58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0E54u;
            // 0x2f0e58: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0E68u;
            goto label_2f0e68;
        }
    }
    ctx->pc = 0x2F0E5Cu;
    // 0x2f0e5c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2f0e5cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0e60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F0E60u;
    {
        const bool branch_taken_0x2f0e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0E60u;
            // 0x2f0e64: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e60) {
            ctx->pc = 0x2F0E80u;
            goto label_2f0e80;
        }
    }
    ctx->pc = 0x2F0E68u;
label_2f0e68:
    // 0x2f0e68: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2f0e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2f0e6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f0e70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0e70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0e74: 0x0  nop
    ctx->pc = 0x2f0e74u;
    // NOP
    // 0x2f0e78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f0e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f0e7c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f0e7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f0e80:
    // 0x2f0e80: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0E80u;
    {
        const bool branch_taken_0x2f0e80 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x2f0e80) {
            ctx->pc = 0x2F0E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0E80u;
            // 0x2f0e84: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0E94u;
            goto label_2f0e94;
        }
    }
    ctx->pc = 0x2F0E88u;
    // 0x2f0e88: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2f0e88u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0e8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F0E8Cu;
    {
        const bool branch_taken_0x2f0e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0E8Cu;
            // 0x2f0e90: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e8c) {
            ctx->pc = 0x2F0EACu;
            goto label_2f0eac;
        }
    }
    ctx->pc = 0x2F0E94u;
label_2f0e94:
    // 0x2f0e94: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2f0e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2f0e98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f0e9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0e9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0ea0: 0x0  nop
    ctx->pc = 0x2f0ea0u;
    // NOP
    // 0x2f0ea4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0ea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0ea8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f0ea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f0eac:
    // 0x2f0eac: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2f0eacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2f0eb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f0eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2f0eb4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2f0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f0eb8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f0eb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0ebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0ec0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0EC0u;
    {
        const bool branch_taken_0x2f0ec0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F0EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0EC0u;
            // 0x2f0ec4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ec0) {
            ctx->pc = 0x2F0ED4u;
            goto label_2f0ed4;
        }
    }
    ctx->pc = 0x2F0EC8u;
    // 0x2f0ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0ecc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F0ECCu;
    {
        const bool branch_taken_0x2f0ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0ECCu;
            // 0x2f0ed0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ecc) {
            ctx->pc = 0x2F0EF0u;
            goto label_2f0ef0;
        }
    }
    ctx->pc = 0x2F0ED4u;
label_2f0ed4:
    // 0x2f0ed4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2f0ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2f0ed8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f0ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f0edc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f0ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0ee4: 0x0  nop
    ctx->pc = 0x2f0ee4u;
    // NOP
    // 0x2f0ee8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0eec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f0eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f0ef0:
    // 0x2f0ef0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2f0ef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0ef4: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x2F0EF4u;
    {
        const bool branch_taken_0x2f0ef4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0ef4) {
            ctx->pc = 0x2F0F60u;
            goto label_2f0f60;
        }
    }
    ctx->pc = 0x2F0EFCu;
    // 0x2f0efc: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x2f0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f0f00: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2f0f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2f0f04: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f0f04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f0f08:
    // 0x2f0f08: 0x4820003  bltzl       $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0F08u;
    {
        const bool branch_taken_0x2f0f08 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2f0f08) {
            ctx->pc = 0x2F0F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F08u;
            // 0x2f0f0c: 0x41042  srl         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0F18u;
            goto label_2f0f18;
        }
    }
    ctx->pc = 0x2F0F10u;
    // 0x2f0f10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0F10u;
    {
        const bool branch_taken_0x2f0f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F10u;
            // 0x2f0f14: 0x46800820  cvt.s.w     $f0, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f10) {
            ctx->pc = 0x2F0F2Cu;
            goto label_2f0f2c;
        }
    }
    ctx->pc = 0x2F0F18u;
label_2f0f18:
    // 0x2f0f18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f0f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f0f1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0f20: 0x0  nop
    ctx->pc = 0x2f0f20u;
    // NOP
    // 0x2f0f24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0f28: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f0f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f0f2c:
    // 0x2f0f2c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0F2Cu;
    {
        const bool branch_taken_0x2f0f2c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2F0F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F2Cu;
            // 0x2f0f30: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f2c) {
            ctx->pc = 0x2F0F3Cu;
            goto label_2f0f3c;
        }
    }
    ctx->pc = 0x2F0F34u;
    // 0x2f0f34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F0F34u;
    {
        const bool branch_taken_0x2f0f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F34u;
            // 0x2f0f38: 0x46800820  cvt.s.w     $f0, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f34) {
            ctx->pc = 0x2F0F54u;
            goto label_2f0f54;
        }
    }
    ctx->pc = 0x2F0F3Cu;
label_2f0f3c:
    // 0x2f0f3c: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x2f0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2f0f40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f0f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f0f44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0f48: 0x0  nop
    ctx->pc = 0x2f0f48u;
    // NOP
    // 0x2f0f4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0f50: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f0f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f0f54:
    // 0x2f0f54: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2f0f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0f58: 0x4500ffeb  bc1f        . + 4 + (-0x15 << 2)
    ctx->pc = 0x2F0F58u;
    {
        const bool branch_taken_0x2f0f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0f58) {
            ctx->pc = 0x2F0F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0f08;
        }
    }
    ctx->pc = 0x2F0F60u;
label_2f0f60:
    // 0x2f0f60: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2f0f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f0f64: 0x0  nop
    ctx->pc = 0x2f0f64u;
    // NOP
    // 0x2f0f68: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x2f0f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0f6c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2F0F6Cu;
    {
        const bool branch_taken_0x2f0f6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0f6c) {
            ctx->pc = 0x2F0FB8u;
            goto label_2f0fb8;
        }
    }
    ctx->pc = 0x2F0F74u;
    // 0x2f0f74: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x2f0f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f0f78: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2f0f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2f0f7c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f0f7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f0f80:
    // 0x2f0f80: 0x4820003  bltzl       $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0F80u;
    {
        const bool branch_taken_0x2f0f80 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2f0f80) {
            ctx->pc = 0x2F0F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F80u;
            // 0x2f0f84: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0F90u;
            goto label_2f0f90;
        }
    }
    ctx->pc = 0x2F0F88u;
    // 0x2f0f88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0F88u;
    {
        const bool branch_taken_0x2f0f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F88u;
            // 0x2f0f8c: 0x46800820  cvt.s.w     $f0, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f88) {
            ctx->pc = 0x2F0FA4u;
            goto label_2f0fa4;
        }
    }
    ctx->pc = 0x2F0F90u;
label_2f0f90:
    // 0x2f0f90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f0f94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0f94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0f98: 0x0  nop
    ctx->pc = 0x2f0f98u;
    // NOP
    // 0x2f0f9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0f9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0fa0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f0fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f0fa4:
    // 0x2f0fa4: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2f0fa4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2f0fa8: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x2f0fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0fac: 0x4501fff4  bc1t        . + 4 + (-0xC << 2)
    ctx->pc = 0x2F0FACu;
    {
        const bool branch_taken_0x2f0fac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0fac) {
            ctx->pc = 0x2F0F80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0f80;
        }
    }
    ctx->pc = 0x2F0FB4u;
    // 0x2f0fb4: 0x0  nop
    ctx->pc = 0x2f0fb4u;
    // NOP
label_2f0fb8:
    // 0x2f0fb8: 0xc0bc388  jal         func_2F0E20
    ctx->pc = 0x2F0FB8u;
    SET_GPR_U32(ctx, 31, 0x2F0FC0u);
    ctx->pc = 0x2F0FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FB8u;
            // 0x2f0fbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0E20u;
    goto label_2f0e20;
    ctx->pc = 0x2F0FC0u;
label_2f0fc0:
    // 0x2f0fc0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x2F0FC0u;
    {
        const bool branch_taken_0x2f0fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FC0u;
            // 0x2f0fc4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0fc0) {
            ctx->pc = 0x2F1238u;
            goto label_2f1238;
        }
    }
    ctx->pc = 0x2F0FC8u;
label_2f0fc8:
    // 0x2f0fc8: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x2f0fc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f0fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0fd0: 0x5622004b  bnel        $s1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2F0FD0u;
    {
        const bool branch_taken_0x2f0fd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f0fd0) {
            ctx->pc = 0x2F0FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FD0u;
            // 0x2f0fd4: 0x2518021  addu        $s0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1100u;
            goto label_2f1100;
        }
    }
    ctx->pc = 0x2F0FD8u;
    // 0x2f0fd8: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0FD8u;
    {
        const bool branch_taken_0x2f0fd8 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x2f0fd8) {
            ctx->pc = 0x2F0FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FD8u;
            // 0x2f0fdc: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0FECu;
            goto label_2f0fec;
        }
    }
    ctx->pc = 0x2F0FE0u;
    // 0x2f0fe0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2f0fe0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0fe4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F0FE4u;
    {
        const bool branch_taken_0x2f0fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FE4u;
            // 0x2f0fe8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0fe4) {
            ctx->pc = 0x2F1004u;
            goto label_2f1004;
        }
    }
    ctx->pc = 0x2F0FECu;
label_2f0fec:
    // 0x2f0fec: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2f0fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2f0ff0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f0ff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0ff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0ff8: 0x0  nop
    ctx->pc = 0x2f0ff8u;
    // NOP
    // 0x2f0ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f1000: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f1000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f1004:
    // 0x2f1004: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2f1004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1008: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2F1008u;
    {
        const bool branch_taken_0x2f1008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1008) {
            ctx->pc = 0x2F105Cu;
            goto label_2f105c;
        }
    }
    ctx->pc = 0x2F1010u;
    // 0x2f1010: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2f1010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f1014: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1014u;
    {
        const bool branch_taken_0x2f1014 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f1014) {
            ctx->pc = 0x2F1018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1014u;
            // 0x2f1018: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1028u;
            goto label_2f1028;
        }
    }
    ctx->pc = 0x2F101Cu;
    // 0x2f101c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f101cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1020: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F1020u;
    {
        const bool branch_taken_0x2f1020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1020u;
            // 0x2f1024: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1020) {
            ctx->pc = 0x2F1040u;
            goto label_2f1040;
        }
    }
    ctx->pc = 0x2F1028u;
label_2f1028:
    // 0x2f1028: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f1028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f102c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f102cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f1030: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f1030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1034: 0x0  nop
    ctx->pc = 0x2f1034u;
    // NOP
    // 0x2f1038: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f103c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f103cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f1040:
    // 0x2f1040: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f1040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1044: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1044u;
    {
        const bool branch_taken_0x2f1044 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1044) {
            ctx->pc = 0x2F105Cu;
            goto label_2f105c;
        }
    }
    ctx->pc = 0x2F104Cu;
    // 0x2f104c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f104cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f1050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1054: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2F1054u;
    {
        const bool branch_taken_0x2f1054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1054) {
            ctx->pc = 0x2F1234u;
            goto label_2f1234;
        }
    }
    ctx->pc = 0x2F105Cu;
label_2f105c:
    // 0x2f105c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f105cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2f1060: 0xc4401d00  lwc1        $f0, 0x1D00($v0)
    ctx->pc = 0x2f1060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1064: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2f1064u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1068: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2F1068u;
    {
        const bool branch_taken_0x2f1068 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1068) {
            ctx->pc = 0x2F10F4u;
            goto label_2f10f4;
        }
    }
    ctx->pc = 0x2F1070u;
    // 0x2f1070: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1070u;
    {
        const bool branch_taken_0x2f1070 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x2f1070) {
            ctx->pc = 0x2F1074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1070u;
            // 0x2f1074: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1084u;
            goto label_2f1084;
        }
    }
    ctx->pc = 0x2F1078u;
    // 0x2f1078: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2f1078u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f107c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F107Cu;
    {
        const bool branch_taken_0x2f107c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F107Cu;
            // 0x2f1080: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f107c) {
            ctx->pc = 0x2F109Cu;
            goto label_2f109c;
        }
    }
    ctx->pc = 0x2F1084u;
label_2f1084:
    // 0x2f1084: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2f1084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2f1088: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f1088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f108c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f108cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1090: 0x0  nop
    ctx->pc = 0x2f1090u;
    // NOP
    // 0x2f1094: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f1098: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f1098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f109c:
    // 0x2f109c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2f109cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f10a0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2F10A0u;
    {
        const bool branch_taken_0x2f10a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f10a0) {
            ctx->pc = 0x2F10F4u;
            goto label_2f10f4;
        }
    }
    ctx->pc = 0x2F10A8u;
    // 0x2f10a8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2f10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f10ac: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F10ACu;
    {
        const bool branch_taken_0x2f10ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f10ac) {
            ctx->pc = 0x2F10B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F10ACu;
            // 0x2f10b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F10C0u;
            goto label_2f10c0;
        }
    }
    ctx->pc = 0x2F10B4u;
    // 0x2f10b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f10b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f10b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F10B8u;
    {
        const bool branch_taken_0x2f10b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F10BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F10B8u;
            // 0x2f10bc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10b8) {
            ctx->pc = 0x2F10D8u;
            goto label_2f10d8;
        }
    }
    ctx->pc = 0x2F10C0u;
label_2f10c0:
    // 0x2f10c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f10c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f10c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f10c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f10c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f10c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f10cc: 0x0  nop
    ctx->pc = 0x2f10ccu;
    // NOP
    // 0x2f10d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f10d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f10d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f10d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f10d8:
    // 0x2f10d8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2f10d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f10dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F10DCu;
    {
        const bool branch_taken_0x2f10dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f10dc) {
            ctx->pc = 0x2F10F4u;
            goto label_2f10f4;
        }
    }
    ctx->pc = 0x2F10E4u;
    // 0x2f10e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f10e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f10e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f10ec: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2F10ECu;
    {
        const bool branch_taken_0x2f10ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f10ec) {
            ctx->pc = 0x2F1234u;
            goto label_2f1234;
        }
    }
    ctx->pc = 0x2F10F4u;
label_2f10f4:
    // 0x2f10f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f10f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f10f8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2F10F8u;
    {
        const bool branch_taken_0x2f10f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f10f8) {
            ctx->pc = 0x2F1234u;
            goto label_2f1234;
        }
    }
    ctx->pc = 0x2F1100u;
label_2f1100:
    // 0x2f1100: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2f1100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2f1104: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x2f1104u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2f1108: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1108u;
    {
        const bool branch_taken_0x2f1108 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f1108) {
            ctx->pc = 0x2F110Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1108u;
            // 0x2f110c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F111Cu;
            goto label_2f111c;
        }
    }
    ctx->pc = 0x2F1110u;
    // 0x2f1110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1114: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F1114u;
    {
        const bool branch_taken_0x2f1114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1114u;
            // 0x2f1118: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1114) {
            ctx->pc = 0x2F1134u;
            goto label_2f1134;
        }
    }
    ctx->pc = 0x2F111Cu;
label_2f111c:
    // 0x2f111c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f111cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f1120: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f1120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f1124: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f1124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1128: 0x0  nop
    ctx->pc = 0x2f1128u;
    // NOP
    // 0x2f112c: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x2f112cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x2f1130: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x2f1130u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_2f1134:
    // 0x2f1134: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2f1134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2f1138: 0x0  nop
    ctx->pc = 0x2f1138u;
    // NOP
    // 0x2f113c: 0x4615b032  c.eq.s      $f22, $f21
    ctx->pc = 0x2f113cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1140: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1140u;
    {
        const bool branch_taken_0x2f1140 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1140) {
            ctx->pc = 0x2F1144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1140u;
            // 0x2f1144: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1150u;
            goto label_2f1150;
        }
    }
    ctx->pc = 0x2F1148u;
    // 0x2f1148: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2F1148u;
    {
        const bool branch_taken_0x2f1148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F114Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1148u;
            // 0x2f114c: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1148) {
            ctx->pc = 0x2F119Cu;
            goto label_2f119c;
        }
    }
    ctx->pc = 0x2F1150u;
label_2f1150:
    // 0x2f1150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1154: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2f1154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f1158: 0xc0bc388  jal         func_2F0E20
    ctx->pc = 0x2F1158u;
    SET_GPR_U32(ctx, 31, 0x2F1160u);
    ctx->pc = 0x2F115Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1158u;
            // 0x2f115c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0E20u;
    goto label_2f0e20;
    ctx->pc = 0x2F1160u;
label_2f1160:
    // 0x2f1160: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1160u;
    {
        const bool branch_taken_0x2f1160 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x2f1160) {
            ctx->pc = 0x2F1164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1160u;
            // 0x2f1164: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1174u;
            goto label_2f1174;
        }
    }
    ctx->pc = 0x2F1168u;
    // 0x2f1168: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x2f1168u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f116c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F116Cu;
    {
        const bool branch_taken_0x2f116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F116Cu;
            // 0x2f1170: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f116c) {
            ctx->pc = 0x2F118Cu;
            goto label_2f118c;
        }
    }
    ctx->pc = 0x2F1174u;
label_2f1174:
    // 0x2f1174: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2f1174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2f1178: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f1178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f117c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f117cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1180: 0x0  nop
    ctx->pc = 0x2f1180u;
    // NOP
    // 0x2f1184: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f1184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f1188: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f1188u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f118c:
    // 0x2f118c: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x2f118cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x2f1190: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1194: 0x46150583  div.s       $f22, $f0, $f21
    ctx->pc = 0x2f1194u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[22] = ctx->f[0] / ctx->f[21];
    // 0x2f1198: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2f1198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f119c:
    // 0x2f119c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2f119cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f11a0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F11A0u;
    {
        const bool branch_taken_0x2f11a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f11a0) {
            ctx->pc = 0x2F11A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F11A0u;
            // 0x2f11a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F11B4u;
            goto label_2f11b4;
        }
    }
    ctx->pc = 0x2F11A8u;
    // 0x2f11a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f11a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f11ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F11ACu;
    {
        const bool branch_taken_0x2f11ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F11B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F11ACu;
            // 0x2f11b0: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11ac) {
            ctx->pc = 0x2F11CCu;
            goto label_2f11cc;
        }
    }
    ctx->pc = 0x2F11B4u;
label_2f11b4:
    // 0x2f11b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f11b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f11b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f11b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f11bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f11bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f11c0: 0x0  nop
    ctx->pc = 0x2f11c0u;
    // NOP
    // 0x2f11c4: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x2f11c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x2f11c8: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x2f11c8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_2f11cc:
    // 0x2f11cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f11ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f11d0: 0x0  nop
    ctx->pc = 0x2f11d0u;
    // NOP
    // 0x2f11d4: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2f11d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f11d8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2F11D8u;
    {
        const bool branch_taken_0x2f11d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f11d8) {
            ctx->pc = 0x2F11DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F11D8u;
            // 0x2f11dc: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F11E8u;
            goto label_2f11e8;
        }
    }
    ctx->pc = 0x2F11E0u;
    // 0x2f11e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2F11E0u;
    {
        const bool branch_taken_0x2f11e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F11E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F11E0u;
            // 0x2f11e4: 0x4600b000  add.s       $f0, $f22, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11e0) {
            ctx->pc = 0x2F1234u;
            goto label_2f1234;
        }
    }
    ctx->pc = 0x2F11E8u;
label_2f11e8:
    // 0x2f11e8: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x2f11e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f11ec: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2f11ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f11f0: 0xc0bc388  jal         func_2F0E20
    ctx->pc = 0x2F11F0u;
    SET_GPR_U32(ctx, 31, 0x2F11F8u);
    ctx->pc = 0x2F11F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F11F0u;
            // 0x2f11f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0E20u;
    goto label_2f0e20;
    ctx->pc = 0x2F11F8u;
label_2f11f8:
    // 0x2f11f8: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F11F8u;
    {
        const bool branch_taken_0x2f11f8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2f11f8) {
            ctx->pc = 0x2F11FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F11F8u;
            // 0x2f11fc: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F120Cu;
            goto label_2f120c;
        }
    }
    ctx->pc = 0x2F1200u;
    // 0x2f1200: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2f1200u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1204: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F1204u;
    {
        const bool branch_taken_0x2f1204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1204u;
            // 0x2f1208: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1204) {
            ctx->pc = 0x2F1224u;
            goto label_2f1224;
        }
    }
    ctx->pc = 0x2F120Cu;
label_2f120c:
    // 0x2f120c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2f120cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2f1210: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f1210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f1214: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f1214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1218: 0x0  nop
    ctx->pc = 0x2f1218u;
    // NOP
    // 0x2f121c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f121cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f1220: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f1220u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f1224:
    // 0x2f1224: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x2f1224u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x2f1228: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f122c: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x2f122cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x2f1230: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x2f1230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_2f1234:
    // 0x2f1234: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f1234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f1238:
    // 0x2f1238: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2f1238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2f123c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f123cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1240: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2f1240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f1244: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f1244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1248: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f1248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f124c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f124cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1250: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1250u;
            // 0x2f1254: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1258u;
    // 0x2f1258: 0x0  nop
    ctx->pc = 0x2f1258u;
    // NOP
    // 0x2f125c: 0x0  nop
    ctx->pc = 0x2f125cu;
    // NOP
}
