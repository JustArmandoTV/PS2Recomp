#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D8FF0
// Address: 0x2d8ff0 - 0x2d9160
void sub_002D8FF0_0x2d8ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8FF0_0x2d8ff0");
#endif

    switch (ctx->pc) {
        case 0x2d9048u: goto label_2d9048;
        case 0x2d9050u: goto label_2d9050;
        case 0x2d9058u: goto label_2d9058;
        case 0x2d907cu: goto label_2d907c;
        case 0x2d9084u: goto label_2d9084;
        case 0x2d9128u: goto label_2d9128;
        default: break;
    }

    ctx->pc = 0x2d8ff0u;

    // 0x2d8ff0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d8ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d8ff4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d8ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d8ff8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d8ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d8ffc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d8ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d9000: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d9000u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9004: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d9004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d9008: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d9008u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d900c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d900cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d9010: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d9010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9014: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d9014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9018: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2d9018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d901c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d9020: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d9020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9024: 0x2c41ffff  sltiu       $at, $v0, -0x1
    ctx->pc = 0x2d9024u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x2d9028: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D9028u;
    {
        const bool branch_taken_0x2d9028 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D902Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9028u;
            // 0x2d902c: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9028) {
            ctx->pc = 0x2D9050u;
            goto label_2d9050;
        }
    }
    ctx->pc = 0x2D9030u;
    // 0x2d9030: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2d9030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2d9034: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2d9034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2d9038: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2d9038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2d903c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2d903cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d9040: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2D9040u;
    SET_GPR_U32(ctx, 31, 0x2D9048u);
    ctx->pc = 0x2D9044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9040u;
            // 0x2d9044: 0x24a517e0  addiu       $a1, $a1, 0x17E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9048u; }
        if (ctx->pc != 0x2D9048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9048u; }
        if (ctx->pc != 0x2D9048u) { return; }
    }
    ctx->pc = 0x2D9048u;
label_2d9048:
    // 0x2d9048: 0xc04981a  jal         func_126068
    ctx->pc = 0x2D9048u;
    SET_GPR_U32(ctx, 31, 0x2D9050u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9050u; }
        if (ctx->pc != 0x2D9050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9050u; }
        if (ctx->pc != 0x2D9050u) { return; }
    }
    ctx->pc = 0x2D9050u;
label_2d9050:
    // 0x2d9050: 0xc040180  jal         func_100600
    ctx->pc = 0x2D9050u;
    SET_GPR_U32(ctx, 31, 0x2D9058u);
    ctx->pc = 0x2D9054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9050u;
            // 0x2d9054: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9058u; }
        if (ctx->pc != 0x2D9058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9058u; }
        if (ctx->pc != 0x2D9058u) { return; }
    }
    ctx->pc = 0x2D9058u;
label_2d9058:
    // 0x2d9058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d905c: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D905Cu;
    {
        const bool branch_taken_0x2d905c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d905c) {
            ctx->pc = 0x2D9060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D905Cu;
            // 0x2d9060: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D9088u;
            goto label_2d9088;
        }
    }
    ctx->pc = 0x2D9064u;
    // 0x2d9064: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2d9064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2d9068: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2d9068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2d906c: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2d906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2d9070: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2d9070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d9074: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2D9074u;
    SET_GPR_U32(ctx, 31, 0x2D907Cu);
    ctx->pc = 0x2D9078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9074u;
            // 0x2d9078: 0x24a51800  addiu       $a1, $a1, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D907Cu; }
        if (ctx->pc != 0x2D907Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D907Cu; }
        if (ctx->pc != 0x2D907Cu) { return; }
    }
    ctx->pc = 0x2D907Cu;
label_2d907c:
    // 0x2d907c: 0xc04981a  jal         func_126068
    ctx->pc = 0x2D907Cu;
    SET_GPR_U32(ctx, 31, 0x2D9084u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9084u; }
        if (ctx->pc != 0x2D9084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9084u; }
        if (ctx->pc != 0x2D9084u) { return; }
    }
    ctx->pc = 0x2D9084u;
label_2d9084:
    // 0x2d9084: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x2d9084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2d9088:
    // 0x2d9088: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D9088u;
    {
        const bool branch_taken_0x2d9088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9088) {
            ctx->pc = 0x2D908Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9088u;
            // 0x2d908c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D90ECu;
            goto label_2d90ec;
        }
    }
    ctx->pc = 0x2D9090u;
    // 0x2d9090: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x2d9090u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d9094: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2d9094u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d9098: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2d9098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d909c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2d909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d90a0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2d90a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d90a4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2d90a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d90a8: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x2d90a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d90ac: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x2d90acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d90b0: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x2d90b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2d90b4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2d90b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2d90b8: 0xc6230014  lwc1        $f3, 0x14($s1)
    ctx->pc = 0x2d90b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d90bc: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x2d90bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d90c0: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x2d90c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d90c4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2d90c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d90c8: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x2d90c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2d90cc: 0xe4620018  swc1        $f2, 0x18($v1)
    ctx->pc = 0x2d90ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2d90d0: 0xe461001c  swc1        $f1, 0x1C($v1)
    ctx->pc = 0x2d90d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x2d90d4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2d90d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2d90d8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2d90d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d90dc: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2d90dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d90e0: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x2d90e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2d90e4: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2d90e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2d90e8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d90e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2d90ec:
    // 0x2d90ec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d90ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d90f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d90f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d90f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d90f8: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x2d90f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x2d90fc: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D90FCu;
    {
        const bool branch_taken_0x2d90fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D90FCu;
            // 0x2d9100: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90fc) {
            ctx->pc = 0x2D910Cu;
            goto label_2d910c;
        }
    }
    ctx->pc = 0x2D9104u;
    // 0x2d9104: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9104u;
    {
        const bool branch_taken_0x2d9104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9104u;
            // 0x2d9108: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9104) {
            ctx->pc = 0x2D9110u;
            goto label_2d9110;
        }
    }
    ctx->pc = 0x2D910Cu;
label_2d910c:
    // 0x2d910c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x2d910cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_2d9110:
    // 0x2d9110: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2d9110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d9114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d9114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d9118: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2d9118u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2d911c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x2d911cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2d9120: 0xc0583d8  jal         func_160F60
    ctx->pc = 0x2D9120u;
    SET_GPR_U32(ctx, 31, 0x2D9128u);
    ctx->pc = 0x2D9124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9120u;
            // 0x2d9124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160F60u;
    if (runtime->hasFunction(0x160F60u)) {
        auto targetFn = runtime->lookupFunction(0x160F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9128u; }
        if (ctx->pc != 0x2D9128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F60_0x160f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9128u; }
        if (ctx->pc != 0x2D9128u) { return; }
    }
    ctx->pc = 0x2D9128u;
label_2d9128:
    // 0x2d9128: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9128u;
    {
        const bool branch_taken_0x2d9128 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9128) {
            ctx->pc = 0x2D912Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9128u;
            // 0x2d912c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D9138u;
            goto label_2d9138;
        }
    }
    ctx->pc = 0x2D9130u;
    // 0x2d9130: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x2d9130u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
    // 0x2d9134: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d9134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9138:
    // 0x2d9138: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d9138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d913c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d913cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d9140: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d9140u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9144: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d9144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9148: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d9148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d914c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d914cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9154: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9154u;
            // 0x2d9158: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D915Cu;
    // 0x2d915c: 0x0  nop
    ctx->pc = 0x2d915cu;
    // NOP
}
