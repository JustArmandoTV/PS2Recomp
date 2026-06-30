#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002969A0
// Address: 0x2969a0 - 0x296a90
void sub_002969A0_0x2969a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002969A0_0x2969a0");
#endif

    ctx->pc = 0x2969a0u;

    // 0x2969a0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2969a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2969a4: 0x0  nop
    ctx->pc = 0x2969a4u;
    // NOP
    // 0x2969a8: 0x46036036  c.le.s      $f12, $f3
    ctx->pc = 0x2969a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2969ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2969ACu;
    {
        const bool branch_taken_0x2969ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2969B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2969ACu;
            // 0x2969b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2969ac) {
            ctx->pc = 0x2969C0u;
            goto label_2969c0;
        }
    }
    ctx->pc = 0x2969B4u;
    // 0x2969b4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2969B4u;
    {
        const bool branch_taken_0x2969b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2969b4) {
            ctx->pc = 0x296A80u;
            goto label_296a80;
        }
    }
    ctx->pc = 0x2969BCu;
    // 0x2969bc: 0x0  nop
    ctx->pc = 0x2969bcu;
    // NOP
label_2969c0:
    // 0x2969c0: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x2969c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x2969c4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2969c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2969c8: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x2969c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x2969cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2969ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2969d0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2969d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2969d4: 0xc4870008  lwc1        $f7, 0x8($a0)
    ctx->pc = 0x2969d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2969d8: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x2969d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2969dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2969dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2969e0: 0x460c0182  mul.s       $f6, $f0, $f12
    ctx->pc = 0x2969e0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2969e4: 0x46010942  mul.s       $f5, $f1, $f1
    ctx->pc = 0x2969e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2969e8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2969e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2969ec: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2969ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2969f0: 0xe4a30020  swc1        $f3, 0x20($a1)
    ctx->pc = 0x2969f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x2969f4: 0xe4a30024  swc1        $f3, 0x24($a1)
    ctx->pc = 0x2969f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x2969f8: 0xe4a30028  swc1        $f3, 0x28($a1)
    ctx->pc = 0x2969f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x2969fc: 0xe4a3002c  swc1        $f3, 0x2C($a1)
    ctx->pc = 0x2969fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x296a00: 0xe4a30030  swc1        $f3, 0x30($a1)
    ctx->pc = 0x296a00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x296a04: 0xe4a30034  swc1        $f3, 0x34($a1)
    ctx->pc = 0x296a04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x296a08: 0xe4a30038  swc1        $f3, 0x38($a1)
    ctx->pc = 0x296a08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x296a0c: 0xe4a3003c  swc1        $f3, 0x3C($a1)
    ctx->pc = 0x296a0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x296a10: 0xe4a30040  swc1        $f3, 0x40($a1)
    ctx->pc = 0x296a10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x296a14: 0xe4a30044  swc1        $f3, 0x44($a1)
    ctx->pc = 0x296a14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x296a18: 0xe4a30048  swc1        $f3, 0x48($a1)
    ctx->pc = 0x296a18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x296a1c: 0xe4a3004c  swc1        $f3, 0x4C($a1)
    ctx->pc = 0x296a1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x296a20: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x296a20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
    // 0x296a24: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x296a24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x296a28: 0xaca40034  sw          $a0, 0x34($a1)
    ctx->pc = 0x296a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 4));
    // 0x296a2c: 0xaca40048  sw          $a0, 0x48($a1)
    ctx->pc = 0x296a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 4));
    // 0x296a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x296a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296a34: 0x46073882  mul.s       $f2, $f7, $f7
    ctx->pc = 0x296a34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x296a38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x296a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x296a3c: 0x46022840  add.s       $f1, $f5, $f2
    ctx->pc = 0x296a3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x296a40: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x296a40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x296a44: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x296a44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x296a48: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x296a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x296a4c: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x296a4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x296a50: 0x46052040  add.s       $f1, $f4, $f5
    ctx->pc = 0x296a50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x296a54: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x296a54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x296a58: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x296a58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x296a5c: 0xe4a20034  swc1        $f2, 0x34($a1)
    ctx->pc = 0x296a5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x296a60: 0xe4a10048  swc1        $f1, 0x48($a1)
    ctx->pc = 0x296a60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x296a64: 0xe4a3001c  swc1        $f3, 0x1C($a1)
    ctx->pc = 0x296a64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x296a68: 0xe4a30018  swc1        $f3, 0x18($a1)
    ctx->pc = 0x296a68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x296a6c: 0xe4a30014  swc1        $f3, 0x14($a1)
    ctx->pc = 0x296a6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x296a70: 0xe4a30010  swc1        $f3, 0x10($a1)
    ctx->pc = 0x296a70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x296a74: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x296a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x296a78: 0xe4ac0004  swc1        $f12, 0x4($a1)
    ctx->pc = 0x296a78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x296a7c: 0x0  nop
    ctx->pc = 0x296a7cu;
    // NOP
label_296a80:
    // 0x296a80: 0x3e00008  jr          $ra
    ctx->pc = 0x296A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296A88u;
    // 0x296a88: 0x0  nop
    ctx->pc = 0x296a88u;
    // NOP
    // 0x296a8c: 0x0  nop
    ctx->pc = 0x296a8cu;
    // NOP
}
