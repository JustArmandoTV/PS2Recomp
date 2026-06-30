#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238D40
// Address: 0x238d40 - 0x238e30
void sub_00238D40_0x238d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238D40_0x238d40");
#endif

    switch (ctx->pc) {
        case 0x238d8cu: goto label_238d8c;
        case 0x238dc0u: goto label_238dc0;
        case 0x238dd4u: goto label_238dd4;
        default: break;
    }

    ctx->pc = 0x238d40u;

    // 0x238d40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x238d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x238d44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x238d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x238d48: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x238d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x238d4c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x238d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x238d50: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x238d50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d54: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x238d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x238d58: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x238d58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d5c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x238d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x238d60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x238d60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x238d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x238d68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x238d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x238d6c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x238d6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x238d70: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x238d70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x238d74: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x238d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x238d78: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x238d78u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x238d7c: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x238D7Cu;
    {
        const bool branch_taken_0x238d7c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x238D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238D7Cu;
            // 0x238d80: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d7c) {
            ctx->pc = 0x238DF8u;
            goto label_238df8;
        }
    }
    ctx->pc = 0x238D84u;
    // 0x238d84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x238d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d88: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x238d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_238d8c:
    // 0x238d8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x238d8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x238d90: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x238d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x238d94: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x238d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x238d98: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x238d98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x238d9c: 0x16630004  bne         $s3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x238D9Cu;
    {
        const bool branch_taken_0x238d9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x238DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238D9Cu;
            // 0x238da0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d9c) {
            ctx->pc = 0x238DB0u;
            goto label_238db0;
        }
    }
    ctx->pc = 0x238DA4u;
    // 0x238da4: 0x8ea3005c  lw          $v1, 0x5C($s5)
    ctx->pc = 0x238da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x238da8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x238DA8u;
    {
        const bool branch_taken_0x238da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238DA8u;
            // 0x238dac: 0x2438021  addu        $s0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238da8) {
            ctx->pc = 0x238DB4u;
            goto label_238db4;
        }
    }
    ctx->pc = 0x238DB0u;
label_238db0:
    // 0x238db0: 0x26500200  addiu       $s0, $s2, 0x200
    ctx->pc = 0x238db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_238db4:
    // 0x238db4: 0x250082b  sltu        $at, $s2, $s0
    ctx->pc = 0x238db4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x238db8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x238DB8u;
    {
        const bool branch_taken_0x238db8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x238db8) {
            ctx->pc = 0x238DE8u;
            goto label_238de8;
        }
    }
    ctx->pc = 0x238DC0u;
label_238dc0:
    // 0x238dc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x238dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238dc4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x238dc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x238dc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x238dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238dcc: 0xc092454  jal         func_249150
    ctx->pc = 0x238DCCu;
    SET_GPR_U32(ctx, 31, 0x238DD4u);
    ctx->pc = 0x238DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238DCCu;
            // 0x238dd0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x249150u;
    if (runtime->hasFunction(0x249150u)) {
        auto targetFn = runtime->lookupFunction(0x249150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DD4u; }
        if (ctx->pc != 0x238DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249150_0x249150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DD4u; }
        if (ctx->pc != 0x238DD4u) { return; }
    }
    ctx->pc = 0x238DD4u;
label_238dd4:
    // 0x238dd4: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x238dd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x238dd8: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x238dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x238ddc: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x238ddcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x238de0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x238DE0u;
    {
        const bool branch_taken_0x238de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238de0) {
            ctx->pc = 0x238DC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238dc0;
        }
    }
    ctx->pc = 0x238DE8u;
label_238de8:
    // 0x238de8: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x238de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x238dec: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x238decu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x238df0: 0x5460ffe6  bnel        $v1, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x238DF0u;
    {
        const bool branch_taken_0x238df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238df0) {
            ctx->pc = 0x238DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238DF0u;
            // 0x238df4: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238D8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238d8c;
        }
    }
    ctx->pc = 0x238DF8u;
label_238df8:
    // 0x238df8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x238df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x238dfc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x238dfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238e00: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x238e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x238e04: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x238e04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238e08: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x238e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x238e0c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x238e0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238e10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x238e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238e14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x238e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238e18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x238e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x238E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238E1Cu;
            // 0x238e20: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238E24u;
    // 0x238e24: 0x0  nop
    ctx->pc = 0x238e24u;
    // NOP
    // 0x238e28: 0x0  nop
    ctx->pc = 0x238e28u;
    // NOP
    // 0x238e2c: 0x0  nop
    ctx->pc = 0x238e2cu;
    // NOP
}
