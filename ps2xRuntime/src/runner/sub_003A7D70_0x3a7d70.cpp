#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A7D70
// Address: 0x3a7d70 - 0x3a7f20
void sub_003A7D70_0x3a7d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7D70_0x3a7d70");
#endif

    switch (ctx->pc) {
        case 0x3a7eccu: goto label_3a7ecc;
        default: break;
    }

    ctx->pc = 0x3a7d70u;

    // 0x3a7d70: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a7d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3a7d74: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x3a7d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3a7d78: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x3a7d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a7d7c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a7d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a7d80: 0x3c033d99  lui         $v1, 0x3D99
    ctx->pc = 0x3a7d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15769 << 16));
    // 0x3a7d84: 0x3465999a  ori         $a1, $v1, 0x999A
    ctx->pc = 0x3a7d84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x3a7d88: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x3a7d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x3a7d8c: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x3a7d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a7d90: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x3a7d90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a7d94: 0x0  nop
    ctx->pc = 0x3a7d94u;
    // NOP
    // 0x3a7d98: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3a7d98u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3a7d9c: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x3a7d9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x3a7da0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a7da4: 0x0  nop
    ctx->pc = 0x3a7da4u;
    // NOP
    // 0x3a7da8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a7da8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a7dac: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7DACu;
    {
        const bool branch_taken_0x3a7dac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A7DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7DACu;
            // 0x3a7db0: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7dac) {
            ctx->pc = 0x3A7DBCu;
            goto label_3a7dbc;
        }
    }
    ctx->pc = 0x3A7DB4u;
    // 0x3a7db4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3a7db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3a7db8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3a7db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_3a7dbc:
    // 0x3a7dbc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a7dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3a7dc0: 0x3c053c23  lui         $a1, 0x3C23
    ctx->pc = 0x3a7dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15395 << 16));
    // 0x3a7dc4: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x3a7dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3a7dc8: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x3a7dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a7dcc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a7dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a7dd0: 0x34a3d70a  ori         $v1, $a1, 0xD70A
    ctx->pc = 0x3a7dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x3a7dd4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3a7dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a7dd8: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x3a7dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x3a7ddc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x3a7ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x3a7de0: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x3a7de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a7de4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3a7de4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3a7de8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7de8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a7dec: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x3a7decu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x3a7df0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a7df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a7df4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7DF4u;
    {
        const bool branch_taken_0x3a7df4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A7DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7DF4u;
            // 0x3a7df8: 0xe4810018  swc1        $f1, 0x18($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7df4) {
            ctx->pc = 0x3A7E04u;
            goto label_3a7e04;
        }
    }
    ctx->pc = 0x3A7DFCu;
    // 0x3a7dfc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3a7dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3a7e00: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x3a7e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_3a7e04:
    // 0x3a7e04: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a7e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3a7e08: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x3a7e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
    // 0x3a7e0c: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x3a7e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3a7e10: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3a7e10u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a7e14: 0x9083000d  lbu         $v1, 0xD($a0)
    ctx->pc = 0x3a7e14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x3a7e18: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7E18u;
    {
        const bool branch_taken_0x3a7e18 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3A7E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7E18u;
            // 0x3a7e1c: 0xc4c30018  lwc1        $f3, 0x18($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e18) {
            ctx->pc = 0x3A7E2Cu;
            goto label_3a7e2c;
        }
    }
    ctx->pc = 0x3A7E20u;
    // 0x3a7e20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7e20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a7e24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A7E24u;
    {
        const bool branch_taken_0x3a7e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7E24u;
            // 0x3a7e28: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e24) {
            ctx->pc = 0x3A7E48u;
            goto label_3a7e48;
        }
    }
    ctx->pc = 0x3A7E2Cu;
label_3a7e2c:
    // 0x3a7e2c: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x3a7e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3a7e30: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3a7e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3a7e34: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3a7e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3a7e38: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a7e38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a7e3c: 0x0  nop
    ctx->pc = 0x3a7e3cu;
    // NOP
    // 0x3a7e40: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3a7e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a7e44: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3a7e44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3a7e48:
    // 0x3a7e48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a7e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a7e4c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3a7e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3a7e50: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3a7e50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a7e54: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x3a7e54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3a7e58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a7e5c: 0x0  nop
    ctx->pc = 0x3a7e5cu;
    // NOP
    // 0x3a7e60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a7e60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a7e64: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7E64u;
    {
        const bool branch_taken_0x3a7e64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a7e64) {
            ctx->pc = 0x3A7E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7E64u;
            // 0x3a7e68: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A7E7Cu;
            goto label_3a7e7c;
        }
    }
    ctx->pc = 0x3A7E6Cu;
    // 0x3a7e6c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a7e6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a7e70: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3a7e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3a7e74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A7E74u;
    {
        const bool branch_taken_0x3a7e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7E74u;
            // 0x3a7e78: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e74) {
            ctx->pc = 0x3A7E94u;
            goto label_3a7e94;
        }
    }
    ctx->pc = 0x3A7E7Cu;
label_3a7e7c:
    // 0x3a7e7c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3a7e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3a7e80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a7e80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a7e84: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3a7e84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3a7e88: 0x0  nop
    ctx->pc = 0x3a7e88u;
    // NOP
    // 0x3a7e8c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3a7e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3a7e90: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3a7e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3a7e94:
    // 0x3a7e94: 0xa085000d  sb          $a1, 0xD($a0)
    ctx->pc = 0x3a7e94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 5));
    // 0x3a7e98: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a7e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3a7e9c: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x3a7e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3a7ea0: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x3a7ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
    // 0x3a7ea4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a7ea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7ea8: 0x24e70e80  addiu       $a3, $a3, 0xE80
    ctx->pc = 0x3a7ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3712));
    // 0x3a7eac: 0x3c034563  lui         $v1, 0x4563
    ctx->pc = 0x3a7eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17763 << 16));
    // 0x3a7eb0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3a7eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3a7eb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7eb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a7eb8: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x3a7eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a7ebc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a7ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3a7ec0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a7ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a7ec4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a7ec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a7ec8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3a7ec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3a7ecc:
    // 0x3a7ecc: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x3a7eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3a7ed0: 0x8ca50da0  lw          $a1, 0xDA0($a1)
    ctx->pc = 0x3a7ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
    // 0x3a7ed4: 0x30a52000  andi        $a1, $a1, 0x2000
    ctx->pc = 0x3a7ed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x3a7ed8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7ED8u;
    {
        const bool branch_taken_0x3a7ed8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7ed8) {
            ctx->pc = 0x3A7EF0u;
            goto label_3a7ef0;
        }
    }
    ctx->pc = 0x3A7EE0u;
    // 0x3a7ee0: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x3a7ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3a7ee4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3a7ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3a7ee8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7EE8u;
    {
        const bool branch_taken_0x3a7ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7EE8u;
            // 0x3a7eec: 0xac85001c  sw          $a1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ee8) {
            ctx->pc = 0x3A7EF8u;
            goto label_3a7ef8;
        }
    }
    ctx->pc = 0x3A7EF0u;
label_3a7ef0:
    // 0x3a7ef0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3a7ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x3a7ef4: 0x0  nop
    ctx->pc = 0x3a7ef4u;
    // NOP
label_3a7ef8:
    // 0x3a7ef8: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x3a7ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3a7efc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a7efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a7f00: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3a7f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3a7f04: 0x8ca5077c  lw          $a1, 0x77C($a1)
    ctx->pc = 0x3a7f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1916)));
    // 0x3a7f08: 0x105282a  slt         $a1, $t0, $a1
    ctx->pc = 0x3a7f08u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3a7f0c: 0x14a0ffef  bnez        $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3A7F0Cu;
    {
        const bool branch_taken_0x3a7f0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7F0Cu;
            // 0x3a7f10: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f0c) {
            ctx->pc = 0x3A7ECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a7ecc;
        }
    }
    ctx->pc = 0x3A7F14u;
    // 0x3a7f14: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A7F1Cu;
    // 0x3a7f1c: 0x0  nop
    ctx->pc = 0x3a7f1cu;
    // NOP
}
