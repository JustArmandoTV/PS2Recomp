#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00519E10
// Address: 0x519e10 - 0x519e70
void sub_00519E10_0x519e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00519E10_0x519e10");
#endif

    switch (ctx->pc) {
        case 0x519e50u: goto label_519e50;
        default: break;
    }

    ctx->pc = 0x519e10u;

    // 0x519e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x519e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x519e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x519e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x519e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x519e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x519e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x519e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x519e20: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x519E20u;
    {
        const bool branch_taken_0x519e20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x519e20) {
            ctx->pc = 0x519E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x519E20u;
            // 0x519e24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x519E54u;
            goto label_519e54;
        }
    }
    ctx->pc = 0x519E28u;
    // 0x519e28: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x519e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x519e2c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x519e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x519e30: 0x24425788  addiu       $v0, $v0, 0x5788
    ctx->pc = 0x519e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22408));
    // 0x519e34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x519e34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x519e38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x519e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x519e3c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x519e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x519e40: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x519E40u;
    {
        const bool branch_taken_0x519e40 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x519E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519E40u;
            // 0x519e44: 0xac40ab10  sw          $zero, -0x54F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519e40) {
            ctx->pc = 0x519E50u;
            goto label_519e50;
        }
    }
    ctx->pc = 0x519E48u;
    // 0x519e48: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x519E48u;
    SET_GPR_U32(ctx, 31, 0x519E50u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519E50u; }
        if (ctx->pc != 0x519E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519E50u; }
        if (ctx->pc != 0x519E50u) { return; }
    }
    ctx->pc = 0x519E50u;
label_519e50:
    // 0x519e50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x519e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_519e54:
    // 0x519e54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x519e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x519e58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x519e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x519e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x519E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x519E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519E5Cu;
            // 0x519e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x519E64u;
    // 0x519e64: 0x0  nop
    ctx->pc = 0x519e64u;
    // NOP
    // 0x519e68: 0x0  nop
    ctx->pc = 0x519e68u;
    // NOP
    // 0x519e6c: 0x0  nop
    ctx->pc = 0x519e6cu;
    // NOP
}
