#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A0A0
// Address: 0x13a0a0 - 0x13a220
void sub_0013A0A0_0x13a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A0A0_0x13a0a0");
#endif

    switch (ctx->pc) {
        case 0x13a0bcu: goto label_13a0bc;
        case 0x13a158u: goto label_13a158;
        case 0x13a16cu: goto label_13a16c;
        case 0x13a180u: goto label_13a180;
        case 0x13a194u: goto label_13a194;
        case 0x13a1a0u: goto label_13a1a0;
        case 0x13a1ecu: goto label_13a1ec;
        case 0x13a1f4u: goto label_13a1f4;
        case 0x13a204u: goto label_13a204;
        default: break;
    }

    ctx->pc = 0x13a0a0u;

    // 0x13a0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13a0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13a0a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13a0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13a0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13a0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13a0ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a0b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13a0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a0b4: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x13a0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x13a0b8: 0x26104fd0  addiu       $s0, $s0, 0x4FD0
    ctx->pc = 0x13a0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20432));
label_13a0bc:
    // 0x13a0bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x13a0c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a0c4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x13a0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x13a0c8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x13a0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x13a0cc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13a0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x13a0d0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x13a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x13a0d4: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x13a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x13a0d8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x13a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x13a0dc: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x13a0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x13a0e0: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x13a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x13a0e4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x13a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x13a0e8: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x13a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x13a0ec: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x13a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x13a0f0: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x13a0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x13a0f4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x13a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x13a0f8: 0xae05002c  sw          $a1, 0x2C($s0)
    ctx->pc = 0x13a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 5));
    // 0x13a0fc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x13a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x13a100: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x13a100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x13a104: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x13a104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x13a108: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x13a108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x13a10c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x13a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x13a110: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x13a110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x13a114: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x13a114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x13a118: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x13a118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x13a11c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x13a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x13a120: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x13a120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x13a124: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x13a124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x13a128: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x13a128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x13a12c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x13a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x13a130: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x13a130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x13a134: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x13a134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x13a138: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x13a138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x13a13c: 0xa6020072  sh          $v0, 0x72($s0)
    ctx->pc = 0x13a13cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 2));
    // 0x13a140: 0xa6000070  sh          $zero, 0x70($s0)
    ctx->pc = 0x13a140u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x13a144: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x13a144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x13a148: 0xae050080  sw          $a1, 0x80($s0)
    ctx->pc = 0x13a148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 5));
    // 0x13a14c: 0xc60c002c  lwc1        $f12, 0x2C($s0)
    ctx->pc = 0x13a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13a150: 0xc04e90c  jal         func_13A430
    ctx->pc = 0x13A150u;
    SET_GPR_U32(ctx, 31, 0x13A158u);
    ctx->pc = 0x13A154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A150u;
            // 0x13a154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A430u;
    if (runtime->hasFunction(0x13A430u)) {
        auto targetFn = runtime->lookupFunction(0x13A430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A158u; }
        if (ctx->pc != 0x13A158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A430_0x13a430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A158u; }
        if (ctx->pc != 0x13A158u) { return; }
    }
    ctx->pc = 0x13A158u;
label_13a158:
    // 0x13a158: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x13a158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13a15c: 0xc60d0020  lwc1        $f13, 0x20($s0)
    ctx->pc = 0x13a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13a160: 0xc60e0024  lwc1        $f14, 0x24($s0)
    ctx->pc = 0x13a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x13a164: 0xc04e8a0  jal         func_13A280
    ctx->pc = 0x13A164u;
    SET_GPR_U32(ctx, 31, 0x13A16Cu);
    ctx->pc = 0x13A168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A164u;
            // 0x13a168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A280u;
    if (runtime->hasFunction(0x13A280u)) {
        auto targetFn = runtime->lookupFunction(0x13A280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A16Cu; }
        if (ctx->pc != 0x13A16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A280_0x13a280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A16Cu; }
        if (ctx->pc != 0x13A16Cu) { return; }
    }
    ctx->pc = 0x13A16Cu;
label_13a16c:
    // 0x13a16c: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x13a16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13a170: 0xc60d0034  lwc1        $f13, 0x34($s0)
    ctx->pc = 0x13a170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13a174: 0xc60e0038  lwc1        $f14, 0x38($s0)
    ctx->pc = 0x13a174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x13a178: 0xc04e8fc  jal         func_13A3F0
    ctx->pc = 0x13A178u;
    SET_GPR_U32(ctx, 31, 0x13A180u);
    ctx->pc = 0x13A17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A178u;
            // 0x13a17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A3F0u;
    if (runtime->hasFunction(0x13A3F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A180u; }
        if (ctx->pc != 0x13A180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A3F0_0x13a3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A180u; }
        if (ctx->pc != 0x13A180u) { return; }
    }
    ctx->pc = 0x13A180u;
label_13a180:
    // 0x13a180: 0xc60c003c  lwc1        $f12, 0x3C($s0)
    ctx->pc = 0x13a180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13a184: 0xc60d0040  lwc1        $f13, 0x40($s0)
    ctx->pc = 0x13a184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13a188: 0xc60e0044  lwc1        $f14, 0x44($s0)
    ctx->pc = 0x13a188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x13a18c: 0xc04e8b8  jal         func_13A2E0
    ctx->pc = 0x13A18Cu;
    SET_GPR_U32(ctx, 31, 0x13A194u);
    ctx->pc = 0x13A190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A18Cu;
            // 0x13a190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A2E0u;
    if (runtime->hasFunction(0x13A2E0u)) {
        auto targetFn = runtime->lookupFunction(0x13A2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A194u; }
        if (ctx->pc != 0x13A194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A2E0_0x13a2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A194u; }
        if (ctx->pc != 0x13A194u) { return; }
    }
    ctx->pc = 0x13A194u;
label_13a194:
    // 0x13a194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13a194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a198: 0xc04e894  jal         func_13A250
    ctx->pc = 0x13A198u;
    SET_GPR_U32(ctx, 31, 0x13A1A0u);
    ctx->pc = 0x13A19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A198u;
            // 0x13a19c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A1A0u; }
        if (ctx->pc != 0x13A1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A1A0u; }
        if (ctx->pc != 0x13A1A0u) { return; }
    }
    ctx->pc = 0x13A1A0u;
label_13a1a0:
    // 0x13a1a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13a1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13a1a4: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x13a1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a1a8: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x13A1A8u;
    {
        const bool branch_taken_0x13a1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A1A8u;
            // 0x13a1ac: 0x26100084  addiu       $s0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a1a8) {
            ctx->pc = 0x13A0BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13a0bc;
        }
    }
    ctx->pc = 0x13A1B0u;
    // 0x13a1b0: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x13a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x13a1b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13a1b8: 0xac4454c8  sw          $a0, 0x54C8($v0)
    ctx->pc = 0x13a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21704), GPR_U32(ctx, 4));
    // 0x13a1bc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x13a1bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13a1c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a1c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13a1c8: 0xac6454cc  sw          $a0, 0x54CC($v1)
    ctx->pc = 0x13a1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21708), GPR_U32(ctx, 4));
    // 0x13a1cc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x13a1ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x13a1d0: 0xac4454d0  sw          $a0, 0x54D0($v0)
    ctx->pc = 0x13a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21712), GPR_U32(ctx, 4));
    // 0x13a1d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13a1d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13a1dc: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x13a1dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x13a1e0: 0xac4354d4  sw          $v1, 0x54D4($v0)
    ctx->pc = 0x13a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21716), GPR_U32(ctx, 3));
    // 0x13a1e4: 0xc057224  jal         func_15C890
    ctx->pc = 0x13A1E4u;
    SET_GPR_U32(ctx, 31, 0x13A1ECu);
    ctx->pc = 0x13A1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A1E4u;
            // 0x13a1e8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C890u;
    if (runtime->hasFunction(0x15C890u)) {
        auto targetFn = runtime->lookupFunction(0x15C890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A1ECu; }
        if (ctx->pc != 0x13A1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C890_0x15c890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A1ECu; }
        if (ctx->pc != 0x13A1ECu) { return; }
    }
    ctx->pc = 0x13A1ECu;
label_13a1ec:
    // 0x13a1ec: 0xc04f01c  jal         func_13C070
    ctx->pc = 0x13A1ECu;
    SET_GPR_U32(ctx, 31, 0x13A1F4u);
    ctx->pc = 0x13C070u;
    if (runtime->hasFunction(0x13C070u)) {
        auto targetFn = runtime->lookupFunction(0x13C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A1F4u; }
        if (ctx->pc != 0x13A1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C070_0x13c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A1F4u; }
        if (ctx->pc != 0x13A1F4u) { return; }
    }
    ctx->pc = 0x13A1F4u;
label_13a1f4:
    // 0x13a1f4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x13a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x13a1f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13a1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a1fc: 0xc057358  jal         func_15CD60
    ctx->pc = 0x13A1FCu;
    SET_GPR_U32(ctx, 31, 0x13A204u);
    ctx->pc = 0x13A200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A1FCu;
            // 0x13a200: 0x24841230  addiu       $a0, $a0, 0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CD60u;
    if (runtime->hasFunction(0x15CD60u)) {
        auto targetFn = runtime->lookupFunction(0x15CD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A204u; }
        if (ctx->pc != 0x13A204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CD60_0x15cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A204u; }
        if (ctx->pc != 0x13A204u) { return; }
    }
    ctx->pc = 0x13A204u;
label_13a204:
    // 0x13a204: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13a204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a20c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a210: 0x3e00008  jr          $ra
    ctx->pc = 0x13A210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A210u;
            // 0x13a214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A218u;
    // 0x13a218: 0x0  nop
    ctx->pc = 0x13a218u;
    // NOP
    // 0x13a21c: 0x0  nop
    ctx->pc = 0x13a21cu;
    // NOP
}
