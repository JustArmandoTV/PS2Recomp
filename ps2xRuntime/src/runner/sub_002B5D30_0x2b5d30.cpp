#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B5D30
// Address: 0x2b5d30 - 0x2b5db0
void sub_002B5D30_0x2b5d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5D30_0x2b5d30");
#endif

    switch (ctx->pc) {
        case 0x2b5d80u: goto label_2b5d80;
        case 0x2b5d98u: goto label_2b5d98;
        default: break;
    }

    ctx->pc = 0x2b5d30u;

    // 0x2b5d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b5d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b5d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b5d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b5d40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d44: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B5D44u;
    {
        const bool branch_taken_0x2b5d44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5D44u;
            // 0x2b5d48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d44) {
            ctx->pc = 0x2B5D98u;
            goto label_2b5d98;
        }
    }
    ctx->pc = 0x2B5D4Cu;
    // 0x2b5d4c: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2B5D4Cu;
    {
        const bool branch_taken_0x2b5d4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d4c) {
            ctx->pc = 0x2B5D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5D4Cu;
            // 0x2b5d50: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5D84u;
            goto label_2b5d84;
        }
    }
    ctx->pc = 0x2B5D54u;
    // 0x2b5d54: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B5D54u;
    {
        const bool branch_taken_0x2b5d54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d54) {
            ctx->pc = 0x2B5D80u;
            goto label_2b5d80;
        }
    }
    ctx->pc = 0x2B5D5Cu;
    // 0x2b5d5c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5D5Cu;
    {
        const bool branch_taken_0x2b5d5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d5c) {
            ctx->pc = 0x2B5D80u;
            goto label_2b5d80;
        }
    }
    ctx->pc = 0x2B5D64u;
    // 0x2b5d64: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2b5d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b5d68: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5D68u;
    {
        const bool branch_taken_0x2b5d68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d68) {
            ctx->pc = 0x2B5D80u;
            goto label_2b5d80;
        }
    }
    ctx->pc = 0x2B5D70u;
    // 0x2b5d70: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5D70u;
    {
        const bool branch_taken_0x2b5d70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d70) {
            ctx->pc = 0x2B5D80u;
            goto label_2b5d80;
        }
    }
    ctx->pc = 0x2B5D78u;
    // 0x2b5d78: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2B5D78u;
    SET_GPR_U32(ctx, 31, 0x2B5D80u);
    ctx->pc = 0x2B5D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5D78u;
            // 0x2b5d7c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5D80u; }
        if (ctx->pc != 0x2B5D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5D80u; }
        if (ctx->pc != 0x2B5D80u) { return; }
    }
    ctx->pc = 0x2B5D80u;
label_2b5d80:
    // 0x2b5d80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b5d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b5d84:
    // 0x2b5d84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b5d84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b5d88: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5D88u;
    {
        const bool branch_taken_0x2b5d88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b5d88) {
            ctx->pc = 0x2B5D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5D88u;
            // 0x2b5d8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5D9Cu;
            goto label_2b5d9c;
        }
    }
    ctx->pc = 0x2B5D90u;
    // 0x2b5d90: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B5D90u;
    SET_GPR_U32(ctx, 31, 0x2B5D98u);
    ctx->pc = 0x2B5D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5D90u;
            // 0x2b5d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5D98u; }
        if (ctx->pc != 0x2B5D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5D98u; }
        if (ctx->pc != 0x2B5D98u) { return; }
    }
    ctx->pc = 0x2B5D98u;
label_2b5d98:
    // 0x2b5d98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b5d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5d9c:
    // 0x2b5d9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b5d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5da0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5da8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5DA8u;
            // 0x2b5dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5DB0u;
}
