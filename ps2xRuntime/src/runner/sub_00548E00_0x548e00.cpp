#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00548E00
// Address: 0x548e00 - 0x5490c0
void sub_00548E00_0x548e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00548E00_0x548e00");
#endif

    switch (ctx->pc) {
        case 0x548f10u: goto label_548f10;
        case 0x548fe8u: goto label_548fe8;
        case 0x549098u: goto label_549098;
        default: break;
    }

    ctx->pc = 0x548e00u;

    // 0x548e00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x548e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x548e04: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x548e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x548e08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x548e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x548e0c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x548e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x548e10: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x548e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x548e14: 0x2463e790  addiu       $v1, $v1, -0x1870
    ctx->pc = 0x548e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961040));
    // 0x548e18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x548e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x548e1c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x548e1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548e20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x548e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x548e24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x548e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x548e28: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x548e28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x548e2c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x548e2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x548e30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x548e30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x548e34: 0x9452da08  lhu         $s2, -0x25F8($v0)
    ctx->pc = 0x548e34u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x548e38: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x548e38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x548e3c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x548e3cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x548e40: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x548e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x548e44: 0x9451da0a  lhu         $s1, -0x25F6($v0)
    ctx->pc = 0x548e44u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957578)));
    // 0x548e48: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x548e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x548e4c: 0x3444851f  ori         $a0, $v0, 0x851F
    ctx->pc = 0x548e4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x548e50: 0x850019  multu       $a0, $a1
    ctx->pc = 0x548e50u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x548e54: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x548e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x548e58: 0x9442da08  lhu         $v0, -0x25F8($v0)
    ctx->pc = 0x548e58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x548e5c: 0x2010  mfhi        $a0
    ctx->pc = 0x548e5cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x548e60: 0x43942  srl         $a3, $a0, 5
    ctx->pc = 0x548e60u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x548e64: 0x24e40019  addiu       $a0, $a3, 0x19
    ctx->pc = 0x548e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 25));
    // 0x548e68: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x548e68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x548e6c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x548e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x548e70: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x548e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x548e74: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x548e74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x548e78: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x548e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x548e7c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x548e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x548e80: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x548e80u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x548e84: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x548e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x548e88: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x548e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x548e8c: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x548e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x548e90: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x548E90u;
    {
        const bool branch_taken_0x548e90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x548E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548E90u;
            // 0x548e94: 0x4601a501  sub.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x548e90) {
            ctx->pc = 0x548EA4u;
            goto label_548ea4;
        }
    }
    ctx->pc = 0x548E98u;
    // 0x548e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x548e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548e9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x548E9Cu;
    {
        const bool branch_taken_0x548e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548E9Cu;
            // 0x548ea0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548e9c) {
            ctx->pc = 0x548EC0u;
            goto label_548ec0;
        }
    }
    ctx->pc = 0x548EA4u;
label_548ea4:
    // 0x548ea4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x548ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x548ea8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x548ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x548eac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548eb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548eb4: 0x0  nop
    ctx->pc = 0x548eb4u;
    // NOP
    // 0x548eb8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x548eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x548ebc: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x548ebcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_548ec0:
    // 0x548ec0: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x548EC0u;
    {
        const bool branch_taken_0x548ec0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x548ec0) {
            ctx->pc = 0x548EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x548EC0u;
            // 0x548ec4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x548ED4u;
            goto label_548ed4;
        }
    }
    ctx->pc = 0x548EC8u;
    // 0x548ec8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x548ec8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548ecc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x548ECCu;
    {
        const bool branch_taken_0x548ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548ECCu;
            // 0x548ed0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548ecc) {
            ctx->pc = 0x548EECu;
            goto label_548eec;
        }
    }
    ctx->pc = 0x548ED4u;
label_548ed4:
    // 0x548ed4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x548ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x548ed8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548edc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548ee0: 0x0  nop
    ctx->pc = 0x548ee0u;
    // NOP
    // 0x548ee4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x548ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x548ee8: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x548ee8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_548eec:
    // 0x548eec: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x548eecu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x548ef0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x548ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x548ef4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x548ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x548ef8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x548ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548efc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x548efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548f00: 0x46166380  add.s       $f14, $f12, $f22
    ctx->pc = 0x548f00u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[22]);
    // 0x548f04: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x548f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x548f08: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x548F08u;
    SET_GPR_U32(ctx, 31, 0x548F10u);
    ctx->pc = 0x548F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x548F08u;
            // 0x548f0c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548F10u; }
        if (ctx->pc != 0x548F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548F10u; }
        if (ctx->pc != 0x548F10u) { return; }
    }
    ctx->pc = 0x548F10u;
label_548f10:
    // 0x548f10: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x548f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x548f14: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x548f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x548f18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x548f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x548f1c: 0x500019  multu       $v0, $s0
    ctx->pc = 0x548f1cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x548f20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x548f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x548f24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x548f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548f28: 0x0  nop
    ctx->pc = 0x548f28u;
    // NOP
    // 0x548f2c: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x548f2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x548f30: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x548f30u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
    // 0x548f34: 0x1810  mfhi        $v1
    ctx->pc = 0x548f34u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x548f38: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x548f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x548f3c: 0x328c2  srl         $a1, $v1, 3
    ctx->pc = 0x548f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x548f40: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x548f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
    // 0x548f44: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x548f44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x548f48: 0x24a30019  addiu       $v1, $a1, 0x19
    ctx->pc = 0x548f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 25));
    // 0x548f4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x548f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x548f50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x548f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x548f54: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x548f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x548f58: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x548f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x548f5c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x548f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x548f60: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x548f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x548f64: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x548f64u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x548f68: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x548F68u;
    {
        const bool branch_taken_0x548f68 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x548F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548F68u;
            // 0x548f6c: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x548f68) {
            ctx->pc = 0x548F7Cu;
            goto label_548f7c;
        }
    }
    ctx->pc = 0x548F70u;
    // 0x548f70: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x548f70u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548f74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x548F74u;
    {
        const bool branch_taken_0x548f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548F74u;
            // 0x548f78: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548f74) {
            ctx->pc = 0x548F98u;
            goto label_548f98;
        }
    }
    ctx->pc = 0x548F7Cu;
label_548f7c:
    // 0x548f7c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x548f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x548f80: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x548f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x548f84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548f88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548f8c: 0x0  nop
    ctx->pc = 0x548f8cu;
    // NOP
    // 0x548f90: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x548f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x548f94: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x548f94u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_548f98:
    // 0x548f98: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x548F98u;
    {
        const bool branch_taken_0x548f98 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x548f98) {
            ctx->pc = 0x548F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x548F98u;
            // 0x548f9c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x548FACu;
            goto label_548fac;
        }
    }
    ctx->pc = 0x548FA0u;
    // 0x548fa0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x548fa0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548fa4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x548FA4u;
    {
        const bool branch_taken_0x548fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548FA4u;
            // 0x548fa8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548fa4) {
            ctx->pc = 0x548FC4u;
            goto label_548fc4;
        }
    }
    ctx->pc = 0x548FACu;
label_548fac:
    // 0x548fac: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x548facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x548fb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548fb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548fb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548fb8: 0x0  nop
    ctx->pc = 0x548fb8u;
    // NOP
    // 0x548fbc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x548fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x548fc0: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x548fc0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_548fc4:
    // 0x548fc4: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x548fc4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x548fc8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x548fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x548fcc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x548fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x548fd0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x548fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548fd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x548fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548fd8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x548fd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x548fdc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x548fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x548fe0: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x548FE0u;
    SET_GPR_U32(ctx, 31, 0x548FE8u);
    ctx->pc = 0x548FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x548FE0u;
            // 0x548fe4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548FE8u; }
        if (ctx->pc != 0x548FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548FE8u; }
        if (ctx->pc != 0x548FE8u) { return; }
    }
    ctx->pc = 0x548FE8u;
label_548fe8:
    // 0x548fe8: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x548fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x548fec: 0x26020019  addiu       $v0, $s0, 0x19
    ctx->pc = 0x548fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 25));
    // 0x548ff0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x548ff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x548ff4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x548ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x548ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x548ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548ffc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x548ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x549000: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x549000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
    // 0x549004: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x549004u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x549008: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x549008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x54900c: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x54900cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
    // 0x549010: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x549010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x549014: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x549014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x549018: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x549018u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x54901c: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x54901Cu;
    {
        const bool branch_taken_0x54901c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x549020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54901Cu;
            // 0x549020: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54901c) {
            ctx->pc = 0x549030u;
            goto label_549030;
        }
    }
    ctx->pc = 0x549024u;
    // 0x549024: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x549024u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549028: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x549028u;
    {
        const bool branch_taken_0x549028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54902Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549028u;
            // 0x54902c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549028) {
            ctx->pc = 0x54904Cu;
            goto label_54904c;
        }
    }
    ctx->pc = 0x549030u;
label_549030:
    // 0x549030: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x549030u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x549034: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x549034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x549038: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x54903c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54903cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549040: 0x0  nop
    ctx->pc = 0x549040u;
    // NOP
    // 0x549044: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x549044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x549048: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x549048u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54904c:
    // 0x54904c: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x54904Cu;
    {
        const bool branch_taken_0x54904c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54904c) {
            ctx->pc = 0x549050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54904Cu;
            // 0x549050: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x549060u;
            goto label_549060;
        }
    }
    ctx->pc = 0x549054u;
    // 0x549054: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x549054u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549058: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x549058u;
    {
        const bool branch_taken_0x549058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54905Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549058u;
            // 0x54905c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549058) {
            ctx->pc = 0x549078u;
            goto label_549078;
        }
    }
    ctx->pc = 0x549060u;
label_549060:
    // 0x549060: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x549060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x549064: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x549068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54906c: 0x0  nop
    ctx->pc = 0x54906cu;
    // NOP
    // 0x549070: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x549070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x549074: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x549074u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_549078:
    // 0x549078: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x549078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x54907c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54907cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x549080: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x549080u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x549084: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x549084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x549088: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x549088u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x54908c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54908cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x549090: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x549090u;
    SET_GPR_U32(ctx, 31, 0x549098u);
    ctx->pc = 0x549094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x549090u;
            // 0x549094: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549098u; }
        if (ctx->pc != 0x549098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549098u; }
        if (ctx->pc != 0x549098u) { return; }
    }
    ctx->pc = 0x549098u;
label_549098:
    // 0x549098: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x549098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x54909c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x54909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x5490a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5490a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5490a4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x5490a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x5490a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x5490a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5490ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5490acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5490b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5490b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5490b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5490b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5490b8: 0x3e00008  jr          $ra
    ctx->pc = 0x5490B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5490BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5490B8u;
            // 0x5490bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5490C0u;
}
