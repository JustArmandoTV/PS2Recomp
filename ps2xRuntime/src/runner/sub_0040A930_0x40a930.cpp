#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040A930
// Address: 0x40a930 - 0x40aaf0
void sub_0040A930_0x40a930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A930_0x40a930");
#endif

    switch (ctx->pc) {
        case 0x40a998u: goto label_40a998;
        case 0x40a9a0u: goto label_40a9a0;
        case 0x40a9c0u: goto label_40a9c0;
        case 0x40a9dcu: goto label_40a9dc;
        case 0x40aa90u: goto label_40aa90;
        case 0x40aa98u: goto label_40aa98;
        case 0x40aab8u: goto label_40aab8;
        default: break;
    }

    ctx->pc = 0x40a930u;

    // 0x40a930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40a930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40a934: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x40a934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x40a938: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x40a938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x40a93c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40a93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40a940: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x40a940u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x40a944: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x40a944u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x40a948: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x40a948u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x40a94c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x40a94cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x40a950: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x40a950u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x40a954: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x40a954u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x40a958: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x40a958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x40a95c: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x40a95cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x40a960: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x40a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x40a964: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x40a964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x40a968: 0x8c6300c8  lw          $v1, 0xC8($v1)
    ctx->pc = 0x40a968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x40a96c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x40a96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40a970: 0xc4610dbc  lwc1        $f1, 0xDBC($v1)
    ctx->pc = 0x40a970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40a974: 0x8c620da0  lw          $v0, 0xDA0($v1)
    ctx->pc = 0x40a974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
    // 0x40a978: 0xc4770dc0  lwc1        $f23, 0xDC0($v1)
    ctx->pc = 0x40a978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x40a97c: 0xc4780de4  lwc1        $f24, 0xDE4($v1)
    ctx->pc = 0x40a97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x40a980: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x40a980u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40a984: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40a984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x40a988: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x40a988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x40a98c: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x40a98cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x40a990: 0xc049514  jal         func_125450
    ctx->pc = 0x40A990u;
    SET_GPR_U32(ctx, 31, 0x40A998u);
    ctx->pc = 0x40A994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40A990u;
            // 0x40a994: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A998u; }
        if (ctx->pc != 0x40A998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A998u; }
        if (ctx->pc != 0x40A998u) { return; }
    }
    ctx->pc = 0x40A998u;
label_40a998:
    // 0x40a998: 0xc0474b6  jal         func_11D2D8
    ctx->pc = 0x40A998u;
    SET_GPR_U32(ctx, 31, 0x40A9A0u);
    ctx->pc = 0x40A99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40A998u;
            // 0x40a99c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A9A0u; }
        if (ctx->pc != 0x40A9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A9A0u; }
        if (ctx->pc != 0x40A9A0u) { return; }
    }
    ctx->pc = 0x40A9A0u;
label_40a9a0:
    // 0x40a9a0: 0x3c043f1a  lui         $a0, 0x3F1A
    ctx->pc = 0x40a9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16154 << 16));
    // 0x40a9a4: 0x3403e000  ori         $v1, $zero, 0xE000
    ctx->pc = 0x40a9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x40a9a8: 0x348436e2  ori         $a0, $a0, 0x36E2
    ctx->pc = 0x40a9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14050);
    // 0x40a9ac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x40a9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x40a9b0: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x40a9b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x40a9b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40a9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a9b8: 0xc040200  jal         func_100800
    ctx->pc = 0x40A9B8u;
    SET_GPR_U32(ctx, 31, 0x40A9C0u);
    ctx->pc = 0x40A9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40A9B8u;
            // 0x40a9bc: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100800u;
    if (runtime->hasFunction(0x100800u)) {
        auto targetFn = runtime->lookupFunction(0x100800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A9C0u; }
        if (ctx->pc != 0x40A9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100800_0x100800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A9C0u; }
        if (ctx->pc != 0x40A9C0u) { return; }
    }
    ctx->pc = 0x40A9C0u;
label_40a9c0:
    // 0x40a9c0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x40A9C0u;
    {
        const bool branch_taken_0x40a9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40a9c0) {
            ctx->pc = 0x40AAC0u;
            goto label_40aac0;
        }
    }
    ctx->pc = 0x40A9C8u;
    // 0x40a9c8: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x40a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x40a9cc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x40a9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x40a9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40a9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40a9d4: 0x0  nop
    ctx->pc = 0x40a9d4u;
    // NOP
    // 0x40a9d8: 0x46150502  mul.s       $f20, $f0, $f21
    ctx->pc = 0x40a9d8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_40a9dc:
    // 0x40a9dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40a9dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40a9e0: 0x0  nop
    ctx->pc = 0x40a9e0u;
    // NOP
    // 0x40a9e4: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x40a9e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40a9e8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x40A9E8u;
    {
        const bool branch_taken_0x40a9e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a9e8) {
            ctx->pc = 0x40AA08u;
            goto label_40aa08;
        }
    }
    ctx->pc = 0x40A9F0u;
    // 0x40a9f0: 0x4614bdc1  sub.s       $f23, $f23, $f20
    ctx->pc = 0x40a9f0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
    // 0x40a9f4: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x40a9f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40a9f8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x40A9F8u;
    {
        const bool branch_taken_0x40a9f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a9f8) {
            ctx->pc = 0x40AA28u;
            goto label_40aa28;
        }
    }
    ctx->pc = 0x40AA00u;
    // 0x40aa00: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x40AA00u;
    {
        const bool branch_taken_0x40aa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AA00u;
            // 0x40aa04: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40aa00) {
            ctx->pc = 0x40AA28u;
            goto label_40aa28;
        }
    }
    ctx->pc = 0x40AA08u;
label_40aa08:
    // 0x40aa08: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x40aa08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40aa0c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x40AA0Cu;
    {
        const bool branch_taken_0x40aa0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40aa0c) {
            ctx->pc = 0x40AA28u;
            goto label_40aa28;
        }
    }
    ctx->pc = 0x40AA14u;
    // 0x40aa14: 0x4614bdc0  add.s       $f23, $f23, $f20
    ctx->pc = 0x40aa14u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
    // 0x40aa18: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x40aa18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40aa1c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x40AA1Cu;
    {
        const bool branch_taken_0x40aa1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40aa1c) {
            ctx->pc = 0x40AA28u;
            goto label_40aa28;
        }
    }
    ctx->pc = 0x40AA24u;
    // 0x40aa24: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x40aa24u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_40aa28:
    // 0x40aa28: 0x3c023c64  lui         $v0, 0x3C64
    ctx->pc = 0x40aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15460 << 16));
    // 0x40aa2c: 0x3443c388  ori         $v1, $v0, 0xC388
    ctx->pc = 0x40aa2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50056);
    // 0x40aa30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40aa30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40aa34: 0x3c023f1a  lui         $v0, 0x3F1A
    ctx->pc = 0x40aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16154 << 16));
    // 0x40aa38: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x40aa38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x40aa3c: 0x344212f7  ori         $v0, $v0, 0x12F7
    ctx->pc = 0x40aa3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4855);
    // 0x40aa40: 0x4600c842  mul.s       $f1, $f25, $f0
    ctx->pc = 0x40aa40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x40aa44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40aa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40aa48: 0x0  nop
    ctx->pc = 0x40aa48u;
    // NOP
    // 0x40aa4c: 0x4600c036  c.le.s      $f24, $f0
    ctx->pc = 0x40aa4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40aa50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40aa50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40aa54: 0x0  nop
    ctx->pc = 0x40aa54u;
    // NOP
    // 0x40aa58: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x40aa58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x40aa5c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x40AA5Cu;
    {
        const bool branch_taken_0x40aa5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40AA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AA5Cu;
            // 0x40aa60: 0x4601ad9c  madd.s      $f22, $f21, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40aa5c) {
            ctx->pc = 0x40AA88u;
            goto label_40aa88;
        }
    }
    ctx->pc = 0x40AA64u;
    // 0x40aa64: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x40AA64u;
    {
        const bool branch_taken_0x40aa64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x40aa64) {
            ctx->pc = 0x40AA88u;
            goto label_40aa88;
        }
    }
    ctx->pc = 0x40AA6Cu;
    // 0x40aa6c: 0x3c02ba72  lui         $v0, 0xBA72
    ctx->pc = 0x40aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47730 << 16));
    // 0x40aa70: 0x46180018  adda.s      $f0, $f24
    ctx->pc = 0x40aa70u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x40aa74: 0x3442b9d6  ori         $v0, $v0, 0xB9D6
    ctx->pc = 0x40aa74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47574);
    // 0x40aa78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40aa78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40aa7c: 0x0  nop
    ctx->pc = 0x40aa7cu;
    // NOP
    // 0x40aa80: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x40aa80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x40aa84: 0x4600be1d  msub.s      $f24, $f23, $f0
    ctx->pc = 0x40aa84u;
    ctx->f[24] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[0]));
label_40aa88:
    // 0x40aa88: 0xc049514  jal         func_125450
    ctx->pc = 0x40AA88u;
    SET_GPR_U32(ctx, 31, 0x40AA90u);
    ctx->pc = 0x40AA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40AA88u;
            // 0x40aa8c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40AA90u; }
        if (ctx->pc != 0x40AA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40AA90u; }
        if (ctx->pc != 0x40AA90u) { return; }
    }
    ctx->pc = 0x40AA90u;
label_40aa90:
    // 0x40aa90: 0xc0474b6  jal         func_11D2D8
    ctx->pc = 0x40AA90u;
    SET_GPR_U32(ctx, 31, 0x40AA98u);
    ctx->pc = 0x40AA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40AA90u;
            // 0x40aa94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40AA98u; }
        if (ctx->pc != 0x40AA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40AA98u; }
        if (ctx->pc != 0x40AA98u) { return; }
    }
    ctx->pc = 0x40AA98u;
label_40aa98:
    // 0x40aa98: 0x3c043f1a  lui         $a0, 0x3F1A
    ctx->pc = 0x40aa98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16154 << 16));
    // 0x40aa9c: 0x3403e000  ori         $v1, $zero, 0xE000
    ctx->pc = 0x40aa9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x40aaa0: 0x348436e2  ori         $a0, $a0, 0x36E2
    ctx->pc = 0x40aaa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14050);
    // 0x40aaa4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x40aaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x40aaa8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x40aaa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x40aaac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40aaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aab0: 0xc040200  jal         func_100800
    ctx->pc = 0x40AAB0u;
    SET_GPR_U32(ctx, 31, 0x40AAB8u);
    ctx->pc = 0x40AAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40AAB0u;
            // 0x40aab4: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100800u;
    if (runtime->hasFunction(0x100800u)) {
        auto targetFn = runtime->lookupFunction(0x100800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40AAB8u; }
        if (ctx->pc != 0x40AAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100800_0x100800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40AAB8u; }
        if (ctx->pc != 0x40AAB8u) { return; }
    }
    ctx->pc = 0x40AAB8u;
label_40aab8:
    // 0x40aab8: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x40AAB8u;
    {
        const bool branch_taken_0x40aab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40aab8) {
            ctx->pc = 0x40A9DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40a9dc;
        }
    }
    ctx->pc = 0x40AAC0u;
label_40aac0:
    // 0x40aac0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x40aac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40aac4: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x40aac4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
    // 0x40aac8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40aac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40aacc: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x40aaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x40aad0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x40aad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x40aad4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x40aad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x40aad8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x40aad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x40aadc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x40aadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x40aae0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x40aae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x40aae4: 0x3e00008  jr          $ra
    ctx->pc = 0x40AAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40AAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AAE4u;
            // 0x40aae8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40AAECu;
    // 0x40aaec: 0x0  nop
    ctx->pc = 0x40aaecu;
    // NOP
}
