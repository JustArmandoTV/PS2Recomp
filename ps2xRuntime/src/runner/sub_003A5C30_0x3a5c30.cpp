#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A5C30
// Address: 0x3a5c30 - 0x3a63a0
void sub_003A5C30_0x3a5c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5C30_0x3a5c30");
#endif

    switch (ctx->pc) {
        case 0x3a5e58u: goto label_3a5e58;
        case 0x3a5f90u: goto label_3a5f90;
        case 0x3a6084u: goto label_3a6084;
        case 0x3a617cu: goto label_3a617c;
        case 0x3a627cu: goto label_3a627c;
        case 0x3a6360u: goto label_3a6360;
        default: break;
    }

    ctx->pc = 0x3a5c30u;

    // 0x3a5c30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3a5c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3a5c34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3a5c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3a5c38: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3a5c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3a5c3c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3a5c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3a5c40: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3a5c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3a5c44: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3a5c44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c48: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a5c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3a5c4c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x3a5c4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a5c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3a5c54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a5c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a5c58: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x3a5c58u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x3a5c5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a5c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a5c60: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x3a5c60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
    // 0x3a5c64: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3a5c64u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3a5c68: 0x26529bc0  addiu       $s2, $s2, -0x6440
    ctx->pc = 0x3a5c68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941632));
    // 0x3a5c6c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3a5c6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3a5c70: 0x26312100  addiu       $s1, $s1, 0x2100
    ctx->pc = 0x3a5c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8448));
    // 0x3a5c74: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a5c74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3a5c78: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x3a5c78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5c7c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3a5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a5c80: 0x90820028  lbu         $v0, 0x28($a0)
    ctx->pc = 0x3a5c80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3a5c84: 0x86680004  lh          $t0, 0x4($s3)
    ctx->pc = 0x3a5c84u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3a5c88: 0x90630116  lbu         $v1, 0x116($v1)
    ctx->pc = 0x3a5c88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
    // 0x3a5c8c: 0x86640006  lh          $a0, 0x6($s3)
    ctx->pc = 0x3a5c8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x3a5c90: 0x1074018  mult        $t0, $t0, $a3
    ctx->pc = 0x3a5c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3a5c94: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3a5c94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a5c98: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3a5c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3a5c9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a5c9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5ca0: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x3a5ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x3a5ca4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a5ca4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a5ca8: 0x0  nop
    ctx->pc = 0x3a5ca8u;
    // NOP
    // 0x3a5cac: 0x46800da0  cvt.s.w     $f22, $f1
    ctx->pc = 0x3a5cacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x3a5cb0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A5CB0u;
    {
        const bool branch_taken_0x3a5cb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5CB0u;
            // 0x3a5cb4: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5cb0) {
            ctx->pc = 0x3A5CBCu;
            goto label_3a5cbc;
        }
    }
    ctx->pc = 0x3A5CB8u;
    // 0x3a5cb8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3a5cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a5cbc:
    // 0x3a5cbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a5cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5cc0: 0x54e3002d  bnel        $a3, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3A5CC0u;
    {
        const bool branch_taken_0x3a5cc0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a5cc0) {
            ctx->pc = 0x3A5CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5CC0u;
            // 0x3a5cc4: 0x92660016  lbu         $a2, 0x16($s3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5D78u;
            goto label_3a5d78;
        }
    }
    ctx->pc = 0x3A5CC8u;
    // 0x3a5cc8: 0x92680015  lbu         $t0, 0x15($s3)
    ctx->pc = 0x3a5cc8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21)));
    // 0x3a5ccc: 0x2aa10009  slti        $at, $s5, 0x9
    ctx->pc = 0x3a5cccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3a5cd0: 0x82650017  lb          $a1, 0x17($s3)
    ctx->pc = 0x3a5cd0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 23)));
    // 0x3a5cd4: 0x92670013  lbu         $a3, 0x13($s3)
    ctx->pc = 0x3a5cd4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x3a5cd8: 0x92630012  lbu         $v1, 0x12($s3)
    ctx->pc = 0x3a5cd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x3a5cdc: 0xa83021  addu        $a2, $a1, $t0
    ctx->pc = 0x3a5cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x3a5ce0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x3a5ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3a5ce4: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x3a5ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3a5ce8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3a5ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3a5cec: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3a5cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3a5cf0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3a5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a5cf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a5cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5cf8: 0x0  nop
    ctx->pc = 0x3a5cf8u;
    // NOP
    // 0x3a5cfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a5cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a5d00: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x3A5D00u;
    {
        const bool branch_taken_0x3a5d00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5D00u;
            // 0x3a5d04: 0x4600b581  sub.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d00) {
            ctx->pc = 0x3A5D38u;
            goto label_3a5d38;
        }
    }
    ctx->pc = 0x3A5D08u;
    // 0x3a5d08: 0x4e20004  bltzl       $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5D08u;
    {
        const bool branch_taken_0x3a5d08 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x3a5d08) {
            ctx->pc = 0x3A5D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5D08u;
            // 0x3a5d0c: 0x72042  srl         $a0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5D1Cu;
            goto label_3a5d1c;
        }
    }
    ctx->pc = 0x3A5D10u;
    // 0x3a5d10: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3a5d10u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5d14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5D14u;
    {
        const bool branch_taken_0x3a5d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5D14u;
            // 0x3a5d18: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d14) {
            ctx->pc = 0x3A5D34u;
            goto label_3a5d34;
        }
    }
    ctx->pc = 0x3A5D1Cu;
label_3a5d1c:
    // 0x3a5d1c: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x3a5d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x3a5d20: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a5d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a5d24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a5d24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5d28: 0x0  nop
    ctx->pc = 0x3a5d28u;
    // NOP
    // 0x3a5d2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a5d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a5d30: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a5d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a5d34:
    // 0x3a5d34: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x3a5d34u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_3a5d38:
    // 0x3a5d38: 0x2a810009  slti        $at, $s4, 0x9
    ctx->pc = 0x3a5d38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3a5d3c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x3A5D3Cu;
    {
        const bool branch_taken_0x3a5d3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5d3c) {
            ctx->pc = 0x3A5D74u;
            goto label_3a5d74;
        }
    }
    ctx->pc = 0x3A5D44u;
    // 0x3a5d44: 0x5020004  bltzl       $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5D44u;
    {
        const bool branch_taken_0x3a5d44 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x3a5d44) {
            ctx->pc = 0x3A5D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5D44u;
            // 0x3a5d48: 0x82042  srl         $a0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5D58u;
            goto label_3a5d58;
        }
    }
    ctx->pc = 0x3A5D4Cu;
    // 0x3a5d4c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a5d4cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5d50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5D50u;
    {
        const bool branch_taken_0x3a5d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5D50u;
            // 0x3a5d54: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d50) {
            ctx->pc = 0x3A5D70u;
            goto label_3a5d70;
        }
    }
    ctx->pc = 0x3A5D58u;
label_3a5d58:
    // 0x3a5d58: 0x31030001  andi        $v1, $t0, 0x1
    ctx->pc = 0x3a5d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x3a5d5c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a5d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a5d60: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a5d60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5d64: 0x0  nop
    ctx->pc = 0x3a5d64u;
    // NOP
    // 0x3a5d68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a5d68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a5d6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a5d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a5d70:
    // 0x3a5d70: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x3a5d70u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_3a5d74:
    // 0x3a5d74: 0x92660016  lbu         $a2, 0x16($s3)
    ctx->pc = 0x3a5d74u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
label_3a5d78:
    // 0x3a5d78: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5D78u;
    {
        const bool branch_taken_0x3a5d78 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x3a5d78) {
            ctx->pc = 0x3A5D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5D78u;
            // 0x3a5d7c: 0x62042  srl         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5D8Cu;
            goto label_3a5d8c;
        }
    }
    ctx->pc = 0x3A5D80u;
    // 0x3a5d80: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3a5d80u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5d84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5D84u;
    {
        const bool branch_taken_0x3a5d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5D84u;
            // 0x3a5d88: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d84) {
            ctx->pc = 0x3A5DA4u;
            goto label_3a5da4;
        }
    }
    ctx->pc = 0x3A5D8Cu;
label_3a5d8c:
    // 0x3a5d8c: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x3a5d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3a5d90: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a5d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a5d94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a5d94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5d98: 0x0  nop
    ctx->pc = 0x3a5d98u;
    // NOP
    // 0x3a5d9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a5d9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a5da0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a5da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a5da4:
    // 0x3a5da4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x3a5da4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a5da8: 0x264501c0  addiu       $a1, $s2, 0x1C0
    ctx->pc = 0x3a5da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x3a5dac: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3a5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3a5db0: 0x202b025  or          $s6, $s0, $v0
    ctx->pc = 0x3a5db0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3a5db4: 0x92620012  lbu         $v0, 0x12($s3)
    ctx->pc = 0x3a5db4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x3a5db8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5DB8u;
    {
        const bool branch_taken_0x3a5db8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3A5DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5DB8u;
            // 0x3a5dbc: 0x4600ab41  sub.s       $f13, $f21, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5db8) {
            ctx->pc = 0x3A5DCCu;
            goto label_3a5dcc;
        }
    }
    ctx->pc = 0x3A5DC0u;
    // 0x3a5dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a5dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5dc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A5DC4u;
    {
        const bool branch_taken_0x3a5dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5DC4u;
            // 0x3a5dc8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5dc4) {
            ctx->pc = 0x3A5DE8u;
            goto label_3a5de8;
        }
    }
    ctx->pc = 0x3A5DCCu;
label_3a5dcc:
    // 0x3a5dcc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3a5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3a5dd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a5dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a5dd4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a5dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a5dd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a5dd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5ddc: 0x0  nop
    ctx->pc = 0x3a5ddcu;
    // NOP
    // 0x3a5de0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a5de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a5de4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a5de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a5de8:
    // 0x3a5de8: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5DE8u;
    {
        const bool branch_taken_0x3a5de8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3A5DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5DE8u;
            // 0x3a5dec: 0x4600b380  add.s       $f14, $f22, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5de8) {
            ctx->pc = 0x3A5DFCu;
            goto label_3a5dfc;
        }
    }
    ctx->pc = 0x3A5DF0u;
    // 0x3a5df0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3a5df0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5df4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A5DF4u;
    {
        const bool branch_taken_0x3a5df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5DF4u;
            // 0x3a5df8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5df4) {
            ctx->pc = 0x3A5E18u;
            goto label_3a5e18;
        }
    }
    ctx->pc = 0x3A5DFCu;
label_3a5dfc:
    // 0x3a5dfc: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x3a5dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x3a5e00: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3a5e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3a5e04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a5e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a5e08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a5e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5e0c: 0x0  nop
    ctx->pc = 0x3a5e0cu;
    // NOP
    // 0x3a5e10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a5e10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a5e14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a5e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a5e18:
    // 0x3a5e18: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x3a5e18u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x3a5e1c: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x3a5e1cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a5e20: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a5e24: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3a5e24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a5e28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a5e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a5e2c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3a5e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5e30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a5e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5e34: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a5e34u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5e38: 0x0  nop
    ctx->pc = 0x3a5e38u;
    // NOP
    // 0x3a5e3c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a5e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a5e40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a5e40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5e44: 0x0  nop
    ctx->pc = 0x3a5e44u;
    // NOP
    // 0x3a5e48: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a5e48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a5e4c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a5e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a5e50: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A5E50u;
    SET_GPR_U32(ctx, 31, 0x3A5E58u);
    ctx->pc = 0x3A5E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5E50u;
            // 0x3a5e54: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5E58u; }
        if (ctx->pc != 0x3A5E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5E58u; }
        if (ctx->pc != 0x3A5E58u) { return; }
    }
    ctx->pc = 0x3A5E58u;
label_3a5e58:
    // 0x3a5e58: 0x92640012  lbu         $a0, 0x12($s3)
    ctx->pc = 0x3a5e58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x3a5e5c: 0x82630017  lb          $v1, 0x17($s3)
    ctx->pc = 0x3a5e5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 23)));
    // 0x3a5e60: 0x92620014  lbu         $v0, 0x14($s3)
    ctx->pc = 0x3a5e60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3a5e64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3a5e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a5e68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a5e68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5e6c: 0x0  nop
    ctx->pc = 0x3a5e6cu;
    // NOP
    // 0x3a5e70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a5e70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a5e74: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5E74u;
    {
        const bool branch_taken_0x3a5e74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3A5E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5E74u;
            // 0x3a5e78: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5e74) {
            ctx->pc = 0x3A5E88u;
            goto label_3a5e88;
        }
    }
    ctx->pc = 0x3A5E7Cu;
    // 0x3a5e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a5e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5e80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A5E80u;
    {
        const bool branch_taken_0x3a5e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5E80u;
            // 0x3a5e84: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5e80) {
            ctx->pc = 0x3A5EA4u;
            goto label_3a5ea4;
        }
    }
    ctx->pc = 0x3A5E88u;
label_3a5e88:
    // 0x3a5e88: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x3a5e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3a5e8c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3a5e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a5e90: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a5e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a5e94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a5e94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5e98: 0x0  nop
    ctx->pc = 0x3a5e98u;
    // NOP
    // 0x3a5e9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a5e9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a5ea0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a5ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a5ea4:
    // 0x3a5ea4: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x3a5ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x3a5ea8: 0x1527c2  srl         $a0, $s5, 31
    ctx->pc = 0x3a5ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x3a5eac: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x3a5eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x3a5eb0: 0x750018  mult        $zero, $v1, $s5
    ctx->pc = 0x3a5eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3a5eb4: 0x4600ad01  sub.s       $f20, $f21, $f0
    ctx->pc = 0x3a5eb4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x3a5eb8: 0x0  nop
    ctx->pc = 0x3a5eb8u;
    // NOP
    // 0x3a5ebc: 0x1810  mfhi        $v1
    ctx->pc = 0x3a5ebcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3a5ec0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3a5ec0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3a5ec4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3a5ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a5ec8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3a5ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a5ecc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a5eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a5ed0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a5ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a5ed4: 0x1880003b  blez        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3A5ED4u;
    {
        const bool branch_taken_0x3a5ed4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3A5ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5ED4u;
            // 0x3a5ed8: 0x2a3a823  subu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5ed4) {
            ctx->pc = 0x3A5FC4u;
            goto label_3a5fc4;
        }
    }
    ctx->pc = 0x3A5EDCu;
    // 0x3a5edc: 0x92630013  lbu         $v1, 0x13($s3)
    ctx->pc = 0x3a5edcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x3a5ee0: 0x2484000d  addiu       $a0, $a0, 0xD
    ctx->pc = 0x3a5ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13));
    // 0x3a5ee4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3a5ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3a5ee8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5EE8u;
    {
        const bool branch_taken_0x3a5ee8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3A5EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5EE8u;
            // 0x3a5eec: 0x2442821  addu        $a1, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5ee8) {
            ctx->pc = 0x3A5EFCu;
            goto label_3a5efc;
        }
    }
    ctx->pc = 0x3A5EF0u;
    // 0x3a5ef0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a5ef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5ef4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A5EF4u;
    {
        const bool branch_taken_0x3a5ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5EF4u;
            // 0x3a5ef8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5ef4) {
            ctx->pc = 0x3A5F18u;
            goto label_3a5f18;
        }
    }
    ctx->pc = 0x3A5EFCu;
label_3a5efc:
    // 0x3a5efc: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3a5efcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3a5f00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3a5f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3a5f04: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a5f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a5f08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a5f08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5f0c: 0x0  nop
    ctx->pc = 0x3a5f0cu;
    // NOP
    // 0x3a5f10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a5f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a5f14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a5f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a5f18:
    // 0x3a5f18: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5F18u;
    {
        const bool branch_taken_0x3a5f18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3A5F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5F18u;
            // 0x3a5f1c: 0x4600b380  add.s       $f14, $f22, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f18) {
            ctx->pc = 0x3A5F2Cu;
            goto label_3a5f2c;
        }
    }
    ctx->pc = 0x3A5F20u;
    // 0x3a5f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a5f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5f24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A5F24u;
    {
        const bool branch_taken_0x3a5f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5F24u;
            // 0x3a5f28: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f24) {
            ctx->pc = 0x3A5F48u;
            goto label_3a5f48;
        }
    }
    ctx->pc = 0x3A5F2Cu;
label_3a5f2c:
    // 0x3a5f2c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3a5f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3a5f30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a5f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a5f34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a5f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a5f38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a5f38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5f3c: 0x0  nop
    ctx->pc = 0x3a5f3cu;
    // NOP
    // 0x3a5f40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a5f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a5f44: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a5f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a5f48:
    // 0x3a5f48: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3a5f48u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3a5f4c: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x3a5f4cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a5f50: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a5f54: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x3a5f54u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a5f58: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x3a5f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3a5f5c: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3a5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3a5f60: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x3a5f60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a5f64: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3a5f64u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5f68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a5f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a5f6c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a5f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a5f70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a5f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5f74: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a5f74u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5f78: 0x0  nop
    ctx->pc = 0x3a5f78u;
    // NOP
    // 0x3a5f7c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a5f7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a5f80: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a5f80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a5f84: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a5f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a5f88: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A5F88u;
    SET_GPR_U32(ctx, 31, 0x3A5F90u);
    ctx->pc = 0x3A5F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5F88u;
            // 0x3a5f8c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5F90u; }
        if (ctx->pc != 0x3A5F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5F90u; }
        if (ctx->pc != 0x3A5F90u) { return; }
    }
    ctx->pc = 0x3A5F90u;
label_3a5f90:
    // 0x3a5f90: 0x92620013  lbu         $v0, 0x13($s3)
    ctx->pc = 0x3a5f90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x3a5f94: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5F94u;
    {
        const bool branch_taken_0x3a5f94 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3a5f94) {
            ctx->pc = 0x3A5F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5F94u;
            // 0x3a5f98: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5FA8u;
            goto label_3a5fa8;
        }
    }
    ctx->pc = 0x3A5F9Cu;
    // 0x3a5f9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a5f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5fa0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5FA0u;
    {
        const bool branch_taken_0x3a5fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5FA0u;
            // 0x3a5fa4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5fa0) {
            ctx->pc = 0x3A5FC0u;
            goto label_3a5fc0;
        }
    }
    ctx->pc = 0x3A5FA8u;
label_3a5fa8:
    // 0x3a5fa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a5fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a5fac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a5facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a5fb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a5fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5fb4: 0x0  nop
    ctx->pc = 0x3a5fb4u;
    // NOP
    // 0x3a5fb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a5fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a5fbc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a5fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a5fc0:
    // 0x3a5fc0: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x3a5fc0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_3a5fc4:
    // 0x3a5fc4: 0x26a2000d  addiu       $v0, $s5, 0xD
    ctx->pc = 0x3a5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 13));
    // 0x3a5fc8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x3a5fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3a5fcc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3a5fccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a5fd0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3a5fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3a5fd4: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x3a5fd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a5fd8: 0x92620013  lbu         $v0, 0x13($s3)
    ctx->pc = 0x3a5fd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x3a5fdc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5FDCu;
    {
        const bool branch_taken_0x3a5fdc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3A5FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5FDCu;
            // 0x3a5fe0: 0x2442821  addu        $a1, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5fdc) {
            ctx->pc = 0x3A5FF0u;
            goto label_3a5ff0;
        }
    }
    ctx->pc = 0x3A5FE4u;
    // 0x3a5fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a5fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5fe8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A5FE8u;
    {
        const bool branch_taken_0x3a5fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5FE8u;
            // 0x3a5fec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5fe8) {
            ctx->pc = 0x3A600Cu;
            goto label_3a600c;
        }
    }
    ctx->pc = 0x3A5FF0u;
label_3a5ff0:
    // 0x3a5ff0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3a5ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3a5ff4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a5ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a5ff8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a5ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a5ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a5ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6000: 0x0  nop
    ctx->pc = 0x3a6000u;
    // NOP
    // 0x3a6004: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a6004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a6008: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a6008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a600c:
    // 0x3a600c: 0x92620014  lbu         $v0, 0x14($s3)
    ctx->pc = 0x3a600cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3a6010: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6010u;
    {
        const bool branch_taken_0x3a6010 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3A6014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6010u;
            // 0x3a6014: 0x4600b380  add.s       $f14, $f22, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6010) {
            ctx->pc = 0x3A6024u;
            goto label_3a6024;
        }
    }
    ctx->pc = 0x3A6018u;
    // 0x3a6018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a6018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a601c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A601Cu;
    {
        const bool branch_taken_0x3a601c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A601Cu;
            // 0x3a6020: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a601c) {
            ctx->pc = 0x3A6040u;
            goto label_3a6040;
        }
    }
    ctx->pc = 0x3A6024u;
label_3a6024:
    // 0x3a6024: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3a6024u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3a6028: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a6028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a602c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a602cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a6030: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6034: 0x0  nop
    ctx->pc = 0x3a6034u;
    // NOP
    // 0x3a6038: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a6038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a603c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a603cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a6040:
    // 0x3a6040: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3a6040u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3a6044: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x3a6044u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a6048: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a6048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a604c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3a604cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a6050: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a6050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a6054: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a6054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6058: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3a6058u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a605c: 0x0  nop
    ctx->pc = 0x3a605cu;
    // NOP
    // 0x3a6060: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a6060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a6064: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a6064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a606c: 0x0  nop
    ctx->pc = 0x3a606cu;
    // NOP
    // 0x3a6070: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a6070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a6074: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3a6074u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3a6078: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a6078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a607c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A607Cu;
    SET_GPR_U32(ctx, 31, 0x3A6084u);
    ctx->pc = 0x3A6080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A607Cu;
            // 0x3a6080: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6084u; }
        if (ctx->pc != 0x3A6084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6084u; }
        if (ctx->pc != 0x3A6084u) { return; }
    }
    ctx->pc = 0x3A6084u;
label_3a6084:
    // 0x3a6084: 0x92630013  lbu         $v1, 0x13($s3)
    ctx->pc = 0x3a6084u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x3a6088: 0x82620017  lb          $v0, 0x17($s3)
    ctx->pc = 0x3a6088u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 23)));
    // 0x3a608c: 0x92640016  lbu         $a0, 0x16($s3)
    ctx->pc = 0x3a608cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x3a6090: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3a6090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a6094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a6094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6098: 0x0  nop
    ctx->pc = 0x3a6098u;
    // NOP
    // 0x3a609c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a609cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a60a0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A60A0u;
    {
        const bool branch_taken_0x3a60a0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3A60A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A60A0u;
            // 0x3a60a4: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a60a0) {
            ctx->pc = 0x3A60B4u;
            goto label_3a60b4;
        }
    }
    ctx->pc = 0x3A60A8u;
    // 0x3a60a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a60a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a60ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A60ACu;
    {
        const bool branch_taken_0x3a60ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A60B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A60ACu;
            // 0x3a60b0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a60ac) {
            ctx->pc = 0x3A60D0u;
            goto label_3a60d0;
        }
    }
    ctx->pc = 0x3A60B4u;
label_3a60b4:
    // 0x3a60b4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3a60b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3a60b8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3a60b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3a60bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a60bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a60c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a60c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a60c4: 0x0  nop
    ctx->pc = 0x3a60c4u;
    // NOP
    // 0x3a60c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a60c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a60cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a60ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a60d0:
    // 0x3a60d0: 0x4600ad01  sub.s       $f20, $f21, $f0
    ctx->pc = 0x3a60d0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x3a60d4: 0x92620015  lbu         $v0, 0x15($s3)
    ctx->pc = 0x3a60d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21)));
    // 0x3a60d8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A60D8u;
    {
        const bool branch_taken_0x3a60d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3A60DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A60D8u;
            // 0x3a60dc: 0x264502c0  addiu       $a1, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a60d8) {
            ctx->pc = 0x3A60ECu;
            goto label_3a60ec;
        }
    }
    ctx->pc = 0x3A60E0u;
    // 0x3a60e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a60e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a60e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A60E4u;
    {
        const bool branch_taken_0x3a60e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A60E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A60E4u;
            // 0x3a60e8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a60e4) {
            ctx->pc = 0x3A6108u;
            goto label_3a6108;
        }
    }
    ctx->pc = 0x3A60ECu;
label_3a60ec:
    // 0x3a60ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3a60ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3a60f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a60f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a60f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a60f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a60f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a60f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a60fc: 0x0  nop
    ctx->pc = 0x3a60fcu;
    // NOP
    // 0x3a6100: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a6100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a6104: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a6104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a6108:
    // 0x3a6108: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6108u;
    {
        const bool branch_taken_0x3a6108 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3A610Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6108u;
            // 0x3a610c: 0x4600b380  add.s       $f14, $f22, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6108) {
            ctx->pc = 0x3A611Cu;
            goto label_3a611c;
        }
    }
    ctx->pc = 0x3A6110u;
    // 0x3a6110: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a6110u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6114: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A6114u;
    {
        const bool branch_taken_0x3a6114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6114u;
            // 0x3a6118: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6114) {
            ctx->pc = 0x3A6138u;
            goto label_3a6138;
        }
    }
    ctx->pc = 0x3A611Cu;
label_3a611c:
    // 0x3a611c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3a611cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3a6120: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3a6120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3a6124: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a6124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a6128: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a612c: 0x0  nop
    ctx->pc = 0x3a612cu;
    // NOP
    // 0x3a6130: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a6130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a6134: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a6134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a6138:
    // 0x3a6138: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3a6138u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3a613c: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x3a613cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a6140: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a6140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a6144: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3a6144u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a6148: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3a6148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a614c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a6150: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3a6150u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6154: 0x0  nop
    ctx->pc = 0x3a6154u;
    // NOP
    // 0x3a6158: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a6158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a615c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a615cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6164: 0x0  nop
    ctx->pc = 0x3a6164u;
    // NOP
    // 0x3a6168: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a6168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a616c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a616cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a6170: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a6170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a6174: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A6174u;
    SET_GPR_U32(ctx, 31, 0x3A617Cu);
    ctx->pc = 0x3A6178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6174u;
            // 0x3a6178: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A617Cu; }
        if (ctx->pc != 0x3A617Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A617Cu; }
        if (ctx->pc != 0x3A617Cu) { return; }
    }
    ctx->pc = 0x3A617Cu;
label_3a617c:
    // 0x3a617c: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x3a617cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x3a6180: 0x92620015  lbu         $v0, 0x15($s3)
    ctx->pc = 0x3a6180u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21)));
    // 0x3a6184: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x3a6184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x3a6188: 0x82650017  lb          $a1, 0x17($s3)
    ctx->pc = 0x3a6188u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 23)));
    // 0x3a618c: 0x740018  mult        $zero, $v1, $s4
    ctx->pc = 0x3a618cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3a6190: 0x1427c2  srl         $a0, $s4, 31
    ctx->pc = 0x3a6190u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
    // 0x3a6194: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x3a6194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a6198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a619c: 0x0  nop
    ctx->pc = 0x3a619cu;
    // NOP
    // 0x3a61a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a61a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a61a4: 0x1810  mfhi        $v1
    ctx->pc = 0x3a61a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3a61a8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3a61a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3a61ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3a61acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a61b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3a61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a61b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a61b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a61b8: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x3a61b8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x3a61bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a61c0: 0x1880003b  blez        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3A61C0u;
    {
        const bool branch_taken_0x3a61c0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3A61C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A61C0u;
            // 0x3a61c4: 0x283a023  subu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a61c0) {
            ctx->pc = 0x3A62B0u;
            goto label_3a62b0;
        }
    }
    ctx->pc = 0x3A61C8u;
    // 0x3a61c8: 0x92620013  lbu         $v0, 0x13($s3)
    ctx->pc = 0x3a61c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x3a61cc: 0x2483001d  addiu       $v1, $a0, 0x1D
    ctx->pc = 0x3a61ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 29));
    // 0x3a61d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a61d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a61d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A61D4u;
    {
        const bool branch_taken_0x3a61d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3A61D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A61D4u;
            // 0x3a61d8: 0x2432821  addu        $a1, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a61d4) {
            ctx->pc = 0x3A61E8u;
            goto label_3a61e8;
        }
    }
    ctx->pc = 0x3A61DCu;
    // 0x3a61dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a61dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a61e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A61E0u;
    {
        const bool branch_taken_0x3a61e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A61E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A61E0u;
            // 0x3a61e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a61e0) {
            ctx->pc = 0x3A6204u;
            goto label_3a6204;
        }
    }
    ctx->pc = 0x3A61E8u;
label_3a61e8:
    // 0x3a61e8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3a61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3a61ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a61ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a61f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a61f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a61f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a61f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a61f8: 0x0  nop
    ctx->pc = 0x3a61f8u;
    // NOP
    // 0x3a61fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a61fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a6200: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a6200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a6204:
    // 0x3a6204: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x3a6204u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x3a6208: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6208u;
    {
        const bool branch_taken_0x3a6208 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3A620Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6208u;
            // 0x3a620c: 0x4600b380  add.s       $f14, $f22, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6208) {
            ctx->pc = 0x3A621Cu;
            goto label_3a621c;
        }
    }
    ctx->pc = 0x3A6210u;
    // 0x3a6210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a6210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6214: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A6214u;
    {
        const bool branch_taken_0x3a6214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6214u;
            // 0x3a6218: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6214) {
            ctx->pc = 0x3A6238u;
            goto label_3a6238;
        }
    }
    ctx->pc = 0x3A621Cu;
label_3a621c:
    // 0x3a621c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3a621cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3a6220: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a6220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a6224: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a6224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a6228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a622c: 0x0  nop
    ctx->pc = 0x3a622cu;
    // NOP
    // 0x3a6230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a6230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a6234: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a6234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a6238:
    // 0x3a6238: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3a6238u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3a623c: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x3a623cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a6240: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a6240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a6244: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3a6244u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a6248: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a6248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a624c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a624cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6250: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3a6250u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6254: 0x0  nop
    ctx->pc = 0x3a6254u;
    // NOP
    // 0x3a6258: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a6258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a625c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a625cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6264: 0x0  nop
    ctx->pc = 0x3a6264u;
    // NOP
    // 0x3a6268: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a6268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a626c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a626cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a6270: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a6270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a6274: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A6274u;
    SET_GPR_U32(ctx, 31, 0x3A627Cu);
    ctx->pc = 0x3A6278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6274u;
            // 0x3a6278: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A627Cu; }
        if (ctx->pc != 0x3A627Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A627Cu; }
        if (ctx->pc != 0x3A627Cu) { return; }
    }
    ctx->pc = 0x3A627Cu;
label_3a627c:
    // 0x3a627c: 0x92620015  lbu         $v0, 0x15($s3)
    ctx->pc = 0x3a627cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21)));
    // 0x3a6280: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6280u;
    {
        const bool branch_taken_0x3a6280 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3a6280) {
            ctx->pc = 0x3A6284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6280u;
            // 0x3a6284: 0x22042  srl         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A6294u;
            goto label_3a6294;
        }
    }
    ctx->pc = 0x3A6288u;
    // 0x3a6288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a6288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a628c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A628Cu;
    {
        const bool branch_taken_0x3a628c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A628Cu;
            // 0x3a6290: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a628c) {
            ctx->pc = 0x3A62ACu;
            goto label_3a62ac;
        }
    }
    ctx->pc = 0x3A6294u;
label_3a6294:
    // 0x3a6294: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3a6294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a6298: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a6298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a629c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a629cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a62a0: 0x0  nop
    ctx->pc = 0x3a62a0u;
    // NOP
    // 0x3a62a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a62a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a62a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a62a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a62ac:
    // 0x3a62ac: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x3a62acu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_3a62b0:
    // 0x3a62b0: 0x2683001d  addiu       $v1, $s4, 0x1D
    ctx->pc = 0x3a62b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 29));
    // 0x3a62b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a62b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a62b8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A62B8u;
    {
        const bool branch_taken_0x3a62b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3A62BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A62B8u;
            // 0x3a62bc: 0x2432821  addu        $a1, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a62b8) {
            ctx->pc = 0x3A62CCu;
            goto label_3a62cc;
        }
    }
    ctx->pc = 0x3A62C0u;
    // 0x3a62c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a62c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a62c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A62C4u;
    {
        const bool branch_taken_0x3a62c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A62C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A62C4u;
            // 0x3a62c8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a62c4) {
            ctx->pc = 0x3A62E8u;
            goto label_3a62e8;
        }
    }
    ctx->pc = 0x3A62CCu;
label_3a62cc:
    // 0x3a62cc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3a62ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3a62d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a62d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a62d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a62d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a62d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a62d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a62dc: 0x0  nop
    ctx->pc = 0x3a62dcu;
    // NOP
    // 0x3a62e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a62e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a62e4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a62e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a62e8:
    // 0x3a62e8: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x3a62e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x3a62ec: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A62ECu;
    {
        const bool branch_taken_0x3a62ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3A62F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A62ECu;
            // 0x3a62f0: 0x4600b380  add.s       $f14, $f22, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a62ec) {
            ctx->pc = 0x3A6300u;
            goto label_3a6300;
        }
    }
    ctx->pc = 0x3A62F4u;
    // 0x3a62f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a62f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a62f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A62F8u;
    {
        const bool branch_taken_0x3a62f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A62FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A62F8u;
            // 0x3a62fc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a62f8) {
            ctx->pc = 0x3A631Cu;
            goto label_3a631c;
        }
    }
    ctx->pc = 0x3A6300u;
label_3a6300:
    // 0x3a6300: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3a6300u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3a6304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a6304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a6308: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a6308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a630c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a630cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6310: 0x0  nop
    ctx->pc = 0x3a6310u;
    // NOP
    // 0x3a6314: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a6314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a6318: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a6318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a631c:
    // 0x3a631c: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3a631cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3a6320: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x3a6320u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a6324: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a6324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a6328: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3a6328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a632c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a632cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6330: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a6330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a6334: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a6334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6338: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a6338u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a633c: 0x0  nop
    ctx->pc = 0x3a633cu;
    // NOP
    // 0x3a6340: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a6340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a6344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6348: 0x0  nop
    ctx->pc = 0x3a6348u;
    // NOP
    // 0x3a634c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a634cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a6350: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a6350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a6354: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a6354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a6358: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A6358u;
    SET_GPR_U32(ctx, 31, 0x3A6360u);
    ctx->pc = 0x3A635Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6358u;
            // 0x3a635c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6360u; }
        if (ctx->pc != 0x3A6360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6360u; }
        if (ctx->pc != 0x3A6360u) { return; }
    }
    ctx->pc = 0x3A6360u;
label_3a6360:
    // 0x3a6360: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3a6360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a6364: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3a6364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3a6368: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3a6368u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a636c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3a636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a6370: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3a6370u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a6374: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a6374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a6378: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3a6378u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a637c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a637cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a6380: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a6380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a6384: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a6384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a6388: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a6388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a638c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A638Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A638Cu;
            // 0x3a6390: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A6394u;
    // 0x3a6394: 0x0  nop
    ctx->pc = 0x3a6394u;
    // NOP
    // 0x3a6398: 0x0  nop
    ctx->pc = 0x3a6398u;
    // NOP
    // 0x3a639c: 0x0  nop
    ctx->pc = 0x3a639cu;
    // NOP
}
