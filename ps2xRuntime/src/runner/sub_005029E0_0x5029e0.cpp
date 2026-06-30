#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005029E0
// Address: 0x5029e0 - 0x502a40
void sub_005029E0_0x5029e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005029E0_0x5029e0");
#endif

    switch (ctx->pc) {
        case 0x502a20u: goto label_502a20;
        default: break;
    }

    ctx->pc = 0x5029e0u;

    // 0x5029e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5029e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5029e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5029e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5029e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5029e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5029ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5029ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5029f0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x5029F0u;
    {
        const bool branch_taken_0x5029f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5029f0) {
            ctx->pc = 0x5029F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5029F0u;
            // 0x5029f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502A24u;
            goto label_502a24;
        }
    }
    ctx->pc = 0x5029F8u;
    // 0x5029f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5029f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5029fc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x5029fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x502a00: 0x244249d8  addiu       $v0, $v0, 0x49D8
    ctx->pc = 0x502a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18904));
    // 0x502a04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x502a04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x502a08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x502a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x502a0c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x502a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x502a10: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x502A10u;
    {
        const bool branch_taken_0x502a10 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x502A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502A10u;
            // 0x502a14: 0xac40aae8  sw          $zero, -0x5518($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502a10) {
            ctx->pc = 0x502A20u;
            goto label_502a20;
        }
    }
    ctx->pc = 0x502A18u;
    // 0x502a18: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x502A18u;
    SET_GPR_U32(ctx, 31, 0x502A20u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502A20u; }
        if (ctx->pc != 0x502A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502A20u; }
        if (ctx->pc != 0x502A20u) { return; }
    }
    ctx->pc = 0x502A20u;
label_502a20:
    // 0x502a20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x502a20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_502a24:
    // 0x502a24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x502a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x502a28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x502a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x502a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x502A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x502A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502A2Cu;
            // 0x502a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x502A34u;
    // 0x502a34: 0x0  nop
    ctx->pc = 0x502a34u;
    // NOP
    // 0x502a38: 0x0  nop
    ctx->pc = 0x502a38u;
    // NOP
    // 0x502a3c: 0x0  nop
    ctx->pc = 0x502a3cu;
    // NOP
}
