#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00409970
// Address: 0x409970 - 0x4099e0
void sub_00409970_0x409970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409970_0x409970");
#endif

    switch (ctx->pc) {
        case 0x4099b0u: goto label_4099b0;
        case 0x4099c8u: goto label_4099c8;
        default: break;
    }

    ctx->pc = 0x409970u;

    // 0x409970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x409970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x409974: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x409974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x409978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x409978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40997c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x409980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x409980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409984: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x409984u;
    {
        const bool branch_taken_0x409984 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x409988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409984u;
            // 0x409988: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409984) {
            ctx->pc = 0x4099C8u;
            goto label_4099c8;
        }
    }
    ctx->pc = 0x40998Cu;
    // 0x40998c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x40998Cu;
    {
        const bool branch_taken_0x40998c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x40998c) {
            ctx->pc = 0x409990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40998Cu;
            // 0x409990: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4099B4u;
            goto label_4099b4;
        }
    }
    ctx->pc = 0x409994u;
    // 0x409994: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x409994u;
    {
        const bool branch_taken_0x409994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x409994) {
            ctx->pc = 0x4099B0u;
            goto label_4099b0;
        }
    }
    ctx->pc = 0x40999Cu;
    // 0x40999c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x40999cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4099a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4099A0u;
    {
        const bool branch_taken_0x4099a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4099a0) {
            ctx->pc = 0x4099B0u;
            goto label_4099b0;
        }
    }
    ctx->pc = 0x4099A8u;
    // 0x4099a8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4099A8u;
    SET_GPR_U32(ctx, 31, 0x4099B0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4099B0u; }
        if (ctx->pc != 0x4099B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4099B0u; }
        if (ctx->pc != 0x4099B0u) { return; }
    }
    ctx->pc = 0x4099B0u;
label_4099b0:
    // 0x4099b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4099b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4099b4:
    // 0x4099b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4099b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4099b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4099B8u;
    {
        const bool branch_taken_0x4099b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4099b8) {
            ctx->pc = 0x4099BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4099B8u;
            // 0x4099bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4099CCu;
            goto label_4099cc;
        }
    }
    ctx->pc = 0x4099C0u;
    // 0x4099c0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4099C0u;
    SET_GPR_U32(ctx, 31, 0x4099C8u);
    ctx->pc = 0x4099C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4099C0u;
            // 0x4099c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4099C8u; }
        if (ctx->pc != 0x4099C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4099C8u; }
        if (ctx->pc != 0x4099C8u) { return; }
    }
    ctx->pc = 0x4099C8u;
label_4099c8:
    // 0x4099c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4099c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4099cc:
    // 0x4099cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4099ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4099d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4099d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4099d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4099d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4099d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4099D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4099DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4099D8u;
            // 0x4099dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4099E0u;
}
