#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00536480
// Address: 0x536480 - 0x5364e0
void sub_00536480_0x536480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00536480_0x536480");
#endif

    switch (ctx->pc) {
        case 0x5364c0u: goto label_5364c0;
        default: break;
    }

    ctx->pc = 0x536480u;

    // 0x536480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x536480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x536484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x536484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x536488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x536488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53648c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53648cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x536490: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x536490u;
    {
        const bool branch_taken_0x536490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x536490) {
            ctx->pc = 0x536494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x536490u;
            // 0x536494: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5364C4u;
            goto label_5364c4;
        }
    }
    ctx->pc = 0x536498u;
    // 0x536498: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x536498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53649c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x53649cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x5364a0: 0x24426f10  addiu       $v0, $v0, 0x6F10
    ctx->pc = 0x5364a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28432));
    // 0x5364a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x5364a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x5364a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5364a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x5364ac: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5364acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x5364b0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x5364B0u;
    {
        const bool branch_taken_0x5364b0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x5364B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5364B0u;
            // 0x5364b4: 0xac40b640  sw          $zero, -0x49C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5364b0) {
            ctx->pc = 0x5364C0u;
            goto label_5364c0;
        }
    }
    ctx->pc = 0x5364B8u;
    // 0x5364b8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x5364B8u;
    SET_GPR_U32(ctx, 31, 0x5364C0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5364C0u; }
        if (ctx->pc != 0x5364C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5364C0u; }
        if (ctx->pc != 0x5364C0u) { return; }
    }
    ctx->pc = 0x5364C0u;
label_5364c0:
    // 0x5364c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5364c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5364c4:
    // 0x5364c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5364c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5364c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5364c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5364cc: 0x3e00008  jr          $ra
    ctx->pc = 0x5364CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5364D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5364CCu;
            // 0x5364d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5364D4u;
    // 0x5364d4: 0x0  nop
    ctx->pc = 0x5364d4u;
    // NOP
    // 0x5364d8: 0x0  nop
    ctx->pc = 0x5364d8u;
    // NOP
    // 0x5364dc: 0x0  nop
    ctx->pc = 0x5364dcu;
    // NOP
}
