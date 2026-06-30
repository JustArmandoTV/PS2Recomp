#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00317E50
// Address: 0x317e50 - 0x317fa0
void sub_00317E50_0x317e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317E50_0x317e50");
#endif

    switch (ctx->pc) {
        case 0x317eb8u: goto label_317eb8;
        case 0x317ec0u: goto label_317ec0;
        case 0x317ed4u: goto label_317ed4;
        case 0x317ee0u: goto label_317ee0;
        case 0x317ee8u: goto label_317ee8;
        case 0x317ef8u: goto label_317ef8;
        case 0x317f24u: goto label_317f24;
        case 0x317f34u: goto label_317f34;
        case 0x317f40u: goto label_317f40;
        case 0x317f50u: goto label_317f50;
        case 0x317f5cu: goto label_317f5c;
        case 0x317f70u: goto label_317f70;
        default: break;
    }

    ctx->pc = 0x317e50u;

    // 0x317e50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x317e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x317e54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x317e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x317e58: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x317e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x317e5c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x317e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x317e60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x317e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x317e64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317e68: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x317e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317e6c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x317e6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x317e70: 0x24b002c0  addiu       $s0, $a1, 0x2C0
    ctx->pc = 0x317e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
    // 0x317e74: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x317e74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x317e78: 0x94a20c7e  lhu         $v0, 0xC7E($a1)
    ctx->pc = 0x317e78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 3198)));
    // 0x317e7c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x317e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x317e80: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x317e80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x317e84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x317e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317e88: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x317e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x317e8c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x317e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x317e90: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x317e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x317e94: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x317e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x317e98: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x317e98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x317e9c: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x317e9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x317ea0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x317ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x317ea4: 0xc39821  addu        $s3, $a2, $v1
    ctx->pc = 0x317ea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x317ea8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x317ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x317eac: 0xc29021  addu        $s2, $a2, $v0
    ctx->pc = 0x317eacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x317eb0: 0xc04cc90  jal         func_133240
    ctx->pc = 0x317EB0u;
    SET_GPR_U32(ctx, 31, 0x317EB8u);
    ctx->pc = 0x317EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317EB0u;
            // 0x317eb4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317EB8u; }
        if (ctx->pc != 0x317EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317EB8u; }
        if (ctx->pc != 0x317EB8u) { return; }
    }
    ctx->pc = 0x317EB8u;
label_317eb8:
    // 0x317eb8: 0xc04cc2c  jal         func_1330B0
    ctx->pc = 0x317EB8u;
    SET_GPR_U32(ctx, 31, 0x317EC0u);
    ctx->pc = 0x317EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317EB8u;
            // 0x317ebc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317EC0u; }
        if (ctx->pc != 0x317EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317EC0u; }
        if (ctx->pc != 0x317EC0u) { return; }
    }
    ctx->pc = 0x317EC0u;
label_317ec0:
    // 0x317ec0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x317ec0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x317ec4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x317ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317ec8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x317ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317ecc: 0xc04cc90  jal         func_133240
    ctx->pc = 0x317ECCu;
    SET_GPR_U32(ctx, 31, 0x317ED4u);
    ctx->pc = 0x317ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317ECCu;
            // 0x317ed0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317ED4u; }
        if (ctx->pc != 0x317ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317ED4u; }
        if (ctx->pc != 0x317ED4u) { return; }
    }
    ctx->pc = 0x317ED4u;
label_317ed4:
    // 0x317ed4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x317ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x317ed8: 0xc04cc44  jal         func_133110
    ctx->pc = 0x317ED8u;
    SET_GPR_U32(ctx, 31, 0x317EE0u);
    ctx->pc = 0x317EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317ED8u;
            // 0x317edc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317EE0u; }
        if (ctx->pc != 0x317EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317EE0u; }
        if (ctx->pc != 0x317EE0u) { return; }
    }
    ctx->pc = 0x317EE0u;
label_317ee0:
    // 0x317ee0: 0xc04cc2c  jal         func_1330B0
    ctx->pc = 0x317EE0u;
    SET_GPR_U32(ctx, 31, 0x317EE8u);
    ctx->pc = 0x317EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317EE0u;
            // 0x317ee4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317EE8u; }
        if (ctx->pc != 0x317EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317EE8u; }
        if (ctx->pc != 0x317EE8u) { return; }
    }
    ctx->pc = 0x317EE8u;
label_317ee8:
    // 0x317ee8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x317ee8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x317eec: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x317eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x317ef0: 0xc04cc08  jal         func_133020
    ctx->pc = 0x317EF0u;
    SET_GPR_U32(ctx, 31, 0x317EF8u);
    ctx->pc = 0x317EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317EF0u;
            // 0x317ef4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317EF8u; }
        if (ctx->pc != 0x317EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317EF8u; }
        if (ctx->pc != 0x317EF8u) { return; }
    }
    ctx->pc = 0x317EF8u;
label_317ef8:
    // 0x317ef8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x317ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x317efc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x317efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x317f00: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x317f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x317f04: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x317f04u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x317f08: 0x0  nop
    ctx->pc = 0x317f08u;
    // NOP
    // 0x317f0c: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x317f0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x317f10: 0x46000504  c1          0x504
    ctx->pc = 0x317f10u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x317f14: 0x0  nop
    ctx->pc = 0x317f14u;
    // NOP
    // 0x317f18: 0x0  nop
    ctx->pc = 0x317f18u;
    // NOP
    // 0x317f1c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x317F1Cu;
    SET_GPR_U32(ctx, 31, 0x317F24u);
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F24u; }
        if (ctx->pc != 0x317F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F24u; }
        if (ctx->pc != 0x317F24u) { return; }
    }
    ctx->pc = 0x317F24u;
label_317f24:
    // 0x317f24: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x317f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x317f28: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x317f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x317f2c: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x317F2Cu;
    SET_GPR_U32(ctx, 31, 0x317F34u);
    ctx->pc = 0x317F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317F2Cu;
            // 0x317f30: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F34u; }
        if (ctx->pc != 0x317F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F34u; }
        if (ctx->pc != 0x317F34u) { return; }
    }
    ctx->pc = 0x317F34u;
label_317f34:
    // 0x317f34: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x317f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x317f38: 0xc04cc44  jal         func_133110
    ctx->pc = 0x317F38u;
    SET_GPR_U32(ctx, 31, 0x317F40u);
    ctx->pc = 0x317F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317F38u;
            // 0x317f3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F40u; }
        if (ctx->pc != 0x317F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F40u; }
        if (ctx->pc != 0x317F40u) { return; }
    }
    ctx->pc = 0x317F40u;
label_317f40:
    // 0x317f40: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x317f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x317f44: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x317f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x317f48: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x317F48u;
    SET_GPR_U32(ctx, 31, 0x317F50u);
    ctx->pc = 0x317F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317F48u;
            // 0x317f4c: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F50u; }
        if (ctx->pc != 0x317F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F50u; }
        if (ctx->pc != 0x317F50u) { return; }
    }
    ctx->pc = 0x317F50u;
label_317f50:
    // 0x317f50: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x317f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x317f54: 0xc04cc44  jal         func_133110
    ctx->pc = 0x317F54u;
    SET_GPR_U32(ctx, 31, 0x317F5Cu);
    ctx->pc = 0x317F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317F54u;
            // 0x317f58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F5Cu; }
        if (ctx->pc != 0x317F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F5Cu; }
        if (ctx->pc != 0x317F5Cu) { return; }
    }
    ctx->pc = 0x317F5Cu;
label_317f5c:
    // 0x317f5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x317f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317f60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x317f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317f64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x317f64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x317f68: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x317F68u;
    SET_GPR_U32(ctx, 31, 0x317F70u);
    ctx->pc = 0x317F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317F68u;
            // 0x317f6c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F70u; }
        if (ctx->pc != 0x317F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F70u; }
        if (ctx->pc != 0x317F70u) { return; }
    }
    ctx->pc = 0x317F70u;
label_317f70:
    // 0x317f70: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x317f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x317f74: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x317f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x317f78: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x317f78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x317f7c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x317f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x317f80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x317f80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x317f84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x317f84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x317f88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x317F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317F8Cu;
            // 0x317f90: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x317F94u;
    // 0x317f94: 0x0  nop
    ctx->pc = 0x317f94u;
    // NOP
    // 0x317f98: 0x0  nop
    ctx->pc = 0x317f98u;
    // NOP
    // 0x317f9c: 0x0  nop
    ctx->pc = 0x317f9cu;
    // NOP
}
