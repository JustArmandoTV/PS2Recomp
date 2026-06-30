#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AA8A0
// Address: 0x2aa8a0 - 0x2aa920
void sub_002AA8A0_0x2aa8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA8A0_0x2aa8a0");
#endif

    switch (ctx->pc) {
        case 0x2aa8f0u: goto label_2aa8f0;
        case 0x2aa908u: goto label_2aa908;
        default: break;
    }

    ctx->pc = 0x2aa8a0u;

    // 0x2aa8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aa8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aa8a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aa8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aa8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aa8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aa8b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa8b4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AA8B4u;
    {
        const bool branch_taken_0x2aa8b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA8B4u;
            // 0x2aa8b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa8b4) {
            ctx->pc = 0x2AA908u;
            goto label_2aa908;
        }
    }
    ctx->pc = 0x2AA8BCu;
    // 0x2aa8bc: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2AA8BCu;
    {
        const bool branch_taken_0x2aa8bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa8bc) {
            ctx->pc = 0x2AA8C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA8BCu;
            // 0x2aa8c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA8F4u;
            goto label_2aa8f4;
        }
    }
    ctx->pc = 0x2AA8C4u;
    // 0x2aa8c4: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2AA8C4u;
    {
        const bool branch_taken_0x2aa8c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa8c4) {
            ctx->pc = 0x2AA8F0u;
            goto label_2aa8f0;
        }
    }
    ctx->pc = 0x2AA8CCu;
    // 0x2aa8cc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA8CCu;
    {
        const bool branch_taken_0x2aa8cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa8cc) {
            ctx->pc = 0x2AA8F0u;
            goto label_2aa8f0;
        }
    }
    ctx->pc = 0x2AA8D4u;
    // 0x2aa8d4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2aa8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2aa8d8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA8D8u;
    {
        const bool branch_taken_0x2aa8d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa8d8) {
            ctx->pc = 0x2AA8F0u;
            goto label_2aa8f0;
        }
    }
    ctx->pc = 0x2AA8E0u;
    // 0x2aa8e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA8E0u;
    {
        const bool branch_taken_0x2aa8e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa8e0) {
            ctx->pc = 0x2AA8F0u;
            goto label_2aa8f0;
        }
    }
    ctx->pc = 0x2AA8E8u;
    // 0x2aa8e8: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2AA8E8u;
    SET_GPR_U32(ctx, 31, 0x2AA8F0u);
    ctx->pc = 0x2AA8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA8E8u;
            // 0x2aa8ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA8F0u; }
        if (ctx->pc != 0x2AA8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA8F0u; }
        if (ctx->pc != 0x2AA8F0u) { return; }
    }
    ctx->pc = 0x2AA8F0u;
label_2aa8f0:
    // 0x2aa8f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2aa8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2aa8f4:
    // 0x2aa8f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2aa8f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2aa8f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA8F8u;
    {
        const bool branch_taken_0x2aa8f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2aa8f8) {
            ctx->pc = 0x2AA8FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA8F8u;
            // 0x2aa8fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA90Cu;
            goto label_2aa90c;
        }
    }
    ctx->pc = 0x2AA900u;
    // 0x2aa900: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2AA900u;
    SET_GPR_U32(ctx, 31, 0x2AA908u);
    ctx->pc = 0x2AA904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA900u;
            // 0x2aa904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA908u; }
        if (ctx->pc != 0x2AA908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA908u; }
        if (ctx->pc != 0x2AA908u) { return; }
    }
    ctx->pc = 0x2AA908u;
label_2aa908:
    // 0x2aa908: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2aa908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa90c:
    // 0x2aa90c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aa90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa918: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA918u;
            // 0x2aa91c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA920u;
}
