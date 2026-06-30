#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152F70
// Address: 0x152f70 - 0x153000
void sub_00152F70_0x152f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152F70_0x152f70");
#endif

    switch (ctx->pc) {
        case 0x152fb8u: goto label_152fb8;
        case 0x152fd8u: goto label_152fd8;
        default: break;
    }

    ctx->pc = 0x152f70u;

    // 0x152f70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x152f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x152f74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x152f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x152f78: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x152f78u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x152f7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x152f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x152f80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x152f84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x152f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152f8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x152f8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152f94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x152f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f98: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x152f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x152f9c: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x152f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x152fa0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x152FA0u;
    {
        const bool branch_taken_0x152fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152FA0u;
            // 0x152fa4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152fa0) {
            ctx->pc = 0x152FD8u;
            goto label_152fd8;
        }
    }
    ctx->pc = 0x152FA8u;
    // 0x152fa8: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x152fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152fac: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x152facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x152fb0: 0xc04d03c  jal         func_1340F0
    ctx->pc = 0x152FB0u;
    SET_GPR_U32(ctx, 31, 0x152FB8u);
    ctx->pc = 0x152FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152FB0u;
            // 0x152fb4: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152FB8u; }
        if (ctx->pc != 0x152FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152FB8u; }
        if (ctx->pc != 0x152FB8u) { return; }
    }
    ctx->pc = 0x152FB8u;
label_152fb8:
    // 0x152fb8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x152FB8u;
    {
        const bool branch_taken_0x152fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152fb8) {
            ctx->pc = 0x152FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152FB8u;
            // 0x152fbc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152FDCu;
            goto label_152fdc;
        }
    }
    ctx->pc = 0x152FC0u;
    // 0x152fc0: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x152fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152fc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x152fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x152fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fcc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x152fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fd0: 0xc0549d4  jal         func_152750
    ctx->pc = 0x152FD0u;
    SET_GPR_U32(ctx, 31, 0x152FD8u);
    ctx->pc = 0x152FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152FD0u;
            // 0x152fd4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152750u;
    if (runtime->hasFunction(0x152750u)) {
        auto targetFn = runtime->lookupFunction(0x152750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152FD8u; }
        if (ctx->pc != 0x152FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152750_0x152750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152FD8u; }
        if (ctx->pc != 0x152FD8u) { return; }
    }
    ctx->pc = 0x152FD8u;
label_152fd8:
    // 0x152fd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x152fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_152fdc:
    // 0x152fdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x152fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152fe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152fec: 0x3e00008  jr          $ra
    ctx->pc = 0x152FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152FECu;
            // 0x152ff0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152FF4u;
    // 0x152ff4: 0x0  nop
    ctx->pc = 0x152ff4u;
    // NOP
    // 0x152ff8: 0x0  nop
    ctx->pc = 0x152ff8u;
    // NOP
    // 0x152ffc: 0x0  nop
    ctx->pc = 0x152ffcu;
    // NOP
}
