#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B6360
// Address: 0x4b6360 - 0x4b63c0
void sub_004B6360_0x4b6360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B6360_0x4b6360");
#endif

    switch (ctx->pc) {
        case 0x4b63a0u: goto label_4b63a0;
        default: break;
    }

    ctx->pc = 0x4b6360u;

    // 0x4b6360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b6360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b6364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b6364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b6368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b6368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b636c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b636cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6370: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4B6370u;
    {
        const bool branch_taken_0x4b6370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6370) {
            ctx->pc = 0x4B6374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6370u;
            // 0x4b6374: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B63A4u;
            goto label_4b63a4;
        }
    }
    ctx->pc = 0x4B6378u;
    // 0x4b6378: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b6378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b637c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4b637cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4b6380: 0x24420b70  addiu       $v0, $v0, 0xB70
    ctx->pc = 0x4b6380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2928));
    // 0x4b6384: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4b6384u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4b6388: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b6388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b638c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4b638cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4b6390: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B6390u;
    {
        const bool branch_taken_0x4b6390 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4B6394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6390u;
            // 0x4b6394: 0xac40a9a8  sw          $zero, -0x5658($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6390) {
            ctx->pc = 0x4B63A0u;
            goto label_4b63a0;
        }
    }
    ctx->pc = 0x4B6398u;
    // 0x4b6398: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4B6398u;
    SET_GPR_U32(ctx, 31, 0x4B63A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B63A0u; }
        if (ctx->pc != 0x4B63A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B63A0u; }
        if (ctx->pc != 0x4B63A0u) { return; }
    }
    ctx->pc = 0x4B63A0u;
label_4b63a0:
    // 0x4b63a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b63a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b63a4:
    // 0x4b63a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b63a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b63a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b63a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b63ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4B63ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B63B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B63ACu;
            // 0x4b63b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B63B4u;
    // 0x4b63b4: 0x0  nop
    ctx->pc = 0x4b63b4u;
    // NOP
    // 0x4b63b8: 0x0  nop
    ctx->pc = 0x4b63b8u;
    // NOP
    // 0x4b63bc: 0x0  nop
    ctx->pc = 0x4b63bcu;
    // NOP
}
