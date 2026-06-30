#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F9880
// Address: 0x3f9880 - 0x3f98f0
void sub_003F9880_0x3f9880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9880_0x3f9880");
#endif

    switch (ctx->pc) {
        case 0x3f98b4u: goto label_3f98b4;
        case 0x3f98c0u: goto label_3f98c0;
        case 0x3f98d8u: goto label_3f98d8;
        default: break;
    }

    ctx->pc = 0x3f9880u;

    // 0x3f9880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f9880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f9884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f9884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f9888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f9888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f988c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f9890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f9890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9894: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F9894u;
    {
        const bool branch_taken_0x3f9894 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9894u;
            // 0x3f9898: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9894) {
            ctx->pc = 0x3F98D8u;
            goto label_3f98d8;
        }
    }
    ctx->pc = 0x3F989Cu;
    // 0x3f989c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f989cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3f98a0: 0x26240028  addiu       $a0, $s1, 0x28
    ctx->pc = 0x3f98a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x3f98a4: 0x2442a3b8  addiu       $v0, $v0, -0x5C48
    ctx->pc = 0x3f98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943672));
    // 0x3f98a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3f98a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3f98ac: 0xc0ab57c  jal         func_2AD5F0
    ctx->pc = 0x3F98ACu;
    SET_GPR_U32(ctx, 31, 0x3F98B4u);
    ctx->pc = 0x3F98B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F98ACu;
            // 0x3f98b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD5F0u;
    if (runtime->hasFunction(0x2AD5F0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F98B4u; }
        if (ctx->pc != 0x3F98B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD5F0_0x2ad5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F98B4u; }
        if (ctx->pc != 0x3F98B4u) { return; }
    }
    ctx->pc = 0x3F98B4u;
label_3f98b4:
    // 0x3f98b4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3f98b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3f98b8: 0xc0ab57c  jal         func_2AD5F0
    ctx->pc = 0x3F98B8u;
    SET_GPR_U32(ctx, 31, 0x3F98C0u);
    ctx->pc = 0x3F98BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F98B8u;
            // 0x3f98bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD5F0u;
    if (runtime->hasFunction(0x2AD5F0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F98C0u; }
        if (ctx->pc != 0x3F98C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD5F0_0x2ad5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F98C0u; }
        if (ctx->pc != 0x3F98C0u) { return; }
    }
    ctx->pc = 0x3F98C0u;
label_3f98c0:
    // 0x3f98c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3f98c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3f98c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f98c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3f98c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F98C8u;
    {
        const bool branch_taken_0x3f98c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f98c8) {
            ctx->pc = 0x3F98CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F98C8u;
            // 0x3f98cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F98DCu;
            goto label_3f98dc;
        }
    }
    ctx->pc = 0x3F98D0u;
    // 0x3f98d0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3F98D0u;
    SET_GPR_U32(ctx, 31, 0x3F98D8u);
    ctx->pc = 0x3F98D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F98D0u;
            // 0x3f98d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F98D8u; }
        if (ctx->pc != 0x3F98D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F98D8u; }
        if (ctx->pc != 0x3F98D8u) { return; }
    }
    ctx->pc = 0x3F98D8u;
label_3f98d8:
    // 0x3f98d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3f98d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f98dc:
    // 0x3f98dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f98dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f98e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f98e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f98e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f98e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f98e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F98E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F98ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F98E8u;
            // 0x3f98ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F98F0u;
}
