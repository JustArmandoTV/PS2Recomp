#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A9CF0
// Address: 0x3a9cf0 - 0x3aa000
void sub_003A9CF0_0x3a9cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9CF0_0x3a9cf0");
#endif

    switch (ctx->pc) {
        case 0x3a9e44u: goto label_3a9e44;
        case 0x3a9edcu: goto label_3a9edc;
        case 0x3a9f70u: goto label_3a9f70;
        case 0x3a9fd4u: goto label_3a9fd4;
        default: break;
    }

    ctx->pc = 0x3a9cf0u;

    // 0x3a9cf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3a9cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3a9cf4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a9cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3a9cf8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3a9cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3a9cfc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3a9cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3a9d00: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a9d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3a9d04: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3a9d04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9d08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a9d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3a9d0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a9d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a9d10: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x3a9d10u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x3a9d14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a9d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a9d18: 0x26529bc0  addiu       $s2, $s2, -0x6440
    ctx->pc = 0x3a9d18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941632));
    // 0x3a9d1c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3a9d1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3a9d20: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3a9d20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
    // 0x3a9d24: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a9d24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3a9d28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3a9d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a9d2c: 0x8c910034  lw          $s1, 0x34($a0)
    ctx->pc = 0x3a9d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3a9d30: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x3A9D30u;
    {
        const bool branch_taken_0x3a9d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9D30u;
            // 0x3a9d34: 0x26102100  addiu       $s0, $s0, 0x2100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9d30) {
            ctx->pc = 0x3A9FD4u;
            goto label_3a9fd4;
        }
    }
    ctx->pc = 0x3A9D38u;
    // 0x3a9d38: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3a9d38u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9d3c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3a9d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a9d40: 0x468001a0  cvt.s.w     $f6, $f0
    ctx->pc = 0x3a9d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3a9d44: 0x90830028  lbu         $v1, 0x28($a0)
    ctx->pc = 0x3a9d44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3a9d48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a9d4c: 0x90a60116  lbu         $a2, 0x116($a1)
    ctx->pc = 0x3a9d4cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 278)));
    // 0x3a9d50: 0x9084002e  lbu         $a0, 0x2E($a0)
    ctx->pc = 0x3a9d50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x3a9d54: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x3a9d54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a9d58: 0x82230004  lb          $v1, 0x4($s1)
    ctx->pc = 0x3a9d58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a9d5c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3a9d5cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9d60: 0x0  nop
    ctx->pc = 0x3a9d60u;
    // NOP
    // 0x3a9d64: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x3a9d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3a9d68: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x3a9d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3a9d6c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3a9d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3a9d70: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x3a9d70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a9d74: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x3a9d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x3a9d78: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x3a9d78u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a9d7c: 0x0  nop
    ctx->pc = 0x3a9d7cu;
    // NOP
    // 0x3a9d80: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x3a9d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3a9d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a9d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9d88: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3a9d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a9d8c: 0xc6870008  lwc1        $f7, 0x8($s4)
    ctx->pc = 0x3a9d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3a9d90: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x3a9d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a9d94: 0x46061018  adda.s      $f2, $f6
    ctx->pc = 0x3a9d94u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x3a9d98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a9d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a9d9c: 0x4603201e  madda.s     $f4, $f3
    ctx->pc = 0x3a9d9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x3a9da0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3a9da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a9da4: 0x4603601e  madda.s     $f12, $f3
    ctx->pc = 0x3a9da4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[3]));
    // 0x3a9da8: 0x46072d01  sub.s       $f20, $f5, $f7
    ctx->pc = 0x3a9da8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x3a9dac: 0x4603085c  madd.s      $f1, $f1, $f3
    ctx->pc = 0x3a9dacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x3a9db0: 0x15020007  bne         $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A9DB0u;
    {
        const bool branch_taken_0x3a9db0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A9DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9DB0u;
            // 0x3a9db4: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9db0) {
            ctx->pc = 0x3A9DD0u;
            goto label_3a9dd0;
        }
    }
    ctx->pc = 0x3A9DB8u;
    // 0x3a9db8: 0x82220006  lb          $v0, 0x6($s1)
    ctx->pc = 0x3a9db8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3a9dbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a9dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a9dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a9dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9dc4: 0x0  nop
    ctx->pc = 0x3a9dc4u;
    // NOP
    // 0x3a9dc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a9dc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a9dcc: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x3a9dccu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_3a9dd0:
    // 0x3a9dd0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3a9dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3a9dd4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3a9dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3a9dd8: 0x82260006  lb          $a2, 0x6($s1)
    ctx->pc = 0x3a9dd8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3a9ddc: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x3a9ddcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a9de0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a9de4: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3a9de4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a9de8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3a9de8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a9dec: 0x4607a3c0  add.s       $f15, $f20, $f7
    ctx->pc = 0x3a9decu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[7]);
    // 0x3a9df0: 0x26450600  addiu       $a1, $s2, 0x600
    ctx->pc = 0x3a9df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
    // 0x3a9df4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a9df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a9df8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a9df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9dfc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3a9dfcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9e00: 0x0  nop
    ctx->pc = 0x3a9e00u;
    // NOP
    // 0x3a9e04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a9e04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a9e08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a9e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9e0c: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3a9e0cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3a9e10: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a9e10u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9e14: 0x0  nop
    ctx->pc = 0x3a9e14u;
    // NOP
    // 0x3a9e18: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a9e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a9e1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a9e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9e20: 0x0  nop
    ctx->pc = 0x3a9e20u;
    // NOP
    // 0x3a9e24: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a9e24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a9e28: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x3a9e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a9e2c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3a9e2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3a9e30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a9e30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a9e34: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a9e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a9e38: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x3a9e38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x3a9e3c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A9E3Cu;
    SET_GPR_U32(ctx, 31, 0x3A9E44u);
    ctx->pc = 0x3A9E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9E3Cu;
            // 0x3a9e40: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9E44u; }
        if (ctx->pc != 0x3A9E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9E44u; }
        if (ctx->pc != 0x3A9E44u) { return; }
    }
    ctx->pc = 0x3A9E44u;
label_3a9e44:
    // 0x3a9e44: 0x82230006  lb          $v1, 0x6($s1)
    ctx->pc = 0x3a9e44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3a9e48: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x3a9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x3a9e4c: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x3a9e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x3a9e50: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3a9e50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a9e54: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x3a9e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3a9e58: 0x154fc2  srl         $t1, $s5, 31
    ctx->pc = 0x3a9e58u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x3a9e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a9e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9e60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a9e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a9e64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3a9e64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a9e68: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3a9e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a9e6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a9e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9e70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a9e70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9e74: 0x4010  mfhi        $t0
    ctx->pc = 0x3a9e74u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x3a9e78: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a9e7c: 0x84143  sra         $t0, $t0, 5
    ctx->pc = 0x3a9e7cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 5));
    // 0x3a9e80: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x3a9e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x3a9e84: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a9e84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9e88: 0x0  nop
    ctx->pc = 0x3a9e88u;
    // NOP
    // 0x3a9e8c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a9e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a9e90: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x3a9e90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3a9e94: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x3a9e94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x3a9e98: 0x2505001d  addiu       $a1, $t0, 0x1D
    ctx->pc = 0x3a9e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 29));
    // 0x3a9e9c: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x3a9e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3a9ea0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3a9ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3a9ea4: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x3a9ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x3a9ea8: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x3a9ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3a9eac: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x3a9eacu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3a9eb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a9eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9eb4: 0x2a8a823  subu        $s5, $s5, $t0
    ctx->pc = 0x3a9eb4u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 8)));
    // 0x3a9eb8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a9eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a9ebc: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x3a9ebcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x3a9ec0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3a9ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a9ec4: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x3a9ec4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x3a9ec8: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3a9ec8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3a9ecc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3a9eccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3a9ed0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a9ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a9ed4: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A9ED4u;
    SET_GPR_U32(ctx, 31, 0x3A9EDCu);
    ctx->pc = 0x3A9ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9ED4u;
            // 0x3a9ed8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9EDCu; }
        if (ctx->pc != 0x3A9EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9EDCu; }
        if (ctx->pc != 0x3A9EDCu) { return; }
    }
    ctx->pc = 0x3A9EDCu;
label_3a9edc:
    // 0x3a9edc: 0x82230006  lb          $v1, 0x6($s1)
    ctx->pc = 0x3a9edcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3a9ee0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3a9ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3a9ee4: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3a9ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3a9ee8: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3a9ee8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a9eec: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x3a9eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3a9ef0: 0x154fc2  srl         $t1, $s5, 31
    ctx->pc = 0x3a9ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x3a9ef4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a9ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9ef8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a9ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a9efc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3a9efcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a9f00: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3a9f00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a9f04: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a9f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9f08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a9f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9f0c: 0x4010  mfhi        $t0
    ctx->pc = 0x3a9f0cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x3a9f10: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a9f14: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x3a9f14u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
    // 0x3a9f18: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x3a9f18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x3a9f1c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a9f1cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9f20: 0x0  nop
    ctx->pc = 0x3a9f20u;
    // NOP
    // 0x3a9f24: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a9f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a9f28: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x3a9f28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3a9f2c: 0xa94021  addu        $t0, $a1, $t1
    ctx->pc = 0x3a9f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3a9f30: 0x2525001d  addiu       $a1, $t1, 0x1D
    ctx->pc = 0x3a9f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 29));
    // 0x3a9f34: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3a9f34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3a9f38: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3a9f38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3a9f3c: 0x2a8a823  subu        $s5, $s5, $t0
    ctx->pc = 0x3a9f3cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 8)));
    // 0x3a9f40: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x3a9f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3a9f44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a9f44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9f48: 0x0  nop
    ctx->pc = 0x3a9f48u;
    // NOP
    // 0x3a9f4c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a9f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a9f50: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x3a9f50u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x3a9f54: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3a9f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a9f58: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x3a9f58u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x3a9f5c: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3a9f5cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3a9f60: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3a9f60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3a9f64: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a9f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a9f68: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A9F68u;
    SET_GPR_U32(ctx, 31, 0x3A9F70u);
    ctx->pc = 0x3A9F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9F68u;
            // 0x3a9f6c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9F70u; }
        if (ctx->pc != 0x3A9F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9F70u; }
        if (ctx->pc != 0x3A9F70u) { return; }
    }
    ctx->pc = 0x3A9F70u;
label_3a9f70:
    // 0x3a9f70: 0x82230006  lb          $v1, 0x6($s1)
    ctx->pc = 0x3a9f70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3a9f74: 0x26a2001d  addiu       $v0, $s5, 0x1D
    ctx->pc = 0x3a9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 29));
    // 0x3a9f78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a9f7c: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3a9f7cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a9f80: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x3a9f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3a9f84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a9f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9f88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a9f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9f8c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a9f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a9f90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a9f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a9f94: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3a9f94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a9f98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a9f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a9f9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a9f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9fa0: 0x4600ab00  add.s       $f12, $f21, $f0
    ctx->pc = 0x3a9fa0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3a9fa4: 0x46006380  add.s       $f14, $f12, $f0
    ctx->pc = 0x3a9fa4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3a9fa8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a9fa8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9fac: 0x0  nop
    ctx->pc = 0x3a9facu;
    // NOP
    // 0x3a9fb0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a9fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a9fb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a9fb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9fb8: 0x0  nop
    ctx->pc = 0x3a9fb8u;
    // NOP
    // 0x3a9fbc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a9fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a9fc0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3a9fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a9fc4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3a9fc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3a9fc8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a9fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a9fcc: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A9FCCu;
    SET_GPR_U32(ctx, 31, 0x3A9FD4u);
    ctx->pc = 0x3A9FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9FCCu;
            // 0x3a9fd0: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9FD4u; }
        if (ctx->pc != 0x3A9FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9FD4u; }
        if (ctx->pc != 0x3A9FD4u) { return; }
    }
    ctx->pc = 0x3A9FD4u;
label_3a9fd4:
    // 0x3a9fd4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a9fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a9fd8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3a9fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a9fdc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3a9fdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a9fe0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a9fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a9fe4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3a9fe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a9fe8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a9fe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a9fec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a9fecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a9ff0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a9ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a9ff4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a9ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a9ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9FF8u;
            // 0x3a9ffc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AA000u;
}
