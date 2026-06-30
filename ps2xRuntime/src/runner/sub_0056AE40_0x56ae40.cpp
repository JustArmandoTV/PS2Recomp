#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0056AE40
// Address: 0x56ae40 - 0x56ae90
void sub_0056AE40_0x56ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0056AE40_0x56ae40");
#endif

    switch (ctx->pc) {
        case 0x56ae78u: goto label_56ae78;
        default: break;
    }

    ctx->pc = 0x56ae40u;

    // 0x56ae40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x56ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x56ae44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x56ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x56ae48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56ae48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x56ae4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x56ae4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56ae50: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x56AE50u;
    {
        const bool branch_taken_0x56ae50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x56ae50) {
            ctx->pc = 0x56AE54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56AE50u;
            // 0x56ae54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56AE7Cu;
            goto label_56ae7c;
        }
    }
    ctx->pc = 0x56AE58u;
    // 0x56ae58: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x56ae58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x56ae5c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x56ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x56ae60: 0x24638380  addiu       $v1, $v1, -0x7C80
    ctx->pc = 0x56ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935424));
    // 0x56ae64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x56ae64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x56ae68: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x56AE68u;
    {
        const bool branch_taken_0x56ae68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x56AE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AE68u;
            // 0x56ae6c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56ae68) {
            ctx->pc = 0x56AE78u;
            goto label_56ae78;
        }
    }
    ctx->pc = 0x56AE70u;
    // 0x56ae70: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x56AE70u;
    SET_GPR_U32(ctx, 31, 0x56AE78u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AE78u; }
        if (ctx->pc != 0x56AE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AE78u; }
        if (ctx->pc != 0x56AE78u) { return; }
    }
    ctx->pc = 0x56AE78u;
label_56ae78:
    // 0x56ae78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x56ae78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_56ae7c:
    // 0x56ae7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x56ae7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x56ae80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x56ae80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x56ae84: 0x3e00008  jr          $ra
    ctx->pc = 0x56AE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56AE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AE84u;
            // 0x56ae88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56AE8Cu;
    // 0x56ae8c: 0x0  nop
    ctx->pc = 0x56ae8cu;
    // NOP
}
