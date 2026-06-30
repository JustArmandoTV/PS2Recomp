#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00548C20
// Address: 0x548c20 - 0x548e00
void sub_00548C20_0x548c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00548C20_0x548c20");
#endif

    switch (ctx->pc) {
        case 0x548d28u: goto label_548d28;
        case 0x548dd8u: goto label_548dd8;
        default: break;
    }

    ctx->pc = 0x548c20u;

    // 0x548c20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x548c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x548c24: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x548c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x548c28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x548c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x548c2c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x548c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x548c30: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x548c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x548c34: 0x2463e790  addiu       $v1, $v1, -0x1870
    ctx->pc = 0x548c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961040));
    // 0x548c38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x548c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x548c3c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x548c3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548c40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x548c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x548c44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x548c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x548c48: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x548c48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x548c4c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x548c4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x548c50: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x548c50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x548c54: 0x9452da10  lhu         $s2, -0x25F0($v0)
    ctx->pc = 0x548c54u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957584)));
    // 0x548c58: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x548c58u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x548c5c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x548c5cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x548c60: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x548c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x548c64: 0x9451da12  lhu         $s1, -0x25EE($v0)
    ctx->pc = 0x548c64u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957586)));
    // 0x548c68: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x548c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x548c6c: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x548c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x548c70: 0x850019  multu       $a0, $a1
    ctx->pc = 0x548c70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x548c74: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x548c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x548c78: 0x9442da10  lhu         $v0, -0x25F0($v0)
    ctx->pc = 0x548c78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957584)));
    // 0x548c7c: 0x2010  mfhi        $a0
    ctx->pc = 0x548c7cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x548c80: 0x438c2  srl         $a3, $a0, 3
    ctx->pc = 0x548c80u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x548c84: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x548c84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x548c88: 0x24e40019  addiu       $a0, $a3, 0x19
    ctx->pc = 0x548c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 25));
    // 0x548c8c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x548c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x548c90: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x548c90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x548c94: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x548c94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x548c98: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x548c98u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x548c9c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x548c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x548ca0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x548ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x548ca4: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x548ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x548ca8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x548CA8u;
    {
        const bool branch_taken_0x548ca8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x548CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548CA8u;
            // 0x548cac: 0x4601a501  sub.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x548ca8) {
            ctx->pc = 0x548CBCu;
            goto label_548cbc;
        }
    }
    ctx->pc = 0x548CB0u;
    // 0x548cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x548cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548cb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x548CB4u;
    {
        const bool branch_taken_0x548cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548CB4u;
            // 0x548cb8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548cb4) {
            ctx->pc = 0x548CD8u;
            goto label_548cd8;
        }
    }
    ctx->pc = 0x548CBCu;
label_548cbc:
    // 0x548cbc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x548cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x548cc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x548cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x548cc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548cc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548ccc: 0x0  nop
    ctx->pc = 0x548cccu;
    // NOP
    // 0x548cd0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x548cd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x548cd4: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x548cd4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_548cd8:
    // 0x548cd8: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x548CD8u;
    {
        const bool branch_taken_0x548cd8 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x548cd8) {
            ctx->pc = 0x548CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x548CD8u;
            // 0x548cdc: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x548CECu;
            goto label_548cec;
        }
    }
    ctx->pc = 0x548CE0u;
    // 0x548ce0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x548ce0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548ce4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x548CE4u;
    {
        const bool branch_taken_0x548ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548CE4u;
            // 0x548ce8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548ce4) {
            ctx->pc = 0x548D04u;
            goto label_548d04;
        }
    }
    ctx->pc = 0x548CECu;
label_548cec:
    // 0x548cec: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x548cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x548cf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548cf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548cf8: 0x0  nop
    ctx->pc = 0x548cf8u;
    // NOP
    // 0x548cfc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x548cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x548d00: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x548d00u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_548d04:
    // 0x548d04: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x548d04u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x548d08: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x548d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x548d0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x548d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x548d10: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x548d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548d14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x548d14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548d18: 0x46166380  add.s       $f14, $f12, $f22
    ctx->pc = 0x548d18u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[22]);
    // 0x548d1c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x548d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x548d20: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x548D20u;
    SET_GPR_U32(ctx, 31, 0x548D28u);
    ctx->pc = 0x548D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x548D20u;
            // 0x548d24: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548D28u; }
        if (ctx->pc != 0x548D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548D28u; }
        if (ctx->pc != 0x548D28u) { return; }
    }
    ctx->pc = 0x548D28u;
label_548d28:
    // 0x548d28: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x548d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x548d2c: 0x26020019  addiu       $v0, $s0, 0x19
    ctx->pc = 0x548d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 25));
    // 0x548d30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x548d30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x548d34: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x548d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x548d38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x548d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548d3c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x548d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x548d40: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x548d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
    // 0x548d44: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x548d44u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x548d48: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x548d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x548d4c: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x548d4cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
    // 0x548d50: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x548d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x548d54: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x548d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x548d58: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x548d58u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x548d5c: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x548D5Cu;
    {
        const bool branch_taken_0x548d5c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x548D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548D5Cu;
            // 0x548d60: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x548d5c) {
            ctx->pc = 0x548D70u;
            goto label_548d70;
        }
    }
    ctx->pc = 0x548D64u;
    // 0x548d64: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x548d64u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548d68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x548D68u;
    {
        const bool branch_taken_0x548d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548D68u;
            // 0x548d6c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548d68) {
            ctx->pc = 0x548D8Cu;
            goto label_548d8c;
        }
    }
    ctx->pc = 0x548D70u;
label_548d70:
    // 0x548d70: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x548d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x548d74: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x548d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x548d78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548d7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548d80: 0x0  nop
    ctx->pc = 0x548d80u;
    // NOP
    // 0x548d84: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x548d84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x548d88: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x548d88u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_548d8c:
    // 0x548d8c: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x548D8Cu;
    {
        const bool branch_taken_0x548d8c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x548d8c) {
            ctx->pc = 0x548D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x548D8Cu;
            // 0x548d90: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x548DA0u;
            goto label_548da0;
        }
    }
    ctx->pc = 0x548D94u;
    // 0x548d94: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x548d94u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548d98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x548D98u;
    {
        const bool branch_taken_0x548d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548D98u;
            // 0x548d9c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548d98) {
            ctx->pc = 0x548DB8u;
            goto label_548db8;
        }
    }
    ctx->pc = 0x548DA0u;
label_548da0:
    // 0x548da0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x548da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x548da4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548da8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548da8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548dac: 0x0  nop
    ctx->pc = 0x548dacu;
    // NOP
    // 0x548db0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x548db0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x548db4: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x548db4u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_548db8:
    // 0x548db8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x548db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x548dbc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x548dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548dc0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x548dc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x548dc4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x548dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x548dc8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x548dc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x548dcc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x548dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x548dd0: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x548DD0u;
    SET_GPR_U32(ctx, 31, 0x548DD8u);
    ctx->pc = 0x548DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x548DD0u;
            // 0x548dd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548DD8u; }
        if (ctx->pc != 0x548DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548DD8u; }
        if (ctx->pc != 0x548DD8u) { return; }
    }
    ctx->pc = 0x548DD8u;
label_548dd8:
    // 0x548dd8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x548dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x548ddc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x548ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x548de0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x548de0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x548de4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x548de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x548de8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x548de8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x548dec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x548decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x548df0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x548df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x548df4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x548df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x548df8: 0x3e00008  jr          $ra
    ctx->pc = 0x548DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x548DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548DF8u;
            // 0x548dfc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x548E00u;
}
