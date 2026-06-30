#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004209E0
// Address: 0x4209e0 - 0x420a50
void sub_004209E0_0x4209e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004209E0_0x4209e0");
#endif

    switch (ctx->pc) {
        case 0x420a20u: goto label_420a20;
        case 0x420a38u: goto label_420a38;
        default: break;
    }

    ctx->pc = 0x4209e0u;

    // 0x4209e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4209e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4209e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4209e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4209e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4209e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4209ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4209ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4209f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4209f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4209f4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4209F4u;
    {
        const bool branch_taken_0x4209f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4209F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4209F4u;
            // 0x4209f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4209f4) {
            ctx->pc = 0x420A38u;
            goto label_420a38;
        }
    }
    ctx->pc = 0x4209FCu;
    // 0x4209fc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4209FCu;
    {
        const bool branch_taken_0x4209fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4209fc) {
            ctx->pc = 0x420A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4209FCu;
            // 0x420a00: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420A24u;
            goto label_420a24;
        }
    }
    ctx->pc = 0x420A04u;
    // 0x420a04: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x420A04u;
    {
        const bool branch_taken_0x420a04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x420a04) {
            ctx->pc = 0x420A20u;
            goto label_420a20;
        }
    }
    ctx->pc = 0x420A0Cu;
    // 0x420a0c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x420a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x420a10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x420A10u;
    {
        const bool branch_taken_0x420a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x420a10) {
            ctx->pc = 0x420A20u;
            goto label_420a20;
        }
    }
    ctx->pc = 0x420A18u;
    // 0x420a18: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x420A18u;
    SET_GPR_U32(ctx, 31, 0x420A20u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420A20u; }
        if (ctx->pc != 0x420A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420A20u; }
        if (ctx->pc != 0x420A20u) { return; }
    }
    ctx->pc = 0x420A20u;
label_420a20:
    // 0x420a20: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x420a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_420a24:
    // 0x420a24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x420a24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x420a28: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x420A28u;
    {
        const bool branch_taken_0x420a28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x420a28) {
            ctx->pc = 0x420A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420A28u;
            // 0x420a2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420A3Cu;
            goto label_420a3c;
        }
    }
    ctx->pc = 0x420A30u;
    // 0x420a30: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x420A30u;
    SET_GPR_U32(ctx, 31, 0x420A38u);
    ctx->pc = 0x420A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420A30u;
            // 0x420a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420A38u; }
        if (ctx->pc != 0x420A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420A38u; }
        if (ctx->pc != 0x420A38u) { return; }
    }
    ctx->pc = 0x420A38u;
label_420a38:
    // 0x420a38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x420a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_420a3c:
    // 0x420a3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x420a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x420a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x420a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x420a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x420a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x420a48: 0x3e00008  jr          $ra
    ctx->pc = 0x420A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420A48u;
            // 0x420a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x420A50u;
}
