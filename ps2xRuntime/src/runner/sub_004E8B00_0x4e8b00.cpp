#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E8B00
// Address: 0x4e8b00 - 0x4e8d70
void sub_004E8B00_0x4e8b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8B00_0x4e8b00");
#endif

    switch (ctx->pc) {
        case 0x4e8be8u: goto label_4e8be8;
        case 0x4e8c28u: goto label_4e8c28;
        case 0x4e8c80u: goto label_4e8c80;
        case 0x4e8ce4u: goto label_4e8ce4;
        case 0x4e8d30u: goto label_4e8d30;
        default: break;
    }

    ctx->pc = 0x4e8b00u;

    // 0x4e8b00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4e8b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4e8b04: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x4e8b04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
    // 0x4e8b08: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4e8b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4e8b0c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4e8b0cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8b10: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4e8b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x4e8b14: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x4e8b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x4e8b18: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e8b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x4e8b1c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4e8b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4e8b20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4e8b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4e8b24: 0x3c09438c  lui         $t1, 0x438C
    ctx->pc = 0x4e8b24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17292 << 16));
    // 0x4e8b28: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e8b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4e8b2c: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4e8b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x4e8b30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4e8b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4e8b34: 0x26528e80  addiu       $s2, $s2, -0x7180
    ctx->pc = 0x4e8b34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938240));
    // 0x4e8b38: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e8b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x4e8b3c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4e8b3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8b40: 0x8451838a  lh          $s1, -0x7C76($v0)
    ctx->pc = 0x4e8b40u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935434)));
    // 0x4e8b44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e8b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8b48: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x4e8b48u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4e8b4c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x4e8b4cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4e8b50: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4e8b50u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x4e8b54: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x4e8b58: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4e8b58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4e8b5c: 0x84508388  lh          $s0, -0x7C78($v0)
    ctx->pc = 0x4e8b5cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935432)));
    // 0x4e8b60: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4e8b60u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8b64: 0x0  nop
    ctx->pc = 0x4e8b64u;
    // NOP
    // 0x4e8b68: 0x460015c1  sub.s       $f23, $f2, $f0
    ctx->pc = 0x4e8b68u;
    ctx->f[23] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4e8b6c: 0x46001580  add.s       $f22, $f2, $f0
    ctx->pc = 0x4e8b6cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4e8b70: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4e8b70u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8b74: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4e8b74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4e8b78: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4e8b78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4e8b7c: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x4e8b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4e8b80: 0x90870194  lbu         $a3, 0x194($a0)
    ctx->pc = 0x4e8b80u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x4e8b84: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x4e8b84u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4e8b88: 0x0  nop
    ctx->pc = 0x4e8b88u;
    // NOP
    // 0x4e8b8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4e8b8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4e8b90: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x4e8b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4e8b94: 0xe49825  or          $s3, $a3, $a0
    ctx->pc = 0x4e8b94u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x4e8b98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e8b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4e8b9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e8b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8ba0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4e8ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8ba4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4e8ba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4e8ba8: 0x46010541  sub.s       $f21, $f0, $f1
    ctx->pc = 0x4e8ba8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4e8bac: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x4e8bacu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4e8bb0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4e8bb0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8bb4: 0x0  nop
    ctx->pc = 0x4e8bb4u;
    // NOP
    // 0x4e8bb8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e8bb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x4e8bbc: 0xc6580008  lwc1        $f24, 0x8($s2)
    ctx->pc = 0x4e8bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4e8bc0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4e8bc0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8bc4: 0x0  nop
    ctx->pc = 0x4e8bc4u;
    // NOP
    // 0x4e8bc8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e8bc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x4e8bcc: 0x4618be40  add.s       $f25, $f23, $f24
    ctx->pc = 0x4e8bccu;
    ctx->f[25] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
    // 0x4e8bd0: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x4e8bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x4e8bd4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4e8bd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x4e8bd8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x4e8bd8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x4e8bdc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x4e8bdcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x4e8be0: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x4E8BE0u;
    SET_GPR_U32(ctx, 31, 0x4E8BE8u);
    ctx->pc = 0x4E8BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8BE0u;
            // 0x4e8be4: 0x4600cb86  mov.s       $f14, $f25 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8BE8u; }
        if (ctx->pc != 0x4E8BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8BE8u; }
        if (ctx->pc != 0x4E8BE8u) { return; }
    }
    ctx->pc = 0x4E8BE8u;
label_4e8be8:
    // 0x4e8be8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4e8be8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8bec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e8becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4e8bf0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e8bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x4e8bf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e8bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8bf8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e8bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4e8bfc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4e8bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8c00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e8c00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8c04: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4e8c04u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8c08: 0x0  nop
    ctx->pc = 0x4e8c08u;
    // NOP
    // 0x4e8c0c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e8c0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x4e8c10: 0x4618b381  sub.s       $f14, $f22, $f24
    ctx->pc = 0x4e8c10u;
    ctx->f[14] = FPU_SUB_S(ctx->f[22], ctx->f[24]);
    // 0x4e8c14: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e8c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x4e8c18: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4e8c18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x4e8c1c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4e8c1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x4e8c20: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x4E8C20u;
    SET_GPR_U32(ctx, 31, 0x4E8C28u);
    ctx->pc = 0x4E8C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8C20u;
            // 0x4e8c24: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8C28u; }
        if (ctx->pc != 0x4E8C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8C28u; }
        if (ctx->pc != 0x4E8C28u) { return; }
    }
    ctx->pc = 0x4E8C28u;
label_4e8c28:
    // 0x4e8c28: 0x4618b041  sub.s       $f1, $f22, $f24
    ctx->pc = 0x4e8c28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[24]);
    // 0x4e8c2c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4e8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4e8c30: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4e8c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x4e8c34: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e8c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4e8c38: 0x24a58e90  addiu       $a1, $a1, -0x7170
    ctx->pc = 0x4e8c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938256));
    // 0x4e8c3c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e8c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4e8c40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4e8c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8c44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e8c44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8c48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4e8c48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8c4c: 0x0  nop
    ctx->pc = 0x4e8c4cu;
    // NOP
    // 0x4e8c50: 0x46010380  add.s       $f14, $f0, $f1
    ctx->pc = 0x4e8c50u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4e8c54: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4e8c54u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8c58: 0x0  nop
    ctx->pc = 0x4e8c58u;
    // NOP
    // 0x4e8c5c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e8c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x4e8c60: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4e8c60u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8c64: 0x0  nop
    ctx->pc = 0x4e8c64u;
    // NOP
    // 0x4e8c68: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e8c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x4e8c6c: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x4e8c6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x4e8c70: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x4e8c70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x4e8c74: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e8c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x4e8c78: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x4E8C78u;
    SET_GPR_U32(ctx, 31, 0x4E8C80u);
    ctx->pc = 0x4E8C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8C78u;
            // 0x4e8c7c: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8C80u; }
        if (ctx->pc != 0x4E8C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8C80u; }
        if (ctx->pc != 0x4E8C80u) { return; }
    }
    ctx->pc = 0x4E8C80u;
label_4e8c80:
    // 0x4e8c80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4e8c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4e8c84: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4e8c84u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x4e8c88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e8c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8c8c: 0x26528e70  addiu       $s2, $s2, -0x7190
    ctx->pc = 0x4e8c8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938224));
    // 0x4e8c90: 0x46170380  add.s       $f14, $f0, $f23
    ctx->pc = 0x4e8c90u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x4e8c94: 0x86830162  lh          $v1, 0x162($s4)
    ctx->pc = 0x4e8c94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 354)));
    // 0x4e8c98: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4e8c9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e8c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4e8ca0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e8ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8ca4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4e8ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8ca8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e8ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8cac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4e8cacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8cb0: 0x0  nop
    ctx->pc = 0x4e8cb0u;
    // NOP
    // 0x4e8cb4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4e8cb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x4e8cb8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4e8cb8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8cbc: 0x0  nop
    ctx->pc = 0x4e8cbcu;
    // NOP
    // 0x4e8cc0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e8cc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x4e8cc4: 0xc658000c  lwc1        $f24, 0xC($s2)
    ctx->pc = 0x4e8cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4e8cc8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4e8cc8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8ccc: 0x0  nop
    ctx->pc = 0x4e8cccu;
    // NOP
    // 0x4e8cd0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e8cd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x4e8cd4: 0x4618a341  sub.s       $f13, $f20, $f24
    ctx->pc = 0x4e8cd4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[24]);
    // 0x4e8cd8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e8cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x4e8cdc: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x4E8CDCu;
    SET_GPR_U32(ctx, 31, 0x4E8CE4u);
    ctx->pc = 0x4E8CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8CDCu;
            // 0x4e8ce0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8CE4u; }
        if (ctx->pc != 0x4E8CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8CE4u; }
        if (ctx->pc != 0x4E8CE4u) { return; }
    }
    ctx->pc = 0x4E8CE4u;
label_4e8ce4:
    // 0x4e8ce4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4e8ce4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8ce8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e8ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4e8cec: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e8cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x4e8cf0: 0x86830164  lh          $v1, 0x164($s4)
    ctx->pc = 0x4e8cf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 356)));
    // 0x4e8cf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e8cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8cf8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4e8cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8cfc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e8cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4e8d00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e8d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4e8d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8d08: 0x0  nop
    ctx->pc = 0x4e8d08u;
    // NOP
    // 0x4e8d0c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x4e8d0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x4e8d10: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4e8d10u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8d14: 0x0  nop
    ctx->pc = 0x4e8d14u;
    // NOP
    // 0x4e8d18: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e8d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x4e8d1c: 0x4618abc0  add.s       $f15, $f21, $f24
    ctx->pc = 0x4e8d1cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x4e8d20: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4e8d20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x4e8d24: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e8d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x4e8d28: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x4E8D28u;
    SET_GPR_U32(ctx, 31, 0x4E8D30u);
    ctx->pc = 0x4E8D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8D28u;
            // 0x4e8d2c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8D30u; }
        if (ctx->pc != 0x4E8D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8D30u; }
        if (ctx->pc != 0x4E8D30u) { return; }
    }
    ctx->pc = 0x4E8D30u;
label_4e8d30:
    // 0x4e8d30: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4e8d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4e8d34: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x4e8d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x4e8d38: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4e8d38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e8d3c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x4e8d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4e8d40: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e8d40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e8d44: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4e8d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4e8d48: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4e8d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e8d4c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4e8d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4e8d50: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e8d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e8d54: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4e8d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4e8d58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4e8d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e8d5c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4e8d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4e8d60: 0x3e00008  jr          $ra
    ctx->pc = 0x4E8D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8D60u;
            // 0x4e8d64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E8D68u;
    // 0x4e8d68: 0x0  nop
    ctx->pc = 0x4e8d68u;
    // NOP
    // 0x4e8d6c: 0x0  nop
    ctx->pc = 0x4e8d6cu;
    // NOP
}
