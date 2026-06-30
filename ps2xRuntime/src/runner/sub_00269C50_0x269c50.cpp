#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00269C50
// Address: 0x269c50 - 0x269e40
void sub_00269C50_0x269c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269C50_0x269c50");
#endif

    switch (ctx->pc) {
        case 0x269c68u: goto label_269c68;
        case 0x269ca0u: goto label_269ca0;
        case 0x269cf8u: goto label_269cf8;
        case 0x269d08u: goto label_269d08;
        default: break;
    }

    ctx->pc = 0x269c50u;

    // 0x269c50: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x269c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x269c54: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x269c54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x269c58: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x269C58u;
    {
        const bool branch_taken_0x269c58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269C58u;
            // 0x269c5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c58) {
            ctx->pc = 0x269C88u;
            goto label_269c88;
        }
    }
    ctx->pc = 0x269C60u;
    // 0x269c60: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x269c60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269c64: 0x0  nop
    ctx->pc = 0x269c64u;
    // NOP
label_269c68:
    // 0x269c68: 0xac600fb4  sw          $zero, 0xFB4($v1)
    ctx->pc = 0x269c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4020), GPR_U32(ctx, 0));
    // 0x269c6c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x269c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x269c70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x269c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x269c74: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x269c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x269c78: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x269c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x269c7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x269C7Cu;
    {
        const bool branch_taken_0x269c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269c7c) {
            ctx->pc = 0x269C68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269c68;
        }
    }
    ctx->pc = 0x269C84u;
    // 0x269c84: 0x0  nop
    ctx->pc = 0x269c84u;
    // NOP
label_269c88:
    // 0x269c88: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x269c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x269c8c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x269c8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x269c90: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x269C90u;
    {
        const bool branch_taken_0x269c90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269C90u;
            // 0x269c94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c90) {
            ctx->pc = 0x269CC0u;
            goto label_269cc0;
        }
    }
    ctx->pc = 0x269C98u;
    // 0x269c98: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x269c98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269c9c: 0x0  nop
    ctx->pc = 0x269c9cu;
    // NOP
label_269ca0:
    // 0x269ca0: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x269ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x269ca4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x269ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x269ca8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x269ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x269cac: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x269cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x269cb0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x269cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x269cb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x269CB4u;
    {
        const bool branch_taken_0x269cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269cb4) {
            ctx->pc = 0x269CA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269ca0;
        }
    }
    ctx->pc = 0x269CBCu;
    // 0x269cbc: 0x0  nop
    ctx->pc = 0x269cbcu;
    // NOP
label_269cc0:
    // 0x269cc0: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x269cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x269cc4: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x269cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x269cc8: 0x3c04aedb  lui         $a0, 0xAEDB
    ctx->pc = 0x269cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44763 << 16));
    // 0x269ccc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x269cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269cd0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x269cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269cd4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x269cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x269cd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x269cd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269cdc: 0x3483e6fe  ori         $v1, $a0, 0xE6FE
    ctx->pc = 0x269cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59134);
    // 0x269ce0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x269ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ce4: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x269ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x269ce8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x269ce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269cec: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x269CECu;
    {
        const bool branch_taken_0x269cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269CECu;
            // 0x269cf0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269cec) {
            ctx->pc = 0x269E10u;
            goto label_269e10;
        }
    }
    ctx->pc = 0x269CF4u;
    // 0x269cf4: 0x0  nop
    ctx->pc = 0x269cf4u;
    // NOP
label_269cf8:
    // 0x269cf8: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x269cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
    // 0x269cfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x269cfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269d00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x269d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269d04: 0x0  nop
    ctx->pc = 0x269d04u;
    // NOP
label_269d08:
    // 0x269d08: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x269d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x269d0c: 0x106a003a  beq         $v1, $t2, . + 4 + (0x3A << 2)
    ctx->pc = 0x269D0Cu;
    {
        const bool branch_taken_0x269d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        if (branch_taken_0x269d0c) {
            ctx->pc = 0x269DF8u;
            goto label_269df8;
        }
    }
    ctx->pc = 0x269D14u;
    // 0x269d14: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x269d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x269d18: 0xc4470008  lwc1        $f7, 0x8($v0)
    ctx->pc = 0x269d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x269d1c: 0x8cc80010  lw          $t0, 0x10($a2)
    ctx->pc = 0x269d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x269d20: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x269d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x269d24: 0xc4480004  lwc1        $f8, 0x4($v0)
    ctx->pc = 0x269d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x269d28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x269d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269d2c: 0xc50a0000  lwc1        $f10, 0x0($t0)
    ctx->pc = 0x269d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x269d30: 0xc5090008  lwc1        $f9, 0x8($t0)
    ctx->pc = 0x269d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x269d34: 0xc50b0004  lwc1        $f11, 0x4($t0)
    ctx->pc = 0x269d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x269d38: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x269d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x269d3c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x269d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269d40: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x269d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269d44: 0x460a2b81  sub.s       $f14, $f5, $f10
    ctx->pc = 0x269d44u;
    ctx->f[14] = FPU_SUB_S(ctx->f[5], ctx->f[10]);
    // 0x269d48: 0x46090301  sub.s       $f12, $f0, $f9
    ctx->pc = 0x269d48u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x269d4c: 0x46077142  mul.s       $f5, $f14, $f7
    ctx->pc = 0x269d4cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
    // 0x269d50: 0x46066002  mul.s       $f0, $f12, $f6
    ctx->pc = 0x269d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x269d54: 0x460b1341  sub.s       $f13, $f2, $f11
    ctx->pc = 0x269d54u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
    // 0x269d58: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x269d58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x269d5c: 0x46066942  mul.s       $f5, $f13, $f6
    ctx->pc = 0x269d5cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[13], ctx->f[6]);
    // 0x269d60: 0x46076882  mul.s       $f2, $f13, $f7
    ctx->pc = 0x269d60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[7]);
    // 0x269d64: 0x46086182  mul.s       $f6, $f12, $f8
    ctx->pc = 0x269d64u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x269d68: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x269d68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x269d6c: 0x460b01c2  mul.s       $f7, $f0, $f11
    ctx->pc = 0x269d6cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x269d70: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x269d70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x269d74: 0x46071018  adda.s      $f2, $f7
    ctx->pc = 0x269d74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x269d78: 0x46087082  mul.s       $f2, $f14, $f8
    ctx->pc = 0x269d78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x269d7c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x269d7cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x269d80: 0x4609115c  madd.s      $f5, $f2, $f9
    ctx->pc = 0x269d80u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[9]));
    // 0x269d84: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x269d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x269d88: 0x460e7082  mul.s       $f2, $f14, $f14
    ctx->pc = 0x269d88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x269d8c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x269d8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x269d90: 0x460c601c  madd.s      $f0, $f12, $f12
    ctx->pc = 0x269d90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[12]));
    // 0x269d94: 0x46002082  mul.s       $f2, $f4, $f0
    ctx->pc = 0x269d94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x269d98: 0x46002805  abs.s       $f0, $f5
    ctx->pc = 0x269d98u;
    ctx->f[0] = FPU_ABS_S(ctx->f[5]);
    // 0x269d9c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x269d9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x269da0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x269da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269da4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x269DA4u;
    {
        const bool branch_taken_0x269da4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x269da4) {
            ctx->pc = 0x269DF8u;
            goto label_269df8;
        }
    }
    ctx->pc = 0x269DACu;
    // 0x269dac: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x269dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x269db0: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x269db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269db4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x269db4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269db8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x269DB8u;
    {
        const bool branch_taken_0x269db8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x269DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269DB8u;
            // 0x269dbc: 0x8c68000c  lw          $t0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269db8) {
            ctx->pc = 0x269DD8u;
            goto label_269dd8;
        }
    }
    ctx->pc = 0x269DC0u;
    // 0x269dc0: 0xc5020040  lwc1        $f2, 0x40($t0)
    ctx->pc = 0x269dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269dc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x269dc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x269dc8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x269dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269dcc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x269DCCu;
    {
        const bool branch_taken_0x269dcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269dcc) {
            ctx->pc = 0x269DF8u;
            goto label_269df8;
        }
    }
    ctx->pc = 0x269DD4u;
    // 0x269dd4: 0x0  nop
    ctx->pc = 0x269dd4u;
    // NOP
label_269dd8:
    // 0x269dd8: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x269dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x269ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269de0: 0x8d030044  lw          $v1, 0x44($t0)
    ctx->pc = 0x269de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x269de4: 0x8c4a0018  lw          $t2, 0x18($v0)
    ctx->pc = 0x269de4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x269de8: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x269de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x269dec: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x269decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269df0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x269DF0u;
    {
        const bool branch_taken_0x269df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269DF0u;
            // 0x269df4: 0x2c670001  sltiu       $a3, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269df0) {
            ctx->pc = 0x269E08u;
            goto label_269e08;
        }
    }
    ctx->pc = 0x269DF8u;
label_269df8:
    // 0x269df8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x269df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x269dfc: 0x29230003  slti        $v1, $t1, 0x3
    ctx->pc = 0x269dfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x269e00: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x269E00u;
    {
        const bool branch_taken_0x269e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x269E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269E00u;
            // 0x269e04: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e00) {
            ctx->pc = 0x269D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269d08;
        }
    }
    ctx->pc = 0x269E08u;
label_269e08:
    // 0x269e08: 0x39230003  xori        $v1, $t1, 0x3
    ctx->pc = 0x269e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)3);
    // 0x269e0c: 0x2c660001  sltiu       $a2, $v1, 0x1
    ctx->pc = 0x269e0cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_269e10:
    // 0x269e10: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x269e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x269e14: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x269e14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x269e18: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x269E18u;
    {
        const bool branch_taken_0x269e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x269E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269E18u;
            // 0x269e1c: 0x71e3c  dsll32      $v1, $a3, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e18) {
            ctx->pc = 0x269E30u;
            goto label_269e30;
        }
    }
    ctx->pc = 0x269E20u;
    // 0x269e20: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x269e20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x269e24: 0x1060ffb4  beqz        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x269E24u;
    {
        const bool branch_taken_0x269e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e24) {
            ctx->pc = 0x269CF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269cf8;
        }
    }
    ctx->pc = 0x269E2Cu;
    // 0x269e2c: 0x0  nop
    ctx->pc = 0x269e2cu;
    // NOP
label_269e30:
    // 0x269e30: 0x3e00008  jr          $ra
    ctx->pc = 0x269E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269E38u;
    // 0x269e38: 0x0  nop
    ctx->pc = 0x269e38u;
    // NOP
    // 0x269e3c: 0x0  nop
    ctx->pc = 0x269e3cu;
    // NOP
}
