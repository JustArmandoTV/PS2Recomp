#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A9080
// Address: 0x4a9080 - 0x4a9160
void sub_004A9080_0x4a9080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9080_0x4a9080");
#endif

    switch (ctx->pc) {
        case 0x4a90d0u: goto label_4a90d0;
        case 0x4a9124u: goto label_4a9124;
        default: break;
    }

    ctx->pc = 0x4a9080u;

    // 0x4a9080: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4a9080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4a9084: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4a9084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4a9088: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4a9088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4a908c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4a908cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4a9090: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a9090u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9094: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a9094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4a9098: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4a9098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a909c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a909cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4a90a0: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x4a90a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x4a90a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a90a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a90a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4a90a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a90ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a90acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4a90b0: 0x24700060  addiu       $s0, $v1, 0x60
    ctx->pc = 0x4a90b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x4a90b4: 0x90630060  lbu         $v1, 0x60($v1)
    ctx->pc = 0x4a90b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x4a90b8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x4a90b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x4a90bc: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4a90bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a90c0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x4A90C0u;
    {
        const bool branch_taken_0x4a90c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A90C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A90C0u;
            // 0x4a90c4: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a90c0) {
            ctx->pc = 0x4A9130u;
            goto label_4a9130;
        }
    }
    ctx->pc = 0x4A90C8u;
    // 0x4a90c8: 0xc040180  jal         func_100600
    ctx->pc = 0x4A90C8u;
    SET_GPR_U32(ctx, 31, 0x4A90D0u);
    ctx->pc = 0x4A90CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A90C8u;
            // 0x4a90cc: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A90D0u; }
        if (ctx->pc != 0x4A90D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A90D0u; }
        if (ctx->pc != 0x4A90D0u) { return; }
    }
    ctx->pc = 0x4A90D0u;
label_4a90d0:
    // 0x4a90d0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A90D0u;
    {
        const bool branch_taken_0x4a90d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a90d0) {
            ctx->pc = 0x4A90D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A90D0u;
            // 0x4a90d4: 0x26840064  addiu       $a0, $s4, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9118u;
            goto label_4a9118;
        }
    }
    ctx->pc = 0x4A90D8u;
    // 0x4a90d8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4a90d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x4a90dc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4a90dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x4a90e0: 0x2484fe50  addiu       $a0, $a0, -0x1B0
    ctx->pc = 0x4a90e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966864));
    // 0x4a90e4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4a90e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4a90e8: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x4a90e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4a90ec: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x4a90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x4a90f0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4a90f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x4a90f4: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x4a90f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x4a90f8: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x4a90f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x4a90fc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4a90fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x4a9100: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4a9100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a9104: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x4a9104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x4a9108: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x4a9108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x4a910c: 0xac530018  sw          $s3, 0x18($v0)
    ctx->pc = 0x4a910cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 19));
    // 0x4a9110: 0xa040001c  sb          $zero, 0x1C($v0)
    ctx->pc = 0x4a9110u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x4a9114: 0x26840064  addiu       $a0, $s4, 0x64
    ctx->pc = 0x4a9114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
label_4a9118:
    // 0x4a9118: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x4a9118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x4a911c: 0xc12a70c  jal         func_4A9C30
    ctx->pc = 0x4A911Cu;
    SET_GPR_U32(ctx, 31, 0x4A9124u);
    ctx->pc = 0x4A9120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A911Cu;
            // 0x4a9120: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C30u;
    if (runtime->hasFunction(0x4A9C30u)) {
        auto targetFn = runtime->lookupFunction(0x4A9C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9124u; }
        if (ctx->pc != 0x4A9124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9C30_0x4a9c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9124u; }
        if (ctx->pc != 0x4A9124u) { return; }
    }
    ctx->pc = 0x4A9124u;
label_4a9124:
    // 0x4a9124: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x4a9124u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a9128: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a9128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a912c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x4a912cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_4a9130:
    // 0x4a9130: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4a9130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a9134: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a9134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4a9138: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4a9138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a913c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4a913cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a9140: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a9140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a9144: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a9144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a9148: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a9148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a914c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A914Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A914Cu;
            // 0x4a9150: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A9154u;
    // 0x4a9154: 0x0  nop
    ctx->pc = 0x4a9154u;
    // NOP
    // 0x4a9158: 0x0  nop
    ctx->pc = 0x4a9158u;
    // NOP
    // 0x4a915c: 0x0  nop
    ctx->pc = 0x4a915cu;
    // NOP
}
