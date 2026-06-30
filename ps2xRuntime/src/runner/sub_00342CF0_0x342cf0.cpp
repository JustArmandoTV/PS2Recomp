#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00342CF0
// Address: 0x342cf0 - 0x3438f0
void sub_00342CF0_0x342cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342CF0_0x342cf0");
#endif

    switch (ctx->pc) {
        case 0x342d88u: goto label_342d88;
        case 0x343390u: goto label_343390;
        case 0x3436dcu: goto label_3436dc;
        case 0x34378cu: goto label_34378c;
        case 0x3437e4u: goto label_3437e4;
        case 0x3437ecu: goto label_3437ec;
        case 0x343800u: goto label_343800;
        case 0x343814u: goto label_343814;
        case 0x343854u: goto label_343854;
        case 0x343878u: goto label_343878;
        case 0x3438acu: goto label_3438ac;
        case 0x3438c0u: goto label_3438c0;
        default: break;
    }

    ctx->pc = 0x342cf0u;

    // 0x342cf0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x342cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x342cf4: 0x3c0a0060  lui         $t2, 0x60
    ctx->pc = 0x342cf4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)96 << 16));
    // 0x342cf8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x342cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x342cfc: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x342cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x342d00: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x342d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x342d04: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x342d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x342d08: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x342d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x342d0c: 0x254a0c30  addiu       $t2, $t2, 0xC30
    ctx->pc = 0x342d0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3120));
    // 0x342d10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x342d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x342d14: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x342d14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x342d18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x342d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x342d1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x342d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x342d20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x342d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x342d24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x342d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x342d28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x342d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x342d2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x342d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x342d30: 0x94850074  lhu         $a1, 0x74($a0)
    ctx->pc = 0x342d30u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x342d34: 0x8c6b8a08  lw          $t3, -0x75F8($v1)
    ctx->pc = 0x342d34u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x342d38: 0x94870076  lhu         $a3, 0x76($a0)
    ctx->pc = 0x342d38u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 118)));
    // 0x342d3c: 0x56043  sra         $t4, $a1, 1
    ctx->pc = 0x342d3cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 1));
    // 0x342d40: 0x10b2821  addu        $a1, $t0, $t3
    ctx->pc = 0x342d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x342d44: 0x94830078  lhu         $v1, 0x78($a0)
    ctx->pc = 0x342d44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x342d48: 0x8cab0050  lw          $t3, 0x50($a1)
    ctx->pc = 0x342d48u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x342d4c: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x342d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x342d50: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x342d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x342d54: 0x8d750004  lw          $s5, 0x4($t3)
    ctx->pc = 0x342d54u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x342d58: 0x8d6d0008  lw          $t5, 0x8($t3)
    ctx->pc = 0x342d58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x342d5c: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x342d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x342d60: 0x2a38021  addu        $s0, $s5, $v1
    ctx->pc = 0x342d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x342d64: 0x2a78821  addu        $s1, $s5, $a3
    ctx->pc = 0x342d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x342d68: 0x25b40001  addiu       $s4, $t5, 0x1
    ctx->pc = 0x342d68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x342d6c: 0x8d6b000c  lw          $t3, 0xC($t3)
    ctx->pc = 0x342d6cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x342d70: 0x2851823  subu        $v1, $s4, $a1
    ctx->pc = 0x342d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x342d74: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x342d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x342d78: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x342d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x342d7c: 0x25730001  addiu       $s3, $t3, 0x1
    ctx->pc = 0x342d7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x342d80: 0x6c9021  addu        $s2, $v1, $t4
    ctx->pc = 0x342d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x342d84: 0x6c5823  subu        $t3, $v1, $t4
    ctx->pc = 0x342d84u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_342d88:
    // 0x342d88: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x342d88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x342d8c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x342d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x342d90: 0xa5270000  sh          $a3, 0x0($t1)
    ctx->pc = 0x342d90u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x342d94: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x342d94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x342d98: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x342d98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x342d9c: 0x1d00fffa  bgtz        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x342D9Cu;
    {
        const bool branch_taken_0x342d9c = (GPR_S32(ctx, 8) > 0);
        if (branch_taken_0x342d9c) {
            ctx->pc = 0x342D88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_342d88;
        }
    }
    ctx->pc = 0x342DA4u;
    // 0x342da4: 0xb3900  sll         $a3, $t3, 4
    ctx->pc = 0x342da4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x342da8: 0x15c100  sll         $t8, $s5, 4
    ctx->pc = 0x342da8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x342dac: 0x24f96bf8  addiu       $t9, $a3, 0x6BF8
    ctx->pc = 0x342dacu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 7), 27640));
    // 0x342db0: 0x270f71f8  addiu       $t7, $t8, 0x71F8
    ctx->pc = 0x342db0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 29176));
    // 0x342db4: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x342db4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x342db8: 0xa7b90140  sh          $t9, 0x140($sp)
    ctx->pc = 0x342db8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 320), (uint16_t)GPR_U32(ctx, 25));
    // 0x342dbc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x342dbcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x342dc0: 0x5600004  bltz        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x342DC0u;
    {
        const bool branch_taken_0x342dc0 = (GPR_S32(ctx, 11) < 0);
        ctx->pc = 0x342DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342DC0u;
            // 0x342dc4: 0xa7af0142  sh          $t7, 0x142($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 322), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342dc0) {
            ctx->pc = 0x342DD4u;
            goto label_342dd4;
        }
    }
    ctx->pc = 0x342DC8u;
    // 0x342dc8: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x342dc8u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342dcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x342DCCu;
    {
        const bool branch_taken_0x342dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342DCCu;
            // 0x342dd0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x342dcc) {
            ctx->pc = 0x342DF0u;
            goto label_342df0;
        }
    }
    ctx->pc = 0x342DD4u;
label_342dd4:
    // 0x342dd4: 0xb4042  srl         $t0, $t3, 1
    ctx->pc = 0x342dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x342dd8: 0x31670001  andi        $a3, $t3, 0x1
    ctx->pc = 0x342dd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x342ddc: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x342ddcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x342de0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x342de0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342de4: 0x0  nop
    ctx->pc = 0x342de4u;
    // NOP
    // 0x342de8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x342de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x342dec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x342decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_342df0:
    // 0x342df0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x342df0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x342df4: 0x3c074f00  lui         $a3, 0x4F00
    ctx->pc = 0x342df4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20224 << 16));
    // 0x342df8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x342df8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342dfc: 0x0  nop
    ctx->pc = 0x342dfcu;
    // NOP
    // 0x342e00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x342e00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342e04: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x342E04u;
    {
        const bool branch_taken_0x342e04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x342e04) {
            ctx->pc = 0x342E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342E04u;
            // 0x342e08: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x342E1Cu;
            goto label_342e1c;
        }
    }
    ctx->pc = 0x342E0Cu;
    // 0x342e0c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342e0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342e10: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x342e10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x342e14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x342E14u;
    {
        const bool branch_taken_0x342e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342E14u;
            // 0x342e18: 0x3c073f12  lui         $a3, 0x3F12 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e14) {
            ctx->pc = 0x342E34u;
            goto label_342e34;
        }
    }
    ctx->pc = 0x342E1Cu;
label_342e1c:
    // 0x342e1c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x342e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x342e20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342e20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342e24: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x342e24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x342e28: 0x0  nop
    ctx->pc = 0x342e28u;
    // NOP
    // 0x342e2c: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x342e2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x342e30: 0x3c073f12  lui         $a3, 0x3F12
    ctx->pc = 0x342e30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16146 << 16));
label_342e34:
    // 0x342e34: 0x87100  sll         $t6, $t0, 4
    ctx->pc = 0x342e34u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x342e38: 0x34e74925  ori         $a3, $a3, 0x4925
    ctx->pc = 0x342e38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)18725);
    // 0x342e3c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x342e3cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x342e40: 0x6a00004  bltz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x342E40u;
    {
        const bool branch_taken_0x342e40 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x342E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342E40u;
            // 0x342e44: 0xa7ae0144  sh          $t6, 0x144($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 324), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e40) {
            ctx->pc = 0x342E54u;
            goto label_342e54;
        }
    }
    ctx->pc = 0x342E48u;
    // 0x342e48: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x342e48u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342e4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x342E4Cu;
    {
        const bool branch_taken_0x342e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342E4Cu;
            // 0x342e50: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e4c) {
            ctx->pc = 0x342E70u;
            goto label_342e70;
        }
    }
    ctx->pc = 0x342E54u;
label_342e54:
    // 0x342e54: 0x154042  srl         $t0, $s5, 1
    ctx->pc = 0x342e54u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x342e58: 0x32a70001  andi        $a3, $s5, 0x1
    ctx->pc = 0x342e58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x342e5c: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x342e5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x342e60: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x342e60u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342e64: 0x0  nop
    ctx->pc = 0x342e64u;
    // NOP
    // 0x342e68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x342e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x342e6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x342e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_342e70:
    // 0x342e70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x342e70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x342e74: 0x3c074f00  lui         $a3, 0x4F00
    ctx->pc = 0x342e74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20224 << 16));
    // 0x342e78: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x342e78u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342e7c: 0x0  nop
    ctx->pc = 0x342e7cu;
    // NOP
    // 0x342e80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x342e80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342e84: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x342E84u;
    {
        const bool branch_taken_0x342e84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x342e84) {
            ctx->pc = 0x342E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342E84u;
            // 0x342e88: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x342E9Cu;
            goto label_342e9c;
        }
    }
    ctx->pc = 0x342E8Cu;
    // 0x342e8c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342e8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342e90: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x342e90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x342e94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x342E94u;
    {
        const bool branch_taken_0x342e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342E94u;
            // 0x342e98: 0x53900  sll         $a3, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e94) {
            ctx->pc = 0x342EB4u;
            goto label_342eb4;
        }
    }
    ctx->pc = 0x342E9Cu;
label_342e9c:
    // 0x342e9c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x342e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x342ea0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342ea0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342ea4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x342ea4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x342ea8: 0x0  nop
    ctx->pc = 0x342ea8u;
    // NOP
    // 0x342eac: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x342eacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x342eb0: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x342eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_342eb4:
    // 0x342eb4: 0x86900  sll         $t5, $t0, 4
    ctx->pc = 0x342eb4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x342eb8: 0x24ec6bf8  addiu       $t4, $a3, 0x6BF8
    ctx->pc = 0x342eb8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 27640));
    // 0x342ebc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x342ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x342ec0: 0xa7af014c  sh          $t7, 0x14C($sp)
    ctx->pc = 0x342ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 332), (uint16_t)GPR_U32(ctx, 15));
    // 0x342ec4: 0xa7ad0146  sh          $t5, 0x146($sp)
    ctx->pc = 0x342ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 326), (uint16_t)GPR_U32(ctx, 13));
    // 0x342ec8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x342EC8u;
    {
        const bool branch_taken_0x342ec8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x342ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342EC8u;
            // 0x342ecc: 0xa7ac014a  sh          $t4, 0x14A($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 330), (uint16_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ec8) {
            ctx->pc = 0x342EDCu;
            goto label_342edc;
        }
    }
    ctx->pc = 0x342ED0u;
    // 0x342ed0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x342ed0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342ed4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x342ED4u;
    {
        const bool branch_taken_0x342ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342ED4u;
            // 0x342ed8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ed4) {
            ctx->pc = 0x342EF8u;
            goto label_342ef8;
        }
    }
    ctx->pc = 0x342EDCu;
label_342edc:
    // 0x342edc: 0x53842  srl         $a3, $a1, 1
    ctx->pc = 0x342edcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x342ee0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x342ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x342ee4: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x342ee4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x342ee8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x342ee8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342eec: 0x0  nop
    ctx->pc = 0x342eecu;
    // NOP
    // 0x342ef0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x342ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x342ef4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x342ef4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_342ef8:
    // 0x342ef8: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x342ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x342efc: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x342efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x342f00: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x342f00u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342f04: 0x0  nop
    ctx->pc = 0x342f04u;
    // NOP
    // 0x342f08: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x342f08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x342f0c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x342f0cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342f10: 0x0  nop
    ctx->pc = 0x342f10u;
    // NOP
    // 0x342f14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x342f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342f18: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x342F18u;
    {
        const bool branch_taken_0x342f18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x342f18) {
            ctx->pc = 0x342F1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342F18u;
            // 0x342f1c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x342F30u;
            goto label_342f30;
        }
    }
    ctx->pc = 0x342F20u;
    // 0x342f20: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342f20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342f24: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x342f24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x342f28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x342F28u;
    {
        const bool branch_taken_0x342f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342F28u;
            // 0x342f2c: 0x75900  sll         $t3, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342f28) {
            ctx->pc = 0x342F48u;
            goto label_342f48;
        }
    }
    ctx->pc = 0x342F30u;
label_342f30:
    // 0x342f30: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x342f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x342f34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342f34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342f38: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x342f38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x342f3c: 0x0  nop
    ctx->pc = 0x342f3cu;
    // NOP
    // 0x342f40: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x342f40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x342f44: 0x75900  sll         $t3, $a3, 4
    ctx->pc = 0x342f44u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_342f48:
    // 0x342f48: 0x26a50008  addiu       $a1, $s5, 0x8
    ctx->pc = 0x342f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x342f4c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x342F4Cu;
    {
        const bool branch_taken_0x342f4c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x342F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342F4Cu;
            // 0x342f50: 0xa7ab014e  sh          $t3, 0x14E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 334), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342f4c) {
            ctx->pc = 0x342F60u;
            goto label_342f60;
        }
    }
    ctx->pc = 0x342F54u;
    // 0x342f54: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x342f54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342f58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x342F58u;
    {
        const bool branch_taken_0x342f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342F58u;
            // 0x342f5c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x342f58) {
            ctx->pc = 0x342F7Cu;
            goto label_342f7c;
        }
    }
    ctx->pc = 0x342F60u;
label_342f60:
    // 0x342f60: 0x53842  srl         $a3, $a1, 1
    ctx->pc = 0x342f60u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x342f64: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x342f64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x342f68: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x342f68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x342f6c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x342f6cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342f70: 0x0  nop
    ctx->pc = 0x342f70u;
    // NOP
    // 0x342f74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x342f74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x342f78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x342f78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_342f7c:
    // 0x342f7c: 0x3c073f12  lui         $a3, 0x3F12
    ctx->pc = 0x342f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16146 << 16));
    // 0x342f80: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x342f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x342f84: 0x34e74925  ori         $a3, $a3, 0x4925
    ctx->pc = 0x342f84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)18725);
    // 0x342f88: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x342f88u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342f8c: 0x0  nop
    ctx->pc = 0x342f8cu;
    // NOP
    // 0x342f90: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x342f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x342f94: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x342f94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342f98: 0x0  nop
    ctx->pc = 0x342f98u;
    // NOP
    // 0x342f9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x342f9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342fa0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x342FA0u;
    {
        const bool branch_taken_0x342fa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x342fa0) {
            ctx->pc = 0x342FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342FA0u;
            // 0x342fa4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x342FB8u;
            goto label_342fb8;
        }
    }
    ctx->pc = 0x342FA8u;
    // 0x342fa8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342fa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342fac: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x342facu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x342fb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x342FB0u;
    {
        const bool branch_taken_0x342fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342FB0u;
            // 0x342fb4: 0x112900  sll         $a1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342fb0) {
            ctx->pc = 0x342FD0u;
            goto label_342fd0;
        }
    }
    ctx->pc = 0x342FB8u;
label_342fb8:
    // 0x342fb8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x342fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x342fbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342fbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342fc0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x342fc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x342fc4: 0x0  nop
    ctx->pc = 0x342fc4u;
    // NOP
    // 0x342fc8: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x342fc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x342fcc: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x342fccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_342fd0:
    // 0x342fd0: 0x75100  sll         $t2, $a3, 4
    ctx->pc = 0x342fd0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x342fd4: 0x24a971f8  addiu       $t1, $a1, 0x71F8
    ctx->pc = 0x342fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 29176));
    // 0x342fd8: 0x7fa500d0  sq          $a1, 0xD0($sp)
    ctx->pc = 0x342fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 5));
    // 0x342fdc: 0x3c053f12  lui         $a1, 0x3F12
    ctx->pc = 0x342fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16146 << 16));
    // 0x342fe0: 0xa3a60152  sb          $a2, 0x152($sp)
    ctx->pc = 0x342fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 338), (uint8_t)GPR_U32(ctx, 6));
    // 0x342fe4: 0x34a54925  ori         $a1, $a1, 0x4925
    ctx->pc = 0x342fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18725);
    // 0x342fe8: 0xa7aa0150  sh          $t2, 0x150($sp)
    ctx->pc = 0x342fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 336), (uint16_t)GPR_U32(ctx, 10));
    // 0x342fec: 0xa7b90154  sh          $t9, 0x154($sp)
    ctx->pc = 0x342fecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 340), (uint16_t)GPR_U32(ctx, 25));
    // 0x342ff0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x342ff0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x342ff4: 0xa7a90156  sh          $t1, 0x156($sp)
    ctx->pc = 0x342ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 342), (uint16_t)GPR_U32(ctx, 9));
    // 0x342ff8: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x342FF8u;
    {
        const bool branch_taken_0x342ff8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x342FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342FF8u;
            // 0x342ffc: 0xa7ae0158  sh          $t6, 0x158($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 344), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ff8) {
            ctx->pc = 0x34300Cu;
            goto label_34300c;
        }
    }
    ctx->pc = 0x343000u;
    // 0x343000: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x343000u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343004: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x343004u;
    {
        const bool branch_taken_0x343004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343004u;
            // 0x343008: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x343004) {
            ctx->pc = 0x343028u;
            goto label_343028;
        }
    }
    ctx->pc = 0x34300Cu;
label_34300c:
    // 0x34300c: 0x113842  srl         $a3, $s1, 1
    ctx->pc = 0x34300cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x343010: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x343010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x343014: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x343014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x343018: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x343018u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34301c: 0x0  nop
    ctx->pc = 0x34301cu;
    // NOP
    // 0x343020: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x343020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x343024: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x343024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_343028:
    // 0x343028: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x343028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34302c: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x34302cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x343030: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x343030u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343034: 0x0  nop
    ctx->pc = 0x343034u;
    // NOP
    // 0x343038: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x343038u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34303c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x34303Cu;
    {
        const bool branch_taken_0x34303c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34303c) {
            ctx->pc = 0x343040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34303Cu;
            // 0x343040: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x343054u;
            goto label_343054;
        }
    }
    ctx->pc = 0x343044u;
    // 0x343044: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x343044u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x343048: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x343048u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x34304c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34304Cu;
    {
        const bool branch_taken_0x34304c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34304Cu;
            // 0x343050: 0x74100  sll         $t0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34304c) {
            ctx->pc = 0x34306Cu;
            goto label_34306c;
        }
    }
    ctx->pc = 0x343054u;
label_343054:
    // 0x343054: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x343054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x343058: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x343058u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34305c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x34305cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x343060: 0x0  nop
    ctx->pc = 0x343060u;
    // NOP
    // 0x343064: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x343064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x343068: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x343068u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_34306c:
    // 0x34306c: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x34306cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x343070: 0x24a771f8  addiu       $a3, $a1, 0x71F8
    ctx->pc = 0x343070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 29176));
    // 0x343074: 0x7fa500c0  sq          $a1, 0xC0($sp)
    ctx->pc = 0x343074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 5));
    // 0x343078: 0x2665fff8  addiu       $a1, $s3, -0x8
    ctx->pc = 0x343078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    // 0x34307c: 0xa7ac015e  sh          $t4, 0x15E($sp)
    ctx->pc = 0x34307cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 350), (uint16_t)GPR_U32(ctx, 12));
    // 0x343080: 0xa7a8015a  sh          $t0, 0x15A($sp)
    ctx->pc = 0x343080u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 346), (uint16_t)GPR_U32(ctx, 8));
    // 0x343084: 0xa7ab0162  sh          $t3, 0x162($sp)
    ctx->pc = 0x343084u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 354), (uint16_t)GPR_U32(ctx, 11));
    // 0x343088: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x343088u;
    {
        const bool branch_taken_0x343088 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x34308Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343088u;
            // 0x34308c: 0xa7a70160  sh          $a3, 0x160($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 352), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343088) {
            ctx->pc = 0x34309Cu;
            goto label_34309c;
        }
    }
    ctx->pc = 0x343090u;
    // 0x343090: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x343090u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343094: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x343094u;
    {
        const bool branch_taken_0x343094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343094u;
            // 0x343098: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x343094) {
            ctx->pc = 0x3430B8u;
            goto label_3430b8;
        }
    }
    ctx->pc = 0x34309Cu;
label_34309c:
    // 0x34309c: 0x5b042  srl         $s6, $a1, 1
    ctx->pc = 0x34309cu;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x3430a0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3430a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3430a4: 0x2c5b025  or          $s6, $s6, $a1
    ctx->pc = 0x3430a4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 5));
    // 0x3430a8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3430a8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3430ac: 0x0  nop
    ctx->pc = 0x3430acu;
    // NOP
    // 0x3430b0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3430b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3430b4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3430b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3430b8:
    // 0x3430b8: 0x3c163f12  lui         $s6, 0x3F12
    ctx->pc = 0x3430b8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16146 << 16));
    // 0x3430bc: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x3430bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x3430c0: 0x36d64925  ori         $s6, $s6, 0x4925
    ctx->pc = 0x3430c0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)18725);
    // 0x3430c4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3430c4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3430c8: 0x0  nop
    ctx->pc = 0x3430c8u;
    // NOP
    // 0x3430cc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3430ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3430d0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3430d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3430d4: 0x0  nop
    ctx->pc = 0x3430d4u;
    // NOP
    // 0x3430d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3430d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3430dc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3430DCu;
    {
        const bool branch_taken_0x3430dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3430dc) {
            ctx->pc = 0x3430E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3430DCu;
            // 0x3430e0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3430F4u;
            goto label_3430f4;
        }
    }
    ctx->pc = 0x3430E4u;
    // 0x3430e4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3430e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3430e8: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x3430e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x3430ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3430ECu;
    {
        const bool branch_taken_0x3430ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3430F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3430ECu;
            // 0x3430f0: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3430ec) {
            ctx->pc = 0x34310Cu;
            goto label_34310c;
        }
    }
    ctx->pc = 0x3430F4u;
label_3430f4:
    // 0x3430f4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3430f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3430f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3430f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3430fc: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x3430fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x343100: 0x0  nop
    ctx->pc = 0x343100u;
    // NOP
    // 0x343104: 0x2c5b025  or          $s6, $s6, $a1
    ctx->pc = 0x343104u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 5));
    // 0x343108: 0x162900  sll         $a1, $s6, 4
    ctx->pc = 0x343108u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_34310c:
    // 0x34310c: 0xa3a60166  sb          $a2, 0x166($sp)
    ctx->pc = 0x34310cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 358), (uint8_t)GPR_U32(ctx, 6));
    // 0x343110: 0x3b100  sll         $s6, $v1, 4
    ctx->pc = 0x343110u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x343114: 0xa7a50164  sh          $a1, 0x164($sp)
    ctx->pc = 0x343114u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 356), (uint16_t)GPR_U32(ctx, 5));
    // 0x343118: 0x26de6bf8  addiu       $fp, $s6, 0x6BF8
    ctx->pc = 0x343118u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 27640));
    // 0x34311c: 0x10b100  sll         $s6, $s0, 4
    ctx->pc = 0x34311cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x343120: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x343120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x343124: 0x26d671f8  addiu       $s6, $s6, 0x71F8
    ctx->pc = 0x343124u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 29176));
    // 0x343128: 0xa7b6016a  sh          $s6, 0x16A($sp)
    ctx->pc = 0x343128u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 362), (uint16_t)GPR_U32(ctx, 22));
    // 0x34312c: 0x3c163f00  lui         $s6, 0x3F00
    ctx->pc = 0x34312cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16128 << 16));
    // 0x343130: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x343130u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x343134: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x343134u;
    {
        const bool branch_taken_0x343134 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x343138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343134u;
            // 0x343138: 0xa7be0168  sh          $fp, 0x168($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 360), (uint16_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343134) {
            ctx->pc = 0x343148u;
            goto label_343148;
        }
    }
    ctx->pc = 0x34313Cu;
    // 0x34313c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34313cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343140: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x343140u;
    {
        const bool branch_taken_0x343140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343140u;
            // 0x343144: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x343140) {
            ctx->pc = 0x343164u;
            goto label_343164;
        }
    }
    ctx->pc = 0x343148u;
label_343148:
    // 0x343148: 0x3b042  srl         $s6, $v1, 1
    ctx->pc = 0x343148u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x34314c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34314cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x343150: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x343150u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x343154: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x343154u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343158: 0x0  nop
    ctx->pc = 0x343158u;
    // NOP
    // 0x34315c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34315cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x343160: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x343160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_343164:
    // 0x343164: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x343164u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x343168: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x343168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x34316c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34316cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343170: 0x0  nop
    ctx->pc = 0x343170u;
    // NOP
    // 0x343174: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x343174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343178: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x343178u;
    {
        const bool branch_taken_0x343178 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x343178) {
            ctx->pc = 0x34317Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343178u;
            // 0x34317c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x343190u;
            goto label_343190;
        }
    }
    ctx->pc = 0x343180u;
    // 0x343180: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x343180u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x343184: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x343184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x343188: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x343188u;
    {
        const bool branch_taken_0x343188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34318Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343188u;
            // 0x34318c: 0x3b900  sll         $s7, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343188) {
            ctx->pc = 0x3431A8u;
            goto label_3431a8;
        }
    }
    ctx->pc = 0x343190u;
label_343190:
    // 0x343190: 0x3c168000  lui         $s6, 0x8000
    ctx->pc = 0x343190u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32768 << 16));
    // 0x343194: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x343194u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x343198: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x343198u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34319c: 0x0  nop
    ctx->pc = 0x34319cu;
    // NOP
    // 0x3431a0: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x3431a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x3431a4: 0x3b900  sll         $s7, $v1, 4
    ctx->pc = 0x3431a4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3431a8:
    // 0x3431a8: 0x3c033f12  lui         $v1, 0x3F12
    ctx->pc = 0x3431a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16146 << 16));
    // 0x3431ac: 0x34634925  ori         $v1, $v1, 0x4925
    ctx->pc = 0x3431acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18725);
    // 0x3431b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3431b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3431b4: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3431B4u;
    {
        const bool branch_taken_0x3431b4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3431B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3431B4u;
            // 0x3431b8: 0xa7b7016c  sh          $s7, 0x16C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 364), (uint16_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3431b4) {
            ctx->pc = 0x3431C8u;
            goto label_3431c8;
        }
    }
    ctx->pc = 0x3431BCu;
    // 0x3431bc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3431bcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3431c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3431C0u;
    {
        const bool branch_taken_0x3431c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3431C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3431C0u;
            // 0x3431c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3431c0) {
            ctx->pc = 0x3431E8u;
            goto label_3431e8;
        }
    }
    ctx->pc = 0x3431C8u;
label_3431c8:
    // 0x3431c8: 0x32160001  andi        $s6, $s0, 0x1
    ctx->pc = 0x3431c8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3431cc: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3431ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3431d0: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x3431d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x3431d4: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x3431d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x3431d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3431d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3431dc: 0x0  nop
    ctx->pc = 0x3431dcu;
    // NOP
    // 0x3431e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3431e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3431e4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3431e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3431e8:
    // 0x3431e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3431e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3431ec: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3431ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3431f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3431f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3431f4: 0x0  nop
    ctx->pc = 0x3431f4u;
    // NOP
    // 0x3431f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3431f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3431fc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3431FCu;
    {
        const bool branch_taken_0x3431fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3431fc) {
            ctx->pc = 0x343200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3431FCu;
            // 0x343200: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x343214u;
            goto label_343214;
        }
    }
    ctx->pc = 0x343204u;
    // 0x343204: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x343204u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x343208: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x343208u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x34320c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34320Cu;
    {
        const bool branch_taken_0x34320c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34320Cu;
            // 0x343210: 0x161900  sll         $v1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34320c) {
            ctx->pc = 0x34322Cu;
            goto label_34322c;
        }
    }
    ctx->pc = 0x343214u;
label_343214:
    // 0x343214: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x343214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x343218: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x343218u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34321c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x34321cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x343220: 0x0  nop
    ctx->pc = 0x343220u;
    // NOP
    // 0x343224: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x343224u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x343228: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x343228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_34322c:
    // 0x34322c: 0xa7a70174  sh          $a3, 0x174($sp)
    ctx->pc = 0x34322cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 372), (uint16_t)GPR_U32(ctx, 7));
    // 0x343230: 0xa7a3016e  sh          $v1, 0x16E($sp)
    ctx->pc = 0x343230u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 366), (uint16_t)GPR_U32(ctx, 3));
    // 0x343234: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x343234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x343238: 0x24636bf8  addiu       $v1, $v1, 0x6BF8
    ctx->pc = 0x343238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27640));
    // 0x34323c: 0x2694fff8  addiu       $s4, $s4, -0x8
    ctx->pc = 0x34323cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
    // 0x343240: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x343240u;
    {
        const bool branch_taken_0x343240 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x343244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343240u;
            // 0x343244: 0xa7a30172  sh          $v1, 0x172($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 370), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343240) {
            ctx->pc = 0x343254u;
            goto label_343254;
        }
    }
    ctx->pc = 0x343248u;
    // 0x343248: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x343248u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34324c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34324Cu;
    {
        const bool branch_taken_0x34324c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34324Cu;
            // 0x343250: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34324c) {
            ctx->pc = 0x343270u;
            goto label_343270;
        }
    }
    ctx->pc = 0x343254u;
label_343254:
    // 0x343254: 0x143842  srl         $a3, $s4, 1
    ctx->pc = 0x343254u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x343258: 0x32940001  andi        $s4, $s4, 0x1
    ctx->pc = 0x343258u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x34325c: 0xf43825  or          $a3, $a3, $s4
    ctx->pc = 0x34325cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 20));
    // 0x343260: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x343260u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343264: 0x0  nop
    ctx->pc = 0x343264u;
    // NOP
    // 0x343268: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x343268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34326c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34326cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_343270:
    // 0x343270: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x343270u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x343274: 0x3c144f00  lui         $s4, 0x4F00
    ctx->pc = 0x343274u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)20224 << 16));
    // 0x343278: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x343278u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34327c: 0x0  nop
    ctx->pc = 0x34327cu;
    // NOP
    // 0x343280: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x343280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x343284: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x343284u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343288: 0x0  nop
    ctx->pc = 0x343288u;
    // NOP
    // 0x34328c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34328cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343290: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x343290u;
    {
        const bool branch_taken_0x343290 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x343290) {
            ctx->pc = 0x343294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343290u;
            // 0x343294: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3432A8u;
            goto label_3432a8;
        }
    }
    ctx->pc = 0x343298u;
    // 0x343298: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x343298u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34329c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x34329cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3432a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3432A0u;
    {
        const bool branch_taken_0x3432a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3432A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3432A0u;
            // 0x3432a4: 0xa7a50178  sh          $a1, 0x178($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 376), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3432a0) {
            ctx->pc = 0x3432C0u;
            goto label_3432c0;
        }
    }
    ctx->pc = 0x3432A8u;
label_3432a8:
    // 0x3432a8: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x3432a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x3432ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3432acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3432b0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x3432b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3432b4: 0x0  nop
    ctx->pc = 0x3432b4u;
    // NOP
    // 0x3432b8: 0xf43825  or          $a3, $a3, $s4
    ctx->pc = 0x3432b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 20));
    // 0x3432bc: 0xa7a50178  sh          $a1, 0x178($sp)
    ctx->pc = 0x3432bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 376), (uint16_t)GPR_U32(ctx, 5));
label_3432c0:
    // 0x3432c0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x3432c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3432c4: 0xa7a9017e  sh          $t1, 0x17E($sp)
    ctx->pc = 0x3432c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 382), (uint16_t)GPR_U32(ctx, 9));
    // 0x3432c8: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x3432c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x3432cc: 0x24a56bf8  addiu       $a1, $a1, 0x6BF8
    ctx->pc = 0x3432ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27640));
    // 0x3432d0: 0x3c093f00  lui         $t1, 0x3F00
    ctx->pc = 0x3432d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16128 << 16));
    // 0x3432d4: 0xa7a70176  sh          $a3, 0x176($sp)
    ctx->pc = 0x3432d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 374), (uint16_t)GPR_U32(ctx, 7));
    // 0x3432d8: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x3432d8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3432dc: 0xa3a6017a  sb          $a2, 0x17A($sp)
    ctx->pc = 0x3432dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 378), (uint8_t)GPR_U32(ctx, 6));
    // 0x3432e0: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3432E0u;
    {
        const bool branch_taken_0x3432e0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x3432E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3432E0u;
            // 0x3432e4: 0xa7a5017c  sh          $a1, 0x17C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 380), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3432e0) {
            ctx->pc = 0x3432F4u;
            goto label_3432f4;
        }
    }
    ctx->pc = 0x3432E8u;
    // 0x3432e8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x3432e8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3432ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3432ECu;
    {
        const bool branch_taken_0x3432ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3432F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3432ECu;
            // 0x3432f0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3432ec) {
            ctx->pc = 0x343310u;
            goto label_343310;
        }
    }
    ctx->pc = 0x3432F4u;
label_3432f4:
    // 0x3432f4: 0x124842  srl         $t1, $s2, 1
    ctx->pc = 0x3432f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x3432f8: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x3432f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3432fc: 0x1324825  or          $t1, $t1, $s2
    ctx->pc = 0x3432fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 18));
    // 0x343300: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x343300u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343304: 0x0  nop
    ctx->pc = 0x343304u;
    // NOP
    // 0x343308: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x343308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34330c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34330cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_343310:
    // 0x343310: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x343310u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x343314: 0x3c094f00  lui         $t1, 0x4F00
    ctx->pc = 0x343314u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20224 << 16));
    // 0x343318: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x343318u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34331c: 0x0  nop
    ctx->pc = 0x34331cu;
    // NOP
    // 0x343320: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x343320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343324: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x343324u;
    {
        const bool branch_taken_0x343324 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x343324) {
            ctx->pc = 0x343328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343324u;
            // 0x343328: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34333Cu;
            goto label_34333c;
        }
    }
    ctx->pc = 0x34332Cu;
    // 0x34332c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34332cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x343330: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x343330u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x343334: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x343334u;
    {
        const bool branch_taken_0x343334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343334u;
            // 0x343338: 0xa7a80182  sh          $t0, 0x182($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 386), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343334) {
            ctx->pc = 0x343354u;
            goto label_343354;
        }
    }
    ctx->pc = 0x34333Cu;
label_34333c:
    // 0x34333c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x34333cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x343340: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x343340u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x343344: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x343344u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x343348: 0x0  nop
    ctx->pc = 0x343348u;
    // NOP
    // 0x34334c: 0x2499025  or          $s2, $s2, $t1
    ctx->pc = 0x34334cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 9));
    // 0x343350: 0xa7a80182  sh          $t0, 0x182($sp)
    ctx->pc = 0x343350u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 386), (uint16_t)GPR_U32(ctx, 8));
label_343354:
    // 0x343354: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x343354u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x343358: 0xa7aa018c  sh          $t2, 0x18C($sp)
    ctx->pc = 0x343358u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 396), (uint16_t)GPR_U32(ctx, 10));
    // 0x34335c: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x34335cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
    // 0x343360: 0xa7ad0196  sh          $t5, 0x196($sp)
    ctx->pc = 0x343360u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 406), (uint16_t)GPR_U32(ctx, 13));
    // 0x343364: 0x25080c90  addiu       $t0, $t0, 0xC90
    ctx->pc = 0x343364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3216));
    // 0x343368: 0x27ad00e0  addiu       $t5, $sp, 0xE0
    ctx->pc = 0x343368u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x34336c: 0xa7b20180  sh          $s2, 0x180($sp)
    ctx->pc = 0x34336cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 384), (uint16_t)GPR_U32(ctx, 18));
    // 0x343370: 0x240a002d  addiu       $t2, $zero, 0x2D
    ctx->pc = 0x343370u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x343374: 0xa7a30186  sh          $v1, 0x186($sp)
    ctx->pc = 0x343374u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 390), (uint16_t)GPR_U32(ctx, 3));
    // 0x343378: 0xa7af0188  sh          $t7, 0x188($sp)
    ctx->pc = 0x343378u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 392), (uint16_t)GPR_U32(ctx, 15));
    // 0x34337c: 0xa7af0192  sh          $t7, 0x192($sp)
    ctx->pc = 0x34337cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 402), (uint16_t)GPR_U32(ctx, 15));
    // 0x343380: 0xa7a7018a  sh          $a3, 0x18A($sp)
    ctx->pc = 0x343380u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 394), (uint16_t)GPR_U32(ctx, 7));
    // 0x343384: 0xa3a6018e  sb          $a2, 0x18E($sp)
    ctx->pc = 0x343384u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 398), (uint8_t)GPR_U32(ctx, 6));
    // 0x343388: 0xa7a50190  sh          $a1, 0x190($sp)
    ctx->pc = 0x343388u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 400), (uint16_t)GPR_U32(ctx, 5));
    // 0x34338c: 0xa7b20194  sh          $s2, 0x194($sp)
    ctx->pc = 0x34338cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 404), (uint16_t)GPR_U32(ctx, 18));
label_343390:
    // 0x343390: 0x85090000  lh          $t1, 0x0($t0)
    ctx->pc = 0x343390u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x343394: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x343394u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x343398: 0xa5a90000  sh          $t1, 0x0($t5)
    ctx->pc = 0x343398u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x34339c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x34339cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x3433a0: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x3433a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x3433a4: 0x1d40fffa  bgtz        $t2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3433A4u;
    {
        const bool branch_taken_0x3433a4 = (GPR_S32(ctx, 10) > 0);
        if (branch_taken_0x3433a4) {
            ctx->pc = 0x343390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_343390;
        }
    }
    ctx->pc = 0x3433ACu;
    // 0x3433ac: 0x27096ff8  addiu       $t1, $t8, 0x6FF8
    ctx->pc = 0x3433acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 24), 28664));
    // 0x3433b0: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x3433b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
    // 0x3433b4: 0xa7b900e0  sh          $t9, 0xE0($sp)
    ctx->pc = 0x3433b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 25));
    // 0x3433b8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x3433b8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3433bc: 0xa7a900e2  sh          $t1, 0xE2($sp)
    ctx->pc = 0x3433bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 226), (uint16_t)GPR_U32(ctx, 9));
    // 0x3433c0: 0x6a00004  bltz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3433C0u;
    {
        const bool branch_taken_0x3433c0 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x3433C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3433C0u;
            // 0x3433c4: 0xa7ae00e4  sh          $t6, 0xE4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 228), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3433c0) {
            ctx->pc = 0x3433D4u;
            goto label_3433d4;
        }
    }
    ctx->pc = 0x3433C8u;
    // 0x3433c8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3433c8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3433cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3433CCu;
    {
        const bool branch_taken_0x3433cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3433D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3433CCu;
            // 0x3433d0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3433cc) {
            ctx->pc = 0x3433F0u;
            goto label_3433f0;
        }
    }
    ctx->pc = 0x3433D4u;
label_3433d4:
    // 0x3433d4: 0x155042  srl         $t2, $s5, 1
    ctx->pc = 0x3433d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x3433d8: 0x32a80001  andi        $t0, $s5, 0x1
    ctx->pc = 0x3433d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x3433dc: 0x1485025  or          $t2, $t2, $t0
    ctx->pc = 0x3433dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x3433e0: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3433e0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3433e4: 0x0  nop
    ctx->pc = 0x3433e4u;
    // NOP
    // 0x3433e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3433e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3433ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3433ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3433f0:
    // 0x3433f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3433f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3433f4: 0x3c084f00  lui         $t0, 0x4F00
    ctx->pc = 0x3433f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20224 << 16));
    // 0x3433f8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3433f8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3433fc: 0x0  nop
    ctx->pc = 0x3433fcu;
    // NOP
    // 0x343400: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x343400u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343404: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x343404u;
    {
        const bool branch_taken_0x343404 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x343404) {
            ctx->pc = 0x343408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343404u;
            // 0x343408: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34341Cu;
            goto label_34341c;
        }
    }
    ctx->pc = 0x34340Cu;
    // 0x34340c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34340cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x343410: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x343410u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x343414: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x343414u;
    {
        const bool branch_taken_0x343414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343414u;
            // 0x343418: 0xa4100  sll         $t0, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343414) {
            ctx->pc = 0x343434u;
            goto label_343434;
        }
    }
    ctx->pc = 0x34341Cu;
label_34341c:
    // 0x34341c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x34341cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x343420: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x343420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x343424: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x343424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x343428: 0x0  nop
    ctx->pc = 0x343428u;
    // NOP
    // 0x34342c: 0x1485025  or          $t2, $t2, $t0
    ctx->pc = 0x34342cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x343430: 0xa4100  sll         $t0, $t2, 4
    ctx->pc = 0x343430u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_343434:
    // 0x343434: 0xa7ac00ea  sh          $t4, 0xEA($sp)
    ctx->pc = 0x343434u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 234), (uint16_t)GPR_U32(ctx, 12));
    // 0x343438: 0x26aa0008  addiu       $t2, $s5, 0x8
    ctx->pc = 0x343438u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x34343c: 0xa7a800e6  sh          $t0, 0xE6($sp)
    ctx->pc = 0x34343cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 230), (uint16_t)GPR_U32(ctx, 8));
    // 0x343440: 0xa7a900ec  sh          $t1, 0xEC($sp)
    ctx->pc = 0x343440u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 236), (uint16_t)GPR_U32(ctx, 9));
    // 0x343444: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x343444u;
    {
        const bool branch_taken_0x343444 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x343448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343444u;
            // 0x343448: 0xa7ab00ee  sh          $t3, 0xEE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 238), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343444) {
            ctx->pc = 0x343458u;
            goto label_343458;
        }
    }
    ctx->pc = 0x34344Cu;
    // 0x34344c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x34344cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343450: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x343450u;
    {
        const bool branch_taken_0x343450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343450u;
            // 0x343454: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x343450) {
            ctx->pc = 0x343474u;
            goto label_343474;
        }
    }
    ctx->pc = 0x343458u;
label_343458:
    // 0x343458: 0xa6842  srl         $t5, $t2, 1
    ctx->pc = 0x343458u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x34345c: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x34345cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x343460: 0x1aa6825  or          $t5, $t5, $t2
    ctx->pc = 0x343460u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 10));
    // 0x343464: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x343464u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343468: 0x0  nop
    ctx->pc = 0x343468u;
    // NOP
    // 0x34346c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34346cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x343470: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x343470u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_343474:
    // 0x343474: 0x3c0d3f00  lui         $t5, 0x3F00
    ctx->pc = 0x343474u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16128 << 16));
    // 0x343478: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x343478u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
    // 0x34347c: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x34347cu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343480: 0x0  nop
    ctx->pc = 0x343480u;
    // NOP
    // 0x343484: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x343484u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x343488: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x343488u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34348c: 0x0  nop
    ctx->pc = 0x34348cu;
    // NOP
    // 0x343490: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x343490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343494: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x343494u;
    {
        const bool branch_taken_0x343494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x343494) {
            ctx->pc = 0x343498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343494u;
            // 0x343498: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3434ACu;
            goto label_3434ac;
        }
    }
    ctx->pc = 0x34349Cu;
    // 0x34349c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34349cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3434a0: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x3434a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x3434a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3434A4u;
    {
        const bool branch_taken_0x3434a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3434A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3434A4u;
            // 0x3434a8: 0x7baa00d0  lq          $t2, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3434a4) {
            ctx->pc = 0x3434C4u;
            goto label_3434c4;
        }
    }
    ctx->pc = 0x3434ACu;
label_3434ac:
    // 0x3434ac: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x3434acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x3434b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3434b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3434b4: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x3434b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x3434b8: 0x0  nop
    ctx->pc = 0x3434b8u;
    // NOP
    // 0x3434bc: 0x1aa6825  or          $t5, $t5, $t2
    ctx->pc = 0x3434bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 10));
    // 0x3434c0: 0x7baa00d0  lq          $t2, 0xD0($sp)
    ctx->pc = 0x3434c0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3434c4:
    // 0x3434c4: 0xd7900  sll         $t7, $t5, 4
    ctx->pc = 0x3434c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x3434c8: 0xa7b900f4  sh          $t9, 0xF4($sp)
    ctx->pc = 0x3434c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 244), (uint16_t)GPR_U32(ctx, 25));
    // 0x3434cc: 0xa7ae00f8  sh          $t6, 0xF8($sp)
    ctx->pc = 0x3434ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 248), (uint16_t)GPR_U32(ctx, 14));
    // 0x3434d0: 0x254d6ff8  addiu       $t5, $t2, 0x6FF8
    ctx->pc = 0x3434d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 28664));
    // 0x3434d4: 0xa7af00f0  sh          $t7, 0xF0($sp)
    ctx->pc = 0x3434d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 15));
    // 0x3434d8: 0x3c0a3f00  lui         $t2, 0x3F00
    ctx->pc = 0x3434d8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16128 << 16));
    // 0x3434dc: 0xa3a600f2  sb          $a2, 0xF2($sp)
    ctx->pc = 0x3434dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 242), (uint8_t)GPR_U32(ctx, 6));
    // 0x3434e0: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x3434e0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3434e4: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3434E4u;
    {
        const bool branch_taken_0x3434e4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3434E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3434E4u;
            // 0x3434e8: 0xa7ad00f6  sh          $t5, 0xF6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 246), (uint16_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3434e4) {
            ctx->pc = 0x3434F8u;
            goto label_3434f8;
        }
    }
    ctx->pc = 0x3434ECu;
    // 0x3434ec: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3434ecu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3434f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3434F0u;
    {
        const bool branch_taken_0x3434f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3434F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3434F0u;
            // 0x3434f4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3434f0) {
            ctx->pc = 0x343514u;
            goto label_343514;
        }
    }
    ctx->pc = 0x3434F8u;
label_3434f8:
    // 0x3434f8: 0x117042  srl         $t6, $s1, 1
    ctx->pc = 0x3434f8u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x3434fc: 0x322a0001  andi        $t2, $s1, 0x1
    ctx->pc = 0x3434fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x343500: 0x1ca7025  or          $t6, $t6, $t2
    ctx->pc = 0x343500u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 10));
    // 0x343504: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x343504u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343508: 0x0  nop
    ctx->pc = 0x343508u;
    // NOP
    // 0x34350c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34350cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x343510: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x343510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_343514:
    // 0x343514: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x343514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x343518: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x343518u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
    // 0x34351c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x34351cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343520: 0x0  nop
    ctx->pc = 0x343520u;
    // NOP
    // 0x343524: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x343524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343528: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x343528u;
    {
        const bool branch_taken_0x343528 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x343528) {
            ctx->pc = 0x34352Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343528u;
            // 0x34352c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x343540u;
            goto label_343540;
        }
    }
    ctx->pc = 0x343530u;
    // 0x343530: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x343530u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x343534: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x343534u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x343538: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x343538u;
    {
        const bool branch_taken_0x343538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34353Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343538u;
            // 0x34353c: 0x7baa00c0  lq          $t2, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343538) {
            ctx->pc = 0x343558u;
            goto label_343558;
        }
    }
    ctx->pc = 0x343540u;
label_343540:
    // 0x343540: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x343540u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x343544: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x343544u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x343548: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x343548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x34354c: 0x0  nop
    ctx->pc = 0x34354cu;
    // NOP
    // 0x343550: 0x1ca7025  or          $t6, $t6, $t2
    ctx->pc = 0x343550u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 10));
    // 0x343554: 0x7baa00c0  lq          $t2, 0xC0($sp)
    ctx->pc = 0x343554u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_343558:
    // 0x343558: 0xa7ab0102  sh          $t3, 0x102($sp)
    ctx->pc = 0x343558u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 258), (uint16_t)GPR_U32(ctx, 11));
    // 0x34355c: 0xa7ac00fe  sh          $t4, 0xFE($sp)
    ctx->pc = 0x34355cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 254), (uint16_t)GPR_U32(ctx, 12));
    // 0x343560: 0x254b6ff8  addiu       $t3, $t2, 0x6FF8
    ctx->pc = 0x343560u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 28664));
    // 0x343564: 0xe6100  sll         $t4, $t6, 4
    ctx->pc = 0x343564u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x343568: 0x266afff8  addiu       $t2, $s3, -0x8
    ctx->pc = 0x343568u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    // 0x34356c: 0xa7ac00fa  sh          $t4, 0xFA($sp)
    ctx->pc = 0x34356cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 250), (uint16_t)GPR_U32(ctx, 12));
    // 0x343570: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x343570u;
    {
        const bool branch_taken_0x343570 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x343574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343570u;
            // 0x343574: 0xa7ab0100  sh          $t3, 0x100($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343570) {
            ctx->pc = 0x343584u;
            goto label_343584;
        }
    }
    ctx->pc = 0x343578u;
    // 0x343578: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x343578u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34357c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34357Cu;
    {
        const bool branch_taken_0x34357c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34357Cu;
            // 0x343580: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34357c) {
            ctx->pc = 0x3435A0u;
            goto label_3435a0;
        }
    }
    ctx->pc = 0x343584u;
label_343584:
    // 0x343584: 0xa7042  srl         $t6, $t2, 1
    ctx->pc = 0x343584u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x343588: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x343588u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x34358c: 0x1ca7025  or          $t6, $t6, $t2
    ctx->pc = 0x34358cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 10));
    // 0x343590: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x343590u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343594: 0x0  nop
    ctx->pc = 0x343594u;
    // NOP
    // 0x343598: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x343598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34359c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34359cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3435a0:
    // 0x3435a0: 0x3c0e3f00  lui         $t6, 0x3F00
    ctx->pc = 0x3435a0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16128 << 16));
    // 0x3435a4: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x3435a4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
    // 0x3435a8: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x3435a8u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3435ac: 0x0  nop
    ctx->pc = 0x3435acu;
    // NOP
    // 0x3435b0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3435b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3435b4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3435b4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3435b8: 0x0  nop
    ctx->pc = 0x3435b8u;
    // NOP
    // 0x3435bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3435bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3435c0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3435C0u;
    {
        const bool branch_taken_0x3435c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3435c0) {
            ctx->pc = 0x3435C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3435C0u;
            // 0x3435c4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3435D8u;
            goto label_3435d8;
        }
    }
    ctx->pc = 0x3435C8u;
    // 0x3435c8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3435c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3435cc: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x3435ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x3435d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3435D0u;
    {
        const bool branch_taken_0x3435d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3435D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3435D0u;
            // 0x3435d4: 0xe5100  sll         $t2, $t6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3435d0) {
            ctx->pc = 0x3435F0u;
            goto label_3435f0;
        }
    }
    ctx->pc = 0x3435D8u;
label_3435d8:
    // 0x3435d8: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x3435d8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x3435dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3435dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3435e0: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x3435e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x3435e4: 0x0  nop
    ctx->pc = 0x3435e4u;
    // NOP
    // 0x3435e8: 0x1ca7025  or          $t6, $t6, $t2
    ctx->pc = 0x3435e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 10));
    // 0x3435ec: 0xe5100  sll         $t2, $t6, 4
    ctx->pc = 0x3435ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_3435f0:
    // 0x3435f0: 0xa7be0108  sh          $fp, 0x108($sp)
    ctx->pc = 0x3435f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 264), (uint16_t)GPR_U32(ctx, 30));
    // 0x3435f4: 0x7bae00a0  lq          $t6, 0xA0($sp)
    ctx->pc = 0x3435f4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3435f8: 0xa7b7010c  sh          $s7, 0x10C($sp)
    ctx->pc = 0x3435f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 268), (uint16_t)GPR_U32(ctx, 23));
    // 0x3435fc: 0xa7aa0104  sh          $t2, 0x104($sp)
    ctx->pc = 0x3435fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 10));
    // 0x343600: 0x25ce6ff8  addiu       $t6, $t6, 0x6FF8
    ctx->pc = 0x343600u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 28664));
    // 0x343604: 0xa7ae010a  sh          $t6, 0x10A($sp)
    ctx->pc = 0x343604u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 266), (uint16_t)GPR_U32(ctx, 14));
    // 0x343608: 0x3c0e3f00  lui         $t6, 0x3F00
    ctx->pc = 0x343608u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16128 << 16));
    // 0x34360c: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x34360cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x343610: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x343610u;
    {
        const bool branch_taken_0x343610 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x343614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343610u;
            // 0x343614: 0xa3a60106  sb          $a2, 0x106($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 262), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343610) {
            ctx->pc = 0x343624u;
            goto label_343624;
        }
    }
    ctx->pc = 0x343618u;
    // 0x343618: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x343618u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34361c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34361Cu;
    {
        const bool branch_taken_0x34361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34361Cu;
            // 0x343620: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34361c) {
            ctx->pc = 0x343640u;
            goto label_343640;
        }
    }
    ctx->pc = 0x343624u;
label_343624:
    // 0x343624: 0x108842  srl         $s1, $s0, 1
    ctx->pc = 0x343624u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x343628: 0x320e0001  andi        $t6, $s0, 0x1
    ctx->pc = 0x343628u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x34362c: 0x22e8825  or          $s1, $s1, $t6
    ctx->pc = 0x34362cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 14));
    // 0x343630: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x343630u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343634: 0x0  nop
    ctx->pc = 0x343634u;
    // NOP
    // 0x343638: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x343638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34363c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34363cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_343640:
    // 0x343640: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x343640u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x343644: 0x3c0e4f00  lui         $t6, 0x4F00
    ctx->pc = 0x343644u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)20224 << 16));
    // 0x343648: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x343648u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34364c: 0x0  nop
    ctx->pc = 0x34364cu;
    // NOP
    // 0x343650: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x343650u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343654: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x343654u;
    {
        const bool branch_taken_0x343654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x343654) {
            ctx->pc = 0x343658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343654u;
            // 0x343658: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34366Cu;
            goto label_34366c;
        }
    }
    ctx->pc = 0x34365Cu;
    // 0x34365c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34365cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x343660: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x343660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x343664: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x343664u;
    {
        const bool branch_taken_0x343664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343664u;
            // 0x343668: 0xa7ab0114  sh          $t3, 0x114($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 276), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343664) {
            ctx->pc = 0x343684u;
            goto label_343684;
        }
    }
    ctx->pc = 0x34366Cu;
label_34366c:
    // 0x34366c: 0x3c0e8000  lui         $t6, 0x8000
    ctx->pc = 0x34366cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32768 << 16));
    // 0x343670: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x343670u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x343674: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x343674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x343678: 0x0  nop
    ctx->pc = 0x343678u;
    // NOP
    // 0x34367c: 0x20e8025  or          $s0, $s0, $t6
    ctx->pc = 0x34367cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 14));
    // 0x343680: 0xa7ab0114  sh          $t3, 0x114($sp)
    ctx->pc = 0x343680u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 276), (uint16_t)GPR_U32(ctx, 11));
label_343684:
    // 0x343684: 0x105900  sll         $t3, $s0, 4
    ctx->pc = 0x343684u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x343688: 0xa7aa0118  sh          $t2, 0x118($sp)
    ctx->pc = 0x343688u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 280), (uint16_t)GPR_U32(ctx, 10));
    // 0x34368c: 0xa7ab010e  sh          $t3, 0x10E($sp)
    ctx->pc = 0x34368cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 270), (uint16_t)GPR_U32(ctx, 11));
    // 0x343690: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x343690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x343694: 0x27ab01a8  addiu       $t3, $sp, 0x1A8
    ctx->pc = 0x343694u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x343698: 0xa7ad011e  sh          $t5, 0x11E($sp)
    ctx->pc = 0x343698u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 286), (uint16_t)GPR_U32(ctx, 13));
    // 0x34369c: 0xa7ac0122  sh          $t4, 0x122($sp)
    ctx->pc = 0x34369cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 290), (uint16_t)GPR_U32(ctx, 12));
    // 0x3436a0: 0xa7af012c  sh          $t7, 0x12C($sp)
    ctx->pc = 0x3436a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 300), (uint16_t)GPR_U32(ctx, 15));
    // 0x3436a4: 0xa7a80136  sh          $t0, 0x136($sp)
    ctx->pc = 0x3436a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 310), (uint16_t)GPR_U32(ctx, 8));
    // 0x3436a8: 0xa7a30112  sh          $v1, 0x112($sp)
    ctx->pc = 0x3436a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 274), (uint16_t)GPR_U32(ctx, 3));
    // 0x3436ac: 0xa7a30126  sh          $v1, 0x126($sp)
    ctx->pc = 0x3436acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 294), (uint16_t)GPR_U32(ctx, 3));
    // 0x3436b0: 0xa7a70116  sh          $a3, 0x116($sp)
    ctx->pc = 0x3436b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 278), (uint16_t)GPR_U32(ctx, 7));
    // 0x3436b4: 0xa7a7012a  sh          $a3, 0x12A($sp)
    ctx->pc = 0x3436b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 298), (uint16_t)GPR_U32(ctx, 7));
    // 0x3436b8: 0xa3a6011a  sb          $a2, 0x11A($sp)
    ctx->pc = 0x3436b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 282), (uint8_t)GPR_U32(ctx, 6));
    // 0x3436bc: 0xa3a6012e  sb          $a2, 0x12E($sp)
    ctx->pc = 0x3436bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 302), (uint8_t)GPR_U32(ctx, 6));
    // 0x3436c0: 0xa7a5011c  sh          $a1, 0x11C($sp)
    ctx->pc = 0x3436c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 284), (uint16_t)GPR_U32(ctx, 5));
    // 0x3436c4: 0xa7a50130  sh          $a1, 0x130($sp)
    ctx->pc = 0x3436c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 304), (uint16_t)GPR_U32(ctx, 5));
    // 0x3436c8: 0xa7b20120  sh          $s2, 0x120($sp)
    ctx->pc = 0x3436c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 288), (uint16_t)GPR_U32(ctx, 18));
    // 0x3436cc: 0xa7b20134  sh          $s2, 0x134($sp)
    ctx->pc = 0x3436ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 308), (uint16_t)GPR_U32(ctx, 18));
    // 0x3436d0: 0xa7a90128  sh          $t1, 0x128($sp)
    ctx->pc = 0x3436d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 296), (uint16_t)GPR_U32(ctx, 9));
    // 0x3436d4: 0x11600008  beqz        $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3436D4u;
    {
        const bool branch_taken_0x3436d4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3436D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3436D4u;
            // 0x3436d8: 0xa7a90132  sh          $t1, 0x132($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 306), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3436d4) {
            ctx->pc = 0x3436F8u;
            goto label_3436f8;
        }
    }
    ctx->pc = 0x3436DCu;
label_3436dc:
    // 0x3436dc: 0xa1600000  sb          $zero, 0x0($t3)
    ctx->pc = 0x3436dcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3436e0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3436e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3436e4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3436e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3436e8: 0x0  nop
    ctx->pc = 0x3436e8u;
    // NOP
    // 0x3436ec: 0x0  nop
    ctx->pc = 0x3436ecu;
    // NOP
    // 0x3436f0: 0x1540fffa  bnez        $t2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3436F0u;
    {
        const bool branch_taken_0x3436f0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x3436f0) {
            ctx->pc = 0x3436DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3436dc;
        }
    }
    ctx->pc = 0x3436F8u;
label_3436f8:
    // 0x3436f8: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x3436f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3436fc: 0xafa301a8  sw          $v1, 0x1A8($sp)
    ctx->pc = 0x3436fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
    // 0x343700: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x343700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343704: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x343704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x343708: 0xafa301ac  sw          $v1, 0x1AC($sp)
    ctx->pc = 0x343708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
    // 0x34370c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x34370cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343710: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x343710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x343714: 0x8c7189f0  lw          $s1, -0x7610($v1)
    ctx->pc = 0x343714u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
    // 0x343718: 0x45000069  bc1f        . + 4 + (0x69 << 2)
    ctx->pc = 0x343718u;
    {
        const bool branch_taken_0x343718 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34371Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343718u;
            // 0x34371c: 0x8c950068  lw          $s5, 0x68($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343718) {
            ctx->pc = 0x3438C0u;
            goto label_3438c0;
        }
    }
    ctx->pc = 0x343720u;
    // 0x343720: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x343720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x343724: 0x92230029  lbu         $v1, 0x29($s1)
    ctx->pc = 0x343724u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x343728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x343728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34372c: 0x0  nop
    ctx->pc = 0x34372cu;
    // NOP
    // 0x343730: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x343730u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x343734: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x343734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x343738: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x343738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34373c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x34373cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x343740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x343740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343744: 0x0  nop
    ctx->pc = 0x343744u;
    // NOP
    // 0x343748: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x343748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34374c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x34374Cu;
    {
        const bool branch_taken_0x34374c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x343750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34374Cu;
            // 0x343750: 0x8c7401a8  lw          $s4, 0x1A8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34374c) {
            ctx->pc = 0x343764u;
            goto label_343764;
        }
    }
    ctx->pc = 0x343754u;
    // 0x343754: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x343754u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x343758: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x343758u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x34375c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34375Cu;
    {
        const bool branch_taken_0x34375c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34375Cu;
            // 0x343760: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34375c) {
            ctx->pc = 0x343780u;
            goto label_343780;
        }
    }
    ctx->pc = 0x343764u;
label_343764:
    // 0x343764: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x343764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x343768: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x343768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x34376c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34376cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x343770: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x343770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x343774: 0x0  nop
    ctx->pc = 0x343774u;
    // NOP
    // 0x343778: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x343778u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x34377c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34377cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_343780:
    // 0x343780: 0x24050270  addiu       $a1, $zero, 0x270
    ctx->pc = 0x343780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x343784: 0xc05750c  jal         func_15D430
    ctx->pc = 0x343784u;
    SET_GPR_U32(ctx, 31, 0x34378Cu);
    ctx->pc = 0x343788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343784u;
            // 0x343788: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34378Cu; }
        if (ctx->pc != 0x34378Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34378Cu; }
        if (ctx->pc != 0x34378Cu) { return; }
    }
    ctx->pc = 0x34378Cu;
label_34378c:
    // 0x34378c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x34378cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343790: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x343790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x343794: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x343794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x343798: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x343798u;
    {
        const bool branch_taken_0x343798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34379Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343798u;
            // 0x34379c: 0xdea60000  ld          $a2, 0x0($s5) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343798) {
            ctx->pc = 0x3437B4u;
            goto label_3437b4;
        }
    }
    ctx->pc = 0x3437A0u;
    // 0x3437a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3437a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3437a4: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x3437a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
    // 0x3437a8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3437a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x3437ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3437ACu;
    {
        const bool branch_taken_0x3437ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3437B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3437ACu;
            // 0x3437b0: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3437ac) {
            ctx->pc = 0x3437C4u;
            goto label_3437c4;
        }
    }
    ctx->pc = 0x3437B4u;
label_3437b4:
    // 0x3437b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3437b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3437b8: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x3437b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
    // 0x3437bc: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3437bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x3437c0: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x3437c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_3437c4:
    // 0x3437c4: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x3437c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x3437c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3437c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3437cc: 0xdea20008  ld          $v0, 0x8($s5)
    ctx->pc = 0x3437ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3437d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3437d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3437d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3437d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3437d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3437d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3437dc: 0xc057540  jal         func_15D500
    ctx->pc = 0x3437DCu;
    SET_GPR_U32(ctx, 31, 0x3437E4u);
    ctx->pc = 0x3437E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3437DCu;
            // 0x3437e0: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3437E4u; }
        if (ctx->pc != 0x3437E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3437E4u; }
        if (ctx->pc != 0x3437E4u) { return; }
    }
    ctx->pc = 0x3437E4u;
label_3437e4:
    // 0x3437e4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3437e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3437e8: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x3437e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_3437ec:
    // 0x3437ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3437ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3437f0: 0xdea60000  ld          $a2, 0x0($s5)
    ctx->pc = 0x3437f0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3437f4: 0xdea70008  ld          $a3, 0x8($s5)
    ctx->pc = 0x3437f4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3437f8: 0xc057540  jal         func_15D500
    ctx->pc = 0x3437F8u;
    SET_GPR_U32(ctx, 31, 0x343800u);
    ctx->pc = 0x3437FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3437F8u;
            // 0x3437fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343800u; }
        if (ctx->pc != 0x343800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343800u; }
        if (ctx->pc != 0x343800u) { return; }
    }
    ctx->pc = 0x343800u;
label_343800:
    // 0x343800: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x343800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x343804: 0x2e42000b  sltiu       $v0, $s2, 0xB
    ctx->pc = 0x343804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x343808: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x343808u;
    {
        const bool branch_taken_0x343808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343808) {
            ctx->pc = 0x34380Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343808u;
            // 0x34380c: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3437ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3437ec;
        }
    }
    ctx->pc = 0x343810u;
    // 0x343810: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x343810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_343814:
    // 0x343814: 0x92840008  lbu         $a0, 0x8($s4)
    ctx->pc = 0x343814u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x343818: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x343818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34381c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x34381cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x343820: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x343820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343824: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x343824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x343828: 0x34427f7f  ori         $v0, $v0, 0x7F7F
    ctx->pc = 0x343828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32639);
    // 0x34382c: 0x903818  mult        $a3, $a0, $s0
    ctx->pc = 0x34382cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x343830: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x343830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343834: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x343834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x343838: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x343838u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x34383c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34383cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343840: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x343840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x343844: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x343844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x343848: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x343848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x34384c: 0xc057540  jal         func_15D500
    ctx->pc = 0x34384Cu;
    SET_GPR_U32(ctx, 31, 0x343854u);
    ctx->pc = 0x343850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34384Cu;
            // 0x343850: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343854u; }
        if (ctx->pc != 0x343854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343854u; }
        if (ctx->pc != 0x343854u) { return; }
    }
    ctx->pc = 0x343854u;
label_343854:
    // 0x343854: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x343854u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x343858: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x343858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34385c: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x34385cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x343860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x343860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343864: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x343864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x343868: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x343868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x34386c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x34386cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x343870: 0xc057540  jal         func_15D500
    ctx->pc = 0x343870u;
    SET_GPR_U32(ctx, 31, 0x343878u);
    ctx->pc = 0x343874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343870u;
            // 0x343874: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343878u; }
        if (ctx->pc != 0x343878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343878u; }
        if (ctx->pc != 0x343878u) { return; }
    }
    ctx->pc = 0x343878u;
label_343878:
    // 0x343878: 0x96870002  lhu         $a3, 0x2($s4)
    ctx->pc = 0x343878u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x34387c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x34387cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x343880: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x343880u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x343884: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x343884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x343888: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x343888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34388c: 0x92860009  lbu         $a2, 0x9($s4)
    ctx->pc = 0x34388cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 9)));
    // 0x343890: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x343890u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x343894: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x343894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343898: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x343898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x34389c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34389cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3438a0: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x3438a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3438a4: 0xc057540  jal         func_15D500
    ctx->pc = 0x3438A4u;
    SET_GPR_U32(ctx, 31, 0x3438ACu);
    ctx->pc = 0x3438A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3438A4u;
            // 0x3438a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3438ACu; }
        if (ctx->pc != 0x3438ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3438ACu; }
        if (ctx->pc != 0x3438ACu) { return; }
    }
    ctx->pc = 0x3438ACu;
label_3438ac:
    // 0x3438ac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3438acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3438b0: 0x1620ffd8  bnez        $s1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x3438B0u;
    {
        const bool branch_taken_0x3438b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3438B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3438B0u;
            // 0x3438b4: 0x2694000a  addiu       $s4, $s4, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3438b0) {
            ctx->pc = 0x343814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_343814;
        }
    }
    ctx->pc = 0x3438B8u;
    // 0x3438b8: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x3438B8u;
    SET_GPR_U32(ctx, 31, 0x3438C0u);
    ctx->pc = 0x3438BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3438B8u;
            // 0x3438bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3438C0u; }
        if (ctx->pc != 0x3438C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3438C0u; }
        if (ctx->pc != 0x3438C0u) { return; }
    }
    ctx->pc = 0x3438C0u;
label_3438c0:
    // 0x3438c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3438c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3438c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3438c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3438c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3438c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3438cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3438ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3438d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3438d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3438d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3438d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3438d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3438d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3438dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3438dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3438e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3438e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3438e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3438e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3438e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3438E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3438ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3438E8u;
            // 0x3438ec: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3438F0u;
}
