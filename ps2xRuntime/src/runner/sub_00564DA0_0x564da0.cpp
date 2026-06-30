#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00564DA0
// Address: 0x564da0 - 0x565060
void sub_00564DA0_0x564da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00564DA0_0x564da0");
#endif

    switch (ctx->pc) {
        case 0x564e64u: goto label_564e64;
        case 0x564ed0u: goto label_564ed0;
        case 0x564ef4u: goto label_564ef4;
        case 0x564efcu: goto label_564efc;
        case 0x564f08u: goto label_564f08;
        case 0x564f14u: goto label_564f14;
        case 0x564f40u: goto label_564f40;
        case 0x564f4cu: goto label_564f4c;
        case 0x564f88u: goto label_564f88;
        case 0x564f94u: goto label_564f94;
        case 0x564fa0u: goto label_564fa0;
        case 0x564fa8u: goto label_564fa8;
        case 0x564fb4u: goto label_564fb4;
        default: break;
    }

    ctx->pc = 0x564da0u;

    // 0x564da0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x564da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x564da4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x564da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x564da8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x564da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x564dac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x564dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x564db0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x564db0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x564db4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x564db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x564db8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x564db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x564dbc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x564dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x564dc0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x564dc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x564dc4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x564dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x564dc8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x564dc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x564dcc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x564dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x564dd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x564dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x564dd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x564dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x564dd8: 0x12800092  beqz        $s4, . + 4 + (0x92 << 2)
    ctx->pc = 0x564DD8u;
    {
        const bool branch_taken_0x564dd8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x564DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564DD8u;
            // 0x564ddc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x564dd8) {
            ctx->pc = 0x565024u;
            goto label_565024;
        }
    }
    ctx->pc = 0x564DE0u;
    // 0x564de0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x564de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x564de4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x564de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x564de8: 0x8c6389f0  lw          $v1, -0x7610($v1)
    ctx->pc = 0x564de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
    // 0x564dec: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x564decu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x564df0: 0x8c888a08  lw          $t0, -0x75F8($a0)
    ctx->pc = 0x564df0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
    // 0x564df4: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x564df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x564df8: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x564df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x564dfc: 0x2404004b  addiu       $a0, $zero, 0x4B
    ctx->pc = 0x564dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x564e00: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x564e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x564e04: 0x8103007a  lb          $v1, 0x7A($t0)
    ctx->pc = 0x564e04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 122)));
    // 0x564e08: 0xc5000020  lwc1        $f0, 0x20($t0)
    ctx->pc = 0x564e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x564e0c: 0x8cc70050  lw          $a3, 0x50($a2)
    ctx->pc = 0x564e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x564e10: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x564e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x564e14: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x564e14u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x564e18: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x564e18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x564e1c: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x564e1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x564e20: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x564e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x564e24: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x564e24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x564e28: 0xc4b006  srlv        $s6, $a0, $a2
    ctx->pc = 0x564e28u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x564e2c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x564e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x564e30: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x564e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x564e34: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x564e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x564e38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x564e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x564e3c: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x564e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x564e40: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x564e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x564e44: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x564e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x564e48: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x564e48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x564e4c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x564e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x564e50: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x564e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x564e54: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x564e54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x564e58: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x564e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x564e5c: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x564e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x564e60: 0x92a30204  lbu         $v1, 0x204($s5)
    ctx->pc = 0x564e60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 516)));
label_564e64:
    // 0x564e64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x564e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x564e68: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x564e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x564e6c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x564e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x564e70: 0xa2a40204  sb          $a0, 0x204($s5)
    ctx->pc = 0x564e70u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 516), (uint8_t)GPR_U32(ctx, 4));
    // 0x564e74: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x564e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x564e78: 0x92a30204  lbu         $v1, 0x204($s5)
    ctx->pc = 0x564e78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 516)));
    // 0x564e7c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x564e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x564e80: 0xa2a30204  sb          $v1, 0x204($s5)
    ctx->pc = 0x564e80u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 516), (uint8_t)GPR_U32(ctx, 3));
    // 0x564e84: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x564e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x564e88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x564e88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x564e8c: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x564E8Cu;
    {
        const bool branch_taken_0x564e8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x564E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564E8Cu;
            // 0x564e90: 0x24910004  addiu       $s1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564e8c) {
            ctx->pc = 0x565018u;
            goto label_565018;
        }
    }
    ctx->pc = 0x564E94u;
    // 0x564e94: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x564e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x564e98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x564e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x564e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x564e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x564ea0: 0x32d200ff  andi        $s2, $s6, 0xFF
    ctx->pc = 0x564ea0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x564ea4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x564ea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x564ea8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x564ea8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x564eac: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x564eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x564eb0: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x564EB0u;
    {
        const bool branch_taken_0x564eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x564EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564EB0u;
            // 0x564eb4: 0xa2360008  sb          $s6, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564eb0) {
            ctx->pc = 0x564F00u;
            goto label_564f00;
        }
    }
    ctx->pc = 0x564EB8u;
    // 0x564eb8: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x564eb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x564ebc: 0x9042002a  lbu         $v0, 0x2A($v0)
    ctx->pc = 0x564ebcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x564ec0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x564EC0u;
    {
        const bool branch_taken_0x564ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x564ec0) {
            ctx->pc = 0x564F00u;
            goto label_564f00;
        }
    }
    ctx->pc = 0x564EC8u;
    // 0x564ec8: 0xc040234  jal         func_1008D0
    ctx->pc = 0x564EC8u;
    SET_GPR_U32(ctx, 31, 0x564ED0u);
    ctx->pc = 0x564ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564EC8u;
            // 0x564ecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1008D0u;
    if (runtime->hasFunction(0x1008D0u)) {
        auto targetFn = runtime->lookupFunction(0x1008D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564ED0u; }
        if (ctx->pc != 0x564ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001008D0_0x1008d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564ED0u; }
        if (ctx->pc != 0x564ED0u) { return; }
    }
    ctx->pc = 0x564ED0u;
label_564ed0:
    // 0x564ed0: 0x3c043fe9  lui         $a0, 0x3FE9
    ctx->pc = 0x564ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16361 << 16));
    // 0x564ed4: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x564ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x564ed8: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x564ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x564edc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x564edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x564ee0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x564ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x564ee4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x564ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x564ee8: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x564ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x564eec: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x564EECu;
    SET_GPR_U32(ctx, 31, 0x564EF4u);
    ctx->pc = 0x564EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564EECu;
            // 0x564ef0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564EF4u; }
        if (ctx->pc != 0x564EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564EF4u; }
        if (ctx->pc != 0x564EF4u) { return; }
    }
    ctx->pc = 0x564EF4u;
label_564ef4:
    // 0x564ef4: 0xc0497f2  jal         func_125FC8
    ctx->pc = 0x564EF4u;
    SET_GPR_U32(ctx, 31, 0x564EFCu);
    ctx->pc = 0x564EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564EF4u;
            // 0x564ef8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FC8u;
    if (runtime->hasFunction(0x125FC8u)) {
        auto targetFn = runtime->lookupFunction(0x125FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564EFCu; }
        if (ctx->pc != 0x564EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125FC8_0x125fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564EFCu; }
        if (ctx->pc != 0x564EFCu) { return; }
    }
    ctx->pc = 0x564EFCu;
label_564efc:
    // 0x564efc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x564efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_564f00:
    // 0x564f00: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x564F00u;
    SET_GPR_U32(ctx, 31, 0x564F08u);
    ctx->pc = 0x564F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564F00u;
            // 0x564f04: 0x128040  sll         $s0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564F08u; }
        if (ctx->pc != 0x564F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564F08u; }
        if (ctx->pc != 0x564F08u) { return; }
    }
    ctx->pc = 0x564F08u;
label_564f08:
    // 0x564f08: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x564f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x564f0c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x564F0Cu;
    SET_GPR_U32(ctx, 31, 0x564F14u);
    ctx->pc = 0x564F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564F0Cu;
            // 0x564f10: 0x2bf40  sll         $s7, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564F14u; }
        if (ctx->pc != 0x564F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564F14u; }
        if (ctx->pc != 0x564F14u) { return; }
    }
    ctx->pc = 0x564F14u;
label_564f14:
    // 0x564f14: 0x571825  or          $v1, $v0, $s7
    ctx->pc = 0x564f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x564f18: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x564f18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x564f1c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x564f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x564f20: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x564f20u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x564f24: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x564f24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x564f28: 0x0  nop
    ctx->pc = 0x564f28u;
    // NOP
    // 0x564f2c: 0x1810  mfhi        $v1
    ctx->pc = 0x564f2cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x564f30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x564f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x564f34: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x564f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x564f38: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x564F38u;
    SET_GPR_U32(ctx, 31, 0x564F40u);
    ctx->pc = 0x564F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564F38u;
            // 0x564f3c: 0xa6220004  sh          $v0, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564F40u; }
        if (ctx->pc != 0x564F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564F40u; }
        if (ctx->pc != 0x564F40u) { return; }
    }
    ctx->pc = 0x564F40u;
label_564f40:
    // 0x564f40: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x564f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x564f44: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x564F44u;
    SET_GPR_U32(ctx, 31, 0x564F4Cu);
    ctx->pc = 0x564F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564F44u;
            // 0x564f48: 0x2bf40  sll         $s7, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564F4Cu; }
        if (ctx->pc != 0x564F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564F4Cu; }
        if (ctx->pc != 0x564F4Cu) { return; }
    }
    ctx->pc = 0x564F4Cu;
label_564f4c:
    // 0x564f4c: 0x571825  or          $v1, $v0, $s7
    ctx->pc = 0x564f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x564f50: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x564f50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x564f54: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x564f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x564f58: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x564f58u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x564f5c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x564f5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x564f60: 0x0  nop
    ctx->pc = 0x564f60u;
    // NOP
    // 0x564f64: 0x2010  mfhi        $a0
    ctx->pc = 0x564f64u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x564f68: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x564f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x564f6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x564f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x564f70: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x564f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x564f74: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x564f74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x564f78: 0xa232000a  sb          $s2, 0xA($s1)
    ctx->pc = 0x564f78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 18));
    // 0x564f7c: 0xa23e000b  sb          $fp, 0xB($s1)
    ctx->pc = 0x564f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 30));
    // 0x564f80: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x564F80u;
    SET_GPR_U32(ctx, 31, 0x564F88u);
    ctx->pc = 0x564F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564F80u;
            // 0x564f84: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564F88u; }
        if (ctx->pc != 0x564F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564F88u; }
        if (ctx->pc != 0x564F88u) { return; }
    }
    ctx->pc = 0x564F88u;
label_564f88:
    // 0x564f88: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x564f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x564f8c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x564F8Cu;
    SET_GPR_U32(ctx, 31, 0x564F94u);
    ctx->pc = 0x564F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564F8Cu;
            // 0x564f90: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564F94u; }
        if (ctx->pc != 0x564F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564F94u; }
        if (ctx->pc != 0x564F94u) { return; }
    }
    ctx->pc = 0x564F94u;
label_564f94:
    // 0x564f94: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x564f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x564f98: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x564f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x564f9c: 0xa2220009  sb          $v0, 0x9($s1)
    ctx->pc = 0x564f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 2));
label_564fa0:
    // 0x564fa0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x564FA0u;
    SET_GPR_U32(ctx, 31, 0x564FA8u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564FA8u; }
        if (ctx->pc != 0x564FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564FA8u; }
        if (ctx->pc != 0x564FA8u) { return; }
    }
    ctx->pc = 0x564FA8u;
label_564fa8:
    // 0x564fa8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x564fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x564fac: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x564FACu;
    SET_GPR_U32(ctx, 31, 0x564FB4u);
    ctx->pc = 0x564FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564FACu;
            // 0x564fb0: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564FB4u; }
        if (ctx->pc != 0x564FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564FB4u; }
        if (ctx->pc != 0x564FB4u) { return; }
    }
    ctx->pc = 0x564FB4u;
label_564fb4:
    // 0x564fb4: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x564fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x564fb8: 0x24030167  addiu       $v1, $zero, 0x167
    ctx->pc = 0x564fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 359));
    // 0x564fbc: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x564fbcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x564fc0: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x564fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
    // 0x564fc4: 0x34630b60  ori         $v1, $v1, 0xB60
    ctx->pc = 0x564fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2912);
    // 0x564fc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x564fc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x564fcc: 0x1810  mfhi        $v1
    ctx->pc = 0x564fccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x564fd0: 0x2463ff4d  addiu       $v1, $v1, -0xB3
    ctx->pc = 0x564fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967117));
    // 0x564fd4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x564fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x564fd8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x564fd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x564fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x564fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x564fe0: 0x0  nop
    ctx->pc = 0x564fe0u;
    // NOP
    // 0x564fe4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x564fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x564fe8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x564fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x564fec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x564fecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x564ff0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x564ff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x564ff4: 0x0  nop
    ctx->pc = 0x564ff4u;
    // NOP
    // 0x564ff8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x564ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x564ffc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x564ffcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x565000: 0x1060ffe7  beqz        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x565000u;
    {
        const bool branch_taken_0x565000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x565000) {
            ctx->pc = 0x564FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_564fa0;
        }
    }
    ctx->pc = 0x565008u;
    // 0x565008: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x565008u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x56500c: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x56500Cu;
    {
        const bool branch_taken_0x56500c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x565010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56500Cu;
            // 0x565010: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56500c) {
            ctx->pc = 0x565024u;
            goto label_565024;
        }
    }
    ctx->pc = 0x565014u;
    // 0x565014: 0x0  nop
    ctx->pc = 0x565014u;
    // NOP
label_565018:
    // 0x565018: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x565018u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x56501c: 0x5660ff91  bnel        $s3, $zero, . + 4 + (-0x6F << 2)
    ctx->pc = 0x56501Cu;
    {
        const bool branch_taken_0x56501c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x56501c) {
            ctx->pc = 0x565020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56501Cu;
            // 0x565020: 0x92a30204  lbu         $v1, 0x204($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 516)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x564E64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_564e64;
        }
    }
    ctx->pc = 0x565024u;
label_565024:
    // 0x565024: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x565024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x565028: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x565028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x56502c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x56502cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x565030: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x565030u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x565034: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x565034u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x565038: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x565038u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x56503c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x56503cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x565040: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x565040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x565044: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x565044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x565048: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x565048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x56504c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x56504cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x565050: 0x3e00008  jr          $ra
    ctx->pc = 0x565050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x565054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565050u;
            // 0x565054: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x565058u;
    // 0x565058: 0x0  nop
    ctx->pc = 0x565058u;
    // NOP
    // 0x56505c: 0x0  nop
    ctx->pc = 0x56505cu;
    // NOP
}
