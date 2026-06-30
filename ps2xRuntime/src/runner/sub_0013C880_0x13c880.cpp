#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013C880
// Address: 0x13c880 - 0x13c9b0
void sub_0013C880_0x13c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C880_0x13c880");
#endif

    switch (ctx->pc) {
        case 0x13c8dcu: goto label_13c8dc;
        case 0x13c8f0u: goto label_13c8f0;
        case 0x13c918u: goto label_13c918;
        case 0x13c92cu: goto label_13c92c;
        case 0x13c96cu: goto label_13c96c;
        case 0x13c98cu: goto label_13c98c;
        default: break;
    }

    ctx->pc = 0x13c880u;

    // 0x13c880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c884: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13c884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13c888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c88c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13c88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13c890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c894: 0x8c6654c4  lw          $a2, 0x54C4($v1)
    ctx->pc = 0x13c894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21700)));
    // 0x13c898: 0x10c5002a  beq         $a2, $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x13C898u;
    {
        const bool branch_taken_0x13c898 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x13c898) {
            ctx->pc = 0x13C944u;
            goto label_13c944;
        }
    }
    ctx->pc = 0x13C8A0u;
    // 0x13c8a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c8a4: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C8A4u;
    {
        const bool branch_taken_0x13c8a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13c8a4) {
            ctx->pc = 0x13C8B4u;
            goto label_13c8b4;
        }
    }
    ctx->pc = 0x13C8ACu;
    // 0x13c8ac: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x13C8ACu;
    {
        const bool branch_taken_0x13c8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C8ACu;
            // 0x13c8b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c8ac) {
            ctx->pc = 0x13C99Cu;
            goto label_13c99c;
        }
    }
    ctx->pc = 0x13C8B4u;
label_13c8b4:
    // 0x13c8b4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13C8B4u;
    {
        const bool branch_taken_0x13c8b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c8b4) {
            ctx->pc = 0x13C8F8u;
            goto label_13c8f8;
        }
    }
    ctx->pc = 0x13C8BCu;
    // 0x13c8bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c8c0: 0x8c5054a4  lw          $s0, 0x54A4($v0)
    ctx->pc = 0x13c8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21668)));
    // 0x13c8c4: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x13c8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13c8c8: 0xc60d0020  lwc1        $f13, 0x20($s0)
    ctx->pc = 0x13c8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13c8cc: 0xc60e0024  lwc1        $f14, 0x24($s0)
    ctx->pc = 0x13c8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x13c8d0: 0xc60f0028  lwc1        $f15, 0x28($s0)
    ctx->pc = 0x13c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x13c8d4: 0xc057208  jal         func_15C820
    ctx->pc = 0x13C8D4u;
    SET_GPR_U32(ctx, 31, 0x13C8DCu);
    ctx->pc = 0x13C8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C8D4u;
            // 0x13c8d8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C8DCu; }
        if (ctx->pc != 0x13C8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C8DCu; }
        if (ctx->pc != 0x13C8DCu) { return; }
    }
    ctx->pc = 0x13C8DCu;
label_13c8dc:
    // 0x13c8dc: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x13c8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13c8e0: 0xc60d0034  lwc1        $f13, 0x34($s0)
    ctx->pc = 0x13c8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13c8e4: 0xc60e0038  lwc1        $f14, 0x38($s0)
    ctx->pc = 0x13c8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x13c8e8: 0xc057214  jal         func_15C850
    ctx->pc = 0x13C8E8u;
    SET_GPR_U32(ctx, 31, 0x13C8F0u);
    ctx->pc = 0x13C8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C8E8u;
            // 0x13c8ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C850u;
    if (runtime->hasFunction(0x15C850u)) {
        auto targetFn = runtime->lookupFunction(0x15C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C8F0u; }
        if (ctx->pc != 0x13C8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C850_0x15c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C8F0u; }
        if (ctx->pc != 0x13C8F0u) { return; }
    }
    ctx->pc = 0x13C8F0u;
label_13c8f0:
    // 0x13c8f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13C8F0u;
    {
        const bool branch_taken_0x13c8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C8F0u;
            // 0x13c8f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c8f0) {
            ctx->pc = 0x13C930u;
            goto label_13c930;
        }
    }
    ctx->pc = 0x13C8F8u;
label_13c8f8:
    // 0x13c8f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c8fc: 0x8c50547c  lw          $s0, 0x547C($v0)
    ctx->pc = 0x13c8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21628)));
    // 0x13c900: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x13c900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x13c904: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x13c904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13c908: 0xc60d0020  lwc1        $f13, 0x20($s0)
    ctx->pc = 0x13c908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13c90c: 0xc60e0024  lwc1        $f14, 0x24($s0)
    ctx->pc = 0x13c90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x13c910: 0xc057208  jal         func_15C820
    ctx->pc = 0x13C910u;
    SET_GPR_U32(ctx, 31, 0x13C918u);
    ctx->pc = 0x13C914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C910u;
            // 0x13c914: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C918u; }
        if (ctx->pc != 0x13C918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C918u; }
        if (ctx->pc != 0x13C918u) { return; }
    }
    ctx->pc = 0x13C918u;
label_13c918:
    // 0x13c918: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x13c918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13c91c: 0xc60d0034  lwc1        $f13, 0x34($s0)
    ctx->pc = 0x13c91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13c920: 0xc60e0038  lwc1        $f14, 0x38($s0)
    ctx->pc = 0x13c920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x13c924: 0xc057214  jal         func_15C850
    ctx->pc = 0x13C924u;
    SET_GPR_U32(ctx, 31, 0x13C92Cu);
    ctx->pc = 0x13C928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C924u;
            // 0x13c928: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C850u;
    if (runtime->hasFunction(0x15C850u)) {
        auto targetFn = runtime->lookupFunction(0x15C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C92Cu; }
        if (ctx->pc != 0x13C92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C850_0x15c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C92Cu; }
        if (ctx->pc != 0x13C92Cu) { return; }
    }
    ctx->pc = 0x13C92Cu;
label_13c92c:
    // 0x13c92c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c930:
    // 0x13c930: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13c930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13c934: 0xac6454d8  sw          $a0, 0x54D8($v1)
    ctx->pc = 0x13c934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21720), GPR_U32(ctx, 4));
    // 0x13c938: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13c938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13c93c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x13C93Cu;
    {
        const bool branch_taken_0x13c93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C93Cu;
            // 0x13c940: 0xac6454dc  sw          $a0, 0x54DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 21724), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c93c) {
            ctx->pc = 0x13C998u;
            goto label_13c998;
        }
    }
    ctx->pc = 0x13C944u;
label_13c944:
    // 0x13c944: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x13C944u;
    {
        const bool branch_taken_0x13c944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c944) {
            ctx->pc = 0x13C974u;
            goto label_13c974;
        }
    }
    ctx->pc = 0x13C94Cu;
    // 0x13c94c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c950: 0x8c4254a4  lw          $v0, 0x54A4($v0)
    ctx->pc = 0x13c950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21668)));
    // 0x13c954: 0xc44c001c  lwc1        $f12, 0x1C($v0)
    ctx->pc = 0x13c954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13c958: 0xc44d0020  lwc1        $f13, 0x20($v0)
    ctx->pc = 0x13c958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13c95c: 0xc44e0024  lwc1        $f14, 0x24($v0)
    ctx->pc = 0x13c95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x13c960: 0xc44f0028  lwc1        $f15, 0x28($v0)
    ctx->pc = 0x13c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x13c964: 0xc057208  jal         func_15C820
    ctx->pc = 0x13C964u;
    SET_GPR_U32(ctx, 31, 0x13C96Cu);
    ctx->pc = 0x13C968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C964u;
            // 0x13c968: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C96Cu; }
        if (ctx->pc != 0x13C96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C96Cu; }
        if (ctx->pc != 0x13C96Cu) { return; }
    }
    ctx->pc = 0x13C96Cu;
label_13c96c:
    // 0x13c96c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13C96Cu;
    {
        const bool branch_taken_0x13c96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C96Cu;
            // 0x13c970: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c96c) {
            ctx->pc = 0x13C990u;
            goto label_13c990;
        }
    }
    ctx->pc = 0x13C974u;
label_13c974:
    // 0x13c974: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13c974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13c978: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13c978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c97c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x13c97cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x13c980: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x13c980u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x13c984: 0xc057208  jal         func_15C820
    ctx->pc = 0x13C984u;
    SET_GPR_U32(ctx, 31, 0x13C98Cu);
    ctx->pc = 0x13C988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C984u;
            // 0x13c988: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C98Cu; }
        if (ctx->pc != 0x13C98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C98Cu; }
        if (ctx->pc != 0x13C98Cu) { return; }
    }
    ctx->pc = 0x13C98Cu;
label_13c98c:
    // 0x13c98c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13c98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c990:
    // 0x13c990: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13c990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13c994: 0xac6454dc  sw          $a0, 0x54DC($v1)
    ctx->pc = 0x13c994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21724), GPR_U32(ctx, 4));
label_13c998:
    // 0x13c998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c99c:
    // 0x13c99c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c99cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x13C9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C9A0u;
            // 0x13c9a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13C9A8u;
    // 0x13c9a8: 0x0  nop
    ctx->pc = 0x13c9a8u;
    // NOP
    // 0x13c9ac: 0x0  nop
    ctx->pc = 0x13c9acu;
    // NOP
}
