#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152EF0
// Address: 0x152ef0 - 0x152f70
void sub_00152EF0_0x152ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152EF0_0x152ef0");
#endif

    switch (ctx->pc) {
        case 0x152f30u: goto label_152f30;
        case 0x152f50u: goto label_152f50;
        default: break;
    }

    ctx->pc = 0x152ef0u;

    // 0x152ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x152ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x152ef4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x152ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x152ef8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x152ef8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x152efc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x152f00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152f04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x152f04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152f0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x152f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f10: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x152f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x152f14: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x152f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x152f18: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x152F18u;
    {
        const bool branch_taken_0x152f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152F18u;
            // 0x152f1c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f18) {
            ctx->pc = 0x152F50u;
            goto label_152f50;
        }
    }
    ctx->pc = 0x152F20u;
    // 0x152f20: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x152f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152f24: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x152f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x152f28: 0xc04d03c  jal         func_1340F0
    ctx->pc = 0x152F28u;
    SET_GPR_U32(ctx, 31, 0x152F30u);
    ctx->pc = 0x152F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152F28u;
            // 0x152f2c: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F30u; }
        if (ctx->pc != 0x152F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F30u; }
        if (ctx->pc != 0x152F30u) { return; }
    }
    ctx->pc = 0x152F30u;
label_152f30:
    // 0x152f30: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x152F30u;
    {
        const bool branch_taken_0x152f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152f30) {
            ctx->pc = 0x152F34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152F30u;
            // 0x152f34: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152F54u;
            goto label_152f54;
        }
    }
    ctx->pc = 0x152F38u;
    // 0x152f38: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x152f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x152f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f48: 0xc0549d4  jal         func_152750
    ctx->pc = 0x152F48u;
    SET_GPR_U32(ctx, 31, 0x152F50u);
    ctx->pc = 0x152F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152F48u;
            // 0x152f4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152750u;
    if (runtime->hasFunction(0x152750u)) {
        auto targetFn = runtime->lookupFunction(0x152750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F50u; }
        if (ctx->pc != 0x152F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152750_0x152750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F50u; }
        if (ctx->pc != 0x152F50u) { return; }
    }
    ctx->pc = 0x152F50u;
label_152f50:
    // 0x152f50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x152f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_152f54:
    // 0x152f54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152f54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152f58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152f5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152f60: 0x3e00008  jr          $ra
    ctx->pc = 0x152F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152F60u;
            // 0x152f64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152F68u;
    // 0x152f68: 0x0  nop
    ctx->pc = 0x152f68u;
    // NOP
    // 0x152f6c: 0x0  nop
    ctx->pc = 0x152f6cu;
    // NOP
}
