#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282930
// Address: 0x282930 - 0x282ad0
void sub_00282930_0x282930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282930_0x282930");
#endif

    switch (ctx->pc) {
        case 0x2829a0u: goto label_2829a0;
        default: break;
    }

    ctx->pc = 0x282930u;

    // 0x282930: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x282930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282934: 0x18600062  blez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x282934u;
    {
        const bool branch_taken_0x282934 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x282934) {
            ctx->pc = 0x282AC0u;
            goto label_282ac0;
        }
    }
    ctx->pc = 0x28293Cu;
    // 0x28293c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28293cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x282940: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x282940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282944: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x282944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x282948: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x282948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28294c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x28294cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x282950: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x282950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282954: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x282954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x282958: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x282958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28295c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x28295cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x282960: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x282960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x282964: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x282964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282968: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x282968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x28296c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x28296cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282970: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x282970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x282974: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x282974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282978: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x282978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x28297c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x28297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282980: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x282980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x282984: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x282984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282988: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x282988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28298c: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x28298Cu;
    {
        const bool branch_taken_0x28298c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x282990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28298Cu;
            // 0x282990: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28298c) {
            ctx->pc = 0x282AC0u;
            goto label_282ac0;
        }
    }
    ctx->pc = 0x282994u;
    // 0x282994: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282994u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282998: 0x24a70014  addiu       $a3, $a1, 0x14
    ctx->pc = 0x282998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x28299c: 0x24a60018  addiu       $a2, $a1, 0x18
    ctx->pc = 0x28299cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_2829a0:
    // 0x2829a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2829a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2829a4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2829a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2829a8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2829a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2829ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2829acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2829b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2829b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2829b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2829B4u;
    {
        const bool branch_taken_0x2829b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2829b4) {
            ctx->pc = 0x2829C4u;
            goto label_2829c4;
        }
    }
    ctx->pc = 0x2829BCu;
    // 0x2829bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2829BCu;
    {
        const bool branch_taken_0x2829bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2829C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2829BCu;
            // 0x2829c0: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829bc) {
            ctx->pc = 0x2829CCu;
            goto label_2829cc;
        }
    }
    ctx->pc = 0x2829C4u;
label_2829c4:
    // 0x2829c4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2829c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2829c8: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x2829c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2829cc:
    // 0x2829cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2829ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2829d0: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2829d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2829d4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2829d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2829d8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2829d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2829dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2829dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2829e0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2829E0u;
    {
        const bool branch_taken_0x2829e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2829e0) {
            ctx->pc = 0x2829F0u;
            goto label_2829f0;
        }
    }
    ctx->pc = 0x2829E8u;
    // 0x2829e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2829E8u;
    {
        const bool branch_taken_0x2829e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2829ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2829E8u;
            // 0x2829ec: 0xe4a10010  swc1        $f1, 0x10($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829e8) {
            ctx->pc = 0x2829F8u;
            goto label_2829f8;
        }
    }
    ctx->pc = 0x2829F0u;
label_2829f0:
    // 0x2829f0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2829f0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2829f4: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x2829f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_2829f8:
    // 0x2829f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2829f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2829fc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2829fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282a00: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x282a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x282a04: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x282a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282a08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x282a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282a0c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x282A0Cu;
    {
        const bool branch_taken_0x282a0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282a0c) {
            ctx->pc = 0x282A1Cu;
            goto label_282a1c;
        }
    }
    ctx->pc = 0x282A14u;
    // 0x282a14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x282A14u;
    {
        const bool branch_taken_0x282a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282A14u;
            // 0x282a18: 0xe4a10004  swc1        $f1, 0x4($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a14) {
            ctx->pc = 0x282A24u;
            goto label_282a24;
        }
    }
    ctx->pc = 0x282A1Cu;
label_282a1c:
    // 0x282a1c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x282a1cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x282a20: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x282a20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_282a24:
    // 0x282a24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x282a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x282a28: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x282a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282a2c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x282a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x282a30: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x282a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282a34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x282a34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282a38: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x282A38u;
    {
        const bool branch_taken_0x282a38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282a38) {
            ctx->pc = 0x282A48u;
            goto label_282a48;
        }
    }
    ctx->pc = 0x282A40u;
    // 0x282a40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x282A40u;
    {
        const bool branch_taken_0x282a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282A40u;
            // 0x282a44: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a40) {
            ctx->pc = 0x282A50u;
            goto label_282a50;
        }
    }
    ctx->pc = 0x282A48u;
label_282a48:
    // 0x282a48: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x282a48u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x282a4c: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x282a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_282a50:
    // 0x282a50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x282a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x282a54: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x282a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282a58: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x282a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x282a5c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x282a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282a60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x282a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282a64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x282A64u;
    {
        const bool branch_taken_0x282a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282a64) {
            ctx->pc = 0x282A74u;
            goto label_282a74;
        }
    }
    ctx->pc = 0x282A6Cu;
    // 0x282a6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x282A6Cu;
    {
        const bool branch_taken_0x282a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282A6Cu;
            // 0x282a70: 0xe4a10008  swc1        $f1, 0x8($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a6c) {
            ctx->pc = 0x282A7Cu;
            goto label_282a7c;
        }
    }
    ctx->pc = 0x282A74u;
label_282a74:
    // 0x282a74: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x282a74u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x282a78: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x282a78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_282a7c:
    // 0x282a7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x282a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x282a80: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x282a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282a84: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x282a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x282a88: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x282a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282a8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x282a8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282a90: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x282A90u;
    {
        const bool branch_taken_0x282a90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282a90) {
            ctx->pc = 0x282AA0u;
            goto label_282aa0;
        }
    }
    ctx->pc = 0x282A98u;
    // 0x282a98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x282A98u;
    {
        const bool branch_taken_0x282a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282A98u;
            // 0x282a9c: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a98) {
            ctx->pc = 0x282AA8u;
            goto label_282aa8;
        }
    }
    ctx->pc = 0x282AA0u;
label_282aa0:
    // 0x282aa0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x282aa0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x282aa4: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x282aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_282aa8:
    // 0x282aa8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x282aa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x282aac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x282aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282ab0: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x282ab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x282ab4: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x282AB4u;
    {
        const bool branch_taken_0x282ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x282AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282AB4u;
            // 0x282ab8: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ab4) {
            ctx->pc = 0x2829A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2829a0;
        }
    }
    ctx->pc = 0x282ABCu;
    // 0x282abc: 0x0  nop
    ctx->pc = 0x282abcu;
    // NOP
label_282ac0:
    // 0x282ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x282AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282AC8u;
    // 0x282ac8: 0x0  nop
    ctx->pc = 0x282ac8u;
    // NOP
    // 0x282acc: 0x0  nop
    ctx->pc = 0x282accu;
    // NOP
}
